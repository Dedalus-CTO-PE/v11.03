//jsVersion  : V11.03.00
//-----------------------------------------------------------------------------;
// HONOS Graphs
//
// Modifications :
//
//----------------------------------------------------------------------
// V10.07.01 05/10/2015  Ania P           CAR 322071
//           Version increment only as requested.
// V10.04.01 01/04/2014  Nicole Torrisi   CAR 269742
//           Added SingleGraphXR() for "Secure" 1-12. Also MultipleGraphXR(),
//           JavaColumnXRMGraph(), MakeDataSetXRM0() ..M1() ..M2() ..M3() etc
// V10.03.05 21/05/2012  Mike Laming      CAR 260105
//           Added SingleGraphXX() for "Secure". Also MultipleGraphXX(),
//           JavaColumnXXMGraph(), MakeDataSetXXM0() ..M1() ..M2() ..M3() etc
// V10.03.04 26/03/2012 Jonathan Henshall CAR 262496
//           Correction to CA and LD graphs
// V10.03.03 13/03/2012 Jonathan Henshall CAR 261762
//           Mods to reinstate y axis min to -1
// V10.03.02 08/03/2012 Jonathan Henshall CAR 261400
//           Removed setGraphBase function
// V10.03.01 13/02/2012 Nicole Torrisi CAR 256501
//           Added 2 datasets to multiple graphs and cosmetic changes to graphs
// V10.00.01 20.12.2011 Jill Parkinson CAR 257304
//           Added setGraphBase function
// V9.12.01  10.06.2009 Jill Habasque CAR 192378
//           Removed 3d, removed total from summary, made y axis 0-12
// V9.11.04  02.04.2009 Jill Habasque CAR 193397
//           Mods for summary graphs to only display records with values
// V9.11.03  05.03.2009 Jill Habasque CAR 187232
//           Added legends
// V9.11.02  17.02.2009 Jill Habasque CAR 187232
//           Mods to set y axis values min -1 and max 4 for multiple graphs
// V9.11.01  06.02.2009 Jill Habasque CAR 187232
//           Mods to set y axis values min -1 and max 4
// V9.09.01  15.08.2007 Jill Habasque CAR 135539
//           Created include
//----------------------------------------------------------------------
function MultipleGraph() {
   if (window.navigator.userAgent.indexOf("MSIE 6.0")>=1
       || window.navigator.userAgent.indexOf("MSIE 7.0")>=1)
     var GraphBase = 'codebase=../../ ';
   else
     var GraphBase = 'codebase=../ ';
  JavaColumnMGraph(GraphBase)
}
function MultipleGraphChild() {
   if (window.navigator.userAgent.indexOf("MSIE 6.0")>=1
       || window.navigator.userAgent.indexOf("MSIE 7.0")>=1)
     var GraphBase = 'codebase=../../ ';
   else
     var GraphBase = 'codebase=../ ';
  JavaColumnCMGraph(GraphBase)
}
function MultipleGraphLD() {
   if (window.navigator.userAgent.indexOf("MSIE 6.0")>=1
       || window.navigator.userAgent.indexOf("MSIE 7.0")>=1)
     var GraphBase = 'codebase=../../ ';
   else
     var GraphBase = 'codebase=../ ';
  JavaColumnLDMGraph(GraphBase)
}
function MultipleGraphXX() {
   if (window.navigator.userAgent.indexOf("MSIE 6.0")>=1
       || window.navigator.userAgent.indexOf("MSIE 7.0")>=1) {
     var GraphBase = 'codebase=../../ ';
   } else {
     var GraphBase = 'codebase=../ '; }
  JavaColumnXXMGraph(GraphBase)
}
function MultipleGraphXR() {
   if (window.navigator.userAgent.indexOf("MSIE 6.0")>=1
       || window.navigator.userAgent.indexOf("MSIE 7.0")>=1) {
     var GraphBase = 'codebase=../../ ';
   } else {
     var GraphBase = 'codebase=../ '; }
  JavaColumnXRMGraph(GraphBase)
}
function SingleGraph(GraphValue) {
   if (window.navigator.userAgent.indexOf("MSIE 6.0")>=1
       || window.navigator.userAgent.indexOf("MSIE 7.0")>=1)
     var GraphBase = 'codebase=../../ ';
   else
     var GraphBase = 'codebase=../ ';
  JavaColumn1Graph(GraphBase)
}
function SummaryGraph(GraphValue) {
   if (window.navigator.userAgent.indexOf("MSIE 6.0")>=1
       || window.navigator.userAgent.indexOf("MSIE 7.0")>=1)
     var GraphBase = 'codebase=../../ ';
   else
     var GraphBase = 'codebase=../ ';
  JavaColumnSGraph(GraphBase)
}
function SummaryMultipleGraph(GraphValue) {
   if (window.navigator.userAgent.indexOf("MSIE 6.0")>=1
       || window.navigator.userAgent.indexOf("MSIE 7.0")>=1)
     var GraphBase = 'codebase=../../ ';
   else
     var GraphBase = 'codebase=../ ';
  JavaColumnSMGraph(GraphBase)
}
function SingleGraphChild(GraphValue) {
   if (window.navigator.userAgent.indexOf("MSIE 6.0")>=1
       || window.navigator.userAgent.indexOf("MSIE 7.0")>=1)
     var GraphBase = 'codebase=../../ ';
   else
     var GraphBase = 'codebase=../ ';
  JavaColumn1GraphChild(GraphBase)
}
function SingleGraphLD(GraphValue) {
   if (window.navigator.userAgent.indexOf("MSIE 6.0")>=1
       || window.navigator.userAgent.indexOf("MSIE 7.0")>=1)
     var GraphBase = 'codebase=../../ ';
   else
     var GraphBase = 'codebase=../ ';
  JavaColumn1GraphLD(GraphBase)
}
function SingleGraphXX(GraphValue) {
   if (window.navigator.userAgent.indexOf("MSIE 6.0")>=1
       || window.navigator.userAgent.indexOf("MSIE 7.0")>=1)
     var GraphBase = 'codebase=../../ ';
   else
     var GraphBase = 'codebase=../ ';
  JavaColumn1GraphXX(GraphBase)
}
function SingleGraphXR(GraphValue) {
   if (window.navigator.userAgent.indexOf("MSIE 6.0")>=1
       || window.navigator.userAgent.indexOf("MSIE 7.0")>=1)
     var GraphBase = 'codebase=../../ ';
   else
     var GraphBase = 'codebase=../ ';
  JavaColumn1GraphXR(GraphBase)
}
function JavaColumnMGraph(GraphBase) {
   GraphColor="blue";
   GraphString = '<table width=100% height=500><tr><td align=center>' +
        '<applet code=javachart.applet.columnApp.class ' +
        GraphBase + 'width=650 height=500>' +
        '<param name=CopyrightNotification ' +
        'value="JavaChart is a copyrighted work, ' +
        'and subject to full legal protection">' +
        '<param name=plotAreaColor value="white">' +
        '<param name=plotAreaLeft value=".05">' +
        '<param name=plotAreaRight value=".9">' +
        '<param name=plotAreaTop value=".8">' +
        '<param name=plotAreaBottom value=".4">' +
        '<param name=xAxisTickLength value="0">' +
        '<param name=dataset0Color value="' + GraphColor + '">' +
        '<param name=yAxisOptions value="noAutoScale">' +
        '<param name=yAxisStart value="-1">' +
        '<param name=yAxisEnd value="4">' +
        '<param name=yAxisTickCount value="5">' +
        '<param name=yAxisLabelCount value="5">' +
        '<param name=dataset0Name value="' +
         document.GraphValues.mhhon006.value + '">' +
        '<param name=dataset0LabelColor value="' + GraphColor + '">' +
        '<param name=dataset1Name value="' +
         document.GraphValues.mhhon006b.value +' ">' +
        '<param name=dataset1LabelColor value="red">' +
        '<param name=dataset2Name value="' +
         document.GraphValues.mhhon006c.value + '">' +
        '<param name=dataset2LabelColor value="green">' +
        '<param name=dataset3Name value="' +
         document.GraphValues.mhhon006d.value + '">' +
        '<param name=dataset3LabelColor value="cyan">' +
        '<param name=dataset4Name value="' +
         document.GraphValues.mhhon006e.value + '">' +
        '<param name=dataset4LabelColor value="yellow">' +
        '<param name=legendOn value="true">' +
        '<param name=legendColor value="white">' +
        '<param name=legendLabelColor value="black">' +
        '<param name=legendHorizontal value="true">' +
        '<param name=legendLabelFont value="Arial,10,1">' +
        '<param name=legendllX value=".0">' +
        '<param name=legendllY value=".85">' +
        '<param name=iconWidth value=".011">' +
        '<param name=iconHeight value=".013">' +
        '<param name=xAxisLabelAngle value="-45">' +
        '<param name=yAxisLabelFont value="Arial,11,1">' +
        '<param name=xAxisLabelFont value="Arial,11,1">' +
        '<param name=titleString value="Individual Rating">' +
        '<param name=titleFont value="Arial,12,1">'
   MakeDatasetM0(0)
   GraphString += Dataset0yValues + Dataset0Labels
   MakeDatasetM1(1)
   GraphString += Dataset0yValues + Dataset0Labels
   MakeDatasetM2(2)
   GraphString += Dataset0yValues + Dataset0Labels
   MakeDatasetM3(3)
   GraphString += Dataset0yValues + Dataset0Labels
   MakeDatasetM4(4)
   GraphString += Dataset0yValues + Dataset0Labels
   GraphString += '</applet>';
   HONOSMultipleGraph.innerHTML = GraphString;
}
function JavaColumnCMGraph(GraphBase) {
   GraphColor="blue";
   GraphString = '<table width=100% height=500><tr><td align=center>' +
        '<applet code=javachart.applet.columnApp.class ' +
        GraphBase + 'width=650 height=500"' +
        '<param name=CopyrightNotification ' +
        'value="JavaChart is a copyrighted work, ' +
        'and subject to full legal protection">' +
        '<param name=plotAreaColor value="white">' +
        '<param name=plotAreaLeft value=".05">' +
        '<param name=plotAreaRight value=".9">' +
        '<param name=plotAreaTop value=".8">' +
        '<param name=plotAreaBottom value=".4">' +
        '<param name=xAxisTickLength value="0">' +
        '<param name=dataset0Color value="' + GraphColor + '">' +
        '<param name=yAxisOptions value="noAutoScale">' +
        '<param name=yAxisStart value="-1">' +
        '<param name=yAxisEnd value="4">' +
        '<param name=yAxisTickCount value="5">' +
        '<param name=yAxisLabelCount value="5">' +
        '<param name=dataset0Name value="' +
         document.GraphValues.mhhon006.value + '">' +
        '<param name=dataset0LabelColor value="' + GraphColor + '">' +
        '<param name=dataset1Name value="' +
         document.GraphValues.mhhon006b.value +' ">' +
        '<param name=dataset1LabelColor value="red">' +
        '<param name=dataset2Name value="' +
         document.GraphValues.mhhon006c.value + '">' +
        '<param name=dataset2LabelColor value="green">' +
        '<param name=dataset3Name value="' +
         document.GraphValues.mhhon006d.value + '">' +
        '<param name=dataset3LabelColor value="purple">' +
        '<param name=dataset4Name value="' +
         document.GraphValues.mhhon006e.value + '">' +
        '<param name=dataset4LabelColor value="orange">' +
        '<param name=legendOn value="true">' +
        '<param name=legendColor value="white">' +
        '<param name=legendLabelColor value="black">' +
        '<param name=legendHorizontal value="true">' +
        '<param name=legendLabelFont value="Arial,10,1">' +
        '<param name=legendllX value=".0">' +
        '<param name=legendllY value=".85">' +
        '<param name=iconWidth value=".011">' +
        '<param name=iconHeight value=".013">' +
        '<param name=xAxisLabelAngle value="-45">' +
        '<param name=yAxisLabelFont value="Arial,11,1">' +
        '<param name=xAxisLabelFont value="Arial,11,1">' +
        '<param name=titleString value="Individual Rating">' +
        '<param name=titleFont value="Arial,12,1">'
   MakeDatasetCM0(0)
   GraphString += Dataset0yValues + Dataset0Labels
   MakeDatasetCM1(1)
   GraphString += Dataset0yValues + Dataset0Labels
   MakeDatasetCM2(2)
   GraphString += Dataset0yValues + Dataset0Labels
   MakeDatasetCM3(3)
   GraphString += Dataset0yValues + Dataset0Labels
   MakeDatasetCM4(4)
   GraphString += Dataset0yValues + Dataset0Labels
   GraphString += '</applet>';
   HONOSMultipleGraph.innerHTML = GraphString;
}
function JavaColumnLDMGraph(GraphBase) {
   GraphColor="blue";
   GraphString = '<table width=100% height=500><tr><td align=center>' +
        '<applet code=javachart.applet.columnApp.class ' +
        GraphBase + 'width=650 height=500>' +
        '<param name=CopyrightNotification ' +
        'value="JavaChart is a copyrighted work, ' +
        'and subject to full legal protection">' +
        '<param name=plotAreaColor value="white">' +
        '<param name=plotAreaLeft value=".05">' +
        '<param name=plotAreaRight value=".9">' +
        '<param name=plotAreaTop value=".8">' +
        '<param name=plotAreaBottom value=".4">' +
        '<param name=xAxisTickLength value="0">' +
        '<param name=dataset0Color value="' + GraphColor + '">' +
        '<param name=yAxisOptions value="noAutoScale">' +
        '<param name=yAxisStart value="-1">' +
        '<param name=yAxisEnd value="4">' +
        '<param name=yAxisTickCount value="5">' +
        '<param name=yAxisLabelCount value="5">' +
        '<param name=dataset0Name value="' +
         document.GraphValues.mhhon006.value + '">' +
        '<param name=dataset0LabelColor value="' + GraphColor + '">' +
        '<param name=dataset1Name value="' +
         document.GraphValues.mhhon006b.value +' ">' +
        '<param name=dataset1LabelColor value="red">' +
        '<param name=dataset2Name value="' +
         document.GraphValues.mhhon006c.value + '">' +
        '<param name=dataset2LabelColor value="green">' +
        '<param name=dataset3Name value="' +
         document.GraphValues.mhhon006d.value + '">' +
        '<param name=dataset3LabelColor value="cyan">' +
        '<param name=dataset4Name value="' +
         document.GraphValues.mhhon006e.value + '">' +
        '<param name=dataset4LabelColor value="yellow">' +
        '<param name=legendOn value="true">' +
        '<param name=legendColor value="white">' +
        '<param name=legendLabelColor value="black">' +
        '<param name=legendHorizontal value="true">' +
        '<param name=legendLabelFont value="Arial,10,1">' +
        '<param name=legendllX value=".0">' +
        '<param name=legendllY value=".85">' +
        '<param name=iconWidth value=".011">' +
        '<param name=iconHeight value=".013">' +
        '<param name=xAxisLabelAngle value="-45">' +
        '<param name=yAxisLabelFont value="Arial,11,1">' +
        '<param name=xAxisLabelFont value="Arial,11,1">' +
        '<param name=titleString value="Individual Rating">' +
        '<param name=titleFont value="Arial,12,1">'
   MakeDatasetLDM0(0)
   GraphString += Dataset0yValues + Dataset0Labels
   MakeDatasetLDM1(1)
   GraphString += Dataset0yValues + Dataset0Labels
   MakeDatasetLDM2(2)
   GraphString += Dataset0yValues + Dataset0Labels
   MakeDatasetLDM3(3)
   GraphString += Dataset0yValues + Dataset0Labels
   MakeDatasetLDM4(4)
   GraphString += Dataset0yValues + Dataset0Labels
   GraphString += '</applet>';
   HONOSMultipleGraph.innerHTML = GraphString;
}
function JavaColumnXXMGraph(GraphBase) {
   GraphColor="blue";
   GraphString = '<table width=100% height=500><tr><td align=center>' +
        '<applet code=javachart.applet.columnApp.class ' +
        GraphBase + 'width=500 height=500>' +
        '<param name=CopyrightNotification ' +
        'value="JavaChart is a copyrighted work, ' +
        'and subject to full legal protection">' +
        '<param name=plotAreaColor value="white">' +
        '<param name=plotAreaLeft value=".05">' +
        '<param name=plotAreaRight value=".9">' +
        '<param name=plotAreaTop value=".8">' +
        '<param name=plotAreaBottom value=".4">' +
        '<param name=xAxisTickLength value="0">' +
        '<param name=dataset0Color value="' + GraphColor + '">' +
        '<param name=yAxisOptions value="noAutoScale">' +
        '<param name=yAxisStart value="-1">' +
        '<param name=yAxisEnd value="4">' +
        '<param name=yAxisTickCount value="5">' +
        '<param name=yAxisLabelCount value="5">' +
        '<param name=dataset0Name value="' +
         document.GraphValues.mhhon006.value + '">' +
        '<param name=dataset0LabelColor value="' + GraphColor + '">' +
        '<param name=dataset1Name value="' +
         document.GraphValues.mhhon006b.value +' ">' +
        '<param name=dataset1LabelColor value="red">' +
        '<param name=dataset2Name value="' +
         document.GraphValues.mhhon006c.value + '">' +
        '<param name=dataset2LabelColor value="green">' +
        '<param name=dataset3Name value="' +
         document.GraphValues.mhhon006d.value + '">' +
        '<param name=dataset3LabelColor value="cyan">' +
        '<param name=dataset4Name value="' +
         document.GraphValues.mhhon006e.value + '">' +
        '<param name=dataset4LabelColor value="yellow">' +
        '<param name=legendOn value="true">' +
        '<param name=legendColor value="white">' +
        '<param name=legendLabelColor value="black">' +
        '<param name=legendHorizontal value="true">' +
        '<param name=legendLabelFont value="Arial,10,1">' +
        '<param name=legendllX value=".0">' +
        '<param name=legendllY value=".85">' +
        '<param name=iconWidth value=".011">' +
        '<param name=iconHeight value=".013">' +
        '<param name=xAxisLabelAngle value="-45">' +
        '<param name=yAxisLabelFont value="Arial,11,1">' +
        '<param name=xAxisLabelFont value="Arial,11,1">' +
        '<param name=titleString value="Individual Rating (A-G)">' +
        '<param name=titleFont value="Arial,12,1">'
   MakeDatasetXXM0(0)
   GraphString += Dataset0yValues + Dataset0Labels
   MakeDatasetXXM1(1)
   GraphString += Dataset0yValues + Dataset0Labels
   MakeDatasetXXM2(2)
   GraphString += Dataset0yValues + Dataset0Labels
   MakeDatasetXXM3(3)
   GraphString += Dataset0yValues + Dataset0Labels
   MakeDatasetXXM4(4)
   GraphString += Dataset0yValues + Dataset0Labels
   GraphString += '</applet>';
   HONOSMultipleGraph.innerHTML = GraphString;
}
function JavaColumnXRMGraph(GraphBase) {
   GraphColor="blue";
   GraphString += '<applet code=javachart.applet.columnApp.class ' +
        GraphBase + 'width=500 height=500>' +
        '<param name=CopyrightNotification ' +
        'value="JavaChart is a copyrighted work, ' +
        'and subject to full legal protection">' +
        '<param name=plotAreaColor value="white">' +
        '<param name=plotAreaLeft value=".05">' +
        '<param name=plotAreaRight value=".9">' +
        '<param name=plotAreaTop value=".8">' +
        '<param name=plotAreaBottom value=".4">' +
        '<param name=xAxisTickLength value="0">' +
        '<param name=dataset0Color value="' + GraphColor + '">' +
        '<param name=yAxisOptions value="noAutoScale">' +
        '<param name=yAxisStart value="-1">' +
        '<param name=yAxisEnd value="4">' +
        '<param name=yAxisTickCount value="5">' +
        '<param name=yAxisLabelCount value="5">' +
        '<param name=dataset0Name value="' +
         document.GraphValues.mhhon006.value + '">' +
        '<param name=dataset0LabelColor value="' + GraphColor + '">' +
        '<param name=dataset1Name value="' +
         document.GraphValues.mhhon006b.value +' ">' +
        '<param name=dataset1LabelColor value="red">' +
        '<param name=dataset2Name value="' +
         document.GraphValues.mhhon006c.value + '">' +
        '<param name=dataset2LabelColor value="green">' +
        '<param name=dataset3Name value="' +
         document.GraphValues.mhhon006d.value + '">' +
        '<param name=dataset3LabelColor value="cyan">' +
        '<param name=dataset4Name value="' +
         document.GraphValues.mhhon006e.value + '">' +
        '<param name=dataset4LabelColor value="yellow">' +
        '<param name=legendOn value="true">' +
        '<param name=legendColor value="white">' +
        '<param name=legendLabelColor value="black">' +
        '<param name=legendHorizontal value="true">' +
        '<param name=legendLabelFont value="Arial,10,1">' +
        '<param name=legendllX value=".0">' +
        '<param name=legendllY value=".85">' +
        '<param name=iconWidth value=".011">' +
        '<param name=iconHeight value=".013">' +
        '<param name=xAxisLabelAngle value="-45">' +
        '<param name=yAxisLabelFont value="Arial,11,1">' +
        '<param name=xAxisLabelFont value="Arial,11,1">' +
        '<param name=titleString value="Individual Rating (1-12)">' +
        '<param name=titleFont value="Arial,12,1">'
   MakeDatasetXRM0(0)
   GraphString += Dataset0yValues + Dataset0Labels
   MakeDatasetXRM1(1)
   GraphString += Dataset0yValues + Dataset0Labels
   MakeDatasetXRM2(2)
   GraphString += Dataset0yValues + Dataset0Labels
   MakeDatasetXRM3(3)
   GraphString += Dataset0yValues + Dataset0Labels
   MakeDatasetXRM4(4)
   GraphString += Dataset0yValues + Dataset0Labels
   GraphString += '</applet>';
   HONOSMultipleGraph.innerHTML = GraphString;
}
function JavaColumn1Graph(GraphBase) {
   GraphColor="blue";
   GraphString = '<table width=100% height=500><tr><td align=center>' +
        '<applet code=javachart.applet.columnApp.class ' +
        GraphBase + 'width=450 height=500>' +
        '<param name=CopyrightNotification ' +
        'value="JavaChart is a copyrighted work, ' +
        'and subject to full legal protection">' +
        '<param name=plotAreaColor value="white">' +
        '<param name=plotAreaLeft value=".05">' +
        '<param name=plotAreaRight value=".9">' +
        '<param name=plotAreaTop value=".8">' +
        '<param name=plotAreaBottom value=".4">' +
        '<param name=legendllX value="10">' +
        '<param name=xAxisTickLength value="0">' +
        '<param name=yAxisOptions value="noAutoScale">' +
        '<param name=yAxisStart value="-1">' +
        '<param name=yAxisEnd value="4">' +
        '<param name=yAxisTickCount value="5">' +
        '<param name=yAxisLabelCount value="5">' +
        '<param name=dataset0Color value="' + GraphColor + '">' +
        '<param name=legendColor value="lightGray">' +
        '<param name=xAxisLabelAngle value="-45">' +
        '<param name=yAxisLabelFont value="Arial,11,1">' +
        '<param name=xAxisLabelFont value="Arial,11,1">' +
        '<param name=titleString value="Individual Rating">' +
        '<param name=titleFont value="Arial,12,1">'
   MakeDataset(0)
   GraphString += Dataset0yValues + Dataset0Labels
   GraphString += '</applet>';
   HONOSSingleGraph.innerHTML = GraphString;
}
function JavaColumn1GraphChild(GraphBase) {
   GraphColor="blue";
   GraphString = '<table width=100% height=500><tr><td align=center>' +
        '<applet code=javachart.applet.columnApp.class ' +
        GraphBase + 'width=450 height=500>' +
        '<param name=CopyrightNotification ' +
        'value="JavaChart is a copyrighted work, ' +
        'and subject to full legal protection">' +
        '<param name=plotAreaColor value="white">' +
        '<param name=plotAreaLeft value=".05">' +
        '<param name=plotAreaRight value=".9">' +
        '<param name=plotAreaTop value=".8">' +
        '<param name=plotAreaBottom value=".4">' +
        '<param name=legendllX value="10">' +
        '<param name=xAxisTickLength value="0">' +
        '<param name=dataset0Color value="' + GraphColor + '">' +
        '<param name=yAxisOptions value="noAutoScale">' +
        '<param name=yAxisStart value="-1">' +
        '<param name=yAxisEnd value="4">' +
        '<param name=yAxisTickCount value="5">' +
        '<param name=yAxisLabelCount value="5">' +
        '<param name=legendColor value="lightGray">' +
        '<param name=xAxisLabelAngle value="-45">' +
        '<param name=yAxisLabelFont value="Arial,11,1">' +
        '<param name=xAxisLabelFont value="Arial,11,1">' +
        '<param name=titleString value="Individual Rating">' +
        '<param name=titleFont value="Arial,12,1">'
   MakeDatasetChild(0)
   GraphString += Dataset0yValues + Dataset0Labels
   GraphString += '</applet>';
   HONOSSingleGraph.innerHTML = GraphString;
}
function JavaColumn1GraphLD(GraphBase) {
   GraphColor="blue";
   GraphString = '<table width=100% height=500><tr><td align=center>' +
        '<applet code=javachart.applet.columnApp.class ' +
        GraphBase + 'width=450 height=500>' +
        '<param name=CopyrightNotification ' +
        'value="JavaChart is a copyrighted work, ' +
        'and subject to full legal protection">' +
        '<param name=plotAreaColor value="white">' +
        '<param name=plotAreaLeft value=".05">' +
        '<param name=plotAreaRight value=".9">' +
        '<param name=plotAreaTop value=".8">' +
        '<param name=plotAreaBottom value=".4">' +
        '<param name=legendllX value="10">' +
        '<param name=xAxisTickLength value="0">' +
        '<param name=dataset0Color value="' + GraphColor + '">' +
        '<param name=legendColor value="lightGray">' +
        '<param name=yAxisOptions value="noAutoScale">' +
        '<param name=yAxisStart value="-1">' +
        '<param name=yAxisEnd value="4">' +
        '<param name=yAxisTickCount value="5">' +
        '<param name=yAxisLabelCount value="5">' +
        '<param name=xAxisLabelAngle value="-45">' +
        '<param name=yAxisLabelFont value="Arial,11,1">' +
        '<param name=xAxisLabelFont value="Arial,11,1">' +
        '<param name=titleString value="Individual Rating">' +
        '<param name=titleFont value="Arial,12,1">'
   MakeDatasetLD(0)
   GraphString += Dataset0yValues + Dataset0Labels
   GraphString += '</applet>';
   HONOSSingleGraph.innerHTML = GraphString;
}
function JavaColumn1GraphXX(GraphBase) {
   GraphColor="blue";
   GraphString = '<table width=100% height=500><tr><td align=center>' +
        '<applet code=javachart.applet.columnApp.class ' +
        GraphBase + 'width=400 height=500>' +
        '<param name=CopyrightNotification ' +
        'value="JavaChart is a copyrighted work, ' +
        'and subject to full legal protection">' +
        '<param name=plotAreaColor value="white">' +
        '<param name=plotAreaLeft value=".05">' +
        '<param name=plotAreaRight value=".9">' +
        '<param name=plotAreaTop value=".8">' +
        '<param name=plotAreaBottom value=".4">' +
        '<param name=legendllX value="10">' +
        '<param name=xAxisTickLength value="0">' +
        '<param name=dataset0Color value="' + GraphColor + '">' +
        '<param name=legendColor value="lightGray">' +
        '<param name=yAxisOptions value="noAutoScale">' +
        '<param name=yAxisStart value="-1">' +
        '<param name=yAxisEnd value="4">' +
        '<param name=yAxisTickCount value="5">' +
        '<param name=yAxisLabelCount value="5">' +
        '<param name=xAxisLabelAngle value="-45">' +
        '<param name=yAxisLabelFont value="Arial,11,1">' +
        '<param name=xAxisLabelFont value="Arial,11,1">' +
        '<param name=titleString value="Individual Rating (A-G)">' +
        '<param name=titleFont value="Arial,12,1">'
   MakeDatasetXX1(0)
   GraphString += Dataset0yValues + Dataset0Labels
   GraphString += '</applet>';
   HONOSSingleGraph.innerHTML = GraphString;
}
function JavaColumn1GraphXR(GraphBase) {
   GraphColor="blue";
   GraphString += '<applet code=javachart.applet.columnApp.class ' +
        GraphBase + 'width=400 height=500>' +
        '<param name=CopyrightNotification ' +
        'value="JavaChart is a copyrighted work, ' +
        'and subject to full legal protection">' +
        '<param name=plotAreaColor value="white">' +
        '<param name=plotAreaLeft value=".05">' +
        '<param name=plotAreaRight value=".9">' +
        '<param name=plotAreaTop value=".8">' +
        '<param name=plotAreaBottom value=".4">' +
        '<param name=legendllX value="10">' +
        '<param name=xAxisTickLength value="0">' +
        '<param name=dataset0Color value="' + GraphColor + '">' +
        '<param name=legendColor value="lightGray">' +
        '<param name=yAxisOptions value="noAutoScale">' +
        '<param name=yAxisStart value="-1">' +
        '<param name=yAxisEnd value="4">' +
        '<param name=yAxisTickCount value="5">' +
        '<param name=yAxisLabelCount value="5">' +
        '<param name=xAxisLabelAngle value="-45">' +
        '<param name=yAxisLabelFont value="Arial,11,1">' +
        '<param name=xAxisLabelFont value="Arial,11,1">' +
        '<param name=titleString value="Individual Rating (1-12)">' +
        '<param name=titleFont value="Arial,12,1">'
   MakeDatasetXR1(0)
   GraphString += Dataset0yValues + Dataset0Labels
   GraphString += '</applet>';
   HONOSSingleGraph.innerHTML = GraphString;
}
function MakeDataset(DataSet) {
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '01 Overact/Aggress/Disrupt,' +
                     '02 No Acc Self Injury,' +
                     '03 Prob Drink/Drug Taking,' +
                     '04 Cognitive Problems,' +
                     '05 Physical Illn/Disability,' +
                     '06 Hallucination/Delusion,' +
                     '07 Depressed Mood,' +
                     '08 Other MH/Behav Problems,' +
                     '09 Problem Relationships,' +
                     '10 Act Daily Living,' +
                     '11 Problem Living condit.,' +
                     '12 Problem Occup Activities' +
                     '">'
   if(document.GraphValues.mhhon031.value==7){
      document.GraphValues.mhhon031.value=-1}
   if(document.GraphValues.mhhon032.value==7){
      document.GraphValues.mhhon032.value=-1}
   if(document.GraphValues.mhhon033.value==7){
      document.GraphValues.mhhon033.value=-1}
   if(document.GraphValues.mhhon034.value==7){
      document.GraphValues.mhhon034.value=-1}
   if(document.GraphValues.mhhon035.value==7){
      document.GraphValues.mhhon035.value=-1}
   if(document.GraphValues.mhhon036.value==7){
      document.GraphValues.mhhon036.value=-1}
   if(document.GraphValues.mhhon037.value==7){
      document.GraphValues.mhhon037.value=-1}
   if(document.GraphValues.mhhon038.value==7){
      document.GraphValues.mhhon038.value=-1}
   if(document.GraphValues.mhhon041.value==7){
      document.GraphValues.mhhon041.value=-1}
   if(document.GraphValues.mhhon042.value==7){
      document.GraphValues.mhhon042.value=-1}
   if(document.GraphValues.mhhon043.value==7){
      document.GraphValues.mhhon043.value=-1}
   if(document.GraphValues.mhhon044.value==7){
      document.GraphValues.mhhon044.value=-1}
   Dataset0yValues += document.GraphValues.mhhon031.value + ',' +
                      document.GraphValues.mhhon032.value + ',' +
                      document.GraphValues.mhhon033.value + ',' +
                      document.GraphValues.mhhon034.value + ',' +
                      document.GraphValues.mhhon035.value + ',' +
                      document.GraphValues.mhhon036.value + ',' +
                      document.GraphValues.mhhon037.value + ',' +
                      document.GraphValues.mhhon038.value + ',' +
                      document.GraphValues.mhhon041.value + ',' +
                      document.GraphValues.mhhon042.value + ',' +
                      document.GraphValues.mhhon043.value + ',' +
                      document.GraphValues.mhhon044.value +
                      '">'
}
function MakeDatasetM0(DataSet) {
   if(document.GraphValues.dataset0.value=="~~~~~~~~~~~~~~~~"){
      return;}
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '01 Overact/Aggress/Disrupt,' +
                     '02 No Acc Self Injury,' +
                     '03 Prob Drink/Drug Taking,' +
                     '04 Cognitive Problems,' +
                     '05 Physical Illn/Disability,' +
                     '06 Hallucination/Delusion,' +
                     '07 Depressed Mood,' +
                     '08 Other MH/Behav Problems,' +
                     '09 Problem Relationships,' +
                     '10 Act Daily Living,' +
                     '11 Problem Living condit.,' +
                     '12 Problem Occup Activities' +
                     '">'
   if(document.GraphValues.mhhon031.value==7){
      document.GraphValues.mhhon031.value=-1}
   if(document.GraphValues.mhhon032.value==7){
      document.GraphValues.mhhon032.value=-1}
   if(document.GraphValues.mhhon033.value==7){
      document.GraphValues.mhhon033.value=-1}
   if(document.GraphValues.mhhon034.value==7){
      document.GraphValues.mhhon034.value=-1}
   if(document.GraphValues.mhhon035.value==7){
      document.GraphValues.mhhon035.value=-1}
   if(document.GraphValues.mhhon036.value==7){
      document.GraphValues.mhhon036.value=-1}
   if(document.GraphValues.mhhon037.value==7){
      document.GraphValues.mhhon037.value=-1}
   if(document.GraphValues.mhhon038.value==7){
      document.GraphValues.mhhon038.value=-1}
   if(document.GraphValues.mhhon041.value==7){
      document.GraphValues.mhhon041.value=-1}
   if(document.GraphValues.mhhon042.value==7){
      document.GraphValues.mhhon042.value=-1}
   if(document.GraphValues.mhhon043.value==7){
      document.GraphValues.mhhon043.value=-1}
   if(document.GraphValues.mhhon044.value==7){
      document.GraphValues.mhhon044.value=-1}
   Dataset0yValues += document.GraphValues.mhhon031.value + ',' +
                      document.GraphValues.mhhon032.value + ',' +
                      document.GraphValues.mhhon033.value + ',' +
                      document.GraphValues.mhhon034.value + ',' +
                      document.GraphValues.mhhon035.value + ',' +
                      document.GraphValues.mhhon036.value + ',' +
                      document.GraphValues.mhhon037.value + ',' +
                      document.GraphValues.mhhon038.value + ',' +
                      document.GraphValues.mhhon041.value + ',' +
                      document.GraphValues.mhhon042.value + ',' +
                      document.GraphValues.mhhon043.value + ',' +
                      document.GraphValues.mhhon044.value +
                      '">'
}
function MakeDatasetM1(DataSet) {
   if(document.GraphValues.dataset1.value=="~~~~~~~~~~~~~~~~"){
      return;}
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '01 Overact/Aggress/Disrupt,' +
                     '02 No Acc Self Injury,' +
                     '03 Prob Drink/Drug Taking,' +
                     '04 Cognitive Problems,' +
                     '05 Physical Illn/Disability,' +
                     '06 Hallucination/Delusion,' +
                     '07 Depressed Mood,' +
                     '08 Other MH/Behav Problems,' +
                     '09 Problem Relationships,' +
                     '10 Act Daily Living,' +
                     '11 Problem Living condit.,' +
                     '12 Problem Occup Activities' +
                     '">'
   if(document.GraphValues.mhhon031b.value==7){
      document.GraphValues.mhhon031b.value=-1}
   if(document.GraphValues.mhhon032b.value==7){
      document.GraphValues.mhhon032b.value=-1}
   if(document.GraphValues.mhhon033b.value==7){
      document.GraphValues.mhhon033b.value=-1}
   if(document.GraphValues.mhhon034b.value==7){
      document.GraphValues.mhhon034b.value=-1}
   if(document.GraphValues.mhhon035b.value==7){
      document.GraphValues.mhhon035b.value=-1}
   if(document.GraphValues.mhhon036b.value==7){
      document.GraphValues.mhhon036b.value=-1}
   if(document.GraphValues.mhhon037b.value==7){
      document.GraphValues.mhhon037b.value=-1}
   if(document.GraphValues.mhhon038b.value==7){
      document.GraphValues.mhhon038b.value=-1}
   if(document.GraphValues.mhhon041b.value==7){
      document.GraphValues.mhhon041b.value=-1}
   if(document.GraphValues.mhhon042b.value==7){
      document.GraphValues.mhhon042b.value=-1}
   if(document.GraphValues.mhhon043b.value==7){
      document.GraphValues.mhhon043b.value=-1}
   if(document.GraphValues.mhhon044b.value==7){
      document.GraphValues.mhhon044b.value=-1}
   Dataset0yValues += document.GraphValues.mhhon031b.value + ',' +
                      document.GraphValues.mhhon032b.value + ',' +
                      document.GraphValues.mhhon033b.value + ',' +
                      document.GraphValues.mhhon034b.value + ',' +
                      document.GraphValues.mhhon035b.value + ',' +
                      document.GraphValues.mhhon036b.value + ',' +
                      document.GraphValues.mhhon037b.value + ',' +
                      document.GraphValues.mhhon038b.value + ',' +
                      document.GraphValues.mhhon041b.value + ',' +
                      document.GraphValues.mhhon042b.value + ',' +
                      document.GraphValues.mhhon043b.value + ',' +
                      document.GraphValues.mhhon044b.value +
                      '">'
}
function MakeDatasetM2(DataSet) {
   if(document.GraphValues.dataset2.value=="~~~~~~~~~~~~~~~~"){
      return;}
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '01 Overact/Aggress/Disrupt,' +
                     '02 No Acc Self Injury,' +
                     '03 Prob Drink/Drug Taking,' +
                     '04 Cognitive Problems,' +
                     '05 Physical Illn/Disability,' +
                     '06 Hallucination/Delusion,' +
                     '07 Depressed Mood,' +
                     '08 Other MH/Behav Problems,' +
                     '09 Problem Relationships,' +
                     '10 Act Daily Living,' +
                     '11 Problem Living condit.,' +
                     '12 Problem Occup Activities' +
                     '">'
   if(document.GraphValues.mhhon031c.value==7){
      document.GraphValues.mhhon031c.value=-1}
   if(document.GraphValues.mhhon032c.value==7){
      document.GraphValues.mhhon032c.value=-1}
   if(document.GraphValues.mhhon033c.value==7){
      document.GraphValues.mhhon033c.value=-1}
   if(document.GraphValues.mhhon034c.value==7){
      document.GraphValues.mhhon034c.value=-1}
   if(document.GraphValues.mhhon035c.value==7){
      document.GraphValues.mhhon035c.value=-1}
   if(document.GraphValues.mhhon036c.value==7){
      document.GraphValues.mhhon036c.value=-1}
   if(document.GraphValues.mhhon037c.value==7){
      document.GraphValues.mhhon037c.value=-1}
   if(document.GraphValues.mhhon038c.value==7){
      document.GraphValues.mhhon038c.value=-1}
   if(document.GraphValues.mhhon041c.value==7){
      document.GraphValues.mhhon041c.value=-1}
   if(document.GraphValues.mhhon042c.value==7){
      document.GraphValues.mhhon042c.value=-1}
   if(document.GraphValues.mhhon043c.value==7){
      document.GraphValues.mhhon043c.value=-1}
   if(document.GraphValues.mhhon044c.value==7){
      document.GraphValues.mhhon044c.value=-1}
   p=document.GraphValues
   p.mhhon031c.value=p.mhhon031c.value-0
   p.mhhon032c.value=p.mhhon032c.value-0
   p.mhhon033c.value=p.mhhon033c.value-0
   p.mhhon034c.value=p.mhhon034c.value-0
   p.mhhon035c.value=p.mhhon035c.value-0
   p.mhhon036c.value=p.mhhon036c.value-0
   p.mhhon037c.value=p.mhhon037c.value-0
   p.mhhon038c.value=p.mhhon038c.value-0
   p.mhhon041c.value=p.mhhon041c.value-0
   p.mhhon042c.value=p.mhhon042c.value-0
   p.mhhon043c.value=p.mhhon043c.value-0
   p.mhhon044c.value=p.mhhon044c.value-0
   Dataset0yValues += document.GraphValues.mhhon031c.value + ',' +
                      document.GraphValues.mhhon032c.value + ',' +
                      document.GraphValues.mhhon033c.value + ',' +
                      document.GraphValues.mhhon034c.value + ',' +
                      document.GraphValues.mhhon035c.value + ',' +
                      document.GraphValues.mhhon036c.value + ',' +
                      document.GraphValues.mhhon037c.value + ',' +
                      document.GraphValues.mhhon038c.value + ',' +
                      document.GraphValues.mhhon041c.value + ',' +
                      document.GraphValues.mhhon042c.value + ',' +
                      document.GraphValues.mhhon043c.value + ',' +
                      document.GraphValues.mhhon044c.value +
                      '">'
}

