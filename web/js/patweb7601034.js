//jsVersion  : V11.03.04

//========================================================================

function validateClaim() {

// Private - Health Fund mandatory

  if (!isWhitespace(UpdateForm.pmsfd008.value)) {
    if (document.UpdateForm.pmsfd008.value.substr(7,1)=="1") {
       document.UpdateForm.pmsfd005.className="Mandatory";
       document.UpdateForm.pmsfd006.className="Mandatory";
    } else {
       document.UpdateForm.pmsfd005.className="";
       document.UpdateForm.pmsfd006.className="";
    }
  }

// Uninsured - Default Cover rate disabled

  if (!isWhitespace(UpdateForm.pmsfd008.value)) {
    if (document.UpdateForm.pmsfd008.value.substr(7,1)=="3") {
      document.UpdateForm.d_pmsfd030.disabled = true;
    } else {
      document.UpdateForm.d_pmsfd030.disabled = false;
    }
  }

}
function billingDefault() {
    getBillingDefaultHEA(UpdateForm.pmsfd008,UpdateForm.pmsfd005,
                         UpdateForm.pmsfd006,UpdateForm.d_reasadmn,
                         UpdateForm.pmsfd004,UpdateForm.admissno);
}
function checkGST(GSTAppl,GSTCode) {
  if (GSTAppl.selectedIndex==1) {
    GSTCode.className="Mandatory";
  }     
  else {
    GSTCode.className="";
  }     
}       
function validateHFund() {
  if (isWhitespace(UpdateForm.pmsfd005.value)) {
     UpdateForm.pmsfd006.className="";
     clrDoc(UpdateForm.pmsfd005,UpdateForm.funddesc);
     clrDoc(UpdateForm.pmsfd006,UpdateForm.tabdesc);
  }
  else {
     if (validateCode(16,UpdateForm.pmsfd005,UpdateForm.funddesc)) {
       UpdateForm.pmsfd006.className="Mandatory";
     }
     else {
       clrHFundvars();
     }
  }
}

function clrHFundvars() {
  UpdateForm.pmsfd006.className="";
  clrDoc(UpdateForm.pmsfd005,UpdateForm.funddesc);
  clrDoc(UpdateForm.pmsfd006,UpdateForm.tabdesc);
  UpdateForm.pmsfd005.select();
}
function checkTheatre(ReturnCode,ReturnName,GSTAppl,GSTCode) {
  if (validateMbs(ReturnCode,ReturnName,UpdateForm.tempamnt,
                  UpdateForm.tempgsta,UpdateForm.tempgstc,
                  UpdateForm.suggclss,UpdateForm.dcasclss,
                  UpdateForm.pmsfd004 )) {

  if (UpdateForm.pmsfd003 != undefined){             // Planned Length of Stay
    if (UpdateForm.pmsfd003.value==0) {
      UpdateForm.suggclss.value=UpdateForm.dcasclss.value;
    }
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
        UpdateForm.pmsfd006.value=UpdateForm.pmsfd006.value+"      ";
        UpdateForm.dummy.value=UpdateForm.pmsfd006.value.substr(0,6)
                              +UpdateForm.thefee01.value;
        validateCode(67,UpdateForm.dummy,UpdateForm.suggclss)
      }

       if ((UpdateForm.accomchr!=undefined) &&
           (UpdateForm.accomchr.value) != "1") {

       if (UpdateForm.pmsfd010 != undefined){        // Admission Type - Cat A
        if (!isWhitespace(UpdateForm.suggclss.value)) {
         for (i=0; i<UpdateForm.pmsfd010.length; i++) {
           if (UpdateForm.pmsfd010.options[i].value.substr(0,3)==
               UpdateForm.suggclss.value) {
             UpdateForm.pmsfd010.selectedIndex=i;
           }
         }
        }
       }

      }
    }
//
  }
}

