//jsVersion  : V11.03.04
//========================================================================
// Program   : mrtweb0203.js
//========================================================================
//   Report 3  template:001 
//========================================================================
// Variable declarations
var validcnt;
var additreq;
//
function DisEpisodeNo() {
  ind=document.UpdateForm.epsoindc.value;
  if (ind=="1") {
    DisEpis.innerHTML=disepisode.innerHTML;
  } else {
    DisEpis.innerHTML="";
  }
}
function DisWeight() {
  ind=document.UpdateForm.wghtindc.value;
  if (ind=="1") {
    WeightLabel.innerHTML=weightlabel.innerHTML;
    WeightField.innerHTML=weightfield.innerHTML; }
  else {
    WeightLabel.innerHTML="";
    WeightField.innerHTML=""; }
}
function DisNeonate() {
  ind=document.UpdateForm.neonindc.value;
  if (ind=="1") {
    NeonateLabel.innerHTML=neonatelabel.innerHTML;
    NeonateFeild.innerHTML=neonatefield.innerHTML;   }
  else {
    NeonateLabel.innerHTML="";
    NeonateFeild.innerHTML=""; }
}
function setSeq03(newseq) {
  document.UpdateForm.newseqnc.value=newseq.value;
}
function ChangeEps(epsno) {
  ServerPage="mrtweb02.pbl?reportno=03&template=001"
  location.href=ServerPage +  
       "&urnumber="+document.UpdateForm.urnumber.value.replace(/ /g,"+") +
       "&admissno="+document.UpdateForm.admissno.value.replace(/ /g,"+") +
       "&epscd001="+epsno.value.replace(/ /g,"+") 
}
function setcount(count) {
  validcnt=count;
}
function MoveRec03(admiss,epsno,currseq,settype,setfunc,counter,btn) {
  if (document.UpdateForm.newseqnc.value=="" ||
      document.UpdateForm.newseqnc.value==currseq) {
    alert("You must first change the sequence!"); 
    return; }
  if (validcnt!=counter) {
    alert("You must select the equivalent icon!"); 
    return; }
  document.UpdateForm.ptecd001.value=admiss;
  document.UpdateForm.ptecd002.value=epsno;
  document.UpdateForm.ptecd003.value=currseq;
  document.UpdateForm.moveswap.value=settype;
  document.UpdateForm.setfunct.value=setfunc;
  document.UpdateForm.updttype.value="S";

  if (btn != undefined) {
    tempDisable(btn,"6");
  }
  if(!validateMandatory(UpdateForm)) {
    return;
  }
  ShowWaitScreen();
  window.setTimeout(HideWaitScreen,30000);  // restore page after 30 secs 
  SubmitHidden(UpdateForm);
}
function setSort03(setfunc,currseq,newseq) {
  var sequence_cgi;
  var sequence_object;
  if(setfunc == "D") {
    sequence_cgi = "seqdi" + currseq.replace(/ /g,"0");
  } else if (setfunc == "O") {
    sequence_cgi = "seqop" + currseq.replace(/ /g,"0");
  }
  sequence_object=document.getElementById(sequence_cgi);
  if(sequence_object) {
    sequence_object.value = sequence_object.value.substr(0,13) + newseq.value;
  }
}
function PostSort03(setfunc) {
  var sequence;
  var changed_sequence=false;
  var sequence_cgi;
  if(setfunc == "D") {
    sequence = document.getElementsByName('dummyd');
  } else if (setfunc == "O") {
    sequence = document.getElementsByName('dummyo');
  }
  sequence_cgi = document.getElementsByTagName('INPUT');
  for(var i = 0; i < sequence.length; i++) {
    for(var j = 0; j < sequence.length; j++) {
      if(i!=j) {
        if(sequence[i].value == sequence[j].value) {
         alert("Error - Duplicate sequence number :" + sequence[i].value);
         return;
        }
      }
    }
  }
  for(var i = 0; i < sequence_cgi.length; i++) {
     if(sequence_cgi[i].name.substr(0,5) == "seqdi" ||
       sequence_cgi[i].name.substr(0,5) == "seqop") {
       if(sequence_cgi[i].value.substr(10,3) !=
          sequence_cgi[i].value.substr(13,3)){
          changed_sequence=true;
       }
     }
  }
  if(!changed_sequence) {
    alert("You must first change the sequence!"); 
  }
  if(setfunc == "D") {
    tempDisable(document.UpdateForm.SortDisButton,"6");
  } else if (setfunc == "O") {
    tempDisable(document.UpdateForm.SortOprButton,"6");
  }
  document.UpdateForm.ptecd001.value=UpdateForm.admissno.value.replace(/ /g,"+")
  document.UpdateForm.ptecd002.value=UpdateForm.epscd001.value.replace(/ /g,"+")
  document.UpdateForm.setfunct.value=setfunc;    // Diagnosis or Operation
  document.UpdateForm.moveswap.value="R";
  document.UpdateForm.updttype.value="S";
  if(!validateMandatory(UpdateForm)) {
    return;
  }
  ShowWaitScreen();
  window.setTimeout(HideWaitScreen,30000);  // restore page after 30 secs
  SubmitHidden(UpdateForm)
}
function ShowCods03(thislink) {
  linkurl=trim(thislink.replace(/ /g,"+")) +
          "&urnumber=" + escape(PatientLinks.urnumber.value) +
          "&admissno=" + escape(PatientLinks.admissno.value)
  Left=(document.body.clientWidth-850)/2
  Left=Left-18;
  DFrameLink(linkurl,75,Left,850,600)
}
function Export() {
  document.UpdateForm.reportno.value="7";
  document.UpdateForm.updttype.value="E";
  document.UpdateForm.nextpage.value="5";
  document.UpdateForm.redirect.value="mrtweb02.pbl" + location.search +
                                   "&flexpenc=1"
  if(document.getElementById("mrcnautg")) {
    if(document.getElementById("mrcnautg").value=="1") {
      document.UpdateForm.redirect.value=
      document.UpdateForm.redirect.value.replace(/&runautog=1/g,"")
    }
  }
  SubmitHidden(UpdateForm)
}
function Grouper() {
  document.UpdateForm.reportno.value="7";
  var grouper=document.UpdateForm.groupert.value;
  if(grouper=="3") {
    TurboGrouper();
    return;
  }
  if (grouper=="1") {  
    document.UpdateForm.updttype.value="G";     // Use PC Grouper
    document.UpdateForm.encoderf.value="0";
    document.UpdateForm.nextpage.value="5";
    document.UpdateForm.redirect.value="mrtweb02.pbl" + location.search +
                                   "&flexpenc=1";
  }else {
    document.UpdateForm.updttype.value="U";     // Use Unix Grouper
    document.UpdateForm.nextpage.value="5";
    document.UpdateForm.redirect.value="mrtweb02.pbl" +
                                   location.search.replace(/&flexpenc=1/g,"")
  }
  if(document.getElementById("mrcnautg")) {
    if(document.getElementById("mrcnautg").value=="1") {
      document.UpdateForm.redirect.value=
      document.UpdateForm.redirect.value.replace(/&runautog=1/g,"")
    }
  }
  if(!validateMandatory(UpdateForm)) {
    return;
  }
  ShowWaitScreen();
  window.setTimeout(HideWaitScreen,30000);  // restore page after 30 secs
  SubmitHidden(UpdateForm)
}
function LoadGrp() {
  document.UpdateForm.reportno.value="7";
  document.UpdateForm.updttype.value="I";
  document.UpdateForm.encoderf.value="0";
  document.UpdateForm.nextpage.value="8";
  document.UpdateForm.redirect.value="mrtweb02.pbl" +
                                   location.search.replace(/&flexpenc=1/g,"")
  if(document.getElementById("mrcnautg")) {
    if(document.getElementById("mrcnautg").value=="1") {
      document.UpdateForm.redirect.value=
      document.UpdateForm.redirect.value.replace(/&runautog=1/g,"")
    }
  }
  SubmitHidden(UpdateForm)
}
function Encoder() {
  document.UpdateForm.reportno.value="7";
  document.UpdateForm.updttype.value="I";
  document.UpdateForm.encoderf.value="1";
  document.UpdateForm.nextpage.value="5";
  document.UpdateForm.redirect.value="mrtweb02.pbl" +
                                   location.search.replace(/&flexpenc=1/g,"")
  if(document.getElementById("mrcnautg")) {
    if(document.getElementById("mrcnautg").value=="1") {
      document.UpdateForm.redirect.value=
      trim(document.UpdateForm.redirect.value) + "&runautog=1";
    }
  }
  SubmitHidden(UpdateForm)
}
function deleAll() {
  ans=confirm("This will Delete all Codes for the Patient Record");
  if (ans) {
    document.UpdateForm.updttype.value="L";
    document.UpdateForm.target="PopUpFrame"
    document.UpdateForm.submit(); }
}
function Compall() {
  pripre = document.UpdateForm.pripre.value;
  compre = document.UpdateForm.compre.value;
  stateflg = document.UpdateForm.stateflg.value;
// hospital birth check for Victorian edit - HDP=Y
  var hospbith=document.UpdateForm.hspbirth.value.substr(14,1);
  if (document.UpdateForm.prfix001.value != pripre) {
    if (stateflg=="3") {
      if (hospbith!="Y"||document.UpdateForm.prfix001.value!=compre) {
        alert("Error 1st Disease code does not have a '" + pripre +
            "' prefix! Please change.");
        return;
      }
    } else {
      ans=confirm("Warning 1st Disease code does not have a '" + pripre +
                  "' prefix!\n" +
                  "Would you like to change it now? or press Cancel " +
                  "to continue.");
      if (ans) {
        return; } 
    }
  }
  // Validate Disease Codes on screen!!
  if (!ValidateDisCodes()) {
    return; // Return is = to false  
  } 
  // Validate Procedure Codes on screen!!
  if (!ValidateProCodes()) {
    return; // Return is = to false  
  } 
//
//  Note the following if statements that check against codes are also in 
//  mrtweb02.js on function Warn().. Thus if you make changes here
//  make sure the same is done in mrtweb02.js!!!
//
  if (isWhitespace(document.UpdateForm.hrsinmec.value)) {
    WarnMech=false;
    for (var i=0; i < document.UpdateForm.length; i++) {
      if (document.UpdateForm.elements[i].name.match(/prcod/)) { 
        if (document.UpdateForm.elements[i].value.match(/13882-00/)) {
          WarnMech=true; break; }
        if (document.UpdateForm.elements[i].value.match(/13882-01/)) {
          WarnMech=true; break; }
        if (document.UpdateForm.elements[i].value.match(/13882-02/)) {
          WarnMech=true; break; }
      }
    }
    if (WarnMech) {
      Continue=confirm('Warning: ' +
                       'A procedure code of either 13882-00,\n'+
                       '13882-01 or 13882-02 has been entered,' +
                       ' without an Hrs on Mech value.\n\n' +
                       'Click Ok if you want to Override Warning.\n')
      if (!Continue) { return false ;; }
    }
  }
  if (!isWhitespace(document.UpdateForm.hrsinmec.value)) {
    WarnMech=true;
    for (var i=0; i < document.UpdateForm.length; i++) {
      if (document.UpdateForm.elements[i].name.match(/prcod/)) {
        if (document.UpdateForm.elements[i].value.match(/13882-00/)) {
          WarnMech=false; break; }
        if (document.UpdateForm.elements[i].value.match(/13882-01/)) {
          WarnMech=false; break; }
        if (document.UpdateForm.elements[i].value.match(/13882-02/)) {
          WarnMech=false; break; }
      }
    }
    if (WarnMech) {
      if (document.UpdateForm.mechwarn.value=="1") {
         alert('Fatal Error: Hrs on Mech found! a code of  either ' +
                          '13882-00,\n'+
                          '13882-01 or 13882-02 must be entered.');
         return;
      } else {
        Continue=confirm('Warning: ' +
                         'Hrs on Mech found! a code of either ' +
                         '13882-00,\n'+
                         '13882-01 or 13882-02 must be entered.\n\n' +
                         'Click Ok if you want to Override Warning.\n')
        if (!Continue) { return false ;; }
      }
    }
  }
  // Now do Admission Warnings if within Age Range!
  if (document.UpdateForm.wghtindc.value=="1") { // Age Range Parameter 
    if (!isWhitespace(document.UpdateForm.admweght.value)) {
      weight=parseInt(document.UpdateForm.admweght.value,10); //Convert to an Int!
      if ((weight >= "1000") && (weight <= "2499")) {
        WarnWght=true;
        for (var i=0; i < document.UpdateForm.length; i++) {
          if (document.UpdateForm.elements[i].name.match(/dscod/)) { 
            if (document.UpdateForm.elements[i].value.match(/P07.1/)) {
              WarnWght=false; break; }
            if (document.UpdateForm.elements[i].value.match(/P07.3/)) {
              WarnWght=false; break; }
            if (document.UpdateForm.elements[i].value.match(/P05/)) {
              WarnWght=false; break; }
            if (document.UpdateForm.elements[i].value.match(/P96.4/)) {
              WarnWght=false; break; }
            if (document.UpdateForm.elements[i].value.match(/P01.8/)) {
              WarnWght=false; break; }
          }
        }
        if (WarnWght) {
          Continue=confirm('Warning: ' +
                       'Admission Weight b/w 1000-2499g, No Matching Disease\n'+
                       'Code. Please add a code of either P07.1*, P07.3*,' +
                       ' P05*, P96.4 or P01.8\n\n' +
                       'Click Ok if you want to Override Warning.\n')
          if (!Continue) { return ;; }
        }
      }
      // Only do the following warning if Adm Source HDP="Y"-birth in hosp
      var hospbith=document.UpdateForm.hspbirth.value.substr(14,1);
      if (hospbith=="Y") {
        if (weight > "6000") {
          WarnWght=true;
          for (var i=0; i < document.UpdateForm.length; i++) {
            if (document.UpdateForm.elements[i].name.match(/dscod/)) { 
              if (document.UpdateForm.elements[i].value.match(/P08.0/)) {
                WarnWght=false; break; }
              if (document.UpdateForm.elements[i].value.match(/P08.1/)) {
                WarnWght=false; break; }
            }
          }
          if (WarnWght) {
            Continue=confirm('Warning: ' +
                         'Admission Weight > 6000g, No Matching Disease\n'+
                         'Code. Please add a code of either P08.0, P08.1\n\n' +
                         'Click Ok if you want to Override Warning.\n')
            if (!Continue) { return ;; }
          }
        }
      }
    }
  }

//
//  CPAP(NIV) hrs error checking. Only for Victoria
//  usngcpap=1 : Patient is under 10 days of age at time of Admission
// 
  document.UpdateForm.usngcpap.value="1";   // Is flag set?
  if (stateflg=="3") {  // State flag 3=Vic       
    if (document.UpdateForm.usngcpap.value=="1") {  // Is flag set?
      if (!isWhitespace(document.UpdateForm.hrsinniv.value)) {
        WarnCpap=false;
        for (var i=0; i < document.UpdateForm.length; i++) {
          if (document.UpdateForm.elements[i].name.match(/dscod/)) { 
            if (document.UpdateForm.elements[i].value.match(/Z38/)) {
              WarnCpap=true; break; }
          }
        }
        if (WarnCpap) {
            Continue=confirm('Warning: Healthy Newborn with NIV Duration.\n' +
                'NIV hrs exist and a Z38 code has been entered!');
            if (!Continue) { return false ;; }
        }
      }        
    }
  }
  if (stateflg=="1") {  // State flag 1=NZ
      if (isWhitespace(document.UpdateForm.hrsinniv.value)) {
        WarnCpap=false;
        for (var i=0; i < document.UpdateForm.length; i++) {
          if (document.UpdateForm.elements[i].name.match(/prcod/)) {
            if (document.UpdateForm.elements[i].value.match(/92209-00/)) {
              WarnCpap=true; break; }
            if (document.UpdateForm.elements[i].value.match(/92209-01/)) {
              WarnCpap=true; break; }
            if (document.UpdateForm.elements[i].value.match(/92209-02/)) {
              WarnCpap=true; break; }
          }
        }
        if (WarnCpap) {
            Continue=confirm('Warning: ' +
                             'A procedure code of either 92209-00,92209-01,\n'+
                             'or 92209-02 has been entered,' +
                             ' without an Hrs for NIV value.\n\n' +
                             'Click Ok if you want to Override Warning.\n')
            if (!Continue) { return false ;; }
        }
      } else {
        WarnCpap=true;
      for (var i=0; i < document.UpdateForm.length; i++) {
        if (document.UpdateForm.elements[i].name.match(/prcod/)) {
          if (document.UpdateForm.elements[i].value.match(/92209-00/)) {
            WarnCpap=false; break; }
          if (document.UpdateForm.elements[i].value.match(/92209-01/)) {
            WarnCpap=false; break; }
          if (document.UpdateForm.elements[i].value.match(/92209-02/)) {
            WarnCpap=false; break; }
        }
      }
      if (WarnCpap) {
          Continue=confirm('Warning: ' +
                           'Hrs on NIV found, a code of either 92209-00,' +
                           ' 92209-01,\nor 92209-02 must be entered!\n\n' +
                           'Click Ok if you want to Override Warning.\n')
          if (!Continue) { return false ;; }
      }
     }
    }
//
// 2016/2017 VAED Stat Changes
   discdate=' '; 
   if(document.getElementById('discdate') != null ){
     discdate=SetDateYYYYMMDD(document.getElementById('discdate').value) ;
   }

   if(stateflg=='3' && discdate>'20160630'){
     if(!VAEDEdit()){
       return;
     }
   }
//
   if(stateflg=='3' && discdate>'20170630'){
     if (isWhitespace(document.UpdateForm.hrsinniv.value)) {
       WarnCpap=false;
       for (var i=0; i < document.UpdateForm.length; i++) {
         if (document.UpdateForm.elements[i].name.match(/prcod/)) {
           if (document.UpdateForm.elements[i].value.match(/92209-00/)) {
             WarnCpap=true; break; }
           if (document.UpdateForm.elements[i].value.match(/92209-01/)) {
             WarnCpap=true; break; }
           if (document.UpdateForm.elements[i].value.match(/92209-02/)) {
             WarnCpap=true; break; }
         }
       }
       if (WarnCpap) {
           Continue=confirm('Warning: ' +
                            'A procedure code of either 92209-00,92209-01,\n'+
                            'or 92209-02 has been entered,' +
                            ' without an Hrs for NIV value.\n\n' +
                            'Click Ok if you want to Override Warning.\n')
           if (!Continue) { return false ;; }
       }
     } else {
       WarnCpap=true;
       for (var i=0; i < document.UpdateForm.length; i++) {
         if (document.UpdateForm.elements[i].name.match(/prcod/)) {
           if (document.UpdateForm.elements[i].value.match(/92209-00/)) {
             WarnCpap=false; break; }
           if (document.UpdateForm.elements[i].value.match(/92209-01/)) {
             WarnCpap=false; break; }
           if (document.UpdateForm.elements[i].value.match(/92209-02/)) {
             WarnCpap=false; break; }
         }
       }
       if (WarnCpap) {
           Continue=confirm('Warning: ' +
                            'Hrs on NIV found, a code of either 92209-00,' +
                            ' 92209-01,\nor 92209-02 must be entered!\n\n' +
                            'Click Ok if you want to Override Warning.\n')
           if (!Continue) { return false ;; }
       }
     }
   }
//
//
//   Submit Form
//
  if (validateMandatory(UpdateForm)) {
//
    var codingbutt=document.getElementById('codingdt');
    if(codingbutt) {
      codingbutt.disabled=true;
      setTimeout("document.getElementById('codingdt').disabled=false",8000);
    }
//
    document.UpdateForm.updttype.value="C";
    document.UpdateForm.target="PopUpFrame"
    document.UpdateForm.submit(); 
  }
}
function VAEDEdit(){
     if (document.getElementById('admnclss') != null &&
         document.getElementById('admistat') != null &&
         document.getElementById('admndate') != null &&
         document.getElementById('admntime') != null &&
         document.getElementById('discdate') != null &&
         document.getElementById('disctime') != null &&
         document.getElementById('admistat').value == "3" ) {

       if (document.getElementById('admnclss').value.substr(28,1)=='C' ||
           document.getElementById('admnclss').value.substr(28,1)=='O') {

         for (var i=0; i < document.UpdateForm.length; i++) {

           if (document.UpdateForm.elements[i].name.match(/prcdt101/)) {
                  if(document.UpdateForm.elements[i+3].value == '1'){
                   break;
                  }

             if (isWhitespace(document.UpdateForm.elements[i].value)) {
               alert("Error: Procedure Date and Start Time are mandatory " +
                     "fields for an Emergency Admission Class");
               return false;
             }

             if (!isWhitespace(document.UpdateForm.elements[i].value)) {
               if (SetDateYYYYMMDD(document.getElementById('admndate').value) > 
                   SetDateYYYYMMDD(document.UpdateForm.elements[i].value)) {
                 alert("Error: Procedure Date and Time outside " +
                       "episode admission and discharge range"); 
                 return false;
               }
             }

             if (!isWhitespace(document.UpdateForm.elements[i+1].value) &&
                 !isWhitespace(document.UpdateForm.elements[i+2].value)) {
               if (SetDateYYYYMMDD(document.getElementById('admndate').value) ==
                   SetDateYYYYMMDD(document.UpdateForm.elements[i].value)) {
                 if (document.getElementById('admntime').value >
                     document.UpdateForm.elements[i+1].value + ":00" ||
                     document.getElementById('admntime').value >
                     document.UpdateForm.elements[i+2].value + ":00") {
                   alert("Error: Procedure Date and Time outside " +
                         "episode admission and discharge range");
                   return false;
                 }
               }             
             }

             if (!isWhitespace(document.UpdateForm.elements[i].value)) {
               if (SetDateYYYYMMDD(document.getElementById('discdate').value) <
                   SetDateYYYYMMDD(document.UpdateForm.elements[i].value)) {
                 alert("Error: Procedure Date and Time outside " +
                       "episode admission and discharge range");
                 return false;
               }
             }

             if (!isWhitespace(document.UpdateForm.elements[i+1].value) &&
                 !isWhitespace(document.UpdateForm.elements[i+2].value)) {
               if (SetDateYYYYMMDD(document.getElementById('discdate').value) ==
                   SetDateYYYYMMDD(document.UpdateForm.elements[i].value)) {
                 if (document.getElementById('disctime').value <
                     document.UpdateForm.elements[i+1].value + ":00" ||
                     document.getElementById('disctime').value <
                     document.UpdateForm.elements[i+2].value + ":00") {
                   alert("Error: Procedure Date and Time outside " +
                         "episode admission and discharge range");
                   return false;
                 }
               }
             }
             return true;
           }
         }
       }
     } 
  return true;
}
function SetBlank(prefix) {
  prefix.value=""; 
}
//
//  Validate Disease Prefix that is being entered on Summary Coding Screen
//
function DisPrefix(indicator,nxtfield,code,epscode,epscnt) {
  indicator.value=indicator.value.toUpperCase()
  ind=indicator.value;

  if (ind!="") {
    pripre = document.UpdateForm.pripre.value;   
    seqpre = document.UpdateForm.seqpre.value;   
    compre = document.UpdateForm.compre.value; 
    asspre = document.UpdateForm.asspre.value; 
    lofpre = document.UpdateForm.lofpre.value; 
    dispre = document.UpdateForm.dispre.value; 
    oprpre = document.UpdateForm.oprpre.value; 
    morpre = document.UpdateForm.morpre.value; 
    if ((ind != pripre)&&(ind != seqpre)&&(ind != compre)&&
       (ind != asspre)&&(ind != lofpre)&&(ind != morpre)&&(ind != "X")) {
      alert("Incorrect Prefix Indicator, must be either " + pripre + "," +
          seqpre + "," + compre + "," + asspre + "," + lofpre + "," + morpre +
            " or X");
      indicator.value="";
      indicator.focus(); 
      return;
    }
    findslash=code.search('[/]')
    if (findslash == "5") {  // Have a  Morphology Code
      if (ind != morpre) {
        alert("Error Disease code must have a '" + morpre +
              "' prefix! Please change.");
        indicator.focus();
        return; }
    }
    if ((ind == morpre) && (findslash != "5")) {
      alert("Error Disease code cannot have a '" + morpre +
            "' prefix! Please change.");
      indicator.focus();
      return;
    }

    //
    // Validate Disease Prefix against Disease Code Remote Scripting
    //
    var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=2&valdtype=1" +
                    "&urnumber=" + UpdateForm.urnumber.value.replace(/ /g,"+") +
                    "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
                    "&valdcode=" + code.replace(/ /g,"+") +
                    "&dsprefix=" + indicator.value +
                    "&discodno=" + indicator.name.substr(5,3);

    if (IEBrowser) {
      var returnValue = RSExecute(serverURL);

      if (returnValue.status==0) {
        //
        // Update Disease Prefix Remote Scripting
        //
        var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=4&valdtype=5" +
                    "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
                    "&dsprefix=" + ind.replace(/ /g,"+") +
                    "&diopc001=" + code.replace(/ /g,"+") + 
                    "&ptecd002=" + epscode.replace(/ /g,"+") + 
                    "&ptecd003=" + epscnt.replace(/ /g,"+");

        var returnValue = RSExecute(serverURL);
        if (indicator.name=="dspre101") {
          document.UpdateForm.prfix001.value=ind;
        }

        if (returnValue.status==0) {
          ReturnValue=returnValue.return_value.split("|");
          if (document.getElementById('d_onsty'+indicator.name.substr(5,3)) != null) 
          {
            document.getElementById('d_onsty'+indicator.name.substr(5,3)).innerHTML = ReturnValue[1];
          }
        }
      } else { indicator.focus(); }
    }
    else {
      var returnValue = RSExecuteFetch(serverURL);

      returnValue.then(
        function (returnValue) {
          returnValue = ParseFetchData(returnValue);  // parse fetch() result

          if (returnValue.status==0) {
            //
            // Update Disease Prefix Remote Scripting
            //
            var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=4&valdtype=5" +
                  "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
                  "&dsprefix=" + ind.replace(/ /g,"+") +
                  "&diopc001=" + code.replace(/ /g,"+") + 
                  "&ptecd002=" + epscode.replace(/ /g,"+") + 
                  "&ptecd003=" + epscnt.replace(/ /g,"+");

            var returnValue = RSExecuteFetch(serverURL);

            returnValue.then(
              function (returnValue) {
                returnValue = ParseFetchData(returnValue);  // parse fetch() result
                if (indicator.name=="dspre101") {
                  document.UpdateForm.prfix001.value=ind;
                }

                if (returnValue.status==0) {
                  ReturnValue=returnValue.return_value.split("|");
                  if (document.getElementById('d_onsty'+indicator.name.substr(5,3)) != null) 
                  {
                    document.getElementById('d_onsty'+indicator.name.substr(5,3)).innerHTML = ReturnValue[1];
                  }
                }
              }
            );
          } else { indicator.focus(); }
        }
      );
    }
  } 
  else { indicator.focus(); }
}
//
//  Validate Operation Prefix that is being entered on Summary Coding Screen
//
function OprPrefix(indicator,nxtfield,code,epscode,epscnt) {
  indicator.value=indicator.value.toUpperCase()
  ind=indicator.value;

  if (ind!="") {
    oprpre = document.UpdateForm.oprpre.value; 
    if (document.UpdateForm.diffhosp.value == "1") {
      if ((ind != oprpre)&&(ind != "X")&&(ind != "N")&&(ind != "I")) {
        alert("Incorrect Prefix Indicator, must be either " + 
              oprpre + ",I,N or X");
        indicator.value="";
        indicator.focus(); 
        return;
      }
    } else {
      if ((ind != oprpre)&&(ind != "X")) {
        alert("Incorrect Prefix Indicator, must be either " + 
              oprpre + " or X");
        indicator.value="";
        indicator.focus(); 
        return;
      }
    }

    //
    // Validate Procedure Code Remote Scripting
    //
    var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=2&valdtype=2" +
                "&urnumber=" + UpdateForm.urnumber.value.replace(/ /g,"+") +
                "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
                "&valdcode=" + code.replace(/ /g,"+") 

    if (IEBrowser) {
      var returnValue = RSExecute(serverURL);

      if (returnValue.status==0) {
        //
        // Update Procedure Prefix Remote Scripting
        //
        var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=4&valdtype=5" +
                    "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
                    "&dsprefix=" + ind.replace(/ /g,"+") +
                    "&diopc001=" + code.replace(/ /g,"+") + 
                    "&ptecd002=" + epscode.replace(/ /g,"+") + 
                    "&ptecd003=" + epscnt.replace(/ /g,"+");
        var returnValue = RSExecute(serverURL);
      }
    }
    else {
      var returnValue = RSExecuteFetch(serverURL);

      returnValue.then(
        function (returnValue) {
          returnValue = ParseFetchData(returnValue);  // parse fetch() result

          if (returnValue.status==0) {
          //
          // Update Procedure Prefix Remote Scripting
          //
          var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=4&valdtype=5" +
                "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
                "&dsprefix=" + ind.replace(/ /g,"+") +
                "&diopc001=" + code.replace(/ /g,"+") + 
                "&ptecd002=" + epscode.replace(/ /g,"+") + 
                "&ptecd003=" + epscnt.replace(/ /g,"+");

          var returnValue = RSExecuteFetch(serverURL);
          }
        }
      );
    }
  } else { 
    indicator.focus(); 
  }
}
function ValidateDisCodes() {
  for (var i=0; i < document.UpdateForm.length; i++) {
    if (document.UpdateForm.elements[i].name.match(/dscod/)) {
    // Retrieve the variable no from the name
      cgino=document.UpdateForm.elements[i].name.substring(5,8);
      disprefx="dspre" + cgino;        // Set the equivalent cgi's needed
      prefix=document.UpdateForm[disprefx].value;
      discode=document.UpdateForm.elements[i].value;
//
//    Validate Disease Code Remote Scripting
//
      var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=2&valdtype=1" +
                  "&urnumber=" + UpdateForm.urnumber.value.replace(/ /g,"+") +
                  "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
                  "&valdcode=" + discode.replace(/ /g,"+") +
                  "&dsprefix=" + prefix.replace(/ /g,"+") +
                  "&discodno=" + cgino

      var returnValue = RSExecute(serverURL);
      if (returnValue.status==0) {
        ReturnValue=returnValue.return_value.split("|");
        if ( (ReturnValue.length > 1) && (ReturnValue[1] == "W") ) {
          ans=confirm("Warning: " + trim(discode) + 
            " requires an external cause code." +
            "\n\nSelect OK to proceed, or Cancel to return.");

          if (ans == false) {
            return false;
          }
        }
        dummy=1 }   // Only checking 1 code.. 
      else { 
      return false; }
    }
  }
  return true;
}
function ValidateProCodes() {
  for (var i=0; i < document.UpdateForm.length; i++) {
    if (document.UpdateForm.elements[i].name.match(/prcod/)) {
    // Retrieve the variable no from the name
      code=document.UpdateForm.elements[i].value;
//
//    Validate Procedure Code Remote Scripting
//
      var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=2&valdtype=2" +
                  "&urnumber=" + UpdateForm.urnumber.value.replace(/ /g,"+") +
                  "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
                  "&valdcode=" + code.replace(/ /g,"+") 
      var returnValue = RSExecute(serverURL);
      if (returnValue.status==0) {
        dummy=1 }   // Only checking 1 code.. 
      else { 
      return false; }
    }
  }
  return true;
}
function ValidateDiagAccDates(RetFuncTrue) {
  // Validates Accident Date exists for applicable Diagnosis Codes
  var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=2&valdtype=5" +
                  "&urnumber=" + UpdateForm.urnumber.value.replace(/ /g,"+") +
                  "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+");

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status == 0) {
      if (RetFuncTrue != undefined && typeof(RetFuncTrue) == 'function') {
        RetFuncTrue();
      } 
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status == 0) {
          if (RetFuncTrue != undefined && typeof(RetFuncTrue) == 'function') {
            RetFuncTrue();
          } 
        }
      }
    );
  }
}
function DisplayRetention() {
  if (!isWhitespace(document.getElementById('recrt001').title)) {
    var divPerLabel = document.getElementById('divPerLabel');
    var divPerField = document.getElementById('divPerField');
    var divDatLabel = document.getElementById('divDatLabel');
    var divDatField = document.getElementById('divDatField');
    var divRPerLabel = document.getElementById('divRPerLabel');
    var divRPerField = document.getElementById('divRPerField');
    var divRDatLabel = document.getElementById('divRDatLabel');
    var divRDatField = document.getElementById('divRDatField');

    divPerLabel.innerHTML = document.getElementById('spRetPerLabel').innerHTML;
    divPerField.innerHTML = document.getElementById('spRetPerField').innerHTML;
    divDatLabel.innerHTML = document.getElementById('spRetDatLabel').innerHTML;
    divDatField.innerHTML = document.getElementById('spRetDatField').innerHTML;
    divRPerLabel.innerHTML = document.getElementById('spRtPerLabel').innerHTML;
    divRPerField.innerHTML = document.getElementById('spRtPerField').innerHTML;
    divRDatLabel.innerHTML = document.getElementById('spRtDatLabel').innerHTML;
    divRDatField.innerHTML = document.getElementById('spRtDatField').innerHTML;
    divPerLabel.style.display = "";
    divPerField.style.display = "";
    divDatLabel.style.display = "";
    divDatField.style.display = "";
    divRPerLabel.style.display = "";
    divRPerField.style.display = "";
    divRDatLabel.style.display = "";
    divRDatField.style.display = "";
    RetentionOverRide();                    // Check Retention Fields
  }
}
function RetentionOverRide() {
  if (isWhitespace(document.UpdateForm.recrt001.value)) {
    document.UpdateForm.recrt002.value = "";
    document.UpdateForm.recrt002.readOnly=true;
    document.UpdateForm.recrt002.className="";
    return;
  }
  if (document.UpdateForm.recrt001.value.substr(4,1) == "O") {
    document.UpdateForm.recrt002.readOnly=false;
  } else {
    document.UpdateForm.recrt002.readOnly=true;
  }
  retainYears = parseInt(document.UpdateForm.recrt001.value.substr(22,6));
  if (retainYears == 0) {
    document.UpdateForm.recrt002.value = "";
    document.UpdateForm.recrt002.className="Mandatory FutureDate";
    return;
  } else {
    document.UpdateForm.recrt002.className="";
  }
  indc1=(document.UpdateForm.recrt001.value.substr(3,1));
  hdpdf=(document.UpdateForm.recrt001.value.substr(14,4));
  ageyr=(document.UpdateForm.ageyears.value);
  if (indc1 == "C") {
    if (parseInt(ageyr) > parseInt(hdpdf)) {
      alert("Patient is not a child. Use a different Retention Period.");
      document.UpdateForm.recrt001.value = "";
      document.UpdateForm.recrt002.value = "";
      return;
    } else {
      retainYears -= ageyr;
    }
  }
  dayMonth = (document.UpdateForm.recretdt.value.substr(0,7));
  var myDate = GetDateObj(document.UpdateForm.recretdt.value);
  myDate.setFullYear(myDate.getFullYear() + retainYears);
  document.UpdateForm.recrt002.value = dayMonth + myDate.getFullYear();
//
  var newDate = GetDateObj(document.UpdateForm.recrt002.value);
  var oldDate = GetDateObj(document.UpdateForm.exiretdt.value);
  if (newDate < oldDate) {
    document.UpdateForm.recrt002.value = "";
    alert("Retain Until Date cannot be less than existing retention date.");
  }
}
function CheckRetention() {
  var newDate = GetDateObj(document.UpdateForm.recrt002.value);
  var oldDate = GetDateObj(document.UpdateForm.exiretdt.value);
  if (newDate < oldDate) {
    document.UpdateForm.recrt002.value = document.UpdateForm.exiretdt.value;
    alert("Retain Until Date cannot be less than existing retention date.");
    return;
  }
}
//========================================================================
//   Report 3  template:002 
//========================================================================
// Note if you need to turn on the following parameter please set it in the
// template! As done in ../private/mrtweb0203002.html & mrtweb0203004.html
//
var OperationDateTime=false; // Parameter to turn Operation Date + Time display 
//
var ItemNo=100;  // Need this to be 100 as else the cgi var has to be 8 chars
var ops=0; 
function CheckPrefix(indicator,nxtfield) {
  indicator.value=indicator.value.toUpperCase()
  ind=indicator.value;
  pripre = document.AddForm.pripre.value;   
  seqpre = document.AddForm.seqpre.value;   
  compre = document.AddForm.compre.value; 
  asspre = document.AddForm.asspre.value; 
  lofpre = document.AddForm.lofpre.value; 
  dispre = document.AddForm.dispre.value; 
  oprpre = document.AddForm.oprpre.value; 
  morpre = document.AddForm.morpre.value; 
  if (ind !=""){
    if (document.AddForm.diffhosp.value == "1") {
      if ((ind == pripre)||(ind == seqpre)||(ind == compre)||
          (ind == asspre)||(ind == lofpre)||(ind == oprpre)||
          (ind == morpre)||(ind == "X")||(ind == "I")||
          (ind == "N")) {
        nxtfield.focus();
      } else {
        alert("Incorrect Prefix Indicator, must be either " + pripre + "," +
              seqpre + "," + compre + "," + asspre + "," + lofpre + "," +
              oprpre + "," + morpre + ",N,I or X");
        indicator.value="";
        indicator.focus(); }
    } else {
      if ((ind == pripre)||(ind == seqpre)||(ind == compre)||
          (ind == asspre)||(ind == lofpre)||(ind == oprpre)||
          (ind == morpre)||(ind == "X")) {
        nxtfield.focus();
      } else {
        alert("Incorrect Prefix Indicator, must be either " + pripre + "," +
              seqpre + "," + compre + "," + asspre + "," + lofpre + "," +
              oprpre + "," + morpre + " or X");
        indicator.value="";
        indicator.focus(); 
      }
    }
    if (AddForm.diopc001.value != "") {
      findslash=AddForm.diopc001.value.search('[/]')
      if (findslash == "5") {  // Have a  Morphology Code
        if (ind != morpre) {
          alert("Error Disease code must have a '" + morpre +
                 "' prefix! Please change.");
           indicator.focus();
           return;
         }
      }
      if ((ind == morpre) && (findslash != "5")) {
        alert("Error Disease code cannot have a '" + morpre +
              "' prefix! Please change.");
        indicator.focus();
        return;
      }
    }
  }
}
function Icd10DisNext(DischDte) {
  if (isWhitespace(document.AddForm.dsprefix.value)) {
    alert('Prefix is Required'); 
    document.AddForm.dsprefix.focus() }
  else {
    ThisCode=document.AddForm.diopc001
    Icd10DisSrchMedRec(ThisCode,DischDte); } // Custom Medical Record search
}
function Icd10ProNext(DischDte) {
  oprpre = document.AddForm.oprpre.value;
  ThisCode=document.AddForm.diopc001

    if (document.AddForm.allwnpre==undefined) {
      document.AddForm.dsprefix.value = oprpre;            // was "O";
    } else {
      if (document.AddForm.dsprefix.value!="N" &&
          document.AddForm.dsprefix.value!="I" &&
          document.AddForm.dsprefix.value!="X") {
        document.AddForm.dsprefix.value = oprpre;         // was "O";
      }
    }

//  document.AddForm.dsprefix.value = "O"; // Prefix set to O-Operation Code
  Icd10ProSrchMedRec(ThisCode,DischDte);  // Custom Medical Record search
}
function CheckKey(ReturnCode,ReturnName,ReturnPrefix,ReturnDate,ReturnTime,ReturnEnd,ReturnBlock,ReturnDTMan,ReturnDcod,ReturnDnam) {
  if (isWhitespace(ReturnCode.value)) return;;
  ReturnCode.value=ReturnCode.value.toUpperCase()
  ReturnCode.value=ReturnCode.value.replace(/ /g,"")
  setfo = ReturnCode.value.search('[A-Z]')
  if (setfo == "0") {                            // edit Disease Code
    if (ReturnPrefix.value == "") {
      alert("You must enter in a valid prefix.")
      ReturnPrefix.focus(); 
      return;
    }
    else {                   // Disease Codes cannot have Oper Prefix
    if (ReturnPrefix.value == document.AddForm.oprpre.value) {
      alert("Must use a Disease prefix!")
      ReturnPrefix.focus();
      return; }
    // Check for Morphology Code
    Codelen=ReturnCode.value.length;
    findot=ReturnCode.value.search('[.]')
    findslash=ReturnCode.value.search('[/]')
    if ((findot != "3") && (Codelen > "5")) {  // Check for Morphology Code
      if (ReturnPrefix.value == morpre) {
        // Check whether a "/" has been entered for this Procedure code
        // If code not in format M0000/0
        if (findslash != "5") {
          a=ReturnCode.value.substr(0,5);
          b=ReturnCode.value.substr(5,5);
          ReturnCode.value= a + "/" + b;     // Add slash to string
        }
      } else {
        alert("Error Disease code must have a '" + morpre +
              "' prefix! Please change.");
        ReturnPrefix.focus();
        return;
      }
    }
    else { 
      // Check whether a "." has been entered if not format with a "."
      // If code not in format A00.0 or Code is > 3 characters
      if ((findot != "3") && (Codelen != "3")) {
        a=ReturnCode.value.substr(0,3);    // Then must be in format A000
        b=ReturnCode.value.substr(3,3);
        ReturnCode.value= a + "." + b;     // Add full stop to string
      }
      if (ReturnPrefix.value == morpre) {
        alert("This code cannot have a  '" + morpre +
              "' prefix! Please change.");
        ReturnPrefix.focus();
        return;
      }
    }
    ValidateType="1";
    ReturnFunction=AddAccs; } }
  else {                                         // edit Operation Code
    // Check whether a "-" has been entered for this Procedure code
    findash=ReturnCode.value.search('[-]')
    // If code not in format 00000-00
    if (findash != "5") {
      a=ReturnCode.value.substr(0,5);
      b=ReturnCode.value.substr(5,5);
      ReturnCode.value= a + "-" + b;     // Add dash to string
    }
    ValidateType="2";
    ReturnFunction=AddOps;

    if (document.AddForm.allwnpre==undefined) {
      ReturnPrefix.value = oprpre;                        // was "O";
    } else {
      if (ReturnPrefix.value!="N" &&
          ReturnPrefix.value!="I" &&
          ReturnPrefix.value!="X") {
        ReturnPrefix.value = oprpre;                     // was "O";
      }
    }
  }
  ReturnName.value="";

  var unqcnt="";

  if (ValidateType=="1") {
    //
    //  Remote Scripting to find out if using the first Disease Code
    //  else return Episode unique counter
    //
    var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=4&valdtype=6" +
                "&urnumber=" + AddForm.urnumber.value.replace(/ /g,"+") +
                "&admissno=" + AddForm.admissno.value.replace(/ /g,"+") +
                "&epscd001=" + AddForm.epscd001.value.replace(/ /g,"+")

    if (IEBrowser) {
      var returnValue = RSExecute(serverURL);

      if (returnValue.status==0) {
        ReturnValue=returnValue.return_value.split("|")
        unqcnt=ReturnValue[0];
        unqcnt=unqcnt-0; // Convert to Number first
        unqcnt=unqcnt+100; // Now format as 100 eg 3 chars
      }
    }
    else {
      var returnValue = RSExecuteFetch(serverURL);

      returnValue.then(
        function (returnValue) {
          returnValue = ParseFetchData(returnValue);  // parse fetch() result

          if (returnValue.status==0) {
            ReturnValue=returnValue.return_value.split("|")
            unqcnt=ReturnValue[0];
            unqcnt=unqcnt-0; // Convert to Number first
            unqcnt=unqcnt+100; // Now format as 100 eg 3 chars
          }

          // Get the Code details ..
          GetCodeDetails(ValidateType,unqcnt,ReturnCode,ReturnName,ReturnPrefix,ReturnDate,ReturnTime,ReturnEnd,ReturnBlock,ReturnDTMan,ReturnDcod,ReturnDnam);
          return;
        }
      );
      return;
    }
  } else { unqcnt="1"; } // Just set to 1 for Procedure Codes.. Not needed!!


  // Get the Code details ..
  GetCodeDetails(ValidateType,unqcnt,ReturnCode,ReturnName,ReturnPrefix,ReturnDate,ReturnTime,ReturnEnd,ReturnBlock,ReturnDTMan,ReturnDcod,ReturnDnam);

}
function GetCodeDetails(ValidateType,DisCodNo,ReturnCode,ReturnName,ReturnPrefix,ReturnDate,ReturnTime,ReturnEnd,ReturnBlock,ReturnDTMan,ReturnDcod,ReturnDnam) {
  var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=2" +
                  "&urnumber=" + AddForm.urnumber.value.replace(/ /g,"+") +
                  "&admissno=" + AddForm.admissno.value.replace(/ /g,"+") +
                  "&valdtype=" + ValidateType +
                  "&valdcode=" + ReturnCode.value.replace(/ /g,"+") +
                  "&dsprefix=" + ReturnPrefix.value +
                  "&discodno=" + DisCodNo;

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|")
      ReturnName.value=trim(ReturnValue[0]);
      if (ValidateType=="1") {
         additreq=ReturnValue[1];
        if (!isWhitespace(ReturnValue[2])) {  // Diagnosis Warning Message?
          alert(ReturnValue[2]) }             // Diagnosis Warning message Found!
      } else {    
        if (!isWhitespace(ReturnValue[9])) {  // Procedure Warning Message?
          alert(ReturnValue[9]) }             // Procedure Warning Message Found!
        ReturnDate.value=ReturnValue[1]
        ReturnTime.value=ReturnValue[2]
        ReturnEnd.value=ReturnValue[3] 
        ReturnFlag=ReturnValue[4]
        ReturnBlock.value=ReturnValue[5]
        ReturnDTMan.value=ReturnValue[6]
        ReturnDcod.value=ReturnValue[7]
        ReturnDnam.value=ReturnValue[8]
        if (ReturnFlag=="1") {
          ReturnDate.value="";
          ReturnTime.value="";
          ReturnEnd.value=""; 
        }
      }
      if (typeof(ReturnFunction) == 'function') {
        ReturnFunction(ReturnCode.value);
      }
    }
    else {
      ReturnCode.select(); 
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status==0) {
          ReturnValue=returnValue.return_value.split("|")
          ReturnName.value=trim(ReturnValue[0]);
          if (ValidateType=="1") {
             additreq=ReturnValue[1];
            if (!isWhitespace(ReturnValue[2])) {  // Diagnosis Warning Message?
              alert(ReturnValue[2]) }             // Diagnosis Warning message Found!
          } else {    
            if (!isWhitespace(ReturnValue[9])) {  // Procedure Warning Message?
              alert(ReturnValue[9]) }             // Procedure Warning Message Found!
            ReturnDate.value=ReturnValue[1]
            ReturnTime.value=ReturnValue[2]
            ReturnEnd.value=ReturnValue[3] 
            ReturnFlag=ReturnValue[4]
            ReturnBlock.value=ReturnValue[5]
            ReturnDTMan.value=ReturnValue[6]
            ReturnDcod.value=ReturnValue[7]
            ReturnDnam.value=ReturnValue[8]
            if (ReturnFlag=="1") {
              ReturnDate.value="";
              ReturnTime.value="";
              ReturnEnd.value=""; 
            }
          }
          if (typeof(ReturnFunction) == 'function') {
            ReturnFunction(ReturnCode.value);
          }
        }
        else {
          ReturnCode.select(); 
        }
      }
    );
  }
}
function AddOps() {
  oprdate=document.AddForm.oprdate.value;
  oprtime=document.AddForm.oprtime.value;
  oprendt=document.AddForm.oprendt.value;
  blockno=document.AddForm.blockno.value;
  dttmman=document.AddForm.dttmman.value;
  oprdcod=trim(document.getElementById("oprdcod").value);
  oprdnam=document.AddForm.oprdnam.value;

// If a Procedure code has already been entered then this routine replaces 
// the fields with the new vars else continues and outputs block no and 
// operation details
//  if (ops=="1") {                            
//    document.AddForm.oprblock.value=blockno;
//    document.AddForm.ptecd004.value=oprdate; 
//    document.AddForm.ptecd005.value=oprtime; 
//    document.AddForm.ptecd006.value=oprendt;
//    return;
//  }

  opsno=document.AddForm.pteocnt.value;
  dateman= "' '";                         // default values (oprtdate = 0 or 1)
  timeman= "' '";
  if (document.AddForm.oprtdate.value==3) {
     if (opsno==0) {
        dateman= "'Date Mandatory'";
        if (document.AddForm.oprttime.value==0) {
          timeman= "'Mandatory'"; }
     } else {
        dateman= "'Date'";
     }
  } else {
    dateman= "'Date'";
  }

  if (document.AddForm.oprtdate.value==2) {
        dateman= "'Date Mandatory'";
     if (document.AddForm.oprttime.value==0) {
        timeman= "'Mandatory'"; }
  } else {
    if(document.AddForm.oprtdate.value!=3) {
      dateman= "'Date'";
    }
  }

  if (document.AddForm.dttmman.value!=1) {
//     if (document.AddForm.oprtdate.value!=3) {
//        if (dateman!='Date Mandatory') {
//            dateman= "'Date Mandatory'";
//            timeman= "'Time Mandatory'";
//        }
//     }
  } else {
    dateman= "'Date'";
    timeman= "' '";
  }

//                                       Block No. field
  RecordCoding.innerHTML ="&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;" +
                            "&nbsp;Block No " +
                            "<input type=text size=4 name=oprblock" + 
                            " value='" + blockno + "' readonly>" 

  if (document.AddForm.oprtdate.value!=1) {
    AddDateTime()
    VerifyDateSrch(document.AddForm.ptecd004);
  }
  RecordCoding.innerHTML +="<br>"
  ops=1;        // first successful pass set flag to one

//                                       Clinician field
   if (typeof document.AddForm.mrcnclin != "undefined") {
      doclass = "' '";
      if (document.AddForm.mrcnclin.value !=0 ) {
         if ((document.AddForm.oprtdate.value==3) && (opsno!=0)) {
              document.AddForm.mrcnclin.value=1;
         }
         if (document.AddForm.mrcnclin.value==2) {
          doclass = "'Mandatory'"; }
        AddDocCode()
      }
  }
}

