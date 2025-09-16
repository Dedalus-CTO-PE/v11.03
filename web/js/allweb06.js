//jsVersion  : V11.03.00
//========================================================================
// Program   : allweb06.js
//
// Written   : 09.07.2007     
//
// Function  : Standard Functions Used in allweb06 templates 
//
// V9.09.00   09.07.2007 Ebon Clements    CAR 135536
//            Created include
//========================================================================
// Report 1 
//========================================================================
function AddSession() {
 linkurl = "../cgi-bin/allweb06.pbl?reportno=1&template=002"
 Left=(document.body.clientWidth-550)/2
 DFrameLink(linkurl,50,Left,550,350)
}
//
function UpdateSession(prog) {
 linkurl = "../cgi-bin/allweb06.pbl?reportno=1&template=003" +
           "&algro001=" + prog.replace(/ /g,"+")
 location.href=linkurl
}
//
function FilterSubmit() {
 if(validateMandatory(Filter)) {
   document.Filter.submit();
 }
}
//
function PostAddSession() {
  if(document.AddForm.d_algro011.checked==true) {
    document.AddForm.algro011.value="0";
  } else {
    document.AddForm.algro011.value="1";
  }
  SubmitFormNew();
}
//
function PostSession() {
 if(validateMandatory(UpdateForm)) {
  if(document.UpdateForm.d_algro011.checked==true) {
    document.UpdateForm.algro011.value="0";
  } else {
    document.UpdateForm.algro011.value="1";
  }
  document.UpdateForm.updttype.value="U";
  document.UpdateForm.redirect.value = "allweb06.pbl?reportno=1&template=003" +
           "&algro001=" + UpdateForm.algro001.value.replace(/ /g,"+") +
           "&listview=" + UpdateForm.listview.value.replace(/ /g,"+")
  document.UpdateForm.submit();
 }
}
//
function DeleteSession() {
 if(validateMandatory(UpdateForm)) {
  if(document.UpdateForm.d_algro011.checked==true) {
    document.UpdateForm.algro011.value="0";
  } else {
    document.UpdateForm.algro011.value="1";
  }
  if(!confirm("Are you sure you want to Delete ?")) {
    return;
  }
  document.UpdateForm.updttype.value="D";
  document.UpdateForm.redirect.value = "allweb06.pbl?reportno=1&template=001"
  document.UpdateForm.submit();
 }
}
//
function OpenProgList() {
 linkurl = "../cgi-bin/allweb06.pbl?reportno=2&template=001" +
              "&algro001=" + UpdateForm.algro001.value.replace(/ /g,"+")
 location.href=linkurl
}
//
function OpenSessList() {
 linkurl = "../cgi-bin/allweb06.pbl?reportno=2&template=009" +
              "&algro001=" + UpdateForm.algro001.value.replace(/ /g,"+")
 location.href=linkurl
}
//
function ListView() {
 view=UpdateForm.listview.value
 if(view=="0") {
   linkurl = "../cgi-bin/allweb06.pbl?reportno=1&template=003" +
             "&algro001=" + UpdateForm.algro001.value.replace(/ /g,"+") +
             "&listview=1"
 } else {
   linkurl = "../cgi-bin/allweb06.pbl?reportno=1&template=003" +
             "&algro001=" + UpdateForm.algro001.value.replace(/ /g,"+") +
             "&listview=0"
 }
 location.href=linkurl
}
//
function AddPatientHCP() {
 view=UpdateForm.listview.value
 if(view=="0") {
    linkurl = "../cgi-bin/allweb06.pbl?reportno=1&template=004" +
              "&algro001=" + UpdateForm.algro001.value.replace(/ /g,"+")
 }
 if(view=="1") {
    linkurl = "../cgi-bin/allweb06.pbl?reportno=1&template=006" +
              "&algro001=" + UpdateForm.algro001.value.replace(/ /g,"+")
 }
 Left=(document.body.clientWidth-750)/2
 DFrameLink(linkurl,50,Left,750,550)
}
//
function SessionList() {
 linkurl = "../cgi-bin/allweb06.pbl?reportno=1&template=001"
 location.href=linkurl
}
//
function UpdatePatient(prog,ref,stat) {
 if(stat!="0") {
   alert("This group session is inactive.");
   return;
 }
 linkurl = "../cgi-bin/allweb06.pbl?reportno=1&template=005" +
           "&algro001=" + prog.replace(/ /g,"+") +
           "&algrp001=" + prog.replace(/ /g,"+") +
           "&algrp003=" + ref.replace(/ /g,"+")
 Left=(document.body.clientWidth-450)/2
 DFrameLink(linkurl,50,Left,450,300)
}
//
function UpdateHCP(prog,hcp,spec,stat) {
 if(stat!="0") {
   alert("This group session is inactive.");
   return;
 }
 linkurl = "../cgi-bin/allweb06.pbl?reportno=1&template=007" +
           "&algro001=" + prog.replace(/ /g,"+") +
           "&algrh001=" + prog.replace(/ /g,"+") +
           "&algrh002=" + hcp.replace(/ /g,"+") +
           "&algrh003=" + spec.replace(/ /g,"+")
 Left=(document.body.clientWidth-450)/2
 DFrameLink(linkurl,50,Left,450,250)
}
//
function PostAddPatient() {
  document.AddForm.algrp002.value=document.AddForm.urnumber.value
  if(document.AddForm.d_algrp004.checked==true) {
    document.AddForm.algrp004.value="0";
  } else {
    document.AddForm.algrp004.value="1";
  } 
  SubmitFormNew();
} 
//
function PostAddHCP() {
  if(document.AddForm.d_algrh004.checked==true) {
    document.AddForm.algrh004.value="0";
  } else {
    document.AddForm.algrh004.value="1";
  }
  SubmitFormNew();
}
//
function PostUpdatePatient() {
  if(validateMandatory(UpdateForm)) {
    if(document.UpdateForm.d_algrp004.checked==true) {
      document.UpdateForm.algrp004.value="0";
    } else {
      document.UpdateForm.algrp004.value="1";
    }
    document.UpdateForm.updttype.value="R";
    document.UpdateForm.submit();
  }
}
//
function DeletePatient() {
  if(!confirm("Are you sure you want to Delete ?")) {
    return;
  }
  document.UpdateForm.updttype.value="S";
  document.UpdateForm.submit();
}
//
function DeleteHCP() {
  if(!confirm("Are you sure you want to Delete ?")) {
    return;
  }
  document.UpdateForm.updttype.value="V";
  document.UpdateForm.submit();
}
//
function LoadSearch() {
  VisitSearchFrameAll(AddForm.urnumber,AddForm.algrp003);
}   
//
function GetSpec() {
  SelectSpecialty(AddForm.algrh002,AddForm.algrh003)
}
//
//========================================================================
// Report 2 
//========================================================================
//
function OpenSession() {
 linkurl = "../cgi-bin/allweb06.pbl?reportno=2&template=002" +
           "&algro001=" + UpdateForm.algro001.value.replace(/ /g,"+")
 Left=(document.body.clientWidth-450)/2
 DFrameLink(linkurl,50,Left,450,250)
}
//
function LinkSession() {
 linkurl = "../cgi-bin/allweb06.pbl?reportno=1&template=003" +
              "&algro001=" + UpdateForm.algro001.value.replace(/ /g,"+")
 location.href=linkurl
}
//
function LinkContact(status) {
 if(status!="1") {
   linkurl = "../cgi-bin/allweb06.pbl?reportno=1&template=008" +
                "&algro001=" + UpdateForm.algro001.value.replace(/ /g,"+")
 location.href=linkurl
 } else {
 linkurl = "../cgi-bin/allweb06.pbl?reportno=2&template=001" +
              "&algro001=" + UpdateForm.algro001.value.replace(/ /g,"+")
 location.href=linkurl
 }
}
//
function DeletePatient02() {
  if(!confirm("Are you sure you want to Delete ?")) {
    return;
  }
  if(confirm("Delete Patient from session master ?")) {
    document.UpdateForm.addmastr.value="1";
  }
  document.UpdateForm.updttype.value="S";
  document.UpdateForm.submit();
}
//
function DeleteHCP02() {
  if(!confirm("Are you sure you want to Delete ?")) {
    return;
  }
  if(confirm("Delete HCP from session master ?")) {
    document.UpdateForm.addmastr.value="1";
  }
  document.UpdateForm.updttype.value="V";
  document.UpdateForm.submit();
}
function UpdateSession02(cont,prog) {
 linkurl = "../cgi-bin/allweb06.pbl?reportno=2&template=003" +
              "&algre001=" + cont.replace(/ /g,"+") +
              "&algre002=" + prog.replace(/ /g,"+") +
              "&algro001=" + prog.replace(/ /g,"+")
 location.href=linkurl
}
//
function PostSession02(cont,prog) {
 if(validateMandatory(UpdateForm)) {
  document.UpdateForm.updttype.value="U";
  document.UpdateForm.redirect.value = "allweb06.pbl?reportno=2&template=003" +
           "&algre001=" + UpdateForm.algre001.value.replace(/ /g,"+") +
           "&algre002=" + UpdateForm.algre002.value.replace(/ /g,"+") +
           "&algro001=" + UpdateForm.algre002.value.replace(/ /g,"+") +
           "&listview=" + UpdateForm.listview.value.replace(/ /g,"+")
  document.UpdateForm.submit();
 }
}
//
function DeleteSession02() {
 if(validateMandatory(UpdateForm)) {
  if(!confirm("Are you sure you want to Delete ?")) {
    return;
  }
  document.UpdateForm.updttype.value="D";
  document.UpdateForm.redirect.value = "allweb06.pbl?reportno=2&template=009" +
          "&algro001=" + document.UpdateForm.algro001.value.replace(/ /g,"+")
  document.UpdateForm.submit();
 }
}
//
function AddPatientHCP02(cont,prog) {
 view=UpdateForm.listview.value
 if(view=="0") {
    linkurl = "../cgi-bin/allweb06.pbl?reportno=2&template=004" +
              "&algro001=" + UpdateForm.algro001.value.replace(/ /g,"+") +
              "&algre002=" + UpdateForm.algre002.value.replace(/ /g,"+") +
              "&algre001=" + UpdateForm.algre001.value.replace(/ /g,"+")
 }
 if(view=="1") {
    linkurl = "../cgi-bin/allweb06.pbl?reportno=2&template=006" +
              "&algro001=" + UpdateForm.algro001.value.replace(/ /g,"+") +
              "&algre002=" + UpdateForm.algre002.value.replace(/ /g,"+") +
              "&algre001=" + UpdateForm.algre001.value.replace(/ /g,"+")
 }
 Left=(document.body.clientWidth-750)/2
 DFrameLink(linkurl,50,Left,950,550)
}
//
function UpdatePatient02(sess,cont,ref) {
 linkurl = "../cgi-bin/allweb06.pbl?reportno=2&template=005" +
           "&algro001=" + sess.replace(/ /g,"+") +
           "&algpa001=" + cont.replace(/ /g,"+") +
           "&algpa003=" + ref.replace(/ /g,"+")
 Left=(document.body.clientWidth-450)/2
 DFrameLink(linkurl,50,Left,450,250)
}
//
function UpdateHCP02(sess,cont,hcp,spec) {
 linkurl = "../cgi-bin/allweb06.pbl?reportno=2&template=007" +
           "&algro001=" + sess.replace(/ /g,"+") +
           "&algeh001=" + cont.replace(/ /g,"+") +
           "&algeh002=" + hcp.replace(/ /g,"+") +
           "&algeh003=" + spec.replace(/ /g,"+")
 Left=(document.body.clientWidth-450)/2
 DFrameLink(linkurl,50,Left,450,250)
}
//
function GlobalUpd() {
 linkurl = "../cgi-bin/allweb06.pbl?reportno=2&template=008" +
           "&algro001=" + UpdateForm.algro001.value.replace(/ /g,"+") +
           "&algre002=" + UpdateForm.algre002.value.replace(/ /g,"+") +
           "&algre001=" + UpdateForm.algre001.value.replace(/ /g,"+")
 Left=(document.body.clientWidth-500)/2
 DFrameLink(linkurl,50,Left,500,200)
}
//
function PostAddPatient02() {
  document.AddForm.algpa002.value=document.AddForm.urnumber.value
  document.AddForm.algrp002.value=document.AddForm.urnumber.value
  document.AddForm.algrp003.value=document.AddForm.algpa003.value

  if(document.AddForm.d_algpa006.checked==true) {
    document.AddForm.algpa006.value="1";
  } else {
    document.AddForm.algpa006.value="0";
  } 
  SubmitFormNew();
} 
//
function PostAddHCP02() {
  document.AddForm.algrh002.value=document.AddForm.algeh002.value
  document.AddForm.algrh003.value=document.AddForm.algeh003.value
  SubmitFormNew();
}
//
function PostUpdatePatient02() {
  if(validateMandatory(UpdateForm)) {
    if(document.UpdateForm.d_algpa004.checked==true) {
      document.UpdateForm.algpa004.value="1";
    } else {
      document.UpdateForm.algpa004.value="0";
    }
    if(document.UpdateForm.d_algpa006.checked==true) {
      document.UpdateForm.algpa006.value="1";
    } else {
      document.UpdateForm.algpa006.value="0";
    }
    document.UpdateForm.updttype.value="R";
    document.UpdateForm.submit();
  }
}
//
function PostUpdateHCP() {
  if(validateMandatory(UpdateForm)) {
    if(document.UpdateForm.d_algrh004.checked==true) {
      document.UpdateForm.algrh004.value="0";
    } else {
      document.UpdateForm.algrh004.value="1";
    } 
    document.UpdateForm.updttype.value="W";
    document.UpdateForm.submit();
  } 
} 
function PostUpdateHCP02() {
  if(validateMandatory(UpdateForm)) {
    document.UpdateForm.updttype.value="W";
    document.UpdateForm.submit();
  } 
} 
//
function LoadSearch2() {
  VisitSearchFrameAll(AddForm.urnumber,AddForm.algpa003);
}   
//
function GetSpec2() {
  SelectSpecialty(AddForm.algeh002,AddForm.algeh003)
}
//
function ShowDiv(action) {
  if(action.value=="3") {
    InsertDiv.innerHTML=PatientStat.innerHTML;
    filterCatCodeList(AddForm.algpa005,'1','G','3');
  } else if(action.value=="4") {
    InsertDiv.innerHTML=HCPStat.innerHTML;
  } else {
    InsertDiv.innerHTML="";
  }
}
//
function OpenListView() {
 view=UpdateForm.listview.value
 if(view=="0") {
   linkurl = "../cgi-bin/allweb06.pbl?reportno=2&template=003" +
             "&algro001=" + UpdateForm.algro001.value.replace(/ /g,"+") +
             "&algre002=" + UpdateForm.algre002.value.replace(/ /g,"+") +
             "&algre001=" + UpdateForm.algre001.value.replace(/ /g,"+") +
             "&listview=1"
 } else {
   linkurl = "../cgi-bin/allweb06.pbl?reportno=2&template=003" +
             "&algro001=" + UpdateForm.algro001.value.replace(/ /g,"+") +
             "&algre002=" + UpdateForm.algre002.value.replace(/ /g,"+") +
             "&algre001=" + UpdateForm.algre001.value.replace(/ /g,"+") +
             "&listview=0"
 }
 location.href=linkurl
}
//
//========================================================================
// Common functions
//========================================================================
//
function CheckReferral(OptionNumber,ReturnCode,ReturnDep,ReturnName,ReturnLink,ReturnClaim,ReturnClinic,ReturnWait,ReturnUR) {
  ReturnFunction="" ;
  ReturnName.value="";
  if (isWhitespace(ReturnCode.value)) return;;
    
  var serverURL  = "../cgi-bin/allweb03.pbl?reportno=" + OptionNumber +
               "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
               "&valddept=" + ReturnDep.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|")
    ReturnName.value=ReturnValue[0]
    ReturnLink.value=ReturnValue[1]
    ReturnClaim.value=ReturnValue[2]
    document.AddForm.deftclmc.value=ReturnValue[2]
    ReturnClinic.value=ReturnValue[3]
    document.AddForm.deftclin.value=ReturnValue[3]
    ReturnWait=ReturnValue[4]
    document.AddForm.status.value=ReturnValue[4]
    ReturnUR=ReturnValue[5]
    document.AddForm.urnumber.value=ReturnValue[5]
  } else {
    ReturnName.value="";
    ReturnLink.value="";
    ReturnClaim.value="";
    ReturnClinic.value="";
    ReturnCode.select();  }
}
//
function SelectSpecialty(ReturnCode,ReturnSelect) {
  if (isWhitespace(ReturnCode.value)) return;;
  var serverURL   = "../cgi-bin/allweb06.pbl?reportno=3&functype=1" +
                    "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnSelect.options.length=0
    ReturnSelect.options[ReturnSelect.options.length]=new Option("","");
    ReturnValue=returnValue.return_value.split("|");
    for (var j=0; j < ReturnValue.length; j++) {
       if (!isWhitespace(ReturnValue[j])) {
         SelectValue=ReturnValue[j].split(",");
         ReturnSelect.options[ReturnSelect.options.length]=
          new Option(SelectValue[1],SelectValue[0]); } } }
  else {  
    ReturnCode.select();  }
}   
//
function UpdateMeal(checkbox){
  if (checkbox.checked==true) {
     Updatet=0
  } else {
     Updatet=1
  }
  var serverURL   = "../cgi-bin/allweb06.pbl?reportno=3&functype=2" +
                    "&valdcode=" + checkbox.value.replace(/ /g,"+") +
                    "&updttype=" + Updatet
  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {
    ReturnCode.select();  }
}
//
function UpdateCurp(checkbox){
  if (checkbox.checked==true) {
     Updatet=2
  } else {
     Updatet=3
  }
  var serverURL   = "../cgi-bin/allweb06.pbl?reportno=3&functype=2" +
                    "&valdcode=" + checkbox.value.replace(/ /g,"+") +
                    "&updttype=" + Updatet
  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {
    ReturnCode.select();  }
}
