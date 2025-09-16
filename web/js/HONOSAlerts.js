//jsVersion  : V11.03.02
//
// HONOSAlerts - created by HBDBH for Honos scores  
//
// Written   : 27/01/2009 : Kerri Te Whaiti
//
// Function  : alerts for the users to better decide which ratings to give on
//             HoNos screens
//----------------------------------------------------------------------------
var windowObjectReference =  "left=10,top=10,width=790,height=590,"+
 "resizable=yes,  scrollbars=yes" 
var cssSetup = "<html><head><title>HONOS Alert</title><link rel='stylesheet'"+
  " type='text/css' href='../html/standard.css'></head><body>"+
  " <div style='margin:10'>" 
var boxEnd = "</br></br><span style='text-align:center'><input type='button'"+
    " class='button' value='Close' style='display:block; margin: 0 auto'"+
    " onclick='window.close()'></input></span></div></body></html>";
function Alert1() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }
message=
"</br>" + 
"<b>1. Overactive, aggressive, disruptive or agitated behaviour</b></br></br>"+

"Include such behaviour due to any cause, such as drugs, alcohol, dementia, psychosis, depression, etc. </br></br>" +

"Do not include bizarre behaviour rated at Scale 6. </br></br>" +

"0 = No problems of this kind during the period rated. </br></br>" +

"1 = Irritability, quarrels, restlessness etc. not requiring action. </br></br>" +
 
"2 = Includes aggressive gestures, pushing or pestering others; threats or verbal aggression; lesser damage " +
"to property (e.g. broken cup or window); marked overactivity or agitation, overactivity or agitation. </br></br>" + 

"3 = Physically aggressive to others or animals (short of rating 4); threatening manner more serious overactivity or destruction of property. </br></br>" + 

"4 = At least one serious physical attack on others or on animals; destruction of property (e.g. fire-setting); serious intimidation or obscene behaviour. </br></br>"; 
  if(ptcnhdps!='4'){
  message+=
    "7 = Not known/unable to rate. </br></br>" +
    "As far as possible the use of rating point 7 should be avoided."; 
  }
  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write();
  alertWindow.document.write(cssSetup); 
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function Alert2() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

 message= "</br>" + 
"<b>2. Non-accidental self-injury</b></br>" +
"</br>" + 
"Do not include accidental self injury (due e.g. dementia or severe learning disability); the cognitive " +
"problem is rated at Scale 4 and the injury at Scale 5.</br>" +
"</br>" +       
"Do not include illness or injury as a direct consequence of drug or alcohol use rated at Scale 3 (e.g. " +
"cirrhosis of the liver or injury resulting from drunk driving are rated at Scale 5).</br>" +
"</br>" +
"0 = No problem of this kind during the period rated.</br>" +
"</br>" +
"1 = Fleeting thoughts about ending it all, but little risk during the period rated; no self-harm.</br>" +
"</br>" +
"2 = Mild risk during period; includes non-hazardous self-harm, e.g. wrist-scratching.</br>" +
"</br>" +
"3 = Moderate to serious risk of deliberate self-harm during the period rated; includes preparatory acts, e.g. collecting tablets.</br>" +
"</br>" +
"4 = Serious suicidal attempt or serious deliberate self-injury during the period rated.</br>" +
"</br>";
  if(ptcnhdps!='4'){
  message+=
    "7 = Not known/unable to rate.</br>" +
    "</br>" +
    "As far as possible the use of rating point 7 should be avoided.";
  }
  var alertWindow = window.open("","AlertWindow",windowObjectReference)
  alertWindow.document.write(cssSetup)
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
} 
function Alert3() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message= "</br>" + 
"<b>3. Problem drinking or drug-taking</b></br>" +
"</br>" + 
"Do not include aggressive or destructive behaviour due to alcohol or drug use rated at Scale 1.</br>" +
"</br>" +
"Do not include physical illness or disability due to alcohol or drug use rated at Scale 5.</br>" +
"</br>" +
"0 = No problem of this kind during the period rated.</br>" +
"</br>" +
"1 = Some over-indulgence but within social norm.</br>" +
"</br>" +
"2 = Loss of control of drinking or drug-taking; but not seriously addicted.</br>" +
"</br>" +
"3 = Marked craving or dependence on alcohol or drugs with frequent loss of control, risk taking under the influence, etc.</br>" +
"</br>" +
"4 = Incapacitated by alcohol or drug problems.</br>" +
"</br>";
  if(ptcnhdps!='4'){
  message+=
    "7 = Not known/unable to rate.</br>" +
    "</br>" +
    "As far as possible the use of rating point 7 should be avoided.";
  }
  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup)
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function Alert4() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message= "</br>" + 
"<b>4. Cognitive problems</b></br>" +
"</br>" + 
"Include problems of memory, orientation and understanding associated with any disorder, learning disability, dementia, schizophrenia, etc. </br>" +
"</br>" + 
"Do not include temporary problems (e.g. hangovers) resulting from drug or alcohol use rated at Scale 3. </br>" +
"</br>" +                  
"0 = No problem of this kind during the period rated. </br>" +
"</br>" +
"1 = Minor problems with memory or understanding, e.g. forgets names occasionally. </br>" +
"</br>" +
"2 = Mild but definite problems, e.g. has lost way in a familiar place or failed to recognise a familiar person; sometimes mixed up about simple decisions. </br>" +
"</br>" +
"3 = Marked disorientation in time, place or person, bewildered by everyday events; speech is sometimes incoherent, mental slowing. </br>" +
"</br>" +
"4 = Severe disorientation, e.g. unable to recognise relatives, at risk of accidents, speech incomprehensible, clouding or stupor. </br>" +
"</br>";
  if(ptcnhdps!='4'){
  message+=
    "7 = Not known/unable to rate. </br>" +
    "</br>" +
    "As far as possible the use of rating point 7 should be avoided.";
  }
  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup)
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function Alert5() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message= "</br>" + 
"<b>5. Physical illness or disability problems</b></br>" +
"</br>" + 
"Include illness or disability from any cause that limits or prevents movement, or impairs sight or hearing, or " +
"otherwise interferes with personal functioning. </br>" +
"</br>" + 
"Include side-effects from medication; effects of drug/alcohol use; physical disabilities resulting from accidents " +
"or self-harm associated with cognitive problems, drunk driving, etc. </br>" +
"</br>" + 
"Do not include bizarre behaviour, rated at scale 6. </br>" +
"</br>" + 
"0 = No physical health, disability or mobility problems during the period rated. </br>" +
"</br>" + 
"1 = Minor health problem during the period (e.g. cold, non-serious fall, etc.). </br>" +
"</br>" + 
"2 = Physical health problem imposes mild restriction on mobility and activity. </br>" + 
"</br>" + 
"3 = Moderate degree of restriction on activity due to physical health problem. </br>" +
"</br>" + 
"4 = Severe or complete incapacity due to physical health problem. </br>" +
"</br>";
  if(ptcnhdps!='4'){
  message+=
    "7 = Not known/unable to rate. </br>" +
    "</br>" +
    "As far as possible the use of rating point 7 should be avoided.";
  }
  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup)
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function Alert6() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message= "</br>" + 
"<b>6. Problems associated with hallucinations and delusions</b></br>" +
"</br>" + 
"Include hallucinations and delusions irrespective of diagnosis. </br>" +
"</br>" + 
"Include odd and bizarre behaviour associated with hallucinations or delusions. </br>" +
"</br>" + 
"Do not include aggressive, destructive or overactive behaviours attributed to hallucinations or delusions, rated at scale 1. </br>" +
"</br>" +
"0 = No evidence of hallucinations or delusions during the period rated. </br>" +
"</br>" + 
"1 = Somewhat odd or eccentric beliefs not in keeping with cultural norms. </br>" +
"</br>" + 
"2 = Delusions or hallucinations (e.g. voices, visions) are present but there is little distress to patient or " +
"manifestation in bizarre behaviour (ie, clinically present but mild). </br>" +
"</br>" + 
"3 = Marked preoccupation with delusions or hallucinations causing much distress and/or manifested in obviously " +
"bizarre behaviour (ie, moderately severe clinical problem). </br>" +
"</br>" + 
"4 = Mental state and behavior is seriously and adversely affected by delusions or hallucinations, with severe impact on service user. </br>" +
"</br>";
  if(ptcnhdps!='4'){
  message+=
    "7 = Not known/unable to rate. </br>" +
    "</br>" +
    "As far as possible the use of rating point 7 should be avoided.";
  }
  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup)
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function Alert7() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message="</br>" + 
"<b>7. Problems with depressed mood</b></br>" +
"</br>" + 
"Do not include overactivity or agitation, rated at scale 1. </br>" +
"</br>" + 
"Do not include suicidal ideation or attempts, rated at scale 2. </br>" +
"</br>" + 
"Do not include delusions or hallucinations, rated at scale 6. </br>" +
"</br>" + 
"0 = No problems associated with depressed mood during the period rated. </br>" +
"</br>" + 
"1 = Gloomy; or minor changes in mood. </br>" +
"</br>" + 
"2 = Mild but definite depression and distress: e.g. feelings of guilt; loss of self-esteem. </br>" +
"</br>" + 
"3 = Depression with inappropriate self-blame, preoccupied with feelings of guilt. </br>" +
"</br>" + 
"4 = Severe or very severe depression, with guilt or self-accusation. </br>" +
"</br>";
  if(ptcnhdps!='4'){
  message+=
    "7 = Not known/unable to rate. </br>" +
    "</br>" +
    "As far as possible the use of rating point 7 should be avoided.";
  }
  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup)
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function Alert8() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message="</br>" + 
"<b>8. Other mental and behavioural problems </b></br>" +
"</br>" + 
"Rate only the most severe clinical problem not considered at scales 6 and 7 as follows: specify the type of " +
"problem by entering the appropriate letter: A phobic; B anxiety; C obsessive-compulsive; D stress; " + 
"E dissociative; F somatoform; G eating; H sleep; I sexual; J other, specify. </br>" +
"</br>" + 
"Do not include temporary problems (such as hangovers) resulting from drug or alcohol use, rated at scale 3. </br>" +
"</br>" +
"0 = No evidence of any of these problems during the period rated. </br>" +
"</br>" + 
"1 = Minor non-clinical problems. </br>" +
"</br>" + 
"2 = A problem is clinically present at a mild level, e.g. service user has a degree of control. </br>" +
"</br>" + 
"3 = Occasional severe attack or distress, with loss of control, e.g. has to avoid anxiety provoking " +
"situations altogether, call in a neighbour to help, etc. That is, a moderately severe level of problem. </br>" +
"</br>" + 
"4 = Severe problem dominates most activities. </br>" +
"</br>";
  if(ptcnhdps!='4'){
  message+=
    "7 = Not known/unable to rate. </br>" +
    "</br>" +
    "As far as possible the use of rating point 7 should be avoided.";
  }
  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup)
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function Alert9() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message="</br>" + 
"<b>9. Problems with relationships</b></br>" +
"</br>" + 
"Problems associated with social relationships, identified by the patient or apparent to carers or others. " +
"Rate the service user's most severe problem associated with active or passive withdrawal from social " +
"relationships, and/or non-supportive, destructive or self-damaging relationships. </br>" +
"</br>" + 
"0 = No significant problems during the period. </br>" +
"</br>" + 
"1 = Minor non-clinical problems. </br>" +
"</br>" + 
"2 = Definite problems in making or sustaining supportive relationships; service user complains and/or problems are evident to others. </br>" +
"</br>" + 
"3 = Persisting major problems due to active or passive withdrawal from social relationships, and/or to relationships that provide little or no comfort or support. </br>" +
"</br>" + 
"4 = Severe and distressing social isolation due to inability to communicate socially and/or withdrawal from social relationships.  </br>" +
"</br>";
  if(ptcnhdps!='4'){
  message+=
    "7 = Not known/unable to rate. </br>" +
    "</br>" +
    "As far as possible the use of rating point 7 should be avoided.";
  }
  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup)
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function Alert10() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message="</br>" + 
"<b>10. Problems with activities of daily living</b></br>" +
"</br>" + 
"Rate the overall level of functioning in activities of daily living (ADL), e.g. problems with basic activities " +
"of self-care such as eating, washing, dressing, toilet; also complex skills such as budgeting, organising where " +
"to live, occupation and recreation, mobility and use of transport, shopping, self-development, etc. </br>" +
"</br>" +                                                                       
"Include any lack of motivation for using self-help opportunities since this contributes to a lower overall level " +
"of functioning. </br>" +
"</br>" +
"Do not include lack of opportunities for exercising intact abilities and skills rated at Scale 11 and Scale 12. </br>" +
"</br>" + 
"0 = No problems during period rated; good ability to function in all areas. </br>" +
"</br>" + 
"1 = Minor problems only e.g. untidy, disorganised. </br>" +
"</br>" + 
"2 = Self-care adequate, but major lack of performance of one or more complex skills (see above). </br>" +
"</br>" + 
"3 = Major problems in one or more areas of self-care (eating, washing, dressing, toilet) as well as major inability to perform several complex skills. </br>" +
"</br>" + 
"4 = Severe disability or incapacity in all or nearly all areas of self-care and complex skills. </br>" +
"</br>";
  if(ptcnhdps!='4'){
  message+=
    "7 = Not known/unable to rate. </br>" +
    "</br>" +
    "As far as possible the use of rating point 7 should be avoided.";
  }
  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup)
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function Alert11() {
message = "</br>" + 
"11. Problems with living conditions </br>" +
"</br>" + 
"Rate the overall severity of problems with the quality of living conditions and daily domestic routine. </br>" +
"</br>" +         
"Are the basic necessities met (heat, light, hygiene)? If so, is there help to cope with disabilities and a choice of opportunities to use skills and develop new ones? </br>" +
"</br>" + 
"Do not rate the level of functional disability rated at Scale 10. </br>" +
"</br>" + 
"NB: Rate the patient's usual accommodation. If in acute ward, rate the home accommodation. If information is not " +
"obtainable, rate 7. </br></br>" +
"Click Ok to display the remainder of the score descriptions. </br>"+
"0 = Accommodation and living conditions are acceptable; helpful in keeping any disability rated at scale 10 to the lowest level possible, and supportive of self-help. </br>" +
"</br>" + 
"1 = Accommodation is reasonably acceptable although there are minor or transient problems (e.g. not ideal location, not preferred option, doesn't like food, etc.). </br>" +
"</br>" + 
"2 = Significant problems with one or more aspects of the accommodation and/or regime (e.g. restricted choice; staff or household have little understanding of how to limit disability, or how to help develop new or intact skills). </br>" +
"</br>" + 
"3 = Distressing multiple problems with accommodation (e.g. some basic necessities absent); housing environment has minimal or no facilities to improve service user's independence. </br>" +
"</br>" + 
"4 = Accommodation is unacceptable (e.g. lack of basic necessities, patient is at risk of eviction, or 'roofless', or living conditions are otherwise intolerable making service user.s problems worse). </br>" +
"</br>" +
"7 = Not known/unable to rate. </br>" +
"</br>" +
"As far as possible the use of rating point 7 should be avoided."

var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup)
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function Alert12() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message="</br>" + 
"<b>12. Problems with occupation and activities</b></br>" +
"</br>" + 
"Rate the overall level of problems with quality of daytime environment. Is there help to cope with disabilities and " +
"opportunities for maintaining or improving occupational and recreational skills and activities? Consider factors such " +
"as stigma, lack of appropriate qualified staff, access to supportive facilities, e.g. staffing and equipment of day " +
"centres, workshops, social clubs, etc. </br>"  +
"</br>" + 
"Do not rate the level of functional disability rated at Scale 10. </br>" +
"</br>" + 
"NB: Rate the patient.s usual situation, whether in community, open or secure setting (hospital or prison). If patient " +
"is in acute ward/temporary care, rate activities during period before admission. If information not available, rate 7. </br>" +
"</br>" +
"0 = Service user's daytime environment is acceptable; helpful in keeping any disability rated at scale 10 to the lowest " +
"level possible and supportive of self-help. </br>" +
"</br>" + 
"1 = Minor or temporary problems, e.g. good facilities available but not always at appropriate times for the consumer. </br>" + 
"</br>" + 
"2 = Limited choice of activities eg there is lack of reasonable tolerance (e.g. unfairly refused entry to public library or baths etc.); or handicapped by lack of a permanent address; or insufficient carer or professional support; or helpful day setting available but for very limited hours. </br>" +
"</br>" + 
"3 = Marked deficiency in skilled services available to help minimise level of existing disability; no opportunities to use intact skills or add new ones; unskilled care difficult to access. </br>" +
"</br>" + 
"4 = Lack of any opportunity for daytime activities makes service user's problem worse. </br>" +
"</br>";
  if(ptcnhdps!='4'){
  message+=
    "7 = Not known/unable to rate. </br>" +
    "</br>" +
    "As far as possible the use of rating point 7 should be avoided.";
  }
  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup)
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function H65Alert1() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }
message=
"</br>" +
"<b>1. Overactive, aggressive, disruptive or agitated behaviour</b></br></br>" +

"Include such behaviour due to any cause, such as drugs, alcohol, dementia, psychosis, depression, etc. </br></br>" +

"Do not include bizarre behaviour rated at Scale 6. </br></br>" +

"0 = No problems of this kind during the period rated. </br></br>" +

"1 = Occasional irritability, quarrels, restlessness, etc, but generally calm and co-operative " +
"and not requiring any specific action. </br></br>" +

"2 = Includes aggressive gestures, pushing or pestering others; threats or verbal aggression; " +
"lesser damage to property (e.g., broken cup or window); significant over-activity or agitation; " +
"intermittent restlessness or wandering (day or night); unco-operative at times, requiring "+
"encouragement and persuasion. </br></br>" +

"3 = Physically aggressive to others or animals (short of rating 4); more serious damage to, or " +
"destruction of, property; frequently threatening manner, more serious or persistent overactivity " +
"or agitation; frequent restlessness or wandering; significant problems with co-operation, largely " +
"resistant to help or assistance. </br></br>" +

"4 = At least one serious physical attack on others (over and above rating of 3); major or persistent " +
"destructive activity (e.g. fire-setting); persistent and threatening behaviour; severe overactivity " +
"or agitation; sexually disinhibited or other inappropriate behaviour (e.g. deliberate inappropriate " +
"urination or defecation); virtually constant restlessness or wandering; severe problems related to " +
"non-compliant or resistive behaviour. </br></br>";
  if(ptcnhdps!='4'){
  message+=
    "7 = Not known/unable to rate. </br></br>" +
    "As far as possible the use of rating point 7 should be avoided.";
  }
  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup)
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function H65Alert2() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

 message= "</br>" +
