//jsVersion  : V11.03.02
//========================================================================
// Supervisor disable ADOM fields if cat hp ind7='X' to exclude ADOM fields
// Otherwise, reset ADOM fields
//========================================================================
function DisableADOMSupv() {

 Cathp=document.getElementById("mhhon008"); //Reason for Collection Cat hp
 if (Cathp.value.substring(9,10)!="X"){     //ind7=X - Exclude ADOM rec?
    ResetADOMFieldsSupv();
    return false;
 }

//Exclude ADOM - Disable the following fields

//Focus of Care (Cat hf)
 document.getElementById("mhhon022").disabled=true;
 document.getElementById("mhhon022").className="Readonly readonly";
 document.getElementById("mhhon022").value="";

//Collection Status (Cat ht)
 document.getElementById("mhhon029").disabled=true;
 document.getElementById("mhhon029").className="Readonly readonly";
 document.getElementById("mhhon029").value="";

//Mode of Administration (Cat hm)
 document.getElementById("mhhon030").disabled=true;
 document.getElementById("mhhon030").className="Readonly readonly";
 document.getElementById("mhhon030").value="";

//Referral mandated/Voluntary
 document.getElementById("m_mhhon087").disabled=true;
 document.getElementById("m_mhhon087").className="Readonly readonly";
 document.getElementById("m_mhhon087").checked=false;

 document.getElementById("v_mhhon087").disabled=true;
 document.getElementById("v_mhhon087").className="Readonly readonly";
 document.getElementById("v_mhhon087").checked=false;

//Co-existing Problems
 document.getElementById("y_mhhon089").disabled=true;
 document.getElementById("y_mhhon089").className="Readonly readonly";
 document.getElementById("y_mhhon089").checked=false;

 document.getElementById("n_mhhon089").disabled=true;
 document.getElementById("n_mhhon089").className="Readonly readonly";
 document.getElementById("n_mhhon089").checked=false;

//Number of Days Covered (7-28)
 document.getElementById("mhhon088").disabled=true;
 document.getElementById("mhhon088").className="Readonly readonly";
 document.getElementById("mhhon088").value="";

 return true;
}

//========================================================================
// Supervisor reset ADOM fields if cat hp ind7 !='X' - Do not exclude 
// ADOM fields
//========================================================================
function ResetADOMFieldsSupv(){

//Include ADOM - Enable the following fields for Supervisor

//Focus of Care (Cat hf)
 document.getElementById("mhhon022").disabled=false;
 document.getElementById("mhhon022").className="";

//Collection Status (Cat ht)
 document.getElementById("mhhon029").disabled=false;
 document.getElementById("mhhon029").className="";

//Mode of Administration (Cat hm)
 document.getElementById("mhhon030").disabled=false;
 document.getElementById("mhhon030").className="";

//Referral mandated/Voluntary
 document.getElementById("m_mhhon087").disabled=false;
 document.getElementById("m_mhhon087").className="Mandatory";

 document.getElementById("v_mhhon087").disabled=false;
 document.getElementById("v_mhhon087").className="Mandatory";

//Co-existing Problems
 document.getElementById("y_mhhon089").disabled=false;
 document.getElementById("y_mhhon089").className="Mandatory";

 document.getElementById("n_mhhon089").disabled=false;
 document.getElementById("n_mhhon089").className="Mandatory";

//Number of Days Covered (7-28)
 document.getElementById("mhhon088").disabled=false;
 document.getElementById("mhhon088").className="Mandatory";

}

