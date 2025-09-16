//jsVersion  : V11.03.00
//
// ACCAlerts - created for ACC scores
//
// Written   : 24/08/2017 : Richa Phogat    
//
// Function  : alerts for the users to better decide which ratings to give on
//             ACC screens
//----------------------------------------------------------------------------
function Alert1() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }
message=
"\n" +
"ACCIDENT DETAILS \n\n" +

"The Following are usually accepted as accidents: \n\n" +

"\u2022 A force or resistance external to the body (such as something striking the body or the body falling onto something) \n" +
"\u2022 Forceful movements of the body to avoid impact (such as ducking or twisting) \n" +
"\u2022 Environment factors (such as sudden exposure to gas or toxin) \n\n" +

"The following are not usually accepted as accidents: \n\n" +
"\u2022 Force is only from within the body (such as a sneeze causing a rib sprain, or biting the tongue) \n" +
"\u2022 Non occupational gradual process injuries (such as tendonitis developed playing tennis) \n" +
"\u2022 No specific event (such as waking up with a sore neck) \n\n" +

'As the ACC is a "no fault" scheme, injury cover and funding of treatment is not dependent on whether the injury was caused by someone (including the patient themselves). \n\n' +

"Why is it important to ACC? \n" +
'ACC must establish that the legislative criteria of an "accident" have been met in order to provide cover. \n' +
"To further understand what constitutes an accident, you refer to the ACC Legislation. \n\n" +

"See http://www.legislation.govt.nz for more details. \n\n"

 alert(message);
}
//------------------------------------------------------------------
function Alert2() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }
message=
"\n" +

"Did the accident occur at work? \n" +
"How do you complete this field? \n" +
"The accident is a work accident if any of the following could be answered 'Yes'. \n\n" +

"Was the patient: \n" +
"\u2022 Injured while undertaking work tasks? \n" +
"\u2022 Required to be at this place for work purposes? \n" +
"\u2022 Injured while travelling to or from work in transport provided by their employer? \n" +
"\u2022 Injured when working from home? \n" +
"\u2022 Injured while travelling for their job? \n" +
"\u2022 Injured while having a rest or a meal break at work? \n\n" +

"To further understand what constitutes a work injury, you can refer to the ACC Legislation. \n\n" +

"Why is this important to ACC?  \n" +
"ACC is required to maintain and operate separate accounts for Work, Motor Vehicle, Earners, Non-Earners, and Treatment Injury claims. \n\n" +

"See http://www.legislation.govt.nz for more details. \n\n"

 alert(message);
}
//------------------------------------------------------------------
function Alert3() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }
message=
"\n" +

"Did the accident involve a moving motor vehicle on a public road? \n" +
"How do you complete this field? \n" +
"A motor vehicle accident includes situations where the accident involved a moving motor vehicle and the patient was: \n" +
"\u2022 A driver or passenger \n" +
"\u2022 In a stationary vehicle \n" +
"\u2022 Struck by a moving vehicle \n" +
"\u2022 Travelling for work purposes \n\n" +

"A motor vehicle accident does not include: \n" +
"\u2022 Off-road use of vehicles. E.g. Falling off a dirt bike on private farm land \n" +
"\u2022 Loading/unloading or repairing a stationary vehicle. E.g. A mechanic's foot is crushed when a car jack fails \n" +
"\u2022 Non motorised vehicle only accidents. E.g. Falling off a bicycle riding down the road \n\n" +
"To further understand what constitutes a motor vehicle injury, you can refer to the ACC Legislation. \n\n" +

"Why is this important to ACC? \n" +
"ACC is required to maintain and operate separate accounts for Work, Motor Vehicle, Earners, Non-Earners, and Treatment Injury claims. \n\n" +

"See http://www.legislation.govt.nz for more details. \n\n" 

 alert(message);
}
//------------------------------------------------------------------
function Alert4() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }
message=
"\n" +
"Accident Location \n" +
"How do you complete this section? \n" +
"Please select the city or district in which the accident occurred. \n\n" +

