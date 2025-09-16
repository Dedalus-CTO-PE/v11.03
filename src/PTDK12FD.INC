. V11.02.00 25/03/2022  Davin       TSK 0917793 - Created ICD10 Ed.12 Dis.KI FD
. *----------------------------------------------------------------------
. * Include Name  :   PTDK12FD.INC
. *
. * Function      :   File Def'n Include for WEB          
. *                   Patient ICD10 Edition 12 Diagnosis Codes Keyword Index
. *
. * File Type     :   SQL
. *
. * File Name     :   patdk12f.dat
. *
. * Modifications :
. *      V11.02.00  25/03/2022  Davin            TSK 0917793
. *                 Created ICD10 Ed.12 Diagnosis Codes Keyword Index
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PTDK12A1   IFILE    SQL, FIXED=35, KEY="U1-9,10-24"                             
PTDK12A2   IFILE    SQL, FIXED=35, KEY="U10-24,1-9"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
.PTCDITM   DIM       9      9        1     ICD10 Diagnosis Code               
.PTCDKWD   DIM       15     15       10    Key Word                           
.PTCDSPA   DIM       10     10       25    Spare                              
.
.End of Record                      35   
.
