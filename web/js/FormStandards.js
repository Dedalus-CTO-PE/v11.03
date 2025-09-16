//jsVersion  : V11.03.00
//
//========================================================================
// Script : FormStandards.js
//
// 15.08.2002 B.G.Ackland
//            Added Conditional Required Field Processing.
//            AcField that is Conditionally Required is given a class of "Conditional"
//            and attribute of ConditionalField and ConditionalValues
//            eg class='Conditional' ConditionalField='field1'
//               ConditionalValues='25,36,39'
//               The field will become required if field1 has a value
//               of 26 or or 36 or 39
//
//========================================================================
// Declare Global Variables
//========================================================================
var whitespace = " \t\n\r";
var undefined;
var SubmitButtonPress=false;
var startDate = new Date();
var startTime = startDate.getTime();
var globalDateType = "DD MMM YYYY";
popupCalContainer = '';
monthArray = new Array('January', 'February', 'March', 'April', 'May', 'June','July', 'August', 'September', 'October', 'November', 'December');
var MinDate = new Date();
var MaxDate = new Date();
window.status=""
//------------------------------------------------------------------------
// Body On Load Function should be called on every page in the system
// This can also be used to 
//        --  set timeouts 
//        --  enable remote scripting applet RSProxy.class
//        --  check frames 
//        --  etc
//------------------------------------------------------------------------
function BodyOnLoad() {
  SetupFormEvents(true);
}
function addTime(theDate,day,month,year){
	var iDay;
	var iMonth;
	var iYear;
	if (isWhitespace(theDate.value))
		cDate= new Date();
	else
		cDate = new Date(theDate.value);
	iDay = cDate.getDate(); 
	iMonth = cDate.getMonth();
	iYear = cDate.getYear();
	iDay += day;
	iMonth += month;
	iYear += year;
	cDate.setFullYear(iYear,iMonth,iDay);
	Mth = monthArray[cDate.getMonth()];
	theDate.value = cDate.getDate() + " " + Mth.substring(0,3) + " " + cDate.getFullYear();
}
//------------------------------------------------------------------------
// UpdateForm
//------------------------------------------------------------------------
function UpdateForm(FormID,ActionID) {
  strURL=location.pathname.replace(/display/,"input")+"?FormID="+FormID+"&UpdateOnly=True"
  location.href=strURL
}
//------------------------------------------------------------------------
// HelpForm
//------------------------------------------------------------------------
function HelpForm() {
  strURL=""
  if (HelpForm.arguments.length>0) {
    if (HelpForm.arguments[0]!="") {
      strURL=HelpForm.arguments[0]
    }
  }
  if (strURL!="") {
    window.open(strURL,
    "","dialogHeight:500px;dialogWidth:700px;scroll:no;status:no;help:no")  
  }
  else {
    alert('Help File Not Available for this Form')
  }
}
//------------------------------------------------------------------------
// View Form Details
//------------------------------------------------------------------------
function FormDetails(FormID) {
  strURL=document.getElementsByTagName('base')[0].href+"ShowFormDetails.php?FormID="+FormID
  DFrameLink(strURL,50,150,640,480);
}
//------------------------------------------------------------------------
// Delete Form
//------------------------------------------------------------------------
function DeleteForm(FormID,ActionID) {
  if (!isWhitespace(document.ScriptParameters.dtFinalised.value)) {
    alert("Invalid Action - Deletion only valid for Draft Forms.")
    return
  }
  if (!isWhitespace(document.ScriptParameters.dtAccepted.value)) {
    alert("Invalid Action - Form has been accepted.")
    return
  }
  if (confirm("This will Delete the Form, Click OK to Continue")) { 
     InputForm.ActionID.value=ActionID
     ActionForm(ActionID,11,0,'','');
  }
}
//------------------------------------------------------------------------
// Reject Form
//------------------------------------------------------------------------
function NotifyForm(FormID,ActionID) {
  strURL=document.getElementsByTagName('base')[0].href+"NotifyForm.php?FormID="+FormID+"&ActionID="+ActionID
  DFrameLink(strURL,80,250,480,320);
}
//------------------------------------------------------------------------
// Update Notify Form
//------------------------------------------------------------------------
function UpdateNotify() {
  TeamID=document.getElementById("NotifyTeamID");
  UserID=document.getElementById("NotifyUserID");
  Message=document.getElementById("Message");
  if (isWhitespace(UserID.value)&&isWhitespace(TeamID.value)) {
    alert("User or Team Must Be Entered.");
  } else {
    var theForm=document.InputForm;
    postStr=AJAXString(theForm);
    xmlHttp = createHttpObject();
    xmlHttp.open("POST", "NotifyProcess.php", true);
    xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded;charset=UTF-8");
    xmlHttp.onreadystatechange = function() {
      if (xmlHttp.readyState == 4) {
        if (xmlHttp.status=="200") {
          ReturnStatus=xmlHttp.responseText.split(":")[0]
          if (ReturnStatus=="SAVED") {
            parent.GoFormList();
          } else {
            alert(xmlHttp.responseText);
          }
        } else {
          alert("Web Service Not Available Status:"+xmlHttp.status);
        }
      }
    }
    xmlHttp.send(postStr);
  }
}
//------------------------------------------------------------------------
// Reject Form
//------------------------------------------------------------------------
function RejectForm(FormID,ActionID) {
  strURL=document.getElementsByTagName('base')[0].href+"RejectForm.php?FormID="+FormID+"&ActionID="+ActionID
  DFrameLink(strURL,80,250,480,320);
}
//------------------------------------------------------------------------
// Update Rejection Form
//------------------------------------------------------------------------
function UpdateReject() {
  el=document.getElementById("RejectReason");
  if (el.selectedIndex>0) {
    var theForm=document.InputForm;
    postStr=AJAXString(theForm);
    xmlHttp = createHttpObject();
    xmlHttp.open("POST", "RejectProcess.php", true);
    xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded;charset=UTF-8");
    xmlHttp.onreadystatechange = function() {
      if (xmlHttp.readyState == 4) {
        if (xmlHttp.status=="200") {
          ReturnStatus=xmlHttp.responseText.split(":")[0]
          if (ReturnStatus=="SAVED") {
            parent.GoFormList();
          } else {
            alert(xmlHttp.responseText);
          }
        } else {
          alert("Web Service Not Available Status:"+xmlHttp.status);
        }
      }
    }
    xmlHttp.send(postStr);
  } else {
    alert("Reason Code Must Be Recorded.");
  }
}
//------------------------------------------------------------------------
// Cancel Form
//------------------------------------------------------------------------
function CancelForm(FormID,ActionID) {
  strURL=document.getElementsByTagName('base')[0].href+"CancelForm.php?FormID="+FormID+"&ActionID="+ActionID
  DFrameLink(strURL,80,250,480,320);
}
//------------------------------------------------------------------------
// Update Cancellation Form
//------------------------------------------------------------------------
function UpdateCancel() {
  el=document.getElementById("CancelReason");
  if (el.selectedIndex>0) {
    var theForm=document.InputForm;
    postStr=AJAXString(theForm);
    xmlHttp = createHttpObject();
    xmlHttp.open("POST", "CancelProcess.php", true);
    xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded;charset=UTF-8");
    xmlHttp.onreadystatechange = function() {
      if (xmlHttp.readyState == 4) {
        if (xmlHttp.status=="200") {
          ReturnStatus=xmlHttp.responseText.split(":")[0]
          if (ReturnStatus=="SAVED") {
            parent.GoFormList();
          } else {
            alert(xmlHttp.responseText);
          }
        } else {
          alert("Web Service Not Available Status:"+xmlHttp.status);
        }
      }
    }
    xmlHttp.send(postStr);
  } else {
    alert("Reason Code Must Be Recorded.");
  }
}
//------------------------------------------------------------------------
// Print Form
//------------------------------------------------------------------------
function PrintForm(ActionID) {
  FormID=document.InputForm.FormID.value;
  strURL=document.getElementsByTagName('base')[0].href+"PrintSelect.php?FormID="+FormID+"&ActionID="+ActionID
  DFrameLink(strURL,100,100,480,320);
}
function PrintDocument() {
  FormID=document.InputForm.FormID.value;
  ActionID=document.InputForm.ActionID.value;
  selprint=document.InputForm.selprint.options[document.InputForm.selprint.selectedIndex].value;
  if (isWhitespace(selprint)) {
    alert("Please Select a Printer");
    return;
  }
  nocopies=document.InputForm.nocopies.options[document.InputForm.nocopies.selectedIndex].value;
  ShowSaving(8);
  setTimeout(function () { AJAXPrint(FormID,ActionID,selprint,nocopies) },100);
}
function PrintPreview() {
  ShowSaving(8);
  FormID=document.InputForm.FormID.value;
  ActionID=document.InputForm.ActionID.value;
  setTimeout(function () { AJAXPrint(FormID,ActionID,'','') },100);
}
function AJAXPrint(FormID,ActionID,selprint,nocopies) {
  xmlHttp = createHttpObject();
  theURL="PrintForm.php?FormID="+FormID+"&ActionID="+ActionID;
  if (!isWhitespace(selprint)) theURL+="&selprint="+selprint;
  if (!isWhitespace(nocopies)) theURL+="&nocopies="+nocopies;
  xmlHttp.open("GET", theURL, true);
  xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded;charset=UTF-8");
  xmlHttp.onreadystatechange = function() {
    if (xmlHttp.readyState == 4) {
      if (xmlHttp.status=="200") {
        setTimeout( function() { HideSaving()  },200);	
        ReturnStatus=xmlHttp.responseText.split(":")[0]
        if (ReturnStatus=="COMPLETE") {
          if (!isWhitespace(selprint)) {
            DFrameExit();
            return;
          }
          ReturnPath=xmlHttp.responseText.split(":")[1]+":"+xmlHttp.responseText.split(":")[2];
          NewWindow=window.open(ReturnPath,"NewWindow",
          "width=1024,height=768,resize=yes,top=10,left=10,location=no,menu=yes,toolbar=yes,scrollbars=yes");
        }
        else {
          if (ReturnStatus=="ERROR") {
            alert(xmlHttp.responseText.split(":")[1])
          }
          else {
            alert(xmlHttp.responseText);
          }
        }
      }
      else {
        alert("Web Service Not Available Status:"+xmlHttp.status);
        setTimeout( function() { HideSaving()  },200);	
      }
    }
  }
  xmlHttp.send();
}
//------------------------------------------------------------------------
// Review Form
//------------------------------------------------------------------------
function ReviewForm(FormID,ActionID) {
  strURL=document.getElementsByTagName('base')[0].href+"ReviewForm.php?FormID="+FormID+"&ActionID="+ActionID
  ReviewValues=window.showModalDialog(strURL,
  "","dialogHeight:250px;dialogWidth:400px;scroll:no;status:no;help:no")  
  if (ReviewValues) { 
     InputForm.ActionID.value=ActionID
     FormValue=ReviewValues.split("|")
     InputForm.ReviewDate.value=FormValue[0]
     InputForm.ReviewReason.value=FormValue[1]
     SubmitButtonPress=true
     InputForm.submit() 
     }
}
//------------------------------------------------------------------------
// Action Form
//------------------------------------------------------------------------
function ActionForm(ActionID,ActionType,CheckRequired,ConfirmMessage,ConfirmSecurity) {
  if (!isWhitespace(ConfirmMessage)) {
    if (!confirm(ConfirmMessage)) { return }
  }
//  if (ConfirmSecurity) {
//    if (!ConfirmSecurityForm()) { return }
//  }
  if (CheckRequired) { InputForm.CheckRequired.value=1 }
  else               { InputForm.CheckRequired.value=0 }
  if (ActionType==9) {
    NotifyForm(document.InputForm.FormID.value,ActionID);
    return;
  }
  InputForm.ActionID.value=ActionID;
  InputForm.ActionType.value=ActionType;
  if (ValidateForm(document.InputForm)) { 
     ShowSaving(parseInt(ActionType,10));
     if (InputForm.enctype=="multipart/form-data") {
       document.InputForm.target="PopUpFrame";
       document.InputForm.AJAXPostMethod.value="F";
       setTimeout(function () { InputForm.submit()},100)
     } else {
       setTimeout(function () { AJAXPost(document.InputForm)},100)
     }
   }
}
function AJAXPost(theForm) {
  postStr=AJAXString(theForm);
  xmlHttp = createHttpObject();
  xmlHttp.open("POST", "FormProcess.php", true);
  xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded;charset=UTF-8");
  xmlHttp.onreadystatechange = function() {
    if (xmlHttp.readyState == 4) {
      if (xmlHttp.status=="200") {
        setTimeout( function() { HideSaving()  },200);	
        ReturnStatus=xmlHttp.responseText.split(":")[0]
        if (ReturnStatus=="FORM SAVED") {
          ReturnFormID=xmlHttp.responseText.split(":")[1]
          ReturnNavigateTo=xmlHttp.responseText.split(":")[2]
          NextPage=xmlHttp.responseText.split(":")[3]
          switch (parseInt(ReturnNavigateTo,10)) {
            case 1:
              document.PatientLinks.action=NextPage
              var input = document.createElement("input"); 
              input.setAttribute("type", "hidden"); 
              input.setAttribute("name", "FormID"); 
              input.setAttribute("value", ReturnFormID); 
              document.PatientLinks.appendChild(input); 
              document.PatientLinks.submit();
              return;
              break;
            case 2:
              document.PatientLinks.action=NextPage
              var input = document.createElement("input"); 
              input.setAttribute("type", "hidden"); 
              input.setAttribute("name", "FormID"); 
              input.setAttribute("value", ReturnFormID); 
              document.PatientLinks.appendChild(input); 
              document.PatientLinks.submit();
              return;
              break;
            case 3:
              document.PatientLinks.action="SelectFormClass?FormTypeID="+NextPage+"?ParentFormID="+ReturnFormID;
              DFrameSubmit(document.PatientLinks,50,200,480,320) ;
              return;
              break;
            case 4:
              document.PatientLinks.action=NextPage+"?ParentFormID="+ReturnFormID;
              document.PatientLinks.submit();
              return;
              break;
            default:
              if (location.href.match(/\/ipad/)) {
                top.frames['PatFrame'].refreshScreen();
                top.CloseDocument();
              } else {
	               window.history.back();
              }
              return;
              break;
          }
        }
        else {
          if (ReturnStatus=="ERROR") {
            alert(xmlHttp.responseText.split(":")[1])
          }
          else {
            alert(xmlHttp.responseText);
          }
        }
      }
      else {
        alert("Web Service Not Available Status:"+xmlHttp.status);
        setTimeout( function() { HideSaving()  },200);	
      }
    }
  }
  xmlHttp.send(postStr);
}
function AJAXString(theForm) {
 var form = theForm;
	var qstr = "";
    function GetElemValue(name, value) {
        qstr += (qstr.length > 0 ? "&" : "")
            + escape(name).replace(/\+/g, "%2B") + "="
            + escape(value ? value : "").replace(/\+/g, "%2B");
    }
	var elemArray = form.elements;
    for (var i = 0; i < elemArray.length; i++) {
        var element = elemArray[i];
        var elemType = element.type.toUpperCase();
        var elemName = element.name;
        if (elemName) {
            if (elemType == "TEXT"
                    || elemType == "TEXTAREA"
                    || elemType == "PASSWORD"
					|| elemType == "BUTTON"
					|| elemType == "RESET"
					|| elemType == "SUBMIT"
					|| elemType == "FILE"
					|| elemType == "IMAGE"
                    || elemType == "HIDDEN")
                GetElemValue(elemName, element.value);
            else if (elemType == "CHECKBOX" && element.checked)
                GetElemValue(elemName, 
                    element.value ? element.value : "On");
            else if (elemType == "RADIO" && element.checked)
                GetElemValue(elemName, element.value);
            else if (elemType.indexOf("SELECT") != -1)
                for (var j = 0; j < element.options.length; j++) {
                    var option = element.options[j];
                    if (option.selected)
                        GetElemValue(elemName,
                            option.value ? option.value : option.text);
                }
        }
    }
    return qstr;
}
function ShowSaving(ActionType) {
  var SaveText=document.getElementById("SaveText");
  var SaveDiv=document.getElementById("DisplaySaving");
  SaveDiv.style.top=(document.body.scrollTop+100)+"px";
  SaveDiv.style.left=(document.body.scrollWidth/2-150)+"px";
  switch (ActionType) {
    case 1:
      SaveText.innerHTML="Saving Form Data";
      SaveDiv.style.display="inline-block";break;
    case 2:
      SaveText.innerHTML="Finalise Form Data";
      SaveDiv.style.display="inline-block";break;
    case 5:
      SaveText.innerHTML="Saving Acceptance";
      SaveDiv.style.display="inline-block";break;
    case 6:
      SaveText.innerHTML="Saving Rejection";
      eDiv.style.display="inline-block";break;
    case 7:
      SaveText.innerHTML="Cancel Form";
      SaveDiv.style.display="inline-block";break;
    case 8:
      SaveText.innerHTML="Creating PDF Document";
      SaveDiv.style.display="inline-block";break;
    case 9:
      SaveText.innerHTML="Sending Notification";
      SaveDiv.style.display="inline-block";break;
    case 11:
      SaveText.innerHTML="Deleting Form";
      SaveDiv.style.display="inline-block";break;
    case 12:
      SaveText.innerHTML="Saving Completion";
      SaveDiv.style.display="inline-block";break;
    case 13:
      SaveText.innerHTML="Update Form Data";
      SaveDiv.style.display="inline-block";break;
    case 14:
      SaveText.innerHTML="Saving Review";
      SaveDiv.style.display="inline-block";break;
    case 15:
      SaveText.innerHTML="Open Form";
      SaveDiv.style.display="inline-block";break;
    case 16:
      SaveText.innerHTML="Saving Attachment";
      SaveDiv.style.display="inline-block";break;
  }
}
function HideSaving() {
  var SaveDiv=document.getElementById("DisplaySaving");
  SaveDiv.style.display="none";
}
//------------------------------------------------------------------------
// Confirm User/Password Form
//------------------------------------------------------------------------
function ConfirmSecurityForm(FormID,ActionID) {
  strURL=document.getElementsByTagName('base')[0].href+"ConfirmSecurityForm.php"
  ConfirmOK=window.showModalDialog(strURL,
  "","dialogHeight:150px;dialogWidth:300px;scroll:no;status:no;help:no")  
  if (ConfirmOK="OK") { return true;  }
  else                { return false; } 
}
//------------------------------------------------------------------------
// Update Security Check
//------------------------------------------------------------------------
function CheckSecurity() {
  if (isWhitespace(form1.Username.value)) {
    alert("User Name must be Specified") 
    return false }
  if (isWhitespace(form1.Password.value)) {
    alert("Password must be Specified") 
    return false }
    
  var sUsername=form1.Username.value
  var sPassword=form1.Password.value
  ReturnValue=RSExecute("RemoteServices.php?action=UserValidation",sUsername,sPassword) 
  if (ReturnValue.return_value=="OK") {
    window.returnValue=ReturnValue.return_value
    self.close() }
  alert(ReturnValue.return_value);
  return false
}
//========================================================================
// Expand Collapse
//========================================================================
function ExpandCollapse(theImg,theDiv) {
  Division=document.getElementById(theDiv);
  Image=document.getElementById(theImg);
  if (Division.style.display=="none") {
    Image.className="CollapseIcon"
    Image.src="../images/FormSectionClosed.png"
    Division.style.display="" }
  else {
    Image.className="ExpandIcon"
    Image.src="../images/FormSectionOpened.png"
    Division.style.display="none" }
}
//========================================================================
// Delete Allocation
//========================================================================
function DeleteAllocation(AllocationID) {
  document.AllocationForm.AllocationID.value=AllocationID;
  document.AllocationForm.Method.value='Delete';
  var theForm=document.AllocationForm;
  postStr=AJAXString(theForm);
  xmlHttp = createHttpObject();
  xmlHttp.open("POST", "AllocationProcess.php", true);
  xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded;charset=UTF-8");
  xmlHttp.onreadystatechange = function() {
    if (xmlHttp.readyState == 4) {
      if (xmlHttp.status=="200") {
        ReturnStatus=xmlHttp.responseText.split(":")[0]
        if (ReturnStatus=="SAVED") {
          location.reload();
        } else {
          alert(xmlHttp.responseText);
        }
      } else {
        alert("Web Service Not Available Status:"+xmlHttp.status);
      }
    }
  }
  xmlHttp.send(postStr);
}
//========================================================================
// Complete Allocation
//========================================================================
function CompleteAllocation(AllocationID) {
  document.AllocationForm.AllocationID.value=AllocationID;
  document.AllocationForm.Method.value='Complete';
  var theForm=document.AllocationForm;
  postStr=AJAXString(theForm);
  xmlHttp = createHttpObject();
  xmlHttp.open("POST", "AllocationProcess.php", true);
  xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded;charset=UTF-8");
  xmlHttp.onreadystatechange = function() {
    if (xmlHttp.readyState == 4) {
      if (xmlHttp.status=="200") {
        ReturnStatus=xmlHttp.responseText.split(":")[0]
        if (ReturnStatus=="SAVED") {
          location.reload();
        } else {
          alert(xmlHttp.responseText);
        }
      } else {
        alert("Web Service Not Available Status:"+xmlHttp.status);
      }
    }
  }
  xmlHttp.send(postStr);
}
//========================================================================
// Accept Allocation
//========================================================================
function AcceptAllocation(AllocationID) {
  document.AllocationForm.AllocationID.value=AllocationID;
  document.AllocationForm.Method.value='Accept';
  var theForm=document.AllocationForm;
  postStr=AJAXString(theForm);
  xmlHttp = createHttpObject();
  xmlHttp.open("POST", "AllocationProcess.php", true);
  xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded;charset=UTF-8");
  xmlHttp.onreadystatechange = function() {
    if (xmlHttp.readyState == 4) {
      if (xmlHttp.status=="200") {
        ReturnStatus=xmlHttp.responseText.split(":")[0]
        if (ReturnStatus=="SAVED") {
          location.reload();
        } else {
          alert(xmlHttp.responseText);
        }
      } else {
        alert("Web Service Not Available Status:"+xmlHttp.status);
      }
    }
  }
  xmlHttp.send(postStr);
}
//========================================================================
// New Attachment
//========================================================================
function InsertAttachment() {
  document.AttachmentForm.AttachmentID.value="";
  document.AttachmentForm.Method.value='Insert';
  el=document.AttachmentForm.AttachmentType
  if (isWhitespace(document.AttachmentForm.AttachmentDescription.value)) {
    if (isWhitespace(el.options[el.selectedIndex].value)) {
      alert("Please Enter Attachment Type and Description for Attachment.");
      return;
    }
  }
  var theForm=document.AttachmentForm;
  ShowSaving(16);
  setTimeout(function () { theForm.submit() },100);
}
//========================================================================
// Delete Attachment
//========================================================================
function DeleteAttachment(AttachmentID) {
  document.AttachmentForm.AttachmentID.value=AttachmentID;
  document.AttachmentForm.Method.value='Delete';
  var theForm=document.AttachmentForm;
  postStr=AJAXString(theForm);
  xmlHttp = createHttpObject();
  xmlHttp.open("POST", "AttachmentProcess.php", true);
  xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded;charset=UTF-8");
  xmlHttp.onreadystatechange = function() {
    if (xmlHttp.readyState == 4) {
      if (xmlHttp.status=="200") {
        ReturnStatus=xmlHttp.responseText.split(":")[0]
        if (ReturnStatus=="SAVED") {
          location.reload();
        } else {
          alert(xmlHttp.responseText);
        }
      } else {
        alert("Web Service Not Available Status:"+xmlHttp.status);
      }
    }
  }
  xmlHttp.send(postStr);
}
//========================================================================
// New Allocation
//========================================================================
function InsertAllocation() {
  document.AllocationForm.AllocationID.value="";
  document.AllocationForm.Method.value='Insert';
  if (isWhitespace(document.AllocationForm.AllocatedToUser.value)) {
    if (isWhitespace(document.AllocationForm.AllocatedToTeam.value)) {
      alert("Please Enter User or Team for Allocation.");
      return;
    }
  }
  var theForm=document.AllocationForm;
  postStr=AJAXString(theForm);
  xmlHttp = createHttpObject();
  xmlHttp.open("POST", "AllocationProcess.php", true);
  xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded;charset=UTF-8");
  xmlHttp.onreadystatechange = function() {
    if (xmlHttp.readyState == 4) {
      if (xmlHttp.status=="200") {
        ReturnStatus=xmlHttp.responseText.split(":")[0]
        if (ReturnStatus=="SAVED") {
          location.reload();
        } else {
          alert(xmlHttp.responseText);
        }
      } else {
        alert("Web Service Not Available Status:"+xmlHttp.status);
      }
    }
  }
  xmlHttp.send(postStr);
}
//========================================================================
// New Annotations
//========================================================================
function InsertAnnotation() {
  if (isWhitespace(document.AnnotateForm.AnnotationText.value)) {
    alert("Please Enter a Comment.");
    return;
  }
  var theForm=document.AnnotateForm;
  postStr=AJAXString(theForm);
  xmlHttp = createHttpObject();
  xmlHttp.open("POST", "AnnotationProcess.php", true);
  xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded;charset=UTF-8");
  xmlHttp.onreadystatechange = function() {
    if (xmlHttp.readyState == 4) {
      if (xmlHttp.status=="200") {
        ReturnStatus=xmlHttp.responseText.split(":")[0]
        if (ReturnStatus=="SAVED") {
          location.reload();
        } else {
          alert(xmlHttp.responseText);
        }
      } else {
        alert("Web Service Not Available Status:"+xmlHttp.status);
      }
    }
  }
  xmlHttp.send(postStr);
}
//========================================================================
// Default Field Value from Another Field on the Same Page
//    Only Defaults if ThisField is blank
//========================================================================
function DefaultFieldValue(ThisField,FromField) {
  if (isWhitespace(ThisField.value)) {
    ThisField.value=FromField.value }
}
//========================================================================
// Validate Fields on Form
//
// The function will check all input fields that are required using the className.
//
// Example   :
// <input type=text name=DateOfBirth class="Date Past Required" title="Date of Birth">
//
//========================================================================
function onsubmitHandler(theForm) {
  if (window.event!=null) {
   var theForm=window.event.srcElement;
   for (i=0; i<theForm.elements.length; i++) {
     el=theForm.elements[i]
     if (el.className.match(/Integer/) && el.type=="text") {
       if (!checkInteger(el,el.title)) {
          return false } }
     if (el.className.match(/Number/) && el.type=="text") {
       if (!checkNumber(el)) {
          return false } }
     if (el.className.match(/Date/) && el.type=="text") {
       if (!checkDate(el,el.title)) {
          return false } }
     if (el.className.match(/Time/) && el.type=="text") {
       if (!checkTime(el,el.title)) {
          return false } }
     if (el.className.match(/Required/) && el.type!="hidden") {
       if (!checkString(el,el.title)) {
          return false } }
     if (el.className.match(/Required/) && el.type=="hidden") {
       if (!checkHidden(el,el.title)) {
          return false } }
     if (el.className.match(/JustifyRight/)) {
       justifyRight(el); }
     if (el.className.match(/JustifyLeft/)) {
       justifyLeft(el); }
     }
  }
  return true;
}
//------------------------------------------------------------
// Initialise Forms of the Page
//   - Setup Events for common elements
//   - Strip whitespace from the end of text input fields
//   - Set focus to first field in first form
//------------------------------------------------------------
function SetupFormEvents(focusOn) {
  FirstField=true
  for (var f = 0 ; f < document.forms.length; f++) {
    addFormHandler(document.forms[f])
    for (var e = 0; e < document.forms[f].elements.length; e++) {
      addHandler(document.forms[f].elements[e])
      var el=document.forms[f].elements[e] ;
      if (el.className.match(/Conditional/)) { SetupConditional(el) }
      if (el.className.match(/DefaultOnFocus/)) { DefaultOnFocus(el) }
      if (el.className.match(/DefaultOnClick/)) { DefaultOnClick(el) }
      if (el.type == "text") { el.value=el.value.replace(/\s*$/,"") } 
      if (el.type == "textarea") { el.value=el.value.replace(/\s*$/,"") } 
      if (el.type != "hidden" && 
          el.type != "button" && 
          el.type != "submit" && 
          el.type != "reset" && !el.readOnly && !el.disabled) {
        if (FirstField && el.type != "hidden" && !el.readOnly && !el.disabled 
            && !el.className.match(/NoAutoFocus/) ) 
        {
          FirstField=false
          if (focusOn) { el.focus();}
        } 
      }
    }
  }
}
function SetupConditional(el) {
  var TheValues = el.getAttribute("ConditionalValues").split(",");
  var TheField = document.getElementById(el.getAttribute("ConditionalField"));
  switch (TheField.type) {
    case undefined :
      RequiredNotSet=true 
      for (i=0;i<TheField.length;i++) {
        TheField[i].onclick = ConditionalFields
        if (TheField[i].checked) {
          if (RequiredNotSet && CheckMatch(TheValues,TheField[i].value)) {
            el.className+=" Required"
            RequiredNotSet=false 
          }
        }
      }
      break;
    case "checkbox" :
      if(TheField.checked) {
        el.className+=" Required" }
      TheField.onclick = function() { ConditionalFields(); }
      break;
    default:
      if (CheckMatch(TheValues,TheField.value)) {
        el.className+=" Required" }
      TheField.onchange = function() { ConditionalFields(); }
      break;
  }
}
function ConditionalFields() {
  if (window.event!=null) {
    var ThisEl=window.event.srcElement ;
    var ThisForm=ThisEl.form ;
    for (var e = 0; e < ThisForm.elements.length; e++) {
      var el=ThisForm.elements[e] ;
      var ConditionalField=el.getAttribute("ConditionalField")
      if (ConditionalField == ThisEl.name) {
        var TheValues = el.getAttribute("ConditionalValues").split(",");
        el.className=el.className.replace(/ Required/g,"") 
        var TheField = document.getElementById(ConditionalField);
        switch (TheField.type) {
        case undefined :
          for (i=0;i<TheField.length;i++) {
            if (TheField[i].checked) {
               if (CheckMatch(TheValues,TheField.value)) {
                 el.className+=" Required"
                 i=TheField.length 
               }
             }
          }
          break;
        case "checkbox" :
          if(ThisEl.checked) {
            el.className+=" Required" }
          break;
        default:
          if (CheckMatch(TheValues,ThisEl.value)) {
              el.className+=" Required" }
            break;
        }
      }
    }
  }
}
function CheckMatch(TheValues,ThisValue) {
  for (j=0;j<TheValues.length;j++) {
    if (TheValues[j].match(/>/)) {
      if (parseInt(ThisValue,10)>parseInt(TheValues[j].replace(/>/g,""),10)) {
        return true; } }
    if (TheValues[j].match(/</)) {
      if (parseInt(ThisValue,10)<parseInt(TheValues[j].replace(/</g,""),10)) {
        return true; } }
    if (TheValues[j].replace(/^ /,"")==ThisValue) {
      return true; } }
  return false;
}
//============================================================
// Add Form Handler
//============================================================
function addFormHandler(form) {
   if (window.onclickHandler) {
      if (form.onclick==null) {
        form.onclick = onclickHandler; }}
   if (window.onsubmitHandler) {
      if (form.onsubmit==null) {
        form.onsubmit = onsubmitHandler; }}
}
//============================================================
// Add Form Element Handler
//============================================================
function addHandler(formElement) {
   if (window.onblurHandler) {
      if (formElement.onblur==null) {
        formElement.onblur = onblurHandler; }}
   if (window.onchangeHandler) {
      if (formElement.onchange==null) {
        formElement.onchange = onchangeHandler; }}

   if (window.onselectHandler) {
      if (formElement.onselect==null) {
        formElement.onselect = onselectHandler; }}
}
//========================================================================
// Standard onblur function call
//========================================================================
function onblurHandler() {
  if (window.event!=null) {
   var el=window.event.srcElement ;
   switch (el.type) {
     case 'text': TextBlurHandler(el);break;
   }
   if (window.formblurHandler) {
       formblurHandler(el)  }
  }
}
//========================================================================
// Standard onchange function call
//========================================================================
function onchangeHandler() {
  if (window.event!=null) {
   var el=window.event.srcElement;
   if (window.formchangeHandler) {
       formchangeHandler(el)  }
   }
}
//========================================================================
// Standard onselect function call
//========================================================================
function onselectHandler() {
  if (window.event!=null) {
   var el=window.event.srcElement;
   if (window.formselectHandler) {
       formselectHandler(el)  }
  }
}
//========================================================================
// Standard click function call
//========================================================================
function onclickHandler() {
  if (window.event!=null) {
    var el=window.event.srcElement ;
    if (el.onclick!=null) return;
     if (el.src!=undefined) {
      ImageClickHandler(el) }
    if (window.formclickHandler) {
      formclickHandler(el)  }
  }
}
//========================================================================
// Standard click functions for Images/Icons on a form
// Standard Images for Date Time Functions Match Based on Image Name
// A Class is used on the image link to ensure the cursor changes on mouse over
// borders are switched off etc. This does away with the need to use anchor tags.
// HTML attributes for date and time used to linked to input fields
// eg <img src=..images/SetDateTime.gif class=FormIcon
//     date=thisForm.dateField time=thisForm.timeField>
//
//    SetTimeStamp  - Set Input Fields to Current Date & Time
//    TimePopUp     - PopUp a Time input display for touch screen or pen bases input.
//    DatePopUp     - PopUp a Calendar
//
//========================================================================
function ImageClickHandler(el) {
  if (el.className.match(/SetDateTime/)) {
     SetDateTime(eval(el.getAttribute("date")),eval(el.getAttribute("time")));return; }
  if (el.className.match(/TimeIcon/)) {
     TimePopUp(eval(el.getAttribute("time")));return }
  if (el.className.match(/DateIcon/)) {
     DatePopUp(eval(el.getAttribute("date")));return }
  if (el.className.match(/AutoTextIcon/)) {
     AutoTextPopUp(eval(el.getAttribute("field")),el.getAttribute("firstpageid"),el.getAttribute("userid"));return }
}
function closeWin(sCodeValue,sDescriptionValue){
  returnCode.value = sCodeValue;
  returnDescription.value = sDescriptionValue;
}
//========================================================================
// Standard onblur functions for text input fields
// Standard classNames for text fields to handle validation for
//    Date	   - Input must be a valid date
//    Past         - Input must be a valid date in the past
//    Future       - Input must be a valid date in the future
//    JustifyLeft  - Justify input to the left (remove all leading whitespace)
//    Integer      - Input must be a integer   
//    Number       - Input must be a number
//    JustifyRight - Justify input to the right (uses maxlength)
//========================================================================
function TextBlurHandler(el) {
  if (el.className.match(/Date/)) {
        checkDate(el,el.title); return; } 
  if (el.className.match(/Time/)) {
        checkTime(el,el.title); return; } 
  if (el.className.match(/JustifyLeft/)) {
        justifyLeft(el); return; }
  if (el.className.match(/Integer/)) {
        checkInteger(el,el.title); return; }
  if (el.className.match(/Number/)) {
        checkNumber(el); return; }
  if (el.className.match(/JustifyRight/)) {
        justifyRight(el); return; }
}
//========================================================================
// Check Number <input type=text name=xxxxxxx class=Number min=10 max=100>
//========================================================================
function checkNumber(theField) {
 if (isWhitespace(theField.value)) { return true }
 if (isFinite(theField.value)) {
   if(isFinite(theField.getAttribute("max"))) {
      if (parseFloat(theField.value)>parseFloat(theField.getAttribute("max"))) {
         theField.value="";
         alert( theField.title + " Must be Less Than or = " + theField.getAttribute("max"))
         theField.focus()
         return false } }
   if(isFinite(theField.getAttribute("min"))) {
      if (parseFloat(theField.value)<parseFloat(theField.getAttribute("min"))) {
         theField.value="";
         alert( theField.title + " Must be Greater Than or = " + theField.getAttribute("min"))
         theField.focus()
         return false } }
   if(isFinite(theField.getAttribute("decimalplaces"))) {
     var decplaces = parseInt(theField.getAttribute("decimalplaces"),10)
     var str = "" + Math.round(eval(theField.value)* Math.pow(10,decplaces))
     while (str.length<=decplaces) {
        str= "0" + str }
     var decpoint = str.length - decplaces
     if (decplaces==0) {
       theField.value = str.substring(0,decpoint) }
     else {
       theField.value = str.substring(0,decpoint) + "." + str.substring(decpoint,str.length) }
   }
   return true }
 else {
   theField.value="";
   alert( theField.title + " Must be Numeric")
   theField.focus()
   return false }
}
//========================================================================
// Function : JustifyRight
//            Right Justification  of a input field to maxLength
//========================================================================
function justifyRight(theField) {
  if (theField.maxLength==undefined) { return }
  theField.value=theField.value.replace(/\s/g,"")
  if (theField.value.length == 0) { return }
  Count=theField.maxLength - theField.value.length
  Blanks=""
  for (i=0; i < Count;i++) { Blanks+=" ";}
  theField.value=Blanks+theField.value
}
//========================================================================
// Function : JustifyLeft 
//            Left Justification of a input field, Also checks for Integer
//            Class Name! 
//========================================================================
function justifyLeft(theField) {
  if (theField.className.match(/Integer/)) {
        checkInteger(theField,theField.title); }
  if (theField.maxLength==undefined) { return }
  theField.value=theField.value.replace(/\s/g,"")
  if (theField.value.length == 0) { return }
  theField.value=theField.value 
}
//========================================================================
// Function  : checkDate
//
// Operation : Validate Date Input
//             Date May be entered in any of the following formats
//                      ddmmyy
//                      ddmmccyy
//                      dd.mm.yy
//                      dd.mm.ccyy
//                      dd/mm/yy
//                      dd/mm/ccyy
//                      dd mm yy
//                      dd mm ccyy
//                      dd mmm yy
//                      dd mmm ccyy
//             The field will be checked and display in a dd mmm ccyy format.
//
// Example   : 
//
// <input type="text" class="Date Past" title="Date of Birth" name=dob>
//========================================================================
function checkDate() {       
switch (checkDate.arguments.length) {
  case 0: {
     theField=this;
     labelString=this.title; 
     hiddenField=null
     break; }
  case 1: {
     theField=checkDate.arguments[0]
     labelString=theField.title; 
     hiddenField=null
     break; }
  case 2: {
     theField=checkDate.arguments[0]
     labelString=checkDate.arguments[1]
     hiddenField=null
    break; }
  case 3: {
     theField=checkDate.arguments[0]
     labelString=checkDate.arguments[1]
     hiddenField=checkDate.arguments[2]
     break; }
   }
if(theField.value=="") { return true; }
 var ErrorFound;
 ErrorFound=false ;
 var day=0 
 var mon=0 
 var year=0 
 var cent=0 
 var Today = new Date()
 var monthname = new Array(12)
 monthname[0]="Jan"
 monthname[1]="Feb"
 monthname[2]="Mar"
 monthname[3]="Apr"
 monthname[4]="May"
 monthname[5]="Jun"
 monthname[6]="Jul"
 monthname[7]="Aug"
 monthname[8]="Sep"
 monthname[9]="Oct"
 monthname[10]="Nov"
 monthname[11]="Dec"
 datevalue=theField.value
 datelength=datevalue.length
 position=0
 start=0
 flag=0
 if (datevalue.match(/^\s+/)) { return; }
 while (position < datelength) {
   chr = datevalue.substring(position, position+1)
   if (chr==" " || chr=="/" || chr=="."|| chr=="-") {
     if (flag==2) {
       if (position-start>2) {
  	     year = datevalue.substring(start+2, position)
	     cent = datevalue.substring(start, start+2) }
       else {
         year = datevalue.substring(start, position)   
         var ccyy = Today.getFullYear();
         cent=ccyy.toString().substr(0,2);
         ThisYear=ccyy.toString().substr(2,2);
         if (parseInt(year) >  parseInt(ThisYear)+3 ) { cent="19" } }
     flag = 3 }
     if (flag==1) {
       test=parseInt(datevalue.substring(start, position))
       if (isNaN(test))  {
         monstr= datevalue.substring(start, start+3)
         if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon=1
         if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon=2
         if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon=3
         if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon=4
         if (monstr=="May" || monstr=="MAY" || monstr=="may") mon=5
         if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon=6
         if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon=7
         if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon=8
         if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon=9
         if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon=10
         if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon=11
         if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon=12 }
       else {
         mon = datevalue.substring(start, position)   }
       flag = 2
       start=position+1 }
       if (flag==0) {
         day  = datevalue.substring(start, position)   
         flag = 1
         start=position+1 } }
   position++
 } //End While
 if (flag==1) {
   test=parseInt(datevalue.substring(start, position))
   if (isNaN(test))  {
     monstr= datevalue.substring(start, start+3)
     if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") mon=1
     if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") mon=2
     if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") mon=3
     if (monstr=="Apr" || monstr=="APR" || monstr=="apr") mon=4
     if (monstr=="May" || monstr=="MAY" || monstr=="may") mon=5
     if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") mon=6
     if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") mon=7
     if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") mon=8
     if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") mon=9
     if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") mon=10
     if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") mon=11
     if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") mon=12 }
   else {
     mon = datevalue.substring(start, position)   }
   flag=2
 }
 if (flag==2) {
   if (position-start>2) {
     cent = datevalue.substring(start, start+2)    // Century
     year = datevalue.substring(start+2, position) }
   else {
     year = datevalue.substring(start, position)   
     var ccyy = Today.getFullYear();
     cent=ccyy.toString().substr(0,2) 
     ThisYear=ccyy.toString().substr(2,2);
     if (parseInt(year) >  parseInt(ThisYear) + 3 ) { cent="19" } } }
 if (flag==0) {
   if (datelength<=6) {
     day = datevalue.substring(0,2)   
     mon = datevalue.substring(2,4)   
     year= datevalue.substring(4,6)   
     var ccyy = Today.getFullYear();
     cent=ccyy.toString().substr(0,2);
     ThisYear=ccyy.toString().substr(2,2);
     if (parseInt(year) >  parseInt(ThisYear) + 3 ) { cent="19" } }
   else {
     if (datelength==8) {
       day = datevalue.substring(0,2)   
       mon = datevalue.substring(2,4)   
       cent= datevalue.substring(4,6)   
       year= datevalue.substring(6,8)   } } }
 mon=parseInt(mon,10)
 if (isNaN(mon)) mon=parseInt(Today.getMonth(),10) +1;
 year=parseInt(year,10)
 if (isNaN(year)) {ccyy=Today.getFullYear();year=ccyy.toString().substr(2,2);cent=ccyy.toString().substr(0,2);}
 cent=parseInt(cent,10)
 if (isNaN(year)) {ccyy=Today.getFullYear();cent=ccyy.toString().substr(0,2);}
 day=parseInt(day,10)
 if (isNaN(day))  ErrorFound=true
 mon=parseInt(mon,10)
 if (isNaN(mon))  ErrorFound=true
 year=parseInt(year,10)
 if (isNaN(year)) ErrorFound=true
 if (!ErrorFound) { 
   if (mon<1 || mon>12) ErrorFound = true
   if (day<1 || day>31) ErrorFound = true
   if (year<0 || year>99) ErrorFound = true
   if (mon==4 || mon==6 || mon==9 || mon==11) {
     if (day==31) ErrorFound=true }
   if (mon==2) {
     if (day>29) ErrorFound=true
     if (day==29 && year % 4 !=0 ) ErrorFound=true
     if (day==29 && year==0 && cent % 4 !=0 ) ErrorFound=true } } 
 if (ErrorFound) {
   theField.value="";
   alert('Invalid '+labelString)
   theField.focus()
   return false }
 else {
   if (year<10) year="0" + year
   if (day<10)  day ="0" + day
   if (globalDateType == "DD MMM YYYY") {
     dateValue=day + " " + monthname[mon-1] + " " + cent + year
     theField.value=dateValue  }
   else {
     if (globalDateType == "DD/MM/YYYY") {
       month = mon; if (mon<10)  month ="0" + mon;
       dateValue=day + "/" + month + "/" + cent + year;
       theField.value=dateValue  } }
   if (hiddenField != null) {
       month = mon; if (mon<10)  month ="0" + mon;
       dateValue=ccent + cyear + month + day;
       hiddenField.value=dateValue  } 

   if (theField.datevalidation==0) return true;  

   var InputDay=day
   var InputMth=mon
   var InputYrs=''+ cent + year
   if (InputMth < 10) InputMth="0" + InputMth
   InputDate="";
   InputDate=InputDate.concat(InputYrs,InputMth,InputDay)

   var ValueDate1="";
   var ValueDate2="";
   var NameDate1="";
   var NameDate2="";

   //ReturnValue=RSExecute("RemoteServices.php?action=CurrentDate") // Get Server Date
   //CurrentDate=ReturnValue.return_value
   ReturnValue=RSExecute("../cgi-bin/patweb80.pbl?reportno=1") // Get Server Date & Time
   CurrentDate=ReturnValue.return_value.split("|")[0];
   
   if (theField.getAttribute("comparetodate1").match(/Input$/)||
       theField.getAttribute("comparetodate1").match(/Input0$/)) {
     NameDate1="Today"
     CompareToDate=CurrentDate }
   else {
     CompareToDate=eval(theField.getAttribute("comparetodate1")).value
     NameDate1=eval(theField.getAttribute("comparetodate1")).title }
   if ( CompareToDate == "" ) return true;
   ThisDay=CompareToDate.substr(0,2);
   monstr=CompareToDate.substr(3,3); 
   ThisYrs=CompareToDate.substr(7,4);
   if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") ThisMth="01"
   if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") ThisMth="02"
   if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") ThisMth="03"
   if (monstr=="Apr" || monstr=="APR" || monstr=="apr") ThisMth="04"
   if (monstr=="May" || monstr=="MAY" || monstr=="may") ThisMth="05"
   if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") ThisMth="06"
   if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") ThisMth="07"
   if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") ThisMth="08"
   if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") ThisMth="09"
   if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") ThisMth="10"
   if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") ThisMth="11"
   if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") ThisMth="12"
   var ThisDate="";
   ValueDate1=ThisDate.concat(ThisYrs,ThisMth,ThisDay)
       
   if (theField.getAttribute("datevalidation")==1) {  
     if (InputDate > ValueDate1) { 
      theField.value=""
      alert(labelString + " must be <= " + NameDate1)
      theField.focus()
      return false }
    }
   if (theField.getAttribute("datevalidation")==2) {  
     if (InputDate < ValueDate1) { 
      theField.value=""
      alert(labelString + " must be >= " + NameDate1)
      theField.focus()
      return false }
    }


   if (theField.getAttribute("comparetodate2").match(/Input$/)||
       theField.getAttribute("comparetodate2").match(/Input0$/)) {
     NameDate2="Today"
     CompareToDate=CurrentDate }
   else {
     CompareToDate=eval(theField.getAttribute("comparetodate2")).value
     NameDate2=eval(theField.getAttribute("comparetodate2")).title }
   if ( CompareToDate == "" ) return true;
   ThisDay=CompareToDate.substr(0,2);
   monstr=CompareToDate.substr(3,3); 
   ThisYrs=CompareToDate.substr(7,4);
   if (monstr=="Jan" || monstr=="JAN" || monstr=="jan") ThisMth="01"
   if (monstr=="Feb" || monstr=="FEB" || monstr=="feb") ThisMth="02"
   if (monstr=="Mar" || monstr=="MAR" || monstr=="mar") ThisMth="03"
   if (monstr=="Apr" || monstr=="APR" || monstr=="apr") ThisMth="04"
   if (monstr=="May" || monstr=="MAY" || monstr=="may") ThisMth="05"
   if (monstr=="Jun" || monstr=="JUN" || monstr=="jun") ThisMth="06"
   if (monstr=="Jul" || monstr=="JUL" || monstr=="jul") ThisMth="07"
   if (monstr=="Aug" || monstr=="AUG" || monstr=="aug") ThisMth="08"
   if (monstr=="Sep" || monstr=="SEP" || monstr=="sep") ThisMth="09"
   if (monstr=="Oct" || monstr=="OCT" || monstr=="oct") ThisMth="10"
   if (monstr=="Nov" || monstr=="NOV" || monstr=="nov") ThisMth="11"
   if (monstr=="Dec" || monstr=="DEC" || monstr=="dec") ThisMth="12"
   var ThisDate="";
   ValueDate2=ThisDate.concat(ThisYrs,ThisMth,ThisDay)

   if (theField.getAttribute("datevalidation")==3) {  
     if (InputDate < ValueDate1) { 
      theField.value=""
      alert(labelString + " must be >= " + NameDate1)
      theField.focus()
      return false }
     if (InputDate > ValueDate2) { 
      theField.value=""
      alert(labelString + " must be <= " + NameDate2)
      theField.focus()
      return false }
    }
  return true }
}	
//========================================================================
// Function  : checkTime
//
// Operation : Validate Time Input
//             Time May be entered in any of the following formats
//                      hhmm
//                      hh:mm
//                      hh.mm
//                      hhmmss
//                      hh:mm:ss
//                      hh.mm.ss
//             The field will be checked and display in a hh:mm:ss format.
//
// Example   :
//  <input type="text" class="Time" title="Operation Time" name=optime >
//========================================================================
function checkTime() {
theField=this
labelString=this.title
if (checkTime.arguments.length > 0 ) {
  theField=checkTime.arguments[0]
  labelString=checkTime.arguments[1]
}
 if(theField.value=="") { return true; }
 var ErrorFound=false
 var hour=0
 var min=0
 var sec=0
 timevalue=theField.value
 timelength=timevalue.length
 if (timevalue.match(/\./)) {
    var x=timevalue.split(".")
    hour=x[0]
    min=x[1]
    if (x[2]==undefined) { sec="0" } 
                    else { sec=x[2] }}
 else {
   if (timevalue.match(/\:/)) {
      var x=timevalue.split(":")
      hour=x[0]
      min=x[1]
      if (x[2]==undefined) { sec="0" } 
                      else { sec=x[2] }}
   else {
     if (timelength<3) { 
       hour=timevalue; min="0"; sec="0" }
     else {
       switch (timelength) {
       case 3: {
         hour=timevalue.substr(0,1); min=timevalue.substr(1,2); sec="0";
         break; }
       case 4: {
         hour=timevalue.substr(0,2); min=timevalue.substr(2,2); sec="0";
         break; }
       case 6: {
         hour=timevalue.substr(0,2); 
         min=timevalue.substr(2,2); 
         sec=timevalue.substr(4,2);
         break; }
       default: {  
         ErrorFound=true ; 
         break; }
       } 
     } 
   } 
 }
 if (isNaN(hour)){ ErrorFound=true }
 if (isNaN(min)) { ErrorFound=true }
 if (isNaN(sec)) { ErrorFound=true }
 if (isWhitespace(hour)){ ErrorFound=true }
 if (isWhitespace(min)) { ErrorFound=true }
 if (isWhitespace(sec)) { ErrorFound=true }
 hour=parseInt(hour,10)
 min=parseInt(min,10)
 sec=parseInt(sec,10)
 if (!ErrorFound) {
   if (min<0 || min>59) { ErrorFound = true }
     if (hour<0 || hour>23) { ErrorFound = true }
       if (sec<0 || sec>59) { ErrorFound = true }
 }

 if (ErrorFound) {
   theField.select()
   alert('Invalid '+labelString)
   return false; }
 if (sec<10) { sec="0" + sec }
 if (hour<10){ hour ="0" + hour }
 if (min<10) { min ="0" + min }
 theField.value=hour + ":" + min 

 if (theField.timevalidation==0) return true;  

// ReturnValue=RSExecute("RemoteServices.php?action=CurrentTime") // Get Server Date
// CurrentTime=ReturnValue.return_value
 ReturnValue=RSExecute("../cgi-bin/patweb80.pbl?reportno=1") // Get Server Date & Time
 CurrentTime=ReturnValue.return_value.split("|")[1];
 InputTime=theField.value

 if (theField.getAttribute("comparetotime1").match(/.Input$/)||
     theField.getAttribute("comparetotime1").match(/.Input0$/)) {
   NameTime1="Now"
   ValueTime1=CurrentTime }
 else {
   ValueTime1=eval(theField.getAttribute("comparetotime1")).value
   NameTime1=eval(theField.getAttribute("comparetotime1")).title }
  
 if (theField.getAttribute("comparetotime2").match(/.Input$/)|| 
     theField.getAttribute("comparetotime2").match(/.Input0$/)) {
   NameTime2="Now"
   ValueTime2=CurrentTime }
 else {
   ValueTime2=eval(theField.getAttribute("comparetotime2")).value
   NameTime2=eval(theField.getAttribute("comparetotime2")).title }
  
 if ( ValueTime1 == "" ) return true;

 if (theField.getAttribute("timevalidation")==1)   {  
   if (InputTime>ValueTime1) {
    theField.select()
    alert(labelString + " must be <= " + NameTime1)
    return false }
  }
 if (theField.getAttribute("timevalidation")==2) {  
   if (InputTime<ValueTime1) {
    theField.select()
    alert(labelString + " must be >= " + NameTime1)
    return false }
  }
 
 if ( ValueTime2 == "" ) return true;
 
 if (theField.getAttribute("timevalidation")==3) {  
   if (InputTime<ValueTime1) {
    theField.select()
    alert(labelString + " must be >= " + NameTime1)
    return false }
   if (InputTime>ValueTime2) {
    theField.select()
    alert(labelString + " must be <= " + NameTime2)
    return false }
  }
 return true; 
}
//======================================================================
// checkString (TEXTFIELD theField, STRING s, [, BOOLEAN emptyOK==false])
//
// Check that string theField.value is not all whitespace.
//
// For explanation of optional argument emptyOK,
// see comments of function isInteger.
//
//======================================================================
function checkString (theField, s, emptyOK) { 
if (checkString.arguments.length == 2) emptyOK = false;
 if ((emptyOK == true) && (isEmpty(theField.value))) return true;
 if (isWhitespace(theField.value))  {
   return warnEmpty (theField, s);
 }
 else return true;
}
//======================================================================
// checkHidden (TEXTFIELD theField, STRING s
//
// Check that string theField has a value set.
// This is to enable required field checking for checkbox & radio sets
//======================================================================
function checkHidden (theHiddenField, sTitle) { 
 theForm=theHiddenField.form
 for (j=0;j<theForm.length;j++) {
   if (theHiddenField.name==theForm[j].name) {
     if (theForm[j].type=="checkbox" && theForm[j].checked) return true; 
     if (theForm[j].type=="radio" && theForm[j].checked) return true; 
     theField=theForm[j]
   }
 }
 alert( sTitle + " is a required field.\nPlease enter it now." )
 parentDiv=theField.parentElement
 while (parentDiv.tagName!="DIV" && parentDiv.tagName!="BODY") {
   parentDiv=parentDiv.parentElement }
 if (parentDiv.tagName=="DIV" && parentDiv.style.display=="none") {
    parentDiv.style.display="" }
 while (parentDiv.tagName!="container" && parentDiv.tagName!="BODY") {
   if (parentDiv.tagName=="page") {
      IndexNo=parentDiv.id.substr(3) } 
   parentDiv=parentDiv.parentElement }
 if (parentDiv.tagName=="container") {
    parentDiv.selectedIndex=IndexNo }
 theField.focus()
 return false;
}
//=====================================================================
// checkInteger (TEXTFIELD theField, STRING s)
//
// Check Integer Value in Input String
//=====================================================================
function checkInteger (theField, s) { 
 if (theField.value.match(/\./g)) {
     theField.focus()
     alert( s + " Must be a Integer")
     return false }
 if (isFinite(theField.value)) {
   if(isFinite(theField.max)) {
      if (parseInt(theField.value)>parseInt(theField.max)) {
         theField.focus()
         alert( theField.title + " Must be Less Than or = " + theField.max)
         return false } }
   if(isFinite(theField.min)) {
      if (parseInt(theField.value)<parseInt(theField.min)) {
         theField.focus()
         alert( theField.title + " Must be Greater Than or = " + theField.min)
         return false } }
     return true }
 else {
   theField.focus()
   alert( s + " Must be Numeric")
   return false }
}
//------------------------------------------------------------
// Check whether string s is empty.
//------------------------------------------------------------
function isEmpty(s) {   
 return ((s == null) || (s.length == 0))
}
//------------------------------------------------------------
// Returns true if string s is empty or 
// whitespace characters only.
// Searches through string's characters one by one
// until we find a non-whitespace character.
// When we do, return false; if we don't, return true.
//------------------------------------------------------------
function isWhitespace (s) {   
 var i;
 if (isEmpty(s)) return true;
 for (i = 0; i < s.length; i++) {   
   var c = s.charAt(i);
   if (whitespace.indexOf(c) == -1) return false;
 }
    return true; // All characters are whitespace.
}
//------------------------------------------------------------
// Notify user that required field theField is empty.
// String s describes expected contents of theField.value.
// Put focus in theField and return false.
//------------------------------------------------------------
function warnEmpty (theField, s) {   
 alert( s + " is a required field.\nPlease enter it now.")
 parentDiv=theField.parentElement
 while (parentDiv.tagName!="DIV" && parentDiv.tagName!="BODY") {
   parentDiv=parentDiv.parentElement }
 if (parentDiv.tagName=="DIV" && parentDiv.style.display=="none") {
    parentDiv.style.display="" }
 while (parentDiv.tagName!="container" && parentDiv.tagName!="BODY") {
   if (parentDiv.tagName=="page") {
      IndexNo=parentDiv.id.substr(3) } 
   parentDiv=parentDiv.parentElement }
 if (parentDiv.tagName=="container") {
    parentDiv.selectedIndex=IndexNo }
 theField.focus()
 return false
}
//-------------------------------------------------------------------------------------
// ClearFields (TEXTFIELD theField [, TEXTFIELD theField])
// Funtion : Clear Input fields 
// Clear the value of input fields past as arguments to function
//-------------------------------------------------------------------------------------
function ClearFields() {
  for(var i = 0; i < arguments.length; i++) {
     arguments[i].value=""
  }
}
//-------------------------------------------------------------------------------------
// Function : Convert String to Upper Case
// Convert to Upper Case the value of input fields past as arguments to this function
//-------------------------------------------------------------------------------------
function UpperCase(){
  for(var i = 0; i < arguments.length; i++) {
     arguments[i].value=arguments[i].value.toUpperCase()
  }
}
//-------------------------------------------------------------------------------------
// Function : Generate a SelectList of numbers
// Generate Select List Options for Numeric Values from Min to Max
//-------------------------------------------------------------------------------------
function SelectNumbers(ListItem,Min,Max,Increment,SelectedValue) {
  i=Min
  do {
    ListItem.options[ListItem.options.length]=new Option(i,i);
    i=i+Increment }
  while (i<Max);
  if (SelectedValue!="") {
    for (var i =0 ; i < ListItem.length; i++) {
      if (ListItem.options[i].value==parseFloat(SelectedValue)) {
        ListItem.selectedIndex=i } } }
}
//-------------------------------------------------------------------------------------
//
//  Default Form Values
//
//-------------------------------------------------------------------------------------
function DefaultOnFocus(el) {
  el.onfocus=function () {
    if (el.className.match(/DefaultOnFocus/)) {
      el.className=el.className.replace(/DefaultOnFocus/,""); // Only first time
      DefaultFrom(el);
    }
  }
}
function FormDefault() {
  if (FormDefault.arguments.length == 1) {
       DefaultFrom(FormDefault.arguments[0])
    }
  else {  
    for (i=0; i<InputForm.elements.length; i++) {
      el=InputForm.elements[i]
      if ( el.getAttribute("DefaultFrom") ) {
         DefaultFrom(el)
      }
    }
  }
}
function DefaultFrom(el) {
  switch (el.type) {
    case 'text':  { el.value=el.getAttribute("DefaultFrom"); break; }
    case 'textarea':  { el.value=el.getAttribute("DefaultFrom"); break; }
    case 'select-one':{ FormDefaultSelect(el);   break; }
  } 
}
function ClearDefault(el) {
  if (el.form.FormID.value !="" ) { return }
  switch (el.type) {
    case 'text':  { el.value=""; break; }
    case 'textarea':  { el.value=""; break; }
    case 'select-one':{ el.selectedIndex=0;   break; }
  } 
}
function FormDefaultSelect(el) {
  for (var i =0 ; i < el.length; i++) {
   if (el.options[i].value==el.getAttribute("DefaultFrom")) {
       el.selectedIndex=i } } 
}
function DefaultOnClick(el) {
  DefaultText=el.getAttribute("DefaultFrom");
  if (el.type=='select-one') {
    for (var i =0 ; i < el.length; i++) {
     if (el.options[i].value==el.getAttribute("DefaultFrom")) {
         DefaultText=el.options[i].text } } 
  }
  if (el.form.FormID.value!="") { return }
  var theParent
  theParent=el.parentElement
  ClearDefault(el) 
  if (!isWhitespace(DefaultText)){ 
    while (theParent.tagName != "TD" && theParent.tagName != "TABLE" && theParent.tagName != "SPAN") {
      theParent = theParent.parentElement; }
    theParent.innerHTML+="<span title='Click Default to "+DefaultText+
                         "' class=FormFieldDefault onclick='DefaultFrom("+el.name+");'></span>"
  }
}

//-------------------------------------------------------------------------------------
//
//  Form Submission Validation Routine.
//
//-------------------------------------------------------------------------------------
function ValidateForm(theForm) {
  SubmitButtonPress=true
  if (theForm.CheckRequired.value == "0") {
     return true; } 
//
// Validate Required Fields on a Form
//
  for (i=0; i<theForm.elements.length; i++) {
    el=theForm.elements[i]
    if (el.className.match(/Integer/) && el.type=="text") {
      if (!checkInteger(el,el.title)) {
         return false } }
    if (el.className.match(/Number/) && el.type=="text") {
      if (!checkNumber(el)) {
         return false } }
    if (el.className.match(/Date/) && el.type=="text") {
      if (!checkDate(el,el.title)) {
         return false } }
    if (el.className.match(/Time/) && el.type=="text") {
      if (!checkTime(el,el.title)) {
         return false } }
    if (el.className.match(/Required/) && el.type!="hidden") {
      if (!checkString(el,el.title)) {
         return false } }
    if (el.className.match(/Required/) && el.type=="hidden") {
      if (!checkHidden(el,el.title)) {
         return false } }
    if (el.className.match(/JustifyRight/)) {
      justifyRight(el); }
    if (el.className.match(/JustifyLeft/)) {
      justifyLeft(el); }
    }
  return true;
}
function RequireLink(theField,theValue,theLink){
 if (theField.value==theValue) {
   theLink.className+=" Required"; }
 else {
   theLink.className=theLink.className.replace(/ Required/g,""); }
}
//------------------------------------------------------------------------
function AutoTextPopUp(textInput,FirstPageID,UserID) {
  clientTextbox = textInput;
  Container=document.getElementById("PopUpDiv")
  Container.style.left=200;
  Container.style.top=50;
  cgi="PageID=" + FirstPageID + "&UserID=" + UserID
  sHTML = '<table width=350 cellspacing=0 cellpadding=0 '+
          ' class=calendar border=1 bgcolor=buttonface><tr><td>'+
          '<table cellspacing=0 cellpadding=0 width=100% '+
          ' class=calendar border=0 bgcolor=buttonface>'+
          '<tr><td align=center>' +
          '<b>Auto Text Selection</b></td>' +
          '<td align=right width=5%>' +
          '<IMG SRC="../images/FormClose.gif" style="margin-top:2px;margin-bottom:2px;margin-right:4px;" '+
          'ALT="Close" onClick="javaScript:HideAutoText();"></td>' +
          '</tr></table>' +
          '</td></tr><tr><td>' +
          '<iframe scrolling=no height=400 width=100% src="AutoText.php?'+cgi+'" ></iframe>' +
          '</td></tr></table>' 
  Container.innerHTML = sHTML;
  Container.height=500
  Container.style.display='';
  pbody = Container.document.body;
  pbody ="";

}
function HideAutoText(){
  Container.style.display='none';
}
function UpdateAutoText(AutoText,AutoTextArea) {
  if (clientTextbox.type=="textarea") {
    clientTextbox.value += decodeURIComponent(AutoTextArea).replace(/\+/g," "); }
  else {
    clientTextbox.value += decodeURIComponent(AutoText).replace(/\+/g," "); }
  HideAutoText();
  clientTextbox.focus();
}
//------------------------------------------------------------------------
// Show Form Audit Details
//------------------------------------------------------------------------
function ShowAuditDetails(AuditID) {
  theURL=location.href.replace(/&AuditID.*$/,"")
  theURL=theURL.replace(/input/,"display")
  theURL=theURL.replace(/ipadi/,"ipadd")
  location.href=theURL + "&AuditID="+AuditID
}

//------------------------------------------------------------
// Select a Form Class
//------------------------------------------------------------
function SelectFormClass(FormTypeID,RequestString) {
  if (FormTypeID=="") {
    FormTypeID=window.showModalDialog("SelectFormClass.php",
    "","dialogHeight:300px;dialogWidth:400px;status:no;help:no")  }
  if (FormTypeID != undefined) {    
    returnURL=window.showModalDialog("SelectFormClass.php?FormTypeID="+FormTypeID,
    "","dialogHeight:300px;dialogWidth:400px;status:no;help:no")  
    if (returnURL != undefined) {    
      location.href=returnURL + "&" + RequestString ; 
      }
    else {
      location.href=GetCookieData('ReturnToPage');      
     }
  }
}
//------------------------------------------------------------
// Select a Note Form Class
//------------------------------------------------------------
function SelectNoteFormClass(FormTypeID,RequestString) {
  if (FormTypeID=="") {
    FormTypeID=window.showModalDialog("SelectNotesFormClass.php",
    "","dialogHeight:300px;dialogWidth:400px;status:no;help:no")  }
  if (FormTypeID != undefined) {    
    returnURL=window.showModalDialog("SelectNotesFormClass.php?FormTypeID="+FormTypeID,
    "","dialogHeight:300px;dialogWidth:400px;status:no;help:no")  
    if (returnURL != undefined) {    
      location.href=returnURL + "&" + RequestString ; 
      }
    else {
      location.href=GetCookieData('ReturnToPage');      
     }
  }
}
function ReturnNewForm(LinkToURL) {
  window.returnValue=LinkToURL;
  window.close()
}
//------------------------------------------------------------
// Get a Cookie Value
//------------------------------------------------------------
function GetCookieData(fieldName) {
  var pos = document.cookie.indexOf(fieldName + "=");
  if (pos == -1) { 
    return("unknown") 
  }
  else { var start=pos + fieldName.length + 1;
      var end = document.cookie.indexOf(";",start);
      if (end == -1) { 
        end= document.cookie.length 
      }
      return(unescape(document.cookie.substring(start,end))) 
  }
}
function RepeatTables() {
	elTab=document.getElementsByTagName("TABLE");
	for (var i=0;i<elTab.length;i++) {
		if (elTab[i].id.match(/RepeatSection/)) {
		   ExtendTable(elTab[i])
		   LoadTableData(elTab[i])
		}
		if (elTab[i].id.match(/RepeatDisplay/)) {
		   ExtendTable(elTab[i])
		   LoadDisplayData(elTab[i])
		}
	}
}
function LoadDisplayData(el) {
  var rowClass="TableRowOdd";
  for (var RowNo=1;RowNo<el.rows.length;RowNo++) {
    var tr = el.rows[RowNo];
    if (rowClass=="TableRowEven") rowClass="TableRowOdd";
    else rowClass="TableRowEven";
    tr.className=rowClass;
    for (var i=0;i<tr.cells.length;i++) {
      var td=tr.cells[i];
      var vType="vInput";
      InputType=td.getAttribute("InputType");
      if (InputType=="6") vType="vCode";
      InputID=td.getAttribute("InputID");
      if (document.getElementById(vType+InputID+"Row"+RowNo)) {
         theValues=document.getElementsByName(vType+InputID+"Row"+RowNo);
         for (var j=0;j<theValues.length;j++) {
           if (j>0) td.innerHTML+="<br>" 
           if (InputType=="2") {
             td.innerHTML+=theValues[j].value.replace(/\n/g,'<br>');	                      
           }
           else {
             td.innerHTML+=theValues[j].value;	           
           }
        }      
      }
    }
  }
}  
function LoadTableData(el) {
  var rowClass="TableRowOdd";
  for (var RowNo=1;RowNo<el.rows.length;RowNo++) {
    var tr = el.rows[RowNo];
    if (rowClass=="TableRowEven") rowClass="TableRowOdd";
    else rowClass="TableRowEven";
    tr.className=rowClass;
    for (var i=0;i<tr.cells.length;i++) {
      var td=tr.cells[i];
      for (var j=0;j<td.childNodes.length;j++) {
        field=td.childNodes[j];
        if (field.className) {
          if (field.className.match("CheckBoxCombo")) {
             LoadChild(field,RowNo);
          }
        }
        if (field.nodeName=="IMG") {
          if (field.name.match(/imgDisplay/)) {
            field.name=field.name+"Row"+RowNo;
            if (document.getElementById("v"+field.name.replace(/imgDisplay/,"Input"))) {
             LoadImage(field,RowNo);
            }
          }
          if (field.getAttribute("date")!=null) {
            field.setAttribute("date",field.getAttribute("date")+"Row"+RowNo);
          }
          if (field.getAttribute("time")!=null) {
            field.setAttribute("time",field.getAttribute("time")+"Row"+RowNo);
          }
        }
        if (field.name) {
          if ((field.name.match(/Input/))||(field.name.match(/Code/))||(field.name.match(/Image/))) {
            if (field.name.match(/\[\]/)) {
              field.name=field.name.replace(/\[\]/,"")+"Row"+RowNo+"[]";
            } else {
              field.name=field.name+"Row"+RowNo;
            }
            field.id=field.name;
            if (field.getAttribute("returnId")) {
              field.setAttribute("returnId",field.getAttribute("returnId")+"Row"+RowNo);
            }
            if (field.getAttribute("returnCode")) {
              field.setAttribute("returnCode",field.name);
            }
            if (document.getElementById("v"+field.name)) {
               LoadField(field,RowNo);
            }
          }
        }
      }
    }
  }
}
function LoadChild(cell,RowNo) {
  for (var j=0;j<cell.childNodes.length;j++) {
     var field=cell.childNodes[j];
     if (field.name) {
      if ((field.name.match(/Input/))||(field.name.match(/Code/))||(field.name.match(/Image/))) {
        field.name=field.name.replace(/\[\]/,"")+"Row"+RowNo+"[]";
        field.id=field.name+"-"+j;
        if (document.getElementById("v"+field.name.replace(/\[\]/,""))) {
          LoadField(field,RowNo);
        }
      }
    }
  } 
}
/*
  Extend Table to Fit All Values Recorded
*/
function ExtendTable(el) {
  var MaxRows=0;
  var formEl=document.ScriptParameters;
  for (var i=0;i<formEl.length;i++) {
    if (formEl[i].name.match(/vInput/)) {
      RowNo=parseInt(formEl[i].name.replace(/vInput.*Row/,""),10);
      if (RowNo > MaxRows) MaxRows=RowNo;
    }
  }
  for (var i=el.rows.length-1;i<MaxRows;i++) {
     AddTableRow(el.tBodies[0].id);
  }
}
function LoadImage(el,RowNo) {
  inputName="v"+el.name.replace(/imgDisplay/,"Input");
  theValues=document.getElementsByName(inputName);
  if (theValues.length==0) return;   /* Nothing to Show */
  for (var i=0;i<theValues.length;i++) {
    if (!isWhitespace(theValues[i].value)) {
      el.src="FormImageShow.php?ImageKey="+theValues[i].value;
      el.style.width="250px";
      el.style.display="block";
    }
  }
}
function LoadField(el,RowNo) {
  theValues=document.getElementsByName("v"+el.name.replace(/\[\]/,""));
  if (theValues.length==0) return;   /* Nothing to Show */
  for (var i=0;i<theValues.length;i++) {
    switch (el.type) {
      case "select-one":
        for (var idx=0;idx<el.options.length;idx++) {
          if (el.options[idx].value==theValues[i].value) el.selectedIndex=idx;
        }
      break;
      case "select-multiple":
        for (var idx=0;idx<el.options.length;idx++) {
          if (el.options[idx].value==theValues[i].value) el.options[idx].selected=true;
        }
      break;
      case "checkbox":
        if (el.value==theValues[i].value)  el.checked=true;
        break;
      case "radio":
        if (el.value==theValues[i].value)  el.checked=true;
        break;
      case "text":
        el.value=theValues[i].value;
        break;
      case "file":
        el.value=theValues[i].value;
        break;
      case "search":
        el.value=theValues[i].value;
        break;
      case "textarea":
        el.value=theValues[i].value;
        break;
      case "hidden":
        el.value=theValues[i].value;
        break;
      default:	          
        el.value=theValues[i].value;
        alert("Warning Type Not Found:"+el.type);
    }
  }
}
function AddTableRow(TableID) {
  var table=document.getElementById(TableID);
  var rowClass = table.rows[table.rows.length-1].className;
  if (rowClass=="TableRowEven") rowClass="TableRowOdd";
  else rowClass="TableRowEven";
  var row = table.rows[0];
  var clone = row.cloneNode(true); // copy children too
  var tr=table.appendChild(clone); // add new row to end of table
  tr.className=rowClass;
  for (var i=0;i<tr.cells.length;i++) {
    var td=tr.cells[i];
    for (var j=0;j<td.childNodes.length;j++) {
      el=td.childNodes[j];
      if (el.className) {
        if (el.className.match("CheckBoxCombo")) {
           ClearChild(el,table.rows.length);
        }
      }
      if (el.nodeName=="IMG") {
        if (el.getAttribute("date")!=null) {
          el.setAttribute("date",el.getAttribute("date").replace(/Row.*/,"Row"+table.rows.length));
        }
        if (el.getAttribute("time")!=null) {
          el.setAttribute("time",el.getAttribute("time").replace(/Row.*/,"Row"+table.rows.length));
        }
      }
      if (el.name) {
        if ((el.name.match(/Input/))||(el.name.match(/Code/))||(el.name.match(/Image/))) {
          if (el.name.match(/\[\]/)) {
            el.name=el.name.replace(/Row.*/,"Row"+table.rows.length+"[]");
          } else {
            el.name=el.name.replace(/Row.*/,"Row"+table.rows.length);
          }
          el.id=el.name;
          if (el.getAttribute("returnId")) {
            el.setAttribute("returnId",el.getAttribute("returnId").replace(/Row.*/,"Row"+table.rows.length));
          }
          if (el.getAttribute("returnCode")) {
            el.setAttribute("returnCode",el.name);
          }
          switch (el.type) {
          case "select-one":
             el.selectedIndex=0;
             break;
          case "select-multiple":
             for (var idx=0;idx<el.options.length;idx++) {
               el.options[idx].selected=false;
             }
             break;
          case "checkbox":
             el.checked=false;
             break;
          case "radio":
             el.checked=false;
             break;
          case "file":
             el.value="";
             break;
          case "text":
             el.value="";
             break;
          case "search":
             el.value="";
             break;
          case "textarea":
             el.value="";
             break;
          case "hidden":
             el.value="";
             break;
          default:	          
             el.value="nnn";
             alert("Warning Type Not Found Add:"+el.type);
          }
        }
      }      
    } 
  }
  SetupFormEvents(false);
}
function ClearChild(cell,RowNo) {
  for (var j=0;j<cell.childNodes.length;j++) {
     var field=cell.childNodes[j];
     if (field.name) {
      if ((field.name.match(/Input/))||(field.name.match(/Code/))||(field.name.match(/Image/))) {
        field.name=field.name.replace(/Row.*/,"Row"+RowNo+"[]");
        field.id=field.name+"-"+j;
        switch (field.type) {
        case "select-one":
           field.selectedIndex=0;
           break;
        case "select-multiple":
           for (var idx=0;idx<field.options.length;idx++) {
             field.options[idx].selected=false;
           }
           break;
        case "checkbox":
           field.checked=false;
           break;
        case "radio":
           field.checked=false;
           break;
        case "text":
           field.value="";
           break;
        case "file":
           field.value="";
           break;
        case "search":
           field.value="";
           break;
        case "textarea":
           field.value="";
           break;
        case "hidden":
           field.value="";
           break;
        default:	          
           field.value="nnn";
           alert("Warning Type Not Found Clear:"+field.type);
        }
      }
    }
  }
} 
function DelTableRow(el) {
  var tabEl=el.parentNode.parentNode.parentNode
  if (tabEl.rows.length<2) return;
  tabEl.removeChild(el.parentNode.parentNode);
  rowClass="TableRowEven";
  for (var RowNo=tabEl.rows.length-1;RowNo>-1;RowNo--) {
    var tr = tabEl.rows[RowNo];
	if (rowClass=="TableRowEven") rowClass="TableRowOdd"; 
    else rowClass="TableRowEven";
    tr.className=rowClass;
    for (var i=0;i<tr.cells.length;i++) {
     var td=tr.cells[i];
      for (var j=0;j<td.childNodes.length;j++) {
        field=td.childNodes[j];
        if (field.className) {
          if (field.className.match("CheckBoxCombo")) {
             SetChild(field,RowNo+1);
          }
        }
      if (field.nodeName=="IMG") {
        if (field.getAttribute("date")!=null) {
          field.setAttribute("date",field.getAttribute("date").replace(/Row.*/,"Row"+(RowNo+1)));
        }
        if (field.getAttribute("time")!=null) {
          field.setAttribute("time",field.getAttribute("time").replace(/Row.*/,"Row"+(RowNo+1)));
        }
      }
        if (field.name) {
          if ((field.name.match(/Input/))||(field.name.match(/Code/))||(field.name.match(/Image/))) {
            if (field.name.match(/\[\]/)) {
              field.name=field.name.replace(/\[\]/,"")+"Row"+(RowNo+1)+"[]";
            } else {
              field.name=field.name+"Row"+(RowNo+1);
            }
            field.id=field.name;
            if (field.getAttribute("returnId")!=null) {
              field.setAttribute("returnId",field.getAttribute("returnId").replace(/Row.*/,"Row"+(RowNo+1)));
            }
            if (field.getAttribute("returnCode")!=null) {
              field.setAttribute("returnCode",field.name);
            }
          }
        }
      }
    }
  }
}
function SetChild(cell,RowNo) {
  for (var j=0;j<cell.childNodes.length;j++) {
     var field=cell.childNodes[j];
     if (field.name) {
      if ((field.name.match(/Input/))||(field.name.match(/Code/))||(field.name.match(/Image/))) {
        field.name=field.name.replace(/Row.*/,"Row"+RowNo+"[]");
        field.id=field.name+"-"+j;
      }
    }
  }
}
//------------------------------------------------------------
// Function : Set return path cookie for form list
//------------------------------------------------------------
function SetFormList() {
  document.cookie = "FormList" + "=" + escape(location.href) + ";"
}
//------------------------------------------------------------
// Function : Get return path 
//------------------------------------------------------------
function GoFormList() {
  FormList=GetContentCookie("FormList");
  if (FormList!="unknown") { location.href=FormList }
}
//------------------------------------------------------------
//  createHttpObject: set up object for Ajax_RSExecute calls       
//------------------------------------------------------------
function createHttpObject()
{
  try
  {
    xmlHttp=new XMLHttpRequest(); // Firefox, Opera 8.0+, Safari
  }
  catch (e)
  {
    // Internet Explorer in newer or older form
    try
    {
      xmlHttp=new ActiveXObject("Msxml2.XMLHTTP");
    }
    catch (e)
    {
      try
      {
        xmlHttp=new ActiveXObject("Microsoft.XMLHTTP");
      }
      catch (e)
      {
        alert("Your browser does not support AJAX!");
        return false;
      }
    }
  }
  return xmlHttp;
}
//------------------------------------------------------------
// findPos - following function returns the position of a object
//------------------------------------------------------------
function findPos(obj) {
  var curleft = curtop = 0;
  if (obj.offsetParent) {
    do { curleft += obj.offsetLeft;
         curtop += obj.offsetTop;
       } while (obj = obj.offsetParent);
  }
  return [curleft,curtop];
}
//------------------------------------------------------------
//  RSExecute: execute host procedure using Ajax
//------------------------------------------------------------
function RSExecute(url)
{
  xmlHttp = createHttpObject();

  // Note: this is a Synchronous Ajax call. and Firefox does NOT
  //  triggeer the onreadystatechange event on synchronour calls
  //  so the return analysis code is now inline after the send();
 
  //xmlHttp.onreadystatechange=RSExecuteStateChange;

  RSExecuteResult              = new Object();
  RSExecuteResult.status       = -1;
  RSExecuteResult.return_value = '';
  RSExecuteResult.message      = '';

  url = url + '&httprand='+Math.random();

  xmlHttp.open("GET",url,false);
  xmlHttp.send(null);

  RSExecuteStateChange();

  return RSExecuteResult;
}
//------------------------------------------------------------
//  RSExecuteStateChange - get data back from Ajax_RSExecute call       
//------------------------------------------------------------
function RSExecuteStateChange()
{
  var data = '';
  var start_index = 0;
  var data_start_index = 0;
  var end_index = 0;
  var start_key = '<RETURN_VALUE';
  var end_key = '</RETURN_VALUE>';
  var metatag = '';

  if (xmlHttp.readyState==4)
  {
    if (xmlHttp.status == 200)
    {
      RSExecuteResult.message      = '';
      RSExecuteResult.return_value = '';
      RSExecuteResult.status       =  0;
      data = xmlHttp.responseText;

      if ((start_index = data.indexOf(start_key)) != -1)
      {
        data_start_index = data.indexOf('>',start_index) + 1;
        end_index = data.indexOf(end_key,data_start_index);
        if (end_index == -1)
          end_index = data.length;
        metatag = data.substring(start_index,data_start_index);
        if (metatag.indexOf('TYPE=SIMPLE') != -1)
        {
          RSExecuteResult.return_value=
            unescape(data.substring(data_start_index,end_index));
        }
        else if (metatag.indexOf('TYPE=ERROR') != -1)
        {
          RSExecuteResult.message     =
            unescape(data.substring(data_start_index,end_index));
          alert('Error Message\n' + RSExecuteResult.message)
          RSExecuteResult.status  = -1;
        }
        else if (metatag.indexOf('TYPE=WARNING') != -1)
        {
          RSExecuteResult.message     =
            unescape(data.substring(data_start_index,end_index));
          if(!confirm('Warning Message\n' + RSExecuteResult.message))
          {
            RSExecuteResult.status       =  -1;
          }
        }
      }
    }
    else
    {
      RSExecuteResult.status       = -1;
    }
  }
}
