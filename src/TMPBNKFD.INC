. V10.02.01 31/03/2011 JP  Increased printer size CAR 239574                 
. V9.04.001 27/10/2005 JT  Added print option                                   
. V9.03.003 04/12/2003 LV                                                       
. V9.03.004 12/01/2004 SB  Changed cheque number from 14 to 15                  
. *----------------------------------------------------------------------
. * Include Name  :   TMPBNKFD.INC
. *
. * Function      :   File Def'n Include for Temporary Code for Temp Files      
. *                   Temporary Receipting Bank Header   
. *
. * File Type     :   SQL
. *
. * File Name     :   tmpbnkaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
TMPBNKA1   IFILE    SQL, FIXED=196, KEY="U1-12"                                 
TMPBNKA2   IFILE    SQL, FIXED=196, KEY="U13-20,29-34,1-12"                     
TMPBNKA3   IFILE    SQL, FIXED=196, KEY="U64-71,29-34,1-12"                     
TMPBNKA4   IFILE    SQL, FIXED=196, KEY="U48-55,64-71,29-34,1-12"               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
TMBNRECN  DIM       12     12       1     Receipt Number                     
TMBNTDAT  DIM       8      8        13    Transaction Date (CCYYMMDD)        
TMBNTOTP  FORM      12.2   8        21    Total Payment                      
TMBNCDRW  DIM       6      6        29    Cash Drawer                        
TMBNMHOS  DIM       3      3        35    Multi Hospital Id (pathspaf)       
TMBNMDHS  DIM       2      2        38    Multi Database Hosp Id (pathospf)  
TMBNTTYP  DIM       1      1        40    Received From Type                 
TMBNRCOD  DIM       6      6        41    Received From Code                 
TMBNSTAT  DIM       1      1        47    Status                             
TMBNBDAT  DIM       8      8        48    Bank Deposit Date (CCYYMMDD)       
TMBNBTIM  DIM       8      8        56    Bank Deposit Time (hh:mm:ss)       
TMBNRDAT  DIM       8      8        64    Reconciliation Date (CCYYMMDD)     
TMBNRTIM  DIM       8      8        72    Reconciliation Time (hh:mm:ss)     
TMBNCHQA  DIM       15     15       80    Cheque Account Number              
TMBNCDAT  DIM       8      8        95    Date Record Created (CCYYMMDD)     
TMBNCTIM  DIM       8      8        103   Time Record Created (hh:mm:ss)     
TMBNCUID  DIM       10     10       111   Web User Id Created (websecaf)     
TMBNUDAT  DIM       8      8        121   Date Record Updated (CCYYMMDD)     
TMBNUTIM  DIM       8      8        129   Time Record Updated (hh:mm:ss)     
TMBNUUID  DIM       10     10       137   Web User Id Updated (websecaf)     
TMBNPRIN  DIM       1      1        147   Re-print all Un-balanced invoices  
TMBNPRNT  DIM       6      6        148   Printer                            
TMBNSPAR  DIM       42     42       154   Spare variable                     
.
.End of Record                      196  
.
