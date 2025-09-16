. V11.02.01 16/03/2022 JT C-0900265 Changed second index                        
. V11.01.01 18/03/2021 JT C-0863287 Created file for HF Debtor Transaction      
. *----------------------------------------------------------------------
. * Include Name  :   PATHTRFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Health Fund Debtor Transaction     
. *
. * File Type     :   SQL
. *
. * File Name     :   pathtraf.dat
. *
. * Index Values  :   KEY22   KEY36                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATHTRA1   IFILE    SQL, FIXED=546, KEY="U1-8,91-98,9-14"
PATHTRA2   IFILE    SQL, FIXED=546, KEY="U1-8,175-182,183-188,91-98,9-14"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTHTADMN  DIM       8      8        1     Admission Number                   
PTHTTRNS  DIM       6      6        9     Transaction Number                 
PTHTTDEB  DIM       1      1        15    Type of Debt                       
.                                         H = Health Fund                      
.                                         G = Government                       
.                                         I = Insurance                        
.                                         P = Patient                          
PTHTDCOD  DIM       8      8        16    Code for HF,Insurance              
PTHTAMTT  FORM      12.2   8        24    Gross Total Amount                 
PTHTAMTG  FORM      12.2   8        32    Government Portion                 
PTHTAMTH  FORM      12.2   8        40    Original Rate before any Disc.Allw 
PTHTAMTI  FORM      12.2   8        48    Daily Rate amount                  
PTHTAMTP  FORM      12.2   8        56    Patient Portion                    
PTHTFCEN  DIM       2      2        64    Century On/From                    
PTHTFYER  DIM       2      2        66    Year    On/From                    
PTHTFMON  DIM       2      2        68    Month   On/From                    
PTHTFDAY  DIM       2      2        70    Day     On/From                    
PTHTTCEN  DIM       2      2        72    Century, To date(Accom.record only)
PTHTTYER  FORM      2      2        74    Year, To date(Accom.record only)   
PTHTTMON  FORM      2      2        76    Month,To date(Accom.record only)   
PTHTTDAY  FORM      2      2        78    Day,  To date(Accom.record only)   
PTHTTTYP  DIM       2      2        80    Transaction type                   
.                                         PY = Payments                        
.                                         DB = Charge                          
.                                         xx = Journal                         
PTHTITEM  DIM       9      9        82    Item Number                        
PTHTTREF  DIM       8      8        91    Reference (Rebate Invoice No)      
PTHTPAYT  FORM      1      2        99    Payment Method                     
.                                         0 = Not Applicable                   
.                                         1 = Cash                             
.                                         2 = Cheque                           
.                                         3 = Credit Card                      
.                                         4 = Merchant Cards eg.AMEX           
.                                         5 = Money Order                      
.                                         6 = EFTPOS                           
.                                         7 = BPAY                             
.                                         8 = Virtual Terminal (HICAPS)        
.                                         9 = Medicare                         
.                                         For Accommodation record:            
.                                         9 = Half Day charge on Discharge.    
PTHTRCPT  DIM       12     12       101   Receipt Number                     
PTHTDESC  DIM       30     30       113   Description                        
PTHTINVP  FORM      1      2        143   Patient Invoice printed(0=No,1=Yes)
PTHTRECT  DIM       1      1        145   Record Type                        
.                                         1 = Accommodation                    
.                                         2 = Theatre                          
.                                         3 = Miscellaneous                    
.                                         4 = Doctor Fees                      
.                                         5 = Cash Receipt                     
.                                         6 = Journals                         
.                                         7 = Discount/Rounding                
.                                         8 = Proc.Fees (NZ)                   
.                                         9 = ABF                              
PTHTNDAY  FORM      4      3        146   No of days (Accom.only)            
PTHTCLMD  FORM      1      2        149   Claim(0=No,1=Yes)                  
PTHTRBAT  FORM      12.2   8        151   Rebate amount                      
PTHTDOCT  DIM       6      6        159   Treating Doctor                    
PTHTSERV  FORM      5      4        165   Number of Services                 
PTHTDOCO  DIM       6      6        169   Operating Doctor                   
PTHTPINV  DIM       8      8        175   Patient Invoice No.(patdtraf)      
PTHTPTRN  DIM       6      6        183   Trans.No of Patient Inv. (patdtraf)
PTHTSESS  DIM       2      2        189   Session (Theatre Only)             
PTHTMISG  DIM       3      3        191   Misc.Group (Cat FI)                
.                                         (for Misc. & Theatre)                
PTHTDEPT  DIM       3      3        194   Deposit Type                       
PTHTWARD  DIM       3      3        197   Ward of Accommodation record       
PTHTCLMT  DIM       3      3        200   Claim type when printing Invoice   
PTHTADMT  DIM       3      3        203   Adm.Type when printing Invoice     
PTHTBTCH  DIM       8      8        206   Batch Number for Misc/Cash/Journal 
PTHTNINV  FORM      1      2        214   Number of Invoices to be printed   
PTHTLSPT  FORM      12.2   8        216   Lumpsum amount Patient Portion     
PTHTLSRB  FORM      12.2   8        224   Lumpsum amount Rebate Portion      
PTHTDTYP  FORM      1      2        232   Day type                           
.                                         1 = Low outlier                      
.                                         2 = Inliear                          
.                                         3 = Outlier                          
PTHTDES2  DIM       35     35       234   Description 2                      
PTHTEPSD  FORM      1      2        269   Mechanical Ventilation Billing Rec?
.                                         0 = No, 1 = Yes                      
PTHTTCCU  FORM      1      2        271   Flag for Additional Charge (Accom.)
PTHTGSTA  FORM      1      2        273   Is GST applicable to this time ?   
.                                         0=No GST, 1=Yes, 2=Unknown GST       
PTHTGSTC  DIM       6      6        275   GST Payable code                   
PTHTGSTM  FORM      12.2   8        281   GST Amount                         
PTHTEFFD  DIM       8      8        289   Date Item assigned to Fees Inv.    
PTHTGSTL  FORM      12.2   8        297   GST Lumpsum Amount                 
PTHTTTIM  DIM       8      8        305   Time of ORD message (hh:mm:ss)     
PTHTCRST  DIM       1      1        313   Credit Note Status                 
.                                         0 or blank = No Credit Note          
.                                         1 = Fully Credited                   
.                                         2 = Credit by Item                   
PTHTUNIQ  DIM       10     10       314   Unique Id for Theatre booking      
PTHTBTYP  DIM       3      3        324   Bed Type (Cat BT) Accom.only       
PTHTCNTR  DIM       6      6        327   Contract/Health Fund               
PTHTSUNQ  DIM       3      3        333   Subsequence Proc.Uniq.No           
PTHTBATC  DIM       16     16       336   Batch Details                      
PTHTADPT  FORM      12.2   8        352   Additional rate Pat Portion C/P    
PTHTADRB  FORM      12.2   8        360   Additional rate Reb Porton C/P     
PTHTCNID  DIM       6      6        368   Contract Id                        
PTHTLSD1  DIM       30     30       374   Lumpsum Descripttion 1             
PTHTLSD2  DIM       35     35       404   Lumpsum Description 2              
PTHTTMNO  DIM       1      1        439   Patient MBS Team (oprpmbaf)        
PTHTPMBS  DIM       3      3        440   Patient MBS Counter (oprpmbaf)     
PTHTPCOD  DIM       3      3        443   Payment code (Cat Py)              
PTHTSPAR  DIM       100    100      446   Spare variable                     
.
.End of Record                      546  
.
.  redefine form fields from key
.  -----------------------------
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
PTHTTRN1   FORM         6             9      TRANSACTION NUMBER PART 1
.
