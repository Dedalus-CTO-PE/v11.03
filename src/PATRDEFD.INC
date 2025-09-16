. V11.02.01 27/04/2022 EC C-0906597 Added PTRDVERS and PTRDSNAP                 
. V10.04.01 18/12/2013 AP  Moved PTRDIMPR,PTRDPOCA,PTRDPOCD out of SPARE        
. V10.03.01 03/05/2012 DS  Added IMPR,POCA,POCD to spare CAR 260600 VAED-2012   
. V9.06.001 03/06/2006 JH  Added assessment dates                               
. *----------------------------------------------------------------------
. * Include Name  :   PATRDEFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Rehabilitation Details Extraction  
. *
. * File Type     :   SQL
. *
. * File Name     :   patrdeaf.dat
. *
. * Index Values  :   KEY10                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATRDEA1   IFILE    SQL, FIXED=268, KEY="U1-8,9-10"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DPTRDADM  DIM       8      8        1     Admission NUMber                   
DPTRDEPN  DIM       2      2        9     Episode Number                     
PTRDBISA  FORM      3      3        11    Barthel Index Score on Admission   
PTRDBISD  FORM      3      3        14    Barthel Index Score on Discharge   
PTRDCLSP  DIM       3      3        17    Clinical Sub Program (category CU) 
PTRDODTE  DIM       8      8        20    Onset Date (ccyymmdd)              
PTRDARTR  DIM       1      1        28    Admission/Readmission to Rehab.    
PTRDUSRF  DIM       1      1        29    User Flag                          
PTRDPCSA  DIM       1      1        30    Palliative Care State on Admission 
PTRDPCSD  DIM       1      1        31    Palliative Care State on Discharge 
PTRDRGAA  DIM       2      2        32    RUG ADL on Admission               
PTRDRGAD  DIM       2      2        34    RUG ADL on Discharge               
PTRDSRPC  DIM       2      2        36    Source of Referral for Pall Care   
PTRDFIMA  FORM      3      3        38    F.I.M. Score on Admission          
PTRDFIMD  FORM      3      3        41    F.I.M. Score on Discharge          
PTRDDIAG  DIM       5      5        44    Diagnostic Group                   
PTRDCOM1  DIM       70     70       49    Comments line 1                    
PTRDCOM2  DIM       70     70       119   Comments line 2                    
PTRDFADT  DIM       8      8        189   Functional Assess Date Adm(CCYYMMDD
PTRDFDDT  DIM       8      8        197   Functional Asses Date Dsch CCYYMMDD
PTRDIMPR  DIM       7      7        205   Impairment Code (pmsimpaf)         
PTRDPOCA  DIM       3      3        212   Phase Of Care on Admission (cat pu)
PTRDPOCD  DIM       3      3        215   Phase Of Care on Discharge (cat pu)
PTRDVERS  DIM       2      2        218   AN-SNAP Version (pmssnpaf)         
PTRDSNAP  DIM       3      3        220   AN-SNAP Classification (pmssnpaf)  
PTRDSPAR  DIM       45     45       223   Spare Variable                     
.
.End of Record                      268  
.
.Redefine Key Variables
.----------------------
PTRDADMN  FORM      8    
PTRDEPNO  FORM      2    
