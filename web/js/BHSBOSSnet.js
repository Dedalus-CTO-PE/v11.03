//jsVersion  : V11.03.00
//========================================================================
// Program   : BHSBOSSnet.js
//
// Written   : 22.02.2018
//
// Function  : Standard Functions Used in BHS templates
//
// Version   : V10.12.00
//
// Modifications :
//
//        V10.12.01 22/02/2018  Peter Vela         0842991
//                  New javascript file for BHS
//========================================================================
function BOSSnetURLinkAlerts(urnumber){
     var bossnetUR = urnumber.replace(/ /g, "");
     window.open("http://bossnet.bhs.org.au.local/BOSSFunctionLauncher/bossfunctionlaunch.aspx?Function=220948&AppKey=WEBPAS&Username=bbh\\camuser&Password=Ca24Ke72&URN=" + bossnetUR, '_blank', 'height=800, width=800')
}
