//jsVersion  : V11.03.00
//========================================================================
// Program   : ndis.js
//
// Written   : 18.03.2020  Tracey Nguyen
//
// Function  : Functions for NDIS
//
// Version   :
//
// V11.00.01  18/03/2020  Tracey Nguyen   TSK 0887397
//            Created new
//========================================================================
function ShowNdisPart(){

 if ((document.getElementById('ptcnhdps') == undefined) ||
     (document.getElementById('ndispart') == undefined) ||
     (document.getElementById('ptvis121') == undefined)){
     return false;
 }

 //Show NDIS Participant Flag for state of Victoria
 if (document.getElementById('ptcnhdps').value == '3'){
     document.getElementById('ndispart').style.display="";
     document.getElementById('ptvis121').className="";
     document.getElementById('ptvis121').disabled=false;
     return true;
 }
 
 //Hide NDIS Participant Flag for all other states
 document.getElementById('ndispart').style.display="none";
 document.getElementById('ptvis121').className="Readonly";
 document.getElementById('ptvis121').disabled=true;
 document.getElementById('ptvis121').value="";
 return false;
 
}

function ShowNdisPartVal(){

 var DisplayNdis = ShowNdisPart();

 if (DisplayNdis == false){
    return false;}

 if (document.getElementById('d_ptvis121') == undefined){
    return false;}

 var NdisValue = document.getElementById('d_ptvis121').value;
 var NdisList = document.getElementById('ptvis121');

 for (var i=0; i< NdisList.length; i++){
   if (NdisList.options[i].value.substr(0,3) == NdisValue) {
       NdisList.selectedIndex=i;
       return true;
   }
 }

}

function ShowNdisPartViewTd(){

 if ((document.getElementById('ptcnhdps') == undefined) ||
     (document.getElementById('ndispartL') == undefined)||
     (document.getElementById('ndispartF') == undefined)) {
     return false;
 }

 //Show NDIS Participant Flag for state of Victoria
 if (document.getElementById('ptcnhdps').value == '3'){
     document.getElementById('ndispartL').style.display="";
     document.getElementById('ndispartF').style.display="";
     return true;
 }

 //Hide NDIS Participant Flag for all other states
 document.getElementById('ndispartL').style.display="none";
 document.getElementById('ndispartF').style.display="none";
 return false;

}

