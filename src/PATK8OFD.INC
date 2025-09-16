. V10.03.00 23/04/2013  Davin       CAR 284420 - Created ICD10 Ed.8 Opr.KI FD
. *----------------------------------------------------------------------
. * Include Name  :   PATK8OFD.INC
. *
. * Function      :   File Def'n Include for WEB          
. *                   Patient ICD10 Edition 8 Procedure Codes Keyword Index
. *
. * File Type     :   SQL
. *
. * File Name     :   patkco8f.dat
. *
. * Modifications :
. *       V10.03.00 23/04/2013  Davin            CAR 284420
. *                 Created ICD10 Ed.8 Procedure Codes Keyword Index
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATK8OA1   IFILE    SQL, FIXED=35, KEY="U1-9,10-24"                             
PATK8OA2   IFILE    SQL, FIXED=35, KEY="U10-24,1-9"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
.PTCOITM   DIM       9      9        1     ICD10 Proc Code                    
.PTCOKWD   DIM       15     15       10    Key Word                           
.PTCOSPA   DIM       10     10       25    Spare                              
.
.End of Record                      35   
.
