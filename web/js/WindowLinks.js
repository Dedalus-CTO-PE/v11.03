//jsVersion  : V11.03.00
//============================================================
//  Program     :  WindowLinks.js
//
//  Function    :  Functions to Open Various Windows
//                 ShowDischarge
//                 ShowDoctor
//                 PrintInvoice
//                 PrintHFC
//                 PrintLabel
//                 PrintIDSheet
//                 BedTransfer
//                 ShowCoding
//============================================================

function ShowDischarge(linkUrl) {
    Discharge=open(linkUrl,"Discharge",
    "width=640,height=230,scrollbars=no,status=no,toolbar=no,menubar=no");
}

function ShowDoctor(linkurl) {
    Doctor=open(linkurl,"Doctor",
    "width=640,height=250,scrollbars=yes,status=no,toolbar=no,menubar=no");
}

function PrintInvoice(linkurl) {
  InvoicePrint=open(linkurl,"InvoicePrint",
    "width=550,height=500,titlebar=no,scrollbars=no,status=no,toolbar=no,menubar=no");
}
function PrintHFC(linkurl) {
  HFCPrint=open(linkurl,"HFCPrint",
    "width=430,height=160,titlebar=no,scrollbars=no,status=no,toolbar=no,menubar=no");
}
function PrintLabel(linkurl) {
  LabelPrint=open(linkurl,"LabelPrint",
    "width=430,height=250,titlebar=no,scrollbars=no,status=no,toolbar=no,menubar=no");
}
function PrintIDSheet(linkurl) {
  IDSheet=open(linkurl,"IDSheet",
    "width=430,height=160,titlebar=no,scrollbars=no,status=no,toolbar=no,menubar=no");
}
function BedTransfer(linkurl) {
  TransferBed=open(linkurl,"TransferBed",
    "width=640,height=330,titlebar=no,scrollbars=no,status=no,toolbar=no,menubar=no");
}
function ShowCoding(linkurl) {
  CodingWin=open(linkurl,"showCoding",
   "width=700,height=330,titlebar=no,scrollbars=yes,status=no,toolbar=no,menubar=no");
}

function EpisodeDisp(linkurl) {
  location.href=linkurl;
}

function ShowGP(linkurl) {
  Doctor=open(linkurl,"GPDoctor",
 "width=640,height=150,titlebar=no,scrollbars=no,status=no,toolbar=no,menubar=no");
}

function PopAlert(linkurl) {
  Doctor=open(linkurl,"Doctor",
 "width=620,height=320,titlebar=no,scrollbars=yes,status=no,toolbar=no,menubar=no");
}

function MedRec(linkurl) {
  MedRecord=open(linkurl,"MedicalRecord",
 "width=450,height=270,titlebar=no,scrollbars=yes,status=no,toolbar=no,menubar=no");
}

