. *----------------------------------------------------------------------
. * Include Name  :   PATCRDFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Cancer Registration Details        
. *
. * File Type     :   SQL
. *
. * File Name     :   patcrdaf.dat
. * Keys          :   Key 25 - PATCRDA1
. *
. * Modifications :   
. *    V10.12.02    19/03/2018  Jill Parkinson   TSK 0848131
. *                 Added index 3 and 4
. *    V10.12.01    08/03/2018  J.Tan            TSK 0842287
. *                 Added 'Best Basis for Diagnosis' cat 'Bd'
. *    V10.08.02    13/05/2016  J.Tan            TSK 0315587
. *                 Changed desc.for PTCDSTAG
. *    V10.08.01    12/04/2016  Steve Armstrong  TSK 0813958
. *                 Added PTCDSCFL & PTCDCSSY
. *    V10.07.01    20/10/2015  Ebon Clements    CAR 315587
. *                 Changed PTCDRADI and PTCDSYST from Cat QE to QF
. *    V10.06.01    16/04/2015  Steve Armstrong  CAR 315587
. *                 Added PTCDRADI & PTCDSYST and reduced spare
. *    V10.04.01    27/12/2013  Patrick Adair  CAR 294433
. *                 Moved PTCDECOG out of spare
. *    V10.03.01    03/06/2013  Davin          CAR 283509
. *                 Added PTCDECOG to spare
. *    V10.00.01    29/03/2010  Mike Laming    CAR 208570
. *                 PTCDMET4, PTCDMET5, PTCDMET6 removed from PTCDSPAR
. *     V9.12.01    18/11/2009  Mike Laming    CAR 208570
. *                 Add PTCDMET4, PTCDMET5, PTCDMET6 - re-defined over PTCDSPAR
. *     V9.11.01    09/04/2009  Ebon Clements  CAR 188098               
. *                 Add index 2
. *     V9.09.01    16/11/2007  Mike Laming    CAR 154835               
. *                 Add Qld. fields PTCDSURB, PTCDSTTE, PTCDPOST 
. *     V9.08.01    17/05/2007  Mike Laming    CAR 125991               
. *                 Added Singapore Cancer Reg fields, extended record to 900
. *     V9.07.01    23/08/2006  J.Tan                        SRF 116977
. *                 Mods Staging - not used
. *     V9.06.01    07/06/2003  J.Tan                        SRF 96476
. *                 Added fields for Estimated/Unknown and Histological Grade
. *                 Changed Staging from catg 'SG' to 'HI'
. *     V9.02.002   21/03/2003  Tracey Nguyen                SRF 23950
. *                 Changed index PATCRDA1 to "U1-8,51-59,9-16"
. *     V9.02.001   08/07/2002 P.D Created FD 
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
.
PATCRDA1   IFILE    SQL, FIXED=939, KEY="U1-8,51-59,9-16"
PATCRDA2   IFILE    SQL, FIXED=939, KEY="U381-388,1-8,51-59,9-16"
PATCRDA3   IFILE    SQL, FIXED=939, KEY="U389-396,397-404,1-8,51-59,9-16"
PATCRDA4   IFILE    SQL, FIXED=939, KEY="U415-422,423-430,1-8,51-59,9-16"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DPTCDDAD  DIM       8      8        1     Patient Admission Number           
DPTCDCNR  DIM       8      8        9     Cancer Registration Number         
PTCDADTE  DIM       8      8        17    Date of 1st Admis (CCYYMMDD)       
PTCDDDTE  DIM       8      8        25    Date of 1st Diag (CCYYMMDD)        
PTCDTMRC  DIM       8      8        33    Date of Tumour Recurrence (CCYYMMDD)
PTCDMTSP  DIM       8      8        41    Date Metastatic Spread (CCYYMMDD)  
PTCDUKPR  FORM      1      2        49    Unknown Primary 0=No 1=Yes         
PTCDPRMM  DIM       9      9        51    Primary Site (Diagnosis) ICD10 Code 
PTCDHTYP  DIM       9      9        60    Histological Type - ICD10 Code     
PTCDMET1  DIM       9      9        69    Metastatic Type 1 - ICD10 Code     
PTCDMET2  DIM       9      9        78    Metastatic Type 2 - ICD10 Code     
PTCDMET3  DIM       9      9        87    Metastatic Type 3 - ICD10 Code     
PTCDLATR  DIM       3      3        96    Laterality (Cat LY)                
PTCDSTAG  DIM       3      3        99    Other Staging Scheme (Cat sS)
.                                         Basis for Diagnosis - This Facility
PTCDBT01  DIM       1      1        102   This Fac. - Clinical Only   0=No 1=Yes
PTCDBT02  DIM       1      1        103   This Fac. - Biochemistry    0=No 1=Yes
PTCDBT03  DIM       1      1        104   This Fac. - Imaging         0=No 1=Yes
PTCDBT04  DIM       1      1        105   This Fac. - Endoscopy       0=No 1=Yes
PTCDBT05  DIM       1      1        106   This Fac. - Explor.Surgery  0=No 1=Yes
PTCDBT06  DIM       1      1        107   This Fac. - Cytology/Haematl 0=No 1=Y
PTCDBT07  DIM       1      1        108   This Fac. - Hist. Of Meta    0=No 1=Y
PTCDBT08  DIM       1      1        109   This Fac. - Hist. Of Primary 0=No 1=Y
PTCDBT09  DIM       1      1        110   This Fac. - Other           0=No 1=Yes
PTCDBT10  DIM       1      1        111   This Fac. - Autopsy         0=No 1=Yes
PTCDOTDG  DIM       50     50       112   Other Diag (this facility) free text
.
PTCDRFLG  FORM      1      2        162   Readmission Flag 0=No 1=Yes        
PTCDPATH  DIM       9      9        164   Pathology Code - ICD10 Code        
PTCDDGPR  DIM       1      1        173   Cancer Diagnosed prior to admission 
.                                         0=No 1=Yes 2=Unknown
PTCDFCPR  DIM       75     75       174   Facility prev diagnosed at.        
.                                         Basis for Diagnosis - Other Facility
PTCDBO01  DIM       1      1        249   Other Fac.- Clinical Only   0=No 1=Yes
PTCDBO02  DIM       1      1        250   Other Fac.- Biochemistry    0=No 1=Yes
PTCDBO03  DIM       1      1        251   Other Fac.- Imaging         0=No 1=Yes
PTCDBO04  DIM       1      1        252   Other Fac.- Endoscopy       0=No 1=Yes
PTCDBO05  DIM       1      1        253   Other Fac.- Explor.Surgery  0=No 1=Yes
PTCDBO06  DIM       1      1        254   Other Fac.- Cytology/Haematl 0=No 1=Y
PTCDBO07  DIM       1      1        255   Other Fac.- Hist. Of Meta    0=No 1=Y
PTCDBO08  DIM       1      1        256   Other Fac.- Hist. Of Primary 0=No 1=Y
PTCDBO09  DIM       1      1        257   Other Fac.- Other           0=No 1=Yes
PTCDDGOT  DIM       50     50       258   Other Diagnosis (other facility)   
PTCDAUTP  FORM      1      2        308   Cancer Diagnosed on Autopsy only 
.                                                     0=No 1=Yes
PTCDBRLW  FORM      2.3    4        310   Breslow Thickness                  
PTCDMLIN  DIM       3      3        314   Melanoma Invasion Level (Cat IL)   
PTCDRPLB  DIM       3      3        317   Reporting Lab (Cat LB)             
PTCDBTSZ  FORM      2.3    4        320   Breast Tumour Size                 
PTCDCKLV  DIM       3      3        324   Clarks Level                       
PTCDGLSC  FORM      2.3    4        327   Gleason Score                      
PTCDCOMM  DIM       50     50       331   Comments                           
PTCDDTEX  DIM       8      8        381   Date extracted (CCYYMMDD)          
PTCDDTRC  DIM       8      8        389   Date Record Created (CCYYMMDD)     
PTCDTMCR  DIM       8      8        397   Time Record Created (HH:MM:SS)     
PTCDUSCR  DIM       10     10       405   User who created record            
PTCDDTUP  DIM       8      8        415   Date Record Updated (CCYYMMDD)     
PTCDTMUP  DIM       8      8        423   Time Record Updated (HH:MM:SS)     
PTCDUSUP  DIM       10     10       431   User who last updated record       
PTCDBSDG  DIM       3      3        441   Basis of Diagnosis NZ. (Cat BD) 
PTCDESTM  DIM       1      1        444   Estimated Date Flag(Estimated/Unknown)
PTCDCELT  DIM       1      1        445   Histological Grade/Differentation or
.                                         Cell type for leukaemias
.
....                                      Singapore Cancer Registory
PTCDDOCC  DIM       10     10       446   Doctor/Cons.in Charge (dflt.- Att.Doc)
PTCDDOCN  DIM       10     10       456   Notifying Doctor
PTCDNTDT  DIM       8      8        466   Date of Notification (yyyymmdd)
PTCDSNT1  DIM       1      1        474   Source of Notification 1 - SN
PTCDSNT2  DIM       1      1        475   Source of Notification 2 - OR
PTCDSNT3  DIM       1      1        476   Source of Notification 3 - RS
PTCDBOD1  DIM       1      1        477   Basis of Diag. 1 - Death Certif Only
PTCDBOD2  DIM       1      1        478   Basis of Diag. 2 - Clinical only
PTCDBOD3  DIM       1      1        479   Basis of Diag. 3 - Clinical Investig'n
PTCDBOD4  DIM       1      1        480   Basis of Diag. 4 - Specif Tumor Marker
PTCDBOD5  DIM       1      1        481   Basis of Diag. 5 - Cytology
PTCDBOL5  DIM       10     10       482   Basis of Diag. 5 - Cytology Lab No.
PTCDBOD6  DIM       1      1        492   Basis of Diag. 6 - Metastasis
PTCDBOL6  DIM       10     10       493   Basis of Diag. 6 - Metastasis Lab No.
PTCDBOD7  DIM       1      1        503   Basis of Diag. 7 - Primary Tumor
PTCDBOL7  DIM       10     10       504   Basis of Diag. 7 - Prim. Tumor Lab No.
PTCDGD01  DIM       1      1        514   Grade/Differen. 1 Well      1=Y, 0=N
PTCDGD02  DIM       1      1        515   Grade/Differen. 2 Moderate  1=Y, 0=N
PTCDGD03  DIM       1      1        516   Grade/Differen. 3 Poor      1=Y, 0=N
PTCDGD04  DIM       1      1        517   Grade/Differen. 4 Undifferentiated
PTCDGD05  DIM       1      1        518   Grade/Differen. 5 T-Cell    1=Y, 0=N
PTCDGD06  DIM       1      1        519   Grade/Differen. 6 B-Cell    1=Y, 0=N
PTCDGD07  DIM       1      1        520   Grade/Differen. 7 Null Cell 1=Y, 0=N
PTCDGD08  DIM       1      1        521   Grade/Differen. 8 NK Cell   1=Y, 0=N
PTCDGD09  DIM       1      1        522   Grade/Differen. 9 N.O.S.    1=Y, 0=N
PTCDPLOD  DIM       25     25       523   Place of Death
PTCDCOD1  DIM       35     35       548   Cause of Death line 1
PTCDCOD2  DIM       35     35       583   Cause of Death line 2
PTCDCSGT  DIM       10     10       618   Clinical Stage T
PTCDCSGN  DIM       10     10       628   Clinical Stage N
PTCDCSGM  DIM       10     10       638   Clinical Stage M
PTCDCSSG  DIM       10     10       648   Clinical Stage - Stage Grouping
PTCDCSCM  DIM       10     10       658   Classification Manual
PTCDTNON  DIM       1      1        668   Treatment - No Treatment   1=Yes, 0=No
PTCDTSUR  DIM       1      1        669   Treatment - Surgery        1=Yes, 0=No
PTCDTSDT  DIM       8      8        670   Treatment - Surgery  initiation Date
PTCDTRAD  DIM       1      1        678   Treatment - Radiotherapy   1=Yes, 0=No
PTCDTRDT  DIM       8      8        679   Treatment - Radiotherapy  init. Date
PTCDTCHM  DIM       1      1        687   Treatment - Chemotherapy   1=Yes, 0=No
PTCDTCDT  DIM       8      8        688   Treatment - Chemo    initiation Date
PTCDTHOR  DIM       1      1        696   Treatment - Hormones       1=Yes, 0=No
PTCDTHDT  DIM       8      8        697   Treatment - Hormones initiation Date
PTCDTBIO  DIM       1      1        705   Treatment - Biologcal/Other 1=Yes,0=No
PTCDTBDT  DIM       8      8        706   Treatment - Biologcal initiation Date
PTCDRLDT  DIM       8      8        714   Date of First Relapse (yyyymmdd)
PTCDNDCL  DIM       35     35       722   Notifying Dept / Clinic
PTCDTSAB  DIM       1      1        757   Treating Hosp. - This (Same-as-above)
PTCDTOTH  DIM       1      1        758   Treating Hosp. - Other         1=Y 0=N
PTCDTHOS  DIM       35     35       759   Treating Hosp. - Other Hosp.Name
PTCDRST1  DIM       1      1        794   Resident Status - Sing.Citizen 1=Y 0=N
PTCDRST2  DIM       1      1        795   Resident Status - Sing.PR      1=Y 0=N
PTCDRST3  DIM       1      1        796   Resident Status - Malaysia     1=Y 0=N
PTCDRST4  DIM       1      1        797   Resident Status - Indonesia    1=Y 0=N
PTCDRST5  DIM       1      1        798   Resident Status - Other        1=Y 0=N
.
PTCDSURB  DIM       45     45       799   Suburb/Locality of First Diagnosis
PTCDSTTE  DIM       7      7        844   State of First Diagnosis
PTCDPOST  DIM       8      8        851   Postcode of First Diagnosis
.                                                                     *C-208570
PTCDMET4  DIM       9      9        859   Metastatic Type 4 - ICD10 Code
PTCDMET5  DIM       9      9        868   Metastatic Type 5 - ICD10 Code
PTCDMET6  DIM       9      9        877   Metastatic Type 6 - ICD10 Code
PTCDECOG  DIM       3      3        886   ECOG Performance Status (Cat EO)
PTCDRADI  DIM       3      3        889   Radiotherapy eviQ detail (Cat QF)
PTCDSYST  DIM       3      3        892   Systemic Agent Therapy eviQ detail
.                                         (Cat QF)
PTCDSCFL  DIM       1      1        895   Stage of Cancer Flag
.                                          0 or Blank = No
.                                          1 = Yes
PTCDCSSY  DIM       3      3        896   Cancer Staging System (Cat Cs)
PTCDBDIA  DIM       3      3        899   Best Basis for Diagnosis (Cat Bd)
PTCDSPAR  DIM       37     37       902   Spare
.
.End of Record                      939
.
.Redefine FORM fields from key
.---------------------------------------
PTCDDADN  FORM      8       Patient Admission Number           
PTCDCNRG  FORM      8       Cancer Registration Number         
