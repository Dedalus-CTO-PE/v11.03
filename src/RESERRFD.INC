. V5.08.001 15/11/2000                                                       
. *----------------------------------------------------------------------
. * Include Name  :   RESERRFD.INC
. *
. * Function      :   File Def'n Include for Clinical Results                   
. *                   Result Error Messages              
. *
. * File Type     :   SQL
. *
. * File Name     :   reserraf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
RESERRA1   IFILE    SQL, FIXED=118, KEY="U1-8,9-13,14-17"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
REERRDT   DIM       8      8        1     Date                               
REERRTM   DIM       5      5        9     Time                               
REERRUN   DIM       4      4        14    Unique ID                          
REERMSG   DIM       20     20       18    Error Message                      
REERSPA   DIM       80     80       38    Spare                              
.
.End of Record                      118  
.