function MakeDatasetM3(DataSet) {
   if(document.GraphValues.dataset3.value=="~~~~~~~~~~~~~~~~"){
      return;}
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '01 Overact/Aggress/Disrupt,' +
                     '02 No Acc Self Injury,' +
                     '03 Prob Drink/Drug Taking,' +
                     '04 Cognitive Problems,' +
                     '05 Physical Illn/Disability,' +
                     '06 Hallucination/Delusion,' +
                     '07 Depressed Mood,' +
                     '08 Other MH/Behav Problems,' +
                     '09 Problem Relationships,' +
                     '10 Act Daily Living,' +
                     '11 Problem Living condit.,' +
                     '12 Problem Occup Activities' +
                     '">'

   if(document.GraphValues.mhhon031d.value==7){
      document.GraphValues.mhhon031d.value=-1}
   if(document.GraphValues.mhhon032d.value==7){
      document.GraphValues.mhhon032d.value=-1}
   if(document.GraphValues.mhhon033d.value==7){
      document.GraphValues.mhhon033d.value=-1}
   if(document.GraphValues.mhhon034d.value==7){
      document.GraphValues.mhhon034d.value=-1}
   if(document.GraphValues.mhhon035d.value==7){
      document.GraphValues.mhhon035d.value=-1}
   if(document.GraphValues.mhhon036d.value==7){
      document.GraphValues.mhhon036d.value=-1}
   if(document.GraphValues.mhhon037d.value==7){
      document.GraphValues.mhhon037d.value=-1}
   if(document.GraphValues.mhhon038d.value==7){
      document.GraphValues.mhhon038d.value=-1}
   if(document.GraphValues.mhhon041d.value==7){
      document.GraphValues.mhhon041d.value=-1}
   if(document.GraphValues.mhhon042d.value==7){
      document.GraphValues.mhhon042d.value=-1}
   if(document.GraphValues.mhhon043d.value==7){
      document.GraphValues.mhhon043d.value=-1}
   if(document.GraphValues.mhhon044d.value==7){
      document.GraphValues.mhhon044d.value=-1}
   Dataset0yValues += document.GraphValues.mhhon031d.value + ',' +
                      document.GraphValues.mhhon032d.value + ',' +
                      document.GraphValues.mhhon033d.value + ',' +
                      document.GraphValues.mhhon034d.value + ',' +
                      document.GraphValues.mhhon035d.value + ',' +
                      document.GraphValues.mhhon036d.value + ',' +
                      document.GraphValues.mhhon037d.value + ',' +
                      document.GraphValues.mhhon038d.value + ',' +
                      document.GraphValues.mhhon041d.value + ',' +
                      document.GraphValues.mhhon042d.value + ',' +
                      document.GraphValues.mhhon043d.value + ',' +
                      document.GraphValues.mhhon044d.value +
                      '">'

}

