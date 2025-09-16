//jsVersion  : V11.03.00
//=============================================================================
// Program   : patweb7802.js
//
// Function  : Standard Functions Used in PATWEB78  Report 2
//
//=============================================================================
var ItemNo=100;    // Need this to be 100 as the cgi var has to be 8 chars
var itemcont=0;    // start of coding section counter

// Function AddCons() creates a new blank row for inserting Cross Consultation
// Details (i.e. Date and Hours).
function AddCons() {
  ItemNo++;
  var newRow = "<table width=95% border=1 align=center " +
                 "cellpadding=0 cellspacing=0>" +
                 "<tr><td width=30%>&nbsp;<input type=text " +
                 "size=11 maxlength=12 name=cdate" + ItemNo +
                 " onblur=valDate(this) id=cdate" + ItemNo +
                 " title='Date Seen'>" +
                 "<img notab src='../images/DateTimeStamp.gif' " +
                 "class='Icon' alt='Current' " +
                 "onclick='SetCurrentDateTime(cdate" + ItemNo +
                 ",null)'>" +
                 "<img notab src='../images/DateLookup.gif' " +
                 "class='Icon' alt='Show Calendar' " +
                 "onclick='DateLookupFrame(cdate" + ItemNo + ")'>" +
                 "</td>" +

                 "<td align=center width=20%>" +
                 "<input type=text size=8 " +
                 "name=cthrs" + ItemNo + " id=cthrs" + ItemNo +
                 " min=0.01 max=999.99 " +
                 " onblur='NextRow(cthrs" + ItemNo + ");' " +
                 "title='Hours'>" +
                 "</td>" +

                 "<td width=50%><input type=text size=10 maxlength=9 " +
                 "name=ctser" + ItemNo + " id=ctser" + ItemNo + 
                 " onblur='UpCase(this);" +
                 "validateCode(40,UpdateForm.ctser" + ItemNo +
                 ",UpdateForm.d_ctser" + ItemNo + ")" +
                 "'><input type=text size=15 notab readonly " +
                 "name=d_ctser" + ItemNo + " id=d_ctser" + ItemNo +
                 " class=Readonly> " +
                 "<img src='../images/SearchIcon.gif' class=Icon " +
                 "onclick='DefMiscChargeSearchFrame(UpdateForm.ctser" + ItemNo +
                 ",UpdateForm.d_ctser" + ItemNo + ");'>" +
                 "<img src='../images/erase.gif' align=absmiddle " +
                 "onclick='clrDoc(ctser" + ItemNo +
                 ",d_ctser" + ItemNo + ");'" +
                 "<td></tr>" +
               "</table>";

  NewConsDetails.insertAdjacentHTML('BeforeEnd',newRow);

  // Make first row Mandatory
  if (ItemNo == 101) {
    document.getElementById('cdate101').className = "Mandatory";
    document.getElementById('cthrs101').className = "Mandatory";
  }

  for (var i=itemcont; i < document.UpdateForm.length; i++) {
    if (document.UpdateForm.elements[i].name.match(/cdate/)) {
      if (document.UpdateForm.elements[i].value == "") {
        focusfld = document.UpdateForm.elements[i];
        setTimeout('focusfld.focus();',150);
        itemcont=i;
        break;
      }
    }
  }
}

