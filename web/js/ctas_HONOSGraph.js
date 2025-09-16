// CTAS customisation
// based on js/HONOSGraph.js v10.13.00
// rewritten to use HTML5 canvas instead of out-of-box JavaChart applet
// reasons for replacing JavaChart applet:
//	- JRE has to be installed on every client
//	- JRE only works in Internet Explorer, which has been discontinued
//	- JRE support has been discontinued by developer (Oracle)
//	- JRE has been disabled by most browsers because of security concerns
//	- IE pops up security warnings for the user to click through before chart is rendered
//	- JRE pops up additional console windows while rendering chart
//	- JRE requires TLS 1.0 to be enabled in browser

function GetDataNamesMultiple() {
	var dataNameFields = ["mhhon006","mhhon006b","mhhon006c","mhhon006d","mhhon006e"];
	var dataNames = [];
	for (var i=0; i<dataNameFields.length; i++) {
		dataNames.push(document.getElementById(dataNameFields[i]).value);
	}
	return dataNames;
}

function GetValues(fieldIDs) {
	// note 7 => -1 before calculation
	// hierarchy:  i = dataset, j = values in dataset
	var values = [];
	for (var i=0; i<fieldIDs.length; i++) {
		var tmp = [];
		for (var j=0; j<fieldIDs[i].length; j++) {
		//	tmp.push(document.getElementById(fieldIDs[i][j]).value);
			tmp.push(parseInt(document.getElementById(fieldIDs[i][j]).value-0, 10) == 7 ? -1 : parseInt(document.getElementById(fieldIDs[i][j]).value-0, 10))
		}
		
		zerocount = 0;
		for (var k=0; k<tmp.length; k++) {
			if ((tmp[k] == ".0") || (tmp[k] == 0)) {zerocount++; }
		}
	
		if (tmp.length != zerocount) {
			values.push(tmp);
		}				
	}
	
	for (var i=0; i<values.length; i++) {
		for (var j=0; j<values[i].length; j++) {
			if (values[i][j] == 7) { values[i][j] = -1; }
		}
	}	
	return values;	
}

function GetCalculatedValues(fieldIDs) {
	// note 7 => -1 before calculation
	// hierarchy:  i = dataset, j = values in dataset, k = fields to sum
	var values = [];
	for (var i=0; i<fieldIDs.length; i++) {
		var tmp = [];
		for (var j=0; j<fieldIDs[i].length; j++) {
			var sum = 0;
			for (var k=0; k<fieldIDs[i][j].length; k++) {
				sum += (parseInt(document.getElementById(fieldIDs[i][j][k]).value-0, 10) == 7 ? -1 : parseInt(document.getElementById(fieldIDs[i][j][k]).value-0, 10));
			}
			tmp.push(sum);
		}
		
		zerocount = 0;
		for (var k=0; k<tmp.length; k++) {
			if ((tmp[k] == ".0") || (tmp[k] == 0)) {zerocount++; }
		}
	
		if (tmp.length != zerocount) {
			values.push(tmp);
		}			
	}
	return values;
}

// build datasets from form
function GetChildValues() {	
	var fieldIDs = [
		["mhhon045", "mhhon046", "mhhon047", "mhhon048", "mhhon049", "mhhon050",
		"mhhon051", "mhhon052", "mhhon053", "mhhon054", "mhhon055", "mhhon056",
		"mhhon057", "mhhon058", "mhhon059"	]	
	];
	return GetValues(fieldIDs);
}

