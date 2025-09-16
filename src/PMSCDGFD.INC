. V9.09.001 16/11/2007 ML  Added Basis for Diagnosis 06 - 09                
. V9.03.000 13/07/2004 LV  Created New                                       
. *----------------------------------------------------------------------
. * Include Name  :   PMSCDGFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Cancer Reason for Clinical Diagnosis
. *
. * File Type     :   SQL
. *
. * File Name     :   pmscdgaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSCDGA1   IFILE    SQL, FIXED=110, KEY="U1-8,9-16,17-25,26-27,28-29"           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DPMCGADN  DIM       8      8        1     Admission Number                   
DPMCGCNR  DIM       8      8        9     Cancer Registration Number         
PMCGPRMM  DIM       9      9        17    Primary Site (Diagnosis) ICD10 Code
DPMCGBSD  DIM       2      2        26    Basis for Diagnosis                
.                                         1=Clinical Only
.                                         3=Imaging
.                                         4=Endoscopy
.                                         6=Cytology/Haematology
.                                         7=Histology of Metastasis
.                                         8=Histology of Primary
.                                         9=Autopsy and Histology
DPMCGCDI  DIM       2      2        28    Reason for -                       
.                   Basis for Diagnosis codes 1 to 4 - Clinical Diagnosis Code
.                                         1=Palliative Care Admission
.                                         2=Doctor's Notes/Referral
.                                         3=Pathology
.                                         4=Radiological Investigation
.                                         5=Other Non-invasive Investigation
.                                         6=Invasive Investigation
.                                         7=Non-Cancer Admission
.                                         9=Other/Chemo/RT
.
.                   Basis for Diagnosis codes 6 to 9 - Laboratory Facility No.
.
PMCGCDDS  DIM       50     50       30    Reason for Clinical Diagnosis Text 
.                                         (All Diagnisis Codes require Text
.                                          except 1 & 7)
.
.                   Basis for Diagnosis codes 6 to 9 - Laboratory Specimen No.
.
PMCGSPAR  DIM       30     30       80    Spare                              
.
.End of Record                      110  
.
.Redefine Key Variables
.----------------------
PMCGADNO  FORM      8    
PMCGCNRG  FORM      8    
PMCGBSDG  FORM      2    
PMCGCDIG  FORM      2    
