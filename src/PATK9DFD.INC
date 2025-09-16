. V10.06.00 17/04/2015  Davin       CAR 311669 - Created ICD10 Ed.9 Dis.KI FD
. *----------------------------------------------------------------------
. * Include Name  :   PATK9DFD.INC
. *
. * Function      :   File Def'n Include for WEB          
. *                   Patient ICD10 Edition 9 Diagnosis Codes Keyword Index
. *
. * File Type     :   SQL
. *
. * File Name     :   patkcd9f.dat
. *
. * Modifications :
. *      V10.06.00  17/04/2015  Davin            CAR 311669
. *                 Created ICD10 Ed.9 Diagnosis Codes Keyword Index
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATK9DA1   IFILE    SQL, FIXED=35, KEY="U1-9,10-24"                             
PATK9DA2   IFILE    SQL, FIXED=35, KEY="U10-24,1-9"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
.PTCDITM   DIM       9      9        1     ICD10 Diagnosis Code               
.PTCDKWD   DIM       15     15       10    Key Word                           
.PTCDSPA   DIM       10     10       25    Spare                              
.
.End of Record                      35   
.