"Why is this important to ACC? \n" +
"This is collected for statistical purposes. \n\n" 

 alert(message);
}
//------------------------------------------------------------------
function Alert5() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }
message=
"\n" +
"Was the injury caused as a result of medical treatment? \n" +
"Did the injury occur in the context of the patient receiving treatment from a registered health professional? \n\n" +

"How do you complete this field? \n" +
"This can include injury sustained: \n" +
"\u2022 While receiving treatment \n" +
"\u2022 Because of a failure to treat in a timely manner \n" +
"\u2022 That is not an ordinary consequence of the treatment, taking into account the patient's circumstances. \n" +
"'Medical misadventure' does not need to be demonstrated for ACC to consider a claim a treatment injury claim. \n\n" +

"Treatment injury claims will normally require specialist clinical input to determine cover. \n\n" +

"To further understand what constitutes a treatment injury, you can refer to the ACC Legislation. \n\n" +

"Why is this important to ACC? \n" +
"ACC is required to maintain and operate separate accounts for Work, Motor Vehicle, Earners, Non-Earners, and Treatment Injury claims. \n\n" +

"See http://www.legislation.govt.nz for more details. \n\n"

 alert(message);
}
//------------------------------------------------------------------
function Alert6() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }
message=
"\n" +
"Is this a work related gradual process, disease, or infection claim? \n" +
"How do you complete this field? \n" +
"Work related gradual process, disease, or infection includes injuries sustained over time as a result of a work task or exposure in the work environment. This can include asbestosis, noise induced hearing loss, or musculoskeletal injuries. \n\n" +

"ACC will assess the factors in the workplace that may have contributed to the injury. In some instances input will be sought from Occupational Medicine specialists. \n\n"

 alert(message);
}
//------------------------------------------------------------------
function Alert7() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }
message=
"\n" +

"Has the patient been admitted to hospital? \n" +
"Indicates to ACC that the patient has been admitted to Hospital as a result of their injury. \n\n" +

"Why is this important to ACC? \n" +
"Patients who have been admitted to Hospital will be contacted by ACC to determine if further rehabilitation assistance is required. \n\n"

 alert(message);
}
//------------------------------------------------------------------
function Alert8() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }
message=
"\n" +

"Name of employer \n" +
"The person, company or organisation that pays the patients wages or salary. \n\n" +

"How do you complete this field? \n" +
'This includes "Self" if the patient is self-employed. \n\n' +

"Why is this important to ACC? \n" +
"\u2022 ACC must notify the patient's employer of the accident. \n" +
"\u2022 Some employers are 'Accredited Employers' who manage (and pay for) their own workplace accident claims in return for a reduced ACC levy. If you are unsure, please contact the Health Provider Helpline on 0800 222 070 \n" +
"or email: providerhelp@acc.co.nz. Please have your provider number ready and the team will be able to search on your behalf. \n\n"

 alert(message);
}
//------------------------------------------------------------------
function Alert9() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }
message=
"\n" +

"How do you complete this field? \n" +
"'Paid Employment in NZ' includes when the patient is: \n" +
"\u2022 An employee that pays PAYE \n" +
"\u2022 An owner or part owner of a limited liability company \n" +
"'Self Employed in NZ' includes when the patient is: \n" +
"\u2022 Self Employed \n" +
"\u2022 Working as a Sole trader or Partnership \n" +
"These categories do not include when the patient is: \n" +
"\u2022 A volunteer worker (unpaid) \n" +
"\u2022 An employee of an overseas company (not paying PAYE) \n" +
"Why is this important to ACC? \n" +
"ACC is required to maintain and operate separate accounts for Work, Motor Vehicle, Earners, Non-Earners, and Treatment Injury claims \n\n" 

 alert(message);
}
//------------------------------------------------------------------
function Alert10() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }
message=
"\n" +

"Usual work type \n" +
"How physical is the patient's job? \n\n" +

"Why is this important to ACC? \n" +
"The patient's rehabilitation assistance may depend on the nature of their work tasks. \n\n"

 alert(message);
}
//------------------------------------------------------------------
function Alert11() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }
message=
"\n" +

"Location of employer \n\n" +