function GetChildValuesMultiple() {
	var fieldIDs = 	[
		[	"mhhon045", "mhhon046", "mhhon047", "mhhon048", "mhhon049", "mhhon050",
			"mhhon051", "mhhon052", "mhhon053", "mhhon054", "mhhon055", "mhhon056", 
			"mhhon057", "mhhon058", "mhhon059"	],		
		[	"mhhon045b", "mhhon046b", "mhhon047b", "mhhon048b", "mhhon049b", "mhhon050b",
			"mhhon051b", "mhhon052b", "mhhon053b", "mhhon054b", "mhhon055b", "mhhon056b", 
			"mhhon057b", "mhhon058b", "mhhon059b"	],	
		[	"mhhon045c", "mhhon046c", "mhhon047c", "mhhon048c", "mhhon049c", "mhhon050c",
			"mhhon051c", "mhhon052c", "mhhon053c", "mhhon054c", "mhhon055c", "mhhon056c",
			"mhhon057c", "mhhon058c", "mhhon059c"	],	
		[	"mhhon045d", "mhhon046d", "mhhon047d", "mhhon048d", "mhhon049d", "mhhon050d",
			"mhhon051d", "mhhon052d", "mhhon053d", "mhhon054d", "mhhon055d", "mhhon056d",
			"mhhon057d", "mhhon058d", "mhhon059d"	],		
		[	"mhhon045e", "mhhon046e", "mhhon047e", "mhhon048e", "mhhon049e", "mhhon050e",
			"mhhon051e", "mhhon052e", "mhhon053e", "mhhon054e", "mhhon055e", "mhhon056e",
			"mhhon057e", "mhhon058e", "mhhon059e"	]		
	];
	return GetValues(fieldIDs);	
}

function GetAdultValues() {
	var fieldIDs = [
		[	"mhhon031", "mhhon032", "mhhon033", "mhhon034", "mhhon035", "mhhon036",
			"mhhon037", "mhhon038", "mhhon041", "mhhon042", "mhhon043", "mhhon044"	]
	];
	return GetValues(fieldIDs);
}

function GetAdultValuesMultiple() {
	var fieldIDs = [
		[	"mhhon031", "mhhon032", "mhhon033", "mhhon034", "mhhon035", "mhhon036",
		"mhhon037", "mhhon038", "mhhon041", "mhhon042", "mhhon043", "mhhon044" ],
		[ "mhhon031b", "mhhon032b", "mhhon033b", "mhhon034b", "mhhon035b", "mhhon036b",
		"mhhon037b", "mhhon038b", "mhhon041b", "mhhon042b", "mhhon043b", "mhhon044b" ],
		[ "mhhon031c", "mhhon032c", "mhhon033c", "mhhon034c", "mhhon035c", "mhhon036c",
		"mhhon037c", "mhhon038c", "mhhon041c", "mhhon042c", "mhhon043c", "mhhon044c" ],
		[ "mhhon031d", "mhhon032d", "mhhon033d", "mhhon034d", "mhhon035d", "mhhon036d",
		"mhhon037d", "mhhon038d", "mhhon041d", "mhhon042d", "mhhon043d", "mhhon044d" ],
		[ "mhhon031e", "mhhon032e", "mhhon033e", "mhhon034e", "mhhon035e", "mhhon036e",
		"mhhon037e", "mhhon038e", "mhhon041e", "mhhon042e", "mhhon043e", "mhhon044e" ]
	];
	return GetValues(fieldIDs);		
}

function GetSummaryValues() {
	var fieldIDs = [
		[	
			["mhhon031","mhhon033","mhhon045","mhhon047","mhhon048","mhhon049"],
			["mhhon034","mhhon035","mhhon050","mhhon051"],
			["mhhon036"],
			["mhhon032","mhhon037","mhhon038","mhhon041"],
			["mhhon034","mhhon035","mhhon052","mhhon053","mhhon054"],
			["mhhon041","mhhon042","mhhon043","mhhon044"]
		]
	];
	return GetCalculatedValues(fieldIDs);
}

