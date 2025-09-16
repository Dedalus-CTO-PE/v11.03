//jsVersion  : V11.03.00
//------------------------------------------------------------
// Source Code  : PatientTabMenu.js
//
// Function     : Tab based menu configuration javascript
//------------------------------------------------------------
var currentPatient="";
function CheckTabFrame() {
  document.body.style.overflowY="auto";
  document.body.style.overflowX="visible";
  var tabWidth=200;
  var tabFont=15;
  var w = window, d = document, e = d.documentElement,
      g = d.getElementsByTagName('body')[0],
      x = w.innerWidth || e.clientWidth || g.clientWidth,
      y = w.innerHeight|| e.clientHeight|| g.clientHeight;
  if ( x < 1025 ) { tabWidth=100; }
  el=document.getElementById('content').contentWindow.document
  if (typeof el.PatientLinks != "undefined") {
    if (el.PatientLinks.urnumber.value != currentPatient) {
      currentPatient=el.PatientLinks.urnumber.value;
      var tabFrame = document.getElementById('tab');
      var contentFrame = document.getElementById('content');
      contentFrame.style.width=top.document.body.clientWidth-tabWidth +"px";
      contentFrame.style.display="inline";
      document.getElementById('tab').contentWindow.location.reload();
      tabFrame.style.display="inline";
      tabFrame.style.position="absolute";
      tabFrame.style.height=y-50+"px";
      tabFrame.style.width=tabWidth+"px";
      tabFrame.style.borderLeft="1px solid #999";
    }
    if (top.content.document.getElementById("BannerPatientImg") != undefined) {
        top.content.document.getElementById("BannerPatientImg").style.display="none";
    }
  }
  else {
    currentPatient="";
    var contentFrame = document.getElementById('content');
    contentFrame.style.width='100%';

    var tabFrame = document.getElementById('tab');
    if (tabFrame) {
      tabFrame.style.display="none";
    }
  }
}
function setFrameHeights() {
  var myWidth = 0, myHeight = 0;
  if( typeof( window.innerWidth ) == 'number' ) {
    //Non-IE
    myWidth = window.innerWidth;
    myHeight = window.innerHeight;
  } else if( document.documentElement && ( document.documentElement.clientWidth || document.documentElement.clientHeight ) ) {
    //IE 6+ in 'standards compliant mode'
    myWidth = document.documentElement.clientWidth;
    myHeight = document.documentElement.clientHeight;
  } else if( document.body && ( document.body.clientWidth || document.body.clientHeight ) ) {
    //IE 4 compatible
    myWidth = document.body.clientWidth;
    myHeight = document.body.clientHeight;
  }
  iframe=document.getElementById('content')
  iframe.style.height=myHeight-50+'px'
  iframe.style.width="100%";
  iframe.src=defaultPage;
}
function Disabled() {
  alert("This feature is not yet available on your system.");
}
function TabLinkTo(ws,wr,wt) {
  top.content.PatientLinkTo(ws,wr,wt,0,0,0)
}
function init() {
  if (top.content.PatientURN != undefined) {
    urnumber=top.content.PatientURN.replace(/ /g,"+")
    gender=top.content.PatientSEX
    el=document.getElementById("patientImage")
    el.innerHTML='<img style="padding:5px;border:1px solid #ccc;width:60%;" '+
               'src="../../cgi-bin/patientPhoto.php?urnumber='+urnumber+'&gender='+gender+'" '+
               'alt="Patient">'
  }
  else {
    el=document.getElementById("patientImage")
    el.innerHTML='<img style="padding:5px;border:1px solid #ccc;" '+
                 'src="../../images/loading.gif">'
 }
  var w = top, d = top.document, e = d.documentElement,
      g = d.getElementsByTagName('body')[0],
      x = w.innerWidth || e.clientWidth || g.clientWidth;
  if ( x < 1025 ) {
    var tabMenu = document.getElementsByTagName("UL")[0];
    var tabs = tabMenu.getElementsByTagName("LI");
    for (var i = 0; i < tabs.length; i++) {
      tabs[i].style.fontSize = "10px";
      tabs[i].style.whiteSpace = "nowrap";
      tabs[i].style.width = "100px";
      tabs[i].style.paddingLeft = "3px";
    }
  }
}
