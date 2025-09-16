. V11.03.01 04/09/2023 JTA C-0931613 Added Type of ABF for Palliative Care      
. V11.03.01 11/01/2023 JT C-0906597 Added Residential Remote
. V11.02.01 29/08/2022 JT C-0906597 Created FD
. *----------------------------------------------------------------------
. * Include Name  :   PATABFFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   ABF Referral/Contacts details      
. *
. * File Type     :   SQL
. *
. * File Name     :   patabfaf.dat
. *
. * Index Values  :   KEY27   KEY27                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATABFA1   IFILE    SQL, FIXED=289, KEY="U1-8,9-16,17-24,25-27"
PATABFA2   IFILE    SQL, FIXED=289, KEY="U1-8,9-16,25-27,17-24"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTABADMN  DIM       8      8        1     Non-Admitted Referral Visit Number 
PTABENCT  DIM       8      8        9     Referral Encounter Number or       
.                                         Start date of Palliative Phase Care
PTABINVN  DIM       8      8        17    Invoice Number                     
PTABADJT  DIM       3      3        25    Type of Adjustment                 
.
. The following adjustment types applied to Referral
.
.         016 - Patient Remoteness Area Adjustment - Outer % - R2
.         017 - Patient Remoteness Area Adjustment - Remote % - RA3
.         019 - Patient Remoteness Area Adjustment - Very Remote % - RA4
.         021 - Indigenous Adjustment %
.         032 - Tier 2
.         033 - Multidisciplinary Clinic Adjustment %
.         053 - Calculated NWAU (National Weighted Activity Unit)
.         061 - NEP
.         062 - Patient Price Weight (PW)
.         071 - Non-Admitted Referral Contact Type - First Daily,Subsequent
.               Daily, Calendar Month
._______________________________________________________________________________
. The following adjustment types applied to Sub-Acute Palliative phase of Care
.
.         001 - Same-Day Payment List (1=Yes, 0 or blank=No),
.               Phase of Care Class, Contract ID
.         002 - Bundled ICU (1=Yes, 0 or blank=No)
.         003 - ALOS (excluding designated SD and unbundled ICU)
.         004 - Lower bound (Inlier Bounds)
.         005 - Upper bound (Inlier Bounds)
.         007 - Paediatric (Adjustments) %
.         008 - Same Day (Price Weight)
.         010 - Short Stay Outlier Per Diem (Price Weight)
.         011 - Inlier (Price Weight)
.         012 - Long Stay Outlier Per Diem (Price Weight)
.         016 - Patient Remoteness Area Adjustment - Outer % - R2
.         017 - Patient Remoteness Area Adjustment - Remote % - RA3
.         019 - Patient Remoteness Area Adjustment - Very Remote % -RA4
.         021 - Indigenous Adjustment %
.         022 - Radiotherapy Adjustment %
.         023 - Dialysis Adjustment %
.         025 - Private Patient Accommodation Adjustment Per Diem
.               Price Weight Same day
.         026 - Private Patient Accommodation Adjustment Per Diem
.               Price Weight Overnight
.         027 - Private Patient Service Adjustment % Admitted Sub-Acute
.         036 - Hospital Remoteness Area Adjustment – Remote (RA3)
.         037 - Hospital Remoteness Area Adjustment – Very Remote (RA4)
.
.         053 - Calculated NWAU (National Weighted Activity Unit)
.         061 - NEP
.         062 - Patient Price Weight (PW)
.         064 - Patient LOS
.         ________________________________________________________________
.               from QuickSnap Extract - IBAPMS63
.         070 - AN-SNAP Code and Version (Sub-Acute Palliative phase care)
.               XXX/YY 99 CCYYMMDD where 
.                 XXX/YY   - AN-SNAP Code and Version
.                 99       - Episode number
.                 CCYYMMDD - End of Episode
.         ________________________________________________________________
.               
.         072 - Rehab.Episode number (Sub-Acute)
.
PTABINVC  DIM       1      1        28    Invoice Cancelled (Y/N)            
.                                         1 = Yes, blank or 0 =No              
PTABABFT  DIM       1      1        29    Type of ABF Details                
.                                         5 - Referral                         
.                                         7 - Sub Acute Palliative Phase of Care
.					      Cat CC, PTCDUDF6= 3 & THCSCOD = 8
PTABADJV  FORM      10.4   8        30    Value of Adjustment                
PTABCDES  DIM       100    100      38    Description                        
PTABIMPR  DIM       1      1        138   Imported via 3rd Party Product     
PTABCDAT  DIM       8      8        139   Date record created                
PTABCTIM  DIM       8      8        147   Time record created                
PTABCUID  DIM       10     10       155   Record created by                  
PTABUDAT  DIM       8      8        165   Date record Updated                
PTABUTIM  DIM       8      8        173   Time record Updated                
PTABUUID  DIM       8      8        181   Record Updated by                  
PTABSPAR  DIM       100    100      189   Spare variable                     
.
.End of Record                      289  
.