//========================================================================
// Disable ADOM fields if cat hp ind7='X' to exclude ADOM fields
// Otherwise, reset ADOM fields
//========================================================================
function DisableADOM() {

 cathp=document.getElementById("mhhon008"); //Reason for Collection Cat hp
 if (cathp.value.substring(9,10)!="X"){     //ind7=X - Exclude ADOM rec?
    ResetADOMFields();
    return false;
 }

//Exclude ADOM - Disable the following fields

//Focus of Care (Cat hf)
 document.getElementById("mhhon022").disabled=true;
 document.getElementById("mhhon022").className="Readonly readonly";
 document.getElementById("mhhon022").value="";

//Collection Status (Cat ht)
 document.getElementById("mhhon029").disabled=true;
 document.getElementById("mhhon029").className="Readonly readonly";
 document.getElementById("mhhon029").value="";

//Mode of Administration (Cat hm)
 document.getElementById("mhhon030").disabled=true;
 document.getElementById("mhhon030").className="Readonly readonly";
 document.getElementById("mhhon030").value="";

//Referral mandated/Voluntary
 if(document.getElementById("mhhon087") != undefined){
   document.getElementById("mhhon087").className="Readonly readonly"}
 document.getElementById("m_mhhon087").disabled=true;
 document.getElementById("m_mhhon087").className="Readonly readonly";
 document.getElementById("m_mhhon087").checked=false;

 document.getElementById("v_mhhon087").disabled=true;
 document.getElementById("v_mhhon087").className="Readonly readonly";
 document.getElementById("v_mhhon087").checked=false;

//Co-existing Problems
 if(document.getElementById("mhhon089") != undefined){
   document.getElementById("mhhon089").className="Readonly readonly"}
 document.getElementById("y_mhhon089").disabled=true;
 document.getElementById("y_mhhon089").className="Readonly readonly";
 document.getElementById("y_mhhon089").checked=false;

 document.getElementById("n_mhhon089").disabled=true;
 document.getElementById("n_mhhon089").className="Readonly readonly";
 document.getElementById("n_mhhon089").checked=false;

//Number of Days Covered (7-28)
 document.getElementById("mhhon088").disabled=true;
 document.getElementById("mhhon088").className="Readonly readonly";
 document.getElementById("mhhon088").value="";

//All scoring fields (1-20 including 7a-7f and 9a-9c)

//--- Section 1 ---//
//Q1
 document.getElementById("mhhon090").disabled=true;
 document.getElementById("mhhon090").className="Readonly readonly";
 document.getElementById("mhhon090").value="";

//Q2
 document.getElementById("mhhon091").disabled=true;
 document.getElementById("mhhon091").className="Readonly readonly";
 document.getElementById("mhhon091").value="";

//Q3
 document.getElementById("mhhon092").disabled=true;
 document.getElementById("mhhon092").className="Readonly readonly";
 document.getElementById("mhhon092").value="";

//Q4
 document.getElementById("mhhon093").disabled=true;
 document.getElementById("mhhon093").className="Readonly readonly";
 document.getElementById("mhhon093").value="";

//Q5
 document.getElementById("mhhon094").disabled=true;
 document.getElementById("mhhon094").className="Readonly readonly";
 document.getElementById("mhhon094").value="";

//Q6
 document.getElementById("mhhon095").disabled=true;
 document.getElementById("mhhon095").className="Readonly readonly";
 document.getElementById("mhhon095").value="";

//Q7a
 document.getElementById("mhhon097").disabled=true;
 document.getElementById("mhhon097").className="Readonly readonly";
 document.getElementById("mhhon097").value="";

//Q7b
 document.getElementById("mhhon096").disabled=true;
 document.getElementById("mhhon096").value="";

//Q7c
 document.getElementById("mhhon099").disabled=true;
 document.getElementById("mhhon099").className="Readonly readonly";
 document.getElementById("mhhon099").value="";

//Q7d
 document.getElementById("mhhon098").disabled=true;
 document.getElementById("mhhon098").value="";

//Q7e
 document.getElementById("mhhon101").disabled=true;
 document.getElementById("mhhon101").className="Readonly readonly";
 document.getElementById("mhhon101").value="";

//Q7f
 document.getElementById("mhhon100").disabled=true;
 document.getElementById("mhhon100").value="";

//Q8
 document.getElementById("mhhon102").disabled=true;
 document.getElementById("mhhon102").className="Readonly readonly";
 document.getElementById("mhhon102").value="";

//Q9a
 document.getElementById("mhhon103").disabled=true;
 document.getElementById("mhhon103").className="Readonly readonly";
 document.getElementById("mhhon103").value="";

//Q9b
 document.getElementById("mhhon104").disabled=true;
 document.getElementById("mhhon104").className="Readonly readonly";
 document.getElementById("mhhon104").value="";

//Q9c
 document.getElementById("mhhon105").disabled=true;
 document.getElementById("mhhon105").className="Readonly readonly";
 document.getElementById("mhhon105").value="";

//Q10
 document.getElementById("mhhon106").disabled=true;
 document.getElementById("mhhon106").className="Readonly readonly";
 document.getElementById("mhhon106").value="";

//Q11
 document.getElementById("mhhon107").disabled=true;
 document.getElementById("mhhon107").className="Readonly readonly";
 document.getElementById("mhhon107").value="";

//--- Section 2 ---//
//Q12
 document.getElementById("mhhon108").disabled=true;
 document.getElementById("mhhon108").className="Readonly readonly";
 document.getElementById("mhhon108").value="";

//Q13
 document.getElementById("mhhon109").disabled=true;
 document.getElementById("mhhon109").className="Readonly readonly";
 document.getElementById("mhhon109").value="";

//Q14
 document.getElementById("mhhon110").disabled=true;
 document.getElementById("mhhon110").className="Readonly readonly";
 document.getElementById("mhhon110").value="";

//Q15
 document.getElementById("mhhon111").disabled=true;
 document.getElementById("mhhon111").className="Readonly readonly";
 document.getElementById("mhhon111").value="";

//Q16
 document.getElementById("mhhon112").disabled=true;
 document.getElementById("mhhon112").className="Readonly readonly";
 document.getElementById("mhhon112").value="";

//Q17
 document.getElementById("mhhon113").disabled=true;
 document.getElementById("mhhon113").className="Readonly readonly";
 document.getElementById("mhhon113").value="";

//Q18
 document.getElementById("mhhon114").disabled=true;
 document.getElementById("mhhon114").className="Readonly readonly";
 document.getElementById("mhhon114").value="";

//--- Section 3 ---//
//Q19
 document.getElementById("mhhon115").disabled=true;
 document.getElementById("mhhon115").className="Readonly readonly";
 document.getElementById("mhhon115").value="";

//Q20
 document.getElementById("mhhon116").disabled=true;
 document.getElementById("mhhon116").className="Readonly readonly";
 document.getElementById("mhhon116").value="";

 return true;

}