function GetSummaryValuesMultiple() {
	// note 7 => -1 before calculation
	var fieldIDs = [
		[
			["mhhon031","mhhon033","mhhon045","mhhon047","mhhon048","mhhon049"],
			["mhhon034","mhhon035","mhhon050","mhhon051"],
			["mhhon036"],
			["mhhon032","mhhon037","mhhon038","mhhon041"],
			["mhhon034","mhhon035","mhhon052","mhhon053","mhhon054"],
			["mhhon041","mhhon042","mhhon043","mhhon044"]
		],
		[
			["mhhon031b","mhhon033b","mhhon045b","mhhon047b","mhhon048b","mhhon049b"],
			["mhhon034b","mhhon035b","mhhon050b","mhhon051b"],
			["mhhon036b"],
			["mhhon032b","mhhon037b","mhhon038b","mhhon041b"],
			["mhhon034b","mhhon035b","mhhon052b","mhhon053b","mhhon054b"],
			["mhhon041b","mhhon042b","mhhon043b","mhhon044b"]
		],	
		[
			["mhhon031c","mhhon033c","mhhon045c","mhhon047c","mhhon048c","mhhon049c"],
			["mhhon034c","mhhon035c","mhhon050c","mhhon051c"],
			["mhhon036c"],
			["mhhon032c","mhhon037c","mhhon038c","mhhon041c"],
			["mhhon034c","mhhon035c","mhhon052c","mhhon053c","mhhon054c"],
			["mhhon041c","mhhon042c","mhhon043c","mhhon044c"]
		],
		[
			["mhhon031d","mhhon033d","mhhon045d","mhhon047d","mhhon048d","mhhon049d"],
			["mhhon034d","mhhon035d","mhhon050d","mhhon051d"],
			["mhhon036d"],
			["mhhon032d","mhhon037d","mhhon038d","mhhon041d"],
			["mhhon034d","mhhon035d","mhhon052d","mhhon053d","mhhon054d"],
			["mhhon041d","mhhon042d","mhhon043d","mhhon044d"]
		],
		[
			["mhhon031e","mhhon033e","mhhon045e","mhhon047e","mhhon048e","mhhon049e"],
			["mhhon034e","mhhon035e","mhhon050e","mhhon051e"],
			["mhhon036e"],
			["mhhon032e","mhhon037e","mhhon038e","mhhon041e"],
			["mhhon034e","mhhon035e","mhhon052e","mhhon053e","mhhon054e"],
			["mhhon041e","mhhon042e","mhhon043e","mhhon044e"]
		]		
	];
	
	return GetCalculatedValues(fieldIDs);
}

function GetLearningDisabilityValues() {
	var fieldIDs = [
		['mhhon060','mhhon061','mhhon062','mhhon063',
			'mhhon064','mhhon065','mhhon066','mhhon067','mhhon068','mhhon069',
			'mhhon070','mhhon071','mhhon072','mhhon073','mhhon074','mhhon075',
			'mhhon076','mhhon077'
		]
	];
	return GetValues(fieldIDs);
}

function GetLDValuesMultiple() {
	var fieldIDs = [
		['mhhon060','mhhon061','mhhon062','mhhon063',
			'mhhon064','mhhon065','mhhon066','mhhon067','mhhon068','mhhon069',
			'mhhon070','mhhon071','mhhon072','mhhon073','mhhon074','mhhon075',
			'mhhon076','mhhon077'
		],
		['mhhon060b','mhhon061b','mhhon062b','mhhon063b',
			'mhhon064b','mhhon065b','mhhon066b','mhhon067b','mhhon068b','mhhon069b',
			'mhhon070b','mhhon071b','mhhon072b','mhhon073b','mhhon074b','mhhon075b',
			'mhhon076b','mhhon077b'
		],
		['mhhon060c','mhhon061c','mhhon062c','mhhon063c',
			'mhhon064c','mhhon065c','mhhon066c','mhhon067c','mhhon068c','mhhon069c',
			'mhhon070c','mhhon071c','mhhon072c','mhhon073c','mhhon074c','mhhon075c',
			'mhhon076c','mhhon077c'
		],
		['mhhon060d','mhhon061d','mhhon062d','mhhon063d',
			'mhhon064d','mhhon065d','mhhon066d','mhhon067d','mhhon068d','mhhon069d',
			'mhhon070d','mhhon071d','mhhon072d','mhhon073d','mhhon074d','mhhon075d',
			'mhhon076d','mhhon077d'
		],
		['mhhon060e','mhhon061e','mhhon062e','mhhon063e',
			'mhhon064e','mhhon065e','mhhon066e','mhhon067e','mhhon068e','mhhon069e',
			'mhhon070e','mhhon071e','mhhon072e','mhhon073e','mhhon074e','mhhon075e',
			'mhhon076e','mhhon077e'
		]		
	];
	return GetValues(fieldIDs);
}