"<b>2. Non-accidental self-injury</b></br>" +
"</br>" +
"Do not include accidental self injury (due e.g. dementia or severe learning disability); the cognitive " +
"problem is rated at Scale 4 and the injury at Scale 5.</br>" +
"</br>" +
"Do not include illness or injury as a direct consequence of drug or alcohol use rated at Scale 3 (e.g. " +
"cirrhosis of the liver or injury resulting from drunk driving are rated at Scale 5).</br>" +
"</br>" + 
"0 = No problem of this kind during the period rated.</br>" +
"</br>" +
"1 = Fleeting thoughts about self-harm or suicide, but little risk; no self-harm.</br>" +
"</br>" +
"2 = Mild risk during period; includes more frequent thoughts or talking about self-harm or suicide " +
"(including passive ideas of self-harm such as not taking avoiding action in a potentially life-threatening " +
"situation, e.g. while crossing a road.</br>" +
"</br>" +
"3 = Moderate to serious risk of deliberate self-harm during the period rated; includes frequent or " +
"persistent thoughts or talking about self-harm; includes preparatory behaviours, e.g. collecting tablets.</br>" +
"</br>" +
"4 = Serious suicidal attempt or deliberate self-injury during the period rated.</br>" +
"</br>";
  if(ptcnhdps!='4'){
  message+=
    "7 = Not known/unable to rate.</br>" +
    "</br>" +
    "As far as possible the use of rating point 7 should be avoided.";
  }
  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup)
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function H65Alert3() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message= "</br>" +
"<b>3. Problem drinking or drug-taking</b></br>" +
"</br>" +
"Do not include aggressive or destructive behaviour due to alcohol or drug use rated at Scale 1.</br>" +
"</br>" +
"Do not include physical illness or disability due to alcohol or drug use rated at Scale 5.</br>" +
"</br>" +
"0 = No problem of this kind during the period rated (e.g. minimal cannabis use, drinking within health guidelines).</br>" +
"</br>" +
"1 = Some over-indulgence, but within social norm (e.g. significant cannabis use, other low risk activity).</br>" +
"</br>" +
"2 = Occasional loss of control of drinking or drug-taking; but not a serious problem.</br>" +
"</br>" +
"3 = Marked craving or dependence on alcohol or drug use with frequent loss of control, drunkenness, etc.</br>" +
"</br>" +
"4 = Major adverse consequences or incapacitated due to alcohol or drug problems.</br>" +
"</br>"
  if(ptcnhdps!='4'){
  message+=
    "7 = Not known/unable to rate.</br>" +
    "</br>" +
    "As far as possible the use of rating point 7 should be avoided."
  }

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup)
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function H65Alert4() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message= "</br>" +
"<b>4. Cognitive problems</b></br>" +
"</br>" +
"Include problems of memory, orientation and understanding associated with any disorder, learning " +
"disability, dementia, schizophrenia, etc. </br>" +
"</br>" +
"Do not include temporary problems (e.g. hangovers) which are clearly associated with alcohol, drug or medication use, rated at Scale 3. </br>" +
"</br>" +
"0 = No problem of this kind during the period rated. </br>" +
"</br>" +
"1 = Minor problems with orientation (e.g. some difficulty with orientation to time) or memory (e.g. a " +
"degree of forgetfulness but still able to learn new information), no apparent difficulties with the use " +
"of language. </br>" +
"</br>" +
"2 = Mild orientation problems, ( e.g. frequently disorientated to time) or memory (e.g. definite problems " +
"learning new information such as names, recollection of recent events; deficit interferes with everyday " +
"activities); difficulty finding way in a new or unfamiliar surroundings; able to deal with simple verbal " +
"information but some difficulties with understanding or expression of more complex language. </br>" +
"</br>" +
"3 = Moderate problems with orientation (e.g. usually disorientated to time, often place) or memory, (e.g. new " +
"material rapidly lost, only highly learned material retained, occasional failure to recognise familiar " +
"individuals); has lost the way in a familiar place; major difficulties with language (expressive or receptive). </br>" +
"</br>" +
"4 = Severe disorientation, e.g. consistently disorientated to time and pace, and sometimes to person; or memory " +
"impairment (e.g. only fragments remain, loss of distant as well as recent information, unable to effectively " +
"learn any new information, consistently unable to recognise or to name close friends or relatives); no effective " +
"communication possible through language or inaccessible to speech. </br>" +
"</br>"
  if(ptcnhdps!='4'){
  message+=
    "7 = Not known/unable to rate. </br>" +
    "</br>" +
    "As far as possible the use of rating point 7 should be avoided.";
  }

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup)
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function H65Alert5() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message= "</br>" +
"<b>5. Physical illness or disability problems</b></br>" +
"</br>" +
"Include illness or disability from any cause that limits or prevents movement, or impairs sight or hearing, or </br>" +
"otherwise interferes with personal functioning. </br>" +
"</br>" +
"Include side-effects from medication; effects of drug/alcohol use; physical disabilities resulting from accidents " +
"or self-harm associated with cognitive problems, drunk driving, etc. </br>" +
"</br>" +
"Do not include mental or behavioural problems rated at Scale 4. </br>" +
"</br>" +
"0 = No physical health, disability or mobility problems during the period rated. </br>" +
"</br>" +
"1 = Minor health problem during the period (e.g. cold); some impairment of sight or hearing but still able to " +
"function effectively with the aid of glasses or hearing aid. </br>" +
"</br>" +
"2 = Physical health problem associated with mild restriction of activities or mobility (e.g. restricted walking " +
"distance, some degree of loss of independence); moderate impairment of sight or hearing (with functional  " +
"impairment despite the appropriate use of glasses or a hearing aid); some degree of risk falling but low and  " +
"no episodes to date; problems associated with mild degree of pain. </br>" +
"</br>" +
"3 = Physical health problem associated with moderate restriction of activities or mobility (e.g. mobile only with " +
"an aid - stick or zimmer frame - or with help); more severe impairment of sight or hearing (short of rating 4); " +
"significant risk of falling (one or more falls); problems associated with a moderate degree of pain. </br>" +
"</br>" +
"4 = Major physical health problem associated with severe restriction of activities or mobility (e.g. chair or bed " +
"bound); severe impairment of sight or hearing (e.g. registered blind or deaf); high risk of falling (one or more " +
"falls) because of physical illness or disability; problems associated with severe pain; presence of impaired level " +
"of consciousness. </br>" +
"</br>";
  if(ptcnhdps!='4'){
  message+=
    "7 = Not known/unable to rate. </br>" +
    "</br>" +
    "As far as possible the use of rating point 7 should be avoided.";
  }

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup)
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function H65Alert6() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message= "</br>" +
"<b>6. Problems associated with hallucinations and delusions</b></br>" +
"</br>" +
"Include hallucinations and delusions irrespective of diagnosis. </br>" +
"</br>" +
"Include odd & bizarre behaviour associated with hallucinations or delusions (or false beliefs). </br>" +
"</br>" +
"Do not include aggressive, destructive or overactive behaviours attributed to hallucinations or delusions or false " +
"beliefs rated at Scale 1. </br>" +
"</br>" +
"0 = No evidence of hallucinations or delusions during the period rated. </br>" +
"</br>" +
"1 = Somewhat odd or eccentric beliefs not in keeping with cultural norms. </br>" +
"</br>" +
"2 = Delusions or hallucinations (e.g. voices, visions) present, but there is little distress to patient or " +
"manifestation in bizarre behaviour (ie, clinically present but mild).</br> " +
"</br>" +
"3 = Marked preoccupation with delusions or hallucinations, causing much distress and/or manifested in obviously " +
"bizarre behaviour (ie, moderately severe clinical problem). </br>" +
"</br>" +
"4 = Mental state and behaviour is seriously and adversely affected by delusions or hallucinations, with severe " +
"impact on patient/others. </br>" +
"</br>";
  if(ptcnhdps!='4'){
  message+=
    "7 = Not known/unable to rate. </br>" +
    "</br>" +
    "As far as possible the use of rating point 7 should be avoided.";
  }

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup)
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function H65Alert7() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message="</br>" +
"<b>7. Problems with depressed mood</b></br>" +
"</br>" +
"Do not include over-activity or agitation rated at Scale 1. </br>" +
"</br>" +
"Do not include suicidal ideation or attempts rated at Scale 2. </br>" +
"</br>" +
"Do not include delusions or hallucinations rated at Scale 6. </br>" +
"</br>" +
"Rate associated problems (e.g. changes in sleep, appetite or weight, anxiety symptoms) at Scale 8. </br>" +
"</br>" +
"0 = No problems associated with depressed mood during the period rated. </br>" +
"</br>" +
"1 = Gloomy; or minor changes in mood. </br>" +
"</br>" +
"2 = Mild but definite depression on subjective or objective measures (e.g. loss of interest or pleasure, " +
"lack of energy, loss of self esteem, feelings of guilt). </br>" +
"</br>" +
"3 = Moderate depression on subjective or objective measures (depressive symptoms more marked). </br>" +
"</br>" +
"4 = Severe depression on subjective or objective grounds (e.g. profound loss of interest or pleasure, " +
"preoccupation with ideas of guilt or worthlessness).  </br>" +
"</br>";
  if(ptcnhdps!='4'){
  message+=
    "7 = Not known/unable to rate. </br>" +
    "</br>" +
    "As far as possible the use of rating point 7 should be avoided.";
  }

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function H65Alert8() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message="</br>" +
"<b>8. Other mental and behavioural problems</b></br>" +
"</br>" +
"Rate only the most severe clinical problem not considered at Scale 6 & 7 as follows: specify the type of " +
"problem by entering the appropriate letter: A phobic; B anxiety; C obsessive-compulsive; D stress; " +
"E dissociative; F somatoform; G eating; H sleep; I sexual; J other, specify. </br>" +
"</br>" +
"0 = No evidence of any of these problems during the period rated. </br>" +
"</br>" +
"1 = Minor non-clinical problems. </br> " +
"</br>" +
"2 = A problem is clinically present, but at a mild level, for example the problem is intermittent, the consumer " +
"maintains a degree of control or is not unduly distressed. </br>" +
"</br>" +
"3 = Moderately severe clinical problem (e.g. more frequent, more distressing or more marked symptoms). </br>" +
"</br>" +
"4 = Severe persistent problems which dominate or seriously affect most activities. </br>" +
"</br>";
  if(ptcnhdps!='4'){
  message+=
    "7 = Not known/unable to rate. </br>" +
    "</br>" +
    "As far as possible the use of rating point 7 should be avoided.";
  }

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function H65Alert9() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message="</br>" +
"<b>9. Problems with relationships</b></br>" +
"</br>" +
"Problems associated with social relationships, identified by the patient or apparent to carers or others. " +
"Rate the patient's most severe problem associated with active or passive withdrawal from, or tendency to " +
"dominate, social relationships and/or non-supportive, destructive or self-damaging relationships. </br>" +
"</br>" +
"0 = No significant problems during the period. </br>" +
"</br>" +
"1 = Minor non-clinical problems. </br>" +
"</br>" +
"2 = Definite problems in making, sustaining or adapting to supportive relationships ( e.g. because of " +
"controlling manner, or arising out or difficult, exploitative or abusive relationships); definite but mild " +
"difficulties reported by patient or evident to carers or others. </br>" +
"</br>" +
"3 = Persisting significant problems with relationships; moderately severe conflicts or problems identified " +
"within the relationship by the consumer or evident to carers or others. </br>" +
"</br>" +
"4 = Severe difficulties associated with social relationships, (e.g. isolations, withdrawal, conflict, abuse); " +
"major tensions and stresses (e.g. threatening breaking down of relationship).  </br>" +
"</br>";
  if(ptcnhdps!='4'){
  message+=
    "7 = Not known/unable to rate. </br>" +
    "</br>" +
    "As far as possible the use of rating point 7 should be avoided.";
  }

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function H65Alert10() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message="</br>" +
"<b>10. Problems with activities of daily living</b></br>" +
"</br>" +
"Rate the overall level of functioning in activities of daily living (ADL), e.g. problems with basic activities " +
"of self-care such as eating, washing, dressing, toilet; also complex skills such as budgeting, organising where " +
"to live, occupation and recreation, mobility and use of transport, shopping, self-development, etc. </br>" +
"</br>" +
"Include any lack of motivation for using self-help opportunities since this contributes to a lower overall level " +
"of functioning. </br>" +
"</br>" +
"Do not include lack of opportunities for exercising intact abilities and skills rated at Scale 11 and Scale 12. </br>" +
"</br>" +
"0 = No problems during period rated; good ability to function effectively in all basic activities (e.g. continent " +
"- or able to manage incontinence appropriately, able to feed self and dress) and complex skills (e.g. driving or " +
"able to make use of transport facilities, able to handle financial affairs appropriately). </br>" +
"</br>" +
"1 = Minor problems only without significantly adverse consequences (e.g. untidy, mildly disorganised, some evidence " +
"to suggest minor difficulty with complex skills but still able to cope effectively). </br>" +
"</br>" +
"2 = Self-care and basic activities adequate (though some prompting may be required), but difficulty with more " +
"complex skills, (e.g. problem organising and making a drink or meal, deterioration in personal interest especially " +
"outside the home situation, problems with driving, transport or financial judgments). </br>" +
"</br>" +
"3 = Problems evident in one or more areas of self-care activities, (e.g. needs some supervision with dressing " +
"and eating, occasional urinary incontinence or continent only if toileted) as well as inability to perform several " +
"complex skills. </br>" +
"</br>" +
"4 = Severe disability or incapacity in all or nearly all areas of basic and complex skills, (e.g. full supervision " +
"required with dressing and eating, frequent urinary or faecal incontinence). </br>" +
"</br>";
  if(ptcnhdps!='4'){
  message+=
    "7 = Not known/unable to rate. </br>" +
    "</br>" +
    "As far as possible the use of rating point 7 should be avoided.";
  }

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function H65Alert11() {
message = "</br>" +
"<b>11. Problems with living conditions </br></b>" +
"</br>" +
"Rate the overall severity of problems with the quality of living conditions; accommodation and daily domestic routine, " +
"taking into account the consumer's preferences and degree of satisfaction with circumstances. </br>" +
"</br>" +
"Are the basic necessities met, e.g. heat, light, hygiene? If so, does the physical environment contribute to " +
"maximising independence and minimising risk, and provide a choice of opportunities to facilitate the use of existing " +
"skills and develop new ones? </br>" +
"</br>" +
"Do not rate the level of functional disability rated at Scale 10. </br>" +
"</br>" +
"NB: Rate the patient's usual accommodation. If in acute ward, rate the home accommodation. If information is not " +
"obtainable, rate 7. </br></br>" +
"Click Ok to display the remainder of the score descriptions. </br>" +
"0 = Accommodation and living conditions are acceptable; helpful in keeping any disability rated at scale 10 to the " +
"lowest level possible and minimising any risk, and supportive of self-help; the consumer is satisfied with their " +
"accommodation. </br>" +
"</br>" +
"1 = Accommodation is reasonably acceptable with only minor or transient problems related primarily to the patient's " +
"preferences rather than any significant problems or risks associated with their environment, (e.g. not ideal location, " +
"not preferred option, doesn't like food). </br>" +
"</br>" +
"2 = Basics are met but significant problems with one or more aspects of the accommodation or regime, (e.g. lack of " +
"proper adaptation to optimise function relating, for instance, to stairs, lifts or other problems of access); may be " +
"associated with risk to patient (e.g. injury) which would otherwise be reduced. </br>" +
"</br>" +
"3 = Distressing multiple problems with accommodation, e.g. some basic necessities absent (e.g. unsatisfactory or " +
"unreliable heating, lack of proper cooking facilities, inadequate sanitation); clear elements of risk to the patient " +
"resulting from aspects of the physical environment. </br>" +
"</br>" +
"4 = Accommodation is unacceptable (e.g. lack of basic necessities, insecure, or living conditions are otherwise " +
"intolerable, contributing adversely to the patient's condition or placing them at high risk of injury or other " +
"adverse consequences). </br>" +
"</br>" +
"7 = Not known/unable to rate. </br>" +
"</br>" +
"As far as possible the use of rating point 7 should be avoided."

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function H65Alert12() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message="</br>" +
"<b>12. Problems with occupation and activities</b></br>" +
"</br>" +
"Rate the overall level of problems with quality of day-time environment. Is there help to cope with disabilities, and " +
"opportunities for maintaining or improving occupational and recreational skills and activities? Consider factors such " +
"as stigma, lack of appropriate qualified staff, access to supportive facilities, (e.g. staffing and equipment at Day Centres, " +
"workshops, social clubs) etc. </br>"  +
"</br>" +
"Do not rate the level of functional disability itself, rated at Scale 10. </br>" +
"</br>" +
"NB: Rate the patient's usual situation, whether in community, open or secure setting (hospital or prison). If patient " + 
"is in acute ward/temporary care, rate activities during period before admission. If information not available, rate 7. </br>" +
"</br>" +
"0 = Patient's daytime environment is acceptable; helpful in keeping any disability rated at Scale 10 to the lowest " +
"level possible and maximising autonomy. </br>" +
"</br>" +
"1 = Minor or temporary problems e.g. good facilities available but not always at appropriate times for the consumer. </br>" +
"</br>" +
"2 = Limited choice of activities, e.g. insufficient carer or professional support, useful day setting available but " +
"for very limited hours. </br>" +
"</br>" +
"3 = Marked deficiency in skilled services and support available to help optimise activity level and autonomy, little " +
"opportunity to use skills or develop new ones; unskilled care difficult to access. </br>" +
"</br>" +
"4 = Lack of any effective opportunity for daytime activities makes the consumer's problems worse or consumer refuses " +
"service offered which might improve their situation. </br>" +
"</br>";
  if(ptcnhdps!='4'){
  message+=
    "7 = Not known/unable to rate. </br>" +
    "</br>" +
    "As far as possible the use of rating point 7 should be avoided.";
  }

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function IAlert1() {
  message="</br> " +
"<b>1. Problems with disruptive behaviour/irritability/under controlled emotional regulation</b></br>"+
"</br> " +
"<b>Include:</b></br> " +
"Oppositional and disruptive behaviours are normal in the development of young children as they</br>"+
"explore and begin to individuate. This scale addresses problems with the age and developmentally</br>"+
"appropriate capacity of the infant to manage strong feelings, without recourse to age inappropriate</br>"+
"levels of overt disruptive behaviours.</br>" +
"</br> " +
"Clinically, the identification of age-inappropriate emotional regulation does not indicate the source</br>"+
"of any difficulties. It may be expected, though not invariable, that regulating emotions connected to hunger,</br>"+
"tiredness, and separation may be more prominent with younger infant's while overt aggression or rage may be</br>"+
"prominent with the older children. </br>" +
"</br> " +
"Include behaviour associated with any disorder (such as hyperkinetic disorder, depression, autism). </br>" +
"</br> " +
"Include the capacity to manage intense feelings of hunger, tiredness or separation from the primary caregiver. </br>" +
"</br> " +
"Include difficulty calming, demanding, whining, undue irritability, excessive crying, frequently arching back</br>" +
"and stiffening coupled with turning away from all eye contact, physiological indicators of</br>" +
"stress (hiccups, yawns, non-injurious scratching) and manifestations of under controlled emotional regulation. </br>" +
"</br> " +
"Include physical or verbal aggression (e.g. pushing, hitting, biting, kicking, teasing), to</br>" +
"others (e.g. children, parents or other caregivers, siblings, familiar adults or strangers), animals</br>"+
"or objects (e.g. toys). </br> " +
"</br> " +
"Include oppositional behaviour (e.g. defiance, opposition to authority or tantrums).</br>" +
"</br></br>" +
"<b>Exclude:</b></br>" +
"Problems associated with feeding and sleeping rated at scale 4 (feeding) and scale 8 (sleeping).</br>" +
"</br> " +
"Problems directly associated with physical health illnesses or disability rated at scale 6.</br>" +
"</br> " +
"Problems associated with self-injury rated at scale 3.</br>" +
"</br> " +
"Problems associated with over-controlled emotional regulation or inhibited behaviours are rated at Scale 9.</br>" +
"</br> " +
"Problems associated with Sensory Processing that impact on adaptive interaction are rated at Scale 7.</br>" +
"</br></br>" +
"<b>Rating:</b></br>" +
"0 = No problem.</br>" +
"</br> " +
"1 = Minor problem requiring no formal action.</br>" +
"</br> " +
"2 = Mild problem. May be limited to one context.</br>" +
"</br> " +
"3 = Problem of moderate severity with disruptive or aggressive behaviour or under controlled emotional regulation. May be/likely to be in more than one context.</br>" +
"</br> " +
"4 = Severe to very severe problem with disruptive or aggressive behaviour or under controlled emotional regulation. May occur in almost all activities</br>" +
"</br> ";

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function IAlert2() {
  message="</br> " +
"<b>2: Problems with activity levels, joint and/or sustained attention </b></br>"+
"</br> " +
"<b>Include:</b></br> " +
"Include problems with overactivity/underactivity, joint and sustained attention associated</br>"+
"with any cause, including related to aspects of the caregiving environment (e.g. lack of appropriate</br>"+
"stimulation, opportunities for motor development). </br>" +
"</br> " +
"Include problems with restlessness, fidgeting, jerkiness, distractibility, listlessness or concentration</br>"+
"due to any cause, including depression. Include issues of sustained as well as joint attention. Activity and</br>"+
"attention difficulties may manifest in altered levels of vigilance, impaired turn taking in behavioural</br>"+
"interactions, pronounced startle reflexes and rigidity. </br>" +
"</br> " +
"Where two factors appear to negate each other (e.g. joint attention problematic but sustained attention is</br>"+
"not problematic), rate the most severe occurrence. </br>" +
"</br></br>" +
"<b>Exclude:</b></br>" +
"Problems directly associated with physical health illnesses or disability scored at scale 6. </br>" +
"</br></br>" +
"<b>Rating:</b></br>" +
"0 = No problem.</br>" +
"</br> " +
"1 = Minor problem requiring no formal action.</br>" +
"</br> " +
"2 = Mild problem with overactivity/underactivity or restlessness but with age-appropriate support/structure,</br>" +
"the infant can modify their activity levels. Some vulnerability in joint and/or sustained attention however the infant's development is only mildly affected.</br>" +
"</br> " +
"3 = Problem of moderate severity with overactivity/underactivity. Activity levels may be difficult to control</br>" +
"even with appropriate supports. May be significant issues with joint and/or sustained attention.</br>" +
"</br> " +
"4 = Severe to very severe problem with overactivity/underactivity. Likely to be impacting negatively on the infant's</br>" +
"capacity to engage and achieve developmental milestones across multiple contexts. Consistent and severe limitations in joint and/or sustained attention</br>" +
"</br> ";

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function IAlert3() {
  message="</br> " +
"<b>3: Non accidental self-injury or lack of self-protective behaviours </b></br>"+
"</br> " +
"<b>Include:</b></br> " +
"With infants and pre-schoolers, the question of intentionality is less clear than with older children.</br>"+
"While intention should be considered, it will not always be apparent and the clinician may draw on clinical</br>"+
"experience to infer intentionality. Behaviours included here are essentially those that result in self-harm that</br>"+
"are not the consequence of an accident. However, self-injurious behaviours and actions are rated here irrespective</br>"+
"of any indication of intent. </br>" +
"</br> " +
"May include self-soothing behaviour that results in injury or harm e.g. hitting, biting, hair pulling, head banging,</br>"+
"rocking, cutting, scratching, excessive sucking leaving marks, skin scratching or picking. </br>" +
"</br> " +
"May include lack of self-protective reflexes, inhibition of pain and reassurance responses e.g. when an infant is </br>"+
"clearly hurt yet inhibits a response where other infants of the same age would be expected to cry, flinch and look </br>"+
"to parent(s) for reassurance.</br>"+
"</br> " +
"Include attempts to stab self with a pen or other non-lethal object, cutting self with knives or scissors, deliberately </br>"+
"jumping from a height with injurious intent, frequently discussing intent to self-injure. May include consideration of </br>" +
"behaviours during play.</br>" +
"</br></br>" +
"<b>Exclude:</b></br>" +
"Self-injurious behaviour secondary to a medical condition.</br>" +
"</br> " +
"Accidental self-injury unless clearly from a lack of self-protective reflexes.</br>" +
"</br></br>" +
"<b>Rating:</b></br>" +
"0 = No problem.</br>" +
"</br> " +
"1 = Minor problem requiring no formal action with lack of self-protective reflexes or self-injurious behaviours.</br>" +
"</br> " +
"2 = Mild problem with self-injury or a lack of self-protective reflexes. May include rubbing, scratching, rocking or " +
"play which leads to mild levels of physical injury. Play that regularly involves self-injury. Occasional episodes where self-protective reflex is inhibited.</br>" +
"</br> " +
"3 = Problem of moderate severity with potential or actual self-injury. May include moderately severe problems with a " +
"lack of self-protective behaviours that lead to, or potentially lead to injury. May be preoccupation, repeated episodes, or inhibition of pain responses to self-injury.</br>" +
"</br> " +
"4 = Severe to very severe self-injury occurs. Episodes of physical self-injury. May include inhibition of response to pain/discomfort " +
"and lack of self-protection and self-soothing leading to severe self-injury.</br>" +
"</br> ";

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function IAlert4() {
  message="</br> " +
"<b>4: Problems with feeding and eating behaviour </b></br></br>" +
"<b>Include:</b></br>" +
"Feeding behaviours progress with development. The acknowledgement of problems in this area will be</br>"+
"influenced by the duration, distress and incongruence of the concerning behaviours with the infant's</br>"+
"age and age appropriate development.</br>"+
"</br>" +
"Include problems related to difficulties with breast feeding, bottle feeding and solids. Include all</br>"+
"feeding difficulties irrespective of potential cause or solution. Nutritional difficulties may not</br>"+
"always be present but should be considered.</br>"+
"</br>" +
"Include behaviours such as reluctance, resistance or refusing to feed; tiring or sleeping readily </br>"+
"during feeding; feeding related distress (e.g. fussiness or crying); maintaining adequate nutrition </br>"+
"which may result in nasogastric/gastrostomy tube feedings; sensory adversity; vomiting and difficulty </br>"+
"in achieving developmentally appropriate food or feeding skills e.g. limited diet, consistent refusal </br>"+
"of certain foods, groups, or types (e.g. solids), or modes of eating e.g. refusal to eat independently; </br>"+
"little recognition of the relationship between hunger, feeding and satiety. Include under- and over-eating.</br>"+
"</br>" +
"Include feeding problems related to prematurity, physiological problems and gastrointestinal symptoms.</br>"+
"</br>" +
"<b>Rating:</b></br>" +
"0 = No problem.</br>" +
"</br>" +
"1 = Minor problem requiring no formal action. Problems may be transient and may be expected at the infant's developmental stage.</br>"+
"</br>" +
"2 = Mild problem with feeding or eating. Nutritional intake is likely to be within expected parameters.</br>"+
"</br>" +
"3 = Problem of moderate severity with feeding or eating. Some risk of nutritional problems.</br>"+
"</br>" +
"4 = Severe to very severe problem with feeding or eating.</br>"+
"</br> ";

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function IAlert5() {
  message="</br> " +
"<b>5: Problems with developmental delays.</b></br></br>" +
"<b>Include:</b></br>" +
"Include problems with developmental delays not rated at other scales. Delays may occur in areas</br>"+
"such as cognitive, motor, language, or communication development. Concerns should be rated both</br>"+
"irrespective of cause and whether additional professional assessment or intervention has</br>"+
"occurred (e.g. paediatrics, speech pathology). </br>"+
"</br>" +
"It may be difficult to distinguish one domain from another. Cognitive, motor and communication</br>"+
"difficulties may manifest in balance, coordination, proprioception, problem solving, articulation,</br>"+
"comprehension, sentence structure, vocabulary, communication pragmatics, gestures, vocal quality or</br>"+
"range, interference with vocalisation (e.g. dummy, fingers). Difficulties in these areas may impact</br>"+
"on ability to interact effectively with the environment and themselves in the areas of communication,</br>"+
"motor and cognitive skills. While corrected age is a useful construct with premature infants,</br>"+
"chronological age may be the more useful in identifying potential need for intervention. </br>"+
"</br>" +
"<b>Exclude:</b></br>" +
"Physical illness or disability problems such as vision and hearing problems (rated at scale 6). </br>"+
"</br>" +
"<b>Rating:</b></br>" +
"0 = No problem.</br>" +
"</br>" +
"1 = Minor problem requiring no formal action. These may be expected to be within the typical range of development.</br>"+
"</br>" +
"2 = Mild problem that may be noted across more than one setting and in comparison to similar aged peers.</br>"+
"</br>" +
"3 = Problem of moderate severity that may be noted across settings compared with similar aged peers. </br>"+
"</br>" +
"4 = Severe to very severe problem with cognitive, motor or communication skills."+
"Likely to cause significant distress for the infant and/or family. May be severe delays compared to similar aged peers.</br>"+
"</br> ";

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function IAlert6() {
  message="</br> " +
"<b>6: Problems with physical illness or disability </b></br></br>" +
"<b>Include:</b></br>" +
"Physical health problem or disability which limits or prevents movement, impairs </br>" +
"sight or hearing or otherwise interferes with functioning. Problems in this area may </br>" +
"be observed or based on reports from others. </br>"+
"</br>" +
"Include side effects from medication, physical effects from drug/alcohol exposure, </br>" +
"or physical complications of psychological disorders. </br>"+
"</br>" +
"Include physical complications or disability as consequence of self-injury. </br>"+
"</br>" +
"Ratings will be influenced by consideration of impact of illness on everyday functioning. </br>"+
"</br>" +
"<b>Exclude:</b></br>" +
"Problems with cognitive, motor or communication skills already rated at scale 5. </br>"+
"</br>" +
"<b>Rating:</b></br>" +
"0 = No problem.</br>" +
"</br>" +
"1 = Minor problem requiring no formal action (e.g. cold, non-serious fall, teething).</br>"+
"Parent voices concern about transient physical illness or physical symptoms but these</br>"+
"are not considered serious by the parent or clinician. </br>"+
"</br>" +
"2 = Mild problem with physical illness or disability, which may occasionally prevent</br>"+
"or challenge engagement in usual activities. Overall structure of their day is typically</br>"+
"preserved and activities such as the ability to play are only mildly affected. </br>"+
"</br>" +
"3 = Problem of moderate severity with physical illness or disability, resulting in </br>"+
"some ongoing distress and loss of function. Typically, there is some time each day, </br>"+
"in which they are able to engage in usual activities, such as play. </br>"+
"</br>" +
"4 = Severe to very severe problem with physical illness or disability that result in </br>"+
"serious distress and/or loss of function. Normal everyday routines and activities, </br>"+
"including play, are seriously impacted because of the physical problem. Considerable</br>"+
"input of effort and resources may be required to care for the infant and support the parent.</br>"+
"</br> ";

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function IAlert7() {
  message="</br> " +
"<b>7: Problems associated with regulation and integration of sensory processing </b></br></br>" +
"<b>Include:</b></br>" +
"Problems associated with processing, regulating and integrating information from </br>"+
"sensory stimuli which interfere with the sensory regulation required for adaptive </br>"+
"interaction with and exploration of the world. </br>"+
"</br>" +
"While problems with sensory organs are rated at scale 6, this scale is more concerned</br>"+
"with the processing of otherwise apparently intact sensory organs. </br>" +
"</br>" +
"Problems associated with sensory processing can reflect hypersensitivity (over-reactive </br>"+
"therefore avoidant or fearful/cautious) and/or hyposensitivity (under reactive therefore seeking </br>"+
"or impulsive) to one or more normal sensory stimuli. Sensory stimuli include vision, touch, hearing, </br>"+
"taste, smell and spatial awareness including the sensation of movement and awareness of body position in space. </br>"+
"</br>" +
"Problems associated with the regulation and integration of sensory processing usually occur</br>"+
"across multiple settings and within multiple relationships. Intensity, frequency, duration</br>"+
"and location of problematic sensory stimuli may impact on the infant's presentation. </br>"+
"</br>" +
"Examples of the manifestation of sensory regulation difficulties may include responsiveness</br>"+
"to fabrics, movement, travel, focus on apparently irrelevant objects and an avoidance of play.</br>"+
"They may appear to have a preference for swaddling, or to seeking or avoiding certain fabrics. </br>"+
"</br>" +
"<b>Exclude:</b></br>" +
"Problems with disruptive behaviour/under controlled emotional regulation rated at scale 1.</br>"+
"</br>" +
"Problems with activity and attention levels rated at scale 2.</br>"+
"</br>" +
"Problems with feeding rated at scale 4.</br>"+
"</br>" +
"Problems associated with cognitive, motor or communication difficulties rated at scale 5.</br>"+
"</br>" +
"Problems with physical illness or disability rated at scale 6.</br>"+
"</br>" +
"Problems with anxiety and depression and over controlled emotional regulation rated at scale 9.</br>"+
"</br></br>" +
"<b>Rating:</b></br>" +
"0 = No problem.</br>" +
"</br>" +
"1 = Minor problem requiring no formal action with sensory processing (over or under responding </br>"+
"to normal sensory stimuli). However, the impact on adaptive daily functioning and exploration of the world is typically minor.</br>"+
"</br>" +
"2 = Mild problem with sensory processing identified and impacting on the infant. The infant and/or </br>"+
"family may be showing signs of distress but maintaining appropriate developmental milestones. Definite </br>"+
"and minor impact on functioning in daily tasks or in maintaining interactions in primary care-giving </br>"+
"relationships. May become agitated, distressed, or disengaged when exposed to specific sensory stimuli.</br>"+
"</br>" +
"3 = Problem of moderate severity with sensory processing that are impacting on the infant's capacity to</br>"+
"engage with their environment. May manifest as diminished exploration and play. Expect a definite and moderate impact on daily functioning.</br>"+
"</br>" +
"4 = Severe to very severe problem related to sensory processing directly impacting the infant's social, </br>"+
"emotional and physical wellbeing. Definite and severe impact that is typically ongoing.</br>"+
"</br> ";

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function IAlert8() {
  message="</br> " +
"<b>8: Problems associated with sleep </b></br></br>" +
"<b>Include:</b></br>" +
"Sleep disturbance is common for infants.</br>"+
"</br>" +
"Include difficulties in both settling and maintaining sleep irrespective of where </br>"+
"the locus of the difficulty is thought to be (infant, parent, living arrangements).</br>"+
"</br>" +
"Include excessive sleep (e.g. which interferes with opportunities for skills or social development), </br>"+
"insufficient sleep (e.g. periods of awakenings or reduced sleep time), disturbed sleep (e.g. sleep talking, </br>"+
"sleep walking, night terrors, or any other disturbance during sleep when the infant does </br>"+
"not seem to respond to the parents) or difficulties resettling.</br>"+
"</br>" +
"Include snoring or loud mouth breathing with breath holding or gasping. </br>"+
"</br></br>"+
"<b>Rating:</b></br>" +
"0 = No problem.</br>" +
"</br>" +
"1 = Minor problem requiring no formal action. Typically within expected developmental norms, infrequent and where the family appear to have some approaches that successfully address the problem.</br>" +
"</br>" +
"2 = Mild problem which is intermittent. The family appear to have some success in addressing the problem for the infant. </br>" +
"</br>" +
"3 = Problem of moderate severity. The infant's sleeping pattern is of concern to the parents or family or it is likely to be interfering with functioning or development. The sleep disturbance occurs frequently and may be significantly out of keeping with age expectations. </br>" +
"</br>" +
"4 = Severe to very severe problem. The sleeping pattern is a cause for great distress in the parents and family and may be significantly out of keeping with age norms. The sleep disturbance is present nearly all the time and significantly interferes with functioning or development.</br>" +
"</br> ";

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function IAlert9() {
  message="</br> " +
"<b>9: Problems with emotional and related symptoms or over-controlled emotional regulation </b></br></br>" +
"<b>Include:</b></br>" +
"Symptoms of depression, anxiety and phobias. Problems with negative or inhibited affect in the infant suggestive</br>"+
"of low mood, anxiety, fear, emotional withdrawal, or over-controlled emotional regulation. </br>"+
"</br>" +
"May include fears, anxiety or emotional withdrawal from parents and others. Include incongruent lack of </br>"+
"emotional expression. May be expressed with changes in curiosity, clinging, masking face, incongruent </br>"+
"emotional expression, crying, anger, hypnotic gaze, withdrawal and blank expression, exaggerated positive </br>"+
"or negative emotional responses. May include excessive stillness, frozen watchfulness, quiet rage and </br>"+
"restrictions in affect range. An apparent increased tolerance for aversive adult behaviour, or problems</br>"+
"seeking appropriate comfort or safety should be considered. </br>"+
"</br>" +
"Include age or developmentally inappropriate lack of wariness, or avoidance of parents.</br>"+
"</br>" +
"<b>Exclude:</b></br>" +
"Physical sequelae of psychological disorders or medication - rated at scale 6. </br>" +
"</br>" +
"Disruptive behaviours resulting from emotional distress - rated at scale 1. The emotion associated</br>"+
"with the disruptive behaviour is rated here at scale 9.</br>"+
"</br>" +
"<b>Rating:</b></br>" +
"0 = No problem.</br>" +
"</br>" +
"1 = Minor problem requiring no formal action, or transient mood, anxiety and emotional symptoms or changes.</br>" +
"</br>" +
"2 = Mild problem with emotional symptoms.</br>" +
"</br>" +
"3 = Problem of moderate severity with emotional symptoms which are preoccupying, intrude into some activities and are uncontrollable at least sometimes.</br>" +
"</br>" +
"4 = Severe to very severe problems with emotional symptoms which intrude into all activities and may be nearly always uncontrollable.</br>" +
"</br> ";

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}

function IAlert10() {
  message="</br> " +
"<b>10: Problems with social reciprocity </b></br></br>" +
"<b>Include:</b></br>" +
"This scale addresses the infant's engagement in, and engagement of others in, age </br>"+
"and developmentally appropriate interactions. </br>"+
"</br>" +
"There may be problems with seeking, engaging and enjoying interactions with familiar </br>"+
"adults and children, including development of the social smile at 6 weeks. Responses to</br>"+
"social engagement or social intrusion from others may not be responded to appropriately e.g. ambiguous half </br>"+
"smiles. Problems may manifest with reciprocity in communication, play, and games. Reciprocity may be expressed </br>"+
"both pre-verbally and verbally, as well as behaviourally. Problems may manifest as indiscriminate and overfamiliar </br>"+
"social interactions as well as withdrawn and disengaged social interactions. </br>"+
"</br>" +
"Problems rated in this scale may include the infant's capacity to manage appropriate eye contact </br>"+
"e.g. the infant may not gaze at the parent's face or at an interesting object when shown. Problems</br>"+
"may include not socially referencing others, brief glances without sustained looking (difficulty </br>"+
"gaining and sustaining eye contact); avoidant gaze; no eye contact (but no active avoidance either) </br>"+
"and unfocused eyes. Problems with vocalisations relating to reciprocity of interactions, such as turn</br>"+
"taking, engagement attempts, and vocal mirroring may also be relevant indicators of social reciprocity issues.</br>"+
"</br>" +
"<b>Exclude:</b></br>" +
"Difficulties with communication separate to the social reciprocity function are rated at Scale 5.</br>" +
"</br>" +
"Difficulties with the emotional attunement of parent's and carers to the infant and misalignment</br>"+
"between the infant's needs and the parents' or carers' responses should be rated at Scale 12. </br>"+
"</br>" +
"<b>Rating:</b></br>" +
"0 = No problem.</br>" +
"</br>" +
"1 = Minor problem requiring no formal action. Transient or mild problems in the infant's developing capacity to engage in social relationships. </br>" +
"</br>" +
"2 = Mild problem.</br>" +
"</br>" +
"3 = Problem of moderate severity with social reciprocity. </br>" +
"</br>" +
"4 = Severe to very severe issues with social reciprocity. Problems likely to occur in many areas, over time and intrude across most interactions.</br>" +
"</br> ";

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function IAlert11() {
  message="</br> " +
"<b>11: Problems with age appropriate self-care and environmental exploration</b></br></br>" +
"<b>Include:</b></br>" +
"This scale addresses age-appropriate self-care and exploration of the environment. </br>"+
"</br>" +
"Self-care is more likely to be a prominent consideration with older children. Self-care is likely</br>"+
"to include age appropriate levels of assistance with bathing, feeding, dressing, playing etc. </br>"+
"Problems with self-care and environmental exploration may exist due to environmental restrictions, </br>"+
"including parent's comfort, concerns or control. </br>"+
"</br>" +
"Include problems with activities of self-care such as washing, dressing, toileting. </br>"+
"</br>" +
"Exploration may include visual, tactile, verbal as well as physical exploration </br>"+
"(under or over exploration). Include problems with complex skills such as play, </br>"+
"autonomous activities or separating from parents, taking into account the norm for </br>"+
"the infant's age and developmental stage. Difficulties may be indicated by regression</br>"+
"to an earlier stage of development. The impact on exploration and self-care resulting </br>"+
"from separation problems with parents when the infant is attending structured socialisation </br>"+
"settings (e.g. day care, pre-school) may be rated here although actual attendance issues are rated at scale 13. </br>"+
"</br>" +
"Include poor levels of functioning arising from apparent lack of motivation, mood, environmental restriction </br>"+
"or any other issue whether it is considered to arise from the infant, parents or the environment. </br>"+
"</br>" +
"<b>Exclude:</b></br>" +
"Do not include feeding problems rated at scale 4.</br>" +
"</br>" +
"Do not include sleeping problems rated at scale 8. </br>" +
"</br>" +
"Do not include lack of opportunities for exercising intact abilities and skills,"+
"as might occur in an over-restrictive family rated at scale 12. </br>"+
"</br>" +
"Do not include the outcome of limited environmental exploration on structured"+
"socialisation settings rated at scale 13. </br>"+
"</br>" +
"<b>Rating:</b></br>" +
"0 = No problem.</br>" +
"</br>" +
"1 = Minor problem requiring no formal action with self-care or exploration of the environment. </br>" +
"</br>" +
"2 = Mild problem with self-care or exploration of the environment. </br>" +
"</br>" +
"3 = Problem of moderate severity with self-care or exploration of the environment.</br>" +
"</br>" +
"4 = Severe to very severe problem with self-care or exploration of the environment"+
"that is likely to be intruding across settings, activities and persons.</br>" +
"</br> ";

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function IAlert12() {
  message="</br> " +
"<b>12: Problems with family life and relationships </b></br></br>" +
"<b>Include:</b></br>" +
"This scale addresses problems in family life that are thought to impact on </br>"+
"the infant. If the parents are separated, consider the relationship with each </br>"+
"parent and the separated parents' ability to co-parent where appropriate. </br>"+
"</br>" +
"Include relationships with significant others - grandparents, siblings, </br>"+
"extended family members, child care providers. Include instances of neglect </br>"+
"including physical (e.g. lack of sufficient access to appropriate food, </br>"+
"shelter and clothing) and emotional (e.g. lack of warmth, comfort and age </br>"+
"appropriate regulation of the infant's affect). Parental reflective capacity; </br>"+
"the availability of access to caring, attentive and empathic adults and the </br>"+
"ability to keep the infant in mind, should be considered. </br>"+
"</br>" +
"Include parent or family irritability with the infant. Difficulties in </br>"+
"managing powerful emotions or any consequent harmful behaviour by those in </br>"+
"the infant's immediate environment should be considered. </br>"+
"</br>" +
"Include instances of physical or verbal hostility or abuse towards the infant, </br>"+
"as well as family hostility or conflict which impacts on the infant. Consider </br>"+
"capacity for significant others to contain powerful negative emotions towards </br>"+
"the infant. </br>"+
"</br>" +
"Issues such as parental or sibling mental health, substance use and </br>"+
"personality problems should be included if they have an effect on the infant.</br>"+
"</br>"+
"<b>Exclude:</b></br>" +
"Do not include disruptive behaviour by infant, rated at scale 1. </br>" +
"</br>" +
"Do not include problems with social reciprocity rated at scale 10. </br>"+
"</br>" +
"<b>Rating:</b></br>" +
"0 = No problem.</br>" +
"</br>" +
"1 = Minor problem requiring no formal action. Some concerns about family </br>"+
"relationships may be evident but effect on infant mitigated through adequate </br>"+
"parental reflective capacity and action are apparent. </br>" +
"</br>" +
"2 = Mild problem with family relationships. Some impact on the infant's </br>"+
"development is apparent.  </br>" +
"</br>" +
"3 = Problem of moderate severity with family relationships. Considerable </br>"+
"impact on infant development apparent. </br>" +
"</br>" +
"4 = Severe to very severe problem in family relationships with severe impact </br>"+
"on the infant. </br>" +
"</br> ";

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function IAlert13() {
  message="</br> " +
"<b>13: Problems with attending care, education and socialisation settings </b></br></br>" +
"<b>Include:</b></br>" +
"This scale addresses attendance at the prime socialisation setting outside of </br>"+
"the immediate family. Include attendance at any type of regular socialisation </br>"+
"and care activity at the time of rating e.g. regular care with extended family </br>"+
"or formal early childhood education (sometimes called kindergarten or pre-school). </br>"+
"Include activities irrespective of location or whether a family member is present </br>"+
"(e.g. regular play group sessions at infant's home). </br>"+
"</br>" +
"Include refusal of, or withdrawal from early childhood education, childcare, </br>"+
"play group or similar regular socialisation activity, irrespective of cause. </br>"+
"</br>" +
"Include limited or minimal opportunities to attend socialisation activities </br>"+
"appropriate to the infant's age. </br>"+
"</br>" +
"Include consideration of additional supports such as reassurance, transitional </br>"+
"objects, required to settle the infant in the setting. </br>"+
"</br>" +
"If early childhood education, childcare etc. is in holiday break, rate the</br>"+
"last two weeks of the previous open period. </br>"+
"</br>" +
"Note: Infants and young children will communicate their reluctance and </br>"+
"distress at attending these settings through a range of symptoms. These may </br>"+
"include problems in feeding, toileting, eating, playing, communicating and </br>"+
"sleeping both at the settings and around the transition time. These symptoms </br>"+
"in themselves are likely to be rated at different HoNOSI scales and are not </br>"+
"the sole source of rating at this scale. However, it is acknowledged that the </br>"+
"reluctance to attend may be conveyed to the clinician through these symptoms. </br>"+
"The actual attendance problems are rated at this scale. </br>"+
"</br>" +
"Note: Reluctance to attend a socialisation setting may reflect problems in that</br>"+
"setting for the infant. Reluctance to attend may also occur in the dyadic </br>"+
"relationship or simply from parental concerns. To reiterate, acknowledging a </br>"+
"problem does not mean that the source of the problem or the required solution </br>"+
"necessarily lies with the infant. HoNOSI is agnostic as to the locus of any </br>"+
"intervention. </br>"+
"</br>" +
"<b>Exclude:</b></br>" +
"Many infants have not attended a socialisation setting outside the family and </br>"+
"the clinician will typically not consider this a problem. However, a clinician </br>"+
"may decide to rate this non-attendance as a problem; for example, where </br>"+
"non-attendance has been considered to reflect extended separation difficulties. </br>"+
"</br>" +
"All behaviours and emotional expressions or consequences of problems </br>"+
"associated with attendance or separation are rated at their respective scales </br>"+
"(e.g. Disruptive at scale 1, Feeding at scale 4, Emotional at scale 9, </br>"+
"Environmental exploration at scale 11). </br>"+
"</br>" +
"Absences due to illness of infant or parents requiring them to be absent from </br>"+
"the setting. This typically includes medical conditions, such as fevers, </br>"+
"contagious illnesses or infections which would be rated at scale 6. </br>"+
"</br>" +
"<b>Rating:</b></br>" +
"0 = No problem. Infant displays age appropriate behaviour on separation from </br>"+
"their parents and settles readily when comforted in the environment. </br>" +
"</br>" +
"1 = Minor problem requiring no formal action with attending and may display </br>"+
"reluctance for brief periods. Responds with small amount of support additional </br>"+
"to that typically required at this age. </br>" +
"</br>" +
"2 = Mild problem with some sessions missed or refusal to participate in </br>"+
"activities when attending. </br>" +
"</br>" +
"3 = Problem of moderate severity with several days missed during rating </br>"+
"period due to infant's reluctance to attend. </br>" +
"</br>" +
"4 = Severe to very severe problem with infant absent for most of the days </br>"+
"or sessions during the rating period.</br>" +
"</br> ";

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}

function IAlert14() {
  message="</br> " +
"<b>14: Problems with knowledge or understanding about the nature of the  "+
"infant's difficulties </b></br></br>" +
"<b>Include:</b></br>" +
"Include lack of useful information or understanding available to the parents, </br>"+
"caregivers, referrers or support system about the nature of the difficulties.</br>"+
"</br>" +
"Include problems with capacity or knowledge to understand the infant's difficulties. </br>"+
"</br>"+
"Include limited or incorrect understanding of the infant's developmental stage and needs. </br>"+
"</br>" +
"Include misunderstanding, minimising, elaborating or exaggerating the </br>"+
"difficulties, impact or distress as well as inaccurate attribution of the infant's difficulties.  </br>"+
"</br>" +
"Include lack of explanation about the difficulty/diagnosis, the cause of the </br>"+
"problem or understanding of the prognosis or the impact on the infant.  </br>"+
"</br>" +
"Rating a problem here does not exclude the service system revising their </br>"+
"understanding of the infant's difficulties. In many ways, problems rated here </br>"+
"may indicate a lack of congruence between the parent's and other's views about </br>"+
"the nature of the difficulties and the views of the clinician (or the assessing </br>"+
"or treating system.)  </br>"+
"</br>" +
"<b>Rating:</b></br>" +
"0 = No problem. Parents, referrers or carers demonstrate a good level of </br>"+
"understanding about the difficulties. </br>" +
"</br>" +
"1 = Minor problem requiring no formal action. For example, parents </br>"+
"essentially understand infant's difficulties but with occasional </br>"+
"misunderstandings such as sometimes downplaying, or exaggerating the </br>"+
"infant's difficulty or distress. </br>" +
"</br>" +
"2 = Mild problem in understanding infant's difficulties. </br>" +
"</br>" +
"3 = Problem of moderate severity. Parents have very little or very poor </br>"+
"knowledge about the nature of their infants' problems. </br>" +
"</br>" +
"4 = Severe to very severe problem. For example, parents have no understanding </br>"+
"about the nature of their infant's problems. Significant disagreement between </br>"+
"the parents, or the referrer's or the carer's views and the views of the assessing or treating system.</br>" +
"</br> ";

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function IAlert15() {
  message="</br> " +
"<b>15: Problems with lack of information, understanding about services, or </br>"+
"managing the infant's difficulties </b></br></br>" +
"<b>Include:</b></br>" +
"Include lack of useful information available to the parents, caregivers, or </br>"+
"referrers, or a lack of understanding regarding services or management of the difficulties. </br>"+
"</br>" +
"Include parental willingness or ability to utilise services or interventions </br>"+
"to support the infant. The consistency with which parent's understand or use </br>"+
"appropriate strategies and the extent to which supports are required to help </br>"+
"the parent's use optimal approaches may be considered. </br>"+
"</br>" +
"Include parents, referrers or carers use and implementation of, information </br>"+
"and appropriate and feasible strategies. Include problems with accessing </br>"+
"available services appropriate to the infant's difficulties (e.g. early </br>"+
"childhood nursing, child protection, family support). </br>"+
"</br>" +
"Rating a problem here does not exclude the service system revising their </br>"+
"understanding of the optimal approach to managing the infant's difficulties. </br>"+
"In many ways, problems rated here may indicate a lack of congruence between </br>"+
"the family, carer's or referrer's views about the management of the infant's </br>"+
"difficulties and the views of the clinician (or the assessing or treating </br>"+
"system's views).  </br>"+
"</br>" +
"<b>Rating:</b></br>" +
"0 = No problem. </br>" +
"</br>" +
"1 = Minor problem requiring no formal action. For example, parents have an </br>"+
"adequate understanding of how best they and other resources can help their </br>"+
"infant, or they are actively seeking appropriate information, support or </br>"+
"access to services. </br>" +
"</br>" +
"2 = Mild problem in understanding or willingness to use the appropriate </br>"+
"services, approaches, resources and supports for the infant's difficulties. </br>" +
"</br>" +
"3 = Problem of moderate severity in understanding or willingness to use the </br>"+
"appropriate services, approaches, resources and supports for the infant's difficulties. </br>" +
"</br>" +
"4 = Severe to very severe problem in understanding or willingness to use the </br>"+
"appropriate services, approaches, resources and supports for the infant's difficulties.</br>" +
"</br> ";

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}

function CAlert1() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message=" </br> " + 
"<b>1. Problems with disruptive, antisocial or aggressive behaviour</b></br> "+
" </br> " + 
" Include behaviour associated with any disorder such as hyper kinetic disorder, depression, autism, drugs or alcohol. </br> " +                       
" </br> " +
" Include physical or verbal aggression, (e.g. pushing, hitting, vandalism, teasing) or physical or sexual abuse of </br>" +
"  other children.  </br>  " +
" </br> " +                                                                      
" Include antisocial behaviour (e.g. thieving, lying, cheating) or oppositional behaviour (e.g. defiance, opposition to </br> " +
" authority or tantrums). </br> " +
" </br> " +                                         
" Do not include over-activity rated at Scale 2, truancy rated at Scale 13, self-harm rated at Scale 3. </br> " +
" </br> " +
" 0 = No problems of this kind during the period rated.  </br> " +
" </br> " +
" 1 = Minor quarrelling, demanding behaviour, undue irritability, lying, etc. </br> " +
" </br> " +
" 2 = Mild but definitely disruptive or antisocial behaviour, lesser damage to property, or aggression or defiant </br> " +
" behaviour. </br>" +              
" </br> " +
" 3 = Moderately severe aggressive behaviour such as fighting, persistently threatening, very oppositional, more </br> " +
" serious destruction of property or moderately delinquent acts. </br> " +
" </br> " +
" 4 = Disruptive in almost all activities or at least one serious physical attack on others or animals, or serious </br> " +
" destruction of property.  </br> " +
" </br> ";
  if(ptcnhdps!='4'){
  message+=
    " 7 = Not known/unable to rate. </br> " +
    " </br> " +
    " As far as possible the use of rating point 7 should be avoided.";
  }

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);

}
function CAlert2() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message=" </br> " + 
"<b>2. Problems with over-activity, attention or concentration</b></br> " +
" </br> " + 
" Include over-active behaviour associated with any disorder such as hyper kinetic disorder, mania, </br> " +
" or arising from drugs. </br> " +
" </br> " +                                                       
" Include problems with restlessness, fidgeting, inattention or concentration due to any cause including depression. </br> " +
" </br> " +                                                                      
" 0 = No problems of this kind during the period rated. </br> " +
" </br> " +
" 1 = Slight over-activity or minor restlessness, etc.  </br> " +
" </br> " +
" 2 = Mild but definite over-activity or attention problems but can usually be controlled.  </br> " +
" </br> " +
" 3 = Moderately severe over-activity or attention problems that are sometimes uncontrollable.  </br> " +
" </br> " +
" 4 = Severe over-activity or attention problems that are present in most activities and almost never controllable. </br> " +
" </br> ";
  if(ptcnhdps!='4'){
  message+=
    " 7 = Not known/unable to rate. </br> " +
    " </br> " +
    " As far as possible the use of rating point 7 should be avoided.";
  }

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function CAlert3() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message=" </br> " + 
"<b>3. Non-accidental self-injury</b></br> " +
" </br> " + 
" Include self harm such as hitting self and self-cutting, suicide attempts, overdoses, handing, drowning, etc. </br> " +  
" </br> " +
" Do not include scratching, picking as a direct result of physical illness rated at Scale 6. </br> " +
" </br> " +
" Do not include accidental self injury due, (e.g. severe learning or physical disability rated at Scale 6). </br> " + 
" </br> " +
" Do not include illness or injury as a direct consequence of drug or alcohol use rated at Scale 4. </br>" +
" </br> " +
" 0 = No problems of this kind during the period rated. </br>" +
" </br> " +
" 1 = Occasional thoughts about death or self-harm not leading to injury. </br> " +
" No self-harm or suicidal thoughts. </br> " +
" </br> " +
" 2 = Non-hazardous self harm such as wrist scratching, whether or not associated with suicidal thoughts. </br> " +
" </br> " +
" 3 = Moderately severe suicidal intent (including preparatory acts such as collecting tablets) or moderate </br> " +
" non-hazardous self harm (e.g. small overdose).  </br> " +
" </br> " +
" 4 = Serious suicidal attempt, (e.g. serious overdose) or serious deliberate self injury. </br> " +
" </br> "; 
  if(ptcnhdps!='4'){
  message+=
    " 7 = Not known/unable to rate. </br> " +
    " </br> " +
    " As far as possible the use of rating point 7 should be avoided.";
  }

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function CAlert4() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message=" </br> " + 
"<b>4. Problems with alcohol, substance or solvent misuse</b></br> " +
" </br> " + 
" Include problems with alcohol, substance or solvent misuse taking into account current </br> " +
" age and societal norms. </br> " +
" </br> " +
" Do not include aggressive or disruptive behaviour due to alcohol or drug use rated at Scale 1. </br> " +
" </br> " +
" Do not include physical illness or disability due to alcohol or drug use rated at Scale 6. </br> " +
" </br> " +
" 0 = No problems of this kind during the period rated. </br> " +
" </br> " +
" 1 = Minor alcohol or drug use, within age norms. </br> " +
" </br> " +
" 2 = Mildly excessive alcohol or drug use.  </br> " +
" </br> " +
" 3 = Moderately severe drug or alcohol problems significantly out of keeping with age norms. </br> " +
" </br> " +
" 4 = Severe drug or alcohol problems leading to dependency or incapacity. </br> " +
" </br> ";
  if(ptcnhdps!='4'){
  message+=
    " 7 = Not known/unable to rate. </br> " +
    " </br> " +
    " As far as possible the use of rating point 7 should be avoided.";
  }

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function CAlert5() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message=" </br> " + 
"<b>5. Problems with scholastic or language skills</b></br> " +
" </br> " + 
" Include problems in reading, spelling, arithmetic, speech or language associated with any </br> " +
" disorder or problem such as specific developmental learning problems, or physical disability </br> " +
" such as hearing problems.   </br> " +
" </br> " + 
" Include reduced scholastic performance associated with emotional or behavioural problems. </br> " +
" </br> " +
" Children with generalised learning disability should not be included unless their functioning </br> " +
" is below the expected level.  </br> " +
" </br> " + 
" Do not include temporary problems resulting purely from inadequate education. </br> " +
" </br> " + 
" 0 = No problems of this kind during the period rated. </br> " +
" </br> " + 
" 1 = Minor impairment within the normal range of variation. </br> " +
" </br> " + 
" 2 = Minor but definite impairment of clinical significance.  </br> " +
" </br> " + 
" 3 = Moderately severe problems, below the level expected on the basis of mental age, past </br>" +
"  performance or physical disability. </br>" +
" </br> " + 
" 4 = Severe impairment, much below the level expected on the basis of mental age, past </br>" + 
"  performance or physical disability. </br> " +
" </br> ";
  if(ptcnhdps!='4'){
  message+=
    " 7 = Not known/unable to rate. </br> " +
    " </br> " +
    " As far as possible the use of rating point 7 should be avoided.";
  }

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function CAlert6() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message=" </br> " + 
"<b>6. Physical illness or disability problems</b></br> " +
" </br> " + 
" Include physical illness or disability problems that limit or prevent movement, impair </br> " +
" sight or hearing, or otherwise interfere with personal functioning. </br> " +
" </br> " +
" Include movement disorder, side effects from medication, physical effects from drug or </br> " +
" alcohol use, or physical complications of psychological disorders such as severe weight loss. </br> " +                   
" </br> " +
" Include self injury due to severe learning disability or as a consequence of self injury </br> " +
" such as head banging. </br> " +
" </br> " +
" Do not include somatic complaints with no organic basis rated at Scale 8. </br> " +
" </br> " +
" 0 = No incapacity as a result of physical health problems during the period rated. </br> " +
" </br> " +
" 1 = Slight incapacity as a result of a health problem during the period (e.g. cold, </br> " +
"  non serious fall, etc). </br> " +
" </br> " +
" 2 = Physical health problem that imposes mild but definite functional restriction. </br> " +
" </br> " +
" 3 = Moderate degree of restriction on activity due to physical health problems. </br> " +
" </br> " +
" 4 = Complete or severe incapacity due to physical health problems. </br> " +
" </br> ";
  if(ptcnhdps!='4'){
  message+=
    " 7 = Not known/unable to rate. </br> " +
    " </br> " +
    " As far as possible the use of rating point 7 should be avoided.";
  }

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function CAlert7() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message=" </br> " + 
"<b> 7. Problems associated with hallucinations, delusions or abnormal"+
" perceptions</b> </br></br> " + 
" Include hallucinations, delusions or abnormal perceptions irrespective of diagnosis. </br> " +
" </br> " +
" Include odd and bizarre behaviour associated with hallucinations and delusions.  </br> " +
" </br> " +
" Include problems with other abnormal perceptions such as illusions or pseudo-hallucinations, </br> " +
" or overvalued ideas such as distorted body image, suspicious or paranoid thoughts. </br> " +
" </br> " +
" Do not include disruptive or aggressive behaviour associated with hallucinations or </br> " +
" delusions rated at Scale 1. </br> " +
" </br> " +
" Do not include over-active behaviour associated with hallucinations or delusions rated </br> " +
" at Scale 2. </br> " +
" </br> " +
" 0 = No evidence of abnormal thoughts or perceptions during the period rated. </br> " +
" </br> " +
" 1 = Somewhat odd or eccentric beliefs not in keeping with cultural norms.  </br> " +
" </br> " +
" 2 = Abnormal thoughts or perceptions are present (e.g. paranoid ideas, illusions or body </br> " +
" image disturbance) but there is little distress or manifestation in bizarre behaviour, </br> " +
" i.e. clinically present but mild. </br>" +
" </br> " +
" 3 = Moderate preoccupation with abnormal thoughts or perceptions or delusions; </br> " +
" hallucinations, causing much distress, or manifested in obviously bizarre behaviour. </br> " +
" </br> " +
" 4 = Mental state and behaviour is seriously and adversely affected by delusions or </br> " +
" hallucinations or abnormal perceptions with severe impact on the person or others. </br> " +
" </br> ";
  if(ptcnhdps!='4'){
  message+=
    " 7 = Not known/unable to rate. </br> " +
    " </br> " +
    " As far as possible the use of rating point 7 should be avoided.";
  }

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function CAlert8() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message=" </br> " + 
"<b> 8. Problems with non-organic somatic symptoms</b> </br> " +
" </br> " + 
" Include problems with gastrointestinal symptoms such as non-organic vomiting or </br> " +
" cardiovascular symptoms or neurological symptoms or non-organic enuresis and </br> " +
" encopresis or sleep problems or chronic fatigue.  </br> " +
" </br> " + 
" Do not include movement disorders such as tics rated at Scale 6. </br> " +
" </br> " +
" Do not include physical illnesses that complicate non-organic somatic symptoms rated </br> " +
" at Scale 6. </br> " +
" </br> " +
" 0 = No problems of this kind during the period rated. </br>" +
" </br> " +
" 1 = Slight problems only, such as occasional enuresis, minor sleep problems, headaches </br> " +
"  or stomach aches without organic basis. </br> " +
" </br> " +
" 2 = Mild but definite problem with non-organic somatic symptoms. </br> " +
" </br> " +
" 3 = Moderately severe, symptoms produce a moderate degree of restriction in some </br> " +
"  activities. </br> " +
" </br> " +
" 4 = Very severe problems or symptoms persist into most activities. The child or </br> " +
"  adolescent is seriously or adversely affected. </br> " +
" </br> ";
  if(ptcnhdps!='4'){
  message+=
    " 7 = Not known/unable to rate. </br> " +
    " </br> " +
    " As far as possible the use of rating point 7 should be avoided.";
  }

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function CAlert9() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message=" </br> " + 
"<b> 9. Problems with emotional and related symptoms</b></br> " +
" </br> " + 
" Rate only the most severe clinical problem not considered previously. </br> " +
" </br> " +
" Include depression, anxiety, worries, fears, phobias, obsessions or </br> " +
" compulsions arising from any clinical condition including eating disorders. </br> " +
" </br> " +
" Do not include aggressive, destructive or over-activity behaviours </br> " +
" attributed to fears or phobias rated at Scale 1. </br> " +
" </br> " +
" Do not include physical complications of psychological disorders such as </br> " +
" severe weight loss rated at Scale 6. </br> " +
" </br> " +
" 0 = No evidence of depression, anxiety, fears or phobias during the </br> " +
"  period rated. </br> " +
" </br> " +
" 1 = Mildly anxious, gloomy or transient mood changes. </br> " +
" </br> " +
" 2 = A mild but definite emotional symptom is clinically present but it  </br> " +
"  is not preoccupying. </br> " +
" </br> " +
" 3 = Moderately severe emotional symptoms that are preoccupying, </br> " +
"  intrude into some activities and are uncontrollable at least sometimes. </br> " +
" </br> " +
" 4 = Severe emotional symptoms that intrude into all activities and are  </br> " +
" nearly always uncontrollable. </br> " +
" </br> ";
  if(ptcnhdps!='4'){
  message+=
    " 7 = Not known/unable to rate. </br> " +
    " </br> " +
    " As far as possible the use of rating point 7 should be avoided.";
  }

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function CAlert10() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message=" </br> " + 
"<b> 10. Problems with peer relationships</b> </br> " +
" </br> " + 
" Include problems with school mates and social network. Problems associated </br> " +
" with active or passive withdrawal from social relationships or problems with </br>" +
" over intrusiveness or problems with the ability to form satisfying peer </br> " +                                   
" relationships. </br> " +
" </br> " +
" Include social rejection as a result of aggressive behaviour or bullying. </br> " +
" </br> " +
" Do not include aggressive behaviour, bullying rated at scale 1. </br> " +
" </br> " +
" Do not include problems with family or siblings rated at Scale 12. </br> " +
" </br> " +
" 0 = No significant problems during the period rated. </br> " +
" </br> " +
" 1 = Either transient or slight problems, occasional social withdrawal. </br> " +
" </br> " +
" 2 = Mild but definite problems in making or sustaining peer relationships. </br> " +
"  Problems causing distress due to social withdrawal, over-intrusiveness, </br> " +
"  rejection or being bullied. </br> " +
" </br> " +
" 3 = Moderate problems due to active or passive withdrawal from social </br> " +
"  relationships, over-intrusiveness, or to relationships that provide little </br> " +
"  or no comfort or support, (e.g. as a result of being severely bullied). </br>" +
" </br> " +
" 4 = Severe social isolation with hardly any friends due to inability to </br> " +
"  communicate socially or withdrawal from social relationships.  </br> " +
" </br> ";
  if(ptcnhdps!='4'){
  message+=
    " 7 = Not known/unable to rate. </br> " +
    " </br> " +
    " As far as possible the use of rating point 7 should be avoided.";
  }

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function CAlert11() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message=" </br> " + 
"<b> 11. Problems with self-care and independence</b> </br> " +
" </br> " + 
" Rate the overall level of functioning, (e.g. problems with basic activities </br> " +
" of self care such as feeding, washing, dressing, toilet and also complex </br> " +
" skills such as managing money, travelling independently, shopping, etc); </br> " +
" taking into account the norm for the child's chronological age. </br> " +
" </br> " +
" Include poor levels of functioning arising from lack of motivation, mood or </br> " +
" any other disorder. </br> " +
" </br> " +
" Do not include lack of opportunities for exercising intact abilities and </br> " +
" skills, as might occur in an over-restrictive family rated at Scale 12. </br> " +
" </br> " +
" Do not include enuresis and encopresis rated at Scale 8. </br> " +
" </br> " +
" 0 = No problems of this kind during the period rated; good ability to </br> " +
"  function in all areas. </br> " +
" </br> " +
" 1 = Minor problems, (e.g. untidy, disorganised). </br> " +
" </br> " +
" 2 = Self-care adequate but major inability to perform one or more complex </br> " +
"  skills (see above). </br> " +
" </br> " +
" 3 = Major problems in one or more areas of self-care (e.g. eating, washing, </br> " +
"  dressing) or major inability to perform several complex skills. </br> " +
"</br>  " +
" 4 = Severe disability in all or nearly all areas of self-care or complex skills. </br> " +
" </br> ";
  if(ptcnhdps!='4'){
  message+=
    " 7 = Not known/unable to rate. </br> " +
    " </br> " +
    " As far as possible the use of rating point 7 should be avoided.";
  }

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function CAlert12() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message=" </br> " + 
"<b> 12. Problems with family life and relationships</b> </br> " +
" </br> " + 
" Include parent-child and sibling relationship problems. </br> " +
" </br> " +
" Include relationships with foster parents, social works or teachers in residential </br> " +
" placements. Relationships in the home with separated parents and siblings should </br> " +
" both be included. Parental personality problems, mental illness, marital difficulties </br> " +
" should only be rated here if they have an affect on the child or adolescent. </br> " +
" </br> " +
" Include problems such as poor communication, arguments, verbal or physical hostility, </br> " +
" criticism and denigration, parental neglect or rejection, over-restriction, sexual or </br> " +
" physical abuse. </br> " +
" </br> " +
" Include sibling jealousy, physical or coercive sexual abuse by sibling. </br> " +
" </br> " +
" Include problems with enmeshment and over-protection. </br> " +
" </br> " +
" Include problems with family bereavement leading to re-organisation. </br> " +
" </br> " +
" Do not include aggressive behaviour by the child or adolescent rated at Scale 1. </br> " +
" </br> " +
" 0 = No problems during the period rated. </br> " +
" </br> " +
" 1 = Slight or transient problems. </br> " +
" </br> " +
" 2 = Mild but definite problem, (e.g. some episodes of neglect or hostility or </br> " +
"  enmeshment or over-protection). </br> " +
" </br> " +
" 3 = Moderate problems, (e.g. neglect, abuse, hostility problems associated with </br> " +
" family or career breakdown or re-organisation). </br> " +
" </br> " +
" 4 = Serious problems with the child or adolescent feeling or being victimised, </br> " +
"  abused or seriously neglected by family or carer. </br> " +
" </br> ";
  if(ptcnhdps!='4'){
  message+=
    " 7 = Not known/unable to rate. </br> " +
    " </br> " +
    " As far as possible the use of rating point 7 should be avoided.";
  }

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function CAlert13() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message=" </br> " + 
"<b> 13. Poor school attendance</b> </br> " +
" </br> " + 
" Include truancy, school refusal, school withdrawal or suspension for any cause. </br> " +
" </br> " +
" Include attendance at type of school at time of rating, (e.g. hospital school, home </br> " +
" tuition, etc. If school holiday, rate the last two weeks of previous term). </br> " +
" </br> " +
" 0 = No problems of this kind during the period rated. </br> " +
" </br> " +
" 1 = Slight problems, (e.g. late for two or more lessons). </br> " +
" </br> " +
" 2 = Definite but mild problems (e.g. missed several lessons because of truancy or </br> " +
" refusal to go to school. </br> " +
" </br> " +
" 3 = Marked problems, absent several days during the period rated. </br> " +
" </br> " +
" 4 = Severe problems, absent most or all days, include school suspension, exclusion </br> " +
"  or expulsion for any cause during the period rated. </br> " +
" </br> ";
  if(ptcnhdps!='4'){
  message+=
    " 7 = Not known/unable to rate. </br> " +
    " </br> " +
    " As far as possible the use of rating point 7 should be avoided.";
  }

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function CAlert14() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message=" </br> " + 
" <b>14. Problems with knowledge or understanding about the nature of the child or adolescent's difficulties (in the previous two weeks).</b></br> " +
" </br> " + 
" Include lack of useful information or understanding available to the child or </br> " +
" adolescent, parents or carers. </br> " +
" </br> " +
" Include lack of explanation about the diagnosis or the cause of the problem or </br> " +
" the prognosis. </br> " +
" </br> " +
" 0 = No problems during the period rated. Parents and carers have been adequately </br> " +
" informed about the child or adolescent's problems. </br> " +
" </br> " +
" 1 = Slight problems only. </br> " +
" </br> " +
" 2 = Mild but definite problems. </br> " +
" </br> " +
" 3 = Moderately severe problems. Parents and carers have very little or incorrect </br> " +
" knowledge about the problem which is causing difficulties such as confusion or </br> " +
" self blame. </br> " +
" </br> " +
" 4 = Very severe problems. Parents have no understanding about the nature of their </br> " +
" child or adolescent's problems.  </br> " +
" </br> ";
  if(ptcnhdps!='4'){
  message+=
    " 7 = Not known/unable to rate. </br> " +
    " </br> " +
    " As far as possible the use of rating point 7 should be avoided.";
  }

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function CAlert15() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message=" </br> " + 
"<b>15. Problems with lack of information about services or management of the child or adolescent's difficulties</b></br> " +
" </br> " + 
" Include lack of useful information or understanding available to the child or </br> " +
" adolescent, parents or carers or referrers. </br> " +
" </br> " +
" Include lack of information about the most appropriate way of providing services </br> " +
" to the child or adolescent such as care arrangements, educational placements, or </br> " +
" respite care. </br> " +
" </br> " +
" 0 = No problems during the period rated. The need for all necessary services has </br> " +
"  been recognised. </br> " +
" </br> " +
" 1 = Slight problems only. </br> " +
" </br> " +
" 2 = Mild but definite problems. </br> " +
" </br> " +
" 3 = Moderately severe problems. Parents and carers have been given very little </br> " +
"  information about appropriate services, or professionals are not sure where a child </br> " +
"  should be managed. </br> " +
" </br> " +
" 4 = Very severe problems. Parents have no information about appropriate services or </br> " +
" professionals do not know where a child should be managed. </br> " +
" </br> ";
  if(ptcnhdps!='4'){
  message+=
    " 7 = Not known/unable to rate. <br> " +
    " </br> " +
    " As far as possible the use of rating point 7 should be avoided.";
  }

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function LAlert1() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message=" </br> " + 
"<b>1. Behavioural Problems - Directed to Others </b> </br> " +
" </br> " + 
" Include behaviour that is directed to other persons. Do not include behaviour that is directed towards self (Item 2) or " +
" primarily at property or other behaviours (Item 3). Rate risk as it is currently perceived. </br>" +
"  </br> " +
" 0 = No behavioural problems directed to others during the period rated. </br>" +
" </br> " + 
" 1 = Irritable, quarrelsome, occasional verbal abuse. </br>" +
" </br> " + 
" 2 = Frequent verbal abuse, verbal threats, occasional aggressive gestures, pushing or pestering (harassment). </br> " +
" </br> " + 
" 3 = Risk, or occurrence of, physical aggression resulting in injury to others requiring simple " +
" first aid, or requiring close monitoring for prevention. </br> " +
" </br> " +
" 4 = Risk, or occurrence of, physical aggression resulting in injury to others requiring simple " +
" first aid or requiring close monitoring for prevention. </br> " +
" </br> ";
  if(ptcnhdps!='4'){
  message+=
    " 7 = Not known/unable to rate. </br> " +
    " </br> " +
    " As far as possible the use of rating point 7 should be avoided. </br> ";
  }
message+=
" </br> " +
" </br> " +
" Important Variations in Rating Guidelines: </br> " +
" </br> " +
" Unlike other HoNOS measures which are rated over the past two weeks (with the exception of those at the end of an " + 
" inpatient episode), the HoNOS-LD requires rating the most severe problem that occurred in the previous four weeks. "  

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function LAlert2() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message=" </br> " + 
"<b> 2. Behavioural Problems - Directed toward Self (Self-Injury)</b> </br> " +
" </br> " + 
" Include all forms of self-injurious behaviour. Do not include behaviour directed towards others (Item 1), or behaviour </br> " +
" primarily directed at property, or other behaviours (Item 3). </br>" +
" </br> " + 
" 0 = No self-injurious behaviour during the period rated. </br>" +
" </br> " + 
" 1 = Occasional self-injurious behaviour (e.g. face-tapping); occasional fleeting thoughts of suicide. </br>" +
" </br> " + 
" 2 = Frequent self-injurious behaviour not resulting in tissue damage (e.g. redness, soreness, wrist-scratching). </br> " +
" </br> " + 
" 3 = Risk or occurrence of self-injurious behaviour resulting in reversible tissue damage and no loss of function </br> " +
" (e.g. cuts, bruises, hair loss). </br> " +
" </br> " +
" 4 = Risk or occurrence of self-injurious behaviour resulting in irreversible tissue damage and permanent loss of </br> " +
" functions (e.g. limb contractures, impairment of vision, permanent facial scarring) or attempted suicide. </br> " +
" </br> ";
  if(ptcnhdps!='4'){
  message+=
    " 7 = Not known/unable to rate. </br> " +
    " </br> " +
    " As far as possible the use of rating point 7 should be avoided. </br> " +
    " </br> ";
  }
message+=" </br> " +
" Important Variations in Rating Guidelines: </br> " +
" </br> " +
" Unlike other HoNOS measures which are rated over the past two weeks (with the exception of those at the end of an </br> " + 
" inpatient episode), the HoNOS-LD requires rating the most severe problem that occurred in the previous four weeks. ";

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function LAlert3() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message=" </br> " + 
"<b> 3. Other Mental and Behavioural Problems</b> </br> " +
" </br> " + 
" This is a global rating to include behavioural problems not described in Items 1 or 2. Do not include behaviour directed </br> " +
" towards others (Item 1), or self-injurious behaviour (Item 2). Rate the most prominent behaviours present. </br>" +
" Include: A, behaviour destructive to property; B, problems with personal behaviours, for example, spitting, smearing, </br> " + 
" eating rubbish, self-induced vomiting, continuous eating or drinking, hoarding rubbish, inappropriate sexual behaviour; </br> " + 
" C, rocking, stereotyped and ritualistic behaviour; D, anxiety, phobias, obsessive or compulsive behaviour; E, others. </br> " + 
" </br> " + 
" 0 = No behavioural problem(s) during the period rated. </br>" +
" </br> " + 
" 1 = Occasional behavioural problem(s) that are out of the ordinary or socially unacceptable. </br>" +
" </br> " + 
" 2 = Behaviour(s) sufficiently frequent and severe to produce some disruption of and impact on own or other </br> " +
" people's functioning. </br> " +
" </br> " + 
" 3 = Behaviour(s) sufficiently frequent and severe to produce significant disruption and impact on own or other </br> " +
" people's functioning, requiring close monitoring for prevention. </br> " +
" </br> " +
" 4 = Constant, severe problem behaviour(s) producing major disruption of and impact on functioning requiring </br> " +
" constant supervision or physical intervention for prevention. </br> " +
" </br> ";
  if(ptcnhdps!='4'){
  message+=
    " 7 = Not known/unable to rate. </br> " +
    " </br> " +
    " As far as possible the use of rating point 7 should be avoided. </br> " +
    " </br> ";
  }
message+=" </br> " +
" Important Variations in Rating Guidelines: </br> " +
" </br> " +
" Unlike other HoNOS measures which are rated over the past two weeks (with the exception of those at the end of an </br> " + 
" inpatient episode), the HoNOS-LD requires rating the most severe problem that occurred in the previous four weeks. ";

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function LAlert4() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message=" </br> " + 
"<b> 4. Attention and Concentration</b> </br> " +
" </br> " + 
" Include problems that may arise from under activity, overactive behaviour, restlessness, fidgeting or inattention, </br> " +
" hyperkinesis or arising from drugs. </br> " +
" </br> " + 
" 0 = Can sustain attention and concentration in activities/programmes independently during the period rated. </br>" +
" </br> " + 
" 1 = Can sustain attention and concentration in activities/programmes with occasional prompting and </br>" +
" supervision. </br> " +
" </br> " + 
" 2 = Can sustain attention and concentration in activities/programmes with regular prompting and supervision. </br> " +
" </br> " + 
" 3 = Can sustain attention and concentration in activities/programmes briefly with constant prompting and </br> " +
" supervision. </br> " +
" </br> " +
" 4 = Cannot participate in activities and programmes even with constant prompting and supervision. </br> " +
" </br> ";
  if(ptcnhdps!='4'){
  message+=
    " 7 = Not known/unable to rate. </br> " +
    " </br> " +
    " As far as possible the use of rating point 7 should be avoided. </br> " +
    " </br> ";
  }
message+=" </br> " +
" Important Variations in Rating Guidelines: </br> " +
" </br> " +
" Unlike other HoNOS measures which are rated over the past two weeks (with the exception of those at the end of an </br> " + 
" inpatient episode), the HoNOS-LD requires rating the most severe problem that occurred in the previous four weeks. ";

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function LAlert5() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message=" </br> " + 
"<b> 5. Memory and Orientation</b> </br> " +
" </br> " + 
" Include recent memory loss and worsening of orientation for time, place and person in addition to previous difficulties. </br> " +
" </br> " + 
" 0 = Can reliably find their way around familiar surroundings and relate to familiar people. </br>" +
" </br> " + 
" 1 = Mostly familiar with environment/person, but with some difficulty in finding their way. </br>" +
" </br> " + 
" 2 = Can relate to environment/person with occasional support and supervision. </br> " +
" </br> " + 
" 3 = Can relate to environment/person with regular support and supervision. </br> " +
" </br> " +
" 4 = Not apparently able to recognise or relate to people and environments. </br> " +
" </br> ";
  if(ptcnhdps!='4'){
  message+=
    " 7 = Not known/unable to rate. </br> " +
  " </br> " +
  " As far as possible the use of rating point 7 should be avoided. </br> " +
  " </br> ";
  }
message+=" </br> " +
" Important Variations in Rating Guidelines: </br> " +
" </br> " +
" Unlike other HoNOS measures which are rated over the past two weeks (with the exception of those at the end of an </br> " + 
" inpatient episode), the HoNOS-LD requires rating the most severe problem that occurred in the previous four weeks. ";

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function LAlert6() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message=" </br> " + 
"<b> 6. Communication (Problems with Understanding)</b> </br> " +
" </br> " + 
" Include all types of responses to verbal, gestural and signed communication, supported if necessary with environmental </br> " +
" cues. </br>" +
" </br> " + 
" 0 = Able to understand first language (mother tongue) about personal needs and experience during the period </br>" +
" rated. </br>" +
" </br> " + 
" 1 = Able to understand groups of words/short phrases/signed communication about most needs. </br>" +
" </br> " + 
" 2 = Able to understand some signs, gestures and single words about basic needs and simple commands (food, </br> " +
" drink, come, go, sit etc). </br>" +
" </br> " + 
" 3 = Able to acknowledge and recognise attempts at communication with little specific understanding (pattern of </br> " +
" response is not determined by nature of communication). </br>" +
" </br> " +
" 4 = No apparent understanding or response to communication. </br> " +
" </br> ";
  if(ptcnhdps!='4'){
  message+=
    " 7 = Not known/unable to rate. </br> " +
    " </br> " +
    " As far as possible the use of rating point 7 should be avoided. </br> " +
    " </br> ";
  }
message+=" </br> " +
" Important Variations in Rating Guidelines: </br> " +
" </br> " +
" Unlike other HoNOS measures which are rated over the past two weeks (with the exception of those at the end of an </br> " + 
" inpatient episode), the HoNOS-LD requires rating the most severe problem that occurred in the previous four weeks. ";

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function LAlert7() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message=" </br> " + 
"<b> 7. Communication (Problems with Expression)</b> </br> " +
" </br> " + 
" Include all attempts to make needs known and communicate with others (words, gestures, signs). Rate behaviour under </br> " +
" Items 1, 2 and 3. </br>" +
" </br> " + 
" 0 = Able to express needs and experience during the period rated. </br>" +
" </br> " + 
" 1 = Able to express needs to familiar people. </br>" +
" </br> " + 
" 2 = Able to express basic needs only (food, drink, toilet etc). </br> " +
" </br> " + 
" 3 = Able to express presence of needs, but cannot specify (e.g. cries or screams when hungry, thirsty or </br> " +
" uncomfortable). </br>" +
" </br> " +
" 4 = Unable to express need or presence of need. </br> " +
" </br> ";
  if(ptcnhdps!='4'){
  message+=
    " 7 = Not known/unable to rate. </br> " +
    " </br> " +
    " As far as possible the use of rating point 7 should be avoided. </br> " +
    " </br> ";
   }
message+=" </br> " +
" Important Variations in Rating Guidelines: </br> " +
" </br> " +
" Unlike other HoNOS measures which are rated over the past two weeks (with the exception of those at the end of an </br> " + 
" inpatient episode), the HoNOS-LD requires rating the most severe problem that occurred in the previous four weeks. ";

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function LAlert8() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message=" </br> " + 
"<b> 8. Problems associated with Hallucinations and Delusions </br></b> " +
" </br> " + 
" Include hallucinations and delusions irrespective of diagnosis. Include all manifestations suggestive of hallucinations </br> " +
" and delusions (responding to abnormal experiences, e.g. invisible voices when alone). </br>" +
" </br> " + 
" 0 = No evidence of hallucinations or delusions during period rated. </br>" +
" </br> " + 
" 1 = Occasional odd or eccentric beliefs or behaviours suggestive of hallucinations or delusions. </br>" +
" </br> " + 
" 2 = Manifestations of hallucinations or delusions with some distress or disturbance. </br> " +
" </br> " + 
" 3 = Manifestations of hallucinations or delusions with significant distress or disturbance. </br> " +
" </br> " +
" 4 = Mental state and behaviour are seriously and adversely affected by hallucinations or delusions with severe </br> " +
" distress or disturbance. </br>" +
" </br> ";
  if(ptcnhdps!='4'){
  message+=
    " 7 = Not known/unable to rate. </br> " +
    " </br> " +
    " As far as possible the use of rating point 7 should be avoided. </br> " +
    " </br> ";
  }
message+=" </br> " +
" Important Variations in Rating Guidelines: </br> " +
" </br> " +
" Unlike other HoNOS measures which are rated over the past two weeks (with the exception of those at the end of an </br> " + 
" inpatient episode), the HoNOS-LD requires rating the most severe problem that occurred in the previous four weeks. ";

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function LAlert9() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message=" </br> " + 
"<b> 9. Problems associated with Mood Changes</b> </br> " +
" </br> " + 
" Include problems associated with low mood states, elated mood states, mixed moods and mood swings (alternating </br> " +
" between unhappiness, weeping and withdrawal on one hand and excitability and irritability on the other). </br>" +
" </br> " + 
" 0 = No evidence of mood change during period rated. </br>" +
" </br> " + 
" 1 = Mood present but with little impact (e.g. gloom). </br>" +
" </br> " + 
" 2 = Mood change producing significant impact on self or others (e.g. weeping spells, decrease in skills, </br> " +
" withdrawal and loss of interest). </br>" +
" </br> " + 
" 3 = Mood change producing major impact on self or others (e.g. severe apathy and unresponsiveness, severe </br> " +
" agitation and restlessness). </br>" +
" </br> " +
" 4 = Depression, hypomania or mood swings producing severe impact on self and others (e.g. severe weight loss </br> " +
" from anorexia or over activity, agitation too severe to allow time to be engaged in meaningful activity). </br>" +
" </br> ";
  if(ptcnhdps!='4'){
  message+=
    " 7 = Not known/unable to rate. </br> " +
    " </br> " +
    " As far as possible the use of rating point 7 should be avoided. </br> " +
    " </br> ";
  }
message+=" </br> " +
"<b> Important Variations in Rating Guidelines:</b> </br> " +
" </br> " +
" Unlike other HoNOS measures which are rated over the past two weeks (with the exception of those at the end of an </br> " + 
" inpatient episode), the HoNOS-LD requires rating the most severe problem that occurred in the previous four weeks. ";

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function LAlert10() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message=" </br> " + 
"<b> 10. Problems with Sleeping </br></b> " +
" </br> " + 
" Do not rate intensity of behaviour disturbance this should be included in Item 3. Include daytime drowsiness, </br> " +
" duration of sleep, frequency of waking and diurnal variation of sleep pattern. </br>" +
" </br> " + 
" 0 = No problem during the period rated. </br>" +
" </br> " + 
" 1 = Occasional mild sleep disturbance with occasional waking. </br>" +
" </br> " + 
" 2 = Moderate sleep disturbance with frequent waking, or some daytime drowsiness. </br> " +
" </br> " + 
" 3 = Severe sleep disturbance or marked daytime drowsiness (e.g. restlessness/over activity/waking early) on </br> " +
" some nights. </br>" +
" </br> " +
" 4 = Very severe sleep disturbance with disturbed behaviour (e.g. restlessness/over activity/waking early most </br> " +
" nights). </br>" +
" </br> ";
  if(ptcnhdps!='4'){
  message+=
    " 7 = Not known/unable to rate. </br> " +
    " </br> " +
    " As far as possible the use of rating point 7 should be avoided. </br> " +
    " </br>";
  }
message+=" </br> " +
" Important Variations in Rating Guidelines: </br> " +
" </br> " +
" Unlike other HoNOS measures which are rated over the past two weeks (with the exception of those at the end of an </br> " + 
" inpatient episode), the HoNOS-LD requires rating the most severe problem that occurred in the previous four weeks. ";

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function LAlert11() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message=" </br> " + 
"<b> 11. Problems with Eating and Drinking </br></b> " +
" </br> " + 
" Include both increase and decrease in weight. Do not rate pica which should be rated in Item 3. This Item does not </br> " +
" include problems experienced by people who cannot feed themselves (e.g. people with severe physical disability). </br>" +
" </br> " + 
" 0 = No problem with appetite during the period rated. </br>" +
" </br> " + 
" 1 = Slight alteration to appetite. </br>" +
" </br> " + 
" 2 = Severe alteration in appetite with no significant weight change. </br> " +
" </br> " + 
" 3 = Severe disturbance with some weight change during the period rated. </br> " +
" </br> " +
" 4 = Very severe disturbance with significant weight change during the period rated. </br> " +
" </br> ";
  if(ptcnhdps!='4'){
  message+=
    " 7 = Not known/unable to rate. </br> " +
    " </br> " +
    " As far as possible the use of rating point 7 should be avoided. </br> " +
    " </br> ";
  }
message+=" </br> " +
" Important Variations in Rating Guidelines: </br> " +
" </br> " +
" Unlike other HoNOS measures which are rated over the past two weeks (with the exception of those at the end of an </br> " + 
" inpatient episode), the HoNOS-LD requires rating the most severe problem that occurred in the previous four weeks. ";  

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function LAlert12() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message=" </br> " + 
"<b> 12. Physical Problems </br></b> " +
" </br> " + 
" Include illnesses from any cause that adversely affects mobility, self-care, vision and hearing (e.g. dementia, thyroid </br> " +
" dysfunction, tremor affecting dexterity). Do not include relatively stable physical disability (e.g. cerebral palsy, </br>" +
" hemiplegia). Behavioural disorders caused by physical problems should be rated under Items 1, 2 and 3 (e.g. </br> " + 
" constipation producing aggression). </br> " + 
" </br> " + 
" 0 = No increased incapacity due to physical problems during the period rated. </br>" +
" </br> " + 
" 1 = Mildly increased incapacity, for example, viral illness, sprained wrist. </br>" +
" </br> " + 
" 2 = Significant incapacity requiring prompting and supervision. </br> " +
" </br> " + 
" 3 = Severe incapacity requiring some assistance with basic needs. </br> " +
" </br> " +
" 4 = Total incapacity requiring assistance for most basic needs such as eating and drinking, toileting (fully </br> " +
" dependent). </br> " +
" </br> ";
  if(ptcnhdps!='4'){
  message+=
    " 7 = Not known/unable to rate. </br> " +
    " </br> " +
    " As far as possible the use of rating point 7 should be avoided. </br> " +
    " </br> ";
   }
message+=" </br> " +
" Important Variations in Rating Guidelines: </br> " +
" </br> " +
" Unlike other HoNOS measures which are rated over the past two weeks (with the exception of those at the end of an </br> " + 
" inpatient episode), the HoNOS-LD requires rating the most severe problem that occurred in the previous four weeks. "  

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function LAlert13() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message=" </br> " + 
"<b> 13. Seizures </br></b> " +
" </br> " + 
" Include all types of fits (partial, focal, generalised, mixed etc) to rate the short-term effect on the individual's daily life. </br> " +
" Rate the effects of the fits. Do not include behavioural problems caused by, or associated with, fits (use Items 1, 2 and 3). </br>" +
" </br> " + 
" 0 = No increased incapacity due to physical problems during the period rated. </br>" +
" </br> " + 
" 1 = Occasional seizures with minimal immediate impact on daily activities (e.g. resumes after seizures). </br>" +
" </br> " + 
" 2 = Seizures of sufficient frequency or severity to produce a significant immediate impact on daily activities (e.g. </br> " +
" resumes activity after a few hours). </br> " + 
" </br> " + 
" 3 = Seizures of sufficient frequency or severity producing a severe immediate impact on daily activities requiring </br> " +
" simple first aid for injuries etc. (e.g. resumes activities next day). </br> " +
" </br> " +
" 4 = Frequent poorly controlled seizures (may be accompanied by episodes of status epilepticus) requiring urgent </br> " +
" clinical attention. </br> " +
" </br> ";
  if(ptcnhdps!='4'){
  message+=
    " 7 = Not known/unable to rate. </br> " +
    " </br> " +
    " As far as possible the use of rating point 7 should be avoided. </br> " +
    " </br> ";
  }
message+=" </br> " +
" Important Variations in Rating Guidelines: </br> " +
" </br> " +
" Unlike other HoNOS measures which are rated over the past two weeks (with the exception of those at the end of an </br> " + 
" inpatient episode), the HoNOS-LD requires rating the most severe problem that occurred in the previous four weeks. "; 

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function LAlert14() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message=" </br> " + 
"<b> 14. Activities of Daily Living at Home </br></b> " +
" </br> " + 
" Include such skills as cooking, cleaning and other household tasks. Do not rate problems with daily living outside the </br> " +
" home (Item 15). Do not rate problems with self-care (Item 16). Rate what is seen regardless of cause, for example, </br>" +
" disability, motivation etc. Rate performance not potential. Rate the current level achieved with the existing support. </br> " + 
" </br> " + 
" 0 = Performs or contributes towards activities of daily living at home. </br>" +
" </br> " + 
" 1 = Some limitations in performing or contributing towards household tasks. </br>" +
" </br> " + 
" 2 = Significant limitations in performing or contributing towards household tasks (e.g. failure to wash or tidy </br> " +
" up, difficulty in preparing meals). </br> " + 
" </br> " + 
" 3 = Major limitations in performing or contributing towards household tasks (e.g. home neglected, dirty, untidy; </br> " +
" no domestic routine). </br> " +
" </br> " +
" 4 = Gross neglect or danger resulting from no apparent contribution to daily living activities. </br> " +
" </br> ";
  if(ptcnhdps!='4'){
  message+=
    " 7 = Not known/unable to rate. </br> " +
    " </br> " +
    " As far as possible the use of rating point 7 should be avoided. </br> " +
    " </br> ";
  }
message+=" </br> " +
" Important Variations in Rating Guidelines: </br> " +
" </br> " +
" Unlike other HoNOS measures which are rated over the past two weeks (with the exception of those at the end of an </br> " + 
" inpatient episode), the HoNOS-LD requires rating the most severe problem that occurred in the previous four weeks. ";

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function LAlert15() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message=" </br> " + 
"<b> 15. Activities of Daily Living Outside the Home</b> </br> " +
" </br> " + 
" Include skills such as budgeting, shopping, mobility and the use of transport etc. Do not include problems with activities </br> " +
" of daily living at home (Item 14). Do not rate problems with self-care (Item 16). Rate the current level with the existing </br>" +
" support. </br> " + 
" </br> " + 
" 0 = Regular use of facilities and public amenities (e.g. shopping). </br>" +
" </br> " + 
" 1 = Some limitation in activity (e.g. difficulty with the use of public amenities or transport). </br>" +
" </br> " + 
" 2 = Significant limitations of activity relating to any one of: shopping, use of transport, public amenities. </br> " +
" </br> " + 
" 3 = Major restrictions in activity relating to more than any one of: shopping, use of transport, public amenities. </br> " +
" </br> " +
" 4 = Severe restrictions in the use of shops, transport, facilities etc. </br> " +
" </br> ";
  if(ptcnhdps!='4'){
  message+=
    " 7 = Not known/unable to rate. </br> " +
    " </br> " +
    " As far as possible the use of rating point 7 should be avoided. </br> " +
    " </br> ";
  }
message+=" </br> " +
" Important Variations in Rating Guidelines: </br> " +
" </br> " +
" Unlike other HoNOS measures which are rated over the past two weeks (with the exception of those at the end of an </br> " + 
" inpatient episode), the HoNOS-LD requires rating the most severe problem that occurred in the previous four weeks. ";

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function LAlert16() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message=" </br> " + 
"<b> 16. Level of Self-Care </br></b> " +
" </br> " + 
" Rate the overall level of functioning in activities of self-care such as eating, washing, dressing and toileting. Rate the </br> " +
" current level achieved with the existing support. Rate appearance not motivation. </br>" +
" </br> " + 
" 0 = Appearance and personal hygiene maintained. </br>" +
" </br> " + 
" 1 = Some deficits in personal appearance, personal hygiene or attention to health (e.g. poor grooming). </br>" +
" </br> " + 
" 2 = Significant deficits in personal appearance, personal hygiene or attention to health causing a problem with </br> " +
" social acceptability, but not sufficient to pose a health risk (e.g. body odour, unkempt hair or nails). </br> " + 
" </br> " + 
" 3 = Major deficits in personal appearance, personal hygiene or attention to health posing a health risk (e.g. skin </br> " +
" rashes, gum infection, not fully dressed). </br> " + 
" </br> " +
" 4 = Gross self-neglect with severe difficulties relating to appearance, hygiene and diet posing a major health risk </br> " +
" (e.g. pressure sores). </br> " + 
" </br> ";
  if(ptcnhdps!='4'){
  message+=
    " 7 = Not known/unable to rate. </br> " +
    " </br> " +
    " As far as possible the use of rating point 7 should be avoided. </br> " +
    " </br> ";
  }
message+=" </br> " +
" Important Variations in Rating Guidelines: </br> " +
" </br> " +
" Unlike other HoNOS measures which are rated over the past two weeks (with the exception of those at the end of an </br> " + 
" inpatient episode), the HoNOS-LD requires rating the most severe problem that occurred in the previous four weeks. ";
  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function LAlert17() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message=" </br> " + 
"<b> 17. Problems with Relationships</b> </br> " +
" </br> " + 
" Include effects of problems with relationships with family, friends and carers (in residential and day/leisure settings). </br> " +
" Measure what is occurring regardless of cause, for example, somebody who is known to have good relationships may still </br>" +
" display problems. </br> " + 
" </br> " + 
" 0 = Positive and frequent contact with family or friend or carers. </br>" +
" </br> " + 
" 1 = Generally positive relationships, but some strain or limitations in contact. </br>" +
" </br> " + 
" 2 = Some positive relationships, but current disruptions of contact or worsening of relationships. </br> " +
" </br> " + 
" 3 = Difficulties in relationships with risk of breakdown or infrequent contact. </br> " +
" </br> " +
" 4 = Significant relationships broken down with no current contact. </br> " +
" </br> ";
  if(ptcnhdps!='4'){
  message+=
    " 7 = Not known/unable to rate. </br> " +
    " </br> " +
    " As far as possible the use of rating point 7 should be avoided. </br> " +
    " </br> ";
  }
message+=" </br> " +
" Important Variations in Rating Guidelines: </br> " +
" </br> " +
" Unlike other HoNOS measures which are rated over the past two weeks (with the exception of those at the end of an </br> " + 
" inpatient episode), the HoNOS-LD requires rating the most severe problem that occurred in the previous four weeks. ";
  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function LAlert18() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }

message=" </br> " + 
"<b> 18. Occupation and Activities </br></b> " +
" </br> " + 
" Rate the overall level of problems with quality of daytime environment. Take account of frequency and appropriateness </br> " +
" of, and engagement with, daytime activities. Consider factors such as lack of qualified staff, equipment and </br>" +
" appropriateness with regard to age and clinical condition. Do not rate problems with self-care (Item 16). </br> " + 
" </br> " + 
" 0 = Fully engaged with acceptable range of activities. </br>" +
" </br> " + 
" 1 = Uses reasonable range of activities, but some limitation of access or appropriateness. </br>" +
" </br> " + 
" 2 = Uses limited range of activities, limited availability or appropriateness. </br> " +
" </br> " + 
" 3 = Attends daytime activity irregularly. </br> " +
" </br> " +
" 4 = No engagement with daytime activity. </br> " +
" </br> ";
  if(ptcnhdps!='4'){
  message+=
    " 7 = Not known/unable to rate. </br> " +
    " </br> " +
    " As far as possible the use of rating point 7 should be avoided. </br> " +
    " </br> ";
  }
message+=" </br> " +
" Important Variations in Rating Guidelines: </br> " +
" </br> " +
" Unlike other HoNOS measures which are rated over the past two weeks (with the exception of those at the end of an </br> " + 
" inpatient episode), the HoNOS-LD requires rating the most severe problem that occurred in the previous four weeks. ";
  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function SAlertA() {
message=" </br> " +
"<b> A. Rate Risk of Harm to Adults or Children </br></b> " +
" </br> " +
" 0 = Nil significant. </br>" +
" </br> " +
" 1 = Minor, e.g. altercation: non-contact sex offence; damage to property;" +
" waste bin fire. </br>" +
" </br> " +
" 2 = Significant injury; major fire; sex assault. </br> " +
" </br> " +
" 3 = Serious - wounding; arson endangering life; rape; disability. </br> " +
" </br> " +
" 4 = Grave - including homicide, near-fatal injury, profound trauma. </br> " +
" </br> " +
" 7 = Not known/unable to rate. </br> " +
" </br> " +
" </br> "
  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function SAlertB() {
message  = " </br> " +
"<b> B. Rate Risk of Self-Harm (Deliberate or Accidental) </br></b> " +
" </br> " +
" 0 = Nil significant. </br>" +
" </br> " +
" 1 = E.g. minor self-harm/overdose; marked neglect of hygiene;" +
" undernourished.</br>" +
" </br> " +
" 2 = Significant injury; or disfigurement; in-patient medical treatment" +
" for overdose; burns; starvation etc. </br> " +
" </br> " +
" 3 = Disability by any form of self-harm. </br> " +
" </br> " +
" 4 = Actual or near suicide; jumping from height. </br> " +
" </br> " +
" 7 = Not known/unable to rate. </br> " +
" </br> " +
" </br> "
  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function SAlertC() {
message = " </br> " +
"<b> C. Rate Need for Building Security to Prevent Escape </br></b> " +
" </br> " +
" 0 = Open community residence. </br>" +
" </br> " +
" 1 = Open facility on psychiatric campus. </br>" +
" </br> " +
" 2 = Low security; PICU; high dependency; restricted exit with security" +
" features. </br> " +
" </br> " +
" 3 = Medium security; airlock; secure building design and compound. </br> " +
" </br> " +
" 4 = High security, security features comparable to closed prison. </br> " +
" </br> " +
" 7 = Not known/unable to rate. </br> " +
" </br> " +
" </br> "
  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function SAlertD() {
message = " </br> " +
"<b> D. Rate need for a Safely-Staffed Living Environment</b> </br> " +
" </br> " +
" 0 = No need - unstaffed residence appropriate. </br>" +
" </br> " +
" 1 = Day care; home treatment; 24-hour staff/in-patient, but with" +
" unescorted community leave. </br>" +
" </br> " +
" 2 = 24 hour staff/in-patient care, without unescorted community leave. </br> " +
" </br> " +
" 3 = Enhanced/continuous/special observation measures. </br> " +
" </br> " +
" 4 = Occasional or frequent seclusion; more than one staff continuously. </br> " +
" </br> " +
" 7 = Not known/unable to rate. </br> " +
" </br> " +
" </br> "
  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function SAlertE() {
message = " </br> " +
"<b> E. Rate need for Escort on Leave (Beyond Secure Perimeter) </br></b> " +
" </br> " +
" Do not include need for a driver. </br>" +
" </br> " +
" 0 = No inclination to abscond; alert individual; behave appropriately. </br>" +
" </br> " +
" 1 = One escort as may wander, fall, be run over, return late, behave" +
" inappropriately. </br>" +
" </br> " +
" 2 = Maximum two escorts to contain behaviour or deter absconsion. </br> " +
" </br> " +
" 3 = Maximum three escorts to contain behaviour or deter absconsion. </br> " +
" </br> " +
" 4 = Requires special arrangements; four escorts, special vehicle; police" +
" assistance. </br> " +
" </br> " +
" 7 = Not known/unable to rate. </br> " +
" </br> " +
" </br> "
  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function SAlertF() {
message = " </br> " +
"<b> F. Rate Risk to Individual from Others </br></b> " +
" </br> " +
" 0 = Nil significant. </br>" +
" </br> " +
" 1 = Bullying; disempowerment; unwanted attention; disadvantage. </br>" +
" </br> " +
" 2 = Abuse; assault; swindle; serious harassment; prostitution. </br> " +
" </br> " +
" 3 = Serious victimisation or injury; rape; severe media hostility. </br> " +
" </br> " +
" 4 = Death, serious disability, profound trauma. </br> " +
" </br> " +
" 7 = Not known/unable to rate. </br> " +
" </br> " 
  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function SAlertG() {
message = " </br> " +
"<b> G. Rate the need for Risk Management Procedures</b> </br> " +
" </br> " +
" 0 = Basic care planning. </br>" +
" </br> " +
" 1 = Ongoing team clinical risk assessment. </br>" +
" </br> " +
" 2 = Specialist clinical risk management; relapse prevention or other" +
" special therapy. </br> " +
" </br> " +
" 3 = Requires compulsory check, search or test re drugs; weapons; visits;" +
" mail/phone. </br> " +
" </br> " +
" 4 = Invasive or intensive checks, searches, tests or similar restriction." +
" </br> " +
" </br> " +
" 7 = Not known/unable to rate. </br> " +
" </br> " +
" </br> "
  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function SAlert1() {
message = " </br> " + 
"<b> 1. Overactive, aggressive, disruptive or agitated behaviour </br></b> " +
" </br> " + 
" Include behaviour due to any cause, e.g. drugs, alcohol, dementia, psychosis, depression, etc. </br> " +
"  </br> " +
" Do not include bizarre behaviour, rated at Scale 6. Rate sexual behaviours at Scale 8 (I) but rate any violence/intimidation here.</br>" +
" </br> " + 
" 0 = No problems of this kind during the period rated. </br>" +
" </br> " + 
" 1 = Some irritability, quarrels, restlessness, disruptive behaviour, etc. </br> " +
" </br> " + 
" 2 = Includes aggressive gestures, pushing or pestering or provoking others; threats or verbal aggression; lesser damage to property (e.g. broken cup or window, cigarette burns); marked over-activity or agitation. </br> " +
" </br> " + 
" 3 = Physically aggressive to others or animals (short of rating 4); persistently threatening manner; more serious over-activity or destruction of property (e.g. broken doors, minor fire setting to bins/ashtrays etc.). </br> " +
" </br> " +
" 4 = At least one serious physical attack on others or on animals; destruction of property (e.g. dangerous fire- setting); use of weapons; persistent serious intimidation behaviour. </br> " +
" </br> " +
" 7 = Not known/unable to rate. </br> " +
" </br> " +
" As far as possible the use of rating point 7 should be avoided." 
  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function SAlert2() {
message = " </br> " + 
"<b> 2. Non-accidental self-injury </br></b> " +
" </br> " + 
" Do not include accidental self-injury (due e.g. to dementia or severe learning disability); the cognitive problem is rated at Scale 4 and the injury at Scale 5. </br> " +
" </br> " +       
" Do not include illness or injury as a direct consequence of drug or alcohol use rated at Scale 3, (e.g. cirrhosis of the liver or injury resulting from drunk driving are rated at Scale 5). </br> " +
" </br> " +
" 0 = No problem of this kind during the period rated. </br> " +
" </br> " +
" 1 = Fleeting thoughts about self harm or suicide, but little risk; no self-harm. </br> " +
" </br> " +
" 2 = Mild risk during period; includes non-hazardous self-harm e.g. wrist-scratching, not requiring physical treatment); persistent or worrying thoughts about self-harm.</br> " +
" </br> " +
" 3 = Moderate to serious risk of deliberate self-harm; includes preparatory acts (e.g. collecting tablets, secreting razor blade, making nooses, suicide notes). </br> " +
" </br> " +
" 4 = Serious suicidal attempt and/or serious deliberate self-harm during period (i.e. person seriously harmed self, or intended to, or risk death by their actions). </br> " +
" </br> " +
"7 = Not known/unable to rate. </br> " +
" </br> " +
"As far as possible the use of rating point 7 should be avoided."
  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
} 
function SAlert3() {
message = " </br> " + 
"<b> 3. Problem drinking or drug-taking </br></b> " +
" </br> " + 
" Do not include aggressive or destructive behaviour due to alcohol or drug use, rated at Scale 1. </br> " +
" </br> " +
" Do not include physical illness or disability due to alcohol or drug use, rated at Scale 5. </br> " +
" </br> " +
" 0 = No problem of this kind during the period rated (e.g. minimal cannabis use, drinking within health guidelines). </br> " +
" </br> " +
" 1 = Some over-indulgence, but within social norm (e.g. significant cannabis use, other low risk activity). </br> " +
" </br> " +
" 2 = Loss of control of drinking or drug-taking; but not serious addicted (e.g. regular cannabis use, drinking above health guidelines); (in controlled settings - occasional positive urine tests, loss of leave or delayed discharge on account of attitude or behaviour towards drink and drugs). </br> " +
" </br> " +
" 3 = Marked dependence on alcohol or drugs with frequent loss of control, drunk driving; (in controlled settings - drugs debts, frequent attempts to obtain drugs; persistent pre-occupation with drink/drugs; repeated intoxication or positive urine tests). </br> " +
" </br> " +
" 4 = Incapacitated by alcohol or drug problems. </br> " +
" </br> " +
"7 = Not known/unable to rate. </br> " +
" </br> " +
"As far as possible the use of rating point 7 should be avoided."
  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function SAlert4() {
message = " </br> " + 
"<b> 4. Cognitive problems </br></b> " +
" </br> " + 
" Include problems of memory, orientation and understanding associated with any disorder, learning disability, dementia, schizophrenia, etc. </br> " +
" </br> " + 
" Do not include temporary problems (e.g. hangovers) resulting from drug or alcohol use, rated at Scale 3. </br> " +
" </br> " +                  
" 0 = No problem of this kind during the period rated. </br> " +
" </br> " +
" 1 = Minor problems with memory or understanding (e.g. forgets names occasionally). </br> " +
" </br> " +
" 2 = Mild but definite problems, (e.g. has lost way in a familiar place or failed to recognise a familiar person); sometimes mixed up about simple decisions; major impairment of long term memory. </br> " +
" </br> " +
" 3 = Marked disorientation in time, place or person, bewildered by everyday events; speech is sometimes incoherent, mental slowing. </br> " +
" </br> " +
" 4 = Severe disorientation, (e.g. unable to recognise relatives, at risk of accidents, speech incomprehensible); clouding or stupor. </br> " +
" </br> " +
"7 = Not known/unable to rate. </br> " +
" </br> " +
"As far as possible the use of rating point 7 should be avoided."
  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function SAlert5() {
message = " </br> " + 
"<b> 5. Physical illness or disability problems </br></b> " +
" </br> " + 
" Include illness or disability from any cause that limits or prevents movement, or impairs sight or hearing, or otherwise interferes with personal functioning (e.g. pain).  </br> " +
" </br> " + 
" Include side-effects from medication; effects of drug/alcohol use; physical disabilities resulting from accidents or self-harm associated with cognitive problems, drunk driving, etc. </br> " +
" </br> " + 
" Do not include mental or behavioural problems rated at Scale 4. </br> " +
" </br> " + 
" 0 = No physical health problem during the period rated. </br> " +
" </br> " + 
" 1 = Minor health problem during the period (e.g. cold, non-serious fall, etc.). </br> " +
" </br> " + 
" 2 = Physical health problem imposes mild restriction on mobility and activity (e.g. sprained ankle, breathlessness). </br> " + 
" </br> " + 
" 3 = Moderate degree of restriction on activity due to physical health problem (e.g. has to give up work or leisure activity).</br> " +
" </br> " + 
" 4 = Severe or complete incapacity due to physical health problems. </br> " +
" </br> " +
"7 = Not known/unable to rate. </br> " +
" </br> " +
"As far as possible the use of rating point 7 should be avoided."
  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function SAlert6() {
message = " </br> " + 
"<b> 6. Problems associated with hallucinations and delusions </br></b> " +
" </br> " + 
" Include hallucinations and delusions irrespective of diagnosis. </br> " +
" </br> " + 
" Include odd & bizarre behaviour associated with hallucinations or delusions, such as thought disorder. </br> " +
" </br> " + 
" Do not include aggressive, destructive or overactive behaviours attributed to hallucinations or delusions, rated at Scale 1. </br> " +
" </br> " +
" 0 = >No evidence of hallucinations or delusions during the period rated. </br> " +
" </br> " + 
" 1 = Somewhat odd or eccentric beliefs not in keeping with cultural norms. </br> " +
" </br> " + 
" 2 = Delusions or hallucinations (e.g. voices, visions) present, but there is little distress to patient or manifestation in bizarre behaviour (i.e. clinically present but mild). </br> " +
" </br> " + 
" 3 = Marked preoccupation with delusions or hallucinations, causing much distress and/or manifested in obviously bizarre behaviour (i.e.  moderately severe clinical problem). </br> " +
" </br> " + 
" 4 = Mental state and behaviour is seriously and adversely affected by delusions or hallucinations, with severe impact on patient/others. </br> " +
" </br> " +
"7 = Not known/unable to rate. </br> " +
" </br> " +
"As far as possible the use of rating point 7 should be avoided."

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function SAlert7() {
message = " </br> " + 
"<b> 7. Problems with depressed mood </br></b> " +
" </br> " + 
" Do not include overactivity or agitation, rated at Scale 1. </br> " +
" </br> " + 
" Do not include suicidal ideation or attempts, rated at Scale 2. </br> " +
" </br> " + 
" Do not include delusions or hallucinations, rated at Scale 6. </br> " +
" </br> " + 
" 0 = No problems associated with depressed mood during the period rated. </br> " +
" </br> " + 
" 1 = Gloomy or minor changes in mood (not regarded as 'depression'). </br> " +
" </br> " + 
" 2 = Mild but definite depression and distress: (e.g. feelings of guilt; loss of self-esteem, but not amounting to a clinical episode of depression); troublesome mood swings. </br> " +
" </br> " + 
" 3 = Depression with inappropriate self-blame, preoccupied with feelings of guilt, as a level likely to attract diagnosis and treatment; clinically problematic swings of mood. </br> " +
" </br> " + 
" 4 = Severe or very severe depression, with guilt or self-accusation.  </br> " +
" </br> " +
"7 = Not known/unable to rate. </br> " +
" </br> " +
"As far as possible the use of rating point 7 should be avoided."

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function SAlert8() {

message = " </br> " + 
"<b> 8. Other mental and behavioural problems </br></b> " +
" </br> " + 
" Rate only the most severe clinical problem not considered at Scale 6 & 7 as follows: specify the type of problem by entering the appropriate letter: A phobic; B anxiety; C obsessive-compulsive; D stress; E dissociative; F somatoform; G Eating; H sleep; I sexual (for sexual behaviour problem, see guidance in brackets); J other, specify. </br> " +
" </br> " + 
" 0 = No evidence of any of these problems during the period rated.  </br> " +
" </br> " + 
" 1 = Minor non-clinical problems (impolite sexual talk/gestures). </br> " +
" </br> " + 
" 2 = A problem is clinically present, but there are relatively symptom-free intervals and service user has degree of control i.e., mild level; (excessively tactile or non-contact sexual offence or very provocative, e.g.  exposes self, walks around semi-naked, peeping into bedrooms, etc.). </br> " +
" </br> " + 
" 3 = Constant preoccupation with problem, occasional severe attack or distress, with loss of control e.g. avoids anxiety provoking situations, calls neighbour to help, etc.; moderately severe level of problem (sexual assault, e.g. touching breast/buttock/genitals over clothing). </br> " +
" </br> " + 
" 4 = Severe, persistent problem dominates most activities; (more serious sexual assault, i.e. genital contact, sexual touching under clothing). </br> " +
" </br> " +
"7 = Not known/unable to rate. </br> " +
" </br> " +
"As far as possible the use of rating point 7 should be avoided."

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function SAlert9() {
message = " </br> " + 
"<b> 9. Problems with relationships </br></b> " +
" </br> " + 
" Rate the patient's most severe problem associated with active or passive withdrawal from social relationships, and/or non-supportive, destructive or self-damaging relationships. Take into account limited access to outside relationships in secure settings, include patients/inmates/staff relationships. </br> " + 
" </br> " + 
" 0 = No significant problems during the period. </br> " +
" </br> " + 
" 1 = Minor non-clinical problems. </br> " +
" </br> " + 
" 2 = Definite problems in making or sustaining supportive relationships: patient complains and/or problems are evident to others. </br> " +
" </br> " + 
" 3 = Persisting major problems due to active or passive withdrawal from social relationships, and/or to relationships that provide little or no comfort or support. </br> " +
" </br> " + 
" 4 = Severe and distressing social isolation due to inability to communicate socially and/or withdrawal from social relationships.  </br> " +
" </br> " +
"7 = Not known/unable to rate. </br> " +
" </br> " +
"As far as possible the use of rating point 7 should be avoided."

  var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function SAlert10() {
message = " </br> " + 
"<b> 10. Problems with activities of daily living </br></b> " +
" </br> " + 
" Rate the overall level of functioning in activities of daily living (ADL): (e.g. problems with basic activities of self-care such as eating, washing, toilet); also complex skills such as budgeting, organising where to live, recreation, mobility and use of transport, self-development, etc. </br> " +
" </br> " +                                                                       
" Include any lack of motivation for using self-help opportunities, since this contributes to a lower overall level of functioning. </br> " +
" </br> " +
" Do not include lack of opportunities for exercising intact abilities and skills (e.g. in secure settings) rated at Items 11 and 12.  </br> " +
" </br> " + 
" 0 = No problems during period rated; good ability to function in all areas. </br> " +
" </br> " + 
" 1 = Minor problems only (e.g. untidy, disorganised). </br> " +
" </br> " + 
" 2 = Self-care adequate, but major lack of performance of one or more complex skills (see above); needs occasional prompting. </br> " +
" </br> " + 
" 3 = Major problems in one or more areas of self-care (eating, washing, dressing, toilet, etc.) has a major inability to perform several complex skills; needs constant prompting or supervision. </br> " +
" </br> " + 
" 4 = Severe disability or incapacity in all or nearly all areas of self-care and complex skills.  </br> " +
" </br> " +
"7 = Not known/unable to rate. </br> " +
" </br> " +
"As far as possible the use of rating point 7 should be avoided."

var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function SAlert11() {

message = " </br> " + 
"<b> 11. Problems with living conditions </br></b> " +
" </br> " + 
" Rate the overall severity of problems with the quality of living conditions and daily domestic routine. </br> " +
" </br> " +
" Are the basic necessities met (heat, light, hygiene)? If so, is there help to cope with disabilities and a choice of opportunities to use skills and develop new ones? </br> " +
" </br> " + 
" Do not rate the level of functional disability itself, rated at Scale 10. </br> " +
" </br> " + 
" NB: Rate patient's usual accommodation whether community, open or secure setting (hospital or prison). If in acute ward/other temporary care, rate the home accommodation. If information not obtainable, rate 7. </br> " +
" </br> " + 
" 0 = Accommodation and living conditions are acceptable; helpful in keeping any disability rated at scale 10 to the lowest level possible, and supportive of self-help. </br> " +
" </br> " + 
" 1 = Accommodation is reasonably acceptable although there are minor or transient problems (e.g., not ideal location, not preferred option, doesn't like food, etc).   </br> " +
" </br> " + 
" 2 = Significant problems with one or more aspects of the accommodation and/or regime (e.g. restricted choice; staff or household have little understanding of how to limit disability, or how to help develop new or intact skills). </br> " +
" </br> " + 
" 3 = Distressing multiple problems with accommodation (e.g. some basic necessities absent); housing environment has minimal or no facilities to improve service user's independence. </br> " +
" </br> " + 
" 4 = Accommodation is unacceptable (e.g. lack of basic necessities, patient is at risk of eviction, or 'roofless', or living conditions are otherwise intolerable making service user's problems worse). </br> " +
" </br> " +
"7 = Not known/unable to rate. </br> " +
" </br> " +
"As far as possible the use of rating point 7 should be avoided."

var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function SAlert12() {

message = " </br> " + 
"<b> 12. Problems with occupation and activities </br></b> " +
" </br> " + 
" Rate the overall level of problems with quality of day-time environment. Is there help to cope with disabilities, and opportunities for maintaining or improving occupational and recreational skills and activities?  Consider factors such as stigma, lack of appropriate qualified staff, access to supportive facilities, (e.g. staffing and equipment of Day Centres, workshops, social clubs) etc. </br> "  +
" </br> " + 
" Do not rate the level of functional disability itself, rated at Scale 10. </br> " +
" </br> " + 
" NB: Rate the patient's usual situation, whether in community, open or secure setting (hospital or prison). If patient is in acute ward/temporary care, rate activities during period before admission. If information not available, rate 7. </br> " +
" </br> " + 
" 0 = Patient's day-time environment is acceptable; helps to keep any disability rated at Scale 10 to the lowest level possible, and supportive of self-help. </br> " +
" </br> " + 
" 1 = Minor or temporary problems (e.g. late pension cheques, reasonable facilities available but not always at desired and appropriate times, etc.). </br> " + 
" </br> " + 
" 2 = Limited choice of activities; e.g. lack of reasonable tolerance (e.g. unfairly refused entry to public library/baths; lack or day areas); lack of facilities in large establishment; handicapped by lack of a permanent address; or insufficient carer/professional support; or helpful day setting available but for very limited hours.  </br> " +
" </br> " + 
" 3 = Marked deficiency in skilled services available to help minimise level of existing disability; no opportunities to use intact skills or add new ones; unskilled care difficult to access; no activity areas available; leave withheld from small establishment causes restriction. </br> " +
" </br> " + 
" 4 = Lack of any opportunity for daytime activities makes patient's problem worse; long periods of enforced inactivity each day (e.g. prison cell).  </br> " +
" </br> " +
"7 = Not known/unable to rate. </br> " +
" </br> " +
"As far as possible the use of rating point 7 should be avoided."

var alertWindow = window.open("","AlertWindow",windowObjectReference);
  alertWindow.document.write(cssSetup);
  alertWindow.document.write(message);
  alertWindow.document.write(boxEnd);
}
function InfoAlert(question){

var msg1 = "Timeline or frequency of use: require the service user to recall "+
           "the number of days in the past 4 weeks (7-28 days) that the "+
           "focus of the specific question occurred, for example 'In the past "+
           "four weeks, how many days did you use the specified substance?'";

var msg2 = "\n\nFeedback wheel interpretation:\n"+
           "0=0 days;\n1=1-4 days;\n2=5-15 days;\n3=16-25 days;\n4=26+ days;\n5=NA";

var msg3 = "Quantity used: Ask the service user to identify the amount of "+
           "alcohol used on a 'typical drinking day'. Clinician to use the ALAC "+
           "conversion chart on back of ADOM form to convert the response to number "+
           "of standard drinks consumed.\n\n"+
           "1 Standard Drink [SD] = 10 grams of alcohol\n"+
           "330ml can of beer@4% ALC = 1 standard drink\n"+
           "100ml glass of table wine@12.5% ALC = 1 standard drink\n"+
           "335ml bottle of RTD Spirits@8% ALC = 2.1 standard drinks\n"+
           "750ml bottle of wine@13% ALC = 7.7 standard drinks\n"+
           "1000ml bottle of spirits@47% ALC = 37 standard drinks\n"+
           "3 litre cask of wine@12.5% ALC = 30 standard drinks";

var msg4 = "\n\nFeedback wheel interpretation:\n"+
           "0=0 SD;\n1=1-4 SD;\n2=5-10 SD;\n3=11-15 SD;\n4=16+ SD;\n5=NA";

var msg5 = "\n\nWhere the form specifies opioids, this means illicit or inappropriately "+
           "accessed opioids. For example street methadone, poppies, codeine etc.";

var msg6 = "Where the service user identifies that they are using 'Any other "+
           "drugs', up to three of these can be recorded. It is recognised that "+
           "current availability and trends indicate that these may change fairly "+
           "rapidly. The focus of the discussion should be on the number of days "+
           "used in the past 0-28 days rather than the drug per se.";

var msg7 = "Quantity used: ask the service user to identify how many cigarettes they "+
           "have smoked per day on average. Where service users are using loose tobacco, "+
           "50gm = 100 cigarettes.";

var msg8 = "\n\nFeedback wheel interpretation:\n0=0 cigarettes;\n"+
           "1=1-10 cigarettes;\n2=11-20 cigarettes;\n3=21-30 cigarettes;\n4=31+ cigarettes;\n5=NA";

var msg9 = "Ask the service user to identify the three main substances of concern from "+
           "their responses to questions 1 - 8.\n Where the service user identifies more "+
           "than one substance of concern, (there can be up to 3) the service user is to "+
           "prioritise with '1' being the substance of most concern.";

var msg10= "Frequency of use: require service user to recall the last number of days "+
           "in the past 4 weeks (7-28 days) that injecting a substance occurred.\n\n"+
           "Feedback wheel interpretation:\n" +
           "0=0 days injecting;\n1=1 day injecting, not sharing;\n2=2-28 days injecting, not sharing;\n"+
           "3=1-9 days injecting, sharing;\n4=10+ days injecting, sharing;\n5=NA";

var msg11= "\n\nWhere the response to sharing is Yes = UNSAFE\nWhere the response to sharing is No = SAFE";

var msg12= "Clinician is to explain what sharing and injecting equipment means, and to check "+
           "especially whether injecting equipment has been shared between couples or partners.";

var msg13= "This question is checking general physical health, so you need to keep it broad. "+
           "The service user's state of health might be affected by the effects of substance "+
           "use, but it may also be related to a co-existing physical health problem or medical "+
           "condition, not affected by substance use.\n\nRating scale requires service user to "+
           "confirm how often have physical problems caused problems in their daily life by "+
           "choosing one of the following: not at all/less than weekly/once or twice a week/"+
           "three or four times a week/daily or almost daily.";

var msg14= "\n\nFeedback wheel interpretation:\n"+
           "0=not at all;\n1=Less than weekly;\n2=Once or twice a week;\n3=3 or 4 times a week;\n"+
           "4=Daily or almost daily;\n5=NA";

var msg15= "Keep this question broad, as the response can get complex. For example the service "+
           "user's response may be an impact from substance use (improved or worsened in relapse) "+
           "or may be due to a primary co-existing mental health problem such as depression, "+
           "anxiety or schizophrenia, which could be worsened by the substance use. However "+
           "it can also be a primary problem, present even when the service user is abstinent.\n\n"+
           "Rating scale: require service user to confirm how often has general mental health "+
           "caused problems in their daily life by choosing one of the following: not at all/"+
           "less than weekly/once or twice a week/three or four times a week/daily or almost daily.";

var msg16= "This question can cover conflict of difficult relationships, or fights or arguments "+
           "caused by substance use, or could relate to conflict with partners, parents, friends "+
           "or children. It could also relate for the need for family intervention, as a person "+
           "may be abstinent but still be in conflict; they may need help with family functioning "+
           "and communication, now they are abstinent, or their family and friends may have "+
           "problems trusting them.\n\nRating scale: require service user to confirm how often "+
           "alcohol or drug use led to problems or arguments with friends or family members by "+
           "choosing one of the followng: not at all/less than weekly/once or twice a week/"+
           "three or four times a week/daily or almost daily.";

var msg17= "Rating scale: require service user to confirm how often has alcohol or drug use caused "+
           "problems with work or other activities; in any of the following: social, recreational, "+
           "looking after children and other family members, study or other personal activities? "+
           "Focus on the service user's perception for each of the above areas.\n Choose one of the "+
           "following responses: not at all/less than weekly/once or twice a week/three or four "+
           "times a week/daily or almost daily.";

var msg18= "This question asks 'In the past four weeks, how often have you engaged in any of "+
           "the following: paid work, voluntary work, study, looking after children or other care "+
           "giving activities.' This question is about meaningful activity to the service user; "+
           "it is pro-social, broader than work, as not everyone will be in paid employment.\n"+
           "Choose one of the following responses: not at all/less than weekly/once or twice a week/"+
           "three or four times a week/daily or almost daily.\n\nFeedback wheel interpretation:\n"+
           "*NOTE: score sequence difference from questions 12-18\n0=Daily or almost daily;\n"+
           "1=3 or 4 times a week;\n2=Once or twice a week;\n3=Less than weekly;\n4=Not at all;\n5=NA";

var msg19= "This question asks about difficulties (over the past four weeks) with housing or finding "+
           "somewhere stable to live. Keep the question broad, as a service user responses may relate "+
           "to substance use or other factors.\nChoose one of the following responses: not at all/"+
           "less than weekly/once or twice a week/three or four times a week/daily or almost daily.";

var msg20= "This question is about illegal activity, which may or may not be related to substance "+
           "use. Do not record use of illegal substances, as this has already been recorded in "+
           "Section 1 of the ADOM form.\n\nRemind the service user that this question only records "+
           "frequency of criminal or illegal activity, and does not require the service user to "+
           "explain or identify what occurred. It relates to criminal or illegal activity whether "+
           "it has been detected or not. Choose one of the following responses: not at all/"+
           "less than weekly/once or twice a week/three or four times a week/daily or almost daily.";

var msg21= "This question asks the service user to identify how close they are to where they want "+
           "to be in their recovery - their progress towards their wellbeing.\nRating scale: "+
           "Requires the service user to confirm a rating on a 1 to 10 scale where '10' is the "+
           "best possible - their progress towards their wellbeing. ";

var msg22= "This question asks the service user to rate their satisfaction with progress towards "+ 
           "achieving their recovery goals.\nRating scale: requires service user to choose one "+
           "from the following: not at all/slightly/moderately/considerably/extremely.";

var msg23= "\n\nFeedback wheel interpretation:\n"+
           "0=0 days;\n1=1-4 days;\n2=5-15 days;\n3=16-25 days;\n4=26+ days;\n5=NA";

var msg24= "\n\nFeedback wheel interpretation:\n"+
           "0=0 days;\n1=1 day;\n2=2-8 days;\n3=9-15 days;\n4=16+ days;\n5=NA";

  switch(question){
    case "1":{
      alert(msg1+msg2);
      break;
    }
    case "2":{
      alert(msg3+msg4);
      break;
    }
    case "3":{
      alert(msg1+msg2);
      break;
    }
    case "4":{
      alert(msg1+msg23);
      break;
    }
    case "5":{
      alert(msg1+msg5+msg24);
      break;
    }
    case "6":{
      alert(msg1+msg24);
      break;
    }
    case "7a":{
      alert(msg6+msg24);
      break;
    }
    case "7b":{
      alert(msg1);
      break;
    }
    case "7c":{
      alert(msg6+msg24);
      break;
    }
    case "7d":{
      alert(msg1);
      break;
    }
    case "7e":{
      alert(msg6+msg24);
      break;
    }
    case "7f":{
      alert(msg1);
      break;
    }
    case "8":{
      alert(msg7+msg8);
      break;
    }
    case "9a":{
      alert(msg9);
      break;
    }
    case "9b":{
      alert(msg9);
      break;
    }
    case "9c":{
      alert(msg9);
      break;
    }
    case "10":{
      alert(msg10);
      break;
    }
    case "11":{
      alert(msg12+msg11);
      break;
    }
    case "12":{
      alert(msg13+msg14);
      break;
    }
    case "13":{
      alert(msg15+msg14);
      break;
    }
    case "14":{
      alert(msg16+msg14);
      break;
    }
    case "15":{
      alert(msg17+msg14);
      break;
    }
    case "16":{
      alert(msg18);
      break;
    }
    case "17":{
      alert(msg19+msg14);
      break;
    }
    case "18":{
      alert(msg20+msg14);
      break;
    }
    case "19":{
      alert(msg21);
      break;
    }
    case "20":{
      alert(msg22);
      break;
    }
  }
}
