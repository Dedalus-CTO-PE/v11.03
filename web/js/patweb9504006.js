//jsVersion  : V11.03.00
//=============================================================================
// Program   : patweb9504006.js
//
// Written   : 23.06.2004  Sylvek Litewka
//
// Function  : Standard Functions Used in template patweb9504006.html
//
// Version   : V9.03.00  22.06.2004  Sylvek Litewka  CAR 50946
//                       Created js. Moved all javascript functions from 
//                       patweb9504006.html.
//=============================================================================
function viewHistory(ward,bed) {
  LinkUrl="patweb95.pbl?reportno=04&template=007&ptwrd001=" + ward.value + 
          "&ptwrd002=" + bed.value;
  DFrameLink(LinkUrl,50,20,380,250);
}

function UpdateBed() {
  if (validateMandatory(UpdateForm)) {
    document.UpdateForm.updttype.value = "U";
    document.UpdateForm.submit(); 
  }
}

function chkEffectiveDate() {
  // Check changes in 'Type of Room' field.
  var index = UpdateForm.ptwrd007.selectedIndex;
  var prvpt007 = UpdateForm.savpt007.value;
  var curpt007 = UpdateForm.ptwrd007.options[index].value.substr(0,3);
  if (curpt007 != prvpt007) {
    UpdateForm.efctdate.className = "Mandatory";
    return;
  }

  // Check Changes in 'Infection Status' field
  index = UpdateForm.ptwrd031.selectedIndex;
  var prvpt031 = UpdateForm.savpt031.value;
  var curpt031 = UpdateForm.ptwrd031.options[index].value.substr(0,3);
  if (curpt031 != prvpt031) {
    UpdateForm.efctdate.className = "Mandatory";
    return;
  }

  // Check for changes in Bed Status (Active/Inactive) field
  var prvpt017 = UpdateForm.savpt017.value;
  if ((UpdateForm.ptwrd017.checked == true && prvpt017 != 0) ||
      (UpdateForm.ptwrd017.checked == false && prvpt017 != 1)) {
    UpdateForm.efctdate.className = "Mandatory";
    return;
  }
  // None of the above fields have changed - Effective Date is not Mandatory
  UpdateForm.efctdate.className = "";
}

function DeleteBed() {
  if (confirm("Are you sure you want to delete this Bed?"))
    setFormactn('B');
}
