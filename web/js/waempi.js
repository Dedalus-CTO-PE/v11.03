//jsVersion  : V11.03.00
//========================================================================
// Program   : waempi.js
//
// Written   : Jill Parkinson
//
// Function  : Standard Functions Used in the wahealth EMPI
//
// Version   :
//
// V10.03.04 11/12/2012  Saroeun Soeur  CAR 276875
//                       Mods to put an exception block to catch any javascript
//                       errors
// V10.03.03 30/01/2012  Sandra Barcham CAR 254540
//                       Change gender="UNKNOWN"; to 
//                       gender="NOT_STATED_INADEQUATELY_DESCRIBED"; 
// V10.03.02 11/01/2012  Jill Parkinson CAR 258739
//                       Mods to not send gender if unknown
// V10.03.01 18/11/2011  Jill Parkinson CAR 254018
//                       Fixed checking of no match radio button
// V10.02.10 27/10/2011  Saroeun Soeur  CAR 254054
//                       check for exception on request to webservice
// V10.02.09 12/10/2011  Jill Parkinson CAR 250642
//                       Fixed getGenderDescription values
// V10.02.08 10/10/2011  Jill Parkinson CAR 250642
//                       Changed empisvc to empiservice
// V10.02.07 13/09/2011  Jill Parkinson CAR 250642
//                       Added check for 'An error'
// V10.02.06 05/09/2011  Jill Parkinson CAR 249744
//                      Changed to call createHttpObject
// V10.02.05 01/09/2011  Jill Parkinson CAR 240721
//                      Added setting of 10 seconds to timeout if no response
// V10.02.04 25/08/2011  Jill Parkinson CAR 240721
//                      Mods from testing interface
// V10.02.03 10/08/2011  Jill Parkinson CAR 240721
//                      Removed onreadystatechange
// V10.02.02 01/07/2011  Jill Parkinson CAR 240721
//                      Added timeoutFired
// V10.02.01 27/07/2011  Jill Parkinson CAR 240721
//                      Fixed image path
// V10.02.00 15/07/2011  Jill Parkinson CAR 240721
//                      Created include
//========================================================================
function showAge(dob){
  var d = [dob.substring(0,4),dob.substring(5,7),dob.substring(8,10)]
  var today=new Date();
  var bday=new Date(d[0],d[1],d[2]);
  var by=bday.getFullYear();
  var bm=bday.getMonth();
  var bd=bday.getDate();
  var age=0; var dif=bday;

  while(dif<=today){
    var dif = new Date(by+age,bm,bd);
    age++;
  }
  age +=-2 ;
  return age+"y";
}

