//jsVersion  : V11.03.00
//
// Source Code:  ./ipad/clinic.js
//
// Modification 
//
// Version         Date        Responsible/Changes Made
//------------------------------------------------------------------------------
// V10.03.01       22.07.2012  B.G.Ackland CAR
//                             Implement Extenable Custom Menu Options
// V10.01.00       13/04/2012  Version change
// V10.00.00       13/04/2012  Created for Mobility Suite
//
//
function CustomMenuOption(MenuOptionNo) {
  switch (parseInt(MenuOptionNo)) {
    case 1:
      PageTitle="Roster";
      PageURL  =webRoot+"/roster/ipadroster/DayRosters.aspx?user="+
                top.getCookie("IBAUserName");
      openDocumentNonZoomable(PageURL,PageTitle);
      break;
    case 2:
      PageTitle="Change Menu";
      PageURL  = IPADPath+"MenuSelector.html";
      openDocumentNonZoomable(PageURL,PageTitle);
      break;
   }
}
