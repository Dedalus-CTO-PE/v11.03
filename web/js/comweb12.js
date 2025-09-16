//jsVersion  : V11.03.00
//========================================================================
// Program   :  comweb12.js
//
// Function  :  Standard Functions used in comweb12 templates
//
//========================================================================
//
function AssessLink(hl7id, viewType) {
  var linkurl="../cgi-bin/comweb12.pbl?reportno=0";
  switch (viewType) {
    case "V":
      linkurl+="3&template=003&hl7cimes=" + hl7id;
      break;
    case "P": 
      linkurl+="3&template=001&hl7cimes=" + hl7id;
      break;
    case "H":
      linkurl+="3&template=004&hl7cimes=" + hl7id;
      break;
    case "E":
      linkurl+="3&template=005&hl7cimes=" + hl7id;
      break;
    case "A":
      linkurl+="3&template=006&hl7cimes=" + hl7id;
      break;
    case "OU":
      linkurl+="3&template=007&hl7cimes=" + hl7id;
      break;
    case "W":
      linkurl+="3&template=008&hl7cimes=" + hl7id;
      break;
    case "OP":
      linkurl+="3&template=009&hl7cimes=" + hl7id;
      break;
    case "OQ":
      linkurl+="3&template=010&hl7cimes=" + hl7id
      break;
    case "RF":
      linkurl+="4&template=001&hl7cimes=" + hl7id
      break;
    default:
      alert("unsupported message type");
      return;
  }
  var Left=(document.body.clientWidth-850)/2;
  DFrameLink(linkurl,50,Left,850,400);
}

function CheckStatus(hl7id, hl7MessageType) {
  var linkurl="../cgi-bin/comweb12.pbl?reportno=03&template=002" +
            "&hl7cimes=" + hl7id + "&msgtyphl=" + hl7MessageType;
  var Left=(document.body.clientWidth-850)/2;
  DFrameLink(linkurl,50,Left,850,400);
}

function resizeWindow(widthPopup, heightPopup) {
  document.getElementById("PopUpScreen").style.width = widthPopup;
  document.getElementById("PopUpScreen").style.height = heightPopup;
}
