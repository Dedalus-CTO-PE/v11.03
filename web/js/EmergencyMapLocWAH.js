//jsVersion  : V11.03.00
//-----------------------------------------------------------
//  Site Code Based Map Location
//
//  AddLocation(Description, Code, left, top, right, botton, 
//              Start Position Left, Top);
//
// V10.06.01 23/04/2015  Peter Vela     CAR 315042
//           Changed Busselton waiting room size
// V10.05.01 29/01/2015  Peter Vela     CAR 309847
//           Modified BN1 layout
// V10.04.01 23/06/2014  Don Nguyen     CAR 301366
//           Modified SetLocations() for new map layouts ('BN1', 'MG1', 'AG1')
// V10.03.07 13/05/2013  Don Nguyen     CAR 281666
//           Modified SetLocations() for new 'AL1' map layout
// V10.03.06 29/11/2012  Jill Parkinson CAR 277296
//           Changed all locations beginning with KJ to KO
// V10.03.05 25/10/2012  Don Nguyen     CAR 274987
//           Modified SetLocations() to deal with locations that have a Next
//           patient in them.
// V10.03.04 19/09/2012  Ebon Clements  CAR 273077
//           Fixed display of other location hidden cells
// V10.03.03 04/09/2012 Ebon Clements  CAR 271121
//           Changed PatientCellHeight to 100
// V10.03.02 31/08/2012 Jill Parkinson CAR 271121
//           Changed ALX to AOF
// V10.03.01 25/08/2012 Jill Parkinson CAR 271121
//           Created
//------------------------------------------------------------

var ShowLocationAreas=true;
var ShowPatients=true;
var PatientCellHeight=100;
var PatientCellWidth=200;
var PatientCellSpace=1;
var PatientCellPaddingTop=1;
var PatientCellPaddingLeft=1;
var immediate = 0
var emergency = 0
var urgent = 20
var semi = 50
var non = 110

