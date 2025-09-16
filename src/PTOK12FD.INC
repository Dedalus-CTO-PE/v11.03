. V11.02.00 25/03/2022  Davin       TSK 0917793 - Created ICD10 Ed.12 Opr.KI FD
. *----------------------------------------------------------------------
. * Include Name  :   PTOK12FD.INC
. *
. * Function      :   File Def'n Include for WEB          
. *                   Patient ICD10 Edition 12 Procedure Codes Keyword Index
. *
. * File Type     :   SQL
. *
. * File Name     :   patok12f.dat
. *
. * Modifications :
. *      V11.02.00  25/03/2022  Davin            TSK 0917793
. *                 Created ICD10 Ed.12 Procedure Codes Keyword Index
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PTOK12A1   IFILE    SQL, FIXED=35, KEY="U1-9,10-24"                             
PTOK12A2   IFILE    SQL, FIXED=35, KEY="U10-24,1-9"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
.PTCOITM   DIM       9      9        1     ICD10 Proc Code                    
.PTCOKWD   DIM       15     15       10    Key Word                           
.PTCOSPA   DIM       10     10       25    Spare                              
.
.End of Record                      35   
.