function getGenderDescription(sex) {
  var gender = sex.replace(/ /g,"");

  if(gender == "MALE") {
        return "Male";
  }else if (gender  == "FEMALE") {
        return "Female";
  }else if (gender  == "UNKNOWN") {
        return "Unknown";
  }else if (gender  == "INTERSEX_OR_INDETERMINATE") {
        return "Intersex Or Indeterminate";
  } else {
       return "Not Stated/Inadequately Described";
  }
}
function noMatch(){
// No match was found - send a request for a new UMRN to be returned
  var responseContext = "";
  xmlHttp = createHttpObject();

  var strtDay  = parent.AddForm.ptmas017.value.substring(0,2);
  var strtMon  = parent.AddForm.ptmas017.value.substring(3,6);
  var strtYear = parent.AddForm.ptmas017.value.substring(7,11);
  strtMon = GetMonthNumber(strtMon);
  var DOB = strtYear + '-' + strtMon + '-' + strtDay + 'T00:00:00';

  var gender = parent.AddForm.ptmas015.value.replace(/ /g,"");

  if(gender == "M") {
        gender="MALE";
  }else if (gender  == "F") {
        gender="FEMALE";
  }else if (gender  == "U") {
        gender="NOT_STATED_INADEQUATELY_DESCRIBED";
  }else if (gender  == "I") {
        gender="INTERSEX_OR_INDETERMINATE";
  }else if (gender  == "R") {
        gender="INTERSEX_OR_INDETERMINATE";
  } else {
       gender="NOT_STATED_INADEQUATELY_DESCRIBED";
  }


  theURL =  "../php/empiservice.php?"+
            "&FamilyName="+parent.AddForm.ptmas005.value+
            "&GivenName="+parent.AddForm.pmpmi084.value+
            "&FurtherGivenName="+parent.AddForm.pmpmi085.value+
            "&Gender="+gender+
            "&DateOfBirth="+DOB+
            "&AddressLine1="+parent.AddForm.ptmas008.value+
            "&AddressLine2="+parent.AddForm.ptmas009.value+
            "&AddressLine3="+parent.AddForm.ptmas010.value+
            "&AddressLine4="+parent.AddForm.ptmas011.value+
            "&PostCode="+parent.AddForm.ptmas012.value+
            "&MedicareNumber="+parent.AddForm.ptmas023.value+
            "&IsConfirmed=1"+
            "&IsNewBorn=0";

  xmlHttp.open("GET", theURL, true);
  xmlHttp.send();

  xmlHttp.onreadystatechange = function () {
    if(xmlHttp.readyState == 4 && xmlHttp.status == "200") {
//
//  The lines of code below can be used for testing
//  It will simulate what happens when the user selects "No Match" after
//  a list of matches has been returned
//         if(xmlHttp.responseText.substring(0,10)==""){
//           alert("Registering UMRN - "+ responseContext.UMRN);
//           parent.document.getElementById('manalloc').value="1"
//           parent.document.getElementById('urnumber').value=" 100010B";
//           alert(parent.document.AddForm.urnumber.value);
//           SubmitForm.target="PopUpFrame";
//           parent.document.AddForm.submit();
//           return;
//        }
//
         if(xmlHttp.responseText.substring(0,10)==""||
            xmlHttp.responseText.substring(0,10)=="SOAP-ERROR"){
            alert("Register New Patient Web Service is Unavailable \n "+
                 "Using webPAS generated UMRN");
                  parent.document.AddForm.submit();
//                SubmitHidden05(parent.document.AddForm);
                  return;
         }else if(xmlHttp.responseText.match(/Exception/g)){
             alert(xmlHttp.responseText);
             alert("Register New Patient Web Service is Unavailable \n "+
                 "Using webPAS generated UMRN");
                  parent.document.AddForm.submit();
         }else {
           responseContext = eval("("+ xmlHttp.responseText +")");
           alert("Registering UMRN - "+ responseContext.UMRN);
           parent.document.getElementById('manalloc').value="1"
           parent.document.getElementById('urnumber').value=responseContext.UMRN;
           parent.document.AddForm.submit();
//         SubmitHidden05(parent.document.AddForm);
         }

         return;
     }
  }
}

