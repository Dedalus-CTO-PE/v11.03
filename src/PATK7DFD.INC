. V10.00.00 01/04/2010 Mike Laming  CAR 219246 - Created ICD10 Ed.7 Dis.KI FD
. *----------------------------------------------------------------------
. * Include Name  :   PATK7DFD.INC
. *
. * Function      :   File Def'n Include for WEB          
. *                   Patient ICD10 Edition 7 Diagnosis Codes Keyword Index
. *
. * File Type     :   SQL
. *
. * File Name     :   patkcd7f.dat
. *
. * Modifications :
. *      V10.00.00  01/04/2010  Mike Laming      CAR 219246
. *                 Created ICD10 Ed.7 FD.
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATK7DA1   IFILE    SQL, FIXED=35, KEY="U1-9,10-24"                             
PATK7DA2   IFILE    SQL, FIXED=35, KEY="U10-24,1-9"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
.PTCDITM   DIM       9      9        1     ICD10 Diagnosis Code               
.PTCDKWD   DIM       15     15       10    Key Word                           
.PTCDSPA   DIM       10     10       25    Spare                              
.
.End of Record                      35   
.