function AddDocCode() {
   ClinicianFld.innerHTML ="&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;" +
                           "&nbsp;&nbsp;Clinician &nbsp;&nbsp;" +
                           "<input type=text size=10 name=ptecd009" +
                           " value='" + oprdcod + "' class=" + doclass +
                           " title='Clinician'" +
              " onblur='ValidateHCPX(18,3,ptecd009,n_oprdoc,admissno);'>" +
                           "&nbsp;<input type=text name=n_oprdoc size=35" +
                           " value='" + oprdnam + "'" +
                           " readonly title='HCP Name' class=Readonly>" +
                           "<img src='../images/SearchIcon.gif' class=Icon" +
              " onclick=HCPSearchFrame(AddForm.ptecd009,AddForm.n_oprdoc,8)>";
}

function AddDateTime() {
   RecordCoding.innerHTML +="&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Operation Date " +
                            "<input type=text size=12 name=ptecd004" + 
                            " value='" + oprdate + "' class=" + dateman +
                            " title='Operation Date'" +
                            " onblur=checkDate(this,'Operation-date');" +
                            "VerifyDate(ptecd004);>" +
                            "<img notab src='../images/DateTimeStamp.gif' " +
                            "class='Icon' alt='Current' " +
                            "date='AddForm.ptecd004'" +
                            " time='AddForm.ptecd005'>" +
                            "<img notab src='../images/DateLookup.gif' " +
                            "class='Icon' alt='Show Calendar' " +
                            "date='AddForm.ptecd004'>";

    if (document.AddForm.oprttime.value !=2 ) {
      RecordCoding.innerHTML += "&nbsp;&nbsp; Start Time " +
                            "<input type=text size=5 name=ptecd005" +
                            " value='" + oprtime + "' class=" + timeman +
                            " title='Operation Start Time'>" +
                            "<img notab src='../images/TimeLookup.gif' " +
                            "class='Icon' alt='Time Select' " +
                            "time='AddForm.ptecd005'> &nbsp;&nbsp; End Time " +
                            "<input type=text size=5 name=ptecd006" +
                            " value='" + oprendt + "' class=" + timeman +
                            " title='Operation End Time'>" +
                            "<img notab src='../images/TimeLookup.gif' " +
                            "class='Icon' alt='Time Select' " +
                            "time='AddForm.ptecd006'>";

      // VAED 2016 Stat Changes
      if (document.getElementById('admnclss') != null &&
          document.getElementById('pteocnt') != null &&
          document.getElementById('pteocnt').value == "0" &&
          document.getElementById('admistat') != null &&
          document.getElementById('admistat').value == "3") {
        if (document.AddForm.ptecd004!=undefined) {
          if (document.getElementById('admnclss').value.substr(28,1)=='C' ||
              document.getElementById('admnclss').value.substr(28,1)=='O') {
            document.AddForm.ptecd004.className="Date Mandatory";
          }
        }

        if (document.AddForm.ptecd005!=undefined) {
          if (document.getElementById('admnclss').value.substr(28,1)=='C' ||
              document.getElementById('admnclss').value.substr(28,1)=='O') {
             document.AddForm.ptecd005.className="Time Mandatory";
             document.AddForm.ptecd006.className="Time Mandatory";
          }
        }
      }

    } else {
      RecordCoding.innerHTML += "<input type=\"hidden\" name=\"ptecd005\" />" +
                                "<input type=\"hidden\" name=\"ptecd006\" />";
    }
}
function AddAccs(Code) {
  RecordCoding.innerHTML="";
  var RCoding=""
  ClinicianFld.innerHTML="";
  var accdate_mandatory = true;
  if(document.getElementById("ptcnhdps")) {
    if(document.getElementById("ptcnhdps").value=="1") {  // NZ
      if(additreq=="P" || additreq=="A") {                // Activity or Place
         accdate_mandatory = false                        // Not mandatory
      }
    }
  }

  if (document.AddForm.usngecod.value=="1") {
    if ((additreq=="2")||(additreq=="6")||(additreq=="7")||(additreq=="8")||
        (additreq=="P")||(additreq=="A")) {
      RCoding = "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;" +
                "&nbsp;Accident Date " +
                "<input type=text size=12 name=ptecd004";
      if(accdate_mandatory) {
         RCoding += " class='Date Mandatory' " ;
      } else {
         RCoding += " class='Date' " ;
      }

      RCoding+= "title='Accident Date'" +
                            " onblur=checkDate(this,'Accident-date');" +
                            "VerifyDiagDate(ptecd004);>" +
                            "<img notab src='../images/DateLookup.gif' " +
                            "class='Icon' alt='Show Calendar' " +
                            "date='AddForm.ptecd004'>" +
                            "<img src='../images/ClearIcon.gif' class='Icon'" +
                            " onClick=ClrAccs(ptecd004);><br>"
      RCoding += "<br>"
      RecordCoding.innerHTML=RCoding;
      return;
    }
  }
}
function ClrAccs(accidate) {
  accidate.value="";
  accidate.focus();
}
// 
// This function uses remote scripting to validate the Procedure Date against
// the Discharge Date. This function is executed when the procedure date is 
// changed.
//
function VerifyDate(ReturnCode) {
  if (isWhitespace(ReturnCode.value)) return;

  var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=4&valdtype=4" +
                  "&admissno=" + AddForm.admissno.value.replace(/ /g,"+") +
                  "&valdcode=" + ReturnCode.value;

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|");
    } else {
      ReturnCode.value=""; 
      ReturnCode.select(); 
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status==0) {
          ReturnValue=returnValue.return_value.split("|");
        } else {
          ReturnCode.value=""; 
          ReturnCode.select(); 
        }
      }
    );
  }
}

