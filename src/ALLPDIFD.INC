. v9.03.001 15/07/2003 DS  Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   ALLPDIFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Predefined Diagnosis Reasons       
. *
. * File Type     :   SQL
. *
. * File Name     :   allpdiaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLPDIA1   IFILE    SQL, FIXED=145, KEY="U1-3,4-12"                             
ALLPDIA2   IFILE    SQL, FIXED=145, KEY="U1-3,13-52,4-12"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALPDRDEP  DIM       3      3        1     Referring Dept. (ostcatg.outsitaf) 
ALPDREAS  DIM       9      9        4     Reason Code                        
ALPDDESC  DIM       40     40       13    Reason Description                 
ALPDICD   DIM       9      9        53    Equivalent ICD10 Code              
ALPDACTV  DIM       1      1        62    Active (0=No,1=Yes)                
ALPDCDAT  DIM       8      8        63    Date Record Created (CCYYMMDD)     
ALPDCTIM  DIM       8      8        71    Time Record Created (HH:MM:SS)     
ALPDCUID  DIM       10     10       79    WEB User ID Created (websecaf)     
ALPDUDAT  DIM       8      8        89    Date Record Updated (CCYYMMDD)     
ALPDUTIM  DIM       8      8        97    Time Record Updated (HH:MM:SS)     
ALPDUUID  DIM       10     10       105   WEB User ID Updated (websecaf)     
ALPDSPAR  DIM       30     30       115   Spare Variable                     
.
.End of Record                      145  
.
