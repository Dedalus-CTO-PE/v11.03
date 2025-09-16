//jsVersion  : V11.03.00
//
//========================================================================
// Return Current Server Date
//========================================================================
function CurrentDate(DateField) {
//  returnValue=RSExecute("RemoteServices.php?action=CurrentDate")
//  DateField.value=returnValue.return_value
  ReturnValue=RSExecute("../cgi-bin/patweb80.pbl?reportno=1") // Get Server Date & Time
  DateField=ReturnValue.return_value.split("|")[0];
}

//========================================================================
// Return Current Server Time
//========================================================================
function CurrentTime(TimeField) {
//  returnValue=RSExecute("RemoteServices.php?action=CurrentTime")
//  TimeField.value=returnValue.return_value
  ReturnValue=RSExecute("../cgi-bin/patweb80.pbl?reportno=1") // Get Server Date & Time
  TimeField=ReturnValue.return_value.split("|")[1];
}
//========================================================================
// Return Select List Options for a Table Columns
//========================================================================
function GetTableColumns(TableID,SelectList) {
  if (isWhitespace(TableID)) { return; }    
  returnValue=RSExecute("RemoteServices.php?action=ColumnSelectOptions&TableID="+TableID)
  if (returnValue.status==0) {
    SelectList.options.length=0
    if (!SelectList.multiple) {
      SelectList.options[SelectList.options.length]=new Option("",""); }
    ReturnOptions=returnValue.return_value.split("|");
    for (var j=0; j < ReturnOptions.length; j++) {
      if (!isWhitespace(ReturnOptions[j])) {
        SelectValue=ReturnOptions[j].split("^");
        SelectList.options[SelectList.options.length]=new Option(SelectValue[1],SelectValue[0]); 
      } 
    } 
  }
}
//========================================================================
// Return Select List Options for a Specific Code Type
//========================================================================
function GetCodeList(CodeType,SelectList) {
  if (isWhitespace(CodeType)) { return; }    
  returnValue=RSExecute("RemoteServices.php?action=CodeSelectOptions&CodeType="+CodeType)
  if (returnValue.status==0) {
    SelectList.options.length=0
    if (!SelectList.multiple) {
      SelectList.options[SelectList.options.length]=new Option("",""); }
    ReturnOptions=returnValue.return_value.split("|");
    for (var j=0; j < ReturnOptions.length; j++) {
      if (!isWhitespace(ReturnOptions[j])) {
        SelectValue=ReturnOptions[j].split("^");
        SelectList.options[SelectList.options.length]=new Option(SelectValue[1],SelectValue[0]); 
      } 
    } 
  }
}
//========================================================================
// Return Combo Checkbox List Options for a Specific Code Type
//========================================================================
function GetCodeCombo(CodeType,ComboBox,FieldName) {
  var el=document.getElementById(ComboBox);
  el.innerHTML="";
  var OS="";
  if (isWhitespace(CodeType)) { return; }    
  returnValue=RSExecute("RemoteServices.php?action=CodeSelectOptions&CodeType="+CodeType)
  if (returnValue.status==0) {
    ReturnOptions=returnValue.return_value.split("|");
    for (var j=0; j < ReturnOptions.length; j++) {
      if (!isWhitespace(ReturnOptions[j])) {
        SelectValue=ReturnOptions[j].split("^");
        OS+= "<input type=checkbox id="+FieldName+" name="+FieldName+"[] value='"+SelectValue[0]+"'>"+SelectValue[1]+"<br>";
      } 
    }
    el.innerHTML=OS; 
  }
}