function MakeDatasetM4(DataSet) {
   if(document.GraphValues.dataset4.value=="~~~~~~~~~~~~~~~~"){
      return;}
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '01 Overact/Aggress/Disrupt,' +
                     '02 No Acc Self Injury,' +
                     '03 Prob Drink/Drug Taking,' +
                     '04 Cognitive Problems,' +
                     '05 Physical Illn/Disability,' +
                     '06 Hallucination/Delusion,' +
                     '07 Depressed Mood,' +
                     '08 Other MH/Behav Problems,' +
                     '09 Problem Relationships,' +
                     '10 Act Daily Living,' +
                     '11 Problem Living condit.,' +
                     '12 Problem Occup Activities' +
                     '">'
   if(document.GraphValues.mhhon031e.value==7){
      document.GraphValues.mhhon031e.value=-1}
   if(document.GraphValues.mhhon032e.value==7){
      document.GraphValues.mhhon032e.value=-1}
   if(document.GraphValues.mhhon033e.value==7){
      document.GraphValues.mhhon033e.value=-1}
   if(document.GraphValues.mhhon034e.value==7){
      document.GraphValues.mhhon034e.value=-1}
   if(document.GraphValues.mhhon035e.value==7){
      document.GraphValues.mhhon035e.value=-1}
   if(document.GraphValues.mhhon036e.value==7){
      document.GraphValues.mhhon036e.value=-1}
   if(document.GraphValues.mhhon037e.value==7){
      document.GraphValues.mhhon037e.value=-1}
   if(document.GraphValues.mhhon038e.value==7){
      document.GraphValues.mhhon038e.value=-1}
   if(document.GraphValues.mhhon041e.value==7){
      document.GraphValues.mhhon041e.value=-1}
   if(document.GraphValues.mhhon042e.value==7){
      document.GraphValues.mhhon042e.value=-1}
   if(document.GraphValues.mhhon043e.value==7){
      document.GraphValues.mhhon043e.value=-1}
   if(document.GraphValues.mhhon044e.value==7){
      document.GraphValues.mhhon044e.value=-1}
   Dataset0yValues += document.GraphValues.mhhon031e.value + ',' +
                      document.GraphValues.mhhon032e.value + ',' +
                      document.GraphValues.mhhon033e.value + ',' +
                      document.GraphValues.mhhon034e.value + ',' +
                      document.GraphValues.mhhon035e.value + ',' +
                      document.GraphValues.mhhon036e.value + ',' +
                      document.GraphValues.mhhon037e.value + ',' +
                      document.GraphValues.mhhon038e.value + ',' +
                      document.GraphValues.mhhon041e.value + ',' +
                      document.GraphValues.mhhon042e.value + ',' +
                      document.GraphValues.mhhon043e.value + ',' +
                      document.GraphValues.mhhon044e.value +
                      '">'
}

function MakeDatasetChild(DataSet) {
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '01 Disrupt/Antisocial/Aggress,' +
                     '02 Overactive/Attent,' +
                     '03 Non Accident,' +
                     '04 Alc/Substance/Solv,' +
                     '05 Scholastic/Language,' +
                     '06 Physical Ill/Disability,' +
                     '07 Hallucinatation/Delus,' +
                     '08 Non organic Somatic Sym,' +
                     '09 Emotional Related,' +
                     '10 Peer Relationship Prob,' +
                     '11 Self Care/Indep Prob,' +
                     '12 Family/Relationship Prob,' +
                     '13 Poor School Attend,' +
                     '14 Nature of Difficulties,' +
                     '15 Lack of Information' +
                     '">'
   if(document.GraphValues.mhhon045.value==7){
      document.GraphValues.mhhon045.value=-1}
   if(document.GraphValues.mhhon046.value==7){
      document.GraphValues.mhhon046.value=-1}
   if(document.GraphValues.mhhon047.value==7){
      document.GraphValues.mhhon047.value=-1}
   if(document.GraphValues.mhhon048.value==7){
      document.GraphValues.mhhon048.value=-1}
   if(document.GraphValues.mhhon049.value==7){
      document.GraphValues.mhhon049.value=-1}
   if(document.GraphValues.mhhon050.value==7){
      document.GraphValues.mhhon050.value=-1}
   if(document.GraphValues.mhhon051.value==7){
      document.GraphValues.mhhon051.value=-1}
   if(document.GraphValues.mhhon052.value==7){
      document.GraphValues.mhhon052.value=-1}
   if(document.GraphValues.mhhon053.value==7){
      document.GraphValues.mhhon053.value=-1}
   if(document.GraphValues.mhhon054.value==7){
      document.GraphValues.mhhon054.value=-1}
   if(document.GraphValues.mhhon055.value==7){
      document.GraphValues.mhhon055.value=-1}
   if(document.GraphValues.mhhon056.value==7){
      document.GraphValues.mhhon056.value=-1}
   if(document.GraphValues.mhhon057.value==7){
      document.GraphValues.mhhon057.value=-1}
   if(document.GraphValues.mhhon058.value==7){
      document.GraphValues.mhhon058.value=-1}
   if(document.GraphValues.mhhon059.value==7){
      document.GraphValues.mhhon059.value=-1}
   Dataset0yValues += document.GraphValues.mhhon045.value + ',' +
                      document.GraphValues.mhhon046.value + ',' +
                      document.GraphValues.mhhon047.value + ',' +
                      document.GraphValues.mhhon048.value + ',' +
                      document.GraphValues.mhhon049.value + ',' +
                      document.GraphValues.mhhon050.value + ',' +
                      document.GraphValues.mhhon051.value + ',' +
                      document.GraphValues.mhhon052.value + ',' +
                      document.GraphValues.mhhon053.value + ',' +
                      document.GraphValues.mhhon054.value + ',' +
                      document.GraphValues.mhhon055.value + ',' +
                      document.GraphValues.mhhon056.value + ',' +
                      document.GraphValues.mhhon057.value + ',' +
                      document.GraphValues.mhhon058.value + ',' +
                      document.GraphValues.mhhon059.value +
                      '">'
}
function MakeDatasetCM0(DataSet) {
   if(document.GraphValues.dataset0.value=="~~~~~~~~~~~~~~~~"){
      return;}
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '01 Disrupt/Antisocial/Aggress,' +
                     '02 Overactive/Attent,' +
                     '03 Non Accident,' +
                     '04 Alc/Substance/Solv,' +
                     '05 Scholastic/Language,' +
                     '06 Physical Ill/Disability,' +
                     '07 Hallucinatation/Delus,' +
                     '08 Non organic Somatic Sym,' +
                     '09 Emotional Related,' +
                     '10 Peer Relationship Prob,' +
                     '11 Self Care/Indep Prob,' +
                     '12 Family/Relationship Prob,' +
                     '13 Poor School Attend,' +
                     '14 Nature of Difficulties,' +
                     '15 Lack of Information' +
                     '">'
   p=document.GraphValues
   if(p.mhhon045.value==7||p.mhhon045.value==""){
      p.mhhon045.value=-1}
   if(p.mhhon046.value==7||p.mhhon046.value==""){
      p.mhhon046.value=-1}
   if(p.mhhon047.value==7||p.mhhon047.value==""){
      p.mhhon047.value=-1}
   if(p.mhhon048.value==7||p.mhhon048.value==""){
      p.mhhon048.value=-1}
   if(p.mhhon049.value==7||p.mhhon049.value==""){
      p.mhhon049.value=-1}
   if(p.mhhon050.value==7||p.mhhon050.value==""){
      p.mhhon050.value=-1}
   if(p.mhhon051.value==7||p.mhhon051.value==""){
      p.mhhon051.value=-1}
   if(p.mhhon052.value==7||p.mhhon052.value==""){
      p.mhhon052.value=-1}
   if(p.mhhon053.value==7||p.mhhon053.value==""){
      p.mhhon053.value=-1}
   if(p.mhhon054.value==7||p.mhhon054.value==""){
      p.mhhon054.value=-1}
   if(p.mhhon055.value==7||p.mhhon055.value==""){
      p.mhhon055.value=-1}
   if(p.mhhon056.value==7||p.mhhon056.value==""){
      p.mhhon056.value=-1}
   if(p.mhhon057.value==7||p.mhhon057.value==""){
      p.mhhon057.value=-1}
   if(p.mhhon058.value==7||p.mhhon058.value==""){
      p.mhhon058.value=-1}
   if(p.mhhon059.value==7||p.mhhon059.value==""){
      p.mhhon059.value=-1}
   Dataset0yValues += document.GraphValues.mhhon045.value + ',' +
                      document.GraphValues.mhhon046.value + ',' +
                      document.GraphValues.mhhon047.value + ',' +
                      document.GraphValues.mhhon048.value + ',' +
                      document.GraphValues.mhhon049.value + ',' +
                      document.GraphValues.mhhon050.value + ',' +
                      document.GraphValues.mhhon051.value + ',' +
                      document.GraphValues.mhhon052.value + ',' +
                      document.GraphValues.mhhon053.value + ',' +
                      document.GraphValues.mhhon054.value + ',' +
                      document.GraphValues.mhhon055.value + ',' +
                      document.GraphValues.mhhon056.value + ',' +
                      document.GraphValues.mhhon057.value + ',' +
                      document.GraphValues.mhhon058.value + ',' +
                      document.GraphValues.mhhon059.value +
                      '">'
}
function MakeDatasetCM1(DataSet) {
   if(document.GraphValues.dataset1.value=="~~~~~~~~~~~~~~~~"){
      return;}
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '01 Disrupt/Antisocial/Aggress,' +
                     '02 Overactive/Attent,' +
                     '03 Non Accident,' +
                     '04 Alc/Substance/Solv,' +
                     '05 Scholastic/Language,' +
                     '06 Physical Ill/Disability,' +
                     '07 Hallucinatation/Delus,' +
                     '08 Non organic Somatic Sym,' +
                     '09 Emotional Related,' +
                     '10 Peer Relationship Prob,' +
                     '11 Self Care/Indep Prob,' +
                     '12 Family/Relationship Prob,' +
                     '13 Poor School Attend,' +
                     '14 Nature of Difficulties,' +
                     '15 Lack of Information' +
                     '">'
   p=document.GraphValues
   if(p.mhhon045b.value==7||p.mhhon045b.value==""){
      p.mhhon045b.value=-1}
   if(p.mhhon046b.value==7||p.mhhon046b.value==""){
      p.mhhon046b.value=-1}
   if(p.mhhon047b.value==7||p.mhhon047b.value==""){
      p.mhhon047b.value=-1}
   if(p.mhhon048b.value==7||p.mhhon048b.value==""){
      p.mhhon048b.value=-1}
   if(p.mhhon049b.value==7||p.mhhon049b.value==""){
      p.mhhon049b.value=-1}
   if(p.mhhon050b.value==7||p.mhhon050b.value==""){
      p.mhhon050b.value=-1}
   if(p.mhhon051b.value==7||p.mhhon051b.value==""){
      p.mhhon051b.value=-1}
   if(p.mhhon052b.value==7||p.mhhon052b.value==""){
      p.mhhon052b.value=-1}
   if(p.mhhon053b.value==7||p.mhhon053b.value==""){
      p.mhhon053b.value=-1}
   if(p.mhhon054b.value==7||p.mhhon054b.value==""){
      p.mhhon054b.value=-1}
   if(p.mhhon055b.value==7||p.mhhon055b.value==""){
      p.mhhon055b.value=-1}
   if(p.mhhon056b.value==7||p.mhhon056b.value==""){
      p.mhhon056b.value=-1}
   if(p.mhhon057b.value==7||p.mhhon057b.value==""){
      p.mhhon057b.value=-1}
   if(p.mhhon058b.value==7||p.mhhon058b.value==""){
      p.mhhon058b.value=-1}
   if(p.mhhon059b.value==7||p.mhhon059b.value==""){
      p.mhhon059b.value=-1}
   Dataset0yValues += document.GraphValues.mhhon045b.value + ',' +
                      document.GraphValues.mhhon046b.value + ',' +
                      document.GraphValues.mhhon047b.value + ',' +
                      document.GraphValues.mhhon048b.value + ',' +
                      document.GraphValues.mhhon049b.value + ',' +
                      document.GraphValues.mhhon050b.value + ',' +
                      document.GraphValues.mhhon051b.value + ',' +
                      document.GraphValues.mhhon052b.value + ',' +
                      document.GraphValues.mhhon053b.value + ',' +
                      document.GraphValues.mhhon054b.value + ',' +
                      document.GraphValues.mhhon055b.value + ',' +
                      document.GraphValues.mhhon056b.value + ',' +
                      document.GraphValues.mhhon057b.value + ',' +
                      document.GraphValues.mhhon058b.value + ',' +
                      document.GraphValues.mhhon059b.value +
                      '">'
}
function MakeDatasetCM2(DataSet) {
   if(document.GraphValues.dataset2.value=="~~~~~~~~~~~~~~~~"){
      return;}
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '01 Disrupt/Antisocial/Aggress,' +
                     '02 Overactive/Attent,' +
                     '03 Non Accident,' +
                     '04 Alc/Substance/Solv,' +
                     '05 Scholastic/Language,' +
                     '06 Physical Ill/Disability,' +
                     '07 Hallucinatation/Delus,' +
                     '08 Non organic Somatic Sym,' +
                     '09 Emotional Related,' +
                     '10 Peer Relationship Prob,' +
                     '11 Self Care/Indep Prob,' +
                     '12 Family/Relationship Prob,' +
                     '13 Poor School Attend,' +
                     '14 Nature of Difficulties,' +
                     '15 Lack of Information' +
                     '">'
   p=document.GraphValues
   if(p.mhhon045c.value==7||p.mhhon045c.value==""){
      p.mhhon045c.value=-1}
   if(p.mhhon046c.value==7||p.mhhon046c.value==""){
      p.mhhon046c.value=-1}
   if(p.mhhon047c.value==7||p.mhhon047c.value==""){
      p.mhhon047c.value=-1}
   if(p.mhhon048c.value==7||p.mhhon048c.value==""){
      p.mhhon048c.value=-1}
   if(p.mhhon049c.value==7||p.mhhon049c.value==""){
      p.mhhon049c.value=-1}
   if(p.mhhon050c.value==7||p.mhhon050c.value==""){
      p.mhhon050c.value=-1}
   if(p.mhhon051c.value==7||p.mhhon051c.value==""){
      p.mhhon051c.value=-1}
   if(p.mhhon052c.value==7||p.mhhon052c.value==""){
      p.mhhon052c.value=-1}
   if(p.mhhon053c.value==7||p.mhhon053c.value==""){
      p.mhhon053c.value=-1}
   if(p.mhhon054c.value==7||p.mhhon054c.value==""){
      p.mhhon054c.value=-1}
   if(p.mhhon055c.value==7||p.mhhon055c.value==""){
      p.mhhon055c.value=-1}
   if(p.mhhon056c.value==7||p.mhhon056c.value==""){
      p.mhhon056c.value=-1}
   if(p.mhhon057c.value==7||p.mhhon057c.value==""){
      p.mhhon057c.value=-1}
   if(p.mhhon058c.value==7||p.mhhon058c.value==""){
      p.mhhon058c.value=-1}
   if(p.mhhon059c.value==7||p.mhhon059c.value==""){
      p.mhhon059c.value=-1}
   Dataset0yValues += document.GraphValues.mhhon045c.value + ',' +
                      document.GraphValues.mhhon046c.value + ',' +
                      document.GraphValues.mhhon047c.value + ',' +
                      document.GraphValues.mhhon048c.value + ',' +
                      document.GraphValues.mhhon049c.value + ',' +
                      document.GraphValues.mhhon050c.value + ',' +
                      document.GraphValues.mhhon051c.value + ',' +
                      document.GraphValues.mhhon052c.value + ',' +
                      document.GraphValues.mhhon053c.value + ',' +
                      document.GraphValues.mhhon054c.value + ',' +
                      document.GraphValues.mhhon055c.value + ',' +
                      document.GraphValues.mhhon056c.value + ',' +
                      document.GraphValues.mhhon057c.value + ',' +
                      document.GraphValues.mhhon058c.value + ',' +
                      document.GraphValues.mhhon059c.value +
                      '">'
}