function AddConsSTV() {
  ItemNo++;
  var newRow = "<table width=95% border=1 align=center " +
                 "cellpadding=0 cellspacing=0>" +
                 "<tr><td width=30%>&nbsp;<input type=text " +
                 "size=11 maxlength=12 name=cdate" + ItemNo +
                 " onblur=valDate(this) id=cdate" + ItemNo +
                 " title='Date Seen'>" +
                 "<img notab src='../images/DateTimeStamp.gif' " +
                 "class='Icon' alt='Current' " +
                 "onclick='SetCurrentDateTime(cdate" + ItemNo +
                 ",null)'>" +
                 "<img notab src='../images/DateLookup.gif' " +
                 "class='Icon' alt='Show Calendar' " +
                 "onclick='DateLookupFrame(cdate" + ItemNo + ")'>" +
                 "</td>" +

                 "<td align=center width=20%><input type=text size=8 " +
                 "name=cthrs" + ItemNo + " id=cthrs" + ItemNo +
                 " min=00.01 max=99.59 " +
                 " onblur='this.value=replaceColon(this.value);" +
                 "if (!isWhitespace(this.value) && checkNumber(this)){ " +
                 " this.value=parseFloat(this.value).toFixed(2);" +
                 " this.value=pad(this.value,5); " +
                 " if (validateHoursandMins(this.value)) {" +
                 " NextRowSTV(cthrs" + ItemNo + "); }" +
                 " else {this.focus();}" +
                 " }' " +
                 "title='Hours'>&nbsp;HH:MM&nbsp;" +
                 "</td>" +

                 "<td width=50%><input type=text size=10 maxlength=9 " +
                 "name=ctser" + ItemNo + " id=ctser" + ItemNo +
                 " onblur='UpCase(this);" +
                 "validateCode(40,UpdateForm.ctser" + ItemNo +
                 ",UpdateForm.d_ctser" + ItemNo + ")" +
                 "'><input type=text size=15 notab readonly " +
                 "name=d_ctser" + ItemNo + " id=d_ctser" + ItemNo +
                 " class=Readonly> " +
                 "<img src='../images/SearchIcon.gif' class=Icon " +
                 "onclick='DefMiscChargeSearchFrame(UpdateForm.ctser" + ItemNo +
                 ",UpdateForm.d_ctser" + ItemNo + ");'>" +
                 "<img src='../images/erase.gif' align=absmiddle " +
                 "onclick='clrDoc(ctser" + ItemNo + ",d_ctser" + ItemNo + ");'"+
                 "<td></tr>" +
               "</table>";

  NewConsDetails.insertAdjacentHTML('BeforeEnd',newRow);

  // Make first row Mandatory
  if (ItemNo == 101) {
    document.getElementById('cdate101').className = "Mandatory";
    document.getElementById('cthrs101').className = "Mandatory";
  }

  for (var i=itemcont; i < document.UpdateForm.length; i++) {
    if (document.UpdateForm.elements[i].name.match(/cdate/)) {
      if (document.UpdateForm.elements[i].value == "") {
        focusfld = document.UpdateForm.elements[i];
        setTimeout('focusfld.focus();',150);
        itemcont=i;
        break;
      }
    }
  }
}

// Function NextRow() determines whether a new row should be created or not.
// The new row is created only if all Date/Hours fields already displayed on
// the screen are populated.
function NextRow(hoursFld) {
  if (!checkNumber(hoursFld))
    return;

  // Check for any empty 'Date' and 'Hours' fields. If an empty field is found
  // do not create next row.
  for (var i=0; i < document.UpdateForm.length; i++) {
    if (document.UpdateForm.elements[i].name.match(/cdate/)) {
      if (document.UpdateForm.elements[i].value == "") 
        return;
    }
    if (document.UpdateForm.elements[i].name.match(/cthrs/)) {
      if (isWhitespace(document.UpdateForm.elements[i].value)) 
        return;
    }
  }

  // Create next row
  AddCons();
}

function NextRowSTV(hoursFld) {
  if (!checkNumber(hoursFld))
    return;

  // Check for any empty 'Date' and 'Hours' fields. If an empty field is found
  // do not create next row.
  for (var i=0; i < document.UpdateForm.length; i++) {
    if (document.UpdateForm.elements[i].name.match(/cdate/)) {
      if (document.UpdateForm.elements[i].value == "")
        return;
    }
    if (document.UpdateForm.elements[i].name.match(/cthrs/)) {
      if (isWhitespace(document.UpdateForm.elements[i].value))
        return;
    }
  }

  // Create next row
  AddConsSTV();
}

// Function valDate() checks whether a given date is valid. This function is 
// called from 'Add' screens.
function valDate(field) {
  // Validate date
  if (isWhitespace(field.value) || !checkDate(field,'Date Seen'))
    return;

  // Check against Admission Date
  var strtdate = document.UpdateForm.strtdate;
  if (!ChkDateTime(strtdate,null,field,null)) {
    alert("Date must be on or after " + strtdate.value);
    field.select();
    return;
  }

  // Check against Discharge/Current  Date 
  var stopdate = document.UpdateForm.stopdate;
  if (!ChkDateTime(field,null,stopdate,null)) {
    alert("Date must be on or before " + stopdate.value);
    field.select();
    return;
  }
}


// Function valDateUpd() validates a given date on the 'Update' screen.
// It is similar to valDate() function. 
function valDateUpd(newDate,origDate) {
  // Validate date
  if (isWhitespace(newDate.value) || !checkDate(newDate,'Date Seen'))
    return;

  // Check against Admission Date
  var strtdate = document.UpdateForm.strtdate;
  if (!ChkDateTime(strtdate,null,newDate,null)) {
    alert("Date must be on or after " + strtdate.value);
    newDate.select();
    return;
  }

  // Check against Discharge/Current  Date 
  var stopdate = document.UpdateForm.stopdate;
  if (!ChkDateTime(newDate,null,stopdate,null)) {
    alert("Date must be on or before " + stopdate.value);
    newDate.select();
    return;
  }
}