"How do you complete this field? \n" +
"Please include any information that will help ACC identify the employer such as: \n" +
"\u2022 Address, or \n" +
"\u2022 Phone number, or \n" +
"\u2022 Email address, or \n" +
"\u2022 Branch / Franchise location \n" +
"For example if the patient says their employer is McDonalds include the location (Manners Mall, Wellington) in the address field. \n\n" +

"Why is this important to ACC? \n" +
"This information helps ACC to identify the correct employer so that it can notify the patient's employer of the accident. \n\n"

 alert(message);
}
//------------------------------------------------------------------
function Alert12() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }
message=
"\n" +

"ACC systems accept a maximum of 255 characters. \n\n"

 alert(message);
}
//------------------------------------------------------------------
function Alert13() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }
message=
"\n" +

"Provide details of how the accident happened. \n\n" +

"ACC systems accept a maximum of 255 characters. \n\n" +

"How do you complete this section? \n" +
"This free text field is to assist ACC to understand the: \n" +
"\u2022 Actual mechanism of the accident \n" +
"\u2022 Any external agents involved such as gas, smoke or environment. \n" +
"For example: \n" +
'\u2022 "Fell off a ladder" is sufficient, but not "Doing DIY". \n' +
'\u2022 "Inhaled smoke in a house fire" is sufficient, but not "Difficulty breathing". \n' +
"Why is this important to ACC? \n" +
"ACC must determine whether the legislative criteria of an accident have been met. To further understand what constitutes an accident, you can refer to the ACC Legislation. \n\n" +

"See http://www.legislation.govt.nz for more details. \n\n"

 alert(message);
}
//------------------------------------------------------------------
function Alert14() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }
message=
"\n" +

"ACC systems accept a maximum of 10 diagnoses. \n\n" 

 alert(message);
}
//------------------------------------------------------------------
function Alert15() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }
message=
"\n" +

"Do you want ACC to call you? \n" +
"How do you complete this field? \n" +
"Please indicate if you would like to discuss any aspect of this claim with ACC. These discussions might include aspects of: \n" +
"\u2022 Claim management \n" +
"\u2022 Patient Contact \n" +
"\u2022 Entitlement to cover \n\n"

 alert(message);
}
//------------------------------------------------------------------
function Alert16() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }
message=
"\n" +

"FITNESS FOR WORK \n" +
"Identifies that the patient is unable to continue their normal duties at work. \n\n" +

'This section is only applicable to patients where the Employment Status is "Paid employment in NZ (includes self-employed)". \n\n' +

"Note: One period of 'Fit for some work' capacity and one period of 'Fully unfit for work' (incapacity) may be certified on an ACC45 for a maximum combined period of 14 days. \n\n" +

"If further restriction is required after this period, an ACC18 must be completed when the injury is reviewed. \n\n" +

"If you wish to certify any period of incapacity prior to the date of this consultation, please submit an ACC18 including your clinical reasoning for this. \n\n" +

"How do you complete this field? \n" +
"\u2022  Drag across the calendar to select a date range \n" +
"\u2022  Select 'Fit for some work' or 'Fully unfit for work' \n" +
"For 'Fit for some work' capacity specify the restrictions that apply, either the hours worked or duties that should not be performed. \n" +

"Why is this important to ACC? \n" +
"ACC will work with the patient and their employer to determine if there is work available which is able to be performed within the restrictions you have advised. \n\n" +

"In cases where there is incapacity or restricted capacity for more than 7 days, ACC may provide earnings related weekly compensation. \n\n"

 alert(message);
}
//------------------------------------------------------------------
function Alert17() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }
message=
"\n" +

"Usual work type \n" +
"How physical is the patient's job? \n\n" +

"Why is this important to ACC? \n" +
"The patient's rehabilitation assistance may depend on the nature of their work tasks. \n\n" 

 alert(message);
}
//------------------------------------------------------------------
function Alert18() {
 ptcnhdps=' ';
 if (document.getElementById('ptcnhdps') != undefined ){
   ptcnhdps=document.getElementById('ptcnhdps').value;
 }
message=
"\n" +

"ACC systems accept a maximum of 5 referrals. \n\n" 

 alert(message);
}
//------------------------------------------------------------------
