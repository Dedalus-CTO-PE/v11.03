. ************************************************************************
. *                                                                      *
. *  Include Name      :   ACCDIAFD.INC                                  *
. *                                                                      *
. *  Function          :   File Def'n Include for ACC Diagnosis Details  *
. *                                                                      *
. *  File Type         :   SQL                                           *
. *                                                                      *
. *  File Name         :   accdiaaf.dat                                  *
. *                                                                      *
. *  Keys              :   KEY23                                         *
. *                                                                      *
. *  Modifications     :                                                 *
. *                                                                      *
. *      28/09/2017  Steve Armstrong  TSK 0816814                        *
. *                  Extended ACDICSYS from 1 to 3 characters in length  *
. *                  and changed field description                       *
. *      07/06/2007  Janet George  CAR 142467                            *
. *                  FD created.                                         *
. ************************************************************************
.
.Data File Definition
.--------------------
ACCDIAA1   IFILE    SQL, FIXED=63, KEY="U1-20,21-23"               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ACDIACCN  DIM       20     20       1     ACC Number                         
DACDICNT  DIM       3      3        21    Count                              
ACDICSYC  DIM       3      3        24    Value Set ID (pmsvstaf)            
.                                         (1=ICD9  2=ICD10  3=READ)
ACDIDIAG  DIM       10     10       27    Diagnosis Code                     
ACDISIDE  DIM       1      1        37    Side L/R/NA                        
.                                         (1=Left  2=Right  3=NA)
ACDISPAR  DIM       25     25       38    Spare Variable                     
.
.End of Record                      63   
.
. Redefine FORM fields from key
. -----------------------------
ACDICONT   FORM        3