//========================================================================
// Validate a Code Entered
//========================================================================
function CodeValidation(InputField) {
  if (isWhitespace(InputField.value)) { 
    eval(InputField.FieldCodeID).value="";
    return; }    
  returnValue=RSExecute("RemoteServices.php?action=CodeValidation&CodeType="+
                         InputField.getAttribute(CodeType)+
                         "&CodeValue="+InputField.value)
  if (returnValue.status==0) {
    ReturnOptions=returnValue.return_value.split("|");
    if (ReturnOptions.length < 2) {
      alert(returnValue.return_value + "\nCode Entered = " + InputField.value)
      eval(InputField.FieldCodeID).value="";
      InputField.value=""
      InputField.focus()
    }
    else {
      eval(InputField.FieldCodeID).value=ReturnOptions[0]
      InputField.value=ReturnOptions[1]
    }
  }
}
//========================================================================
// Return Select List Options for a Specific Form Type
//========================================================================
function FormClassSelectOptions(FormType,SelectList) {
  if (isWhitespace(FormType.value)) { return; }    
  returnValue=RSExecute("RemoteServices.php?action=FormClassSelectOptions&FormTypeID="+FormType.value)
  if (returnValue.status==0) {
    SelectList.options.length=0
    SelectList.options[SelectList.options.length]=new Option("","");
    ReturnOptions=returnValue.return_value.split("|");
    for (var j=0; j < ReturnOptions.length; j++) {
      if (!isWhitespace(ReturnOptions[j])) {
        SelectValue=ReturnOptions[j].split("^");
        SelectList.options[SelectList.options.length]=new Option(SelectValue[1],SelectValue[0]); 
      } 
    } 
  }
}
//========================================================================
// Delete Annotations
//========================================================================
function DeleteAnnotation(AnnotationID) {
  if (isWhitespace(AnnotationID)) { return; } 
  DeleteReason=""
  DeleteReason=prompt("Reason for Strike Out","");
  if (DeleteReason == null) return;
  if (isWhitespace(DeleteReason)) {
    alert("A Reason must be entered.")
    return
  }   
  returnValue=RSExecute("RemoteServices.php?action=DeleteAnnotation&AnnotationID="+AnnotationID+
                        "&DeleteReason="+DeleteReason)
  alert(returnValue.return_value)
  location.reload(); 
}
//========================================================================
// Accept Form
//========================================================================
function AcceptForm(FormID,ActionID,AcceptButton) {
  if (confirm('Do you want to Accept the Referral to your Login ?')) { 
    returnValue=RSExecute("RemoteFormProcessing.php&action=FormAcceptance&FormID="+FormID+"&ActionID="+ActionID)
    if (returnValue.return_value!="Ok") {
      alert("Error - " + returnValue.return_value) }
    else {
      alert('Accepted')
      AcceptButton.onclick="alert('Already Accepted')';" 
    }
  }
}
//========================================================================
// Return Select List Options for a Specific Form Type
//========================================================================
function wsReportSelectOptions(wsServer,SelectList) {
  if (isWhitespace(wsServer.value)) { return; }    
  returnValue=RSExecute("RemoteServices.php?action=wsReportSelectOptions&SelectedServer="+wsServer.value)
  if (returnValue.status==0) {
    SelectList.options.length=0
    SelectList.options[SelectList.options.length]=new Option("","");
    ReturnOptions=returnValue.return_value.split("|");
    for (var j=0; j < ReturnOptions.length; j++) {
      if (!isWhitespace(ReturnOptions[j])) {
        SelectValue=ReturnOptions[j].split("^");
        SelectList.options[SelectList.options.length]=new Option(SelectValue[1],SelectValue[0]); 
      } 
    } 
  }
}
//========================================================================
// Return Select List Options for a Specific Form Type
//========================================================================
function wsTemplateSelectOptions(wsServer,wsReport,SelectList) {
  if (isWhitespace(wsServer.value)) { return; }    
  if (isWhitespace(wsReport.value)) { return; }    
  returnValue=RSExecute("RemoteServices.php?action=wsTemplateSelectOptions&SelectedServer="+wsServer.value+"&SelectedReport="+wsReport.value)
  if (returnValue.status==0) {
    SelectList.options.length=0
    SelectList.options[SelectList.options.length]=new Option("","");
    ReturnOptions=returnValue.return_value.split("|");
    for (var j=0; j < ReturnOptions.length; j++) {
      if (!isWhitespace(ReturnOptions[j])) {
        SelectValue=ReturnOptions[j].split("^");
        SelectList.options[SelectList.options.length]=new Option(SelectValue[1],SelectValue[0]); 
      } 
    } 
  }
}
