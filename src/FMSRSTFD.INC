. V9.03.001 16/02/2004 SB  Changed variable name FMRTFORM to FMRTFRMT        
. VF.01.001 27/10/2000 CH  Change File Code (Prefix name) FMRD to FMRT
. VF.01.000 21/03/2000 CH  Temporary Detail for Generate Batch Screen       
. *----------------------------------------------------------------------
. * Include Name  :   FMSRSTFD.INC
. *
. * Function      :   File Def'n Include for Financial Management System        
. *                   Report Style Temporary Detail      
. *
. * File Type     :   SQL
. *
. * File Name     :   fmsrstaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSRSTA1   IFILE    SQL, FIXED=58, KEY="U1-3,4-5,6-7"                           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMRTSTYC  DIM       3      3        1     Report Style Code                  
FMRTROWN  DIM       2      2        4     Row Number                         
FMRTLINE  DIM       2      2        6     Line Number                        
FMRTTYPE  DIM       2      2        8     Report Detail Type                 
FMRTWIDT  DIM       2      2        10    Width                              
FMRTVTYP  DIM       2      2        12    Amount or Variant Type             
FMRTSCAL  DIM       2      2        14    Scale                              
FMRTPERI  DIM       2      2        16    Period                             
FMRTFRMT  DIM       20     20       18    Detail Format                      
FMRTSPAR  DIM       20     20       38    Spare                              
.
.End of Record                      58   
.