//========================================================================
// Reset ADOM fields if cat hp ind7 !='X' - Do not exclude ADOM fields
//========================================================================
function ResetADOMFields(){

//Include ADOM - Enable the following fields

//Focus of Care (Cat hf)
 document.getElementById("mhhon022").disabled=false;
 document.getElementById("mhhon022").className="Mandatory";

//Collection Status (Cat ht)
 document.getElementById("mhhon029").disabled=false;
 document.getElementById("mhhon029").className="Mandatory";

//Mode of Administration (Cat hm)
 document.getElementById("mhhon030").disabled=false;
 document.getElementById("mhhon030").className="Mandatory";

//Referral mandated/Voluntary
 if(document.getElementById("mhhon087") != undefined){
   document.getElementById("mhhon087").className="Mandatory"}
 document.getElementById("m_mhhon087").disabled=false;
 document.getElementById("m_mhhon087").className="Mandatory";

 document.getElementById("v_mhhon087").disabled=false;
 document.getElementById("v_mhhon087").className="Mandatory";

//Co-existing Problems
 if(document.getElementById("mhhon089") != undefined){
   document.getElementById("mhhon089").className="Mandatory"}
 document.getElementById("y_mhhon089").disabled=false;
 document.getElementById("y_mhhon089").className="Mandatory";

 document.getElementById("n_mhhon089").disabled=false;
 document.getElementById("n_mhhon089").className="Mandatory";

//Number of Days Covered (7-28)
 document.getElementById("mhhon088").disabled=false;
 document.getElementById("mhhon088").className="Mandatory";

//All scoring fields (1-20 including 7a-7f and 9a-9c)
//--- Section 1 ---//
//Q1
 document.getElementById("mhhon090").disabled=false;
 document.getElementById("mhhon090").className="Mandatory";

//Q2
 document.getElementById("mhhon091").disabled=false;
 document.getElementById("mhhon091").className="Mandatory";

//Q3
 document.getElementById("mhhon092").disabled=false;
 document.getElementById("mhhon092").className="Mandatory";

//Q4
 document.getElementById("mhhon093").disabled=false;
 document.getElementById("mhhon093").className="Mandatory";

//Q5
 document.getElementById("mhhon094").disabled=false;
 document.getElementById("mhhon094").className="Mandatory";

//Q6
 document.getElementById("mhhon095").disabled=false;
 document.getElementById("mhhon095").className="Mandatory";

//Q7a
 document.getElementById("mhhon097").disabled=false;
 document.getElementById("mhhon097").className="";

//Q7b
  document.getElementById("mhhon096").disabled=false;

//Q7c
 document.getElementById("mhhon099").disabled=false;
 document.getElementById("mhhon099").className="";

//Q7d
  document.getElementById("mhhon098").disabled=false;

//Q7e
 document.getElementById("mhhon101").disabled=false;
 document.getElementById("mhhon101").className="";

//Q7f
 document.getElementById("mhhon100").disabled=false;

//Q8
 document.getElementById("mhhon102").disabled=false;
 document.getElementById("mhhon102").className="Mandatory";

//Q9a
 document.getElementById("mhhon103").disabled=false;
 document.getElementById("mhhon103").className="Mandatory";

//Q9b
 document.getElementById("mhhon104").disabled=false;
 document.getElementById("mhhon104").className="Mandatory";

//Q9c
 document.getElementById("mhhon105").disabled=false;
 document.getElementById("mhhon105").className="Mandatory";

//Q10
 document.getElementById("mhhon106").disabled=false;
 document.getElementById("mhhon106").className="Mandatory";

//Q11
 document.getElementById("mhhon107").disabled=false;
 document.getElementById("mhhon107").className="Mandatory";

//--- Section 2 ---//
//Q12
 document.getElementById("mhhon108").disabled=false;
 document.getElementById("mhhon108").className="Mandatory";

//Q13
 document.getElementById("mhhon109").disabled=false;
 document.getElementById("mhhon109").className="Mandatory";

//Q14
 document.getElementById("mhhon110").disabled=false;
 document.getElementById("mhhon110").className="Mandatory";

//Q15
 document.getElementById("mhhon111").disabled=false;
 document.getElementById("mhhon111").className="Mandatory";

//Q16
 document.getElementById("mhhon112").disabled=false;
 document.getElementById("mhhon112").className="Mandatory";


//Q17
 document.getElementById("mhhon113").disabled=false;
 document.getElementById("mhhon113").className="Mandatory";

//Q18
 document.getElementById("mhhon114").disabled=false;
 document.getElementById("mhhon114").className="Mandatory";

//--- Section 3 ---//
//Q19
 document.getElementById("mhhon115").disabled=false;
 document.getElementById("mhhon115").className="Mandatory";

//Q20
 document.getElementById("mhhon116").disabled=false;
 document.getElementById("mhhon116").className="Mandatory";
}

