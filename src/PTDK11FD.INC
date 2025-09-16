. V10.14.00 14/03/2019  Don Nguyen  TSK 0869412 - Created ICD10 Ed.11 Dis.KI FD
. *----------------------------------------------------------------------
. * Include Name  :   PTDK11FD.INC
. *
. * Function      :   File Def'n Include for WEB          
. *                   Patient ICD10 Edition 11 Diagnosis Codes Keyword Index
. *
. * File Type     :   SQL
. *
. * File Name     :   patdk11f.dat
. *
. * Modifications :
. *      V10.14.00  12/03/2019  Don Nguyen       TSK 0869412
. *                 Created ICD10 Ed.11 Diagnosis Codes Keyword Index
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PTDK11A1   IFILE    SQL, FIXED=35, KEY="U1-9,10-24"                             
PTDK11A2   IFILE    SQL, FIXED=35, KEY="U10-24,1-9"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
.PTCDITM   DIM       9      9        1     ICD10 Diagnosis Code               
.PTCDKWD   DIM       15     15       10    Key Word                           
.PTCDSPA   DIM       10     10       25    Spare                              
.
.End of Record                      35   
.
