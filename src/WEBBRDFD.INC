. V11.01.02 20/09/2021 PVL C-0909175 Added WBBRSTAT comments
. V11.01.01 04/08/2021 PVL C-0909175 Created FD. WebServices BBSW Payment Detail
. *----------------------------------------------------------------------
. * Include Name  :   WEBBRDFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices BBSW Payment Detai     
. *
. * File Type     :   SQL
. *
. * File Name     :   webbrdaf.dat
. *
. * Index Values  :   KEY53   KEY53   KEY77   KEY77                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBBRDA1   IFILE    SQL, FIXED=243, KEY="U1-3,4-11,12-15,16-23,42-47,56-79"
WEBBRDA2   IFILE    SQL, FIXED=243, KEY="U56-79,1-3,4-11,12-15,16-23,42-47"
WEBBRDA3   IFILE    SQL, FIXED=243, KEY="U80-103,1-3,4-11,12-15,16-23,42-47,56-79"
WEBBRDA4   IFILE    SQL, FIXED=243, KEY="U80-103,56-79,1-3,4-11,12-15,16-23,42-47"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBBRHOSP  DIM       3      3        1     Hospital ID                        
WBBRPYPN  DIM       8      8        4     Payee Provider Number              
WBBRPRUN  DIM       4      4        12    Payment Run Number                 
WBBRPDAT  DIM       8      8        16    Payment Run Date                   
WBBRCLBP  DIM       9      9        24    Claim Benefit Paid                 
WBBRCLCA  DIM       9      9        33    Claim Charge Amount                
WBBRCLID  DIM       6      6        42    Claim ID                           
WBBRLDAT  DIM       8      8        48    Lodgement Date                     
WBBRTRID  DIM       24     24       56    Claim Transaction ID               
WBBRRKEY  DIM       24     24       80    Report Retrieval Key               
WBBRSTAT  DIM       1      1        104   Status                             
.                                         0 = Received
.                                         1 = Locked
.                                         2 = Released
.                                         3 = Released to Suspense A/C
WBBRLTYP  DIM       2      2        105   Lock Type (numeric - right just)   
WBBRMSID  DIM       36     36       107   Message ID                         
WBBRSPAR  DIM       100    100      143   Spare Variable                     
.
.End of Record                      243  
.