function callService() {
  var responseContext = "";
  var unknown = "";
  if(document.getElementById('quickreg').checked==true){
    unknown = 1;
  } else {
    unknown = 0; 
  }

  var div = document.getElementById('loading');
  var table = document.getElementById('returnDiv');
  var divPanel = document.getElementById('panel');

  div.innerHTML = "<img src='../images/ajax-searcher.gif' />" ;
  table.innerHTML = "";
  divPanel.style.display = "none";

  var strtDay  = AddForm.ptmas017.value.substring(0,2);
  var strtMon  = AddForm.ptmas017.value.substring(3,6);
  var strtYear = AddForm.ptmas017.value.substring(7,11);
  strtMon = GetMonthNumber(strtMon);
  var DOB = strtYear + '-' + strtMon + '-' + strtDay + 'T00:00:00';

  var gender = AddForm.ptmas015.value.replace(/ /g,"");

  if(gender == "M") {
        gender="MALE";
  }else if (gender  == "F") {
        gender="FEMALE";
  }else if (gender  == "U") {
        gender="NOT_STATED_INADEQUATELY_DESCRIBED";
  }else if (gender  == "I") {
        gender="INTERSEX_OR_INDETERMINATE";
  }else if (gender  == "R") {
        gender="INTERSEX_OR_INDETERMINATE";
  } else {
       gender="NOT_STATED_INADEQUATELY_DESCRIBED";
  }

  theURL =  "../php/empiservice.php?"+
            "&FamilyName="+AddForm.ptmas005.value+
            "&GivenName="+AddForm.pmpmi084.value+
            "&FurtherGivenName="+AddForm.pmpmi085.value+
            "&DateOfBirth="+DOB+
            "&AddressLine1="+AddForm.ptmas008.value+
            "&AddressLine2="+AddForm.ptmas009.value+
            "&AddressLine3="+AddForm.ptmas010.value+
            "&AddressLine4="+AddForm.ptmas011.value+
            "&PostCode="+AddForm.ptmas012.value+
            "&MedicareNumber="+AddForm.ptmas023.value+
            "&IsUnknown="+unknown+
            "&IsNewBorn=0";
   if(gender!="UNKNOWN"){ 
     theURL+="&Gender="+gender;
   }

   xmlHttp = createHttpObject();
   xmlHttp.open("GET", theURL, false);
   xmlHttp.send(null);

// Timeout to abort in 10 seconds 
//   var xmlHttpTimeout=setTimeout(timeoutFired,10000); 
//   xmlHttp.ontimeout = function() {
//      timeoutFired();
//      return;
//   }

   var table = document.getElementById('returnDiv');
   var div = document.getElementById('loading');
   var divPanel = document.getElementById('panel');
   divPanel.style.display = "";

   if(xmlHttp.readyState == 4){

//      alert(xmlHttp.status);
// debug
//      document.AddForm.urcommnt.value=xmlHttp.responseText
//      return;

      if(xmlHttp.status == "500") {
        timeoutFired();
        return;
      }
      table.innerHTML = "";

      if(xmlHttp.status == "200") {
         useResult();
      }
    } else {
      div.style.display = "";
      div.innerHTML= "<img src='../images/ajax-searcher.gif' />" ;
      divPanel.style.display = "none";
      divPanel.style.display = "none";
}
function useResult(){
   div.innerHTML = "";
// The following code can be used for testing only
//       if(xmlHttp.responseText.substring(0,10)==""){
//          testnoresponse();
//          return;
//       }
   if(xmlHttp.responseText.substring(0,8)==""||
      xmlHttp.responseText.substring(0,8)=="An error"||
      xmlHttp.responseText.substring(10,21)=="Fatal error"){
      alert("Register New Patient Web Service is Unavailable \n "+
           "Using webPAS generated UMRN");
            document.AddForm.submit();
            return;
   }
   if(xmlHttp.responseText.substring(0,10)==""||
      xmlHttp.responseText.substring(0,10)=="SOAP-ERROR"){
      alert("Register New Patient Web Service is Unavailable \n "+
           "Using webPAS generated UMRN");
            document.AddForm.submit();
//          SubmitHidden05(document.AddForm);
            return;
   }

   if(xmlHttp.responseText.match(/Exception/g)){
         alert(xmlHttp.responseText);
	 alert("Register New Patient Web Service is Unavailable \n "+
               "Using webPAS generated UMRN");
         document.AddForm.submit();
         return;
   }

   try {   
     responseContext = eval("("+ xmlHttp.responseText +")");
     if(typeof responseContext.NewUMRN != 'undefined') {
       if(responseContext.NewUMRN==true){
         alert("Registering UMRN - "+ responseContext.UMRN);
         document.getElementById('manalloc').value="1"
         document.getElementById('urnumber').value=responseContext.UMRN;
         document.AddForm.submit();
         return;
       }
     }
   }catch(err) {
       alert("Service currently unavailable.");
       alert("Register New Patient Web Service is Unavailable \n "+
               "Using webPAS generated UMRN");
       document.AddForm.submit();
       return;
   }
       

   var str = "";
   if(typeof responseContext.Matches != 'undefined') {
      str = "<table cellspacing=0 cellpadding=0 border=1 width=100%  "+
            "class='row'><tbody><tr class=cell>"+
            "<td colspan=4 style='background-color:#ACC5E0;' "+
            "align=center><b>Existing records found</b></td></tr>"+
            "<tr class=row>"+
            "<td>&nbsp;</td>"+
            "<td class=cellTitle><b>Patient</b></td>"+
            "<td class=cellTitle><b>U/R</b></td>"+
            "<td class=cellTitle><b>Date of Birth (Age)</b></td></tr>";

          for(var i = 0; i < responseContext.Matches.length; i++) {
            str += "<tr class=row><td class=cellTitle>"+
                   "<input type='radio' onclick='selectPatient(\""+
                   responseContext.Matches[i].UMRN+"\");'" +
                   " name='selectedPatient' value="+i+" />"+"\n"+
                   "<td><b>"+responseContext.Matches[i].GivenName1+"</b>"+
                   "&nbsp;<span style=text-transform:capitalize;>"+
                   responseContext.Matches[i].Title+
                   "&nbsp;<span style=text-transform:capitalize;>"+
                   responseContext.Matches[i].Surname+
                   "</span><br /><span style=text-transform:capitalize;>"+
                   responseContext.Matches[i].CurrentAddress+"</span>"+
                   "</td><td class=cellTitle><b>"+"\n"+
                   responseContext.Matches[i].UMRN+"</b></td>"+"\n"+
                  "<td class=cellTitle>"+
                  formatDate(responseContext.Matches[i].DateOfBirth)+
                  " ( "+showAge(responseContext.Matches[i].DateOfBirth)+
                  " )<br />"+
                  getGenderDescription(responseContext.Matches[i].Gender)+
                  "</td></tr>"+"\n";
          }

          if(responseContext.Matches.length > 10) {
          str += "<tr><td><input type='radio' onclick='noMatch();' "+
                 "name='selectedPatient' value=1 />"+
                 "</td><td><b>No Match Confirmed</td>"+
                 "<td>&nbsp;</td><td>&nbsp;</td>"+
                 "</table><br /><br /><table width=100%><tbody>"+
                 "<tr class='row'><td class=cellTitle>"+
                 "<input type='button' value='<< Previous' /></td>"+
                 "<td class=cellTitle><input type='button' "+
                 "value='Next >>' /></td></tr></tbody></table>";
          } else {
          str += "<tr><td><input type='radio' onclick='noMatch();' "+
                 "name='selectedPatient' value=1 />"+
                 "</td><td><b>No Match Confirmed</td>"+
                 "<td>&nbsp;</td><td>&nbsp;</td>"+
                 "</table><br /><br /><table width=100%><tbody>"+
                 "<tr class='row'><td class=cellTitle>"+
                 "<td clospan=3 class=cellTitle align=center>"+
                 "</tr></tbody></table>";
          }
       showResults(str);
       } else {
           alert("Registering UMRN - "+ responseContext.UMRN);
           document.getElementById('manalloc').value="1"
           document.getElementById('urnumber').value=responseContext.UMRN;
           document.AddForm.submit();
           return;
       }
    }
}

