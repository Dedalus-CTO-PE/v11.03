//jsVersion  : V11.03.00
//========================================================================
// Display Day Comment on page load 
//========================================================================
function dispDayCmt(){
  if((document.getElementById('opcnscom') != undefined) &&
     (document.getElementById('opcnscom').value=="1")){
    if(document.getElementById('dispdayc').value=="1"){
       document.getElementById('dispdcmmt').style.display="";}
    else{
      if(document.getElementById('dispdayc').value=="2"){
         document.getElementById('dispdcmbt').style.display="";
         if(document.getElementById('daycmcnt').value > 1){
            document.getElementById('daycmtbutton').className="Red";}
      }
    }
  }
}

//========================================================================
// Redirect to Update Day Comments
//========================================================================
function DayCommentsUpd(currdate){
  linkurl="../cgi-bin/oprweb05.pbl?reportno=02&template=010" +
             "&opses001=" + currdate.value;
  Left=(document.body.clientWidth-510)/2;
  DFrameLink(linkurl,0,Left,630,500);
}
