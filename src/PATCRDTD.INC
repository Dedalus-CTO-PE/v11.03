. *
. * Function      :   CGI Variables for PATCERFD - patceraf
. *
. * Mods          :
. *      V10.12.01  09/03/2018  J.Tan            TSK 0842287
. *                 Added 'Best Basis for Diagnosis' PTCRD116 (cat bd)
. *      V10.08.01  13/04/2016  Peter Vela     CAR 0813958
. *                 Added PTCRD114 - Stage of Cancer Flag
. *                 Added PTCRD115 - Cancer Staging System (Cat Cs)
. *      V10.03.01  03/06/2013  Davin          CAR 283509
. *                 Added PTCRD113 - ECOG Performance Status (Cat EO)
. *       V9.12.01  18/11/2009  Mike Laming    CAR 208570
. *                 Add PTCDMET4, PTCDMET5, PTCDMET6 - PTCRD110 to PTCRD112
. *       V9.10.01  04/06/2008  Mike Laming    CAR 168872
. *                 Add PTCRD108 (Date Extracted - PTCDDTEX)                   
. *       V9.09.01  16/11/2007  Mike Laming    CAR 154835
. *                 Add Qld. fields PTCRD105-107 (PTCDSURB, PTCDSTTE, PTCDPOST)
. *       V9.03.00  15/11/2005  Mike Laming  CAR 88460
. *                 Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length   Description
.----     ----      ------   -----------
PTCRD001  DIM       8       * Patient Admission Number
PTCRD002  FORM      8       * Cancer Registration Number
PTCRD003  DIM       8       * Date of 1st Admis (CCYYMMDD)
PTCRD004  DIM       8       * Date of 1st Diag (CCYYMMDD)
PTCRD005  DIM       8       * Date of Tumour Recurrence (CCYYMMDD)
PTCRD006  DIM       8       * Date Metastatic Spread (CCYYMMDD)
PTCRD007  FORM      1       * Unknown Primary 0=No 1=Yes
PTCRD008  DIM       9       * Primary Site (Diagnosis) ICD10 Code
PTCRD009  DIM       9       * Histological Type - ICD10 Code
PTCRD010  DIM       9       * Metastatic Type 1 - ICD10 Code
PTCRD011  DIM       9       * Metastatic Type 2 - ICD10 Code
PTCRD012  DIM       9       * Metastatic Type 3 - ICD10 Code
PTCRD013  DIM       3       * Laterality (Cat LY)
PTCRD014  DIM       3       * Staging (not used)
PTCRD015  DIM       1       * Basis for Diag (this facility -
.                             Clinical Only) 0=No 1=Yes
PTCRD016  DIM       1       * Basis for Diag (this facility -
.                             Biochemistry) 0=No 1=Yes
PTCRD017  DIM       1       * Basis for Diag (this facility -
.                             Imaging) 0=No 1=Yes
PTCRD018  DIM       1       * Basis for Diag (this facility -
.                             Endoscopy) 0=No 1=Yes
PTCRD019  DIM       1       * Basis for Diag (this facility -
.                             Exploratory Surgery) 0=No 1=Yes
PTCRD020  DIM       1       * Basis for Diag (this facility -
.                             Cytology/Haematology) 0=No 1=Yes
PTCRD021  DIM       1       * Basis for Diag (this facility -
.                             Hist. Of Meta) 0=No 1=Yes
PTCRD022  DIM       1       * Basis for Diag (this facility -
.                             Hist. Of Primary) 0=No 1=Yes
PTCRD023  DIM       1       * Basis for Diag (this facility -
.                             Other) 0=No 1=Yes
PTCRD024  DIM       1       * Basis for Diag (this facility -
.                             Autopsy) 0=No 1=Yes
PTCRD025  DIM       50      * Other Diag(this facility) free text
PTCRD026  FORM      1       * Readmission Flag 0=No 1=Yes
PTCRD027  DIM       9       * Pathology Code - ICD10 Code
PTCRD028  DIM       1       * Cancer Diagnosed prior to admission
.                             0=No 1=Yes 2=Unknown
PTCRD029  DIM       75      * Facility prev diagnosed at.
PTCRD030  DIM       1       * Basis for Diag (oth facility -
.                             Clinical Only) 0=No 1=Yes
PTCRD031  DIM       1       * Basis for Diag (oth facility -
.                             Biochemisrty) 0=No 1=Yes
PTCRD032  DIM       1       * Basis for Diag (oth facility -
.                             Imaging) 0=No 1=Yes
PTCRD033  DIM       1       * Basis for Diag (oth facility -
.                             Endoscopy) 0=No 1=Yes
PTCRD034  DIM       1       * Basis for Diag (oth facility -
.                             Exploratory Surgery) 0=No 1=Yes
PTCRD035  DIM       1       * Basis for Diag (oth facility -
.                             Cytology/Haematology) 0=No 1=Yes
PTCRD036  DIM       1       * Basis for Diag (oth facility -
.                             Hist. Of Meta) 0=No 1=Yes
PTCRD037  DIM       1       * Basis for Diag (oth facility -
.                             Hist. Of Primary) 0=No 1=Yes
PTCRD038  DIM       1       * Basis for Diag (oth facility -
.                             Other) 0=No 1=Yes
PTCRD039  DIM       50      * Other Diagnosis (other facility)
PTCRD040  FORM      1       * Cancer Diagnosed on Autopsy only
.                             0=No 1=Yes
PTCRD041  FORM      2.3     * Breslow Thickness
PTCRD042  DIM       3       * Melanoma Invasion Level (Cat IL)
PTCRD043  DIM       3       * Reporting Lab (Cat LB)
PTCRD044  FORM      2.3     * Breast Tumour Size
PTCRD045  DIM       3       * Clarks Level
PTCRD046  FORM      2.3     * Gleason Score
PTCRD047  DIM       50      * Comments
.
PTCRD048  DIM       3       * Basis of Diagnosis NZ (Cat BD)
PTCRD049  DIM       1       * Estimated Date Flag(Estimated/Unknown)
PTCRD050  DIM       1       * Histological Grade/Differentation or
.
....                                      Singapore Cancer Registory
PTCRD051  DIM       10      * Doctor/Cons.in Charge (dflt.- Att.Doc)
PTCRD052  DIM       10      * Notifying Doctor
PTCRD053  DIM       8       * Date of Notification (yyyymmdd)
PTCRD054  DIM       1       * Source of Notification 1 - SN
PTCRD055  DIM       1       * Source of Notification 2 - OR
PTCRD056  DIM       1       * Source of Notification 3 - RS
PTCRD057  DIM       1       * Basis of Diag. 1 - Death Certif Only
PTCRD058  DIM       1       * Basis of Diag. 2 - Clinical only
PTCRD059  DIM       1       * Basis of Diag. 3 - Clinical Investig'n
PTCRD060  DIM       1       * Basis of Diag. 4 - Specif Tumor Marker
PTCRD061  DIM       1       * Basis of Diag. 5 - Cytology
PTCRD062  DIM       10      * Basis of Diag. 5 - Cytology Lab No.
PTCRD063  DIM       1       * Basis of Diag. 6 - Metastasis
PTCRD064  DIM       10      * Basis of Diag. 6 - Metastasis Lab No.
PTCRD065  DIM       1       * Basis of Diag. 7 - Primary Tumor
PTCRD066  DIM       10      * Basis of Diag. 7 - Prim. Tumor Lab No.
PTCRD067  DIM       1       * Grade/Differen. 1 Well      1=Y, 0=N
PTCRD068  DIM       1       * Grade/Differen. 2 Moderate  1=Y, 0=N
PTCRD069  DIM       1       * Grade/Differen. 3 Poor      1=Y, 0=N
PTCRD070  DIM       1       * Grade/Differen. 4 Undifferentiated
PTCRD071  DIM       1       * Grade/Differen. 5 T-Cell    1=Y, 0=N
PTCRD072  DIM       1       * Grade/Differen. 6 B-Cell    1=Y, 0=N
PTCRD073  DIM       1       * Grade/Differen. 7 Null Cell 1=Y, 0=N
PTCRD074  DIM       1       * Grade/Differen. 8 NK Cell   1=Y, 0=N
PTCRD075  DIM       1       * Grade/Differen. 9 N.O.S.    1=Y, 0=N
PTCRD076  DIM       25      * Place of Death
PTCRD077  DIM       35      * Cause of Death line 1
PTCRD078  DIM       35      * Cause of Death line 2
PTCRD079  DIM       10      * Clinical Stage T
PTCRD080  DIM       10      * Clinical Stage N
PTCRD081  DIM       10      * Clinical Stage M
PTCRD082  DIM       10      * Clinical Stage - Stage Grouping
PTCRD083  DIM       10      * Classification Manual
PTCRD084  DIM       1       * Treatment - No Treatment   1=Yes, 0=No
PTCRD085  DIM       1       * Treatment - Surgery        1=Yes, 0=No
PTCRD086  DIM       8       * Treatment - Surgery  initiation Date
PTCRD087  DIM       1       * Treatment - Radiotherapy   1=Yes, 0=No
PTCRD088  DIM       8       * Treatment - Radiotherapy  init. Date
PTCRD089  DIM       1       * Treatment - Chemotherapy   1=Yes, 0=No
PTCRD090  DIM       8       * Treatment - Chemo    initiation Date
PTCRD091  DIM       1       * Treatment - Hormones       1=Yes, 0=No
PTCRD092  DIM       8       * Treatment - Hormones initiation Date
PTCRD093  DIM       1       * Treatment - Biologcal/Other 1=Yes,0=No
PTCRD094  DIM       8       * Treatment - Biologcal/Other init. Date
PTCRD095  DIM       8       * Date of First Relapse (yyyymmdd)
PTCRD096  DIM       35      * Notifying Dept / Clinic
PTCRD097  DIM       1       * Treating Hosp. - This (Same-as-above)
PTCRD098  DIM       1       * Treating Hosp. - Other
PTCRD099  DIM       35      * Treating Hosp. - Other Hosp.Name
PTCRD100  DIM       1       * Resident Status - Sing.Citizen
PTCRD101  DIM       1       * Resident Status - Sing.PR
PTCRD102  DIM       1       * Resident Status - Malaysia
PTCRD103  DIM       1       * Resident Status - Indonesia
PTCRD104  DIM       1       * Resident Status - Other
PTCRD105  DIM       45      * Suburb/Locality of First Diagnosis
PTCRD106  DIM       7       * State of First Diagnosis
PTCRD107  DIM       8       * Postcode of First Diagnosis
PTCRD108  DIM       8       * Date Extracted
PTCRD109  DIM       1       * (not used)
PTCRD110  DIM       9       * Metastatic Type 4 - ICD10 Code          *I-208570
PTCRD111  DIM       9       * Metastatic Type 5 - ICD10 Code          *I-208570
PTCRD112  DIM       9       * Metastatic Type 6 - ICD10 Code          *I-208570
PTCRD113  DIM       3       * ECOG Performance Status (Cat EO)
PTCRD114  DIM       1       * Stage of Cancer Flag
PTCRD115  DIM       3       * Cancer Staging System (Cat Cs)
PTCRD116  DIM       3       * Best Basis for Diagnosis (Cat bd)
