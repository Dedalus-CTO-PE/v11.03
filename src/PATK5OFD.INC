. *----------------------------------------------------------------------
. * Include Name  :   PATK5OFD.INC
. *
. * Function      :   File Def'n Include for WEB          
. *                   Patient ICD10 Edition 5 Procedure Codes Keyword Index
. *
. * File Type     :   SQL
. *
. * File Name     :   patkco5f.dat
. *
. * Modifications :
. *       V9.06.00  08/05/2006  Mike Laming      CAR 105244                   
. *                 Created FD.
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATK5OA1   IFILE    SQL, FIXED=35, KEY="U1-9,10-24"                             
PATK5OA2   IFILE    SQL, FIXED=35, KEY="U10-24,1-9"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
.PTCOITM   DIM       9      9        1     ICD10 Proc Code                    
.PTCOKWD   DIM       15     15       10    Key Word                           
.PTCOSPA   DIM       10     10       25    Spare                              
.
.End of Record                      35   
.
