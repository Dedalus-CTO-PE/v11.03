. V10.02.01 16/03/2011 JP  Increased printer size CAR 239574
. V9.11.01  15/01/2009 Ebon Clements Added IBPDNUM     CAR 175204            
. V9.09.01  18/10/2007 Davin  Added IBPDCOP & IBPDDOC  CAR 151903            
. 6.04 .001 27/05/1998 kcn patient label server                              
. *----------------------------------------------------------------------
. * Include Name  :   IBAPDFFD.INC
. *
. * Function      :   File Def'n Include for SYSTEM FILES                       
. *                   PATIENT LABEL SERVER               
. *
. * File Type     :   SQL
. *
. * File Name     :   ibapdfaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
IBAPDFA1   IFILE    SQL, FIXED=140, KEY="U1-8,9-10,11-20"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
IBPDPID   DIM       8      8        1     Program ID
IBPDREP   DIM       2      2        9     Report No                          
IBPDUID   DIM       10     10       11    Web User ID
IBPDPRT   DIM       6      6        21    Printer                            
IBPDCOP   DIM       3      3        27    Default Number of copies          
IBPDDOC   DIM       8      8        30    Default Document Code                 
IBPDNUM   DIM       2      2        38    Default Document Number (Label)       
IBPDSPA   DIM       100    100      40    Spare                              
.
.End of Record                     140   
.