function MakeDatasetCM3(DataSet) {
   if(document.GraphValues.dataset3.value=="~~~~~~~~~~~~~~~~"){
      return;}
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '01 Disrupt/Antisocial/Aggress,' +
                     '02 Overactive/Attent,' +
                     '03 Non Accident,' +
                     '04 Alc/Substance/Solv,' +
                     '05 Scholastic/Language,' +
                     '06 Physical Ill/Disability,' +
                     '07 Hallucinatation/Delus,' +
                     '08 Non organic Somatic Sym,' +
                     '09 Emotional Related,' +
                     '10 Peer Relationship Prob,' +
                     '11 Self Care/Indep Prob,' +
                     '12 Family/Relationship Prob,' +
                     '13 Poor School Attend,' +
                     '14 Nature of Difficulties,' +
                     '15 Lack of Information' +
                     '">'
   p=document.GraphValues
   if(p.mhhon045d.value==7||p.mhhon045d.value==""){
      p.mhhon045d.value=-1}
   if(p.mhhon046d.value==7||p.mhhon046d.value==""){
      p.mhhon046d.value=-1}
   if(p.mhhon047d.value==7||p.mhhon047d.value==""){
      p.mhhon047d.value=-1}
   if(p.mhhon048d.value==7||p.mhhon048d.value==""){
      p.mhhon048d.value=-1}
   if(p.mhhon049d.value==7||p.mhhon049d.value==""){
      p.mhhon049d.value=-1}
   if(p.mhhon050d.value==7||p.mhhon050d.value==""){
      p.mhhon050d.value=-1}
   if(p.mhhon051d.value==7||p.mhhon051d.value==""){
      p.mhhon051d.value=-1}
   if(p.mhhon052d.value==7||p.mhhon052d.value==""){
      p.mhhon052d.value=-1}
   if(p.mhhon053d.value==7||p.mhhon053d.value==""){
      p.mhhon053d.value=-1}
   if(p.mhhon054d.value==7||p.mhhon054d.value==""){
      p.mhhon054d.value=-1}
   if(p.mhhon055d.value==7||p.mhhon055d.value==""){
      p.mhhon055d.value=-1}
   if(p.mhhon056d.value==7||p.mhhon056d.value==""){
      p.mhhon056d.value=-1}
   if(p.mhhon057d.value==7||p.mhhon057d.value==""){
      p.mhhon057d.value=-1}
   if(p.mhhon058d.value==7||p.mhhon058d.value==""){
      p.mhhon058d.value=-1}
   if(p.mhhon059d.value==7||p.mhhon059d.value==""){
      p.mhhon059d.value=-1}
   Dataset0yValues += document.GraphValues.mhhon045d.value + ',' +
                      document.GraphValues.mhhon046d.value + ',' +
                      document.GraphValues.mhhon047d.value + ',' +
                      document.GraphValues.mhhon048d.value + ',' +
                      document.GraphValues.mhhon049d.value + ',' +
                      document.GraphValues.mhhon050d.value + ',' +
                      document.GraphValues.mhhon051d.value + ',' +
                      document.GraphValues.mhhon052d.value + ',' +
                      document.GraphValues.mhhon053d.value + ',' +
                      document.GraphValues.mhhon054d.value + ',' +
                      document.GraphValues.mhhon055d.value + ',' +
                      document.GraphValues.mhhon056d.value + ',' +
                      document.GraphValues.mhhon057d.value + ',' +
                      document.GraphValues.mhhon058d.value + ',' +
                      document.GraphValues.mhhon059d.value +
                      '">'
}

function MakeDatasetCM4(DataSet) {
   if(document.GraphValues.dataset4.value=="~~~~~~~~~~~~~~~~"){
      return;}
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '01 Disrupt/Antisocial/Aggress,' +
                     '02 Overactive/Attent,' +
                     '03 Non Accident,' +
                     '04 Alc/Substance/Solv,' +
                     '05 Scholastic/Language,' +
                     '06 Physical Ill/Disability,' +
                     '07 Hallucinatation/Delus,' +
                     '08 Non organic Somatic Sym,' +
                     '09 Emotional Related,' +
                     '10 Peer Relationship Prob,' +
                     '11 Self Care/Indep Prob,' +
                     '12 Family/Relationship Prob,' +
                     '13 Poor School Attend,' +
                     '14 Nature of Difficulties,' +
                     '15 Lack of Information' +
                     '">'
   p=document.GraphValues
   if(p.mhhon045e.value==7||p.mhhon045e.value==""){
      p.mhhon045e.value=-1}
   if(p.mhhon046e.value==7||p.mhhon046e.value==""){
      p.mhhon046e.value=-1}
   if(p.mhhon047e.value==7||p.mhhon047e.value==""){
      p.mhhon047e.value=-1}
   if(p.mhhon048e.value==7||p.mhhon048e.value==""){
      p.mhhon048e.value=-1}
   if(p.mhhon049e.value==7||p.mhhon049e.value==""){
      p.mhhon049e.value=-1}
   if(p.mhhon050e.value==7||p.mhhon050e.value==""){
      p.mhhon050e.value=-1}
   if(p.mhhon051e.value==7||p.mhhon051e.value==""){
      p.mhhon051e.value=-1}
   if(p.mhhon052e.value==7||p.mhhon052e.value==""){
      p.mhhon052e.value=-1}
   if(p.mhhon053e.value==7||p.mhhon053e.value==""){
      p.mhhon053e.value=-1}
   if(p.mhhon054e.value==7||p.mhhon054e.value==""){
      p.mhhon054e.value=-1}
   if(p.mhhon055e.value==7||p.mhhon055e.value==""){
      p.mhhon055e.value=-1}
   if(p.mhhon056e.value==7||p.mhhon056e.value==""){
      p.mhhon056e.value=-1}
   if(p.mhhon057e.value==7||p.mhhon057e.value==""){
      p.mhhon057e.value=-1}
   if(p.mhhon058e.value==7||p.mhhon058e.value==""){
      p.mhhon058e.value=-1}
   if(p.mhhon059e.value==7||p.mhhon059e.value==""){
      p.mhhon059e.value=-1}
   Dataset0yValues += document.GraphValues.mhhon045e.value + ',' +
                      document.GraphValues.mhhon046e.value + ',' +
                      document.GraphValues.mhhon047e.value + ',' +
                      document.GraphValues.mhhon048e.value + ',' +
                      document.GraphValues.mhhon049e.value + ',' +
                      document.GraphValues.mhhon050e.value + ',' +
                      document.GraphValues.mhhon051e.value + ',' +
                      document.GraphValues.mhhon052e.value + ',' +
                      document.GraphValues.mhhon053e.value + ',' +
                      document.GraphValues.mhhon054e.value + ',' +
                      document.GraphValues.mhhon055e.value + ',' +
                      document.GraphValues.mhhon056e.value + ',' +
                      document.GraphValues.mhhon057e.value + ',' +
                      document.GraphValues.mhhon058e.value + ',' +
                      document.GraphValues.mhhon059e.value +
                      '">'
}

function MakeDatasetLD(DataSet) {
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '01 Behaviour Prob Others,' +
                     '02 Behaviour Prob Self,' +
                     '03 Other MH Behaviour Prob,' +
                     '04 Attention and Conc,' +
                     '05 Memory and Orientation,' +
                     '06 Communication(Understand),' +
                     '07 Communication(Express),' +
                     '08 Hallucination/Delusion,' +
                     '09 Mood Changes,' +
                     '10 Problems Eating/Drinking,' +
                     '11 Problems Sleeping,' +
                     '12 Physical Problems,' +
                     '13 Seizures,' +
                     '14 Act Daily Living at home,' +
                     '15 Act Daily Living Outside,' +
                     '16 Level of Self Care,' +
                     '17 Problem Relationship,' +
                     '18 Problem Occup Act' +
                     '">'
   if(document.GraphValues.mhhon060.value==7){
      document.GraphValues.mhhon060.value=-1}
   if(document.GraphValues.mhhon061.value==7){
      document.GraphValues.mhhon061.value=-1}
   if(document.GraphValues.mhhon062.value==7){
      document.GraphValues.mhhon062.value=-1}
   if(document.GraphValues.mhhon063.value==7){
      document.GraphValues.mhhon063.value=-1}
   if(document.GraphValues.mhhon064.value==7){
      document.GraphValues.mhhon064.value=-1}
   if(document.GraphValues.mhhon065.value==7){
      document.GraphValues.mhhon065.value=-1}
   if(document.GraphValues.mhhon066.value==7){
      document.GraphValues.mhhon066.value=-1}
   if(document.GraphValues.mhhon067.value==7){
      document.GraphValues.mhhon067.value=-1}
   if(document.GraphValues.mhhon068.value==7){
      document.GraphValues.mhhon068.value=-1}
   if(document.GraphValues.mhhon069.value==7){
      document.GraphValues.mhhon069.value=-1}
   if(document.GraphValues.mhhon070.value==7){
      document.GraphValues.mhhon070.value=-1}
   if(document.GraphValues.mhhon071.value==7){
      document.GraphValues.mhhon071.value=-1}
   if(document.GraphValues.mhhon072.value==7){
      document.GraphValues.mhhon072.value=-1}
   if(document.GraphValues.mhhon073.value==7){
      document.GraphValues.mhhon073.value=-1}
   if(document.GraphValues.mhhon074.value==7){
      document.GraphValues.mhhon074.value=-1}
   if(document.GraphValues.mhhon075.value==7){
      document.GraphValues.mhhon075.value=-1}
   if(document.GraphValues.mhhon076.value==7){
      document.GraphValues.mhhon076.value=-1}
   if(document.GraphValues.mhhon077.value==7){
      document.GraphValues.mhhon077.value=-1}
   Dataset0yValues += document.GraphValues.mhhon060.value + ',' +
                      document.GraphValues.mhhon061.value + ',' +
                      document.GraphValues.mhhon062.value + ',' +
                      document.GraphValues.mhhon063.value + ',' +
                      document.GraphValues.mhhon064.value + ',' +
                      document.GraphValues.mhhon065.value + ',' +
                      document.GraphValues.mhhon066.value + ',' +
                      document.GraphValues.mhhon067.value + ',' +
                      document.GraphValues.mhhon068.value + ',' +
                      document.GraphValues.mhhon069.value + ',' +
                      document.GraphValues.mhhon070.value + ',' +
                      document.GraphValues.mhhon071.value + ',' +
                      document.GraphValues.mhhon072.value + ',' +
                      document.GraphValues.mhhon073.value + ',' +
                      document.GraphValues.mhhon074.value + ',' +
                      document.GraphValues.mhhon075.value + ',' +
                      document.GraphValues.mhhon076.value + ',' +
                      document.GraphValues.mhhon077.value +
                      '">'
}
function MakeDatasetLDM0(DataSet) {
   if(document.GraphValues.dataset0.value=="~~~~~~~~~~~~~~~~"){
      return;}
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '01 Behaviour Prob Others,' +
                     '02 Behaviour Prob Self,' +
                     '03 Other MH Behaviour Prob,' +
                     '04 Attention and Conc,' +
                     '05 Memory and Orientation,' +
                     '06 Communication(Understand),' +
                     '07 Communication(Express),' +
                     '08 Hallucination/Delusion,' +
                     '09 Mood Changes,' +
                     '10 Problems Eating/Drinking,' +
                     '11 Problems Sleeping,' +
                     '12 Physical Problems,' +
                     '13 Seizures,' +
                     '14 Act Daily Living at home,' +
                     '15 Act Daily Living Outside,' +
                     '16 Level of Self Care,' +
                     '17 Problem Relationship,' +
                     '18 Problem Occup Act' +
                     '">'
   if(document.GraphValues.mhhon060.value==7){
      document.GraphValues.mhhon060.value=-1}
   if(document.GraphValues.mhhon061.value==7){
      document.GraphValues.mhhon061.value=-1}
   if(document.GraphValues.mhhon062.value==7){
      document.GraphValues.mhhon062.value=-1}
   if(document.GraphValues.mhhon063.value==7){
      document.GraphValues.mhhon063.value=-1}
   if(document.GraphValues.mhhon064.value==7){
      document.GraphValues.mhhon064.value=-1}
   if(document.GraphValues.mhhon065.value==7){
      document.GraphValues.mhhon065.value=-1}
   if(document.GraphValues.mhhon066.value==7){
      document.GraphValues.mhhon066.value=-1}
   if(document.GraphValues.mhhon067.value==7){
      document.GraphValues.mhhon067.value=-1}
   if(document.GraphValues.mhhon068.value==7){
      document.GraphValues.mhhon068.value=-1}
   if(document.GraphValues.mhhon069.value==7){
      document.GraphValues.mhhon069.value=-1}
   if(document.GraphValues.mhhon070.value==7){
      document.GraphValues.mhhon070.value=-1}
   if(document.GraphValues.mhhon071.value==7){
      document.GraphValues.mhhon071.value=-1}
   if(document.GraphValues.mhhon072.value==7){
      document.GraphValues.mhhon072.value=-1}
   if(document.GraphValues.mhhon073.value==7){
      document.GraphValues.mhhon073.value=-1}
   if(document.GraphValues.mhhon074.value==7){
      document.GraphValues.mhhon074.value=-1}
   if(document.GraphValues.mhhon075.value==7){
      document.GraphValues.mhhon075.value=-1}
   if(document.GraphValues.mhhon076.value==7){
      document.GraphValues.mhhon076.value=-1}
   if(document.GraphValues.mhhon077.value==7){
      document.GraphValues.mhhon077.value=-1}
   Dataset0yValues += document.GraphValues.mhhon060.value + ',' +
                      document.GraphValues.mhhon061.value + ',' +
                      document.GraphValues.mhhon062.value + ',' +
                      document.GraphValues.mhhon063.value + ',' +
                      document.GraphValues.mhhon064.value + ',' +
                      document.GraphValues.mhhon065.value + ',' +
                      document.GraphValues.mhhon066.value + ',' +
                      document.GraphValues.mhhon067.value + ',' +
                      document.GraphValues.mhhon068.value + ',' +
                      document.GraphValues.mhhon069.value + ',' +
                      document.GraphValues.mhhon070.value + ',' +
                      document.GraphValues.mhhon071.value + ',' +
                      document.GraphValues.mhhon072.value + ',' +
                      document.GraphValues.mhhon073.value + ',' +
                      document.GraphValues.mhhon074.value + ',' +
                      document.GraphValues.mhhon075.value + ',' +
                      document.GraphValues.mhhon076.value + ',' +
                      document.GraphValues.mhhon077.value +
                      '">'
}
function MakeDatasetLDM1(DataSet) {
   if(document.GraphValues.dataset1.value=="~~~~~~~~~~~~~~~~"){
      return;}
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '01 Behaviour Prob Others,' +
                     '02 Behaviour Prob Self,' +
                     '03 Other MH Behaviour Prob,' +
                     '04 Attention and Conc,' +
                     '05 Memory and Orientation,' +
                     '06 Communication(Understand),' +
                     '07 Communication(Express),' +
                     '08 Hallucination/Delusion,' +
                     '09 Mood Changes,' +
                     '10 Problems Eating/Drinking,' +
                     '11 Problems Sleeping,' +
                     '12 Physical Problems,' +
                     '13 Seizures,' +
                     '14 Act Daily Living at home,' +
                     '15 Act Daily Living Outside,' +
                     '16 Level of Self Care,' +
                     '17 Problem Relationship,' +
                     '18 Problem Occup Act' +
                     '">'
   if(document.GraphValues.mhhon060b.value==7){
      document.GraphValues.mhhon060b.value=-1}
   if(document.GraphValues.mhhon061b.value==7){
      document.GraphValues.mhhon061b.value=-1}
   if(document.GraphValues.mhhon062b.value==7){
      document.GraphValues.mhhon062b.value=-1}
   if(document.GraphValues.mhhon063b.value==7){
      document.GraphValues.mhhon063b.value=-1}
   if(document.GraphValues.mhhon064b.value==7){
      document.GraphValues.mhhon064b.value=-1}
   if(document.GraphValues.mhhon065b.value==7){
      document.GraphValues.mhhon065b.value=-1}
   if(document.GraphValues.mhhon066b.value==7){
      document.GraphValues.mhhon066b.value=-1}
   if(document.GraphValues.mhhon067b.value==7){
      document.GraphValues.mhhon067b.value=-1}
   if(document.GraphValues.mhhon068b.value==7){
      document.GraphValues.mhhon068b.value=-1}
   if(document.GraphValues.mhhon069b.value==7){
      document.GraphValues.mhhon069b.value=-1}
   if(document.GraphValues.mhhon070b.value==7){
      document.GraphValues.mhhon070b.value=-1}
   if(document.GraphValues.mhhon071b.value==7){
      document.GraphValues.mhhon071b.value=-1}
   if(document.GraphValues.mhhon072b.value==7){
      document.GraphValues.mhhon072b.value=-1}
   if(document.GraphValues.mhhon073b.value==7){
      document.GraphValues.mhhon073b.value=-1}
   if(document.GraphValues.mhhon074b.value==7){
      document.GraphValues.mhhon074b.value=-1}
   if(document.GraphValues.mhhon075b.value==7){
      document.GraphValues.mhhon075b.value=-1}
   if(document.GraphValues.mhhon076b.value==7){
      document.GraphValues.mhhon076b.value=-1}
   if(document.GraphValues.mhhon077b.value==7){
      document.GraphValues.mhhon077b.value=-1}
   Dataset0yValues += document.GraphValues.mhhon060b.value + ',' +
                      document.GraphValues.mhhon061b.value + ',' +
                      document.GraphValues.mhhon062b.value + ',' +
                      document.GraphValues.mhhon063b.value + ',' +
                      document.GraphValues.mhhon064b.value + ',' +
                      document.GraphValues.mhhon065b.value + ',' +
                      document.GraphValues.mhhon066b.value + ',' +
                      document.GraphValues.mhhon067b.value + ',' +
                      document.GraphValues.mhhon068b.value + ',' +
                      document.GraphValues.mhhon069b.value + ',' +
                      document.GraphValues.mhhon070b.value + ',' +
                      document.GraphValues.mhhon071b.value + ',' +
                      document.GraphValues.mhhon072b.value + ',' +
                      document.GraphValues.mhhon073b.value + ',' +
                      document.GraphValues.mhhon074b.value + ',' +
                      document.GraphValues.mhhon075b.value + ',' +
                      document.GraphValues.mhhon076b.value + ',' +
                      document.GraphValues.mhhon077b.value +
                      '">'
}
function MakeDatasetLDM2(DataSet) {
   if(document.GraphValues.dataset2.value=="~~~~~~~~~~~~~~~~"){
      return;}
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '01 Behaviour Prob Others,' +
                     '02 Behaviour Prob Self,' +
                     '03 Other MH Behaviour Prob,' +
                     '04 Attention and Conc,' +
                     '05 Memory and Orientation,' +
                     '06 Communication(Understand),' +
                     '07 Communication(Express),' +
                     '08 Hallucination/Delusion,' +
                     '09 Mood Changes,' +
                     '10 Problems Eating/Drinking,' +
                     '11 Problems Sleeping,' +
                     '12 Physical Problems,' +
                     '13 Seizures,' +
                     '14 Act Daily Living at home,' +
                     '15 Act Daily Living Outside,' +
                     '16 Level of Self Care,' +
                     '17 Problem Relationship,' +
                     '18 Problem Occup Act' +
                     '">'
   if(document.GraphValues.mhhon060c.value==7){
      document.GraphValues.mhhon060c.value=-1}
   if(document.GraphValues.mhhon061c.value==7){
      document.GraphValues.mhhon061c.value=-1}
   if(document.GraphValues.mhhon062c.value==7){
      document.GraphValues.mhhon062c.value=-1}
   if(document.GraphValues.mhhon063c.value==7){
      document.GraphValues.mhhon063c.value=-1}
   if(document.GraphValues.mhhon064c.value==7){
      document.GraphValues.mhhon064c.value=-1}
   if(document.GraphValues.mhhon065c.value==7){
      document.GraphValues.mhhon065c.value=-1}
   if(document.GraphValues.mhhon066c.value==7){
      document.GraphValues.mhhon066c.value=-1}
   if(document.GraphValues.mhhon067c.value==7){
      document.GraphValues.mhhon067c.value=-1}
   if(document.GraphValues.mhhon068c.value==7){
      document.GraphValues.mhhon068c.value=-1}
   if(document.GraphValues.mhhon069c.value==7){
      document.GraphValues.mhhon069c.value=-1}
   if(document.GraphValues.mhhon070c.value==7){
      document.GraphValues.mhhon070c.value=-1}
   if(document.GraphValues.mhhon071c.value==7){
      document.GraphValues.mhhon071c.value=-1}
   if(document.GraphValues.mhhon072c.value==7){
      document.GraphValues.mhhon072c.value=-1}
   if(document.GraphValues.mhhon073c.value==7){
      document.GraphValues.mhhon073c.value=-1}
   if(document.GraphValues.mhhon074c.value==7){
      document.GraphValues.mhhon074c.value=-1}
   if(document.GraphValues.mhhon075c.value==7){
      document.GraphValues.mhhon075c.value=-1}
   if(document.GraphValues.mhhon076c.value==7){
      document.GraphValues.mhhon076c.value=-1}
   if(document.GraphValues.mhhon077c.value==7){
      document.GraphValues.mhhon077c.value=-1}
   Dataset0yValues += document.GraphValues.mhhon060c.value + ',' +
                      document.GraphValues.mhhon061c.value + ',' +
                      document.GraphValues.mhhon062c.value + ',' +
                      document.GraphValues.mhhon063c.value + ',' +
                      document.GraphValues.mhhon064c.value + ',' +
                      document.GraphValues.mhhon065c.value + ',' +
                      document.GraphValues.mhhon066c.value + ',' +
                      document.GraphValues.mhhon067c.value + ',' +
                      document.GraphValues.mhhon068c.value + ',' +
                      document.GraphValues.mhhon069c.value + ',' +
                      document.GraphValues.mhhon070c.value + ',' +
                      document.GraphValues.mhhon071c.value + ',' +
                      document.GraphValues.mhhon072c.value + ',' +
                      document.GraphValues.mhhon073c.value + ',' +
                      document.GraphValues.mhhon074c.value + ',' +
                      document.GraphValues.mhhon075c.value + ',' +
                      document.GraphValues.mhhon076c.value + ',' +
                      document.GraphValues.mhhon077c.value +
                      '">'
}

