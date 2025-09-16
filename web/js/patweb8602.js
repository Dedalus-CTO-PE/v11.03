//jsVersion  : V11.03.00
//=============================================================================
// Program   : patweb8602.js
//
// Written   : 04.10.2011 Saroeun Soeur
//
// Function  : Standard Functions Used in patweb8602 templates
//
// Version   :
//
// V10.02.01 Saroeun Soeur CAR
//          created js

/******************************************************************************
 * Sort Mrt Location/ Destination
 *****************************************************************************/
function sortLocation(formElement) {
 if(typeof MRTLOCATION_SORT != 'undefined' && MRTLOCATION_SORT == true) {
        sortMrtLocation(formElement);
 }
}

/******************************************************************************
 * Sort by Description ignore "All"
 *****************************************************************************/
function sortMrtLocation(selElem) {
    var tmpAry = new Array();
    var allOptionFound = false;
    var startNumber = 0;
    var ad = selElem[selElem.selectedIndex].text;
    var selectedIndex = 0;
 
    for (var i=0;i<selElem.options.length;i++) {

        if(selElem.options[i].text == "All") {
              allOptionFound = true;
              continue;
        }

        tmpAry[i] = new Array();
        tmpAry[i][1] = selElem.options[i].text;
        //ignore case
        tmpAry[i][0] = selElem.options[i].text.toUpperCase();
        tmpAry[i][2] = selElem.options[i].value;
    }

    tmpAry.sort();

    while (selElem.options.length > 0) {
        selElem.options[0] = null;
    }
 
    if(allOptionFound == true) {
      startNumber = 1;
      selElem.options[0] = new Option("All"," ");
    }  

    for (var i=startNumber;i<tmpAry.length;i++) {
        if(typeof tmpAry[i] != 'undefined' ) {
          if(ad == tmpAry[i][1]) {
           selectedIndex = i;
          }
          var op = new Option(tmpAry[i][1], tmpAry[i][2]);
          selElem.options[i] = op;
        }
    }
    selElem.selectedIndex = selectedIndex;

    return;
}

