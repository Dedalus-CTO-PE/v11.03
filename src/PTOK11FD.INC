. V10.14.00 14/03/2019  Don Nguyen  TSK 0869412 - Created ICD10 Ed.11 Opr.KI FD
. *----------------------------------------------------------------------
. * Include Name  :   PTOK11FD.INC
. *
. * Function      :   File Def'n Include for WEB          
. *                   Patient ICD10 Edition 11 Procedure Codes Keyword Index
. *
. * File Type     :   SQL
. *
. * File Name     :   patok11f.dat
. *
. * Modifications :
. *      V10.14.00  12/03/2019  Don Nguyen       TSK 0869412
. *                 Created ICD10 Ed.11 Procedure Codes Keyword Index
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PTOK11A1   IFILE    SQL, FIXED=35, KEY="U1-9,10-24"                             
PTOK11A2   IFILE    SQL, FIXED=35, KEY="U10-24,1-9"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
.PTCOITM   DIM       9      9        1     ICD10 Proc Code                    
.PTCOKWD   DIM       15     15       10    Key Word                           
.PTCOSPA   DIM       10     10       25    Spare                              
.
.End of Record                      35   
.
