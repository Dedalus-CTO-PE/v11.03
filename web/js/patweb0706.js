//jsVersion  : V11.03.00
//========================================================================
function ContactMandatory(theForm) {
  var type=theForm.pmcex002.value.substr(3,1);

  var PostAddrRelInd=theForm.pmcex002.value.substr(7,1); //Ind5
  var relation=theForm.pmcex015;

  if (type=="2" && PostAddrRelInd=="R"){
     if (theForm.cat_tc != "undefined" && relation.selectedIndex==0){

       validateCatCode(theForm.cat_tc,theForm.pmcex002,theForm.dummy,
                       theForm.dummy,theForm.dummy,
                       theForm.dummy,theForm.d_relation);

      //Select default relationship if available
       var PostAddrRelDef=theForm.d_relation.value.substr(0,10);

       for(var i =0 ; i < relation.length; i++) {
         if(relation.options[i].value.substr(0,10)==PostAddrRelDef){
            relation.selectedIndex=i; } }
     } 
  }   
  
// 
  if(type=="1" || type=="C" || type=="3" || type=="9" || 
     type=="8" || type=="6") {
     theForm.pmcex004.className="Mandatory";          // Title
     theForm.pmcex004.disabled=false;                
     theForm.pmcex005.className="Mandatory";          // Surname
     theForm.pmcex005.disabled=false;                
     theForm.pmcex006.className="Mandatory";          // Given
     theForm.pmcex006.disabled=false;                
     theForm.pmcex019.className="";                   // Given 2
     theForm.pmcex019.disabled=false;                
     theForm.pmcex015.className="Mandatory";          // Relationship
     theForm.pmcex015.disabled=false;                
     theForm.pmcex007.className="";                   // Address Line 1
     theForm.pmcex009.className="";                   // Address Line 3
     theForm.pmcex011.className="";                   // Post Code
  } else if(type=="7" || type=="2" || type=="A") {
     theForm.pmcex004.value="";                       // Title
     theForm.pmcex004.disabled=true;                
     theForm.pmcex004.className="Readonly";         
     theForm.pmcex005.value="";                       // Surname
     theForm.pmcex005.disabled=true;                
     theForm.pmcex005.className="Readonly";         
     theForm.pmcex006.value="";                       // Given
     theForm.pmcex006.disabled=true;                
     theForm.pmcex006.className="Readonly";         
     theForm.pmcex019.value="";                       // Given 2
     theForm.pmcex019.disabled=true;                
     theForm.pmcex019.className="Readonly";         

                                                      
     if (type=="2" && PostAddrRelInd=="R"){
       theForm.pmcex015.disabled=false;               // Relationship  
       theForm.pmcex015.className="Mandatory";         
     }
     else{
       theForm.pmcex015.value="";                     // Relationship
       theForm.pmcex015.disabled=true;                
       theForm.pmcex015.className="Readonly";         
     }

     theForm.pmcex007.className="Mandatory";          // Address Line 1
     theForm.pmcex009.className="Mandatory";          // Address Line 3
     theForm.pmcex011.className="Mandatory";          // Post Code
  } else {
     theForm.pmcex004.className="";                   // Title
     theForm.pmcex004.disabled=false;
     theForm.pmcex005.className="";                   // Surname
     theForm.pmcex005.disabled=false;
     theForm.pmcex006.className="";                   // Given
     theForm.pmcex006.disabled=false;
     theForm.pmcex019.className="";                   // Given 2
     theForm.pmcex019.disabled=false;
     theForm.pmcex015.className="";                   // Relationship
     theForm.pmcex015.disabled=false;
     theForm.pmcex007.className="";                   // Address Line 1
     theForm.pmcex009.className="";                   // Address Line 3
     theForm.pmcex011.className="";                   // Post Code
  }
}
//
function ValidateContactTypeAdd(ur,conttype,inactive) {
  ReturnFunction="" ;
  for (var i=2; i < ValidateContactTypeAdd.arguments.length; i++) {
   if (typeof(ValidateContactTypeAdd.arguments[i]) == 'function') {
     ReturnFunction=ValidateContactTypeAdd.arguments[i] } }

  var serverURL = "../cgi-bin/patweb07.pbl?reportno=6&updttype=R" +
                  "&pmcex001=" + ur.value.replace(/ /g,"+") +
                  "&pmcex002=" + conttype.value.replace(/ /g,"+") +
                  "&pmcex018=" + inactive.value.replace(/ /g,"+") 
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction()
    }
  }
}
function InactiveDate(theForm) {
  if(theForm.d_pmcex018.checked==true) {
     theForm.pmcex021.readOnly=false;
     theForm.pmcex021.className="Mandatory PastDate";
  } else {
     theForm.pmcex021.value="";
     theForm.pmcex021.readOnly=true;
     theForm.pmcex021.className="ReadOnly PastDate";
  }
}
function ValidateContactTypeUpd(ur,conttype,contcnt,inactive) {
  ReturnFunction="" ;
  for (var i=3; i < ValidateContactTypeUpd.arguments.length; i++) {
   if (typeof(ValidateContactTypeUpd.arguments[i]) == 'function') {
     ReturnFunction=ValidateContactTypeUpd.arguments[i] } }

  var serverURL = "../cgi-bin/patweb07.pbl?reportno=6&updttype=R" +
                  "&pmcex001=" + ur.value.replace(/ /g,"+") +
                  "&pmcex002=" + conttype.value.replace(/ /g,"+") +
                  "&pmcex003=" + contcnt.value.replace(/ /g,"+") +
                  "&pmcex018=" + inactive.value.replace(/ /g,"+")
  var returnValue = RSExecute(serverURL);
  if (returnValue.status==0) {
    if (typeof(ReturnFunction) == 'function') {
       ReturnFunction()
    }
  }
}
  function CheckValPostCode() {
    if ((isWhitespace(suburb.value)) &&
        (isWhitespace(postcode.value)))
       { return true; }
    if (trim(postcode.value)=="8888") {
       if (confirm("Click OK to confirm an Overseas Address")) {
          return true; }
       }
    var fulladdress = trim(postcode.value) + "," +
                      trim(suburb.value) + "," +
                      trim(state.value);
    tmp1 = fulladdress.replace(/[-[\]{}()*+?.,\\^$|#\s]/g, " ");
    for (var i =0; i<PC.length ; i++) {
      tmp2 = PC[i].replace(/[-[\]{}()*+?.,\\^$|#\s]/g, " ");
      if  (tmp2.match(tmp1)) {
          SelectPC[SelectPC.length] = PC[i]
          return true;
      }
    }
    alert("Invalid Suburb/Post Code Combination");
    return false;
  }
function ShowSendSMS() {
  if(document.getElementById("ptcnsmsn").value == "1") {
    document.getElementById('SendSMSH').innerHTML=
    document.getElementById('ShowSendSMSH').innerHTML;
    document.getElementById('SendSMS').innerHTML=
    document.getElementById('ShowSendSMS').innerHTML;
    if(document.getElementById('pmcex022').value=="1") {
      document.getElementById('d_pmcex022').checked=true;
    }
  }
}
function SetSendSMS() {
  if(document.getElementById("ptcnsmsn").value == "1") {
    if(document.getElementById('d_pmcex022').checked==true) {
      document.getElementById('pmcex022').value="1";
    } else {
      document.getElementById('pmcex022').value="0";
    }
  }
}
function setEDWARD() {
  var UsingEDWARD=document.getElementById("ptcnnssi").value;
  if(isWhitespace(UsingEDWARD) || UsingEDWARD == "0000000000") { 
    return;
  }

  document.getElementById('pmcex004').focus();
  document.getElementById('pmcex015').className="Readonly";
  document.getElementById('pmcex015').disabled=true;
  if(document.getElementById("pmcex002").value.substr(3,1)=="2") { // Postal
    ReadOnlyEDWARD(UpdateForm);
    if(document.getElementById('d_pmcex018').checked==false) {
      document.getElementById('d_pmcex018').disabled=false;
      document.getElementById('pat07upd').disabled=false;
    }
    document.getElementById('pat07can').disabled=false;
  }
}
function ReadOnlyEDWARD(theForm) {
  for (var i = 0; i < theForm.elements.length; i++) {
    var el=theForm.elements[i];

    switch(el.type) {
      case "text":
        el.readOnly = true;
        el.className="ReadOnly"; break;
      case "select-one":
        el.disabled = true; break;
      case "textarea":
        el.disabled = true; break;
      case "button":
        el.disabled = true; break;
      case "checkbox":
        el.disabled = true; break;
      case "hidden":
        break;
     }
  }
}

function setMandatoryMobPho() {
   //Gets contents of Mobile Phone & Send SMS field
   var SMSSelect = document.getElementById('d_pmcex022')
   //in case SMS has been turned off
   if (SMSSelect !== null) {
     var mobnum = document.getElementById('pmcex014')
     //checks to see of Send SMS field is selected
     if (SMSSelect.checked==true){
       //Turns Mobile Phone field to mandatory if is
       mobnum.className='Mandatory MobilePhone'
     } else {
       //Otherwise turns mandatory off
       mobnum.className='MobilePhone'
     }
   }
}