function MakeDatasetLDM3(DataSet) {
   if(document.GraphValues.dataset3.value=="~~~~~~~~~~~~~~~~"){
      return;}
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '01 Behaviour Prob Others,' +
                     '02 Behaviour Prob Self,' +
                     '03 Other MH Behaviour Prob,' +
                     '04 Attention and Conc,' +
                     '05 Memory and Orientation,' +
                     '06 Communication(Understand),' +
                     '07 Communication(Express),' +
                     '08 Hallucination/Delusion,' +
                     '09 Mood Changes,' +
                     '10 Problems Eating/Drinking,' +
                     '11 Problems Sleeping,' +
                     '12 Physical Problems,' +
                     '13 Seizures,' +
                     '14 Act Daily Living at home,' +
                     '15 Act Daily Living Outside,' +
                     '16 Level of Self Care,' +
                     '17 Problem Relationship,' +
                     '18 Problem Occup Act' +
                     '">'
   if(document.GraphValues.mhhon060d.value==7){
      document.GraphValues.mhhon060d.value=-1}
   if(document.GraphValues.mhhon061d.value==7){
      document.GraphValues.mhhon061d.value=-1}
   if(document.GraphValues.mhhon062d.value==7){
      document.GraphValues.mhhon062d.value=-1}
   if(document.GraphValues.mhhon063d.value==7){
      document.GraphValues.mhhon063d.value=-1}
   if(document.GraphValues.mhhon064d.value==7){
      document.GraphValues.mhhon064d.value=-1}
   if(document.GraphValues.mhhon065d.value==7){
      document.GraphValues.mhhon065d.value=-1}
   if(document.GraphValues.mhhon066d.value==7){
      document.GraphValues.mhhon066d.value=-1}
   if(document.GraphValues.mhhon067d.value==7){
      document.GraphValues.mhhon067d.value=-1}
   if(document.GraphValues.mhhon068d.value==7){
      document.GraphValues.mhhon068d.value=-1}
   if(document.GraphValues.mhhon069d.value==7){
      document.GraphValues.mhhon069d.value=-1}
   if(document.GraphValues.mhhon070d.value==7){
      document.GraphValues.mhhon070d.value=-1}
   if(document.GraphValues.mhhon071d.value==7){
      document.GraphValues.mhhon071d.value=-1}
   if(document.GraphValues.mhhon072d.value==7){
      document.GraphValues.mhhon072d.value=-1}
   if(document.GraphValues.mhhon073d.value==7){
      document.GraphValues.mhhon073d.value=-1}
   if(document.GraphValues.mhhon074d.value==7){
      document.GraphValues.mhhon074d.value=-1}
   if(document.GraphValues.mhhon075d.value==7){
      document.GraphValues.mhhon075d.value=-1}
   if(document.GraphValues.mhhon076d.value==7){
      document.GraphValues.mhhon076d.value=-1}
   if(document.GraphValues.mhhon077d.value==7){
      document.GraphValues.mhhon077d.value=-1}
   Dataset0yValues += document.GraphValues.mhhon060d.value + ',' +
                      document.GraphValues.mhhon061d.value + ',' +
                      document.GraphValues.mhhon062d.value + ',' +
                      document.GraphValues.mhhon063d.value + ',' +
                      document.GraphValues.mhhon064d.value + ',' +
                      document.GraphValues.mhhon065d.value + ',' +
                      document.GraphValues.mhhon066d.value + ',' +
                      document.GraphValues.mhhon067d.value + ',' +
                      document.GraphValues.mhhon068d.value + ',' +
                      document.GraphValues.mhhon069d.value + ',' +
                      document.GraphValues.mhhon070d.value + ',' +
                      document.GraphValues.mhhon071d.value + ',' +
                      document.GraphValues.mhhon072d.value + ',' +
                      document.GraphValues.mhhon073d.value + ',' +
                      document.GraphValues.mhhon074d.value + ',' +
                      document.GraphValues.mhhon075d.value + ',' +
                      document.GraphValues.mhhon076d.value + ',' +
                      document.GraphValues.mhhon077d.value +
                      '">'
}

function MakeDatasetLDM4(DataSet) {
   if(document.GraphValues.dataset4.value=="~~~~~~~~~~~~~~~~"){
      return;}
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '01 Behaviour Prob Others,' +
                     '02 Behaviour Prob Self,' +
                     '03 Other MH Behaviour Prob,' +
                     '04 Attention and Conc,' +
                     '05 Memory and Orientation,' +
                     '06 Communication(Understand),' +
                     '07 Communication(Express),' +
                     '08 Hallucination/Delusion,' +
                     '09 Mood Changes,' +
                     '10 Problems Eating/Drinking,' +
                     '11 Problems Sleeping,' +
                     '12 Physical Problems,' +
                     '13 Seizures,' +
                     '14 Act Daily Living at home,' +
                     '15 Act Daily Living Outside,' +
                     '16 Level of Self Care,' +
                     '17 Problem Relationship,' +
                     '18 Problem Occup Act' +
                     '">'
   if(document.GraphValues.mhhon060e.value==7){
      document.GraphValues.mhhon060e.value=-1}
   if(document.GraphValues.mhhon061e.value==7){
      document.GraphValues.mhhon061e.value=-1}
   if(document.GraphValues.mhhon062e.value==7){
      document.GraphValues.mhhon062e.value=-1}
   if(document.GraphValues.mhhon063e.value==7){
      document.GraphValues.mhhon063e.value=-1}
   if(document.GraphValues.mhhon064e.value==7){
      document.GraphValues.mhhon064e.value=-1}
   if(document.GraphValues.mhhon065e.value==7){
      document.GraphValues.mhhon065e.value=-1}
   if(document.GraphValues.mhhon066e.value==7){
      document.GraphValues.mhhon066e.value=-1}
   if(document.GraphValues.mhhon067e.value==7){
      document.GraphValues.mhhon067e.value=-1}
   if(document.GraphValues.mhhon068e.value==7){
      document.GraphValues.mhhon068e.value=-1}
   if(document.GraphValues.mhhon069e.value==7){
      document.GraphValues.mhhon069e.value=-1}
   if(document.GraphValues.mhhon070e.value==7){
      document.GraphValues.mhhon070e.value=-1}
   if(document.GraphValues.mhhon071e.value==7){
      document.GraphValues.mhhon071e.value=-1}
   if(document.GraphValues.mhhon072e.value==7){
      document.GraphValues.mhhon072e.value=-1}
   if(document.GraphValues.mhhon073e.value==7){
      document.GraphValues.mhhon073e.value=-1}
   if(document.GraphValues.mhhon074e.value==7){
      document.GraphValues.mhhon074e.value=-1}
   if(document.GraphValues.mhhon075e.value==7){
      document.GraphValues.mhhon075e.value=-1}
   if(document.GraphValues.mhhon076e.value==7){
      document.GraphValues.mhhon076e.value=-1}
   if(document.GraphValues.mhhon077e.value==7){
      document.GraphValues.mhhon077e.value=-1}
   Dataset0yValues += document.GraphValues.mhhon060e.value + ',' +
                      document.GraphValues.mhhon061e.value + ',' +
                      document.GraphValues.mhhon062e.value + ',' +
                      document.GraphValues.mhhon063e.value + ',' +
                      document.GraphValues.mhhon064e.value + ',' +
                      document.GraphValues.mhhon065e.value + ',' +
                      document.GraphValues.mhhon066e.value + ',' +
                      document.GraphValues.mhhon067e.value + ',' +
                      document.GraphValues.mhhon068e.value + ',' +
                      document.GraphValues.mhhon069e.value + ',' +
                      document.GraphValues.mhhon070e.value + ',' +
                      document.GraphValues.mhhon071e.value + ',' +
                      document.GraphValues.mhhon072e.value + ',' +
                      document.GraphValues.mhhon073e.value + ',' +
                      document.GraphValues.mhhon074e.value + ',' +
                      document.GraphValues.mhhon075e.value + ',' +
                      document.GraphValues.mhhon076e.value + ',' +
                      document.GraphValues.mhhon077e.value +
                      '">'
}
      
function MakeDatasetXX1(DataSet) {
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '01 Potential harm to Others,' +
                     '02 Potential self-harm or self-neglect,' + 
                     '03 Needs building security to prevent physical escape,' +
                     '04 Needs safely staffed living environment,' +
                     '05 Needs escort on leave (beyond secure perimeter),' +
                     '06 Potential harm to individual from others,' +
                     '07 Needs specialist clinical procedures' + 
                     '">'
   if(document.GraphValues.mhhon078.value==7){
      document.GraphValues.mhhon078.value=-1}
   if(document.GraphValues.mhhon079.value==7){
      document.GraphValues.mhhon079.value=-1}
   if(document.GraphValues.mhhon080.value==7){
      document.GraphValues.mhhon080.value=-1}
   if(document.GraphValues.mhhon081.value==7){
      document.GraphValues.mhhon081.value=-1}
   if(document.GraphValues.mhhon082.value==7){
      document.GraphValues.mhhon082.value=-1}
   if(document.GraphValues.mhhon083.value==7){
      document.GraphValues.mhhon083.value=-1}
   if(document.GraphValues.mhhon084.value==7){
      document.GraphValues.mhhon084.value=-1}
   Dataset0yValues += document.GraphValues.mhhon078.value + ',' +
                      document.GraphValues.mhhon079.value + ',' +
                      document.GraphValues.mhhon080.value + ',' +
                      document.GraphValues.mhhon081.value + ',' +
                      document.GraphValues.mhhon082.value + ',' +
                      document.GraphValues.mhhon083.value + ',' +
                      document.GraphValues.mhhon084.value +
                      '">'
}
function MakeDatasetXR1(DataSet) {
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '01 Overact/Aggress/Disrupt,' +
                     '02 No Acc Self Injury,' +
                     '03 Prob Drink/Drug Taking,' +
                     '04 Cognitive Problems,' +
                     '05 Physical Illn/Disability,' +
                     '06 Hallucination/Delusion,' +
                     '07 Depressed Mood,' +
                     '08 Other MH/Behav Problems,' +
                     '09 Problem Relationships,' +
                     '10 Act Daily Living,' +
                     '11 Problem Living condit.,' +
                     '12 Problem Occup Activities' +
                     '">'
   if(document.GraphValues.mhhon031.value==7){
      document.GraphValues.mhhon031.value=-1}
   if(document.GraphValues.mhhon032.value==7){
      document.GraphValues.mhhon032.value=-1}
   if(document.GraphValues.mhhon033.value==7){
      document.GraphValues.mhhon033.value=-1}
   if(document.GraphValues.mhhon034.value==7){
      document.GraphValues.mhhon034.value=-1}
   if(document.GraphValues.mhhon035.value==7){
      document.GraphValues.mhhon035.value=-1}
   if(document.GraphValues.mhhon036.value==7){
      document.GraphValues.mhhon036.value=-1}
   if(document.GraphValues.mhhon037.value==7){
      document.GraphValues.mhhon037.value=-1}
   if(document.GraphValues.mhhon038.value==7){
      document.GraphValues.mhhon038.value=-1}
   if(document.GraphValues.mhhon041.value==7){
      document.GraphValues.mhhon041.value=-1}
   if(document.GraphValues.mhhon042.value==7){
      document.GraphValues.mhhon042.value=-1}
   if(document.GraphValues.mhhon043.value==7){
      document.GraphValues.mhhon043.value=-1}
   if(document.GraphValues.mhhon044.value==7){
      document.GraphValues.mhhon044.value=-1}
   Dataset0yValues += document.GraphValues.mhhon031.value + ',' +
                      document.GraphValues.mhhon032.value + ',' +
                      document.GraphValues.mhhon033.value + ',' +
                      document.GraphValues.mhhon034.value + ',' +
                      document.GraphValues.mhhon035.value + ',' +
                      document.GraphValues.mhhon036.value + ',' +
                      document.GraphValues.mhhon037.value + ',' +
                      document.GraphValues.mhhon038.value + ',' +
                      document.GraphValues.mhhon041.value + ',' +
                      document.GraphValues.mhhon042.value + ',' +
                      document.GraphValues.mhhon043.value + ',' +
                      document.GraphValues.mhhon044.value +
                      '">'
}
function MakeDatasetXXM0(DataSet) {
   if(document.GraphValues.dataset0.value=="~~~~~~~~~~~~~~~~"){
      return;}
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '01 Potential harm to Others,' +
                     '02 Potential self-harm or self-neglect,' +
                     '03 Needs building security to prevent physical escape,' +
                     '04 Needs safely staffed living environment,' +
                     '05 Needs escort on leave (beyond secure perimeter),' +
                     '06 Potential harm to individual from others,' +
                     '07 Needs specialist clinical procedures' +
                     '">'
   if(document.GraphValues.mhhon078.value==7){
      document.GraphValues.mhhon078.value=-1}
   if(document.GraphValues.mhhon079.value==7){
      document.GraphValues.mhhon079.value=-1}
   if(document.GraphValues.mhhon080.value==7){
      document.GraphValues.mhhon080.value=-1}
   if(document.GraphValues.mhhon081.value==7){
      document.GraphValues.mhhon081.value=-1}
   if(document.GraphValues.mhhon082.value==7){
      document.GraphValues.mhhon082.value=-1}
   if(document.GraphValues.mhhon083.value==7){
      document.GraphValues.mhhon083.value=-1}
   if(document.GraphValues.mhhon084.value==7){
      document.GraphValues.mhhon084.value=-1}
   Dataset0yValues += document.GraphValues.mhhon078.value + ',' +
                      document.GraphValues.mhhon079.value + ',' +
                      document.GraphValues.mhhon080.value + ',' +
                      document.GraphValues.mhhon081.value + ',' +
                      document.GraphValues.mhhon082.value + ',' +
                      document.GraphValues.mhhon083.value + ',' +
                      document.GraphValues.mhhon084.value +
                      '">'
}
function MakeDatasetXXM1(DataSet) {
   if(document.GraphValues.dataset1.value=="~~~~~~~~~~~~~~~~"){
      return;}
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '01 Potential harm to Others,' +
                     '02 Potential self-harm or self-neglect,' +
                     '03 Needs building security to prevent physical escape,' +
                     '04 Needs safely staffed living environment,' +
                     '05 Needs escort on leave (beyond secure perimeter),' +
                     '06 Potential harm to individual from others,' +
                     '07 Needs specialist clinical procedures' +
                     '">'
   if(document.GraphValues.mhhon078b.value==7){
      document.GraphValues.mhhon078b.value=-1}
   if(document.GraphValues.mhhon079b.value==7){
      document.GraphValues.mhhon079b.value=-1}
   if(document.GraphValues.mhhon080b.value==7){
      document.GraphValues.mhhon080b.value=-1}
   if(document.GraphValues.mhhon081b.value==7){
      document.GraphValues.mhhon081b.value=-1}
   if(document.GraphValues.mhhon082b.value==7){
      document.GraphValues.mhhon082b.value=-1}
   if(document.GraphValues.mhhon083b.value==7){
      document.GraphValues.mhhon083b.value=-1}
   if(document.GraphValues.mhhon084b.value==7){
      document.GraphValues.mhhon084b.value=-1}
   Dataset0yValues += document.GraphValues.mhhon078b.value + ',' +
                      document.GraphValues.mhhon079b.value + ',' +
                      document.GraphValues.mhhon080b.value + ',' +
                      document.GraphValues.mhhon081b.value + ',' +
                      document.GraphValues.mhhon082b.value + ',' +
                      document.GraphValues.mhhon083b.value + ',' +
                      document.GraphValues.mhhon084b.value +
                      '">'
}
function MakeDatasetXXM2(DataSet) {
   if(document.GraphValues.dataset2.value=="~~~~~~~~~~~~~~~~"){
      return;}
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '01 Potential harm to Others,' +
                     '02 Potential self-harm or self-neglect,' +
                     '03 Needs building security to prevent physical escape,' +
                     '04 Needs safely staffed living environment,' +
                     '05 Needs escort on leave (beyond secure perimeter),' +
                     '06 Potential harm to individual from others,' +
                     '07 Needs specialist clinical procedures' +
                     '">'
   if(document.GraphValues.mhhon078c.value==7){
      document.GraphValues.mhhon078c.value=-1}
   if(document.GraphValues.mhhon079c.value==7){
      document.GraphValues.mhhon079c.value=-1}
   if(document.GraphValues.mhhon080c.value==7){
      document.GraphValues.mhhon080c.value=-1}
   if(document.GraphValues.mhhon081c.value==7){
      document.GraphValues.mhhon081c.value=-1}
   if(document.GraphValues.mhhon082c.value==7){
      document.GraphValues.mhhon082c.value=-1}
   if(document.GraphValues.mhhon083c.value==7){
      document.GraphValues.mhhon083c.value=-1}
   if(document.GraphValues.mhhon084c.value==7){
      document.GraphValues.mhhon084c.value=-1}
   p=document.GraphValues
   p.mhhon078c.value=p.mhhon078c.value-0
   p.mhhon079c.value=p.mhhon079c.value-0
   p.mhhon080c.value=p.mhhon080c.value-0
   p.mhhon081c.value=p.mhhon081c.value-0
   p.mhhon082c.value=p.mhhon082c.value-0
   p.mhhon083c.value=p.mhhon083c.value-0
   p.mhhon084c.value=p.mhhon084c.value-0
   Dataset0yValues += document.GraphValues.mhhon078c.value + ',' +
                      document.GraphValues.mhhon079c.value + ',' +
                      document.GraphValues.mhhon080c.value + ',' +
                      document.GraphValues.mhhon081c.value + ',' +
                      document.GraphValues.mhhon082c.value + ',' +
                      document.GraphValues.mhhon083c.value + ',' +
                      document.GraphValues.mhhon084c.value +
                      '">'
}

function MakeDatasetXXM3(DataSet) {
   if(document.GraphValues.dataset3.value=="~~~~~~~~~~~~~~~~"){
      return;}
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '01 Potential harm to Others,' +
                     '02 Potential self-harm or self-neglect,' +
                     '03 Needs building security to prevent physical escape,' +
                     '04 Needs safely staffed living environment,' +
                     '05 Needs escort on leave (beyond secure perimeter),' +
                     '06 Potential harm to individual from others,' +
                     '07 Needs specialist clinical procedures' +
                     '">'

   if(document.GraphValues.mhhon078d.value==7){
      document.GraphValues.mhhon078d.value=-1}
   if(document.GraphValues.mhhon079d.value==7){
      document.GraphValues.mhhon079d.value=-1}
   if(document.GraphValues.mhhon080d.value==7){
      document.GraphValues.mhhon080d.value=-1}
   if(document.GraphValues.mhhon081d.value==7){
      document.GraphValues.mhhon081d.value=-1}
   if(document.GraphValues.mhhon082d.value==7){
      document.GraphValues.mhhon082d.value=-1}
   if(document.GraphValues.mhhon083d.value==7){
      document.GraphValues.mhhon083d.value=-1}
   if(document.GraphValues.mhhon084d.value==7){
      document.GraphValues.mhhon084d.value=-1}
   Dataset0yValues += document.GraphValues.mhhon078d.value + ',' +
                      document.GraphValues.mhhon079d.value + ',' +
                      document.GraphValues.mhhon080d.value + ',' +
                      document.GraphValues.mhhon081d.value + ',' +
                      document.GraphValues.mhhon082d.value + ',' +
                      document.GraphValues.mhhon083d.value + ',' +
                      document.GraphValues.mhhon084d.value +
                      '">'

}