//
// This function uses remote scripting to validate the Diagnosis Date against
// the Discharge Date. This function is executed when the diagnosis date is
// changed.
//
function VerifyDiagDate(ReturnCode) {
  if (isWhitespace(ReturnCode.value)) return;

  var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=4&valdtype=8" +
                  "&admissno=" + AddForm.admissno.value.replace(/ /g,"+") +
                  "&valdcode=" + ReturnCode.value;

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|");
    } else {
      ReturnCode.value="";
      ReturnCode.select();
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status==0) {
          ReturnValue=returnValue.return_value.split("|");
        } else {
          ReturnCode.value="";
          ReturnCode.select();
        }
      }
    );
  }
}

// 
// This function uses remote scripting to validate the Procedure Date against
// the Discharge Date. This function is excuted on the ruturn of a Procedure
// Date after a Procedure Search 
//
function VerifyDateSrch(ReturnCode) {
  if (isWhitespace(ReturnCode.value)) return;

  var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=4&valdtype=4" +
                  "&admissno=" + AddForm.admissno.value.replace(/ /g,"+") +
                  "&valdcode=" + ReturnCode.value;

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|");
    } else { 
      document.AddForm.ptecd004.select();
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status==0) {
          ReturnValue=returnValue.return_value.split("|");
        } else { 
          document.AddForm.ptecd004.select();
        }
      }
    );
  }
}
//========================================================================
//   Report 3  template:004 
//========================================================================
function CheckOprPrefix(indicator) {
  indicator.value=indicator.value.toUpperCase()
  ind=indicator.value;
  oprpre = document.UpdateForm.oprpre.value; 
  if (ind !=""){
    if (document.UpdateForm.diffhosp.value == "1") {
      if ((ind == oprpre)||(ind == "X")||(ind == "I")||(ind == "N")) {
        indicator.focus();
      } else {
        alert("Incorrect Prefix Indicator, must be either " + oprpre + 
              ",I,N " + "or X");
        indicator.value="";
        indicator.focus(); }
    } else {
      if ((ind == oprpre)||(ind == "X")) {
        indicator.focus();
      } else {
        alert("Incorrect Prefix Indicator, must be either " + oprpre + 
              " or X");
        indicator.value="";
        indicator.focus(); }
    }
  }
//  indicator.focus(); 
}
//
// These functions set the display Operation Clinician, Date Time display
//
function DisOperationDoc() {
  if (document.UpdateForm.mrcnclin!=undefined) {
     if (document.UpdateForm.mrcnclin.value!=0) {
         DisOperationClinician.innerHTML=displayoperdoct.innerHTML;
        if (document.UpdateForm.mrcnclin.value==2) {
            document.UpdateForm.ptecd009.className="Mandatory";
        } else {
            document.UpdateForm.ptecd009.className="";
        }
     }
  }
}
function DisOperationDte() {
  if (document.UpdateForm.oprtdate.value!=1) {
    if (document.UpdateForm.oprttime.value==2) {
       DisOperationDetails.innerHTML=displayoperdateo.innerHTML;
    } else {
       DisOperationDetails.innerHTML=displayoperation.innerHTML;
    }
    CheckMandOpr(document.UpdateForm.diopc001);
    setMan();
  } else {
    DisOperationDetails.innerHTML="";
  }
}
function CheckMandOpr(ReturnCode) {
  if (isWhitespace(ReturnCode.value)) return;

  ReturnCode.value=ReturnCode.value.toUpperCase();
  ReturnCode.value=ReturnCode.value.replace(/ /g,"");

  var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=2" +
                  "&urnumber=" + UpdateForm.urnumber.value.replace(/ /g,"+") +
                  "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
                  "&valdtype=2" +
                  "&valdcode=" + ReturnCode.value.replace(/ /g,"+");

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|");
      document.UpdateForm.dttmman.value=ReturnValue[6];
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status==0) {
          ReturnValue=returnValue.return_value.split("|");
          document.UpdateForm.dttmman.value=ReturnValue[6];
        }
      }
    );
  }
}
function setMan() {
  if (document.UpdateForm.oprtdate.value=="3") {
    if (document.UpdateForm.ptecd004!=undefined) {
      if (document.UpdateForm.ptecd003.value=="  1") {
          document.UpdateForm.ptecd004.className="Date Mandatory";
      } else {
          document.UpdateForm.ptecd004.className="";
      }
    }
  } else {
    if (document.UpdateForm.oprtdate.value=="2") {
      if (document.UpdateForm.ptecd004!=undefined) {
        if (document.UpdateForm.dttmman.value!="1")  {
           document.UpdateForm.ptecd004.className="Date Mandatory";
        } else {
           document.UpdateForm.ptecd004.className="";
        }
      }
    }
  }
  if (document.UpdateForm.oprttime.value=="0") {
    if (document.UpdateForm.ptecd005!=undefined) {
      if (document.UpdateForm.dttmman.value!="1")  {
         document.UpdateForm.ptecd005.className="Time Mandatory";
         document.UpdateForm.ptecd006.className="Time Mandatory";
      } else {
         document.UpdateForm.ptecd005.className="";
         document.UpdateForm.ptecd006.className="";
      }
    }
  }


// VAED 2016 Stat Changes
  if (document.getElementById('stateflg').value != '3'){
      return;
  }
  if(document.UpdateForm.dttmman.value=='1'){
    return;
  }
  if (document.getElementById('admnclss') != null &&
      document.UpdateForm.ptecd003.value == "  1" &&
      document.getElementById('admistat') != null &&
      document.getElementById('admistat').value == "3") {
    if (document.UpdateForm.ptecd004!=undefined) {
      if (document.getElementById('admnclss').value.substr(28,1)=='C' ||
          document.getElementById('admnclss').value.substr(28,1)=='O') {
        document.UpdateForm.ptecd004.className="Date Mandatory";
      }
    }

    if (document.UpdateForm.ptecd005!=undefined) {
      if (document.getElementById('admnclss').value.substr(28,1)=='C' ||
          document.getElementById('admnclss').value.substr(28,1)=='O') {
         document.UpdateForm.ptecd005.className="Time Mandatory";
         document.UpdateForm.ptecd006.className="Time Mandatory";
      }
    }
  }
}
// 
// This function uses remote scripting to validate the Procedure Date against
// the Discharge Date. This function is executed when the procedure date is 
// changed.
//
function VerifyDateUpd(ReturnCode) {
  if (isWhitespace(ReturnCode.value)) return;

  var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=4&valdtype=4" +
                  "&admissno=" + UpdateForm.admissno.value.replace(/ /g,"+") +
                  "&valdcode=" + ReturnCode.value;

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|");
    } else {
      ReturnCode.value=""; 
      ReturnCode.select(); 
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status==0) {
          ReturnValue=returnValue.return_value.split("|");
        } else {
          ReturnCode.value=""; 
          ReturnCode.select(); 
        }
      }
    );
  }
}
function SetDestination() {
 DefaultDest=document.UpdateForm.ptecd008.value.substr(14,4);
 document.UpdateForm.mrtme003.selectedIndex=0;
 for (var i =0 ; i < document.UpdateForm.mrtme003.length; i++) {
  if (document.UpdateForm.mrtme003.options[i].value==DefaultDest) {
       document.UpdateForm.mrtme003.selectedIndex=i } };
 checkMovementReason();
}
//
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
//
 if (ErrorFound) {
   alert('Invalid '+labelString)
   theField.select()
   return false; }
 else {
   if (sec<10) { sec="0" + sec }
   if (hour<10){ hour ="0" + hour }
   if (min<10) { min ="0" + min }
   theField.value=hour + ":" + min + ":" + sec
   return true; }
}
//

