. V10.08.01 14/04/2016 JP C-0279181 Created                                     
. *----------------------------------------------------------------------
. * Include Name  :   AUDERRFD.INC
. *
. * Function      :   File Def'n Include for Audit Tables                       
. *                   Audit Error Table                  
. *
. * File Type     :   SQL
. *
. * File Name     :   auderraf.dat
. *
. * Index Values  :   KEY20                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
AUDERRA1   IFILE    SQL, FIXED=376, KEY="U1-20"                                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
AUERUNQ   DIM       20     20       1     Unique Reference                   
AUERTRG   DIM       50     50       21    Trigger Name                       
AUERERR   DIM       255    255      71    Error                              
AUERSPA   DIM       50     50       326   Spare                              
.
.End of Record                      376  
.
