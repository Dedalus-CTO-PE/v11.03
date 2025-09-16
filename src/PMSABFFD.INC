. V11.03.01 04/09/2023 JTA C-0931613 Removed Sub Acute Palliative care          
. V11.03.01 22/05/2023 JT C-0923703 Added MH Events
. V11.01.03 14/09/2022 JT C-0906597 Added Adjustment 070 and 072 for Sub-Acute
. V11.01.02 13/10/2021 JT C-0905305 Added Adjustment 068 and 069
. V11.01.01 28/07/2021 JT C-0905305 Added AECC Class
. V11.00.01 22/04/2020 JT C-0890733 Added HAC 15
. V10.15.01 31/12/2019 JT C-0886176 Added 'Total Unqualified Event Adjustment'
. V10.14.01 04/07/2019 JT C-0857392 Created FD
. *----------------------------------------------------------------------
. * Include Name  :   PMSABFFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   ABF Patient Details table          
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsabfaf.dat
. *
. * Index Values  :   KEY19   KEY19   KEY19                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSABFA1   IFILE    SQL, FIXED=335, KEY="U1-8,9-16,17-19"
PMSABFA2   IFILE    SQL, FIXED=335, KEY="U9-16,17-19,1-8"
PMSABFA3   IFILE    SQL, FIXED=335, KEY="U1-8,17-19,9-16"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMABADMN  DIM       8      8        1     Admission Number                   
PMABINVN  DIM       8      8        9     Invoice Number                     
PMABADJT  DIM       3      3        17    Type of Adjustment                 
.
.         001 - Same-Day Payment List (1=Yes, 0 or blank=No)
.         002 - Bundled ICU (1=Yes, 0 or blank=No)
.         003 - ALOS (excluding designated SD and unbundled ICU)
.         004 - Lower bound (Inlier Bounds)
.         005 - Upper bound (Inlier Bounds)
.         006 - Private Patient Service (Adjustments) %
.         007 - Paediatric (Adjustments) %
.         008 - Same Day (Price Weight)
.         009 - Short Stay Outlier Base (Price Weight)
.         010 - Short Stay Outlier Per Diem (Price Weight)
.         011 - Inlier (Price Weight)
.         012 - Long Stay Outlier Per Diem (Price Weight)
.______________________________________________________________________________
.     Psychiatric Age Adjustment are not used after 1/7/2022
.         013 - Specialist Psychiatric Age <=17 w MDC=19 or 20 Adjustment %
.         014 - Specialist Psychiatric Age <=17 no MDC=19 or 20 Adjustment %
.         015 - Specialist Psychiatric Age >17 no MDC=19 or 20 Adjustment %
.______________________________________________________________________________
.
.         016 - Patient Remoteness Area Adjustment - Outer % - R2 (Inp & Outpat)
.         017 - Patient Remoteness Area Adjustment - Remote % - RA3 (Inp&Outpat)
.         018 - Patient Remoteness Area Adjustment - Remote % - RA3 (ED Service)
.         019 - Patient Remoteness Area Adjustment - Very Remote % -RA4(Inp Out)
.         020 - Patient Remoteness Area Adjustment -Very Remote% RA4(ED Service)
.         021 - Indigenous Adjustment %
.         022 - Radiotherapy Adjustment %
.         023 - Dialysis Adjustment %
.         024 - ICU Adjustment
.         025 - Private Patient Accommodation Adjustment Per Diem
.               Price Weight Same day
.         026 - Private Patient Accommodation Adjustment Per Diem
.               Price Weight Overnight
.         027 - Private Patient Service Adjustment % Admitted Sub-Acute
.               and Non-Acute – Palliative Care
.         028 - Private Patient Service Adjustment % Admitted Sub-Acute
.               and Non-Acute – Rehabilitation
.         029 - Private Patient Service Adjustment % Admitted Sub-Acute
.              and Non-Acute – Psychogeriatric Care
.         030 - Private Patient Service Adjustment % Admitted Sub-Acute
.               and Non-Acute – GEM
.         031 - Private Patient Service Adjustment % Admitted Sub-Acute
.               and Non-Acute – Maintenance
.         032 - Tier 2
.         033 - Multidisciplinary Clinic Adjustment %
.______________________________________________________________________________
.     034 AND 035 not used for 2021/2022
.         034 - Emergency Care Age Adjustment % 65-79 years old (Not used)
.         035 - Emergency Care Age Adjustment % Over 79 years old (Not used)
.______________________________________________________________________________
.
.         036 - Hospital Remoteness Area Adjustment – Remote (RA3)
.               (Admitted Acute or Sub Acute)
.         037 - Hospital Remoteness Area Adjustment – Very Remote (RA4)
.               (Admitted Acute or Sub Acute)
.         038 - HAC 1 - Pressure Injury
.         039 - HAC 2 - Falls resulting in fracture or other intracranial injury
.         040 - HAC 3 - Healthcare associated infection
.         041 - HAC 4 - Surgical complications requiring unplanned return
.                       to theatre
.         042 - HAC 6 - Respiratory complications
.         043 - HAC 7 - Venous thromboembolism
.         044 - HAC 8 - Renal failure
.         045 - HAC 9 - Gastrointestinal bleeding
.         046 - HAC 10 - Medication complications
.         047 - HAC 11 - Delirium
.         048 - HAC 12 - Persistent incontinence
.         049 - HAC 13 - Malnutrition
.         050 - HAC 14 - Cardiac complications
.         051 - HAC 15 - Fourth degree perineal laceration during delivery
.         052 - HAC 16
.         053 = Calculated NWAU (National Weighted Activity Unit)
.         054 = Clinic Header Code and Description
.         055 = ED Type of Visit (EMR)
.         056 = ED Episode End Status (EMR)
.         057 = ED Triage Category (EMR)
.         058 = ED ICD10 Code & Description
.         059 = Charlson Score
.         060 = URG Code / AECC Class (EMR)
.         061 = NEP
.         062 = Patient Price Weight (PW)
.         063 = HAC Adjustment
.         064 = Patient LOS
.         065 = MDB Code / ECDG Subcode (EMR)
.         066 = Total Unqualified Event Adjustment
.         067 = ECDG Code (EMR)
.         068 = Predicted Value for ECDG (EMR)
.         069 = Scaled Complexity Score for ECDG (EMR)
.         070 = AN-SNAP Code and Version (Sub-Acute)
.         071 = COVID19 Adjustment %
.         072 = Rehab.Episode number (Sub-Acute)
.         073 = AMHCC End Class Code (Mental Health)
.
PMABINVC  DIM       1      1        20    Invoice Cancelled (Y/N)            
.                                         1 = Yes, blank or 0 = No             
PMABABFT  DIM       1      1        21    Type of ABF details                
.                                         1 - Emergency                        
.                                         2 - Outpatients                      
.                                         3 - Inpatients                       
.                                         4 - Sub Acute Cat CC, PTCDUDF6=      
.                                             2 = Rehabilitation               
.                                             4 = GEM                          
.                                             5 = Psychogeriatric              
.                                             6 = Maintenance                  
.                                         5 - Referral (patabfaf)              
.                                         6 - Mental Health,Cat CC PTCDUDF6=11 
PMABEPSN  DIM       2      2        22    Episode Number                     
.                                         (as per Patient DRG Grouper table)   
PMABADRG  DIM       20     20       24    AR-DRG (State DRG for Disc.Date)   
PMABDRGD  DIM       80     80       44    State DRG Description              
PMABADJV  FORM      10.4   8        124   Value of Adjustment                
PMABCDES  DIM       100    100      132   Description                        
PMABIMPR  DIM       1      1        232   Imported via 3rd Party product     
PMABCDAT  DIM       8      8        233   Date record created                
PMABCTIM  DIM       8      8        241   Time record created                
PMABCUID  DIM       10     10       249   Record created by                  
PMABUDAT  DIM       8      8        259   Date record updated                
PMABUTIM  DIM       8      8        267   Time record updated                
PMABUUID  DIM       10     10       275   Record updated by                  
PMABSPAR  DIM       50     50       285   Spare variable                     
.
.End of Record                      335  
.
