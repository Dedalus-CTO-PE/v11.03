//jsVersion  : V11.03.00
//=============================================================================
// Program   : patweb9505001.js
//
// Written   : 23.06.2004  Sylvek Litewka
//
// Function  : Standard Functions Used in template patweb9505001.html
//
// Version   : V10.04.01 10.06.2014 Sandra Barcham   CAR 301949
//                       Fix error message should be than not them           
//             V10.03.03 23.08.2013  Peter Vela      CAR 288358
//                       Added clear Close From Date/Time, Close To Date/Time
//                       and Reason when no beds are being closed. 
//             V10.03.02 20.08.2013  Peter Vela      CAR 288358
//                       Added Current Date/Time to chkClosurePeriod 
//             V10.03.01 17.14.2013  Patrick Adair   CAR 284047
//                       Only perform ChkDateTime for all/open Selection
//             V10.00.01 10.11.2010  Jill Parkinson  CAR 231816
//                       Added from/to dates in UpdateBeds()
//             V9.11.02  14.10.2008  Ebon Clements   CAR 174077
//                       Added DisplayHoldHCP to CheckFree()
//             V9.11.01  07.10.2008  Ebon Clements   CAR 174076
//                       Added CheckFree()
//             V9.03.00  23.06.2004  Sylvek Litewka  CAR 50946
//                       Created js. Moved all javascript functions from
//                       patweb9505001.html.
//=============================================================================
// Sumbit Search
function PostSearch() {
  if(!validateMandatory(SearchForm)) {
    return;
  }
  document.SearchForm.submit();
}

function UpdateBeds() {
  var frmDate = document.UpdateForm.clsfrdte;
  var frmTime = document.UpdateForm.clsfrtme;
  var toDate = document.UpdateForm.clstodte;
  var toTime = document.UpdateForm.clstotme;
  // "Close To Date and Time" must be greater than "Close From Date and Time".
  if (availind == "1" || availind == "2") {
     if(!ChkDateTime(frmDate,frmTime,toDate,toTime)){
       alert("Close To Date/Time must be greater than Close From Date/Time.");
       return;
     }
  }

  if (validateMandatory(UpdateForm)) {
    if (document.SearchForm.bedavail.value == "1") {     // All Beds List
      document.UpdateForm.updttype.value = "A";
    }
    else if (document.SearchForm.bedavail.value == "2"){ // Open Beds Only List
      document.UpdateForm.updttype.value = "C";
    }
    else if (document.SearchForm.bedavail.value == "3") // Closed Beds Only List
      document.UpdateForm.updttype.value = "O";
    else
      return;

    PostUpdate();
  }
}

// This function toggles all check boxes for Opening Beds (displayed on Closed
// Beds List).
function OpenAll() {
  for (var i=0; i < document.UpdateForm.length; i++) {
    var Item = document.UpdateForm.elements[i];
    var MatchStr = "openbd..";
    if (Item.name.match(MatchStr)){
      if (Item.id=="") {
        if (Item.checked==false)  
          Item.checked=true; 
        else  
          Item.checked=false; 
      } 
    } 
  }
}

// This function toggles all check boxes for Closing Beds (displayed on Open
// Beds List).
function CloseAll() {
  for (var i=0; i < document.UpdateForm.length; i++) {
    var Item = document.UpdateForm.elements[i];
    var MatchStr = "clsebd..";
    if (Item.name.match(MatchStr)){
      if (Item.id=="") {
        if (Item.checked==false)  
          Item.checked=true; 
        else  
          Item.checked=false; 
      } 
    } 
  }
  chkClosurePeriod();
}

function chkClosingBeds() {
  for (var i=0; i < document.UpdateForm.length; i++) {
    var Item = document.UpdateForm.elements[i];
    var MatchStr = "clsebd..";
    if (Item.name.match(MatchStr))
      if (Item.id=="") 
        if (Item.checked==true)  
           return true; 
  }
  return false;
}

function chkClosurePeriod() {
  var frmDate = document.UpdateForm.clsfrdte;
  var frmTime = document.UpdateForm.clsfrtme;
  var toDate = document.UpdateForm.clstodte;
  var toTime = document.UpdateForm.clstotme;
  var reason = document.UpdateForm.clreason;

  if (chkClosingBeds()) {
    frmDate.className = "Mandatory";
    frmTime.className = "Mandatory";
    toDate.className = "Mandatory";
    toTime.className = "Mandatory";
    reason.className = "Mandatory";

    if (isWhitespace(frmDate.value)&&
        isWhitespace(frmTime.value)&&
        isWhitespace(toDate.value)) {
      SetCurrentDateTime(frmDate,frmTime);  
      SetCurrentDateTime(toDate);
    }

  }
  else {
    frmDate.className = "";
    frmTime.className = "";
    toDate.className = "";
    toTime.className = "";
    reason.className = "";
    
    frmDate.value="";
    frmTime.value="";
    toDate.value="";
    toTime.value="";
    reason.selectedIndex=0;
  }
}
    
function PostUpdate() {
  document.UpdateForm.wardcode.value = document.SearchForm.wardcode.value;
  document.UpdateForm.bedavail.value = document.SearchForm.bedavail.value;
  if (document.SearchForm.empbedfl.checked == true)
    document.UpdateForm.empbedfl.value = "1";
  document.UpdateForm.redirect.value = "patweb95.pbl?reportno=5&template=1";
  document.UpdateForm.redirec1.value = 
          "&wardcode=" + document.UpdateForm.wardcode.value.replace(/ /g,"+") +
          "&bedavail=" + document.UpdateForm.bedavail.value.replace(/ /g,"+") +
          "&empbedfl=" + document.UpdateForm.empbedfl.value.replace(/ /g,"+") +
          "&superflg=" + document.UpdateForm.superflg.value.replace(/ /g,"+");
  document.UpdateForm.submit();
}

function RefreshPage() {
  document.SearchForm.submit();
}

function BackToWardList() {
  WardListPath = GetCookieData("WardListPath");
  if (WardListPath != "unknown")
    location.href = WardListPath;
}

function ShowWardListIcon() {
  WardListPath = GetCookieData("WardListPath");
  if (WardListPath == "unknown")
    document.WardListIcon.style.visibility="hidden";
}
function CheckFree() {
 if(document.UpdateForm.clreason.value.substr(4,1)=="F") {
    document.getElementById('FreeFormat').innerHTML=DisplayFreeFormat.innerHTML;
  } else if(document.UpdateForm.clreason.value.substr(3,1)=="H") {
    document.getElementById('FreeFormat').innerHTML=DisplayHoldHCP.innerHTML;
  } else {
    document.getElementById('FreeFormat').innerHTML=NoFreeFormat.innerHTML;
  }
}
