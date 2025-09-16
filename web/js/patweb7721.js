//jsVersion  : V11.03.00
//========================================================================
// Program   : patweb7701.js
// Written   : 20/09/2022
// Function  : Standard Functions Used in patweb7721 templates
//========================================================================
function setFormactn(type) {
  f = document.UpdateForm;
  f.updttype.value = type;

  SetOptionListCode();

  if (type == "U") {
    if (validateMandatory(f)) {
      if (f.cdmap001.value == f.cdmap009.value &&
          f.cdmap002.value == f.cdmap010.value &&
          f.cdmap003.value == f.cdmap011.value &&
          f.cdmap004.value == f.cdmap012.value &&
          f.cdmap005.value == f.cdmap013.value &&
          f.cdmap006.value == f.cdmap014.value &&
          f.cdmap007.value == f.cdmap015.value) {
        alert('No changes have been made. No Update.')
        return;
      }
      f.submit();
    }
  }
  else {
    if (type == "D") {
      if (f.cdmap001.value != f.cdmap009.value ||
          f.cdmap002.value != f.cdmap010.value ||
          f.cdmap003.value != f.cdmap011.value ||
          f.cdmap004.value != f.cdmap012.value ||
          f.cdmap005.value != f.cdmap013.value ||
          f.cdmap006.value != f.cdmap014.value) {
        alert('Key fields have been changed. Cannot delete.')
        return;
      }
      ans=confirm("Are you sure you want to Delete ?")
      if (ans) {
        f.submit()
      }
    }
    else {
      f.submit();
    }
  }
}
function SetOptionListCode() {
  f = document.UpdateForm;
  i = f.d_cdmap001.selectedIndex
  f.cdmap001.value = f.d_cdmap001.options[i].value.substr(0,3)
  i = f.d_cdmap002.selectedIndex
  f.cdmap002.value = f.d_cdmap002.options[i].value.substr(0,3)
  i = f.d_cdmap003.selectedIndex
  f.cdmap003.value = f.d_cdmap003.options[i].value.substr(0,1)
  i = f.d_cdmap004.selectedIndex
  f.cdmap004.value = f.d_cdmap004.options[i].value.substr(0,3)
  i = f.d_cdmap005.selectedIndex
  f.cdmap005.value = f.d_cdmap005.options[i].value.substr(0,3)
  i = f.d_cdmap006.selectedIndex
  f.cdmap006.value = f.d_cdmap006.options[i].value.substr(0,3)
  if (f.d_cdmap007.checked) {
    f.cdmap007.value = " ";
  }
  else {
    f.cdmap007.value = "1";
  }
}
function EnabledUpdateDeleteButton() {
  SetOptionListCode();
  EnabledUpdateButton();
  EnabledDeleteButton();
}
function ChkUpdateChanges() {
  f = document.UpdateForm;
  if (f.cdmap001.value == f.cdmap009.value &&
      f.cdmap002.value == f.cdmap010.value &&
      f.cdmap003.value == f.cdmap011.value &&
      f.cdmap004.value == f.cdmap012.value &&
      f.cdmap005.value == f.cdmap013.value &&
      f.cdmap006.value == f.cdmap014.value &&
      f.cdmap007.value == f.cdmap015.value) {
    return false;
  }
  return true;
}
function ChkDeleteChanges() {
  f = document.UpdateForm;
  if (f.cdmap001.value == f.cdmap009.value &&
      f.cdmap002.value == f.cdmap010.value &&
      f.cdmap003.value == f.cdmap011.value &&
      f.cdmap004.value == f.cdmap012.value &&
      f.cdmap005.value == f.cdmap013.value &&
      f.cdmap006.value == f.cdmap014.value) {
    return true;    
  }
  return false;
}
function EnabledUpdateButton() {
  f = document.UpdateForm;
  if (f.cdmap008.value == "1") {
    f.btnUpdate.disabled = true;
    return 
  }
  if (ChkUpdateChanges()) {
    f.btnUpdate.disabled = false;
  }
  else {
    f.btnUpdate.disabled = true;
  }   
}
function EnabledDeleteButton() {
  f = document.UpdateForm;
  if (f.cdmap008.value == "1") {
    f.btnDelete.disabled = true;
    return 
  }
  if (ChkDeleteChanges()) {
    f.btnDelete.disabled = false;
  }
  else {
    f.btnDelete.disabled = true;
  }
}