function timeoutFired(){
        alert("Timed Out - Register New Patient Web Service is Unavailable \n "+
              "Using webPAS generated UMRN");
               document.AddForm.submit();
//             SubmitHidden05(document.AddForm);
}


function showResults(string){
  PopUpFrame.document.open();
  PopUpFrame.document.write( "" +
  '<link rel="stylesheet" href="../html/standard.css" type="text/css">' + "\n" +
  '<link rel="stylesheet" href="../html/custom.css" type="text/css">' + "\n" +
  '<script type="text/javascript" src="../js/Standard.js"></script>' + "\n" +
  '<script type="text/javascript" src="../js/Custom.js"></script>' + "\n" +
  '<script type="text/javascript" src="../js/patweb89.js"></script>' + "\n" +
  '<script type="text/javascript" src="../js/waempi.js"></script>' + "\n" +
  '</head>\n' +
  '<span class="DFrameTitleBar">' +"\n"+
  '<img border="0" align="right" src="../images/ExitIcon.gif" ' +
  ' onclick=DFrameExit();>'+"\n"+
  '' +
  '</span>'+
  '<body onload=PageLoad();>' +
  string +'</body> ');


  PopUpFrame.document.close()
  PopUpScreen.style.height=400;
  PopUpScreen.style.width=850;
  PopUpScreen.style.top=100;
  PopUpScreen.style.left=100;
  PopUpScreen.style.display="";
}
function selectPatient(urnumber){
  linkurl="patweb98.pbl?reportno=01&template=001" +
           "&urnumber=" + urnumber.replace(/ /g,"+");
  parent.location.href=linkurl;
}
function formatDate(date) {
   yyyy = date.substr(0,4)
   mm = date.substr(5,2)
   dd = date.substr(8,2)
   mth3=mm
   switch(mm) {
     case "01": mth3="Jan"; break;
     case "02": mth3="Feb"; break;
     case "03": mth3="Mar"; break;
     case "04": mth3="Apr"; break;
     case "05": mth3="May"; break;
     case "06": mth3="Jun"; break;
     case "07": mth3="Jul"; break;
     case "08": mth3="Aug"; break;
     case "09": mth3="Sep"; break;
     case "10": mth3="Oct"; break;
     case "11": mth3="Nov"; break;
     case "12": mth3="Dec"; break;
   }
   return(dd + " " + mth3 + " " + yyyy);
}

function testnoresponse(){
            str = "<table cellspacing=0 cellpadding=0 border=1 width=100%  "+
                  "class='row'><tbody><tr class=cell>"+
                  "<td colspan=4 style='background-color:#ACC5E0;' "+
                  "align=center><b>Existing records found</b></td></tr>"+
                  "<tr class=row>"+
                  "<td>&nbsp;</td>"+
                  "<td class=cellTitle><b>Patient</b></td>"+
                  "<td class=cellTitle><b>U/R</b></td>"+
                  "<td class=cellTitle><b>Date of Birth (Age)</b></td></tr>";
                str += "<tr><td><input type='radio' onclick='noMatch();' "+
                       "name='selectedPatient' value=1 />"+
                       "</td><td><b>No Match Confirmed</td>"+
                       "<td>&nbsp;</td><td>&nbsp;</td>"+
                       "</table><br /><br /><table width=100%><tbody>"+
                       "<tr class='row'><td class=cellTitle>"+
                       "<td clospan=3 class=cellTitle align=center>"+
                       "</tr></tbody></table>";
             showResults(str);
}