function MakeDatasetXXM4(DataSet) {
   if(document.GraphValues.dataset4.value=="~~~~~~~~~~~~~~~~"){
      return;}
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '01 Potential harm to Others,' +
                     '02 Potential self-harm or self-neglect,' +
                     '03 Needs building security to prevent physical escape,' +
                     '04 Needs safely staffed living environment,' +
                     '05 Needs escort on leave (beyond secure perimeter),' +
                     '06 Potential harm to individual from others,' +
                     '07 Needs specialist clinical procedures' +
                     '">'
   if(document.GraphValues.mhhon078e.value==7){
      document.GraphValues.mhhon078e.value=-1}
   if(document.GraphValues.mhhon079e.value==7){
      document.GraphValues.mhhon079e.value=-1}
   if(document.GraphValues.mhhon080e.value==7){
      document.GraphValues.mhhon080e.value=-1}
   if(document.GraphValues.mhhon081e.value==7){
      document.GraphValues.mhhon081e.value=-1}
   if(document.GraphValues.mhhon082e.value==7){
      document.GraphValues.mhhon082e.value=-1}
   if(document.GraphValues.mhhon083e.value==7){
      document.GraphValues.mhhon083e.value=-1}
   if(document.GraphValues.mhhon084e.value==7){
      document.GraphValues.mhhon084e.value=-1}
   Dataset0yValues += document.GraphValues.mhhon078e.value + ',' +
                      document.GraphValues.mhhon079e.value + ',' +
                      document.GraphValues.mhhon080e.value + ',' +
                      document.GraphValues.mhhon081e.value + ',' +
                      document.GraphValues.mhhon082e.value + ',' +
                      document.GraphValues.mhhon083e.value + ',' +
                      document.GraphValues.mhhon084e.value +
                      '">'
}
function MakeDatasetXRM0(DataSet) {
   if(document.GraphValues.dataset0.value=="~~~~~~~~~~~~~~~~"){
      return;}
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '01 Overact/Aggress/Disrupt,' +
                     '02 No Acc Self Injury,' +
                     '03 Prob Drink/Drug Taking,' +
                     '04 Cognitive Problems,' +
                     '05 Physical Illn/Disability,' +
                     '06 Hallucination/Delusion,' +
                     '07 Depressed Mood,' +
                     '08 Other MH/Behav Problems,' +
                     '09 Problem Relationships,' +
                     '10 Act Daily Living,' +
                     '11 Problem Living condit.,' +
                     '12 Problem Occup Activities' +
                     '">'
   if(document.GraphValues.mhhon031.value==7){
      document.GraphValues.mhhon031.value=-1}
   if(document.GraphValues.mhhon032.value==7){
      document.GraphValues.mhhon032.value=-1}
   if(document.GraphValues.mhhon033.value==7){
      document.GraphValues.mhhon033.value=-1}
   if(document.GraphValues.mhhon034.value==7){
      document.GraphValues.mhhon034.value=-1}
   if(document.GraphValues.mhhon035.value==7){
      document.GraphValues.mhhon035.value=-1}
   if(document.GraphValues.mhhon036.value==7){
      document.GraphValues.mhhon036.value=-1}
   if(document.GraphValues.mhhon037.value==7){
      document.GraphValues.mhhon037.value=-1}
   if(document.GraphValues.mhhon038.value==7){
      document.GraphValues.mhhon038.value=-1}
   if(document.GraphValues.mhhon041.value==7){
      document.GraphValues.mhhon041.value=-1}
   if(document.GraphValues.mhhon042.value==7){
      document.GraphValues.mhhon042.value=-1}
   if(document.GraphValues.mhhon043.value==7){
      document.GraphValues.mhhon043.value=-1}
   if(document.GraphValues.mhhon044.value==7){
      document.GraphValues.mhhon044.value=-1}
   Dataset0yValues += document.GraphValues.mhhon031.value + ',' +
                      document.GraphValues.mhhon032.value + ',' +
                      document.GraphValues.mhhon033.value + ',' +
                      document.GraphValues.mhhon034.value + ',' +
                      document.GraphValues.mhhon035.value + ',' +
                      document.GraphValues.mhhon036.value + ',' +
                      document.GraphValues.mhhon037.value + ',' +
                      document.GraphValues.mhhon038.value + ',' +
                      document.GraphValues.mhhon041.value + ',' +
                      document.GraphValues.mhhon042.value + ',' +
                      document.GraphValues.mhhon043.value + ',' +
                      document.GraphValues.mhhon044.value +
                      '">'
}
function MakeDatasetXRM1(DataSet) {
   if(document.GraphValues.dataset1.value=="~~~~~~~~~~~~~~~~"){
      return;}
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '01 Overact/Aggress/Disrupt,' +
                     '02 No Acc Self Injury,' +
                     '03 Prob Drink/Drug Taking,' +
                     '04 Cognitive Problems,' +
                     '05 Physical Illn/Disability,' +
                     '06 Hallucination/Delusion,' +
                     '07 Depressed Mood,' +
                     '08 Other MH/Behav Problems,' +
                     '09 Problem Relationships,' +
                     '10 Act Daily Living,' +
                     '11 Problem Living condit.,' +
                     '12 Problem Occup Activities' +
                     '">'
   if(document.GraphValues.mhhon031b.value==7){
      document.GraphValues.mhhon031b.value=-1}
   if(document.GraphValues.mhhon032b.value==7){
      document.GraphValues.mhhon032b.value=-1}
   if(document.GraphValues.mhhon033b.value==7){
      document.GraphValues.mhhon033b.value=-1}
   if(document.GraphValues.mhhon034b.value==7){
      document.GraphValues.mhhon034b.value=-1}
   if(document.GraphValues.mhhon035b.value==7){
      document.GraphValues.mhhon035b.value=-1}
   if(document.GraphValues.mhhon036b.value==7){
      document.GraphValues.mhhon036b.value=-1}
   if(document.GraphValues.mhhon037b.value==7){
      document.GraphValues.mhhon037b.value=-1}
   if(document.GraphValues.mhhon038b.value==7){
      document.GraphValues.mhhon038b.value=-1}
   if(document.GraphValues.mhhon041b.value==7){
      document.GraphValues.mhhon041b.value=-1}
   if(document.GraphValues.mhhon042b.value==7){
      document.GraphValues.mhhon042b.value=-1}
   if(document.GraphValues.mhhon043b.value==7){
      document.GraphValues.mhhon043b.value=-1}
   if(document.GraphValues.mhhon044b.value==7){
      document.GraphValues.mhhon044b.value=-1}
   Dataset0yValues += document.GraphValues.mhhon031b.value + ',' +
                      document.GraphValues.mhhon032b.value + ',' +
                      document.GraphValues.mhhon033b.value + ',' +
                      document.GraphValues.mhhon034b.value + ',' +
                      document.GraphValues.mhhon035b.value + ',' +
                      document.GraphValues.mhhon036b.value + ',' +
                      document.GraphValues.mhhon037b.value + ',' +
                      document.GraphValues.mhhon038b.value + ',' +
                      document.GraphValues.mhhon041b.value + ',' +
                      document.GraphValues.mhhon042b.value + ',' +
                      document.GraphValues.mhhon043b.value + ',' +
                      document.GraphValues.mhhon044b.value +
                      '">'
}
function MakeDatasetXRM2(DataSet) {
   if(document.GraphValues.dataset2.value=="~~~~~~~~~~~~~~~~"){
      return;}
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '01 Overact/Aggress/Disrupt,' +
                     '02 No Acc Self Injury,' +
                     '03 Prob Drink/Drug Taking,' +
                     '04 Cognitive Problems,' +
                     '05 Physical Illn/Disability,' +
                     '06 Hallucination/Delusion,' +
                     '07 Depressed Mood,' +
                     '08 Other MH/Behav Problems,' +
                     '09 Problem Relationships,' +
                     '10 Act Daily Living,' +
                     '11 Problem Living condit.,' +
                     '12 Problem Occup Activities' +
                     '">'
   if(document.GraphValues.mhhon031c.value==7){
      document.GraphValues.mhhon031c.value=-1}
   if(document.GraphValues.mhhon032c.value==7){
      document.GraphValues.mhhon032c.value=-1}
   if(document.GraphValues.mhhon033c.value==7){
      document.GraphValues.mhhon033c.value=-1}
   if(document.GraphValues.mhhon034c.value==7){
      document.GraphValues.mhhon034c.value=-1}
   if(document.GraphValues.mhhon035c.value==7){
      document.GraphValues.mhhon035c.value=-1}
   if(document.GraphValues.mhhon036c.value==7){
      document.GraphValues.mhhon036c.value=-1}
   if(document.GraphValues.mhhon037c.value==7){
      document.GraphValues.mhhon037c.value=-1}
   if(document.GraphValues.mhhon038c.value==7){
      document.GraphValues.mhhon038c.value=-1}
   if(document.GraphValues.mhhon041c.value==7){
      document.GraphValues.mhhon041c.value=-1}
   if(document.GraphValues.mhhon042c.value==7){
      document.GraphValues.mhhon042c.value=-1}
   if(document.GraphValues.mhhon043c.value==7){
      document.GraphValues.mhhon043c.value=-1}
   if(document.GraphValues.mhhon044c.value==7){
      document.GraphValues.mhhon044c.value=-1}
   p=document.GraphValues
   p.mhhon031c.value=p.mhhon031c.value-0
   p.mhhon032c.value=p.mhhon032c.value-0
   p.mhhon033c.value=p.mhhon033c.value-0
   p.mhhon034c.value=p.mhhon034c.value-0
   p.mhhon035c.value=p.mhhon035c.value-0
   p.mhhon036c.value=p.mhhon036c.value-0
   p.mhhon037c.value=p.mhhon037c.value-0
   p.mhhon038c.value=p.mhhon038c.value-0
   p.mhhon041c.value=p.mhhon041c.value-0
   p.mhhon042c.value=p.mhhon042c.value-0
   p.mhhon043c.value=p.mhhon043c.value-0
   p.mhhon044c.value=p.mhhon044c.value-0
   Dataset0yValues += document.GraphValues.mhhon031c.value + ',' +
                      document.GraphValues.mhhon032c.value + ',' +
                      document.GraphValues.mhhon033c.value + ',' +
                      document.GraphValues.mhhon034c.value + ',' +
                      document.GraphValues.mhhon035c.value + ',' +
                      document.GraphValues.mhhon036c.value + ',' +
                      document.GraphValues.mhhon037c.value + ',' +
                      document.GraphValues.mhhon038c.value + ',' +
                      document.GraphValues.mhhon041c.value + ',' +
                      document.GraphValues.mhhon042c.value + ',' +
                      document.GraphValues.mhhon043c.value + ',' +
                      document.GraphValues.mhhon044c.value +
                      '">'
}

function MakeDatasetXRM3(DataSet) {
   if(document.GraphValues.dataset3.value=="~~~~~~~~~~~~~~~~"){
      return;}
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '01 Overact/Aggress/Disrupt,' +
                     '02 No Acc Self Injury,' +
                     '03 Prob Drink/Drug Taking,' +
                     '04 Cognitive Problems,' +
                     '05 Physical Illn/Disability,' +
                     '06 Hallucination/Delusion,' +
                     '07 Depressed Mood,' +
                     '08 Other MH/Behav Problems,' +
                     '09 Problem Relationships,' +
                     '10 Act Daily Living,' +
                     '11 Problem Living condit.,' +
                     '12 Problem Occup Activities' +
                     '">'

   if(document.GraphValues.mhhon031d.value==7){
      document.GraphValues.mhhon031d.value=-1}
   if(document.GraphValues.mhhon032d.value==7){
      document.GraphValues.mhhon032d.value=-1}
   if(document.GraphValues.mhhon033d.value==7){
      document.GraphValues.mhhon033d.value=-1}
   if(document.GraphValues.mhhon034d.value==7){
      document.GraphValues.mhhon034d.value=-1}
   if(document.GraphValues.mhhon035d.value==7){
      document.GraphValues.mhhon035d.value=-1}
   if(document.GraphValues.mhhon036d.value==7){
      document.GraphValues.mhhon036d.value=-1}
   if(document.GraphValues.mhhon037d.value==7){
      document.GraphValues.mhhon037d.value=-1}
   if(document.GraphValues.mhhon038d.value==7){
      document.GraphValues.mhhon038d.value=-1}
   if(document.GraphValues.mhhon041d.value==7){
      document.GraphValues.mhhon041d.value=-1}
   if(document.GraphValues.mhhon042d.value==7){
      document.GraphValues.mhhon042d.value=-1}
   if(document.GraphValues.mhhon043d.value==7){
      document.GraphValues.mhhon043d.value=-1}
   if(document.GraphValues.mhhon044d.value==7){
      document.GraphValues.mhhon044d.value=-1}
   Dataset0yValues += document.GraphValues.mhhon031d.value + ',' +
                      document.GraphValues.mhhon032d.value + ',' +
                      document.GraphValues.mhhon033d.value + ',' +
                      document.GraphValues.mhhon034d.value + ',' +
                      document.GraphValues.mhhon035d.value + ',' +
                      document.GraphValues.mhhon036d.value + ',' +
                      document.GraphValues.mhhon037d.value + ',' +
                      document.GraphValues.mhhon038d.value + ',' +
                      document.GraphValues.mhhon041d.value + ',' +
                      document.GraphValues.mhhon042d.value + ',' +
                      document.GraphValues.mhhon043d.value + ',' +
                      document.GraphValues.mhhon044d.value +
                      '">'

}

function MakeDatasetXRM4(DataSet) {
   if(document.GraphValues.dataset4.value=="~~~~~~~~~~~~~~~~"){
      return;}
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '01 Overact/Aggress/Disrupt,' +
                     '02 No Acc Self Injury,' +
                     '03 Prob Drink/Drug Taking,' +
                     '04 Cognitive Problems,' +
                     '05 Physical Illn/Disability,' +
                     '06 Hallucination/Delusion,' +
                     '07 Depressed Mood,' +
                     '08 Other MH/Behav Problems,' +
                     '09 Problem Relationships,' +
                     '10 Act Daily Living,' +
                     '11 Problem Living condit.,' +
                     '12 Problem Occup Activities' +
                     '">'
   if(document.GraphValues.mhhon031e.value==7){
      document.GraphValues.mhhon031e.value=-1}
   if(document.GraphValues.mhhon032e.value==7){
      document.GraphValues.mhhon032e.value=-1}
   if(document.GraphValues.mhhon033e.value==7){
      document.GraphValues.mhhon033e.value=-1}
   if(document.GraphValues.mhhon034e.value==7){
      document.GraphValues.mhhon034e.value=-1}
   if(document.GraphValues.mhhon035e.value==7){
      document.GraphValues.mhhon035e.value=-1}
   if(document.GraphValues.mhhon036e.value==7){
      document.GraphValues.mhhon036e.value=-1}
   if(document.GraphValues.mhhon037e.value==7){
      document.GraphValues.mhhon037e.value=-1}
   if(document.GraphValues.mhhon038e.value==7){
      document.GraphValues.mhhon038e.value=-1}
   if(document.GraphValues.mhhon041e.value==7){
      document.GraphValues.mhhon041e.value=-1}
   if(document.GraphValues.mhhon042e.value==7){
      document.GraphValues.mhhon042e.value=-1}
   if(document.GraphValues.mhhon043e.value==7){
      document.GraphValues.mhhon043e.value=-1}
   if(document.GraphValues.mhhon044e.value==7){
      document.GraphValues.mhhon044e.value=-1}
   Dataset0yValues += document.GraphValues.mhhon031e.value + ',' +
                      document.GraphValues.mhhon032e.value + ',' +
                      document.GraphValues.mhhon033e.value + ',' +
                      document.GraphValues.mhhon034e.value + ',' +
                      document.GraphValues.mhhon035e.value + ',' +
                      document.GraphValues.mhhon036e.value + ',' +
                      document.GraphValues.mhhon037e.value + ',' +
                      document.GraphValues.mhhon038e.value + ',' +
                      document.GraphValues.mhhon041e.value + ',' +
                      document.GraphValues.mhhon042e.value + ',' +
                      document.GraphValues.mhhon043e.value + ',' +
                      document.GraphValues.mhhon044e.value +
                      '">'
}
                                                                                                         
