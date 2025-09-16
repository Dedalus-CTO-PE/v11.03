//jsVersion  : V11.03.00
//========================================================================
// Program   : emrweb0602019hea.js
//
// Written   : 06.08.2018 Peter Vela
//
// Function  : Standard Functions Used in hea/emrweb0602019.html
//
//========================================================================
function ClosePg() {
  document.AddForm.action="emrweb02.pbl"
  document.AddForm.reportno.value="1"
  document.AddForm.template.value="100"
  document.AddForm.submit()
}
function init() {
  if (document.AddForm.emerstat.value=="4") {
     alert("Cancelled Visit.");
     PatientLinks.submit()
  }

  if (isWhitespace(document.AddForm.emerdoct.value)) {
     alert("No attending doctor assigned.");
     PatientLinks.submit()
  }

PageLocation="?reportno=1&template=4" +
               "&urnumber=" + PatientURN.replace(/ /g,"+") +
               "&admissno=" + PatientVIS.replace(/ /g,"+")
  if(top.content.location.search.substring(1,23)!="reportno=1&template=16"&&
     top.content.location.search.substring(1,23)!="reportno=1&template=17"){
    if (top.content.location.search!=this.location.search) {
      if (top.content.location.search!=PageLocation) {
      top.content.location.href="emrweb02.pbl" + PageLocation } }
  }
}
function ValdMiscItem(tickbox,ReturnCode,DateField,amountit,quantity,thisfield) {

    if ((thisfield != undefined && thisfield.checked) ||
         tickbox.checked) {
    var serverURL = "../cgi-bin/comweb81.pbl?reportno=11&valdcode=" +
                     document.AddForm.admissno.value.replace(/ /g,"+") +
                     "&valdcod2=" +
                     ReturnCode.replace(/ /g,"+");

    var returnValue = RSExecute(serverURL);
    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|");
      if (ReturnValue[0] == "1") {
       if(!confirm("Item "+ReturnCode +" already added by Dr. "+
                   trim(ReturnValue[1])+
                   ". Do you wish to continue?")) {
         if (thisfield != undefined) {
           thisfield.checked=false; 
         } else {
           tickbox.checked=false;
         }
         return;
       }
      }
    }
    }

 if(tickbox.checked==true) {
  var serverURL = "../cgi-bin/patweb80.pbl?reportno=4" +
        "&valdcode=" + ReturnCode.replace(/ /g,"+") +
        "&returndt=" + DateField.value.replace(/ /g,"+") +
        "&valdadno=" + AddForm.admissno.value.replace(/ /g,"+") +
        "&valdtype=3"

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
     ReturnValue=returnValue.return_value.split("|");
     document.AddForm.patportn.value=ReturnValue[12];
     document.AddForm.hfnportn.value=ReturnValue[13];
     AddTotal(amountit,document.AddForm.patportn,document.AddForm.hfnportn);
     quantity.value="1";
  } else {
     tickbox.checked=false;
     return;
  }
 } else {
     amountit.value=" ";
     quantity.value=" ";
 }

 if(tickbox.name=="tkbox038") {
  var serverURL = "../cgi-bin/patweb80.pbl?reportno=4" +
        "&valdcode=" + ReturnCode.replace(/ /g,"+") +
        "&returndt=" + DateField.value.replace(/ /g,"+") +
        "&valdadno=" + AddForm.admissno.value.replace(/ /g,"+") +
        "&valdtype=3"

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
     ReturnValue=returnValue.return_value.split("|");
     document.AddForm.patportn.value=ReturnValue[12];
     document.AddForm.hfnportn.value=ReturnValue[13];
     AddTotal(amountit,document.AddForm.patportn,document.AddForm.hfnportn);
     quantity.value="1";
     tickbox.value="1";
  } else {
     tickbox.value="";
     return;
  }
 }

}
function SetCharge(iamnt,quantity,amount) {
      amount.value = (quantity.value*iamnt.value);
      RoundNumber(amount,2);
      justifyLeft(amount)
}
function validateFFB() {

  for (var x=1; x<43; x++) {
    if (x != 38) {
      x = getProciNumber(x);
//      var serverURL = "../cgi-bin/comweb81.pbl?reportno=12&valdcode=" +
//                 document.getElementById("proci"+x).value.replace(/ /g,"+") +
//                 "&valdfund=" +
//                 document.AddForm.valdfund.value.replace(/ /g,"+") +
//                 "&valdtabl=" +
//                 document.AddForm.valdtabl.value.replace(/ /g,"+") +
//                 "&valdclmt=" +
//                 document.AddForm.valdclmt.value.replace(/ /g,"+");
//
//      var returnValue = RSExecute(serverURL);
//      if (returnValue.status==0) {
//        if (returnValue.return_value != "1") {
//          document.getElementById("tkbox"+x).checked=false;
//          document.getElementById("tkbox"+x).disabled=true;
//          document.getElementById("pamnt"+x).disabled=true;
//          document.getElementById("pquan"+x).disabled=true;
//        }
//      }

      if (document.getElementById("mschi"+x).value != "1") {
        document.getElementById("tkbox"+x).checked=false;
        document.getElementById("tkbox"+x).disabled=true;
        document.getElementById("pamnt"+x).disabled=true;
        document.getElementById("pquan"+x).disabled=true;
      }
    }
  }

  for (var x=0; x<8; x++) {
//    var serverURL = "../cgi-bin/comweb81.pbl?reportno=12&valdcode=" +
//                     document.AddForm.proci038[x].value.replace(/ /g,"+") +
//                    "&valdfund=" +
//                    document.AddForm.valdfund.value.replace(/ /g,"+") +
//                    "&valdtabl=" +
//                    document.AddForm.valdtabl.value.replace(/ /g,"+") +
//                    "&valdclmt=" +
//                    document.AddForm.valdclmt.value.replace(/ /g,"+");
//
//    var returnValue = RSExecute(serverURL);
//    if (returnValue.status==0) {
////alert( document.AddForm.proci038[x].value+" "+returnValue.return_value);
//      if (returnValue.return_value != "1") {
//        document.AddForm.proci038[x].checked=false;
//        document.AddForm.proci038[x].disabled=true;
//      }
//    }

//    if (x != 5) {
//      y = getProciNumber(x+1);
//      if (document.getElementById("fafeb"+y).value != "1") {
//        document.AddForm.proci038[x].checked=false;
//        document.AddForm.proci038[x].disabled=true;
//      }
//    }

  }

  if (document.getElementById("fafeb001").value != "1") {
    document.AddForm.proci038[0].checked=false;
    document.AddForm.proci038[0].disabled=true;
  }
  if (document.getElementById("fafeb002").value != "1") {
    document.AddForm.proci038[1].checked=false;
    document.AddForm.proci038[1].disabled=true;
  }
  if (document.getElementById("fafeb008").value != "1") {
    document.AddForm.proci038[2].checked=false;
    document.AddForm.proci038[2].disabled=true;
  }
  if (document.getElementById("fafeb003").value != "1") {
    document.AddForm.proci038[3].checked=false;
    document.AddForm.proci038[3].disabled=true;
  }
  if (document.getElementById("fafeb004").value != "1") {
    document.AddForm.proci038[4].checked=false;
    document.AddForm.proci038[4].disabled=true;
  }
//  if (document.getElementById("fafeb005").value != "1") {
//    document.AddForm.proci038[5].checked=false;
//    document.AddForm.proci038[5].disabled=true;
//  }
  if (document.getElementById("fafeb006").value != "1") {
    document.AddForm.proci038[6].checked=false;
    document.AddForm.proci038[6].disabled=true;
  }
  if (document.getElementById("fafeb007").value != "1") {
    document.AddForm.proci038[7].checked=false;
    document.AddForm.proci038[7].disabled=true;
  }

  var serverURL = "../cgi-bin/comweb81.pbl?reportno=13&valdcode=" +
                  document.AddForm.proci038[5].value.replace(/ /g,"+") +
                  "&valddate=" +
                  document.AddForm.arrvdate.value.replace(/ /g,"+");

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    if (returnValue.return_value != "1") {
      document.AddForm.proci038[5].checked=false;
      document.AddForm.proci038[5].disabled=true;
    } else {
      document.AddForm.proci038[5].disabled=false;
    }
  }

  for (var x=0; x<8; x++) {
    y = getProciNumber(x+1);
    if (document.getElementById("alinv"+y).value == "1") {
      document.AddForm.proci038[0].checked=false;
      document.AddForm.proci038[0].disabled=true;
      document.AddForm.proci038[1].checked=false;
      document.AddForm.proci038[1].disabled=true;
      document.AddForm.proci038[2].checked=false;
      document.AddForm.proci038[2].disabled=true;
      document.AddForm.proci038[3].checked=false;
      document.AddForm.proci038[3].disabled=true;
      document.AddForm.proci038[4].checked=false;
      document.AddForm.proci038[4].disabled=true;
      document.AddForm.proci038[5].checked=false;
      document.AddForm.proci038[5].disabled=true;
      document.AddForm.proci038[6].checked=false;
      document.AddForm.proci038[6].disabled=true;
      document.AddForm.proci038[7].checked=false;
      document.AddForm.proci038[7].disabled=true;
      break;
    }

  }


    if (document.getElementById("alinv005").value == "1") {
      document.AddForm.proci038[0].checked=false;
      document.AddForm.proci038[0].disabled=true;
      document.AddForm.proci038[1].checked=false;
      document.AddForm.proci038[1].disabled=true;
      document.AddForm.proci038[2].checked=false;
      document.AddForm.proci038[2].disabled=true;
      document.AddForm.proci038[3].checked=false;
      document.AddForm.proci038[3].disabled=true;
      document.AddForm.proci038[4].checked=false;
      document.AddForm.proci038[4].disabled=true;
      document.AddForm.proci038[5].checked=false;
      document.AddForm.proci038[5].disabled=true;
      document.AddForm.proci038[6].checked=false;
      document.AddForm.proci038[6].disabled=true;
      document.AddForm.proci038[7].checked=false;
      document.AddForm.proci038[7].disabled=true;
    }