// This function uses a remote script to check whether the specified
// consultation details record (i.e Admission no, Reffering Cons, Referred Cons
// and Date) already exists. It returns true if the record does not exist 
// (i.e. specified record is valid) and false otherwise.
function chkExistingRecords(datefld) {
  var ptcrc001 = document.UpdateForm.ptcrc001.value.replace(/ /g,"+");
  var ptcrc002 = document.UpdateForm.ptcrc002.value.replace(/ /g,"+");
  var ptcrc005 = datefld.value.replace(/ /g,"+");
  var admissno = document.UpdateForm.admissno.value.replace(/ /g,"+");
  var serverURL = "../cgi-bin/patweb78.pbl?reportno=3&remoteno=1&ptcrc001=" +
                  ptcrc001 + "&ptcrc002=" + ptcrc002 + "&ptcrc005=" +
                  ptcrc005 + "&admissno=" + admissno;
  var returnValue = RSExecute(serverURL);
  ReturnValue = returnValue.return_value.split("|");
  if (returnValue.status == 0) {     
    if (ReturnValue[0] == 1)       // Record already exists
      return false;                // Return error
  }
  return true;
}


// This function uses remote script to check whether the specified
// combination of Referring/Referred Consultants already exists for given
// Admission number. It return true if the combination does not exist (i.e.
// the specified combination is valid) and false otherwise.
function chkCombination() {
  var ptcrc001 = document.UpdateForm.ptcrc001.value.replace(/ /g,"+");
  var ptcrc002 = document.UpdateForm.ptcrc002.value.replace(/ /g,"+");
  var admissno = document.UpdateForm.admissno.value.replace(/ /g,"+");
  var specialt = "";
  if (document.UpdateForm.ptcrc008) {
    specialt = document.UpdateForm.ptcrc008.value.replace(/ /g,"+").substr(0,3);
  }
  var serverURL = "../cgi-bin/patweb78.pbl?reportno=3&remoteno=2&ptcrc001=" +
                  ptcrc001 + "&ptcrc002=" + ptcrc002 + 
                  "&admissno=" + admissno + "&specialt=" + specialt;
  var returnValue = RSExecute(serverURL);
  ReturnValue = returnValue.return_value.split("|");
  if (returnValue.status == 0) {
    if (ReturnValue[0] == 1)       // Combination already exists
      return false;                // Return error
  }
  return true;
}

 
function UpdateDetails() {
  if (!validateMandatory(UpdateForm))
    return;
  if (!chkFormComplete())
    return;
  EnableSpec();
  document.UpdateForm.submit();
}


// Function chkFormComplete() checks whether the Date/Hours fields have been
// specified. This is to ensure that either both or none of these fields on 
// a single row are populated.
function chkFormComplete() {
  var proForm = document.UpdateForm;
  
  // Find all 'Date Seen' fields in the form
  for (var i=0; i < proForm.length; i++) {
    if (proForm.elements[i].name.match(/cdate/)) {
      var cdateSufix = proForm.elements[i].name.substr(5,3);

      // For 'Date Seen' field found, find a corresponding 'Hours' field
      for (var j=i; j < proForm.length; j++) {
        if (proForm.elements[j].name.match(/cthrs/)) {
          var cthrsSufix = proForm.elements[j].name.substr(5,3);
          if (cdateSufix == cthrsSufix) {     // 'Hours' field found
            var date = proForm.elements[i].value;
            var hours = proForm.elements[j].value;
          
            if ((isWhitespace(date) && !isWhitespace(hours)) ||
               (!isWhitespace(date) && isWhitespace(hours))) {
              alert("Both Date and Hours must be entered");
              if (isWhitespace(date))
                proForm.elements[i].focus();
              else
                proForm.elements[j].focus(); 
              return false;
            }
          }
        }
      }
    }
  }
  return true;
}

function AddCrossCons() {
  if (!validateMandatory(UpdateForm))
    return;
  if (!chkCombination()) {
    alert("Combination Already Exists");
    document.UpdateForm.ptcrc001.focus();
    return;
  }
  if (!chkFormComplete())
    return;
  document.UpdateForm.submit();
}

function setFocus() {
  setTimeout('document.UpdateForm.ptcrc001.focus();',155);
}

function EnableSpec() {
  var spec = document.getElementById('ptcrc008');
  if  (spec) {
    spec.disabled = false;
  }
}

function pad (str, max) {
  str = str.toString();
  return str.length < max ? pad("0" + str, max) : str;
}

function validateHoursandMins(str) {
  str=str.toString();

  if (parseInt(str.substr(3,2)) < 0 || parseInt(str.substr(3,2)) > 59) {
    alert("Minutes must be between 00 - 59");
    return false;
  }

  return true;
}

function replaceColon(time) {
  return time.replace(/:/g,".");
}
