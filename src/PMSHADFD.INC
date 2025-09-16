. V11.00.01 22/04/2020 JT C-0890733 Added HAC 15
. V10.14.01 28/03/2019 JT C-0857392 Created ABF HAC Adjustment table           
. *----------------------------------------------------------------------
. * Include Name  :   PMSHADFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   ABF HAC Adjustments table          
. *
. * File Type     :   SQL
. *
. * File Name     :   pmshadaf.dat
. *
. * Index Values  :   KEY12   KEY12                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSHADA1   IFILE    SQL, FIXED=126, KEY="U1-6,7-9,10-12"
PMSHADA2   IFILE    SQL, FIXED=126, KEY="U7-9,1-6,10-12"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMHDCNTR  DIM       6      6        1     Contract ID                        
PMHDHACG  DIM       3      3        7     HAC Group 01-16 Cat Ha             
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
PMHDVALF  DIM       3      3        10    Value From                         
PMHDVALT  DIM       3      3        13    Value To                           
PMHDADJV  FORM      10.4   8        16    Complexity Adjusment %             
PMHDCDAT  DIM       8      8        24    Date record created                
PMHDCTIM  DIM       8      8        32    Time record created                
PMHDCUID  DIM       10     10       40    Record created by                  
PMHDUDAT  DIM       8      8        50    Date record updated                
PMHDUTIM  DIM       8      8        58    Time record updated                
PMHDUUID  DIM       10     10       66    Record updated by                  
PMHDSPAR  DIM       50     50       76    Spare variable                     
.
.End of Record                      126  
.
