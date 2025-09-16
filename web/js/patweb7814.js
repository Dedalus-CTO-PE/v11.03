//jsVersion  : V11.03.00
//------------------------------------------------------------
// Function : patweb7814.js
//------------------------------------------------------------
function chkQ1(theForm){
  p=theForm;

  if(p.brthq001.value=="1"){
     p.brthq002.className="Mandatory";
     p.brthq002.disabled=false;

     p.brthq003.className="Mandatory";
     p.brthq003.disabled=false;

     p.brthq004.className="Mandatory";
     p.brthq004.disabled=false;

     p.brthq005.className="Mandatory";
     p.brthq005.disabled=false;

     p.brthq006.className="Mandatory";
     p.brthq006.disabled=false;
  }
  else{
     p.brthq002.className="Readonly";
     p.brthq002.disabled=true;
     p.brthq002.value="";

     document.getElementById('q02b').style.display="none";
     p.brthq02b.className="Readonly";
     p.brthq02b.disabled=true;
     p.brthq02b.value="";

     p.brthq003.className="Readonly";
     p.brthq003.disabled=true;
     p.brthq003.value="";

     p.brthq004.className="Readonly";
     p.brthq004.disabled=true;
     p.brthq004.value="";

     p.brthq005.className="Readonly";
     p.brthq005.disabled=true;
     p.brthq005.value="";

     p.brthq006.className="Readonly";
     p.brthq006.disabled=true;
     p.brthq006.value="";
  }
}

function chkQ2(theForm){
  p=theForm;

  if(p.brthq001.value!="1"){
     return;
  }

  if(p.brthq002.value=="0" ){
     document.getElementById('q02b').style.display=""; 
     p.brthq02b.className="Mandatory";
     p.brthq02b.disabled=false;

     p.brthq003.className="Readonly";
     p.brthq003.disabled=true;
     p.brthq003.value="";
  }
  else{
     document.getElementById('q02b').style.display="none";
     p.brthq02b.className="Readonly";
     p.brthq02b.disabled=true;
     p.brthq02b.value="";

     p.brthq003.className="Mandatory";
     p.brthq003.disabled=false;
  }
}

function chkQ4(theForm){
  p=theForm;

  if(p.brthq001.value!="1"){
     return;
  }

  if(p.brthq004.value=="1"){
     p.brthq005.className="Mandatory";
     p.brthq005.disabled=false;
  }
  else{
     p.brthq005.className="Readonly";
     p.brthq005.disabled=true;
     p.brthq005.value="";

     p.brthq006.className="Readonly";
     p.brthq006.disabled=true;
     p.brthq006.value="";
  }
}

function chkQ5(theForm){
  p=theForm;

  if(p.brthq001.value!="1" | p.brthq004.value=="0"){
     return;
  }

  if(p.brthq005.value=="1"){
     p.brthq006.className="Mandatory";
     p.brthq006.disabled=false;
  }
  else{
     p.brthq006.className="Readonly";
     p.brthq006.disabled=true;
     p.brthq006.value="";
  }
}

function chkQ7(theForm){
  p=theForm;

  if(p.brthq007.value=="1"){
     p.brthq008.className="Mandatory";
     p.brthq008.disabled=false;
  }
  else{
     p.brthq008.className="Readonly";
     p.brthq008.disabled=true;
     p.brthq008.value="";

     document.getElementById('q08b').style.display="none";
     p.brthq08b.className="Readonly";
     p.brthq08b.disabled=true;
     p.brthq08b.value="";

     p.brthq009.className="Readonly";
     p.brthq009.disabled=true;
     p.brthq009.value="";

     p.brthq010.className="Readonly";
     p.brthq010.disabled=true;
     p.brthq010.value="";
  }
}

function chkQ8(theForm){
  p=theForm;

  if(p.brthq007.value!="1"){
     return;
  }  

  p.brthq009.className="Mandatory";
  p.brthq009.disabled=false;

  if(p.brthq008.value=="0"){
     document.getElementById('q08b').style.display="";
     p.brthq08b.className="Mandatory";
     p.brthq08b.disabled=false;
  }
  else{
     document.getElementById('q08b').style.display="none";
     p.brthq08b.className="Readonly";
     p.brthq08b.disabled=true;
     p.brthq08b.value="";
  }
}

function chkQ9(theForm){
  p=theForm;

  if(p.brthq007.value!="1"){
     return;
  }

  if(p.brthq009.value=="1"){
     p.brthq010.className="Mandatory";
     p.brthq010.disabled=false;
  }
  else{
     p.brthq010.className="Readonly";
     p.brthq010.disabled=true;
     p.brthq010.value="";
  }
}

function submitFormActn(theForm,formActn)
{
  p=theForm;

  if (formActn=="A"){
      DFrameClear();
  }

  if (!validateMandatory(p)){
     return;
  }

  p.brthq002.disabled=false;
  p.brthq02b.disabled=false;
  p.brthq003.disabled=false;
  p.brthq004.disabled=false;
  p.brthq005.disabled=false;
  p.brthq006.disabled=false;
  p.brthq007.disabled=false;
  p.brthq008.disabled=false;
  p.brthq08b.disabled=false;
  p.brthq009.disabled=false;
  p.brthq010.disabled=false;

  p.target="PopUpFrame";

  if (formActn=="U"){
      p.updttype.value="U";
  }

  p.submit();
}

function chkInitAdd(theForm)
{

  chkQ1(theForm);
  chkQ7(theForm);
}

function chkInitUpd(theForm)
{
  chkQ1(theForm);
  chkQ2(theForm);
  chkQ4(theForm);
  chkQ5(theForm);
  chkQ7(theForm);
  chkQ8(theForm);
  chkQ9(theForm);

}

