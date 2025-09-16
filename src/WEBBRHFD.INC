. V11.01.02 10/09/2021 PVL C-0909175 Fixed Status comments.
. V11.01.01 04/08/2021 PVL C-C-09091 Created FD. WebServices BBSW Payment Header
. *----------------------------------------------------------------------
. * Include Name  :   WEBBRHFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices BBSW Payment Heade     
. *
. * File Type     :   SQL
. *
. * File Name     :   webbrhaf.dat
. *
. * Index Values  :   KEY47   KEY47   KEY48   KEY47   KEY47                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBBRHA1   IFILE    SQL, FIXED=289, KEY="U1-3,4-11,12-15,16-23,129-152"
WEBBRHA2   IFILE    SQL, FIXED=289, KEY="U1-3,16-23,4-11,12-15,129-152"
WEBBRHA3   IFILE    SQL, FIXED=289, KEY="U1-3,78-78,16-23,4-11,12-15,129-152"
WEBBRHA4   IFILE    SQL, FIXED=289, KEY="U1-3,129-152,4-11,12-15,16-23"
WEBBRHA5   IFILE    SQL, FIXED=289, KEY="U129-152,1-3,4-11,12-15,16-23"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBBHHOSP  DIM       3      3        1     Hospital ID                        
WBBHPYPN  DIM       8      8        4     Payee Provider Number              
WBBHPRUN  DIM       4      4        12    Payment Run Number                 
WBBHPDAT  DIM       8      8        16    Payment Run Date                   
WBBHDAMN  DIM       9      9        24    Deposit Amount                     
WBBHACCN  DIM       9      9        33    Bank Account Number                
WBBHACNM  DIM       30     30       42    Bank Account Name                  
WBBHBSBC  DIM       6      6        72    BSB Code                           
WBBHSTAT  DIM       1      1        78    Status                             
.                                         0 = Received
.                                         1 = Partial
.                                         2 = Released
.                                         3 = Processing
WBBHRSTA  DIM       50     50       79    Report Status                      
WBBHRKEY  DIM       24     24       129   Report Retrieval Key               
WBBHMSID  DIM       36     36       153   Message Id                         
WBBHSPAR  DIM       100    100      189   Spare Variable                     
.
.End of Record                      289  
.
