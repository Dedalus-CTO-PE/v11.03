. V10.03.01 10/11/2011 ML C-249242 File changes for v10.03 (ex Spare)           
. V10.02.01 03/10/2011 JT C-249242 Added NZEXRREF & NZEXCRST (in Spare)         
. V9.08.015 02/08/2007 JT                                                       
. *----------------------------------------------------------------------
. * Include Name  :   NZPEXTFD.INC
. *
. * Function      :   File Def'n Include for New Zealand Private                
. *                   G/L Extract Table - NZ Private     
. *
. * File Type     :   SQL
. *
. * File Name     :   nzpextaf.dat
. *
. * Index Values  :   KEY49   KEY30   KEY30   KEY30                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
NZPEXTA1   IFILE    SQL, FIXED=330, KEY="D1-19,20-22,157-161,23-30,31-38,39-44" 
NZPEXTA2   IFILE    SQL, FIXED=330, KEY="D23-30,31-38,157-161,20-22,39-44"      
NZPEXTA3   IFILE    SQL, FIXED=330, KEY="D157-161,20-22,23-30,31-38,39-44"      
NZPEXTA4   IFILE    SQL, FIXED=330, KEY="D20-22,157-161,23-30,31-38,39-44"      
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
NZEXBTID  DIM       19     19       1     Batch Id                           
.                                         (HTXXXccyymmddhhmmss)                
.                                         HT - Fix chars                       
.                                         XXX - Hospital Code                  
NZEXHCOD  DIM       3      3        20    Hospital Code                      
NZEXADMN  DIM       8      8        23    Admission Number                   
NZEXINVN  DIM       8      8        31    Invoice Number                     
NZEXTRNO  DIM       6      6        39    Debtor Transaction Number          
NZEXURNO  DIM       8      8        45    U/R Number                         
NZEXSYST  DIM       1      1        53    System                             
.                                         1 = Emergency                        
.                                         2 = Outpatient                       
.                                         3 = Inpatient                        
NZEXRTYP  FORM      2      2        54    Record type                        
.                                         1 = Accommodation                    
.                                         2 = Theatre Charges                  
.                                         3 = Fees Invoices Charges (Misc Item)
.                                         4 = Procedure/Doctors Fees           
.                                         5 = Cash Receipt (Payment against Inv)
.                                         6 = Journal Entry                    
.                                         7 = Discount/Rounding                
.                                         8 = GST(Total amount for 1 invoice)  
NZEXDESC  DIM       20     20       56    Item Description                   
NZEXTDAT  DIM       8      8        76    Invoice/Payment/Journal Date       
NZEXRCNO  DIM       12     12       84    Receipt/Payment Number             
.                                         (rectype=5) - Credit Note number     
NZEXPREF  DIM       17     17       96    Payment Reference Number           
.                                          - (rectype=5)                       
.                                         - Rev.Breakdown code(rec.type=4)     
NZEXPMTH  DIM       1      1        113   Payment Method (record type=5)     
.                                         1 For a Cash Payment                 
.                                         2 For a Cheque Payment               
.                                         3 For a Credit Card Payment          
.                                         4 For a Merchant Card Payment        
.                                         5 For a Direct Credit Payment        
NZEXMCTY  DIM       3      3        114   Merchant Card Type (Catg=CR)       
NZEXCOMS  FORM      3.2    4        117   Merchant Card Commission percentage
NZEXGSTC  DIM       6      6        121   GST Code                           
NZEXBNAM  DIM       30     30       127   Bill Name (PRFA/Payee/Drawer)      
NZEXGLBT  DIM       5      5        157   G/L Batch Number                   
NZEXCACC  DIM       14     14       162   General Ledger Credit Account      
NZEXCAMT  FORM      12.2   8        176   Credit Amount                      
NZEXDACC  DIM       14     14       184   General Ledger Debit Account       
.                                         - for Debtor Control line            
.                                             (Double entry for each type rec.)
NZEXDAMT  FORM      12.2   8        198   Debit Amount                       
NZEXCDAT  DIM       8      8        206   Date Record Created/Added(ccyymmdd)
NZEXCTIM  DIM       8      8        214   Time Record Created/Added(hh:mm:ss)
NZEXCUID  DIM       10     10       222   WEB User ID Created/Added(websecaf)
NZEXRREF  DIM       40     40       232   Receipt Reference (receipt record) 
.                                         or Procedure Code for Proc./Itm record
NZEXCRST  DIM       1      1        272   Credit Note status                 
.                                         1=Full 2=Crd by itm                  
NZEXSPAR  DIM       57     57       273   Spare variable                     
.
.End of Record                      330  
.
