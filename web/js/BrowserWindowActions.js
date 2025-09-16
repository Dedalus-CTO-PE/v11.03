//jsVersion  : V11.03.00
// --------------------------------------------------------------------------------
// This is a custom version of a Philips Bedside Monitor Interface 
// to enable the system to be deployed inside of the CSC webPAS Mobility Suite.
// It disables all javascript functions with the exception of the GetClientDateTime() function.
// --------------------------------------------------------------------------------
//
//#region Header
// © 2008 Koninklijke Philips Electronics N.V.  All rights reserved.
// Reproduction or transmission in whole or in part, in any form or by any means, 
// electronic, mechanical or otherwise, is prohibited without the prior  written consent of 
// the owner.
// Author:      Neeraj Tomar
// Date:        10/02/2010 03:46:10 AM
//#endregion
// Modification : B.G.Ackland 04/02/2014
//                Customised version for CSC Mobility Suite
//                
//Disables browser back button
function NoBack() {
} 
// Open a Modal Dialog Box to display the product information
function ProductDialog(strUrl, winSettings) {
}
// Open a Modal Dialog Box as MessageBox
function MessageBox(title, message) {
}
// Redirect To Sign Out Page in the same browser window
function GotoSignOut(signOutLink) {
}
// Redirect To page Link in the same browser window
function GotoLink(pageLink) { 
}
// Closing the Model Dialog Window.
function Close() {
}
// Close the browser.
function CloseMe(isCloseSupported, message) {
}
// Set a "wait cursor" when website loading a page
function ShowHourglass() {
}
//Get Client Machine's Date & Time
function GetClientDateTime() {
  var now = new Date();
  var monthnumber = now.getUTCMonth();
  var monthday = now.getUTCDate();
  var year = now.getUTCFullYear();
  var hours = now.getUTCHours();
  var minutes = now.getUTCMinutes();
  var seconds = now.getUTCSeconds();
  monthnumber++;
  var sMonth = monthnumber.toString();
  var sDay = monthday.toString();
  var sHours = hours.toString();
  var sMinutes = minutes.toString();
  var sSeconds = seconds.toString();
  if (monthnumber < 10) {
    sMonth = "0" + sMonth;
  }
  if (monthday < 10) {
    sDay = "0" + sDay;
  }
  if (hours < 10) {
    sHours = "0" + sHours;
  }
  if (minutes < 10) {
    sMinutes = "0" + sMinutes;
  }
  if (seconds < 10) {
    sSeconds = "0" + sSeconds;
  }
  var date = sMonth + "/" + sDay + "/" + year.toString() + " " + sHours + ":" + sMinutes + ":" + sSeconds;
  document.getElementById("_hdnTime").value = date;
  return;
}