function SetLocations() 
{ 
  invalidsite='1';
  EmrSiteCode=document.getElementById("emrsite").value;

  //  Description, Code, left, top, right, botton, Start Position Left, Top

  if (EmrSiteCode=="BN1") {
    invalidsite='0';

    PatientCellHeight = 86;
    PatientCellWidth = 161;
    PatientCellSpace = 1;

    var wrBorderStyle = "border:solid 2px black";

//    obj.AddLocation("RB4           ","BR4",30,35 ,232,120,30,35);
//    obj.AddLocation("RB3           ","BR3",30,123,232,208,30,123);
//    obj.AddLocation("RB2           ","BR2",30,211,232,296,30,211);
//    obj.AddLocation("RB1           ","BR1",30,299,232,384,30,299);
    obj.AddLocation("WR            ","BNW",30,387,843,644,30,387,"WAIT", wrBorderStyle);

//    obj.AddLocation("6             ","BN6",235,123,437,208,235,123);
//    obj.AddLocation("5             ","BN5",235,211,437,296,235,211);
//    obj.AddLocation("4             ","BN4",235,299,437,384,235,299);

//    obj.AddLocation("RR            ","BRR",440,123,642,208,440,123);
//    obj.AddLocation("2             ","BN2",440,211,642,296,440,211);
//    obj.AddLocation("1             ","BN1",440,299,642,384,440,299);

//    obj.AddLocation("7             ","BN7",645,35 ,847,120,645,35);
//    obj.AddLocation("8             ","BN8",645,123,847,208,645,123);
//    obj.AddLocation("9             ","BN9",645,211,847,296,645,211);

    obj.AddLocation("FT3           ","BF3",30,35 ,191,120,30,35);
    obj.AddLocation("MH            ","MH ",30,123,191,208,30,123);
    obj.AddLocation("I17           ","I17",30,211,191,296,30,211);
    obj.AddLocation("A12           ","B12",30,299,191,384,30,299);

    obj.AddLocation("FT2           ","BF2",193,35,354,120,193,35);
    obj.AddLocation("R18           ","B18",193,123,354,208,193,123);
    obj.AddLocation("A13           ","B13",193,299,354,384,193,299);

    obj.AddLocation("FT1           ","BF1",356,35,517,120,356,35);
    obj.AddLocation("R19           ","B19",356,123,517,208,356,123);
    obj.AddLocation("A14           ","B14",356,299,517,384,356,299);

    obj.AddLocation("C16           ","C16",519,35,680,120,519,35);
    obj.AddLocation("A10           ","B10",519,123,680,208,519,123);
    obj.AddLocation("A15           ","B15",519,299,680,384,519,299);

    obj.AddLocation("PR            ","BP1",682,35,843,120,682,35);
    obj.AddLocation("A11           ","B11",682,123,843,208,682,123);
    obj.AddLocation("A16           ","B16",682,299,843,384,682,299);

    obj.AddLocation("SS4           ","BS4",845,35,1006,120,845,35);
    obj.AddLocation("SS5           ","BS5",845,123,1006,208,845,123);
    obj.AddLocation("SS6           ","BS6",845,211,1006,296,845,211);
    obj.AddLocation("SS7           ","BS7",845,299,1006,384,845,299);
    obj.AddLocation("SS8           ","BS8",845,387,1006,472,845,387);
    obj.AddLocation("SS9           ","BS9",845,476,1006,560,845,476);

    var nextEmr = document.getElementById('NextEmergency');
    if (nextEmr)
    {
      nextEmr.style.left = "1008px";
      nextEmr.style.top = "35px";
      nextEmr.style.width = "250px";
      nextEmr.style.height = "85px";
    }

    var emrCount = document.getElementById('EmergencyCount');
    if (emrCount)
    {
      emrCount.style.left = "1008px";
      emrCount.style.top = "125px";
      emrCount.style.width = "250px";
      emrCount.style.height = "155px";
    }

    var sysComments = document.getElementById('SystemComments');
    if (sysComments)
    {
      sysComments.style.left = "1008px";
      sysComments.style.top = "305px";
      sysComments.style.width = "250px";
      sysComments.style.height = "205px";
    }

    // add Black Holes...
    BlackholeBNX=document.getElementById("blackholeBNX").value;
    BlackholeBNXNext=document.getElementById("blackholeBNXNext").value;
    obj.AddLocation("X-Ray","BNX",1008,515,1251,575,1008,515,
		   "HIDE","BLACKHOLE",BlackholeBNX,BlackholeBNXNext);

    BlackholeBNO=document.getElementById("blackholeBNO").value;
    BlackholeBNONext=document.getElementById("blackholeBNONext").value;
    obj.AddLocation("Other","BNO",1008,580,1251,645,1008,580,
		   "HIDE","BLACKHOLE",BlackholeBNO,BlackholeBNONext);

    // add custom style for location (room name) cell in patient block
    var s = document.createElement('style');
    var css = '.cellPatientLocName { font-weight:bold; width:26px; }';
    var head = null;

    if (document.getElementsByTagName('head')) {
      head = document.getElementsByTagName('head')[0];
    }
    else {
      head = document.createElement('head');
    }

    s.type = 'text/css';
    if (s.styleSheet) {
      s.styleSheet.cssText = css;
    }
    else {
      s.appendChild(document.createTextNode(css));
    }
    head.appendChild(s);
  }

  if (EmrSiteCode=="MG1") {
    invalidsite='0';

    PatientCellHeight = 86;
    PatientCellSpace = 1;

    var wrBorderStyle = "border:solid 2px black";

    obj.AddLocation("2             ","MG2",270,50 ,472,135,270,50);
    obj.AddLocation("1             ","MG1",270,160,472,245,270,160);
    obj.AddLocation("CR            ","MGC",270,270,472,355,270,270);

    obj.AddLocation("WR            ","MGW",235,387,841,644,235,387,"WAIT", wrBorderStyle);

    obj.AddLocation("3             ","MG3",600,160,802,245,600,160);
    obj.AddLocation("4             ","MG4",600,270,802,355,600,270);

    var nextEmr = document.getElementById('NextEmergency');
    if (nextEmr)
    {
      nextEmr.style.left = "880px";
      nextEmr.style.top = "35px";
      nextEmr.style.width = "370px";
      nextEmr.style.height = "85px";
    }

    var emrCount = document.getElementById('EmergencyCount');
    if (emrCount)
    {
      emrCount.style.left = "880px";
      emrCount.style.top = "125px";
      emrCount.style.width = "370px";
      emrCount.style.height = "155px";
    }

    var sysComments = document.getElementById('SystemComments');
    if (sysComments)
    {
      sysComments.style.left = "880px";
      sysComments.style.top = "305px";
      sysComments.style.width = "370px";
      sysComments.style.height = "340px";
    }

    // add Black Holes...
    BlackholeMGX=document.getElementById("blackholeMGX").value;
    BlackholeMGXNext=document.getElementById("blackholeMGXNext").value;
    obj.AddLocation("X-Ray","MGX",10,515,230,575,10,515,
		   "HIDE","BLACKHOLE",BlackholeMGX,BlackholeMGXNext);

    BlackholeMGO=document.getElementById("blackholeMGO").value;
    BlackholeMGONext=document.getElementById("blackholeMGONext").value;
    obj.AddLocation("Other","MGO",10,580,230,645,10,580,
		   "HIDE","BLACKHOLE",BlackholeMGO,BlackholeMGONext);

    // add custom style for location (room name) cell in patient block
    var s = document.createElement('style');
    var css = '.cellPatientLocName { font-weight:bold; width:26px; }';
    var head = null;

    if (document.getElementsByTagName('head')) {
      head = document.getElementsByTagName('head')[0];
    }
    else {
      head = document.createElement('head');
    }

    s.type = 'text/css';
    if (s.styleSheet) {
      s.styleSheet.cssText = css;
    }
    else {
      s.appendChild(document.createTextNode(css));
    }
    head.appendChild(s);
  }

  if (EmrSiteCode=="AG1") {
    invalidsite='0';

    PatientCellHeight = 86;
    PatientCellSpace = 1;

    var wrBorderStyle = "border:solid 2px black";

    obj.AddLocation("1             ","AG1",270,160,472,245,270,160);

    obj.AddLocation("WR            ","AGW",235,387,841,644,235,387,"WAIT", wrBorderStyle);

    obj.AddLocation("2             ","AG2",600,160,802,245,600,160);

    var nextEmr = document.getElementById('NextEmergency');
    if (nextEmr)
    {
      nextEmr.style.left = "880px";
      nextEmr.style.top = "35px";
      nextEmr.style.width = "370px";
      nextEmr.style.height = "85px";
    }

    var emrCount = document.getElementById('EmergencyCount');
    if (emrCount)
    {
      emrCount.style.left = "880px";
      emrCount.style.top = "125px";
      emrCount.style.width = "370px";
      emrCount.style.height = "155px";
    }

    var sysComments = document.getElementById('SystemComments');
    if (sysComments)
    {
      sysComments.style.left = "880px";
      sysComments.style.top = "305px";
      sysComments.style.width = "370px";
      sysComments.style.height = "340px";
    }

    // add Black Holes...
    BlackholeAGX=document.getElementById("blackholeAGX").value;
    BlackholeAGXNext=document.getElementById("blackholeAGXNext").value;
    obj.AddLocation("X-Ray","AGX",10,515,230,575,10,515,
		   "HIDE","BLACKHOLE",BlackholeAGX,BlackholeAGXNext);

    BlackholeAGO=document.getElementById("blackholeAGO").value;
    BlackholeAGONext=document.getElementById("blackholeAGONext").value;
    obj.AddLocation("Other","AGO",10,580,230,645,10,580,
		   "HIDE","BLACKHOLE",BlackholeAGO,BlackholeAGONext);

    // add custom style for location (room name) cell in patient block
    var s = document.createElement('style');
    var css = '.cellPatientLocName { font-weight:bold; width:26px; }';
    var head = null;

    if (document.getElementsByTagName('head')) {
      head = document.getElementsByTagName('head')[0];
    }
    else {
      head = document.createElement('head');
    }

    s.type = 'text/css';
    if (s.styleSheet) {
      s.styleSheet.cssText = css;
    }
    else {
      s.appendChild(document.createTextNode(css));
    }
    head.appendChild(s);
  }

  if (EmrSiteCode=="AL1") {
    invalidsite='0';

    PatientCellHeight = 86;
    PatientCellSpace = 1;

    var wrBorderStyle = "border:solid 2px black";

    obj.AddLocation("IS1           ","IS1",30,35,232,120,30,35);
    obj.AddLocation("6             ","AL6",30,123,232,208,30,123);
    obj.AddLocation("7             ","AL7",30,211,232,296,30,211);
    obj.AddLocation("8             ","AL8",30,299,232,384,30,299);
    obj.AddLocation("DS1           ","DS1",30,387,232,472,30,387);
    obj.AddLocation("WR            ","ALW",30,475,636,732,30,475,"WAIT", wrBorderStyle);

    obj.AddLocation("5             ","AL5",235,35,437,120,235,35);
    obj.AddLocation("4             ","AL4",235,123,437,208,235,123);
    obj.AddLocation("3             ","AL3",235,211,437,296,235,211);
    obj.AddLocation("2             ","AL2",235,299,437,384,235,299);
    obj.AddLocation("1             ","AL1",235,387,437,472,235,387);

    obj.AddLocation("RR2           ","AR2",440,123,642,208,440,123);
    obj.AddLocation("RR1           ","AR1",440,211,642,296,440,211);
    obj.AddLocation("PRO           ","PRO",440,299,642,384,440,299);

    obj.AddLocation("FT1           ","FT1",645,35,847,120,645,35);
    obj.AddLocation("FT2           ","FT2",645,123,847,208,645,123);
    obj.AddLocation("FT3           ","FT3",645,211,847,296,645,211);
    obj.AddLocation("FT4           ","FT4",645,299,847,384,645,299);
    obj.AddLocation("FPr           ","FPR",645,387,847,472,645,387);
    obj.AddLocation("FPl           ","PLR",645,475,847,560,645,475);
    obj.AddLocation("FTW           ","FTW",645,647,1251,732,645,647,"WAIT", wrBorderStyle);

    var nextEmr = document.getElementById('NextEmergency');
    if (nextEmr)
    {
     nextEmr.style.left = "880px";
     nextEmr.style.top = "35px";
     nextEmr.style.width = "370px";
     nextEmr.style.height = "85px";
    }

    var emrCount = document.getElementById('EmergencyCount');
    if (emrCount)
    {
     emrCount.style.left = "880px";
     emrCount.style.top = "125px";
     emrCount.style.width = "370px";
     emrCount.style.height = "155px";
    }

    var sysComments = document.getElementById('SystemComments');
    if (sysComments)
    {
     sysComments.style.left = "880px";
     sysComments.style.top = "305px";
     sysComments.style.width = "370px";
     sysComments.style.height = "272px";
    }

    // add Black Holes...
    BlackholeMIT=document.getElementById("blackholeMIT").value;
    BlackholeMITNext=document.getElementById("blackholeMITNext").value;
    obj.AddLocation("Medical Imaging","MIT",880,580,1251,645,880,580,
		   "HIDE","BLACKHOLE",BlackholeMIT,BlackholeMITNext);

    // add custom style for location (room name) cell in patient block
    var s = document.createElement('style');
    var css = '.cellPatientLocName { font-weight:bold; width:26px; }';
    var head = null;

    if (document.getElementsByTagName('head')) {
     head = document.getElementsByTagName('head')[0];
    }
    else {
     head = document.createElement('head');
    }

    s.type = 'text/css';
    if (s.styleSheet) {
     s.styleSheet.cssText = css;
    }
    else {
     s.appendChild(document.createTextNode(css));
    }
    head.appendChild(s);
  }

  if (EmrSiteCode=="KT1") {
    invalidsite='0';
    BlackholeKTX=document.getElementById("blackholeKTX").value;
    BlackholeKTO=document.getElementById("blackholeKTO").value;

    BlackholeKTXNext=document.getElementById("blackholeKTXNext").value;
    BlackholeKTONext=document.getElementById("blackholeKTONext").value;

    obj.AddLocation("1             ","KT1",205,302,404,401,205,302);

    obj.AddLocation("RR            ","KTR",405,102,604,201,405,102);
    obj.AddLocation("XRAY          ","KTX",405,302,604,401,405,302,
                    "HIDE","BLACKHOLE",BlackholeKTX,BlackholeKTXNext);
    obj.AddLocation("Other         ","KTO",405,402,604,501,405,402,
                    "HIDE","BLACKHOLE",BlackholeKTO,BlackholeKTONext);

    obj.AddLocation("2             ","KT2",605,302,803,401,605,302);

    obj.AddLocation("WR            ","KTW",804,102,1003,701,804,102,"WAIT");
  }

  if (EmrSiteCode=="DE1") {
    invalidsite='0';
    BlackholeDEX=document.getElementById("blackholeDEX").value;
    BlackholeDEO=document.getElementById("blackholeDEO").value;

    BlackholeDEXNext=document.getElementById("blackholeDEXNext").value;
    BlackholeDEONext=document.getElementById("blackholeDEONext").value;

    obj.AddLocation("1             ","DE1",205,302,404,401,205,302);

    obj.AddLocation("2             ","DE2",405,302,604,401,405,302);
    obj.AddLocation("XRAY          ","DEX",405,402,604,501,405,402,
                    "HIDE","BLACKHOLE",BlackholeDEX,BlackholeDEXNext);
    obj.AddLocation("Other         ","DEO",405,502,604,601,405,502,
                    "HIDE","BLACKHOLE",BlackholeDEO,BlackholeDEONext);

    obj.AddLocation("3             ","DE3",605,302,803,401,605,302);

    obj.AddLocation("WR            ","DEW",804,102,1003,701,804,102,"WAIT");
  }

  if (EmrSiteCode=="GN1") {
    invalidsite='0';
    BlackholeGNX=document.getElementById("blackholeGNX").value;
    BlackholeGNO=document.getElementById("blackholeGNO").value;

    BlackholeGNXNext=document.getElementById("blackholeGNXNext").value;
    BlackholeGNONext=document.getElementById("blackholeGNONext").value;

    obj.AddLocation("1             ","GN1",205,302,404,401,205,302);

    obj.AddLocation("XRAY          ","GNX",405,402,604,501,405,402,
                    "HIDE","BLACKHOLE",BlackholeGNX,BlackholeGNXNext);
    obj.AddLocation("Other         ","GNO",405,502,604,601,405,502,
                    "HIDE","BLACKHOLE",BlackholeGNO,BlackholeGNONext);

    obj.AddLocation("2             ","GN2",605,302,803,401,605,302);

    obj.AddLocation("WR            ","GNW",804,102,1003,701,804,102,"WAIT");
  }

  if (EmrSiteCode=="PG1") {
    invalidsite='0';
    BlackholePGX=document.getElementById("blackholePGX").value;
    BlackholePGO=document.getElementById("blackholePGO").value;

    BlackholePGXNext=document.getElementById("blackholePGXNext").value;
    BlackholePGONext=document.getElementById("blackholePGONext").value;

    obj.AddLocation("1             ","PG1",205,202,404,301,205,202);

    obj.AddLocation("XRAY          ","PGX",405,302,604,401,405,302,
                    "HIDE","BLACKHOLE",BlackholePGX,BlackholePGXNext);
    obj.AddLocation("Other         ","PGO",405,402,604,501,405,402,
                    "HIDE","BLACKHOLE",BlackholePGO,BlackholePGONext);

    obj.AddLocation("2             ","PG2",605,202,803,301,605,202);

    obj.AddLocation("WR            ","PGW",804,102,1003,701,804,102,"WAIT");
  }

  if (EmrSiteCode=="KO1") {
    invalidsite='0';
    BlackholeKOX=document.getElementById("blackholeKOX").value;
    BlackholeKOO=document.getElementById("blackholeKOO").value;

    BlackholeKOXNext=document.getElementById("blackholeKOXNext").value;
    BlackholeKOONext=document.getElementById("blackholeKOONext").value;

    obj.AddLocation("1             ","KO1",205,202,404,301,205,202);

    obj.AddLocation("XRAY          ","KOX",405,302,604,401,405,302,
                    "HIDE","BLACKHOLE",BlackholeKOX,BlackholeKOXNext);
    obj.AddLocation("Other         ","KOO",405,402,604,501,405,402,
                    "HIDE","BLACKHOLE",BlackholeKOO,BlackholeKOONext);

    obj.AddLocation("2             ","KO2",605,202,803,301,605,202);

    obj.AddLocation("WR            ","KOW",804,102,1003,701,804,102,"WAIT");
  }

  if (EmrSiteCode=="BB1") {
    invalidsite='0';

    obj.AddLocation("1             ","BB1",205,302,404,401,205,302);

    obj.AddLocation("2             ","BB2",605,302,803,401,605,302);

    obj.AddLocation("WR            ","BBW",205,402,803,532,205,402,"WAIT");

  }

  if (EmrSiteCode=="JE1") {
    invalidsite='0';

    obj.AddLocation("1             ","JE1",205,202,404,301,205,202);

    obj.AddLocation("2             ","JE2",605,202,803,301,605,202);

    obj.AddLocation("XRAY          ","JEX",405,302,604,401,405,302);

    obj.AddLocation("WR            ","JWR",205,402,803,632,205,402,"WAIT");

  }

  if (EmrSiteCode=="TA1") {
    invalidsite='0';

    obj.AddLocation("1             ","TA1",205,302,404,401,205,302);

    obj.AddLocation("AR            ","TAA",605,302,803,401,605,302);

    obj.AddLocation("WR            ","TAW",205,402,803,532,205,402,"WAIT");

  }

  obj.AddLocation("Other         ","ZZZ",5000,5000,5000,5000,5000,5000);

  if (invalidsite=='1') {
    alert("Invalid Emergency Site");
    parent.close();
  }

}

