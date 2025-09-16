//jsVersion  : V11.03.00
//========================================================================
// Program   : comweb0512.js
//
// Written   : 09.11.0000 WEELEE KOO
//
// Function  : Functions Used in comweb0512
//
// Version   :
//
// V9.11.01 02/04/2009  WEELEE KOO     CAR 196042
//          Created PrintList01()
//
//========================================================================
//   Printer List
//========================================================================
function PrintList01(ActualCode) {
    parent.location.href="comweb05.pbl?reportno=12&template=004&deprt001=" +
                          ActualCode.replace(/ /g,"+")
}