function validateMbs(ReturnCode,ReturnName,Amount,GSTAppl,GSTCode,suggClass,dcasClass,EffDate) {
  if (isWhitespace(ReturnCode.value)) {
    return;;
  }
  if(EffDate!=undefined){
   var serverURL   = "../cgi-bin/patweb80.pbl?reportno=4" +
                 "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                 "&valdedat=" + EffDate.value.replace(/ /g,"+")
  } else {
   var serverURL   = "../cgi-bin/patweb80.pbl?reportno=4" +
                 "&valdcode=" + ReturnCode.value.replace(/ /g,"+")
  }
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=trim(ReturnValue[0]);
    Amount.value=ReturnValue[1];
    GSTAppl.value=ReturnValue[2];
    GSTCode.value=ReturnValue[3];
    suggClass.value=ReturnValue[4];
    dcasClass.value=ReturnValue[10];

    ResetOnBlurHandler(ReturnCode);

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

function checkMisc(ReturnCode,ReturnName,GSTAppl,GSTCode,Amount) {
  if (validateMisc(ReturnCode,ReturnName,
                  UpdateForm.tempgsta,
                  UpdateForm.tempgstc,Amount)) {

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
 } else {
    ReturnCode.value="";
 }
}

function validateMisc(ReturnCode,ReturnName,GSTAppl,GSTCode,Amount) {
  if (isWhitespace(ReturnCode.value)) {
    return;;
  }
  if (document.UpdateForm.pmsfd004!=undefined) {
   var serverURL   = "../cgi-bin/patweb80.pbl?reportno=40" +
                 "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                 "&returndt=" + UpdateForm.pmsfd004.value.replace(/ /g,"+") +
                 "&valdtype=3"
   } else {
   var serverURL   = "../cgi-bin/patweb80.pbl?reportno=40" +
                 "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                 "&valdtype=1"
   }

  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    ReturnValue=returnValue.return_value.split("|");
    ReturnName.value=trim(ReturnValue[0]);
    GSTAppl.value=ReturnValue[1];
    GSTCode.value=ReturnValue[2];
    if ((ReturnValue[3]=="Y") && (Amount.value!=="zzz")) {
      window.Amount=Amount;
      window.Itemn=ReturnName;
      linkURL="patweb76.pbl?reportno=01&template=051" +
              "&urnumber=" + UpdateForm.urnumber.value.replace(/ /g,"+") +
              "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+")
      Left=(document.body.clientWidth-350)/2
      DFrameLink(linkURL,250,Left,350,120)
    }
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

function ShowMBSFields1() {
  if(document.UpdateForm.mbsbox1.checked == true) {
    ExtraMBS1.innerHTML=extrambs1.innerHTML;
    SetMBSbox1();
  } else {
    ExtraMBS1.innerHTML=blanklabel.innerHTML;
  }
}
function ShowMBSFields2() {
  if(document.UpdateForm.mbsbox2.checked == true) {
    ExtraMBS2.innerHTML=extrambs2.innerHTML;
    SetMBSbox2();
    document.UpdateForm.mbsbox1.disabled = true;
  } else {
    ExtraMBS2.innerHTML=blanklabel.innerHTML;
    document.UpdateForm.mbsbox1.disabled = false;
  }
}
function ShowMBSFields3() {
  if(document.UpdateForm.mbsbox3.checked == true) {
    ExtraMBS3.innerHTML=extrambs3.innerHTML;
    SetMBSbox3();
    document.UpdateForm.mbsbox2.disabled = true;
  } else {
    ExtraMBS3.innerHTML=blanklabel.innerHTML;
    document.UpdateForm.mbsbox2.disabled = false;
  }
}
function ShowMBSFields4() {
  if(document.UpdateForm.mbsbox4.checked == true) {
    ExtraMBS4.innerHTML=extrambs4.innerHTML;
    SetMBSbox4();
    document.UpdateForm.mbsbox3.disabled = true;
  } else {
    ExtraMBS4.innerHTML=blanklabel.innerHTML;
    document.UpdateForm.mbsbox3.disabled = false;
  }
}
function ShowMBSFields5() {
  if(document.UpdateForm.mbsbox5.checked == true) {
    ExtraMBS5.innerHTML=extrambs5.innerHTML;
    SetMBSbox5();
    document.UpdateForm.mbsbox4.disabled = true;
  } else {
    ExtraMBS5.innerHTML=blanklabel.innerHTML;
    document.UpdateForm.mbsbox4.disabled = false;
  }
}
function ShowMBSFields6() {
  if(document.UpdateForm.mbsbox6.checked == true) {
    ExtraMBS6.innerHTML=extrambs6.innerHTML;
    SetMBSbox6();
    document.UpdateForm.mbsbox5.disabled = true;
  } else {
    ExtraMBS6.innerHTML=blanklabel.innerHTML;
    document.UpdateForm.mbsbox5.disabled = false;
  }
}
function ShowMBSFields7() {
  if(document.UpdateForm.mbsbox7.checked == true) {
    ExtraMBS7.innerHTML=extrambs7.innerHTML;
    SetMBSbox7();
    document.UpdateForm.mbsbox6.disabled = true;
  } else {
    ExtraMBS7.innerHTML=blanklabel.innerHTML;
    document.UpdateForm.mbsbox6.disabled = false;
  }
}

function ShowMisFields1() {
  if(document.UpdateForm.misbox1.checked == true) {
    ExtraMis1.innerHTML=extramis1.innerHTML;
    SetMisbox1();
  } else {
    ExtraMis1.innerHTML=blanklabel.innerHTML;
  }
}
function ShowMisFields2() {
  if(document.UpdateForm.misbox2.checked == true) {
    ExtraMis2.innerHTML=extramis2.innerHTML;
    SetMisbox2();
    document.UpdateForm.misbox1.disabled = true;
  } else {
    ExtraMis2.innerHTML=blanklabel.innerHTML;
    document.UpdateForm.misbox1.disabled = false;
  }
}
function ShowMisFields3() {
  if(document.UpdateForm.misbox3.checked == true) {
    ExtraMis3.innerHTML=extramis3.innerHTML;
    SetMisbox3();
    document.UpdateForm.misbox2.disabled = true;
  } else {
    ExtraMis3.innerHTML=blanklabel.innerHTML;
    document.UpdateForm.misbox2.disabled = false;
  }
}
function ShowMisFields4() {
  if(document.UpdateForm.misbox4.checked == true) {
    ExtraMis4.innerHTML=extramis4.innerHTML;
    SetMisbox4();
    document.UpdateForm.misbox3.disabled = true;
  } else {
    ExtraMis4.innerHTML=blanklabel.innerHTML;
    document.UpdateForm.misbox3.disabled = false;
  }
}
function ShowMisFields5() {
  if(document.UpdateForm.misbox5.checked == true) {
    ExtraMis5.innerHTML=extramis5.innerHTML;
    SetMisbox5();
    document.UpdateForm.misbox4.disabled = true;
  } else {
    ExtraMis5.innerHTML=blanklabel.innerHTML;
    document.UpdateForm.misbox4.disabled = false;
  }
}
function ShowMisFields6() {
  if(document.UpdateForm.misbox6.checked == true) {
    ExtraMis6.innerHTML=extramis6.innerHTML;
    SetMisbox6();
    document.UpdateForm.misbox5.disabled = true;
  } else {
    ExtraMis6.innerHTML=blanklabel.innerHTML;
    document.UpdateForm.misbox5.disabled = false;
  }
}
function ShowMisFields7() {
  if(document.UpdateForm.misbox7.checked == true) {
    ExtraMis7.innerHTML=extramis7.innerHTML;
    SetMisbox7();
    document.UpdateForm.misbox6.disabled = true;
  } else {
    ExtraMis7.innerHTML=blanklabel.innerHTML;
    document.UpdateForm.misbox6.disabled = false;
  }
}
function SetMBSbox1() {
 p=UpdateForm
 if (p.thefee07!=undefined) {
  if(!isWhitespace(p.thefee07.value)) {
    checkTheatre(p.thefee07,p.thedesc07,p.gstapl07,p.gstcod07)
    if(p.gstapl07.disabled==false) {
      if(p.d_gstapl07.value=="1") {
        p.gstapl07.selectedIndex=1;
      } else {
        p.gstapl07.selectedIndex=2;
      }
      p.gstcod07.value=p.d_gstcod07.value
    }
  } else {
    p.thequa07.value="1";
  }

  if(!isWhitespace(p.thefee08.value)) {
    checkTheatre(p.thefee08,p.thedesc08,p.gstapl08,p.gstcod08)
    if(p.gstapl08.disabled==false) {
      if(p.d_gstapl08.value=="1") {
        p.gstapl08.selectedIndex=1;
      } else {
        p.gstapl08.selectedIndex=2;
      }
      p.gstcod08.value=p.d_gstcod08.value
    }
  } else {
    p.thequa08.value="1";
  }
  if(!isWhitespace(p.thefee09.value)) {
    checkTheatre(p.thefee09,p.thedesc09,p.gstapl09,p.gstcod09)
    if(p.gstapl09.disabled==false) {
      if(p.d_gstapl09.value=="1") {
        p.gstapl09.selectedIndex=1;
      } else {
        p.gstapl09.selectedIndex=2;
      }
      p.gstcod09.value=p.d_gstcod09.value
    }
  } else {
    p.thequa09.value="1";
  }
  if(!isWhitespace(p.thefee10.value)) {
    checkTheatre(p.thefee10,p.thedesc10,p.gstapl10,p.gstcod10)
    if(p.gstapl10.disabled==false) {
      if(p.d_gstapl10.value=="1") {
        p.gstapl10.selectedIndex=1;
      } else {
        p.gstapl10.selectedIndex=2;
      }
      p.gstcod10.value=p.d_gstcod10.value
    }
  } else {
    p.thequa10.value="1";
  }
  if(!isWhitespace(p.thefee11.value)) {
    checkTheatre(p.thefee11,p.thedesc11,p.gstapl11,p.gstcod11)
    if(p.gstapl11.disabled==false) {
      if(p.d_gstapl11.value=="1") {
        p.gstapl11.selectedIndex=1;
      } else {
        p.gstapl11.selectedIndex=2;
      }
      p.gstcod11.value=p.d_gstcod11.value
    }
  } else {
    p.thequa11.value="1";
  }
  if(!isWhitespace(p.thefee12.value)) {
    checkTheatre(p.thefee12,p.thedesc12,p.gstapl12,p.gstcod12)
    if(p.gstapl12.disabled==false) {
      if(p.d_gstapl12.value=="1") {
        p.gstapl12.selectedIndex=1;
      } else {
        p.gstapl12.selectedIndex=2;
      }
      p.gstcod12.value=p.d_gstcod12.value
    }
  } else {
    p.thequa12.value="1";
  }
 }
}

function SetMBSbox2() {
 p=UpdateForm
 if (p.thefee13!=undefined) {
  if(!isWhitespace(p.thefee13.value)) {
    checkTheatre(p.thefee13,p.thedesc13,p.gstapl13,p.gstcod13)
    if(p.gstapl13.disabled==false) {
      if(p.d_gstapl13.value=="1") {
        p.gstapl13.selectedIndex=1;
      } else {
        p.gstapl13.selectedIndex=2;
      }
      p.gstcod13.value=p.d_gstcod13.value
    }
  } else {
    p.thequa13.value="1";
  }
  if(!isWhitespace(p.thefee14.value)) {
    checkTheatre(p.thefee14,p.thedesc14,p.gstapl14,p.gstcod14)
    if(p.gstapl14.disabled==false) {
      if(p.d_gstapl14.value=="1") {
        p.gstapl14.selectedIndex=1;
      } else {
        p.gstapl14.selectedIndex=2;
      }
      p.gstcod14.value=p.d_gstcod14.value
    }
  } else {
    p.thequa14.value="1";
  }
  if(!isWhitespace(p.thefee15.value)) {
    checkTheatre(p.thefee15,p.thedesc15,p.gstapl15,p.gstcod15)
    if(p.gstapl15.disabled==false) {
      if(p.d_gstapl15.value=="1") {
        p.gstapl15.selectedIndex=1;
      } else {
        p.gstapl15.selectedIndex=2;
      }
      p.gstcod15.value=p.d_gstcod15.value
    }
  } else {
    p.thequa15.value="1";
  }
  if(!isWhitespace(p.thefee16.value)) {
    checkTheatre(p.thefee16,p.thedesc16,p.gstapl16,p.gstcod16)
    if(p.gstapl16.disabled==false) {
      if(p.d_gstapl16.value=="1") {
        p.gstapl16.selectedIndex=1;
      } else {
        p.gstapl16.selectedIndex=2;
      }
      p.gstcod16.value=p.d_gstcod16.value
    }
  } else {
    p.thequa16.value="1";
  }
  if(!isWhitespace(p.thefee17.value)) {
    checkTheatre(p.thefee17,p.thedesc17,p.gstapl17,p.gstcod17)
    if(p.gstapl17.disabled==false) {
      if(p.d_gstapl17.value=="1") {
        p.gstapl17.selectedIndex=1;
      } else {
        p.gstapl17.selectedIndex=2;
      }
      p.gstcod17.value=p.d_gstcod17.value
    }
  } else {
    p.thequa17.value="1";
  }
  if(!isWhitespace(p.thefee18.value)) {
    checkTheatre(p.thefee18,p.thedesc18,p.gstapl18,p.gstcod18)
    if(p.gstapl18.disabled==false) {
      if(p.d_gstapl18.value=="1") {
        p.gstapl18.selectedIndex=1;
      } else {
        p.gstapl18.selectedIndex=2;
      }
      p.gstcod18.value=p.d_gstcod18.value
    }
  } else {
    p.thequa18.value="1";
  }
 }
}

function SetMBSbox3() {
 p=UpdateForm
 if (p.thefee19!=undefined) {
  if(!isWhitespace(p.thefee19.value)) {
    checkTheatre(p.thefee19,p.thedesc19,p.gstapl19,p.gstcod19)
    if(p.gstapl19.disabled==false) {
      if(p.d_gstapl19.value=="1") {
        p.gstapl19.selectedIndex=1;
      } else {
        p.gstapl19.selectedIndex=2;
      }
      p.gstcod19.value=p.d_gstcod19.value
    }
  } else {
    p.thequa19.value="1";
  }

  if(!isWhitespace(p.thefee20.value)) {
    checkTheatre(p.thefee20,p.thedesc20,p.gstapl20,p.gstcod20)
    if(p.gstapl20.disabled==false) {
      if(p.d_gstapl20.value=="1") {
        p.gstapl20.selectedIndex=1;
      } else {
        p.gstapl20.selectedIndex=2;
      }
      p.gstcod20.value=p.d_gstcod20.value
    }
  } else {
    p.thequa20.value="1";
  }
  if(!isWhitespace(p.thefee21.value)) {
    checkTheatre(p.thefee21,p.thedesc21,p.gstapl21,p.gstcod21)
    if(p.gstapl21.disabled==false) {
      if(p.d_gstapl21.value=="1") {
        p.gstapl21.selectedIndex=1;
      } else {
        p.gstapl21.selectedIndex=2;
      }
      p.gstcod21.value=p.d_gstcod21.value
    }
  } else {
    p.thequa21.value="1";
  }
  if(!isWhitespace(p.thefee22.value)) {
    checkTheatre(p.thefee22,p.thedesc22,p.gstapl22,p.gstcod22)
    if(p.gstapl22.disabled==false) {
      if(p.d_gstapl22.value=="1") {
        p.gstapl22.selectedIndex=1;
      } else {
        p.gstapl22.selectedIndex=2;
      }
      p.gstcod22.value=p.d_gstcod22.value
    }
  } else {
    p.thequa22.value="1";
  }
  if(!isWhitespace(p.thefee23.value)) {
    checkTheatre(p.thefee23,p.thedesc23,p.gstapl23,p.gstcod23)
    if(p.gstapl23.disabled==false) {
      if(p.d_gstapl23.value=="1") {
        p.gstapl23.selectedIndex=1;
      } else {
        p.gstapl23.selectedIndex=2;
      }
      p.gstcod23.value=p.d_gstcod23.value
    }
  } else {
    p.thequa23.value="1";
  }
  if(!isWhitespace(p.thefee24.value)) {
    checkTheatre(p.thefee24,p.thedesc24,p.gstapl24,p.gstcod24)
    if(p.gstapl24.disabled==false) {
      if(p.d_gstapl24.value=="1") {
        p.gstapl24.selectedIndex=1;
      } else {
        p.gstapl24.selectedIndex=2;
      }
      p.gstcod24.value=p.d_gstcod24.value
    }
  } else {
    p.thequa24.value="1";
  }
 }
}

function SetMBSbox4() {
 p=UpdateForm
 if (p.thefee25!=undefined) {
  if(!isWhitespace(p.thefee25.value)) {
    checkTheatre(p.thefee25,p.thedesc25,p.gstapl25,p.gstcod25)
    if(p.gstapl25.disabled==false) {
      if(p.d_gstapl25.value=="1") {
        p.gstapl25.selectedIndex=1;
      } else {
        p.gstapl25.selectedIndex=2;
      }
      p.gstcod25.value=p.d_gstcod25.value
    }
  } else {
    p.thequa25.value="1";
  }

  if(!isWhitespace(p.thefee26.value)) {
    checkTheatre(p.thefee26,p.thedesc26,p.gstapl26,p.gstcod26)
    if(p.gstapl26.disabled==false) {
      if(p.d_gstapl26.value=="1") {
        p.gstapl26.selectedIndex=1;
      } else {
        p.gstapl26.selectedIndex=2;
      }
      p.gstcod26.value=p.d_gstcod26.value
    }
  } else {
    p.thequa26.value="1";
  }
  if(!isWhitespace(p.thefee27.value)) {
    checkTheatre(p.thefee27,p.thedesc27,p.gstapl27,p.gstcod27)
    if(p.gstapl27.disabled==false) {
      if(p.d_gstapl27.value=="1") {
        p.gstapl27.selectedIndex=1;
      } else {
        p.gstapl27.selectedIndex=2;
      }
      p.gstcod27.value=p.d_gstcod27.value
    }
  } else {
    p.thequa27.value="1";
  }
  if(!isWhitespace(p.thefee28.value)) {
    checkTheatre(p.thefee28,p.thedesc28,p.gstapl28,p.gstcod28)
    if(p.gstapl28.disabled==false) {
      if(p.d_gstapl28.value=="1") {
        p.gstapl28.selectedIndex=1;
      } else {
        p.gstapl28.selectedIndex=2;
      }
      p.gstcod28.value=p.d_gstcod28.value
    }
  } else {
    p.thequa28.value="1";
  }
  if(!isWhitespace(p.thefee29.value)) {
    checkTheatre(p.thefee29,p.thedesc29,p.gstapl29,p.gstcod29)
    if(p.gstapl29.disabled==false) {
      if(p.d_gstapl29.value=="1") {
        p.gstapl29.selectedIndex=1;
      } else {
        p.gstapl29.selectedIndex=2;
      }
      p.gstcod29.value=p.d_gstcod29.value
    }
  } else {
    p.thequa29.value="1";
  }
  if(!isWhitespace(p.thefee30.value)) {
    checkTheatre(p.thefee30,p.thedesc30,p.gstapl30,p.gstcod30)
    if(p.gstapl30.disabled==false) {
      if(p.d_gstapl30.value=="1") {
        p.gstapl30.selectedIndex=1;
      } else {
        p.gstapl30.selectedIndex=2;
      }
      p.gstcod30.value=p.d_gstcod30.value
    }
  } else {
    p.thequa30.value="1";
  }
 }
}

function SetMBSbox5() {
 p=UpdateForm
 if (p.thefee31!=undefined) {
  if(!isWhitespace(p.thefee31.value)) {
    checkTheatre(p.thefee31,p.thedesc31,p.gstapl31,p.gstcod31)
    if(p.gstapl31.disabled==false) {
      if(p.d_gstapl31.value=="1") {
        p.gstapl31.selectedIndex=1;
      } else {
        p.gstapl31.selectedIndex=2;
      }
      p.gstcod31.value=p.d_gstcod31.value
    }
  } else {
    p.thequa31.value="1";
  }
  if(!isWhitespace(p.thefee32.value)) {
    checkTheatre(p.thefee32,p.thedesc32,p.gstapl32,p.gstcod32)
    if(p.gstapl32.disabled==false) {
      if(p.d_gstapl32.value=="1") {
        p.gstapl32.selectedIndex=1;
      } else {
        p.gstapl32.selectedIndex=2;
      }
      p.gstcod32.value=p.d_gstcod32.value
    }
  } else {
    p.thequa32.value="1";
  }
  if(!isWhitespace(p.thefee33.value)) {
    checkTheatre(p.thefee33,p.thedesc33,p.gstapl33,p.gstcod33)
    if(p.gstapl33.disabled==false) {
      if(p.d_gstapl33.value=="1") {
        p.gstapl33.selectedIndex=1;
      } else {
        p.gstapl33.selectedIndex=2;
      }
      p.gstcod33.value=p.d_gstcod33.value
    }
  } else {
    p.thequa33.value="1";
  }
  if(!isWhitespace(p.thefee34.value)) {
    checkTheatre(p.thefee34,p.thedesc34,p.gstapl34,p.gstcod34)
    if(p.gstapl34.disabled==false) {
      if(p.d_gstapl34.value=="1") {
        p.gstapl34.selectedIndex=1;
      } else {
        p.gstapl34.selectedIndex=2;
      }
      p.gstcod34.value=p.d_gstcod34.value
    }
  } else {
    p.thequa34.value="1";
  }
  if(!isWhitespace(p.thefee35.value)) {
    checkTheatre(p.thefee35,p.thedesc35,p.gstapl35,p.gstcod35)
    if(p.gstapl35.disabled==false) {
      if(p.d_gstapl35.value=="1") {
        p.gstapl35.selectedIndex=1;
      } else {
        p.gstapl35.selectedIndex=2;
      }
      p.gstcod35.value=p.d_gstcod35.value
    }
  } else {
    p.thequa35.value="1";
  }
  if(!isWhitespace(p.thefee36.value)) {
    checkTheatre(p.thefee36,p.thedesc36,p.gstapl36,p.gstcod36)
    if(p.gstapl36.disabled==false) {
      if(p.d_gstapl36.value=="1") {
        p.gstapl36.selectedIndex=1;
      } else {
        p.gstapl36.selectedIndex=2;
      }
      p.gstcod36.value=p.d_gstcod36.value
    }
  } else {
    p.thequa36.value="1";
  }
 }
}

function SetMBSbox6() {
 p=UpdateForm
 if (p.thefee37!=undefined) {
  if(!isWhitespace(p.thefee37.value)) {
    checkTheatre(p.thefee37,p.thedesc37,p.gstapl37,p.gstcod37)
    if(p.gstapl37.disabled==false) {
      if(p.d_gstapl37.value=="1") {
        p.gstapl37.selectedIndex=1;
      } else {
        p.gstapl37.selectedIndex=2;
      }
      p.gstcod37.value=p.d_gstcod37.value
    }
  } else {
    p.thequa37.value="1";
  }
  if(!isWhitespace(p.thefee38.value)) {
    checkTheatre(p.thefee38,p.thedesc38,p.gstapl38,p.gstcod38)
    if(p.gstapl38.disabled==false) {
      if(p.d_gstapl38.value=="1") {
        p.gstapl38.selectedIndex=1;
      } else {
        p.gstapl38.selectedIndex=2;
      }
      p.gstcod38.value=p.d_gstcod38.value
    }
  } else {
    p.thequa38.value="1";
  }
  if(!isWhitespace(p.thefee39.value)) {
    checkTheatre(p.thefee39,p.thedesc39,p.gstapl39,p.gstcod39)
    if(p.gstapl39.disabled==false) {
      if(p.d_gstapl39.value=="1") {
        p.gstapl39.selectedIndex=1;
      } else {
        p.gstapl39.selectedIndex=2;
      }
      p.gstcod39.value=p.d_gstcod39.value
    }
  } else {
    p.thequa39.value="1";
  }
  if(!isWhitespace(p.thefee40.value)) {
    checkTheatre(p.thefee40,p.thedesc40,p.gstapl40,p.gstcod40)
    if(p.gstapl40.disabled==false) {
      if(p.d_gstapl40.value=="1") {
        p.gstapl40.selectedIndex=1;
      } else {
        p.gstapl40.selectedIndex=2;
      }
      p.gstcod40.value=p.d_gstcod40.value
    }
  } else {
    p.thequa40.value="1";
  }
  if(!isWhitespace(p.thefee41.value)) {
    checkTheatre(p.thefee41,p.thedesc41,p.gstapl41,p.gstcod41)
    if(p.gstapl41.disabled==false) {
      if(p.d_gstapl41.value=="1") {
        p.gstapl41.selectedIndex=1;
      } else {
        p.gstapl41.selectedIndex=2;
      }
      p.gstcod41.value=p.d_gstcod41.value
    }
  } else {
    p.thequa41.value="1";
  }
  if(!isWhitespace(p.thefee42.value)) {
    checkTheatre(p.thefee42,p.thedesc42,p.gstapl42,p.gstcod42)
    if(p.gstapl42.disabled==false) {
      if(p.d_gstapl42.value=="1") {
        p.gstapl42.selectedIndex=1;
      } else {
        p.gstapl42.selectedIndex=2;
      }
      p.gstcod42.value=p.d_gstcod42.value
    }
  } else {
    p.thequa42.value="1";
  }
 }
}
function SetMBSbox7() {
 p=UpdateForm
 if (p.thefee43!=undefined) {
  if(!isWhitespace(p.thefee43.value)) {
    checkTheatre(p.thefee43,p.thedesc43,p.gstapl43,p.gstcod43)
    if(p.gstapl43.disabled==false) {
      if(p.d_gstapl43.value=="1") {
        p.gstapl43.selectedIndex=1;
      } else {
        p.gstapl43.selectedIndex=2;
      }
      p.gstcod43.value=p.d_gstcod43.value
    }
  } else {
    p.thequa43.value="1";
  }
  if(!isWhitespace(p.thefee44.value)) {
    checkTheatre(p.thefee44,p.thedesc44,p.gstapl44,p.gstcod44)
    if(p.gstapl44.disabled==false) {
      if(p.d_gstapl44.value=="1") {
        p.gstapl44.selectedIndex=1;
      } else {
        p.gstapl44.selectedIndex=2;
      }
      p.gstcod44.value=p.d_gstcod44.value
    }
  } else {
    p.thequa44.value="1";
  }
  if(!isWhitespace(p.thefee45.value)) {
    checkTheatre(p.thefee45,p.thedesc45,p.gstapl45,p.gstcod45)
    if(p.gstapl45.disabled==false) {
      if(p.d_gstapl45.value=="1") {
        p.gstapl45.selectedIndex=1;
      } else {
        p.gstapl45.selectedIndex=2;
      }
      p.gstcod45.value=p.d_gstcod45.value
    }
  } else {
    p.thequa45.value="1";
  }
  if(!isWhitespace(p.thefee46.value)) {
    checkTheatre(p.thefee46,p.thedesc46,p.gstapl46,p.gstcod46)
    if(p.gstapl46.disabled==false) {
      if(p.d_gstapl46.value=="1") {
        p.gstapl46.selectedIndex=1;
      } else {
        p.gstapl46.selectedIndex=2;
      }
      p.gstcod46.value=p.d_gstcod46.value
    }
  } else {
    p.thequa46.value="1";
  }
  if(!isWhitespace(p.thefee47.value)) {
    checkTheatre(p.thefee47,p.thedesc47,p.gstapl47,p.gstcod47)
    if(p.gstapl47.disabled==false) {
      if(p.d_gstapl47.value=="1") {
        p.gstapl47.selectedIndex=1;
      } else {
        p.gstapl47.selectedIndex=2;
      }
      p.gstcod47.value=p.d_gstcod47.value
    }
  } else {
    p.thequa47.value="1";
  }
  if(!isWhitespace(p.thefee48.value)) {
    checkTheatre(p.thefee48,p.thedesc48,p.gstapl48,p.gstcod48)
    if(p.gstapl48.disabled==false) {
      if(p.d_gstapl48.value=="1") {
        p.gstapl48.selectedIndex=1;
      } else {
        p.gstapl48.selectedIndex=2;
      }
      p.gstcod48.value=p.d_gstcod48.value
    }
  } else {
    p.thequa48.value="1";
  }
  if(!isWhitespace(p.thefee49.value)) {
    checkTheatre(p.thefee49,p.thedesc49,p.gstapl49,p.gstcod49)
    if(p.gstapl49.disabled==false) {
      if(p.d_gstapl49.value=="1") {
        p.gstapl49.selectedIndex=1;
      } else {
        p.gstapl49.selectedIndex=2;
      }
      p.gstcod49.value=p.d_gstcod49.value
    }
  } else {
    p.thequa49.value="1";
  }
  if(!isWhitespace(p.thefee50.value)) {
    checkTheatre(p.thefee50,p.thedesc50,p.gstapl50,p.gstcod50)
    if(p.gstapl50.disabled==false) {
      if(p.d_gstapl50.value=="1") {
        p.gstapl50.selectedIndex=1;
      } else {
        p.gstapl50.selectedIndex=2;
      }
      p.gstcod50.value=p.d_gstcod50.value
    }
  } else {
    p.thequa50.value="1";
  }
 }
}

function SetMisbox1() {
 p=UpdateForm
if (p.mischg07!=undefined) {
 if(!isWhitespace(p.mischg07.value)) {
  checkMisc(p.mischg07,p.misdes07,p.gstapm07,p.gstcom07,p.dummyamt)
  if(p.gstapm07.disabled==false) {
    if(p.d_gstapm07.value=="1") {
      p.gstapm07.selectedIndex=1;
    } else {
      p.gstapm07.selectedIndex=2;
    }
    p.gstcom07.value=p.d_gstcom06.value
  }
 } else {
  p.misqua07.value="1";
  p.misamt07.value="0";
 }
 if(!isWhitespace(p.mischg08.value)) {
  checkMisc(p.mischg08,p.misdes08,p.gstapm08,p.gstcom08,p.dummyamt)
  if(p.gstapm08.disabled==false) {
    if(p.d_gstapm08.value=="1") {
      p.gstapm08.selectedIndex=1;
    } else {
      p.gstapm08.selectedIndex=2;
    }
    p.gstcom08.value=p.d_gstcom06.value
  }
 } else {
  p.misqua08.value="1";
  p.misamt08.value="0";
 }
 if(!isWhitespace(p.mischg09.value)) {
  checkMisc(p.mischg09,p.misdes09,p.gstapm09,p.gstcom09,p.dummyamt)
  if(p.gstapm09.disabled==false) {
    if(p.d_gstapm09.value=="1") {
      p.gstapm09.selectedIndex=1;
    } else {
      p.gstapm09.selectedIndex=2;
    }
    p.gstcom09.value=p.d_gstcom06.value
  }
 } else {
  p.misqua09.value="1";
  p.misamt09.value="0";
 }
 if(!isWhitespace(p.mischg10.value)) {
  checkMisc(p.mischg10,p.misdes10,p.gstapm10,p.gstcom10,p.dummyamt)
  if(p.gstapm10.disabled==false) {
    if(p.d_gstapm10.value=="1") {
      p.gstapm10.selectedIndex=1;
    } else {
      p.gstapm10.selectedIndex=2;
    }
    p.gstcom10.value=p.d_gstcom06.value
  }
 } else {
  p.misqua10.value="1";
  p.misamt10.value="0";
 }
 if(!isWhitespace(p.mischg11.value)) {
  checkMisc(p.mischg11,p.misdes11,p.gstapm11,p.gstcom11,p.dummyamt)
  if(p.gstapm11.disabled==false) {
    if(p.d_gstapm11.value=="1") {
      p.gstapm11.selectedIndex=1;
    } else {
      p.gstapm11.selectedIndex=2;
    }
    p.gstcom11.value=p.d_gstcom06.value
  }
 } else {
  p.misqua11.value="1";
  p.misamt11.value="0";
 }
 if(!isWhitespace(p.mischg12.value)) {
  checkMisc(p.mischg12,p.misdes12,p.gstapm12,p.gstcom12,p.dummyamt)
  if(p.gstapm12.disabled==false) {
    if(p.d_gstapm12.value=="1") {
      p.gstapm12.selectedIndex=1;
    } else {
      p.gstapm12.selectedIndex=2;
    }
    p.gstcom12.value=p.d_gstcom06.value
  }
 } else {
  p.misqua12.value="1";
  p.misamt12.value="0";
 }
}
}

function SetMisbox2() {
 p=UpdateForm
if (p.mischg13!=undefined) {
 if(!isWhitespace(p.mischg13.value)) {
  checkMisc(p.mischg13,p.misdes13,p.gstapm13,p.gstcom13,p.dummyamt)
  if(p.gstapm13.disabled==false) {
    if(p.d_gstapm13.value=="1") {
      p.gstapm13.selectedIndex=1;
    } else {
      p.gstapm13.selectedIndex=2;
    }
    p.gstcom13.value=p.d_gstcom06.value
  }
 } else {
  p.misqua13.value="1";
  p.misamt13.value="0";
 }
 if(!isWhitespace(p.mischg14.value)) {
  checkMisc(p.mischg14,p.misdes14,p.gstapm14,p.gstcom14,p.dummyamt)
  if(p.gstapm14.disabled==false) {
    if(p.d_gstapm14.value=="1") {
      p.gstapm14.selectedIndex=1;
    } else {
      p.gstapm14.selectedIndex=2;
    }
    p.gstcom14.value=p.d_gstcom06.value
  }
 } else {
  p.misqua14.value="1";
  p.misamt14.value="0";
 }
 if(!isWhitespace(p.mischg15.value)) {
  checkMisc(p.mischg15,p.misdes15,p.gstapm15,p.gstcom15,p.dummyamt)
  if(p.gstapm15.disabled==false) {
    if(p.d_gstapm15.value=="1") {
      p.gstapm15.selectedIndex=1;
    } else {
      p.gstapm15.selectedIndex=2;
    }
    p.gstcom15.value=p.d_gstcom06.value
  }
 } else {
  p.misqua15.value="1";
  p.misamt15.value="0";
 }
 if(!isWhitespace(p.mischg16.value)) {
  checkMisc(p.mischg16,p.misdes16,p.gstapm16,p.gstcom16,p.dummyamt)
  if(p.gstapm16.disabled==false) {
    if(p.d_gstapm16.value=="1") {
      p.gstapm16.selectedIndex=1;
    } else {
      p.gstapm16.selectedIndex=2;
    }
    p.gstcom16.value=p.d_gstcom06.value
  }
 } else {
  p.misqua16.value="1";
  p.misamt16.value="0";
 }
 if(!isWhitespace(p.mischg17.value)) {
  checkMisc(p.mischg17,p.misdes17,p.gstapm17,p.gstcom17,p.dummyamt)
  if(p.gstapm17.disabled==false) {
    if(p.d_gstapm17.value=="1") {
      p.gstapm17.selectedIndex=1;
    } else {
      p.gstapm17.selectedIndex=2;
    }
    p.gstcom17.value=p.d_gstcom06.value
  }
 } else {
  p.misqua17.value="1";
  p.misamt17.value="0";
 }
 if(!isWhitespace(p.mischg18.value)) {
  checkMisc(p.mischg18,p.misdes18,p.gstapm18,p.gstcom18,p.dummyamt)
  if(p.gstapm18.disabled==false) {
    if(p.d_gstapm18.value=="1") {
      p.gstapm18.selectedIndex=1;
    } else {
      p.gstapm18.selectedIndex=2;
    }
    p.gstcom18.value=p.d_gstcom06.value
  }
 } else {
  p.misqua18.value="1";
  p.misamt18.value="0";
 }
}
}

function SetMisbox3() {
 p=UpdateForm
if (p.mischg19!=undefined) {
 if(!isWhitespace(p.mischg19.value)) {
  checkMisc(p.mischg19,p.misdes19,p.gstapm19,p.gstcom19,p.dummyamt)
  if(p.gstapm19.disabled==false) {
    if(p.d_gstapm19.value=="1") {
      p.gstapm19.selectedIndex=1;
    } else {
      p.gstapm19.selectedIndex=2;
    }
    p.gstcom19.value=p.d_gstcom06.value
  }
 } else {
  p.misqua19.value="1";
  p.misamt19.value="0";
 }
 if(!isWhitespace(p.mischg20.value)) {
  checkMisc(p.mischg20,p.misdes20,p.gstapm20,p.gstcom20,p.dummyamt)
  if(p.gstapm20.disabled==false) {
    if(p.d_gstapm20.value=="1") {
      p.gstapm20.selectedIndex=1;
    } else {
      p.gstapm20.selectedIndex=2;
    }
    p.gstcom20.value=p.d_gstcom06.value
  }
 } else {
  p.misqua20.value="1";
  p.misamt20.value="0";
 }
 if(!isWhitespace(p.mischg21.value)) {
  checkMisc(p.mischg21,p.misdes21,p.gstapm21,p.gstcom21,p.dummyamt)
  if(p.gstapm21.disabled==false) {
    if(p.d_gstapm21.value=="1") {
      p.gstapm21.selectedIndex=1;
    } else {
      p.gstapm21.selectedIndex=2;
    }
    p.gstcom21.value=p.d_gstcom06.value
  }
 } else {
  p.misqua21.value="1";
  p.misamt21.value="0";
 }
 if(!isWhitespace(p.mischg22.value)) {
  checkMisc(p.mischg22,p.misdes22,p.gstapm22,p.gstcom22,p.dummyamt)
  if(p.gstapm22.disabled==false) {
    if(p.d_gstapm22.value=="1") {
      p.gstapm22.selectedIndex=1;
    } else {
      p.gstapm22.selectedIndex=2;
    }
    p.gstcom22.value=p.d_gstcom06.value
  }
 } else {
  p.misqua22.value="1";
  p.misamt22.value="0";
 }
 if(!isWhitespace(p.mischg23.value)) {
  checkMisc(p.mischg23,p.misdes23,p.gstapm23,p.gstcom23,p.dummyamt)
  if(p.gstapm23.disabled==false) {
    if(p.d_gstapm23.value=="1") {
      p.gstapm23.selectedIndex=1;
    } else {
      p.gstapm23.selectedIndex=2;
    }
    p.gstcom23.value=p.d_gstcom06.value
  }
 } else {
  p.misqua23.value="1";
  p.misamt23.value="0";
 }
 if(!isWhitespace(p.mischg24.value)) {
  checkMisc(p.mischg24,p.misdes24,p.gstapm24,p.gstcom24,p.dummyamt)
  if(p.gstapm24.disabled==false) {
    if(p.d_gstapm24.value=="1") {
      p.gstapm24.selectedIndex=1;
    } else {
      p.gstapm24.selectedIndex=2;
    }
    p.gstcom24.value=p.d_gstcom06.value
  }
 } else {
  p.misqua24.value="1";
  p.misamt24.value="0";
 }
}
}

function SetMisbox4() {
 p=UpdateForm
if (p.mischg25!=undefined) {
 if(!isWhitespace(p.mischg25.value)) {
  checkMisc(p.mischg25,p.misdes25,p.gstapm25,p.gstcom25,p.dummyamt)
  if(p.gstapm25.disabled==false) {
    if(p.d_gstapm25.value=="1") {
      p.gstapm25.selectedIndex=1;
    } else {
      p.gstapm25.selectedIndex=2;
    }
    p.gstcom25.value=p.d_gstcom06.value
  }
 } else {
  p.misqua25.value="1";
  p.misamt25.value="0";
 }
 if(!isWhitespace(p.mischg26.value)) {
  checkMisc(p.mischg26,p.misdes26,p.gstapm26,p.gstcom26,p.dummyamt)
  if(p.gstapm26.disabled==false) {
    if(p.d_gstapm26.value=="1") {
      p.gstapm26.selectedIndex=1;
    } else {
      p.gstapm26.selectedIndex=2;
    }
    p.gstcom26.value=p.d_gstcom06.value
  }
 } else {
  p.misqua26.value="1";
  p.misamt26.value="0";
 }
 if(!isWhitespace(p.mischg27.value)) {
  checkMisc(p.mischg27,p.misdes27,p.gstapm27,p.gstcom27,p.dummyamt)
  if(p.gstapm27.disabled==false) {
    if(p.d_gstapm27.value=="1") {
      p.gstapm27.selectedIndex=1;
    } else {
      p.gstapm27.selectedIndex=2;
    }
    p.gstcom27.value=p.d_gstcom06.value
  }
 } else {
  p.misqua27.value="1";
  p.misamt27.value="0";
 }
 if(!isWhitespace(p.mischg28.value)) {
  checkMisc(p.mischg28,p.misdes28,p.gstapm28,p.gstcom28,p.dummyamt)
  if(p.gstapm28.disabled==false) {
    if(p.d_gstapm28.value=="1") {
      p.gstapm28.selectedIndex=1;
    } else {
      p.gstapm28.selectedIndex=2;
    }
    p.gstcom28.value=p.d_gstcom06.value
  }
 } else {
  p.misqua28.value="1";
  p.misamt28.value="0";
 }
 if(!isWhitespace(p.mischg29.value)) {
  checkMisc(p.mischg29,p.misdes29,p.gstapm29,p.gstcom29,p.dummyamt)
  if(p.gstapm29.disabled==false) {
    if(p.d_gstapm29.value=="1") {
      p.gstapm29.selectedIndex=1;
    } else {
      p.gstapm29.selectedIndex=2;
    }
    p.gstcom29.value=p.d_gstcom06.value
  }
 } else {
  p.misqua29.value="1";
  p.misamt29.value="0";
 }
 if(!isWhitespace(p.mischg30.value)) {
  checkMisc(p.mischg30,p.misdes30,p.gstapm30,p.gstcom30,p.dummyamt)
  if(p.gstapm30.disabled==false) {
    if(p.d_gstapm30.value=="1") {
      p.gstapm30.selectedIndex=1;
    } else {
      p.gstapm30.selectedIndex=2;
    }
    p.gstcom30.value=p.d_gstcom06.value
  }
 } else {
  p.misqua30.value="1";
  p.misamt30.value="0";
 }
}
}

function SetMisbox5() {
 p=UpdateForm
if (p.mischg31!=undefined) {
 if(!isWhitespace(p.mischg31.value)) {
  checkMisc(p.mischg31,p.misdes31,p.gstapm31,p.gstcom31,p.dummyamt)
  if(p.gstapm31.disabled==false) {
    if(p.d_gstapm31.value=="1") {
      p.gstapm31.selectedIndex=1;
    } else {
      p.gstapm31.selectedIndex=2;
    }
    p.gstcom31.value=p.d_gstcom06.value
  }
 } else {
  p.misqua31.value="1";
  p.misamt31.value="0";
 }
 if(!isWhitespace(p.mischg32.value)) {
  checkMisc(p.mischg32,p.misdes32,p.gstapm32,p.gstcom32,p.dummyamt)
  if(p.gstapm32.disabled==false) {
    if(p.d_gstapm32.value=="1") {
      p.gstapm32.selectedIndex=1;
    } else {
      p.gstapm32.selectedIndex=2;
    }
    p.gstcom32.value=p.d_gstcom06.value
  }
 } else {
  p.misqua32.value="1";
  p.misamt32.value="0";
 }
 if(!isWhitespace(p.mischg33.value)) {
  checkMisc(p.mischg33,p.misdes33,p.gstapm33,p.gstcom33,p.dummyamt)
  if(p.gstapm33.disabled==false) {
    if(p.d_gstapm33.value=="1") {
      p.gstapm33.selectedIndex=1;
    } else {
      p.gstapm33.selectedIndex=2;
    }
    p.gstcom33.value=p.d_gstcom06.value
  }
 } else {
  p.misqua33.value="1";
  p.misamt33.value="0";
 }
 if(!isWhitespace(p.mischg34.value)) {
  checkMisc(p.mischg34,p.misdes34,p.gstapm34,p.gstcom34,p.dummyamt)
  if(p.gstapm34.disabled==false) {
    if(p.d_gstapm34.value=="1") {
      p.gstapm34.selectedIndex=1;
    } else {
      p.gstapm34.selectedIndex=2;
    }
    p.gstcom34.value=p.d_gstcom06.value
  }
 } else {
  p.misqua34.value="1";
  p.misamt34.value="0";
 }
 if(!isWhitespace(p.mischg35.value)) {
  checkMisc(p.mischg35,p.misdes35,p.gstapm35,p.gstcom35,p.dummyamt)
  if(p.gstapm35.disabled==false) {
    if(p.d_gstapm35.value=="1") {
      p.gstapm35.selectedIndex=1;
    } else {
      p.gstapm35.selectedIndex=2;
    }
    p.gstcom35.value=p.d_gstcom06.value
  }
 } else {
  p.misqua35.value="1";
  p.misamt35.value="0";
 }
 if(!isWhitespace(p.mischg36.value)) {
  checkMisc(p.mischg36,p.misdes36,p.gstapm36,p.gstcom36,p.dummyamt)
  if(p.gstapm36.disabled==false) {
    if(p.d_gstapm36.value=="1") {
      p.gstapm36.selectedIndex=1;
    } else {
      p.gstapm36.selectedIndex=2;
    }
    p.gstcom36.value=p.d_gstcom06.value
  }
 } else {
  p.misqua36.value="1";
  p.misamt36.value="0";
 }
}
}
function SetMisbox6() {
 p=UpdateForm
if (p.mischg37!=undefined) {
 if(!isWhitespace(p.mischg37.value)) {
  checkMisc(p.mischg37,p.misdes37,p.gstapm37,p.gstcom37,p.dummyamt)
  if(p.gstapm37.disabled==false) {
    if(p.d_gstapm37.value=="1") {
      p.gstapm37.selectedIndex=1;
    } else {
      p.gstapm37.selectedIndex=2;
    }
    p.gstcom37.value=p.d_gstcom06.value
  }
 } else {
  p.misqua37.value="1";
  p.misamt37.value="0";
 }
 if(!isWhitespace(p.mischg38.value)) {
  checkMisc(p.mischg38,p.misdes38,p.gstapm38,p.gstcom38,p.dummyamt)
  if(p.gstapm38.disabled==false) {
    if(p.d_gstapm38.value=="1") {
      p.gstapm38.selectedIndex=1;
    } else {
      p.gstapm38.selectedIndex=2;
    }
    p.gstcom38.value=p.d_gstcom06.value
  }
 } else {
  p.misqua38.value="1";
  p.misamt38.value="0";
 }
 if(!isWhitespace(p.mischg39.value)) {
  checkMisc(p.mischg39,p.misdes39,p.gstapm39,p.gstcom39,p.dummyamt)
  if(p.gstapm39.disabled==false) {
    if(p.d_gstapm39.value=="1") {
      p.gstapm39.selectedIndex=1;
    } else {
      p.gstapm39.selectedIndex=2;
    }
    p.gstcom39.value=p.d_gstcom06.value
  }
 } else {
  p.misqua39.value="1";
  p.misamt39.value="0";
 }
 if(!isWhitespace(p.mischg40.value)) {
  checkMisc(p.mischg40,p.misdes40,p.gstapm40,p.gstcom40,p.dummyamt)
  if(p.gstapm40.disabled==false) {
    if(p.d_gstapm40.value=="1") {
      p.gstapm40.selectedIndex=1;
    } else {
      p.gstapm40.selectedIndex=2;
    }
    p.gstcom40.value=p.d_gstcom06.value
  }
 } else {
  p.misqua40.value="1";
  p.misamt40.value="0";
 }
 if(!isWhitespace(p.mischg41.value)) {
  checkMisc(p.mischg41,p.misdes41,p.gstapm41,p.gstcom41,p.dummyamt)
  if(p.gstapm41.disabled==false) {
    if(p.d_gstapm41.value=="1") {
      p.gstapm41.selectedIndex=1;
    } else {
      p.gstapm41.selectedIndex=2;
    }
    p.gstcom41.value=p.d_gstcom06.value
  }
 } else {
  p.misqua41.value="1";
  p.misamt41.value="0";
 }
 if(!isWhitespace(p.mischg42.value)) {
  checkMisc(p.mischg42,p.misdes42,p.gstapm42,p.gstcom42,p.dummyamt)
  if(p.gstapm42.disabled==false) {
    if(p.d_gstapm42.value=="1") {
      p.gstapm42.selectedIndex=1;
    } else {
      p.gstapm42.selectedIndex=2;
    }
    p.gstcom42.value=p.d_gstcom06.value
  }
 } else {
  p.misqua42.value="1";
  p.misamt42.value="0";
 }
}
}
function SetMisbox7() {
 p=UpdateForm
if (p.mischg43!=undefined) {
 if(!isWhitespace(p.mischg43.value)) {
  checkMisc(p.mischg43,p.misdes43,p.gstapm43,p.gstcom43,p.dummyamt)
  if(p.gstapm43.disabled==false) {
    if(p.d_gstapm43.value=="1") {
      p.gstapm43.selectedIndex=1;
    } else {
      p.gstapm43.selectedIndex=2;
    }
    p.gstcom43.value=p.d_gstcom06.value
  }
 } else {
  p.misqua43.value="1";
  p.misamt43.value="0";
 }
 if(!isWhitespace(p.mischg44.value)) {
  checkMisc(p.mischg44,p.misdes44,p.gstapm44,p.gstcom44,p.dummyamt)
  if(p.gstapm44.disabled==false) {
    if(p.d_gstapm44.value=="1") {
      p.gstapm44.selectedIndex=1;
    } else {
      p.gstapm44.selectedIndex=2;
    }
    p.gstcom44.value=p.d_gstcom06.value
  }
 } else {
  p.misqua44.value="1";
  p.misamt44.value="0";
 }
 if(!isWhitespace(p.mischg45.value)) {
  checkMisc(p.mischg45,p.misdes45,p.gstapm45,p.gstcom45,p.dummyamt)
  if(p.gstapm45.disabled==false) {
    if(p.d_gstapm45.value=="1") {
      p.gstapm45.selectedIndex=1;
    } else {
      p.gstapm45.selectedIndex=2;
    }
    p.gstcom45.value=p.d_gstcom06.value
  }
 } else {
  p.misqua45.value="1";
  p.misamt45.value="0";
 }
 if(!isWhitespace(p.mischg46.value)) {
  checkMisc(p.mischg46,p.misdes46,p.gstapm46,p.gstcom46,p.dummyamt)
  if(p.gstapm46.disabled==false) {
    if(p.d_gstapm46.value=="1") {
      p.gstapm46.selectedIndex=1;
    } else {
      p.gstapm46.selectedIndex=2;
    }
    p.gstcom46.value=p.d_gstcom06.value
  }
 } else {
  p.misqua46.value="1";
  p.misamt46.value="0";
 }
 if(!isWhitespace(p.mischg47.value)) {
  checkMisc(p.mischg47,p.misdes47,p.gstapm47,p.gstcom47,p.dummyamt)
  if(p.gstapm47.disabled==false) {
    if(p.d_gstapm47.value=="1") {
      p.gstapm47.selectedIndex=1;
    } else {
      p.gstapm47.selectedIndex=2;
    }
    p.gstcom47.value=p.d_gstcom06.value
  }
 } else {
  p.misqua47.value="1";
  p.misamt47.value="0";
 }
 if(!isWhitespace(p.mischg48.value)) {
  checkMisc(p.mischg48,p.misdes48,p.gstapm48,p.gstcom48,p.dummyamt)
  if(p.gstapm48.disabled==false) {
    if(p.d_gstapm48.value=="1") {
      p.gstapm48.selectedIndex=1;
    } else {
      p.gstapm48.selectedIndex=2;
    }
    p.gstcom48.value=p.d_gstcom06.value
  }
 } else {
  p.misqua48.value="1";
  p.misamt48.value="0";
 }
 if(!isWhitespace(p.mischg49.value)) {
  checkMisc(p.mischg49,p.misdes49,p.gstapm49,p.gstcom49,p.dummyamt)
  if(p.gstapm49.disabled==false) {
    if(p.d_gstapm49.value=="1") {
      p.gstapm49.selectedIndex=1;
    } else {
      p.gstapm49.selectedIndex=2;
    }
    p.gstcom49.value=p.d_gstcom06.value
  }
 } else {
  p.misqua49.value="1";
  p.misamt49.value="0";
 }
 if(!isWhitespace(p.mischg50.value)) {
  checkMisc(p.mischg50,p.misdes50,p.gstapm50,p.gstcom50,p.dummyamt)
  if(p.gstapm50.disabled==false) {
    if(p.d_gstapm50.value=="1") {
      p.gstapm50.selectedIndex=1;
    } else {
      p.gstapm50.selectedIndex=2;
    }
    p.gstcom50.value=p.d_gstcom06.value
  }
 } else {
  p.misqua50.value="1";
  p.misamt50.value="0";
 }
}
}

function getBillingDefaultHEA(ValClaim,ValdFund,ValdHfTb,ValAdmReas,ValAdmDate,
                              ValAdmno){
  if (document.getElementById('billAlertDIV')){
      billAlertDIV.innerHTML="";}       //Blank out any prev billing alerts

  p=document.UpdateForm;
  var serverURL = "../cgi-bin/comweb81.pbl?reportno=30" +
                  "&valclaim=" + ValClaim.value.replace(/ /g,"+") +
                  "&valdfund=" + ValdFund.value.replace(/ /g,"+") +
                  "&valdhftb=" + ValdHfTb.value.replace(/ /g,"+") +
                  "&valdcode=" + ValAdmReas.value.replace(/ /g,"+") +
                  "&valddate=" + ValAdmDate.value.replace(/ /g,"+") +
                  "&valdadmn=" + ValAdmno.value.replace(/ /g,"+");

  var returnValue = RSExecute(serverURL);
  if (returnValue.status!=0) {
     document.UpdateForm.d_pmsfd029.checked=false;
     return;}

  ReturnValue=returnValue.return_value.split("|");
  var Admn = trim(ReturnValue[0]);     //patbdeaf.ptbeadmn
  var Csmx = trim(ReturnValue[2]);     //patbdeaf.ptbecsmx
  var Tlos = trim(ReturnValue[6]);     //patbdeaf.ptbetlos

  if (p.pmsfd010 != undefined){           // Admission Type - Cat A
    for (var i=0;i<p.pmsfd010.length; i++) {
     if(trim(p.pmsfd010.options[i].value.substr(0,3))== Admn){
        p.pmsfd010.selectedIndex=i;} }
  }

  if (p.pmsfd007 != undefined){            // Casemix Code
      p.pmsfd007.value = Csmx;
      valCasemix();
  }

  if (p.pmsfd003 != undefined){             // Planned Length of Stay
      p.pmsfd003.value = Tlos;}

   document.UpdateForm.d_pmsfd029.checked=true;  // not to use Suggested Class.

}

function valCasemix() {
 if (document.getElementById("ptcnelos").value=="2") {
   if (!isWhitespace(document.UpdateForm.pmsfd007.value)) {
     var serverURL = "../cgi-bin/patweb80.pbl?reportno=35" +
        "&valdclmt=" +
          document.UpdateForm.pmsfd008.value.substr(0,3).replace(/ /g,"+") +
        "&valdhlfn=" +
         document.UpdateForm.pmsfd005.value.replace(/ /g,"+") +
        "&valdcode=" +
         document.UpdateForm.pmsfd007.value.replace(/ /g,"+") +
        "&valbcode=" +
         document.UpdateForm.pmsfd004.value.replace(/ /g,"+")
       var returnValue = RSExecute(serverURL);
       if (returnValue.status==0) {
         ReturnValue=returnValue.return_value.split("|");
         UpdateForm.cmixdesc.value=ReturnValue[0];
         return;
       } else {
         document.UpdateForm.pmsfd007.focus();
       }
    }
    document.UpdateForm.pmsfd007.value="";
    document.UpdateForm.cmixdesc.value="";
 } else {
   validateCode(35,UpdateForm.pmsfd007,UpdateForm.cmixdesc);
 }
}

function setBasicCover() {
    if(document.UpdateForm.d_pmsfd030.checked==true) {
       document.UpdateForm.pmsfd030.value="1";
    } else {
       document.UpdateForm.pmsfd030.value="0";
    }
}

function ChkItem() {
p=UpdateForm
if(!isWhitespace(p.thefee01.value)) {
  checkTheatre(p.thefee01,p.thedesc01,p.gstapl01,p.gstcod01)
  if(p.gstapl01.disabled==false) {
    if(p.d_gstapl01.value=="1") {
      p.gstapl01.selectedIndex=1;
    } else {
      p.gstapl01.selectedIndex=2;
    }
    p.gstcod01.value=p.d_gstcod01.value
  }
} else {
  p.thequa01.value="1";
}
if(!isWhitespace(p.thefee02.value)) {
  checkTheatre(p.thefee02,p.thedesc02,p.gstapl02,p.gstcod02)
  if(p.gstapl02.disabled==false) {
    if(p.d_gstapl02.value=="1") {
      p.gstapl02.selectedIndex=1;
    } else {
      p.gstapl02.selectedIndex=2;
    }
    p.gstcod02.value=p.d_gstcod02.value
  }
} else {
  p.thequa02.value="1";
}
if(!isWhitespace(p.thefee03.value)) {
  checkTheatre(p.thefee03,p.thedesc03,p.gstapl03,p.gstcod03)
  if(p.gstapl03.disabled==false) {
    if(p.d_gstapl03.value=="1") {
      p.gstapl03.selectedIndex=1;
    } else {
      p.gstapl03.selectedIndex=2;
    }
    p.gstcod03.value=p.d_gstcod03.value
  }
} else {
  p.thequa03.value="1";
}
if(!isWhitespace(p.thefee04.value)) {
  checkTheatre(p.thefee04,p.thedesc04,p.gstapl04,p.gstcod04)
  if(p.gstapl04.disabled==false) {
    if(p.d_gstapl04.value=="1") {
      p.gstapl04.selectedIndex=1;
    } else {
      p.gstapl04.selectedIndex=2;
    }
    p.gstcod04.value=p.d_gstcod04.value
  }
} else {
  p.thequa04.value="1";
}
if(!isWhitespace(p.thefee05.value)) {
  checkTheatre(p.thefee05,p.thedesc05,p.gstapl05,p.gstcod05)
  if(p.gstapl05.disabled==false) {
    if(p.d_gstapl05.value=="1") {
      p.gstapl05.selectedIndex=1;
    } else {
      p.gstapl05.selectedIndex=2;
    }
    p.gstcod05.value=p.d_gstcod05.value
  }
} else {
  p.thequa05.value="1";
}
if(!isWhitespace(p.thefee06.value)) {
  checkTheatre(p.thefee06,p.thedesc06,p.gstapl06,p.gstcod06)
  if(p.gstapl06.disabled==false) {
    if(p.d_gstapl06.value=="1") {
      p.gstapl06.selectedIndex=1;
    } else {
      p.gstapl06.selectedIndex=2;
    }
    p.gstcod06.value=p.d_gstcod06.value
  }
} else {
  p.thequa06.value="1";
}

 SetMBSbox1();
 SetMBSbox2();
 SetMBSbox3();
 SetMBSbox4();
 SetMBSbox5();
 SetMBSbox6();
 SetMBSbox7();

if(!isWhitespace(p.mischg01.value)) {
  checkMisc(p.mischg01,p.misdes01,p.gstapm01,p.gstcom01,p.dummyamt)
  if(p.gstapm01.disabled==false) {
    if(p.d_gstapm01.value=="1") {
      p.gstapm01.selectedIndex=1;
    } else {
      p.gstapm01.selectedIndex=2;
    }
    p.gstcom01.value=p.d_gstcom01.value
  }
} else {
  p.misqua01.value="1";
  p.misamt01.value="0";
}
if(!isWhitespace(p.mischg02.value)) {
  checkMisc(p.mischg02,p.misdes02,p.gstapm02,p.gstcom02,p.dummyamt)
  if(p.gstapm02.disabled==false) {
    if(p.d_gstapm02.value=="1") {
      p.gstapm02.selectedIndex=1;
    } else {
      p.gstapm02.selectedIndex=2;
    }
    p.gstcom02.value=p.d_gstcom02.value
  }
} else {
  p.misqua02.value="1";
  p.misamt02.value="0";
}
if(!isWhitespace(p.mischg03.value)) {
  checkMisc(p.mischg03,p.misdes03,p.gstapm03,p.gstcom03,p.dummyamt)
  if(p.gstapm03.disabled==false) {
    if(p.d_gstapm03.value=="1") {
      p.gstapm03.selectedIndex=1;
    } else {
      p.gstapm03.selectedIndex=2;
    }
    p.gstcom03.value=p.d_gstcom03.value
  }
} else {
  p.misqua03.value="1";
  p.misamt03.value="0";
}
if(!isWhitespace(p.mischg04.value)) {
  checkMisc(p.mischg04,p.misdes04,p.gstapm04,p.gstcom04,p.dummyamt)
  if(p.gstapm04.disabled==false) {
    if(p.d_gstapm04.value=="1") {
      p.gstapm04.selectedIndex=1;
    } else {
      p.gstapm04.selectedIndex=2;
    }
    p.gstcom04.value=p.d_gstcom04.value
  }
} else {
  p.misqua04.value="1";
  p.misamt04.value="0";
}
if(!isWhitespace(p.mischg05.value)) {
  checkMisc(p.mischg05,p.misdes05,p.gstapm05,p.gstcom05,p.dummyamt)
  if(p.gstapm05.disabled==false) {
    if(p.d_gstapm05.value=="1") {
      p.gstapm05.selectedIndex=1;
    } else {
      p.gstapm05.selectedIndex=2;
    }
    p.gstcom05.value=p.d_gstcom05.value
  }
} else {
  p.misqua05.value="1";
  p.misamt05.value="0";
}
if(!isWhitespace(p.mischg06.value)) {
  checkMisc(p.mischg06,p.misdes06,p.gstapm06,p.gstcom06,p.dummyamt)
  if(p.gstapm06.disabled==false) {
    if(p.d_gstapm06.value=="1") {
      p.gstapm06.selectedIndex=1;
    } else {
      p.gstapm06.selectedIndex=2;
    }
    p.gstcom06.value=p.d_gstcom06.value
  }
} else {
  p.misqua06.value="1";
  p.misamt06.value="0";
}

 SetMisbox1();
 SetMisbox2();
 SetMisbox3();
 SetMisbox4();
 SetMisbox5();
 SetMisbox6();
 SetMisbox7();


}
