. V11.00.02 28/04/2020 PVL C-0870469 Added OTESSTAT and OTESLTYP     
. V11.00.01 20/04/2020 PVL C-0874495 Split OUTERHFD into OUTERHFD/OUTERDFD      
. *----------------------------------------------------------------------
. * Include Name  :   OUTERDFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   Eclipse DBS Payment Detail Table   
. *
. * File Type     :   SQL
. *
. * File Name     :   outerdaf.dat
. *
. * Index Values  :   KEY53   KEY53   KEY77                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTERDA1   IFILE    SQL, FIXED=207, KEY="U1-3,4-11,12-15,16-23,24-29,56-79"
OUTERDA2   IFILE    SQL, FIXED=207, KEY="U56-79,1-3,4-11,12-15,16-23,24-29"
OUTERDA3   IFILE    SQL, FIXED=207, KEY="U80-103,1-3,4-11,12-15,16-23,24-29,56-79"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTESHOSP  DIM       3      3        1     Hospital ID                        
OTESPYPN  DIM       8      8        4     Payee Provider Number              
OTESPRUN  DIM       4      4        12    Payment Run Number                 
OTESPDAT  DIM       8      8        16    Payment Run Date                   
OTESCLID  DIM       6      6        24    Claim ID                           
OTESCDAT  DIM       8      8        30    Claim Date                         
OTESCLBP  DIM       9      9        38    Claim Benefit Paid                 
OTESCLCA  DIM       9      9        47    Claim Charge Amount                
OTESTRID  DIM       24     24       56    Claim Transaction ID               
OTESRKEY  DIM       24     24       80    Report Retrieval Key               
OTESSTAT  DIM       1      1        104   Status                             
.                                         0 = Received                         
.                                         1 = Locked                           
.                                         2 = Released                         
.                                         3 = Released to Suspense A/C         
OTESLTYP  DIM       2      2        105   Lock Type (numeric - right just)   
OTESSPAR  DIM       100    100      107   Spare Variable                     
.
.End of Record                      207  
.
