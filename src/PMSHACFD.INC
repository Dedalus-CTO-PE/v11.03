. V11.00.01 22/04/2020 JT C-0890733 Added HAC 15
. V10.14.01 28/03/2019 JT C-0857392 Created ABF HAC Baseline complexity table   
. *----------------------------------------------------------------------
. * Include Name  :   PMSHACFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   ABF HAC Baseline Complexity Table  
. *
. * File Type     :   SQL
. *
. * File Name     :   pmshacaf.dat
. *
. * Index Values  :   KEY12   KEY12                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSHACA1   IFILE    SQL, FIXED=123, KEY="U1-6,7-9,10-12"
PMSHACA2   IFILE    SQL, FIXED=123, KEY="U7-9,10-12,1-6"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMHACNTR  DIM       6      6        1     Contract ID                        
PMHAHACG  DIM       3      3        7     HAC Group 01=16 Cat Ha             
.                                         01 - Pressure Injury
.                                         02 - Falls resulting in fracture or
.                                              other intracranial injury
.                                         03 - Healthcare associated infection
.                                         04 - Surgical complications requiring
.                                              unplanned return to theatre
.                                         06 - Respiratory complications
.                                         07 - Venous thromboembolism
.                                         08 - Renal failure
.                                         09 - Gastrointestinal bleeding
.                                         10 - Medication complications
.                                         11 - Delirium
.                                         12 - Persistent incontinence
.                                         13 - Malnutrition
.                                         14 - Cardiac complications
.                                         15 - Fourth degree perineal laceration
.                                              during delivery
PMHAHACF  DIM       3      3        10    HAC Complexity Field               
.                                         001 - Baseline                       
.                                         002 - Emergency Admission            
.                                         003 - ICU Hours                      
.                                         004 - Admission Transfer Status      
.                                         005 - DRG 9 Type Medical             
.                                         006 - DRG 9 Type Intervention        
.                                         007 - Male                           
.                                         008 - Female                         
PMHAHACV  FORM      10.4   8        13    Complexity Value                   
PMHACDAT  DIM       8      8        21    Date record created                
PMHACTIM  DIM       8      8        29    Time record created                
PMHACUID  DIM       10     10       37    Record created by                  
PMHAUDAT  DIM       8      8        47    Date record updated                
PMHAUTIM  DIM       8      8        55    Time record updated                
PMHAUUID  DIM       10     10       63    Record updated by                  
PMHASPAR  DIM       50     50       73    Spare variable                     
.
.End of Record                      123  
.
