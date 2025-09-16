. *----------------------------------------------------------------------
. * Include Name  :   PATK3OFD.INC
. *
. * Function      :   File Def'n Include for WEB          
. *                   Patient ICD10 Version 3 Procedure Codes Keyword Index
. *
. * File Type     :   SQL
. *
. * File Name     :   patkco3f.dat
. *
. * Modifications :
. *       V9.03.00  17.11.2003  Sylvek Litewka  CAR 20222
. *                 Created FD.
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATK3OA1   IFILE    SQL, FIXED=35, KEY="U1-9,10-24"                             
PATK3OA2   IFILE    SQL, FIXED=35, KEY="U10-24,1-9"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
.PTCOITM   DIM       9      9        1     ICD10 Proc Code                    
.PTCOKWD   DIM       15     15       10    Key Word                           
.PTCOSPA   DIM       10     10       25    Spare                              
.
.End of Record                      35   
.
