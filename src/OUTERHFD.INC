. V11.00.02 28/04/2020 PVL C-0870469 Fixed Statuses
. V11.00.01 20/04/2020 PVL C-0874495 Split OUTERHFD into OUTERHFD/OUTERDFD      
. V10.13.03 19/12/2018 PVL C-0859743 Added new Status 3 - Released to suspense r
. V10.13.02 12/12/2018 PVL C-0859743 Added Report Retrieval Key                 
. V10.13.01 18/09/2018 PVL C-0859743 Created File Definition                    
. *----------------------------------------------------------------------
. * Include Name  :   OUTERHFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   Eclipse Bulk Billing Payment Table 
. *
. * File Type     :   SQL
. *
. * File Name     :   outerhaf.dat
. *
. * Index Values  :   KEY47   KEY47   KEY48   KEY47                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTERHA1   IFILE    SQL, FIXED=203, KEY="U1-3,4-11,12-15,16-23,79-102"
OUTERHA2   IFILE    SQL, FIXED=203, KEY="U1-3,16-23,4-11,12-15,79-102"
OUTERHA3   IFILE    SQL, FIXED=203, KEY="U1-3,78-78,16-23,4-11,12-15,79-102"
OUTERHA4   IFILE    SQL, FIXED=203, KEY="U1-3,79-102,4-11,12-15,16-23"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTERHOSP  DIM       3      3        1     Hospital ID                        
OTERPYPN  DIM       8      8        4     Payee Provider Number              
OTERPRUN  DIM       4      4        12    Payment Run Number                 
OTERPDAT  DIM       8      8        16    Payment Run Date                   
OTERBSBC  DIM       6      6        24    BSB Code                           
OTERACCN  DIM       9      9        30    Bank Account Num                   
OTERACNM  DIM       30     30       39    Bank Account Name                  
OTERDAMN  DIM       9      9        69    Deposit Amount                     
OTERSTAT  DIM       1      1        78    Status                             
.                                            0 = Received
.                                            1 = Partial
.                                            2 = Released
.                                            3 = Processing
OTERRKEY  DIM       24     24       79    Report Retrieval Key               
OTERSPAR  DIM       100    100      103   Spare Variable                     
.
.End of Record                      203  
.
