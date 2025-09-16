. V10.10.00 08/03/2017  Davin       TSK 0833093 - Created ICD10 Ed.10 Dis.KI FD
. *----------------------------------------------------------------------
. * Include Name  :   PATKXDFD.INC
. *
. * Function      :   File Def'n Include for WEB          
. *                   Patient ICD10 Edition 10 Diagnosis Codes Keyword Index
. *
. * File Type     :   SQL
. *
. * File Name     :   patkcdxf.dat
. *
. * Modifications :
. *      V10.10.00  08/03/2017  Davin            TSK 0833093
. *                 Created ICD10 Ed.10 Diagnosis Codes Keyword Index
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATKXDA1   IFILE    SQL, FIXED=35, KEY="U1-9,10-24"                             
PATKXDA2   IFILE    SQL, FIXED=35, KEY="U10-24,1-9"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
.PTCDITM   DIM       9      9        1     ICD10 Diagnosis Code               
.PTCDKWD   DIM       15     15       10    Key Word                           
.PTCDSPA   DIM       10     10       25    Spare                              
.
.End of Record                      35   
.
