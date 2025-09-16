. V10.13.01 25/07/2018 RPH C-0848506 Extended PRPCDOCT from 6 to 10 chars       
. V9.02.01 10/01/2002 JT                                                        
. *----------------------------------------------------------------------
. * Include Name  :   PRIPCEFD.INC
. *
. * Function      :   File Def'n Include for Private Practice                   
. *                   G/L interface income percentage    
. *
. * File Type     :   SQL
. *
. * File Name     :   pripceaf.dat
. *
. * Index Values  :   KEY31                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PRIPCEA1   IFILE    SQL, FIXED=111, KEY="U1-1,2-11,12-28,29-31"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRPCFTYP  DIM       1      1        1     Financial type                     
.                                            1 = Items
.                                            2 = Journals
PRPCDOCT  DIM       10     10       2     Doctor code                        
PRPCFCOD  DIM       17     17       12    Financial Code 
.                                         All Financial Type
.                                           Spaces = Default for financial Code
.
.                                         Financial Type = 1
.                                           XXYYYYYYYYYZZZ ,  XX  = Item Flag
.                                                    , YYYYYYYYY  = Item Code
.                                                          , ZZZ  = Sub-Item No
.
.                                         Financial Type = 2
.                                           WW             , WW   = Journal Code
.                    
PRPCPORT  DIM       3      3        29    Type of Portion (category PP)                   
PRPCPCEN  FORM      3.2    4        32    Percentage (%)                     
PRPCDSEC  DIM       5      5        36    Dissection                         
PRPCRESP  DIM       4      4        41    Responsibility                     
PRPCLEDG  DIM       2      2        45    Ledger                             
PRPCCRAC  DIM       12     12       47    Income/Credit Account              
PRPCDBAC  DIM       12     12       59    Debit Account                      
PRPCSPAR  DIM       40     40       71    Spare variable                     
.
.End of Record                      111  
.
