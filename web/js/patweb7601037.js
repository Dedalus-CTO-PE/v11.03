//jsVersion  : V11.03.00

//========================================================================
// Program   : patweb7601037.js
//  
// Written   : 15.01.2008  Davin
//  
// Function  : Standard Functions for patweb7601037.html
//      
// Version   : V11.01.01  08/06/2021  Tony Hui       TSK 0906777
//                        Updated functions validateMbs and validateMisc 
//                        to use FocusDelay() to prevent Chrome's Infinite 
//                        onBlur Loop Issue. 
//             V9.09.00   15/01/2008  Davin          CAR 153384
//                        Created js
//========================================================================

function checkGST(GSTAppl,GSTCode) {
  if (GSTAppl.selectedIndex==1) {
    GSTCode.className="Mandatory";
  }     
  else {
    GSTCode.className="";
  }     
}       
function validateHFund() {
  if (isWhitespace(UpdateForm.pmsfi009.value)) {
     UpdateForm.pmsfi010.className="";
     clrDoc(UpdateForm.pmsfi009,UpdateForm.funddesc);
     clrDoc(UpdateForm.pmsfi010,UpdateForm.tabdesc);
  }
  else {
     if (validateCode(16,UpdateForm.pmsfi009,UpdateForm.funddesc)) {
       UpdateForm.pmsfi010.className="Mandatory";
     }
     else {
       clrHFundvars();
     }
  }
}

function clrHFundvars() {
  UpdateForm.pmsfi010.className="";
  clrDoc(UpdateForm.pmsfi009,UpdateForm.funddesc);
  clrDoc(UpdateForm.pmsfi010,UpdateForm.tabdesc);
  UpdateForm.pmsfi009.select();
}
function checkTheatre(ReturnCode,ReturnName,GSTAppl,GSTCode) {
  if (validateMbs(ReturnCode,ReturnName,UpdateForm.tempamnt,
                  UpdateForm.tempgsta,UpdateForm.tempgstc,
                  UpdateForm.suggclss,UpdateForm.dcasclss)) {

    if (UpdateForm.pmsfi006.value==0) {
      UpdateForm.suggclss.value=UpdateForm.dcasclss.value;
    }

    if (UpdateForm.tempgsta.value==2) {
      GSTAppl.disabled=false;
      GSTAppl.className="Mandatory";
      GSTCode.disabled=false;
      for (var i =0 ; i < GSTCode.length; i++) {
          if (GSTCode.options[i].value==UpdateForm.tempgstc.value) {
            GSTCode.selectedIndex=i } };
    }
    else {
      disableTF(GSTAppl,GSTCode);
      GSTAppl.value=UpdateForm.tempgsta.value;
      GSTCode.value=UpdateForm.tempgstc.value;
    }
//
//  only get Admission type default on first theatre fee item
//
    if (ReturnCode.name=="thefee01") {
      if (isWhitespace(UpdateForm.suggclss.value)) {
        UpdateForm.pmsfi010.value=UpdateForm.pmsfi010.value+"      ";
        UpdateForm.dummy.value=UpdateForm.pmsfi010.value.substr(0,6)
                              +UpdateForm.thefee01.value;
        validateCode(67,UpdateForm.dummy,UpdateForm.suggclss)
      }
      if (!isWhitespace(UpdateForm.suggclss.value)) {
        for (i=0; i<UpdateForm.pmsfi035.length; i++) {
          if (UpdateForm.pmsfi035.options[i].value.substr(0,3)==
              UpdateForm.suggclss.value) {
            UpdateForm.pmsfi035.selectedIndex=i;
          }
        }
      }
    }
//
  }
}

function validateMbs(ReturnCode,ReturnName,Amount,GSTAppl,GSTCode,suggClass,dcasClass) {
  if (isWhitespace(ReturnCode.value)) {
    return;;
  }
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=4" +
                 "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=trim(ReturnValue[0]);
    Amount.value=ReturnValue[1];
    GSTAppl.value=ReturnValue[2];
    GSTCode.value=ReturnValue[3];
    suggClass.value=ReturnValue[4];
    dcasClass.value=ReturnValue[10];

    if (ReturnValue[6]==1) {
      alert("Warning: A Prosthetic may need to be entered.");
    }

    return true;
  }
  else {
    FocusDelay(ReturnCode);
    return false;
  }
}

function checkMisc(ReturnCode,ReturnName,GSTAppl,GSTCode) {
  if (validateMisc(ReturnCode,ReturnName,
                  UpdateForm.tempgsta,
                  UpdateForm.tempgstc)) {

    if (UpdateForm.tempgsta.value==2) {
      GSTAppl.disabled=false;
      GSTAppl.className="Mandatory";
      GSTCode.disabled=false;
      for (var i =0 ; i < GSTCode.length; i++) {
          if (GSTCode.options[i].value==UpdateForm.tempgstc.value) {
            GSTCode.selectedIndex=i } };
    }
    else {
      disableTF(GSTAppl,GSTCode);
      GSTAppl.value=UpdateForm.tempgsta.value;
      GSTCode.value=UpdateForm.tempgstc.value;
    }
 }
}

function validateMisc(ReturnCode,ReturnName,GSTAppl,GSTCode) {
  if (isWhitespace(ReturnCode.value)) {
    return;;
  }
  var serverURL   = "../cgi-bin/patweb80.pbl?reportno=40" +
                 "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                 "&valdtype=1"

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=trim(ReturnValue[0]);
    GSTAppl.value=ReturnValue[1];
    GSTCode.value=ReturnValue[2];
    return true;
  }
  else {
    FocusDelay(ReturnCode);
    return false;
  }
}

function disableTF(GSTAppl,GSTCode) {
  GSTAppl.className="";
  GSTAppl.selectedIndex=0;
  GSTAppl.disabled=true;
  GSTCode.className="";
  GSTCode.selectedIndex=0;
  GSTCode.disabled=true;
}
