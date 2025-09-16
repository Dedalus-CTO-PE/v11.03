//--------------------------------------------------------------------------------
// PatientActions.js
// Links for Patient Level Tasks/Action Menu
// V10.03.01 18.09.2013 B.G.Ackland CAR 289383
//                      Added Delete Inpatent Favourite
// V10.03.00 12.08.2013 B.G.Ackland CAR 289383
//                      New iPhone Include
//--------------------------------------------------------------------------------
function PatientTask(el) {
  itemNo=el.options[el.selectedIndex].value;
  el.selectedIndex=0;
  switch (parseInt(itemNo)) {
   case 1:
      AddInpatientFavorites();
      break;
   case 2:
      DelInpatientFavorites();
      break;
   case 999:
      ClosePatient();
      break;
  }
}
function AddInpatientFavorites() {
  theURL="patweb02.pbl";
  var postStr="reportno=1&template=005&updttype=A&nextpage=1&redirect="+
              "&webpd002=999&webpd003=Inpatients"
  var xmlHttp = createHttpObject();
  xmlHttp.open("POST", theURL, false);
  xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
  xmlHttp.send(postStr);
  if (xmlHttp.status!="200") {
    alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
  }
  theURL="patweb02.pbl";
  var postStr="reportno=2&template=002&updttype=A&nextpage=1&"+
              "redirect=&webpt002=999&webpt003="+
              encodeURIComponent(PatientURN);
  var xmlHttp = createHttpObject();
  xmlHttp.open("POST", theURL, false);
  xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
  xmlHttp.send(postStr);
  if (xmlHttp.status=="200") {
    if (xmlHttp.responseText.match(/location.href/i)) {
       alertify.alert("Done : Added to Inpatient Favourites.");
    }
    else {
      alertify.alert(xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,""));
    }
  }
  else {
    alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
  }
}
function DelInpatientFavorites() {
  theURL="patweb02.pbl";
  var postStr="reportno=2&template=002&updttype=D&nextpage=1&"+
              "redirect=&webpt002=999&webpt003="+
              encodeURIComponent(PatientURN);
  var xmlHttp = createHttpObject();
  xmlHttp.open("POST", theURL, false);
  xmlHttp.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
  xmlHttp.send(postStr);
  if (xmlHttp.status=="200") {
    if (xmlHttp.responseText.match(/location.href/i)) {
       alertify.alert("Done : Deleted from Inpatient Favourites.");
    }
    else {
      alertify.alert(xmlHttp.responseText.replace(/.*alert../i,"").replace(/.\).*/i,""));
    }
  }
  else {
    alertify.alert("Web Service Not Available. Check your Connection and Try Again.");
  }
}