function ShowDiscDRGField() {
  if (document.UpdateForm.dischdrg == undefined)
    return;

  if (!isWhitespace(document.UpdateForm.dischdrg.value)) {
    var divDRGLabel = document.getElementById('divDisDRGLabel');
    var divDRGField = document.getElementById('divDisDRGField');
    var spDRGLabel = document.getElementById('spDisDRGLabel');
    var spDRGField = document.getElementById('spDisDRGField');
 
    divDRGLabel.innerHTML = spDRGLabel.innerHTML;
    divDRGField.innerHTML = spDRGField.innerHTML;
    divDRGLabel.style.display = "";
    divDRGField.style.display = "";
  }
}

function ShowScore(DRGVer) {
  var divLbl = document.getElementById('divScoreLbl');
  var divVal = document.getElementById('divScoreVal');
  var spLbl, spVal = null;

  if (divLbl && divVal) {
    if (isWhitespace(DRGVer) || isNaN(DRGVer)) {
      alert("DRG Version must be numeric");
      return;
    }
    var iDRGVer = parseInt(DRGVer)
    if (iDRGVer >= 8) {
      spLbl = document.getElementById('spECCSLbl');
      spVal = document.getElementById('spECCSVal');
    }
    else {
      spLbl = document.getElementById('spPCCLLbl');
      spVal = document.getElementById('spPCCLVal');
    }

    if (spLbl && spVal) {
      divLbl.innerHTML = spLbl.innerHTML;
      divVal.innerHTML = spVal.innerHTML;
    }
  }
}
function checkMovementReason() {
  if(document.UpdateForm.mrtme005==undefined) {
    return;
  }
  var Hospital=document.UpdateForm.mrtme019.value.substr(0,3);
  var Destination = document.UpdateForm.mrtme003.value.substr(0,4);
  if(isWhitespace(Destination)) {
     document.UpdateForm.mrtme005.selectedIndex=0;
     document.UpdateForm.mrtme005.className="SelectMed";
     document.UpdateForm.mrtme005.disabled=true;
     return;
  }
  var MRTLocation = Hospital + Destination;
  var serverURL = "../cgi-bin/mrtweb02.pbl?reportno=4&valdtype=9" +
                  "&valdcode=" + MRTLocation

  if (IEBrowser) {
    var returnValue = RSExecute(serverURL);

    if (returnValue.status==0) {
      ReturnValue=returnValue.return_value.split("|");
      MandatoryReason=ReturnValue[0];

      if (MandatoryReason == "1") {
        document.UpdateForm.mrtme005.disabled=false;
        document.UpdateForm.mrtme005.className="SelectMed Mandatory";
      } else {
        document.UpdateForm.mrtme005.disabled=false;
        document.UpdateForm.mrtme005.className="SelectMed";
      }
    }
  }
  else {
    var returnValue = RSExecuteFetch(serverURL);

    returnValue.then(
      function (returnValue) {
        returnValue = ParseFetchData(returnValue);  // parse fetch() result

        if (returnValue.status==0) {
          ReturnValue=returnValue.return_value.split("|");
          MandatoryReason=ReturnValue[0];

          if (MandatoryReason == "1") {
            document.UpdateForm.mrtme005.disabled=false;
            document.UpdateForm.mrtme005.className="SelectMed Mandatory";
          } else {
            document.UpdateForm.mrtme005.disabled=false;
            document.UpdateForm.mrtme005.className="SelectMed";
          }
        }
      }
    );
  }
}
function TurboExport() {
  document.UpdateForm.reportno.value="7";
  document.UpdateForm.updttype.value="M";
  document.UpdateForm.nextpage.value="5";
  document.UpdateForm.redirect.value="mrtweb02.pbl" + location.search +
                                   "&flexpenc=1"
  if(document.getElementById("mrcnautg")) {
    if(document.getElementById("mrcnautg").value=="1") {
      document.UpdateForm.redirect.value=
      document.UpdateForm.redirect.value.replace(/&runautog=1/g,"")
    }
  }
  SubmitHidden(UpdateForm)
}
function TurboLoad() {
  document.UpdateForm.reportno.value="7";
  document.UpdateForm.updttype.value="N";
  document.UpdateForm.nextpage.value="5";
  document.UpdateForm.redirect.value="mrtweb02.pbl" +
                                   location.search.replace(/&flexpenc=1/g,"")
  if(document.getElementById("mrcnautg")) {
    if(document.getElementById("mrcnautg").value=="1") {
      document.UpdateForm.redirect.value=
      document.UpdateForm.redirect.value.replace(/&runautog=1/g,"")
    }
  }
  SubmitHidden(UpdateForm)
}
function TurboGrouper() {
  document.UpdateForm.reportno.value="7";
  document.UpdateForm.updttype.value="O";     // Use Unix Grouper
  document.UpdateForm.nextpage.value="5";
  document.UpdateForm.redirect.value="mrtweb02.pbl" +
                                   location.search.replace(/&flexpenc=1/g,"")
  if(document.getElementById("mrcnautg")) {
    if(document.getElementById("mrcnautg").value=="1") {
      document.UpdateForm.redirect.value=
      document.UpdateForm.redirect.value.replace(/&runautog=1/g,"")
    }
  }
  SubmitHidden(UpdateForm);
}
function CheckContractCareFlagPatType(ccflag,ptypedef) {
  if (!isWhitespace(ccflag)) {return true;}
  ptypedef=trim(ptypedef);
  if (ptypedef == "9" || ptypedef == "10" || ptypedef == "0") {
    return false;
  }
  return true;
}
