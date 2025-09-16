. V6.00.002 10/03/1992 Nez Added APISRES
. *----------------------------------------------------------------------
. * Include Name  :   APSISLFD.INC
. *
. * Function      :   File Def'n Include for Accounts Payable
. *                   Inventory System Linkage Table
. *
. * File Type     :   SQL
. *
. * File Name     :   apsislaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
APSISLA1   IFILE    SQL, FIXED=89, KEY="U1-1"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
APISISC   DIM       1      1        1     Inventory System P/O Prefix Code   
APISDES   DIM       35     35       2     Description                        
APISDIR   DIM       30     30       37    Directory                          
APISTYP   FORM      1      2        67    Manual Orders 0=No 1=Yes           
APISRES   DIM       4      4        69    Responsibility                     
APISSPA   DIM       16     16       73    Spare                              
.
.End of Record                      89   
.
