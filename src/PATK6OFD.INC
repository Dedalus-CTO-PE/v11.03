. V9.09.001 18/03/2008 Mike Laming  CAR 163918 - Created ICD10 Ed.6 Opr.KI FD
. *----------------------------------------------------------------------
. * Include Name  :   PATK6OFD.INC
. *
. * Function      :   File Def'n Include for WEB          
. *                   Patient ICD10 Edition 6 Procedure Codes Keyword Index
. *
. * File Type     :   SQL
. *
. * File Name     :   patkco6f.dat
. *
. * Modifications :
. *       V9.09.00  18/03/2008  Mike Laming      CAR 163918
. *                 Created ICD10 Ed.6 FD.
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATK6OA1   IFILE    SQL, FIXED=35, KEY="U1-9,10-24"                             
PATK6OA2   IFILE    SQL, FIXED=35, KEY="U10-24,1-9"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
.PTCOITM   DIM       9      9        1     ICD10 Proc Code                    
.PTCOKWD   DIM       15     15       10    Key Word                           
.PTCOSPA   DIM       10     10       25    Spare                              
.
.End of Record                      35   
.
