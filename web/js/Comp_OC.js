//jsVersion  : V11.03.00

//=============================================================================
// Program   : Comp_OC.js
//
// Written   : 05.07.2011
//
// Function  : Standard Functions Used for Other Compensable details
//
// Mods      :
//        V10.03.02 26/03/2012  J.Tan          CAR 249142
//                  Mods to validate postcode only if not blank
//        V10.03.01 15/12/2011  Mike Laming    CAR 257259
//                  Add "trim" to all tests for Postcode "8888"
//        V10.02.01 16.09.2011  Sandra Barcham     248780
//                  Change Financial Election to Claim Type
//        V10.02.00 05.07.2011  Jeni Tan           239592
//                  Created js
//=============================================================================

function valSolicitorPostCode(){
 if(!isWhitespace(UpdateForm.pmext067.value)) {
  UpCase(UpdateForm.pmext067);
  if(trim(UpdateForm.pmext069.value)!="8888"){
    suburb   = UpdateForm.pmext067;
    state    = UpdateForm.pmext068;
    postcode = UpdateForm.pmext069;
    LookupPostCode(UpdateForm.pmext067.value);
  }
 }
}

function GetDefaultPolice(ReturnOrg) {
    var serverURL = "../cgi-bin/mehweb01.pbl?reportno=15" +
        "&valdtype=0"
    var returnValue = RSExecute(serverURL);
    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|");
      ReturnOrg.value=ReturnValue[0];
      DisplayOrg();
    }
}

function DisplayOrg() {
  if (!isWhitespace(document.UpdateForm.pmext143.value)) {
    GetOrg(document.UpdateForm.pmext143,
           document.UpdateForm.orgadd1,
           document.UpdateForm.orgadd2,
           document.UpdateForm.orgadd3,
           document.UpdateForm.orgadd4,
           document.UpdateForm.orgpcode);
  }
}

function GetOrg(ReturnCode,ReturnAdd1,ReturnAdd2,ReturnAdd3,ReturnAdd4,
                ReturnPost)
{
  if (isWhitespace(ReturnCode.value)) {
    ReturnAdd1.value="";
    ReturnAdd2.value="";
    ReturnAdd3.value="";
    ReturnAdd4.value="";
    ReturnPost.value="";
    return;;
  }

  var serverURL = "../cgi-bin/mehweb01.pbl?reportno=15" +
        "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
        "&valdtype=1"

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnAdd1.value=ReturnValue[1];
    ReturnAdd2.value=ReturnValue[2];
    ReturnAdd3.value=ReturnValue[3];
    ReturnAdd4.value=ReturnValue[4];
    ReturnPost.value=ReturnValue[5];
  }
}

function SetPrinter() {
  if(document.UpdateForm.prntform.checked==true) {
    if(isWhitespace(document.UpdateForm.statndes.value)) {
     alert('Claim Type Stationery Form is NOT setup.');
     document.UpdateForm.prntform.checked=false
     return;
    }
    document.UpdateForm.d_statncod.value=document.UpdateForm.statndes.value
    document.UpdateForm.schdprnt.className="Mandatory";
    document.UpdateForm.schdprnt.disabled=false;
  } else {
    document.UpdateForm.d_statncod.value=""
    document.UpdateForm.schdprnt.className="";
    document.UpdateForm.schdprnt.disabled=true;
  }
}