function GetSecureValues() {
	var fieldIDs = [
		['mhhon078','mhhon079','mhhon080','mhhon081', 'mhhon082','mhhon083','mhhon084']
	];
	return GetValues(fieldIDs);
}

function GetSecureXRValues() {
	var fieldIDs = [
		[	"mhhon031", "mhhon032", "mhhon033", "mhhon034", "mhhon035", "mhhon036",
			"mhhon037", "mhhon038", "mhhon041", "mhhon042", "mhhon043", "mhhon044"	]
	];
	return GetValues(fieldIDs);
}

function GetSecureValuesMultiple() {
	var fieldIDs = [
		['mhhon078','mhhon079','mhhon080','mhhon081', 'mhhon082','mhhon083','mhhon084']	,
		['mhhon078b','mhhon079b','mhhon080b','mhhon081b', 'mhhon082b','mhhon083b','mhhon084b'],
		['mhhon078c','mhhon079c','mhhon080c','mhhon081c', 'mhhon082c','mhhon083c','mhhon084c'],
		['mhhon078d','mhhon079d','mhhon080d','mhhon081d', 'mhhon082d','mhhon083d','mhhon084d'],
		['mhhon078e','mhhon079e','mhhon080e','mhhon081e', 'mhhon082e','mhhon083e','mhhon084e']
	]
	return GetValues(fieldIDs);
}

function GetSecureXRValuesMultiple() {
	var fieldIDs = [
		[	"mhhon031", "mhhon032", "mhhon033", "mhhon034", "mhhon035", "mhhon036",
			"mhhon037", "mhhon038", "mhhon041", "mhhon042", "mhhon043", "mhhon044"	],
		[	"mhhon031b", "mhhon032b", "mhhon033b", "mhhon034b", "mhhon035b", "mhhon036b",
			"mhhon037b", "mhhon038b", "mhhon041b", "mhhon042b", "mhhon043b", "mhhon044b"	],
		[	"mhhon031c", "mhhon032c", "mhhon033c", "mhhon034c", "mhhon035c", "mhhon036c",
			"mhhon037c", "mhhon038c", "mhhon041c", "mhhon042c", "mhhon043c", "mhhon044c"	],
		[	"mhhon031d", "mhhon032d", "mhhon033d", "mhhon034d", "mhhon035d", "mhhon036d",
			"mhhon037d", "mhhon038d", "mhhon041d", "mhhon042d", "mhhon043d", "mhhon044d"	],
		[	"mhhon031e", "mhhon032e", "mhhon033e", "mhhon034e", "mhhon035e", "mhhon036e",
			"mhhon037e", "mhhon038e", "mhhon041e", "mhhon042e", "mhhon043e", "mhhon044e"	]
	]
	return GetValues(fieldIDs);
}

