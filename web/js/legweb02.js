//jsVersion  : V11.03.00
//=============================================================================
// Program   : legweb02.js
//
// Function  : Functions Used by Patient Legacy Free Text subsystem.
//
// Modifications :
//
// V10.06.01 21.09.2015  Ania P         CAR 321333
//           Created js.
//
//=============================================================================
// Open Legacy Table Details (free text format from legacmaf)
function linkPatientAltComments(urNumber,eventDate,eventTime,eventNumber) {

  linkurl="legweb02.pbl?reportno=02&template=001" +
           "&urnumber=" + urNumber.replace(/ /g,"+") +
           "&evntdate=" + eventDate.replace(/ /g,"+") +
           "&evnttime=" + eventTime.replace(/ /g,"+") +
           "&evntnumb=" + eventNumber.replace(/ /g,"+");

  xOffset = (document.body.clientWidth - 800)/2;
  DFrameLink(linkurl,0,xOffset,800,450);

}

