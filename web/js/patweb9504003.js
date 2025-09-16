//jsVersion  : V11.03.00
//=============================================================================
// Program   : patweb9504003.js
//
// Written   : 22.06.2004  Sylvek Litewka
//
// Function  : Standard Functions Used in template patweb9504003.html
//
//=============================================================================

function AddBed(WardCode) {
  var ptwrd001 = WardCode.replace(/ /g,"+")
  var LinkUrl="patweb95.pbl?reportno=4&template=5&ptwrd001=" + ptwrd001;
  var Left=(document.body.clientWidth-420)/2;
  DFrameLink(LinkUrl,50,Left,420,400);
}

function viewHistory() {
  var wardcode = document.SearchForm.ptwrd001.value.replace(/ /g,"+");
  var LinkUrl="patweb95.pbl?reportno=04&template=008&ptwrd001=" + wardcode;
  var Left=(document.body.clientWidth-380)/2;
  DFrameLink(LinkUrl,50,Left,380,250);
}

function updateWard() {
  if (validateMandatory(UpdateForm)) {
    document.UpdateForm.ptwrd001.value = document.SearchForm.ptwrd001.value;
    var wardcode = document.UpdateForm.ptwrd001.value.replace(/ /g,"+");
    document.UpdateForm.redirect.value = "patweb95.pbl?reportno=4&template=3"
                                         + "&ptwrd001=" + wardcode;
    document.UpdateForm.updttype.value = "U";

    if (document.UpdateForm.fvdaywrd.checked == true)
      document.UpdateForm.ptwrd027.value = 1;
    else
      document.UpdateForm.ptwrd027.value = 0;

    if (document.UpdateForm.updtbeds.value == "1") {
        document.UpdateForm.updtbeds.value="0";
       if (confirm("Click 'OK' to update Beds within Ward"+
                   "\nClick 'Cancel' to update Ward only")) {
          document.UpdateForm.updtbeds.value="1"; }
    }

    document.UpdateForm.submit(); 
  }
}

function chkEffectiveDate() {
  // Check changes in 'No of Beds for Statistics' field.
  var prvpt014 = 0;
  var curpt014 = 0;
  if (!isWhitespace(UpdateForm.savpt014.value)) 
    prvpt014 = parseInt(UpdateForm.savpt014.value,10);
  if (!isWhitespace(UpdateForm.ptwrd014.value)) 
    curpt014 = parseInt(UpdateForm.ptwrd014.value,10);
  if (curpt014 != prvpt014) {
    UpdateForm.efctdate.className="Mandatory";
    return;
  }

  // Check changes in 'Ward Classification' field.
  var index = UpdateForm.ptwrd015.selectedIndex;
  var prvpt015 = UpdateForm.savpt015.value;
  var curpt015 = UpdateForm.ptwrd015.options[index].value.substr(0,3);
  if (curpt015 != prvpt015) {
    UpdateForm.efctdate.className="Mandatory";
    return;
  }

  // Check for changes in Bed Status (Active/Inactive) field
  var prvpt017 = UpdateForm.activflg.value;
  if ((UpdateForm.ptwrd017.checked == true && prvpt017 != 0) ||
      (UpdateForm.ptwrd017.checked == false && prvpt017 != 1)) {
    UpdateForm.efctdate.className="Mandatory";
    return;
  }
  // Check for changes in type of bed for charging
  if(document.getElementById('prev_ptwrd008').value.substr(0,2)!=
     document.getElementById('ptwrd008').value.substr(0,2)){
       UpdateForm.efctdate.className="Mandatory";
       return;
  }
  // None of the above fields have changed - Effective Date is not Mandatory
  UpdateForm.efctdate.className="";
}

function showWardList() {
  location.href="patweb95.pbl?reportno=4&template=1";
}

function displayWard() {
  document.SearchForm.submit();
}

function UpdateBed(WardCode,BedCode) {
  var ptwrd001=WardCode.replace(/ /g,"+");
  var ptwrd002=BedCode.replace(/ /g,"+");
  var LinkUrl="patweb95.pbl?reportno=4&template=6&ptwrd001=" + ptwrd001 +
          "&ptwrd002=" + ptwrd002;
  var Left=(document.body.clientWidth-420)/2;
  DFrameLink(LinkUrl,50,Left,420,450)
}

function BedClosures(WardCode,BedCode) {
  var pmsbc001=WardCode.replace(/ /g,"+");
  var pmsbc002=BedCode.replace(/ /g,"+");
  var LinkUrl="patweb95.pbl?reportno=4&template=9&pmsbc001="+pmsbc001 +
          "&pmsbc002="+pmsbc002 + "&ptwrd001="+pmsbc001 + "&ptwrd002="+
          pmsbc002+"&superflg="+document.SearchForm.superflg.value;
  var Left=(document.body.clientWidth-500)/2;
  DFrameLink(LinkUrl,50,Left,500,360)
}

function DisplayTable(WardType) {
  if (WardType != "1") {       // Not Ward-Only ward - Display Beds
    document.title="Beds";
    InitTable(0);
  }
  document.UpdateForm.ptwrd003.focus();
}