// build label sets for each graph type
 function GetChildLabels() {
	var childLabels = [
		"01 Disrupt/Antisocial/Agress",
		"02 Overactive/Attent",
		"03 Non Accident",
		"04 Alc/Substance/Solv",
		"05 Scholastic/Language",
		"06 Physical Ill/Disability",
		"07 Hallucination/Delus",
		"08 Non Organic Somatic Sym",
		"09 Emotional Related",
		"10 Peer Relationship Prob",
		"11 Self Care/Indep Prob",
		"12 Family/Relationship Prob",
		"13 Poor School Attend",
		"14 Nature of Difficulties",
		"15 Lack of Information"
	];
	return childLabels;
}

 function GetSummaryLabels() {
	var summaryLabels = [
		"1 Behavioural Problems",
		"2 Impairment",
		"3 Delusions/Hallucinations",
		"4 Depression Problems",
		"5 Symptomatic Problems",
		"6 Social Problems"
	];
	return summaryLabels;
}

function GetAdultLabels() {
	var adultLabels = [
		"01 Overact/Aggress/Disrupt",
		"02 No Acc Self Injury",
		"03 Prob Drink/Drug Taking",
		"04 Cognitive Problems",
		"05 Physical Illn/Disability",
		"06 Hallucination/Delusion",
		"07 Depressed Mood",
		"08 Other MH/Behav Problems",
		"09 Problem Relationships",
		"10 Act Daily Living",
		"11 Problem Living Condit",
		"12 Problem Occup Activities"
	];
	return adultLabels;
}

function GetLearningDisabilityLabels() {
	var labels = [
		"01 Behaviour Prob Others",
		"02 Behaviour Prob Self",
		"03 Other MH Behaviour Prob",
		"04 Attention and Conc",
		"05 Memory and Orientation",
		"06 Communication (Understand)",
		"07 Communication (Express)",
		"08 Hallucination/Delusion",
		"09 Mood Changes",
		"10 Problems Eating/Drinking",
		"11 Problems Sleeping",
		"12 Physical Problems",
		"13 Seizures",
		"14 Act Daily Living at Home",
		"15 Act Daily Living Outside",
		"16 Level of Self Care",
		"17 Problem Relationship",
		"18 Problem Occup Act"
	];
	return labels;	
}

function GetSecureLabels() {
	var labels = [
		"A Potential harm to others",
		"B Potential self-harm or self-neglect",
		"C Needs building security to prevent escape",
		"D Needs safely staffed living environment",
		"E Needs escort on leave (beyond secure perimeter)",
		"F Potential harm to individual from others",
		"G Needs specialist clinical procedures"
	];
	return labels;	
}

function GetSecureXRLabels() {
	var labels = [
		"01 Overact/Aggress/Disrupt",
		"02 No Acc Self Injury",
		"03 Prob Drinking/Drug Taking",
		"04 Cognitive Problems",
		"05 Physical Illn/Disability",
		"06 Hallucination/Delusion",
		"07 Depressed Mood",
		"08 Other MH/Behav Problems",
		"09 Problem Relationships",
		"10 Act Daily Living",
		"11 Problem Living Condit",
		"12 Problem Occup Activities"
	];
	return labels;	
}

// var datacolors = ["#6699ff","#cc3300","#8d8395","#ffcc00","#339933"];
var datacolors = ["#2F4F8D","#5787C5","#7B95A0","#E6D4B8","#53473D"];

// build graphs - child and youth
function SingleGraphChild() {
	var g = new drawGraph("ChildGraph", 450, 500);
	g.values = GetChildValues();
	g.labels = GetChildLabels();
	g.colors = datacolors;
	g.VERTICAL_AXIS_INTERVAL = 1;
	g.title = "Individual Rating";
	g.drawBarChart();
}

function SummaryGraph() {	
	var g = new drawGraph("SummaryGraph", 410, 500);
	g.values = GetSummaryValues();
	g.labels = GetSummaryLabels();
	g.colors = datacolors;
	g.VERTICAL_AXIS_INTERVAL = 1;
	g.title = "Summary Scores";
	g.drawBarChart();	
}

