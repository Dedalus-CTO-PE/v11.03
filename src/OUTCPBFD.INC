. V10.06.01 13/03/2015 EC C-303890 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   OUTCPBFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   Clinic Type Problem Codes          
. *
. * File Type     :   SQL
. *
. * File Name     :   outcpbaf.dat
. *
. * Index Values  :   KEY21   KEY91                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTCPBA1   IFILE    SQL, FIXED=184, KEY="U1-6,7-12,13-21"                       
OUTCPBA2   IFILE    SQL, FIXED=184, KEY="U1-6,7-12,22-91,13-21"                 
FILCPBA1  INIT      "cpbaf"
FILCPBA2  INIT      "cpbaf"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTPBSITE  DIM       6      6        1     Site Code                          
OTPBCTYP  DIM       6      6        7     Clinic Cype                        
OTPBPROB  DIM       9      9        13    Problem Code                       
OTPBDESC  DIM       70     70       22    Problem Description                
OTPBICDC  DIM       9      9        92    Equivalent ICD10 Code              
OTPBACTV  DIM       1      1        101   Active (0=No,1=Yes                 
OTPBCDAT  DIM       8      8        102   Date Record Created (CCYYMMDD      
OTPBCTIM  DIM       8      8        110   Time Record Created (HH:MM:SS)     
OTPBCUID  DIM       10     10       118   WEB User ID Created (websecaf      
OTPBUDAT  DIM       8      8        128   Date Record Updated (CCYYMMDD      
OTPBUTIM  DIM       8      8        136   Time Record Updated (HH:MM:SS)     
OTPBUUID  DIM       10     10       144   WEB User ID Updated (websecaf)     
OTPBSPAR  DIM       30     30       154   Spare Variable                     
.
.End of Record                      184  
.
