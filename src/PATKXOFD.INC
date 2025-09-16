. V10.10.00 08/03/2017  Davin       TSK 0833093 - Created ICD10 Ed.10 Opr.KI FD
. *----------------------------------------------------------------------
. * Include Name  :   PATKXOFD.INC
. *
. * Function      :   File Def'n Include for WEB          
. *                   Patient ICD10 Edition 10 Procedure Codes Keyword Index
. *
. * File Type     :   SQL
. *
. * File Name     :   patkcoxf.dat
. *
. * Modifications :
. *       V10.10.00  08/03/2017  Davin            TSK 0833093
. *                 Created ICD10 Ed.10 Procedure Codes Keyword Index
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATKXOA1   IFILE    SQL, FIXED=35, KEY="U1-9,10-24"                             
PATKXOA2   IFILE    SQL, FIXED=35, KEY="U10-24,1-9"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
.PTCOITM   DIM       9      9        1     ICD10 Proc Code                    
.PTCOKWD   DIM       15     15       10    Key Word                           
.PTCOSPA   DIM       10     10       25    Spare                              
.
.End of Record                      35   
.