function MultipleGraphChild() {
	var g = new drawGraph("ChildGraph", 700, 500);
	g.values = GetChildValuesMultiple();
	g.labels = GetChildLabels();
	g.legendlabels = GetDataNamesMultiple();
	g.colors = datacolors;
	g.VERTICAL_AXIS_INTERVAL = 1;
	g.title = "Individual Rating";
	g.drawBarChart();	
}

function SummaryMultipleGraph() {
	var g = new drawGraph("SummaryGraph", 550, 500);
	g.values = GetSummaryValuesMultiple();
	g.labels = GetSummaryLabels();
	g.legendlabels = GetDataNamesMultiple();
	g.colors = datacolors;
	g.VERTICAL_AXIS_INTERVAL = 1;
	g.title = "Summary Scores";
	g.drawBarChart();		
}

// build graphs - adult and older person
function SingleGraph() {
	var g = new drawGraph("SingleGraph", 450, 500);
	g.values = GetAdultValues();
	g.labels = GetAdultLabels();
	g.colors = datacolors;
	g.VERTICAL_AXIS_INTERVAL = 1;
	g.title = "Individual Rating";
	g.drawBarChart();
}

function MultipleGraph() {
	var g = new drawGraph("SingleGraph", 700, 500);
	g.values = GetAdultValuesMultiple();
	g.labels = GetAdultLabels();
	g.legendlabels = GetDataNamesMultiple();
	g.colors = datacolors;
	g.VERTICAL_AXIS_INTERVAL = 1;
	g.title = "Individual Rating";
	g.drawBarChart();
}

// build graphs - learning disability
function SingleGraphLD() {
	var g = new drawGraph("SingleGraph", 700, 500);
	g.values = GetLearningDisabilityValues();
	g.labels = GetLearningDisabilityLabels();
	g.colors = datacolors;
	g.VERTICAL_AXIS_INTERVAL = 1;
	g.title = "Individual Rating";
	g.drawBarChart();	
}

function MultipleGraphLD() {
	var g = new drawGraph("MultipleGraph", 700, 500);
	g.values = GetLDValuesMultiple();
	g.labels = GetLearningDisabilityLabels();
	g.legendlabels = GetDataNamesMultiple();
	g.colors = datacolors;
	g.VERTICAL_AXIS_INTERVAL = 1;
	g.title = "Individual Rating";
	g.drawBarChart();		
}

// build graphs - secure
function SingleGraphXX() {
	var g = new drawGraph("SingleGraph", 450, 500);
	g.values = GetSecureValues();
	g.labels = GetSecureLabels();
	g.colors = datacolors;
	g.VERTICAL_AXIS_INTERVAL = 1;
	g.title = "Individual Rating (A-G)";
	g.drawBarChart();	
}

function SingleGraphXR() {
	var g = new drawGraph("SummaryGraph", 450, 500);
	g.values = GetSecureXRValues();
	g.labels = GetSecureXRLabels();
	g.colors = datacolors;
	g.VERTICAL_AXIS_INTERVAL = 1;
	g.title = "Individual Rating (1-12)";
	g.drawBarChart();	
}

function MultipleGraphXX() {
	var g = new drawGraph("SingleGraph", 450, 500);
	g.values = GetSecureValuesMultiple();
	g.labels = GetSecureLabels();
	g.legendlabels = GetDataNamesMultiple();
	g.colors = datacolors;
	g.VERTICAL_AXIS_INTERVAL = 1;
	g.title = "Individual Rating (A-G)";
	g.drawBarChart();		
}

function MultipleGraphXR() {
	var g = new drawGraph("SummaryGraph", 700, 500);
	g.values = GetSecureXRValuesMultiple();
	g.labels = GetSecureXRLabels();
	g.legendlabels = GetDataNamesMultiple();
	g.colors = datacolors;
	g.VERTICAL_AXIS_INTERVAL = 1;
	g.title = "Individual Rating (1-12)";
	g.drawBarChart();	
}
