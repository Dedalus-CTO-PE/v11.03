//jsVersion  : V11.03.00
//========================================================================
//  function to set the values of radio buttons on page load.
//==========================================================================
function setRadio(formName){
 var total=formName.elements.length;
 for(index1=0;index1<total;index1++)
  {
    if(formName.elements[index1].name.match(/opard/))
      break; 
 }

 for(index2=index1;index2<total;index2++)
  {
    if(formName.elements[index2].name.match(/checkl/))
      break; 
 }

  for(i=index1;i<index1+8;i++){
    if(formName.elements[i].value=="Yes"){
      formName.elements[index2].checked=true;
    } 
    else{
      formName.elements[index2+1].checked=true;
    }
      index2=index2+2;
  }
 
}

//=========================================================================
//  function to set the cgi parameters for radio buttons on page submit.
//==========================================================================

function setCGI(formName){

 var total=formName.elements.length;
 for(index1=0;index1<total;index1++)
  {
    if(formName.elements[index1].name.match(/opard/))
      break; 
 }

 for(index2=index1;index2<total;index2++)
  {
    if(formName.elements[index2].name.match(/checkl/))
      break; 
 }

  for(i=index1;i<index1+8;i++){
 
     if(formName.elements[index2].checked==true){
       formName.elements[i].value=1;
        }
     else
       formName.elements[i].value=0;
     index2=index2+2;
  }
} 
//=========================================================================
//  function to display Patient Alerts from Theatre Patient Lists
//==========================================================================
function PatientAlerts(urnumber,admissno) {
  linkurl="patweb98.pbl?reportno=1&template=003" +
          "&urnumber=" + urnumber + "&admissno=" + admissno
  location.href=linkurl
}
//=========================================================================
//  function to display the transfer source
//==========================================================================
function DisplayTrnSrc(admsource) {
  var ind=admsource.value.substring(4,5);

  var TranSrcHeading = document.getElementById('TranSrcHeading');
  var TranSrc        = document.getElementById('TranSrc');

  if (ind!="1") {
    TranSrc.innerHTML = document.getElementById('transferblank').innerHTML;
    TranSrcHeading.innerHTML = "";
  } else {
    TranSrcHeading.innerHTML = document.getElementById('transferhd').innerHTML;
    TranSrc.innerHTML        = document.getElementById('transfersrc').innerHTML;
  }
}

function AddComment() {
  linkurl = "../cgi-bin/cliweb06.pbl?reportno=13&template=007" +
            "&admissno=" + PatientLinks.admissno.value.replace(/ /g,"+") +
            "&urnumber=" + PatientLinks.urnumber.value.replace(/ /g,"+");
  Left=(document.body.clientWidth-750)/2;
  DFrameLink(linkurl,100,Left,750,300);
}

//=========================================================================
//  function to filter mental health scores
//==========================================================================
function FilterMentalHealth(MHFlag,filter,value) {


  //Checks to see if the MH flag is undefined and escape if it is 
  if (MHFlag =="") 
    return;

  if (MHFlag == 1) {  // Is a MH visit
    // strip out Non Mental Health code
    filterCatCodeList(filter,value,"G","1");  
  }
  else {  // Not a MH visit
    // strip out Mental Health code
    filterCatCodeList(filter,value,"M","1");  
  }
}