//  for (var x=0; x<7; x++) {
//    var serverURL = "../cgi-bin/comweb81.pbl?reportno=11&valdcode=" +
//                     document.AddForm.admissno.value.replace(/ /g,"+") +
//                     "&valdcod2=" +
//                     document.AddForm.proci038[x].value.replace(/ /g,"+");
//
//    var returnValue = RSExecute(serverURL);
//    if (returnValue.status==0) {
//      if (returnValue.return_value == "1") {
//        document.AddForm.proci038[x].checked=false;
//        document.AddForm.proci038[x].disabled=true;
//      }
//    }
//  }

  if (document.AddForm.claimcod.value.substr(3,5).search("D") > -1 ||
      document.AddForm.claimcod.value.substr(3,5).search("V") > -1 ||
      document.AddForm.claimcod.value.substr(3,5).search("W") > -1 ||
      document.AddForm.claimcod.value.substr(3,5).search("M") > -1) {
    document.AddForm.proci038[0].disabled=true;
    document.AddForm.proci038[1].disabled=true;
    document.AddForm.proci038[2].disabled=true;
  }

  if (document.AddForm.claimcod.value.substr(3,5).search("W") == -1) {
    document.AddForm.proci038[3].disabled=true;
  }

  if (document.AddForm.claimcod.value.substr(3,5).search("M") == -1) {
    document.AddForm.proci038[4].disabled=true;
  }

  if (document.AddForm.claimcod.value.substr(3,5).search("V") == -1 &&
      document.AddForm.claimcod.value.substr(3,5).search("D") == -1) {
    document.AddForm.proci038[5].disabled=true;
  }

  if (document.AddForm.claimcod.value.substr(3,1) != 1) {
    document.AddForm.proci038[6].disabled=true;
  }

//  for (var x=0; x<7; x++) {
//    if (document.AddForm.proci038[x].disabled==false) {
//      document.AddForm.proci038[x].checked=true;
//      if (x!=4) {
//        ValdMiscItem(document.AddForm.tkbox038,
//                     document.AddForm.proci038[x].value,
//                     document.AddForm.procdate,
//                     document.AddForm.pamnt038,
//                     document.AddForm.pquan038);
//      }
//      return;
//    }
//  }

}
function AddItem() {
    Urnumber=AddForm.urnumber.value.replace(/ /g,"+");
    Admissno=AddForm.admissno.value.replace(/ /g,"+");
    Left=(document.body.clientWidth-770)/2
    LinkURL="patweb75.pbl?reportno=01&template=001&urnumber=" + Urnumber +
            "&admissno=" + Admissno
    SetCookie("OtherChargesCOOKIE",'1');
    DFrameLink(LinkURL,50,Left,940,400);
}
function getProciNumber(procinumber) {

  if (procinumber < 10) {
    x = "00" + procinumber;
  }

  if (procinumber > 9 && procinumber < 100) {
    x = "0" + procinumber;
  }

  return x;

}