function JavaColumnSGraph(GraphBase) {
   GraphColor="blue";
   GraphString += '<applet code=javachart.applet.columnApp.class ' +
        GraphBase + 'width=410 height=500>' +
        '<param name=CopyrightNotification ' +
        'value="JavaChart is a copyrighted work, ' +
        'and subject to full legal protection">' +
        '<param name=plotAreaColor value="white">' +
        '<param name=plotAreaLeft value=".05">' +
        '<param name=plotAreaRight value=".9">' +
        '<param name=plotAreaTop value=".8">' +
        '<param name=plotAreaBottom value=".4">' +
        '<param name=legendllX value="10">' +
        '<param name=xAxisTickLength value="0">' +
        '<param name=dataset0Color value="' + GraphColor + '">' +
        '<param name=legendColor value="lightGray">' +
        '<param name=yAxisOptions value="noAutoScale">' +
        '<param name=yAxisStart value="-2">' +
        '<param name=yAxisEnd value="12">' +
        '<param name=yAxisTickCount value="7">' +
        '<param name=yAxisLabelCount value="7">' +
        '<param name=xAxisLabelAngle value="-45">' +
        '<param name=yAxisLabelFont value="Arial,11,1">' +
        '<param name=xAxisLabelFont value="Arial,11,1">' +
        '<param name=titleString value="Summary Scores">' +
        '<param name=titleFont value="Arial,12,1">'
   MakeDatasetSummary(0)
   GraphString += Dataset0yValues + Dataset0Labels
   GraphString += '</applet></table>';
   HONOSSingleGraph.innerHTML = GraphString;
}
function MakeDatasetSummary(DataSet) {
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '1 Behavioural Problems,' +
                     '2 Impairment,' +
                     '3 Delusions/Hallucinations,' +
                     '4 Depression Problems,' +
                     '5 Symptomatic Problems,' +
                     '6 Social Problems,' +
//                     '9 Total Score' +
                     '">'
            p=document.GraphValues;
            p.mhhon031.value=p.mhhon031.value-0
            p.mhhon032.value=p.mhhon032.value-0
            p.mhhon033.value=p.mhhon033.value-0
            p.mhhon034.value=p.mhhon034.value-0
            p.mhhon035.value=p.mhhon035.value-0
            p.mhhon036.value=p.mhhon036.value-0
            p.mhhon037.value=p.mhhon037.value-0
            p.mhhon038.value=p.mhhon038.value-0
            p.mhhon041.value=p.mhhon041.value-0
            p.mhhon042.value=p.mhhon042.value-0
            p.mhhon043.value=p.mhhon043.value-0
            p.mhhon044.value=p.mhhon044.value-0
            p.mhhon045.value=p.mhhon045.value-0
            p.mhhon046.value=p.mhhon046.value-0
            p.mhhon047.value=p.mhhon047.value-0
            p.mhhon048.value=p.mhhon048.value-0
            p.mhhon049.value=p.mhhon049.value-0
            p.mhhon050.value=p.mhhon050.value-0
            p.mhhon051.value=p.mhhon051.value-0
            p.mhhon052.value=p.mhhon052.value-0
            p.mhhon053.value=p.mhhon053.value-0
            p.mhhon054.value=p.mhhon054.value-0
            p.mhhon055.value=p.mhhon055.value-0
            p.mhhon056.value=p.mhhon056.value-0
            p.mhhon057.value=p.mhhon057.value-0
            p.mhhon058.value=p.mhhon058.value-0
            p.mhhon059.value=p.mhhon059.value-0
            p.mhhon060.value=p.mhhon060.value-0
            p.mhhon061.value=p.mhhon061.value-0
            p.mhhon062.value=p.mhhon062.value-0
            p.mhhon063.value=p.mhhon063.value-0
            p.mhhon064.value=p.mhhon064.value-0
            p.mhhon065.value=p.mhhon065.value-0
            p.mhhon066.value=p.mhhon066.value-0
            p.mhhon067.value=p.mhhon067.value-0
            p.mhhon068.value=p.mhhon068.value-0
            p.mhhon069.value=p.mhhon069.value-0
            p.mhhon070.value=p.mhhon070.value-0
            p.mhhon071.value=p.mhhon071.value-0
            p.mhhon072.value=p.mhhon072.value-0
            p.mhhon073.value=p.mhhon073.value-0
            p.mhhon074.value=p.mhhon074.value-0
            p.mhhon075.value=p.mhhon075.value-0
            p.mhhon076.value=p.mhhon076.value-0
            p.mhhon077.value=p.mhhon077.value-0
   summary1=parseInt(p.mhhon031.value,10) +
            parseInt(p.mhhon033.value,10) +
            parseInt(p.mhhon045.value,10) +
            parseInt(p.mhhon047.value,10) +
            parseInt(p.mhhon048.value,10) +
            parseInt(p.mhhon049.value,10) 
   summary2=parseInt(p.mhhon034.value,10) +
            parseInt(p.mhhon035.value,10) +
            parseInt(p.mhhon050.value,10) +
            parseInt(p.mhhon051.value,10) 
   summary3=parseInt(p.mhhon036.value,10)
   summary4=parseInt(p.mhhon032.value,10) +
            parseInt(p.mhhon037.value,10) +
            parseInt(p.mhhon038.value,10) +
            parseInt(p.mhhon041.value,10)
   summary5=parseInt(p.mhhon034.value,10) +
            parseInt(p.mhhon035.value,10) +
            parseInt(p.mhhon052.value,10) +
            parseInt(p.mhhon053.value,10) +
            parseInt(p.mhhon054.value,10) 
   summary6=parseInt(p.mhhon041.value,10) +
            parseInt(p.mhhon042.value,10) +
            parseInt(p.mhhon043.value,10) +
            parseInt(p.mhhon044.value,10)
   summary9=parseInt(p.mhhon031.value,10) +
            parseInt(p.mhhon032.value,10) +
            parseInt(p.mhhon033.value,10) +
            parseInt(p.mhhon034.value,10) +
            parseInt(p.mhhon035.value,10) +
            parseInt(p.mhhon036.value,10) +
            parseInt(p.mhhon037.value,10) +
            parseInt(p.mhhon038.value,10) +
            parseInt(p.mhhon041.value,10) +
            parseInt(p.mhhon042.value,10) +
            parseInt(p.mhhon043.value,10) +
            parseInt(p.mhhon044.value,10) +
            parseInt(p.mhhon045.value,10) +
            parseInt(p.mhhon046.value,10) +
            parseInt(p.mhhon047.value,10) +
            parseInt(p.mhhon048.value,10) +
            parseInt(p.mhhon049.value,10) +
            parseInt(p.mhhon050.value,10) +
            parseInt(p.mhhon051.value,10) +
            parseInt(p.mhhon052.value,10) +
            parseInt(p.mhhon053.value,10) +
            parseInt(p.mhhon054.value,10) +
            parseInt(p.mhhon055.value,10) +
            parseInt(p.mhhon056.value,10) +
            parseInt(p.mhhon057.value,10) +
            parseInt(p.mhhon058.value,10) +
            parseInt(p.mhhon059.value,10) +
            parseInt(p.mhhon060.value,10) +
            parseInt(p.mhhon061.value,10) +
            parseInt(p.mhhon062.value,10) +
            parseInt(p.mhhon063.value,10) +
            parseInt(p.mhhon064.value,10) +
            parseInt(p.mhhon065.value,10) +
            parseInt(p.mhhon066.value,10) +
            parseInt(p.mhhon067.value,10) +
            parseInt(p.mhhon068.value,10) +
            parseInt(p.mhhon069.value,10) +
            parseInt(p.mhhon070.value,10) +
            parseInt(p.mhhon071.value,10) +
            parseInt(p.mhhon072.value,10) +
            parseInt(p.mhhon073.value,10) +
            parseInt(p.mhhon074.value,10) +
            parseInt(p.mhhon075.value,10) +
            parseInt(p.mhhon076.value,10) +
            parseInt(p.mhhon077.value,10) 
   Dataset0yValues += summary1 + ',' +
                      summary2 + ',' +
                      summary3 + ',' +
                      summary4 + ',' +
                      summary5 + ',' +
                      summary6 +
//                      summary9 +
                      '">'
}
function JavaColumnSMGraph(GraphBase) {
   GraphColor="blue";
   GraphString += '<applet code=javachart.applet.columnApp.class ' +
        GraphBase + 'width=380 height=500>' +
        '<param name=CopyrightNotification ' +
        'value="JavaChart is a copyrighted work, ' +
        'and subject to full legal protection">' +
        '<param name=plotAreaColor value="white">' +
        '<param name=plotAreaLeft value="0.05">' +
        '<param name=plotAreaRight value=".9">' +
        '<param name=plotAreaTop value=".8">' +
        '<param name=plotAreaBottom value=".4">' +
        '<param name=xAxisTickLength value="0">' +
        '<param name=dataset0Color value="' + GraphColor + '">' +
        '<param name=dataset0Name value="' +
         document.GraphValues.mhhon006.value + '">' +
        '<param name=dataset0LabelColor value="' + GraphColor + '">' +
        '<param name=dataset1Name value="' +
         document.GraphValues.mhhon006b.value +' ">' +
        '<param name=dataset1LabelColor value="red">' +
        '<param name=dataset2Name value="' +
         document.GraphValues.mhhon006c.value + '">' +
        '<param name=dataset2LabelColor value="green">' +
        '<param name=dataset3Name value="' +
         document.GraphValues.mhhon006d.value + '">' +
        '<param name=dataset3LabelColor value="yellow">' +
        '<param name=dataset4Name value="' +
         document.GraphValues.mhhon006e.value + '">' +
        '<param name=dataset4LabelColor value="cyan">' +
        '<param name=legendOn value="true">' +
        '<param name=legendColor value="white">' +
        '<param name=legendLabelColor value="black">' +
        '<param name=legendHorizontal value="true">' +
        '<param name=legendLabelFont value="Arial,10,1">' +
        '<param name=legendllX value=".0">' +
        '<param name=legendllY value=".85">' +
        '<param name=iconWidth value=".015">' +
        '<param name=iconHeight value=".015">' +
        '<param name=yAxisOptions value="noAutoScale">' +
        '<param name=yAxisStart value="-2">' +
        '<param name=yAxisEnd value="12">' +
        '<param name=yAxisTickCount value="7">' +
        '<param name=yAxisLabelCount value="7">' +
        '<param name=xAxisLabelAngle value="-45">' +
        '<param name=yAxisLabelFont value="Arial,11,1">' +
        '<param name=xAxisLabelFont value="Arial,11,1">' +
        '<param name=titleString value="Summary Scores">' +
        '<param name=titleFont value="Arial,12,1">'
   MakeDatasetSummary0(0)
   GraphString += Dataset0yValues + Dataset0Labels
   MakeDatasetSummary1(1)
   GraphString += Dataset0yValues + Dataset0Labels
   MakeDatasetSummary2(2)
   GraphString += Dataset0yValues + Dataset0Labels
   MakeDatasetSummary3(3)
   GraphString += Dataset0yValues + Dataset0Labels
   MakeDatasetSummary4(4)
   GraphString += Dataset0yValues + Dataset0Labels
   GraphString += '</applet></table>';
   HONOSMultipleGraph.innerHTML = GraphString;
}
function MakeDatasetSummary0(DataSet) {
   if(document.GraphValues.dataset0.value=="~~~~~~~~~~~~~~~~"){
      return;}
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '1 Behavioural Problems,' +
                     '2 Impairment,' +
                     '3 Delusions/Hallucinations,' +
                     '4 Depression Problems,' +
                     '5 Symptomatic Problems,' +
                     '6 Social Problems,' +
//                     '9 Total Score' +
                     '">'
            p=document.GraphValues;
            p.mhhon031.value=p.mhhon031.value-0
            p.mhhon032.value=p.mhhon032.value-0
            p.mhhon033.value=p.mhhon033.value-0
            p.mhhon034.value=p.mhhon034.value-0
            p.mhhon035.value=p.mhhon035.value-0
            p.mhhon036.value=p.mhhon036.value-0
            p.mhhon037.value=p.mhhon037.value-0
            p.mhhon038.value=p.mhhon038.value-0
            p.mhhon041.value=p.mhhon041.value-0
            p.mhhon042.value=p.mhhon042.value-0
            p.mhhon043.value=p.mhhon043.value-0
            p.mhhon044.value=p.mhhon044.value-0
            p.mhhon045.value=p.mhhon045.value-0
            p.mhhon046.value=p.mhhon046.value-0
            p.mhhon047.value=p.mhhon047.value-0
            p.mhhon048.value=p.mhhon048.value-0
            p.mhhon049.value=p.mhhon049.value-0
            p.mhhon050.value=p.mhhon050.value-0
            p.mhhon051.value=p.mhhon051.value-0
            p.mhhon052.value=p.mhhon052.value-0
            p.mhhon053.value=p.mhhon053.value-0
            p.mhhon054.value=p.mhhon054.value-0
            p.mhhon055.value=p.mhhon055.value-0
            p.mhhon056.value=p.mhhon056.value-0
            p.mhhon057.value=p.mhhon057.value-0
            p.mhhon058.value=p.mhhon058.value-0
            p.mhhon059.value=p.mhhon059.value-0
            p.mhhon060.value=p.mhhon060.value-0
            p.mhhon061.value=p.mhhon061.value-0
            p.mhhon062.value=p.mhhon062.value-0
            p.mhhon063.value=p.mhhon063.value-0
            p.mhhon064.value=p.mhhon064.value-0
            p.mhhon065.value=p.mhhon065.value-0
            p.mhhon066.value=p.mhhon066.value-0
            p.mhhon067.value=p.mhhon067.value-0
            p.mhhon068.value=p.mhhon068.value-0
            p.mhhon069.value=p.mhhon069.value-0
            p.mhhon070.value=p.mhhon070.value-0
            p.mhhon071.value=p.mhhon071.value-0
            p.mhhon072.value=p.mhhon072.value-0
            p.mhhon073.value=p.mhhon073.value-0
            p.mhhon074.value=p.mhhon074.value-0
            p.mhhon075.value=p.mhhon075.value-0
            p.mhhon076.value=p.mhhon076.value-0
            p.mhhon077.value=p.mhhon077.value-0
   summary1=parseInt(p.mhhon031.value,10) +
            parseInt(p.mhhon033.value,10) +
            parseInt(p.mhhon045.value,10) +
            parseInt(p.mhhon047.value,10) +
            parseInt(p.mhhon048.value,10) +
            parseInt(p.mhhon049.value,10)
   summary2=parseInt(p.mhhon034.value,10) +
            parseInt(p.mhhon035.value,10) +
            parseInt(p.mhhon050.value,10) +
            parseInt(p.mhhon051.value,10)
   summary3=parseInt(p.mhhon036.value,10)
   summary4=parseInt(p.mhhon032.value,10) +
            parseInt(p.mhhon037.value,10) +
            parseInt(p.mhhon038.value,10) +
            parseInt(p.mhhon041.value,10)
   summary5=parseInt(p.mhhon034.value,10) +
            parseInt(p.mhhon035.value,10) +
            parseInt(p.mhhon052.value,10) +
            parseInt(p.mhhon053.value,10) +
            parseInt(p.mhhon054.value,10)
   summary6=parseInt(p.mhhon041.value,10) +
            parseInt(p.mhhon042.value,10) +
            parseInt(p.mhhon043.value,10) +
            parseInt(p.mhhon044.value,10)
   summary9=parseInt(p.mhhon031.value,10) +
            parseInt(p.mhhon032.value,10) +
            parseInt(p.mhhon033.value,10) +
            parseInt(p.mhhon034.value,10) +
            parseInt(p.mhhon035.value,10) +
            parseInt(p.mhhon036.value,10) +
            parseInt(p.mhhon037.value,10) +
            parseInt(p.mhhon038.value,10) +
            parseInt(p.mhhon041.value,10) +
            parseInt(p.mhhon042.value,10) +
            parseInt(p.mhhon043.value,10) +
            parseInt(p.mhhon044.value,10) +
            parseInt(p.mhhon045.value,10) +
            parseInt(p.mhhon046.value,10) +
            parseInt(p.mhhon047.value,10) +
            parseInt(p.mhhon048.value,10) +
            parseInt(p.mhhon049.value,10) +
            parseInt(p.mhhon050.value,10) +
            parseInt(p.mhhon051.value,10) +
            parseInt(p.mhhon052.value,10) +
            parseInt(p.mhhon053.value,10) +
            parseInt(p.mhhon054.value,10) +
            parseInt(p.mhhon055.value,10) +
            parseInt(p.mhhon056.value,10) +
            parseInt(p.mhhon057.value,10) +
            parseInt(p.mhhon058.value,10) +
            parseInt(p.mhhon059.value,10) +
            parseInt(p.mhhon060.value,10) +
            parseInt(p.mhhon061.value,10) +
            parseInt(p.mhhon062.value,10) +
            parseInt(p.mhhon063.value,10) +
            parseInt(p.mhhon064.value,10) +
            parseInt(p.mhhon065.value,10) +
            parseInt(p.mhhon066.value,10) +
            parseInt(p.mhhon067.value,10) +
            parseInt(p.mhhon068.value,10) +
            parseInt(p.mhhon069.value,10) +
            parseInt(p.mhhon070.value,10) +
            parseInt(p.mhhon071.value,10) +
            parseInt(p.mhhon072.value,10) +
            parseInt(p.mhhon073.value,10) +
            parseInt(p.mhhon074.value,10) +
            parseInt(p.mhhon075.value,10) +
            parseInt(p.mhhon076.value,10) +
            parseInt(p.mhhon077.value,10)
   Dataset0yValues += summary1 + ',' +
                      summary2 + ',' +
                      summary3 + ',' +
                      summary4 + ',' +
                      summary5 + ',' +
                      summary6 +
//                      summary9 +
                      '">'
}
function MakeDatasetSummary1(DataSet) {
   if(document.GraphValues.dataset1.value=="~~~~~~~~~~~~~~~~"){
      return;}
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '1 Behavioural Problems,' +
                     '2 Impairment,' +
                     '3 Delusions/Hallucinations,' +
                     '4 Depression Problems,' +
                     '5 Symptomatic Problems,' +
                     '6 Social Problems,' +
//                     '9 Total Score' +
                     '">'
            p=document.GraphValues;
            p.mhhon031b.value=p.mhhon031b.value-0
            p.mhhon032b.value=p.mhhon032b.value-0
            p.mhhon033b.value=p.mhhon033b.value-0
            p.mhhon034b.value=p.mhhon034b.value-0
            p.mhhon035b.value=p.mhhon035b.value-0
            p.mhhon036b.value=p.mhhon036b.value-0
            p.mhhon037b.value=p.mhhon037b.value-0
            p.mhhon038b.value=p.mhhon038b.value-0
            p.mhhon041b.value=p.mhhon041b.value-0
            p.mhhon042b.value=p.mhhon042b.value-0
            p.mhhon043b.value=p.mhhon043b.value-0
            p.mhhon044b.value=p.mhhon044b.value-0
            p.mhhon045b.value=p.mhhon045b.value-0
            p.mhhon046b.value=p.mhhon046b.value-0
            p.mhhon047b.value=p.mhhon047b.value-0
            p.mhhon048b.value=p.mhhon048b.value-0
            p.mhhon049b.value=p.mhhon049b.value-0
            p.mhhon050b.value=p.mhhon050b.value-0
            p.mhhon051b.value=p.mhhon051b.value-0
            p.mhhon052b.value=p.mhhon052b.value-0
            p.mhhon053b.value=p.mhhon053b.value-0
            p.mhhon054b.value=p.mhhon054b.value-0
            p.mhhon055b.value=p.mhhon055b.value-0
            p.mhhon056b.value=p.mhhon056b.value-0
            p.mhhon057b.value=p.mhhon057b.value-0
            p.mhhon058b.value=p.mhhon058b.value-0
            p.mhhon059b.value=p.mhhon059b.value-0
            p.mhhon060b.value=p.mhhon060b.value-0
            p.mhhon061b.value=p.mhhon061b.value-0
            p.mhhon062b.value=p.mhhon062b.value-0
            p.mhhon063b.value=p.mhhon063b.value-0
            p.mhhon064b.value=p.mhhon064b.value-0
            p.mhhon065b.value=p.mhhon065b.value-0
            p.mhhon066b.value=p.mhhon066b.value-0
            p.mhhon067b.value=p.mhhon067b.value-0
            p.mhhon068b.value=p.mhhon068b.value-0
            p.mhhon069b.value=p.mhhon069b.value-0
            p.mhhon070b.value=p.mhhon070b.value-0
            p.mhhon071b.value=p.mhhon071b.value-0
            p.mhhon072b.value=p.mhhon072b.value-0
            p.mhhon073b.value=p.mhhon073b.value-0
            p.mhhon074b.value=p.mhhon074b.value-0
            p.mhhon075b.value=p.mhhon075b.value-0
            p.mhhon076b.value=p.mhhon076b.value-0
            p.mhhon077b.value=p.mhhon077b.value-0
   summary1=parseInt(p.mhhon031b.value,10) +
            parseInt(p.mhhon033b.value,10) +
            parseInt(p.mhhon045b.value,10) +
            parseInt(p.mhhon047b.value,10) +
            parseInt(p.mhhon048b.value,10) +
            parseInt(p.mhhon049b.value,10)
   summary2=parseInt(p.mhhon034b.value,10) +
            parseInt(p.mhhon035b.value,10) +
            parseInt(p.mhhon050b.value,10) +
            parseInt(p.mhhon051b.value,10)
   summary3=parseInt(p.mhhon036b.value,10)
   summary4=parseInt(p.mhhon032b.value,10) +
            parseInt(p.mhhon037b.value,10) +
            parseInt(p.mhhon038b.value,10) +
            parseInt(p.mhhon041b.value,10)
   summary5=parseInt(p.mhhon034b.value,10) +
            parseInt(p.mhhon035b.value,10) +
            parseInt(p.mhhon052b.value,10) +
            parseInt(p.mhhon053b.value,10) +
            parseInt(p.mhhon054b.value,10)
   summary6=parseInt(p.mhhon041b.value,10) +
            parseInt(p.mhhon042b.value,10) +
            parseInt(p.mhhon043b.value,10) +
            parseInt(p.mhhon044b.value,10)
   summary9=parseInt(p.mhhon031b.value,10) +
            parseInt(p.mhhon032b.value,10) +
            parseInt(p.mhhon033b.value,10) +
            parseInt(p.mhhon034b.value,10) +
            parseInt(p.mhhon035b.value,10) +
            parseInt(p.mhhon036b.value,10) +
            parseInt(p.mhhon037b.value,10) +
            parseInt(p.mhhon038b.value,10) +
            parseInt(p.mhhon041b.value,10) +
            parseInt(p.mhhon042b.value,10) +
            parseInt(p.mhhon043b.value,10) +
            parseInt(p.mhhon044b.value,10) +
            parseInt(p.mhhon045b.value,10) +
            parseInt(p.mhhon046b.value,10) +
            parseInt(p.mhhon047b.value,10) +
            parseInt(p.mhhon048b.value,10) +
            parseInt(p.mhhon049b.value,10) +
            parseInt(p.mhhon050b.value,10) +
            parseInt(p.mhhon051b.value,10) +
            parseInt(p.mhhon052b.value,10) +
            parseInt(p.mhhon053b.value,10) +
            parseInt(p.mhhon054b.value,10) +
            parseInt(p.mhhon055b.value,10) +
            parseInt(p.mhhon056b.value,10) +
            parseInt(p.mhhon057b.value,10) +
            parseInt(p.mhhon058b.value,10) +
            parseInt(p.mhhon059b.value,10) +
            parseInt(p.mhhon060b.value,10) +
            parseInt(p.mhhon061b.value,10) +
            parseInt(p.mhhon062b.value,10) +
            parseInt(p.mhhon063b.value,10) +
            parseInt(p.mhhon064b.value,10) +
            parseInt(p.mhhon065b.value,10) +
            parseInt(p.mhhon066b.value,10) +
            parseInt(p.mhhon067b.value,10) +
            parseInt(p.mhhon068b.value,10) +
            parseInt(p.mhhon069b.value,10) +
            parseInt(p.mhhon070b.value,10) +
            parseInt(p.mhhon071b.value,10) +
            parseInt(p.mhhon072b.value,10) +
            parseInt(p.mhhon073b.value,10) +
            parseInt(p.mhhon074b.value,10) +
            parseInt(p.mhhon075b.value,10) +
            parseInt(p.mhhon076b.value,10) +
            parseInt(p.mhhon077b.value,10)
   Dataset0yValues += summary1 + ',' +
                      summary2 + ',' +
                      summary3 + ',' +
                      summary4 + ',' +
                      summary5 + ',' +
                      summary6 +
//                      summary9 +
                      '">'
}
function MakeDatasetSummary2(DataSet) {
   if(document.GraphValues.dataset2.value=="~~~~~~~~~~~~~~~~"){
      return;}
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '1 Behavioural Problems,' +
                     '2 Impairment,' +
                     '3 Delusions/Hallucinations,' +
                     '4 Depression Problems,' +
                     '5 Symptomatic Problems,' +
                     '6 Social Problems,' +
//                     '9 Total Score' +
                     '">'
            p=document.GraphValues;
            p.mhhon031c.value=p.mhhon031c.value-0
            p.mhhon032c.value=p.mhhon032c.value-0
            p.mhhon033c.value=p.mhhon033c.value-0
            p.mhhon034c.value=p.mhhon034c.value-0
            p.mhhon035c.value=p.mhhon035c.value-0
            p.mhhon036c.value=p.mhhon036c.value-0
            p.mhhon037c.value=p.mhhon037c.value-0
            p.mhhon038c.value=p.mhhon038c.value-0
            p.mhhon041c.value=p.mhhon041c.value-0
            p.mhhon042c.value=p.mhhon042c.value-0
            p.mhhon043c.value=p.mhhon043c.value-0
            p.mhhon044c.value=p.mhhon044c.value-0
            p.mhhon045c.value=p.mhhon045c.value-0
            p.mhhon046c.value=p.mhhon046c.value-0
            p.mhhon047c.value=p.mhhon047c.value-0
            p.mhhon048c.value=p.mhhon048c.value-0
            p.mhhon049c.value=p.mhhon049c.value-0
            p.mhhon050c.value=p.mhhon050c.value-0
            p.mhhon051c.value=p.mhhon051c.value-0
            p.mhhon052c.value=p.mhhon052c.value-0
            p.mhhon053c.value=p.mhhon053c.value-0
            p.mhhon054c.value=p.mhhon054c.value-0
            p.mhhon055c.value=p.mhhon055c.value-0
            p.mhhon056c.value=p.mhhon056c.value-0
            p.mhhon057c.value=p.mhhon057c.value-0
            p.mhhon058c.value=p.mhhon058c.value-0
            p.mhhon059c.value=p.mhhon059c.value-0
            p.mhhon060c.value=p.mhhon060c.value-0
            p.mhhon061c.value=p.mhhon061c.value-0
            p.mhhon062c.value=p.mhhon062c.value-0
            p.mhhon063c.value=p.mhhon063c.value-0
            p.mhhon064c.value=p.mhhon064c.value-0
            p.mhhon065c.value=p.mhhon065c.value-0
            p.mhhon066c.value=p.mhhon066c.value-0
            p.mhhon067c.value=p.mhhon067c.value-0
            p.mhhon068c.value=p.mhhon068c.value-0
            p.mhhon069c.value=p.mhhon069c.value-0
            p.mhhon070c.value=p.mhhon070c.value-0
            p.mhhon071c.value=p.mhhon071c.value-0
            p.mhhon072c.value=p.mhhon072c.value-0
            p.mhhon073c.value=p.mhhon073c.value-0
            p.mhhon074c.value=p.mhhon074c.value-0
            p.mhhon075c.value=p.mhhon075c.value-0
            p.mhhon076c.value=p.mhhon076c.value-0
            p.mhhon077c.value=p.mhhon077c.value-0
   summary1=parseInt(p.mhhon031c.value,10) +
            parseInt(p.mhhon033c.value,10) +
            parseInt(p.mhhon045c.value,10) +
            parseInt(p.mhhon047c.value,10) +
            parseInt(p.mhhon048c.value,10) +
            parseInt(p.mhhon049c.value,10)
   summary2=parseInt(p.mhhon034c.value,10) +
            parseInt(p.mhhon035c.value,10) +
            parseInt(p.mhhon050c.value,10) +
            parseInt(p.mhhon051c.value,10)
   summary3=parseInt(p.mhhon036c.value,10)
   summary4=parseInt(p.mhhon032c.value,10) +
            parseInt(p.mhhon037c.value,10) +
            parseInt(p.mhhon038c.value,10) +
            parseInt(p.mhhon041c.value,10)
   summary5=parseInt(p.mhhon034c.value,10) +
            parseInt(p.mhhon035c.value,10) +
            parseInt(p.mhhon052c.value,10) +
            parseInt(p.mhhon053c.value,10) +
            parseInt(p.mhhon054c.value,10)
   summary6=parseInt(p.mhhon041c.value,10) +
            parseInt(p.mhhon042c.value,10) +
            parseInt(p.mhhon043c.value,10) +
            parseInt(p.mhhon044c.value,10)
   summary9=parseInt(p.mhhon031c.value,10) +
            parseInt(p.mhhon032c.value,10) +
            parseInt(p.mhhon033c.value,10) +
            parseInt(p.mhhon034c.value,10) +
            parseInt(p.mhhon035c.value,10) +
            parseInt(p.mhhon036c.value,10) +
            parseInt(p.mhhon037c.value,10) +
            parseInt(p.mhhon038c.value,10) +
            parseInt(p.mhhon041c.value,10) +
            parseInt(p.mhhon042c.value,10) +
            parseInt(p.mhhon043c.value,10) +
            parseInt(p.mhhon044c.value,10) +
            parseInt(p.mhhon045c.value,10) +
            parseInt(p.mhhon046c.value,10) +
            parseInt(p.mhhon047c.value,10) +
            parseInt(p.mhhon048c.value,10) +
            parseInt(p.mhhon049c.value,10) +
            parseInt(p.mhhon050c.value,10) +
            parseInt(p.mhhon051c.value,10) +
            parseInt(p.mhhon052c.value,10) +
            parseInt(p.mhhon053c.value,10) +
            parseInt(p.mhhon054c.value,10) +
            parseInt(p.mhhon055c.value,10) +
            parseInt(p.mhhon056c.value,10) +
            parseInt(p.mhhon057c.value,10) +
            parseInt(p.mhhon058c.value,10) +
            parseInt(p.mhhon059c.value,10) +
            parseInt(p.mhhon060c.value,10) +
            parseInt(p.mhhon061c.value,10) +
            parseInt(p.mhhon062c.value,10) +
            parseInt(p.mhhon063c.value,10) +
            parseInt(p.mhhon064c.value,10) +
            parseInt(p.mhhon065c.value,10) +
            parseInt(p.mhhon066c.value,10) +
            parseInt(p.mhhon067c.value,10) +
            parseInt(p.mhhon068c.value,10) +
            parseInt(p.mhhon069c.value,10) +
            parseInt(p.mhhon070c.value,10) +
            parseInt(p.mhhon071c.value,10) +
            parseInt(p.mhhon072c.value,10) +
            parseInt(p.mhhon073c.value,10) +
            parseInt(p.mhhon074c.value,10) +
            parseInt(p.mhhon075c.value,10) +
            parseInt(p.mhhon076c.value,10) +
            parseInt(p.mhhon077c.value,10)
   Dataset0yValues += summary1 + ',' +
                      summary2 + ',' +
                      summary3 + ',' +
                      summary4 + ',' +
                      summary5 + ',' +
                      summary6 +
//                      summary9 +
                      '">'
}

