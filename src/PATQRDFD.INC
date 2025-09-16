. V9.08.002 04/06/2007 EC  Added PTQRMCDT  CAR 139414
. V9.08.001 21/02/2007 DS  Created for QLD (Note: FD not generated)
. *----------------------------------------------------------------------
. * Include Name  :   PATQRDFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   QLD Rehabilitation Details Extraction  
. *
. * File Type     :   SQL
. *
. * File Name     :   patqrdaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATQRDA1   IFILE    SQL, FIXED=222, KEY="U1-8,9-10,11-12"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DPTQRADM  DIM       8      8        1     Admission NUMber                   
DPTQREPN  DIM       2      2        9     Episode Number                     
DPTQRCNT  DIM       2      2        11    Episode Counter                    
PTQRBISA  FORM      3      3        13    Barthel Index Score on Admission   
PTQRBISD  FORM      3      3        16    Barthel Index Score on Discharge   
PTQRCLSP  DIM       3      3        19    Clinical Sub Program (category CU) 
PTQRODTE  DIM       8      8        22    Onset Date (ccyymmdd)              
PTQRARTR  DIM       1      1        30    Admission/Readmission to Rehab.    
PTQRUSRF  DIM       1      1        31    User Flag                          
PTQRPCSA  DIM       1      1        32    Palliative Care State on Admission 
PTQRPCSD  DIM       1      1        33    Palliative Care State on Discharge 
PTQRRGAA  DIM       2      2        34    RUG ADL on Admission               
PTQRRGAD  DIM       2      2        36    RUG ADL on Discharge               
PTQRSRPC  DIM       2      2        38    Source of Referral for Pall Care    
PTQRFIMA  FORM      3      3        40    F.I.M. Score on Admission          
PTQRFIMD  FORM      3      3        43    F.I.M. Score on Discharge          
PTQRDIAG  DIM       5      5        46    Diagnostic Group                   
PTQRCOM1  DIM       70     70       51    Comments line 1                    
PTQRCOM2  DIM       70     70       121   Comments line 2                    
PTQRFADT  DIM       8      8        191   Functional Assess Date Adm(CCYYMMDD
PTQRFDDT  DIM       8      8        199   Functional Asses Date Dsch CCYYMMDD
PTQRMCDT  DIM       8      8        207   Multidisciplinary Care Date CCYYMMDD
PTQRSPAR  DIM       7      7        215   Spare Variable                     
.
.End of Record                      222  
.
.Redefine Key Variables
.----------------------
PTQRADMN  FORM      8    
PTQREPNO  FORM      2    
PTQRCNTR  FORM      2    
