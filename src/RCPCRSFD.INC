. V10.00.01 16/07/2011 JT  Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   RCPCRSFD.INC
. *
. * Function      :   File Def'n Include for Receipting                         
. *                   Credit Card Surcharge              
. *
. * File Type     :   SQL
. *
. * File Name     :   rcpcrsaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
RCPCRSA1   IFILE    SQL, FIXED=110, KEY="U1-12,13-15"                           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
RCCRRECN  DIM       12     12       1     Receipt Number                     
RCCRUNIQ  DIM       3      3        13    Transaction Count                  
RCCRCRTY  DIM       3      3        16    Credit Card Type (Cat CR)          
RCCRACCN  DIM       15     15       19    Account Number                     
RCCRSAMN  FORM      12.2   8        34    Surcharge Amount                   
RCCRSGST  FORM      12.2   8        42    Surcharge GST Amount               
RCCRSPAR  DIM       60     60       50    Spare variable                     
.
.End of Record                      110  
.
