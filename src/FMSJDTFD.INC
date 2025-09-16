. VF.09.001 29/11/2000 SB  Added BAS Code                                    
. *----------------------------------------------------------------------
. * Include Name  :   FMSJDTFD.INC
. *
. * Function      :   File Def'n Include for Financial Management System        
. *                   Journal Detals Table               
. *
. * File Type     :   SQL
. *
. * File Name     :   fmsjdtaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSJDTA1   IFILE    SQL, FIXED=101, KEY="U1-1,2-7,8-10"                         
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMJDJTY   DIM       1      1        1     Journal Type Gen/Std/Per           
FMJDJID   DIM       6      6        2     Journal ID                         
FMJDLNO   DIM       3      3        8     Line Number                        
FMJDDRCR  DIM       1      1        11    (D)ebit or (C)redit                
FMJDDESC  DIM       35     35       12    Transaction Description            
FMJDACC   DIM       12     12       47    Account Code                       
FMJDDIS   DIM       5      5        59    Dissection                         
FMJDRES   DIM       4      4        64    Responsibility                     
FMJDTAMT  FORM      12.2   8        68    Total Amount to be Posted          
FMJDPERC  FORM      4.2    4        76    Percentage Allocation  (Std Only)  
FMJDPAMT  FORM      12.2   8        80    Amount Processed       (Per Only)  
FMJDBASC  DIM       3      3        88    BAS Code                           
FMJDSPAR  DIM       10     10       91    Spare                              
.
.End of Record                      101  
.