//==============================================================
function CheckMHServiceSettingForUpdate(ind2,pvtype) {
  if (isWhitespace(ind2)) {return true;}

  if (ind2 == "I") {
    if (pvtype != " 3") {
      alert('Error: Service Setting Event Type does not match linked' +
            ' visit type.\n' +
            'Please change the Service Setting code.');
        return false;
    }
  }
  if (ind2 == "R") {
    if (pvtype != "10") {
      alert('Error: Service Setting Event Type does not match linked' +
            ' visit type.\n' +
            'Please change the Service Setting code.');
        return false;
    }
  }

  return true;
}
function CheckMHServiceSettingForAdd(ind2,pvtype) {
  if (isWhitespace(ind2)) {return true;}

  if (ind2 == "I") {
    if (pvtype != " 3") {
        return false;
    }
  }
  if (ind2 == "R") {
    if (pvtype != "10") {
        return false;
    }
  }

  return true;
}
function ReturnFromVisitSearch(VisitNo) {
  f = document.AddForm;
  var serverURL = "../cgi-bin/comweb81.pbl?reportno=53" +
                  "&valdcode=" + VisitNo.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status == 0) {
    ReturnValue = returnValue.return_value.split("|")
    var ptvitype = ReturnValue[11];
    var i = f.mhhon007.selectedIndex;
    var ind2 = f.mhhon007.options[i].value.substring(4,5);
    if (!CheckMHServiceSettingForAdd(ind2,ptvitype)) {
      alert('Error: Service Setting and Event Type does not match.\n' +
            'Please change the Service Setting code.');
      return;
    }
    else {
      document.AddForm.admissno.value = VisitNo;
      document.AddForm.mhhon001.value = VisitNo;
      alert('Note: The Outcome Measure was added to a different Visit.' +
            ' Please change to that Visit to view the Outcome Measure')
      document.AddForm.submit();
    }
  }
}
//------------------------------------------------------------
// Visit Search Frame for default visit type
//------------------------------------------------------------
function VisitSearchFrameDeftSearchView(Urnumber,ReturnCode,VistType)
{
  if (isWhitespace(Urnumber.value))
  {
     alert("Patient Not Identified");
     return;
  }
  var PopUpFrameDoc = DFrameStart();
  window.ReturnCode=ReturnCode ;
  PopUpFrameDoc.location.href = "patweb98.pbl?reportno=1&template=251"+
                                "&srchview=1" +
                                "&filtvtyp=" + VistType +
                                "&urnumber=" + Urnumber.value.replace(/ /g,"+")
  SearchFrameShow();
}