function MakeDatasetSummary3(DataSet) {
   if(document.GraphValues.dataset3.value=="~~~~~~~~~~~~~~~~"){
      return;}
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '1 Behavioural Problems,' +
                     '2 Impairment,' +
                     '3 Delusions/Hallucinations,' +
                     '4 Depression Problems,' +
                     '5 Symptomatic Problems,' +
                     '6 Social Problems,' +
//                     '9 Total Score' +
                     '">'

            p=document.GraphValues;
            p.mhhon031d.value=p.mhhon031d.value-0
            p.mhhon032d.value=p.mhhon032d.value-0
            p.mhhon033d.value=p.mhhon033d.value-0
            p.mhhon034d.value=p.mhhon034d.value-0
            p.mhhon035d.value=p.mhhon035d.value-0
            p.mhhon036d.value=p.mhhon036d.value-0
            p.mhhon037d.value=p.mhhon037d.value-0
            p.mhhon038d.value=p.mhhon038d.value-0
            p.mhhon041d.value=p.mhhon041d.value-0
            p.mhhon042d.value=p.mhhon042d.value-0
            p.mhhon043d.value=p.mhhon043d.value-0
            p.mhhon044d.value=p.mhhon044d.value-0
            p.mhhon045d.value=p.mhhon045d.value-0
            p.mhhon046d.value=p.mhhon046d.value-0
            p.mhhon047d.value=p.mhhon047d.value-0
            p.mhhon048d.value=p.mhhon048d.value-0
            p.mhhon049d.value=p.mhhon049d.value-0
            p.mhhon050d.value=p.mhhon050d.value-0
            p.mhhon051d.value=p.mhhon051d.value-0
            p.mhhon052d.value=p.mhhon052d.value-0
            p.mhhon053d.value=p.mhhon053d.value-0
            p.mhhon054d.value=p.mhhon054d.value-0
            p.mhhon055d.value=p.mhhon055d.value-0
            p.mhhon056d.value=p.mhhon056d.value-0
            p.mhhon057d.value=p.mhhon057d.value-0
            p.mhhon058d.value=p.mhhon058d.value-0
            p.mhhon059d.value=p.mhhon059d.value-0
            p.mhhon060d.value=p.mhhon060d.value-0
            p.mhhon061d.value=p.mhhon061d.value-0
            p.mhhon062d.value=p.mhhon062d.value-0
            p.mhhon063d.value=p.mhhon063d.value-0
            p.mhhon064d.value=p.mhhon064d.value-0
            p.mhhon065d.value=p.mhhon065d.value-0
            p.mhhon066d.value=p.mhhon066d.value-0
            p.mhhon067d.value=p.mhhon067d.value-0
            p.mhhon068d.value=p.mhhon068d.value-0
            p.mhhon069d.value=p.mhhon069d.value-0
            p.mhhon070d.value=p.mhhon070d.value-0
            p.mhhon071d.value=p.mhhon071d.value-0
            p.mhhon072d.value=p.mhhon072d.value-0
            p.mhhon073d.value=p.mhhon073d.value-0
            p.mhhon074d.value=p.mhhon074d.value-0
            p.mhhon075d.value=p.mhhon075d.value-0
            p.mhhon076d.value=p.mhhon076d.value-0
            p.mhhon077d.value=p.mhhon077d.value-0
   summary1=parseInt(p.mhhon031d.value,10) +
            parseInt(p.mhhon033d.value,10) +
            parseInt(p.mhhon045d.value,10) +
            parseInt(p.mhhon047d.value,10) +
            parseInt(p.mhhon048d.value,10) +
            parseInt(p.mhhon049d.value,10)
   summary2=parseInt(p.mhhon034d.value,10) +
            parseInt(p.mhhon035d.value,10) +
            parseInt(p.mhhon050d.value,10) +
            parseInt(p.mhhon051d.value,10)
   summary3=parseInt(p.mhhon036d.value,10)
   summary4=parseInt(p.mhhon032d.value,10) +
            parseInt(p.mhhon037d.value,10) +
            parseInt(p.mhhon038d.value,10) +
            parseInt(p.mhhon041d.value,10)
   summary5=parseInt(p.mhhon034d.value,10) +
            parseInt(p.mhhon035d.value,10) +
            parseInt(p.mhhon052d.value,10) +
            parseInt(p.mhhon053d.value,10) +
            parseInt(p.mhhon054d.value,10)
   summary6=parseInt(p.mhhon041d.value,10) +
            parseInt(p.mhhon042d.value,10) +
            parseInt(p.mhhon043d.value,10) +
            parseInt(p.mhhon044d.value,10)
   summary9=parseInt(p.mhhon031d.value,10) +
            parseInt(p.mhhon032d.value,10) +
            parseInt(p.mhhon033d.value,10) +
            parseInt(p.mhhon034d.value,10) +
            parseInt(p.mhhon035d.value,10) +
            parseInt(p.mhhon036d.value,10) +
            parseInt(p.mhhon037d.value,10) +
            parseInt(p.mhhon038d.value,10) +
            parseInt(p.mhhon041d.value,10) +
            parseInt(p.mhhon042d.value,10) +
            parseInt(p.mhhon043d.value,10) +
            parseInt(p.mhhon044d.value,10) +
            parseInt(p.mhhon045d.value,10) +
            parseInt(p.mhhon046d.value,10) +
            parseInt(p.mhhon047d.value,10) +
            parseInt(p.mhhon048d.value,10) +
            parseInt(p.mhhon049d.value,10) +
            parseInt(p.mhhon050d.value,10) +
            parseInt(p.mhhon051d.value,10) +
            parseInt(p.mhhon052d.value,10) +
            parseInt(p.mhhon053d.value,10) +
            parseInt(p.mhhon054d.value,10) +
            parseInt(p.mhhon055d.value,10) +
            parseInt(p.mhhon056d.value,10) +
            parseInt(p.mhhon057d.value,10) +
            parseInt(p.mhhon058d.value,10) +
            parseInt(p.mhhon059d.value,10) +
            parseInt(p.mhhon060d.value,10) +
            parseInt(p.mhhon061d.value,10) +
            parseInt(p.mhhon062d.value,10) +
            parseInt(p.mhhon063d.value,10) +
            parseInt(p.mhhon064d.value,10) +
            parseInt(p.mhhon065d.value,10) +
            parseInt(p.mhhon066d.value,10) +
            parseInt(p.mhhon067d.value,10) +
            parseInt(p.mhhon068d.value,10) +
            parseInt(p.mhhon069d.value,10) +
            parseInt(p.mhhon070d.value,10) +
            parseInt(p.mhhon071d.value,10) +
            parseInt(p.mhhon072d.value,10) +
            parseInt(p.mhhon073d.value,10) +
            parseInt(p.mhhon074d.value,10) +
            parseInt(p.mhhon075d.value,10) +
            parseInt(p.mhhon076d.value,10) +
            parseInt(p.mhhon077d.value,10)
   Dataset0yValues += summary1 + ',' +
                      summary2 + ',' +
                      summary3 + ',' +
                      summary4 + ',' +
                      summary5 + ',' +
                      summary6 +
//                      summary9 +
                      '">'
}

function MakeDatasetSummary4(DataSet) {
   if(document.GraphValues.dataset4.value=="~~~~~~~~~~~~~~~~"){
      return;}
   Dataset0yValues = '<param name=dataset'+DataSet+'yValues value="';
   Dataset0Labels = '<param name=dataset'+DataSet+'Labels value="';
   Dataset0Labels += '1 Behavioural Problems,' +
                     '2 Impairment,' +
                     '3 Delusions/Hallucinations,' +
                     '4 Depression Problems,' +
                     '5 Symptomatic Problems,' +
                     '6 Social Problems,' +
//                     '9 Total Score' +
                     '">'

            p=document.GraphValues;
            p.mhhon031e.value=p.mhhon031e.value-0
            p.mhhon032e.value=p.mhhon032e.value-0
            p.mhhon033e.value=p.mhhon033e.value-0
            p.mhhon034e.value=p.mhhon034e.value-0
            p.mhhon035e.value=p.mhhon035e.value-0
            p.mhhon036e.value=p.mhhon036e.value-0
            p.mhhon037e.value=p.mhhon037e.value-0
            p.mhhon038e.value=p.mhhon038e.value-0
            p.mhhon041e.value=p.mhhon041e.value-0
            p.mhhon042e.value=p.mhhon042e.value-0
            p.mhhon043e.value=p.mhhon043e.value-0
            p.mhhon044e.value=p.mhhon044e.value-0
            p.mhhon045e.value=p.mhhon045e.value-0
            p.mhhon046e.value=p.mhhon046e.value-0
            p.mhhon047e.value=p.mhhon047e.value-0
            p.mhhon048e.value=p.mhhon048e.value-0
            p.mhhon049e.value=p.mhhon049e.value-0
            p.mhhon050e.value=p.mhhon050e.value-0
            p.mhhon051e.value=p.mhhon051e.value-0
            p.mhhon052e.value=p.mhhon052e.value-0
            p.mhhon053e.value=p.mhhon053e.value-0
            p.mhhon054e.value=p.mhhon054e.value-0
            p.mhhon055e.value=p.mhhon055e.value-0
            p.mhhon056e.value=p.mhhon056e.value-0
            p.mhhon057e.value=p.mhhon057e.value-0
            p.mhhon058e.value=p.mhhon058e.value-0
            p.mhhon059e.value=p.mhhon059e.value-0
            p.mhhon060e.value=p.mhhon060e.value-0
            p.mhhon061e.value=p.mhhon061e.value-0
            p.mhhon062e.value=p.mhhon062e.value-0
            p.mhhon063e.value=p.mhhon063e.value-0
            p.mhhon064e.value=p.mhhon064e.value-0
            p.mhhon065e.value=p.mhhon065e.value-0
            p.mhhon066e.value=p.mhhon066e.value-0
            p.mhhon067e.value=p.mhhon067e.value-0
            p.mhhon068e.value=p.mhhon068e.value-0
            p.mhhon069e.value=p.mhhon069e.value-0
            p.mhhon070e.value=p.mhhon070e.value-0
            p.mhhon071e.value=p.mhhon071e.value-0
            p.mhhon072e.value=p.mhhon072e.value-0
            p.mhhon073e.value=p.mhhon073e.value-0
            p.mhhon074e.value=p.mhhon074e.value-0
            p.mhhon075e.value=p.mhhon075e.value-0
            p.mhhon076e.value=p.mhhon076e.value-0
            p.mhhon077e.value=p.mhhon077e.value-0
   summary1=parseInt(p.mhhon031e.value,10) +
            parseInt(p.mhhon033e.value,10) +
            parseInt(p.mhhon045e.value,10) +
            parseInt(p.mhhon047e.value,10) +
            parseInt(p.mhhon048e.value,10) +
            parseInt(p.mhhon049e.value,10)
   summary2=parseInt(p.mhhon034e.value,10) +
            parseInt(p.mhhon035e.value,10) +
            parseInt(p.mhhon050e.value,10) +
            parseInt(p.mhhon051e.value,10)
   summary3=parseInt(p.mhhon036e.value,10)
   summary4=parseInt(p.mhhon032e.value,10) +
            parseInt(p.mhhon037e.value,10) +
            parseInt(p.mhhon038e.value,10) +
            parseInt(p.mhhon041e.value,10)
   summary5=parseInt(p.mhhon034e.value,10) +
            parseInt(p.mhhon035e.value,10) +
            parseInt(p.mhhon052e.value,10) +
            parseInt(p.mhhon053e.value,10) +
            parseInt(p.mhhon054e.value,10)
   summary6=parseInt(p.mhhon041e.value,10) +
            parseInt(p.mhhon042e.value,10) +
            parseInt(p.mhhon043e.value,10) +
            parseInt(p.mhhon044e.value,10)
   summary9=parseInt(p.mhhon031e.value,10) +
            parseInt(p.mhhon032e.value,10) +
            parseInt(p.mhhon033e.value,10) +
            parseInt(p.mhhon034e.value,10) +
            parseInt(p.mhhon035e.value,10) +
            parseInt(p.mhhon036e.value,10) +
            parseInt(p.mhhon037e.value,10) +
            parseInt(p.mhhon038e.value,10) +
            parseInt(p.mhhon041e.value,10) +
            parseInt(p.mhhon042e.value,10) +
            parseInt(p.mhhon043e.value,10) +
            parseInt(p.mhhon044e.value,10) +
            parseInt(p.mhhon045e.value,10) +
            parseInt(p.mhhon046e.value,10) +
            parseInt(p.mhhon047e.value,10) +
            parseInt(p.mhhon048e.value,10) +
            parseInt(p.mhhon049e.value,10) +
            parseInt(p.mhhon050e.value,10) +
            parseInt(p.mhhon051e.value,10) +
            parseInt(p.mhhon052e.value,10) +
            parseInt(p.mhhon053e.value,10) +
            parseInt(p.mhhon054e.value,10) +
            parseInt(p.mhhon055e.value,10) +
            parseInt(p.mhhon056e.value,10) +
            parseInt(p.mhhon057e.value,10) +
            parseInt(p.mhhon058e.value,10) +
            parseInt(p.mhhon059e.value,10) +
            parseInt(p.mhhon060e.value,10) +
            parseInt(p.mhhon061e.value,10) +
            parseInt(p.mhhon062e.value,10) +
            parseInt(p.mhhon063e.value,10) +
            parseInt(p.mhhon064e.value,10) +
            parseInt(p.mhhon065e.value,10) +
            parseInt(p.mhhon066e.value,10) +
            parseInt(p.mhhon067e.value,10) +
            parseInt(p.mhhon068e.value,10) +
            parseInt(p.mhhon069e.value,10) +
            parseInt(p.mhhon070e.value,10) +
            parseInt(p.mhhon071e.value,10) +
            parseInt(p.mhhon072e.value,10) +
            parseInt(p.mhhon073e.value,10) +
            parseInt(p.mhhon074e.value,10) +
            parseInt(p.mhhon075e.value,10) +
            parseInt(p.mhhon076e.value,10) +
            parseInt(p.mhhon077e.value,10)
   Dataset0yValues += summary1 + ',' +
                      summary2 + ',' +
                      summary3 + ',' +
                      summary4 + ',' +
                      summary5 + ',' +
                      summary6 +
//                      summary9 +
                      '">'
}
