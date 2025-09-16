//jsVersion  : V11.03.00
//----------------------------------------------------------------------
// Functions to Graph Observations in CLIWEB02
//
// Author  : B.G.Ackland 22.11.1999
//
//----------------------------------------------------------------------
function GraphPulse() {
GraphHeading()
GraphString+='<param name=titleFont  value="Arial,12,1">' +
            ' <param name=titleString value="Pulse"> ' +
            ' <param name=scalingType value="3"> ' +
            ' <param name=dataset0Image value="images/GraphTickBlue.gif"> ' +
            ' <param name=dataset0dateValues value="' + 
            document.GraphData.PulsDates.value + '"> ' +
            ' <param name=dataset0yValues value="' +
            document.GraphData.PulsValu.value + '"> ' +
            '</applet>'
GraphFooter()
GraphLocation.innerHTML=GraphString;
}
function GraphResps() {
GraphHeading()
GraphString+='<param name=titleFont  value="Arial,12,1">' +
            ' <param name=titleString value="Respiration"> ' +
            ' <param name=scalingType value="3"> ' +
            ' <param name=dataset0Image value="images/GraphTickBlue.gif"> ' +
            ' <param name=dataset0dateValues value="' + 
            document.GraphData.RespDates.value + '"> ' + 
            ' <param name=dataset0yValues value="' +
            document.GraphData.RespValu.value + '"> ' +
            '</applet>'
GraphFooter()
GraphLocation.innerHTML=GraphString;
}
function GraphTemps() {
GraphHeading()
GraphString+='<param name=titleFont  value="Arial,12,1">' +
            ' <param name=titleString value="Temperature"> ' +
            ' <param name=scalingType value="3"> ' +
            ' <param name=dataset0Image value="images/GraphTickBlue.gif"> ' +
            ' <param name=dataset0dateValues value="' + 
            document.GraphData.TempDates.value + '"> ' + 
            ' <param name=dataset0yValues value="' +
            document.GraphData.TempValu.value + '"> ' +
            '</applet>'
GraphFooter()
GraphLocation.innerHTML=GraphString;
}
function GraphBP() {
GraphHeading()
GraphString+='<param name=titleFont  value="Arial,12,1">' +
            '<param name=scalingType value="2">' +
            '<param name=legendOn value="Anything">' +
            '<param name=legendHorizontal value="Anything">' +
            '<param name=legendLabelFont value="Arial,12,1">' +
            '<param name=labelsOn value="Anything">' +
            '<param name=legendlly value=".85">' +
            '<param name=dataset0name value="Pulse">' +
            '<param name=dataset1name value="Systolic">' +
            '<param name=dataset2name value="Diastolic">' +
            '<param name=dataset0Image value="images/GraphTickBlue.gif">' +
            '<param name=dataset1Image value="images/GraphTickRed.gif">' +
            '<param name=dataset2Image value="images/GraphTickGreen.gif">' +
            ' <param name=dataset0dateValues value="' + 
            document.GraphData.PulsDates.value + '"> ' + 
            ' <param name=dataset1dateValues value="' + 
            document.GraphData.SystDates.value + '"> ' + 
            ' <param name=dataset2dateValues value="' + 
            document.GraphData.DiasDates.value + '"> ' + 
            ' <param name=dataset0yValues value="' +
            document.GraphData.PulsValu.value + '"> ' +
            ' <param name=dataset1yValues value="' +
            document.GraphData.SystValu.value + '"> ' +
            ' <param name=dataset2yValues value="' +
            document.GraphData.DiasValu.value + '"> ' +
            '</applet>'
GraphFooter()
GraphLocation.innerHTML=GraphString;
}
function GraphFooter() {
GraphString+='<tr><td><table border=0 bgcolor=#cccccc width=100%></td>' +
            '<td width=90><a onclick=GraphPulse()>' +
            '<img src=../images/GraphIcon.gif border=0 hspace=4>' +
            'Pulse</a></td>' +
            '<td width=90><a onclick=GraphTemps()>' +
            '<img src=../images/GraphIcon.gif border=0 hspace=4>' +
            'Temperature</a></td>' +
            '<td width=90><a onclick=GraphResps()>' +
            '<img src=../images/GraphIcon.gif border=0 hspace=4>' +
            'Respiration</a></td>' +
            '<td width=90><a onclick=GraphBP()>' +
            '<img src=../images/GraphIcon.gif border=0 hspace=4>' +
            'BP/Pulse</a></td>' +
            '<td width=90><a onclick=GraphAll()>' +
            '<img src=../images/GraphIcon.gif border=0 hspace=4></a>' +
            '<a onclick=GraphAll1()>' +
            '<img src=../images/GraphIcon.gif border=0 hspace=4></a>' +
            'All</td>' +
            '</tr></table>' +
            '</td></tr></table>' 
}
function GraphHeading() {
GraphLocation.style.height=300
GraphLocation.style.width=750
GraphLocation.style.top=0
GraphLocation.style.left=(document.body.clientWidth - 
                          GraphLocation.style.posWidth)/2
GraphLocation.style.display="";
GraphString = '<p align=center>Loading Graph ...'
GraphLocation.innerHTML=GraphString;

GraphString='<table cellspacing=0 cellpadding=0 border=1>' +
            '<tr><td align=right bgcolor=#cccccc>' +
            '<img src=../images/ExitIcon.gif border=0 ' + 
            'onclick=CloseJavaChart()>' +
            '</td></tr>' +
            '<tr><td>' +
            '<applet code=javachart.applet.dateLineApp.class ' +
            ' codebase=../ width=750 height=300> ' +
            '<param name=CopyrightNotification ' +
            '  value="JavaChart is a copyrighted work,' +
            ' and subject to full legal protection"> ' 
}
function CloseJavaChart() {
 GraphLocation.style.display="none";
}
function GraphAll() {
 GraphLocation.style.height=300
 GraphLocation.style.width=750
 GraphLocation.style.top=0
 GraphLocation.style.left=(document.body.clientWidth - 
                          GraphLocation.style.posWidth)/2
 GraphLocation.style.display="";
 GraphLocation.style.display="";
 GraphString = '<p align=center>Loading Graph ...'
 GraphLocation.innerHTML=GraphString;

 GraphString='<table cellspacing=0 cellpadding=0 border=1>' +
             '<tr><td align=right bgcolor=#cccccc>' +
             '<img src=../images/ExitIcon.gif border=0 ' + 
             'onclick=CloseJavaChart()>' +
             '</td></tr>' +
             '<tr><td>' 
//
//Graph All
//
GraphString+='<applet code=javachart.applet.dateLineApp.class ' +
            ' codebase=../ width=750 height=300> ' +
            ' <param name=CopyrightNotification ' +
            '  value="JavaChart is a copyrighted work,' +
            ' and subject to full legal protection"> ' +
            ' <param name=titleFont  value="Arial,12,1">' +
            ' <param name=scalingType value="2">' +
            ' <param name=legendOn value="Anything">' +
            ' <param name=legendHorizontal value="Anything">' +
            ' <param name=legendLabelFont value="Arial,12,1">' +
            ' <param name=legendlly value=".85">' +
            ' <param name=legendllx value=".05">' +
            ' <param name=iconWidth value=".05">' +
            ' <param name=dataset0Image value="images/GraphTickBlue.gif">' +
            ' <param name=dataset1Image value="images/GraphTickRed.gif">' +
            ' <param name=dataset2Image value="images/GraphTickGreen.gif">' +
            ' <param name=dataset3Image value="images/GraphTickCyan.gif"> ' +
            ' <param name=dataset4Image value="images/GraphTickYellow.gif"> ' +
            ' <param name=dataset0name value="Pulse">' +
            ' <param name=dataset1name value="Systolic">' +
            ' <param name=dataset2name value="Diastolic">' +
            ' <param name=dataset3name value="Resp">' +
            ' <param name=dataset4name value="Temp">' +
            ' <param name=dataset0dateValues value="' + 
            document.GraphData.PulsDates.value + '"> ' + 
            ' <param name=dataset1dateValues value="' + 
            document.GraphData.SystDates.value + '"> ' + 
            ' <param name=dataset2dateValues value="' + 
            document.GraphData.DiasDates.value + '"> ' + 
            ' <param name=dataset3dateValues value="' + 
            document.GraphData.RespDates.value + '"> ' + 
            ' <param name=dataset4dateValues value="' + 
            document.GraphData.TempDates.value + '"> ' + 
            ' <param name=dataset0yValues value="' +
            document.GraphData.PulsValu.value + '"> ' +
            ' <param name=dataset1yValues value="' +
            document.GraphData.SystValu.value + '"> ' +
            ' <param name=dataset2yValues value="' +
            document.GraphData.DiasValu.value + '"> ' +
            ' <param name=dataset3yValues value="' +
            document.GraphData.RespValu.value + '"> ' +
            ' <param name=dataset4yValues value="' +
            document.GraphData.TempValu.value + '"> ' +
            '</applet>'
GraphFooter()
GraphLocation.innerHTML=GraphString;
}
function GraphAll1() {
 GraphLocation.style.height=300
 GraphLocation.style.width=750
 GraphLocation.style.top=0
 GraphLocation.style.left=(document.body.clientWidth - 
                          GraphLocation.style.posWidth)/2
 GraphLocation.style.display="";
 GraphLocation.style.display="";
 GraphString = '<p align=center>Loading Graph ...'
 GraphLocation.innerHTML=GraphString;

 GraphString='<table cellspacing=0 cellpadding=0 border=1>' +
             '<tr><td align=right bgcolor=#cccccc>' +
             '<img src=../images/ExitIcon.gif border=0 ' + 
             'onclick=CloseJavaChart()>' +
             '</td></tr>' +
             '<tr><td>'  +
             '<table cellspacing=0 cellpadding=0 border=0>' +
             '<tr><td>'  
//
//Graph All
//
GraphString+='<applet code=javachart.applet.dateLineApp.class ' +
            ' codebase=../ width=375 height=125> ' +
            ' <param name=CopyrightNotification ' +
            '  value="JavaChart is a copyrighted work,' +
            ' and subject to full legal protection"> ' +
            '<param name=titleFont  value="Arial,12,1">' +
            ' <param name=titleString value="Temperature"> ' +
            ' <param name=scalingType value="3"> ' +
            ' <param name=dataset0Image value="images/GraphTickBlue.gif"> ' +
            ' <param name=dataset0dateValues value="' + 
            document.GraphData.TempDates.value + '"> ' + 
            ' <param name=dataset0yValues value="' +
            document.GraphData.TempValu.value + '"> ' +
            '</applet></td><td>'

GraphString+='<applet code=javachart.applet.dateLineApp.class ' +
            ' codebase=../ width=375 height=125> ' +
            ' <param name=CopyrightNotification ' +
            '  value="JavaChart is a copyrighted work,' +
            ' and subject to full legal protection"> ' +
            '<param name=titleFont  value="Arial,12,1">' +
            ' <param name=titleString value="Respiration"> ' +
            ' <param name=scalingType value="3"> ' +
            ' <param name=dataset0Image value="images/GraphTickBlue.gif"> ' +
            ' <param name=dataset0dateValues value="' + 
            document.GraphData.RespDates.value + '"> ' + 
            ' <param name=dataset0yValues value="' +
            document.GraphData.RespValu.value + '"> ' +
            '</applet></td></tr><tr><td colspan=2>'

GraphString+='<applet code=javachart.applet.dateLineApp.class ' +
            ' codebase=../ width=750 height=250> ' +
            ' <param name=CopyrightNotification ' +
            '  value="JavaChart is a copyrighted work,' +
            ' and subject to full legal protection"> ' +
            ' <param name=titleFont  value="Arial,12,1">' +
            ' <param name=scalingType value="2">' +
            ' <param name=legendOn value="Anything">' +
            ' <param name=legendHorizontal value="Anything">' +
            ' <param name=legendLabelFont value="Arial,12,1">' +
            ' <param name=legendlly value=".85">' +
            ' <param name=legendllx value=".05">' +
            ' <param name=iconWidth value=".05">' +
            ' <param name=dataset0Image value="images/GraphTickBlue.gif">' +
            ' <param name=dataset1Image value="images/GraphTickRed.gif">' +
            ' <param name=dataset2Image value="images/GraphTickGreen.gif">' +
            ' <param name=dataset0name value="Pulse">' +
            ' <param name=dataset1name value="Systolic">' +
            ' <param name=dataset2name value="Diastolic">' +
            ' <param name=dataset0dateValues value="' + 
            document.GraphData.PulsDates.value + '"> ' + 
            ' <param name=dataset1dateValues value="' + 
            document.GraphData.SystDates.value + '"> ' + 
            ' <param name=dataset2dateValues value="' + 
            document.GraphData.DiasDates.value + '"> ' + 
            ' <param name=dataset0yValues value="' +
            document.GraphData.PulsValu.value + '"> ' +
            ' <param name=dataset1yValues value="' +
            document.GraphData.SystValu.value + '"> ' +
            ' <param name=dataset2yValues value="' +
            document.GraphData.DiasValu.value + '"> ' +
            '</applet></td></tr></table>'
GraphFooter()
GraphLocation.innerHTML=GraphString;
}
