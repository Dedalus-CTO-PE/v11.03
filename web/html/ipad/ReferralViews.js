//jsVersion  : V11.03.00
//
function SelectView(el) {
  if (isWhitespace(el.options[el.selectedIndex].value)) return;
  SelectOptions=el.options[el.selectedIndex].value.split("|");
  SelectViewMenu.action=SelectOptions[0];
  SelectViewMenu.reportno.value=SelectOptions[1];
  SelectViewMenu.template.value=SelectOptions[2];
  SelectViewMenu.submit();
}
function ReferralViews() {
  el=document.getElementById("ReferralView");
  el.options[el.options.length]=
          new Option('Select View',''); 
  el.options[el.options.length]=
          new Option('Summary View','allweb02.pbl|02|802'); 
  el.options[el.options.length]=
          new Option('Contacts View','allweb03.pbl|01|801'); 
  SetActions();
}
function SetActions() {
  var actionBtn = parent.document.getElementById('actionButton');
  if(actionBtn) {
    actionBtn.onclick="";
    actionBtn.className="";
    actionBtn.innerHTML= "<select class='patientAction' "+
                         " onchange=\"top.frames['DocFrame'].ProcessAction(this);\""+
                         " onclick='this.selectedIndex=0;'"+
                         " id=iPadAction title='Actions'>"+
                         "<option value=''>Select Action</option>"+
                         "<option value='1'>Update Referral</option>"+
                         "<option value='2'>Add Contact</option>"+
                         "<option value='3'>Add Assessment</option>"+
                         "</select>"
  }
}
function ProcessAction(el) {
  var ActionValue=el.options[el.selectedIndex].value;
  var actionSel = parent.document.getElementById('iPadAction');
  var head=parent.document.getElementById("docScreenTitle");
  actionSel.selectedIndex=0;
  switch (ActionValue) {
    case '1':
      head.innerHTML="Update Referral";
      SelectViewMenu.action="allweb02.pbl";
      SelectViewMenu.reportno.value="02";
      SelectViewMenu.template.value="803";
      SelectViewMenu.submit();
      break;
    case '2':
      head.innerHTML="Add Contact";
      SelectViewMenu.action="allweb03.pbl";
      SelectViewMenu.reportno.value="01";
      SelectViewMenu.template.value="802";
      SelectViewMenu.submit();
      break;
    case '3':
      alertify.alert("Work in Progress");
      break;
   }
}

