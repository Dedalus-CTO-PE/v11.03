. *----------------------------------------------------------------------
. * Include Name  :   PATK3DFD.INC
. *
. * Function      :   File Def'n Include for WEB          
. *                   Patient ICD10 Version 3 Diagnosis Codes Keyword Index
. *
. * File Type     :   SQL
. *
. * File Name     :   patkcd3f.dat
. *
. * Modifications :
. *       V9.03.00  17.11.2003  Sylvek Litewka  CAR 20222
. *                 Created FD.
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATK3DA1   IFILE    SQL, FIXED=35, KEY="U1-9,10-24"                             
PATK3DA2   IFILE    SQL, FIXED=35, KEY="U10-24,1-9"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
.PTCDITM   DIM       9      9        1     ICD10 Diagnosis Code               
.PTCDKWD   DIM       15     15       10    Key Word                           
.PTCDSPA   DIM       10     10       25    Spare                              
.
.End of Record                      35   
.
