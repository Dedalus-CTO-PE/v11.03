. V10.01.01 12/01/2011 JP  Increased full description length CAR 234014         
. V9.08.014 10/01/2007                                                          
. V9.08.017 10/01/2007                                                          
. *----------------------------------------------------------------------
. * Include Name  :   NZPSPRFD.INC
. *
. * Function      :   File Def'n Include for New Zealand Private                
. *                   NZ Priv Subsequence Proc/Funder Det
. *
. * File Type     :   SQL
. *
. * File Name     :   nzpspraf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
NZPSPRA1   IFILE    SQL, FIXED=496, KEY="U1-8,31-33"                            
NZPSPRA2   IFILE    SQL, FIXED=496, KEY="U1-8,34-39,31-33"                      
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
NZSPADMN  DIM       8      8        1     Admission Number                   
NZSPCLMN  DIM       3      3        9     Claim Code (Cat CL)                
NZSPSURG  DIM       10     10       12    Surgeon/Consultant (pmshcpaf)      
NZSPPROC  DIM       9      9        22    Procedure Code (patitemn)          
NZSPUNIQ  DIM       3      3        31    Counter/Unique Number              
NZSPCNTR  DIM       6      6        34    Contract/Fund/Expected Payer       
NZSPCPRC  DIM       9      9        40    Contract Procedure Code (patcmcaf) 
NZSPPRIM  FORM      1      2        49    Primary Procedure 1=Yes            
.                                         0=Bill sep 2=Include with primary    
NZSPANAE  DIM       10     10       51    Anaesthetist                       
NZSPPDES  DIM       80     80       61    Full Procedure Description         
NZSPICAP  FORM      1      2        141   RP Invoice Capture Status          
NZSPPIND  FORM      1      2        143   Planned/Performed Ind              
.                                         0=Planned 1=Performed 2=Not Performed
NZSPPINS  FORM      1      2        145   Patient Insurance 1=Yes 0=No       
NZSPINSR  DIM       3      3        147   Insurer (Catg I)                   
NZSPAPRV  DIM       20     20       150   Approval Number                    
NZSPAPSI  FORM      1      2        170   Approval Sighted 1=Yes 0=No        
NZSPCLNO  DIM       20     20       172   Claim Number                       
NZSPAPNT  DIM       30     30       192   Approval Notes                     
NZSPCMNT  DIM       30     30       222   Comments                           
NZSPTDUR  FORM      5      4        252   Chargeable Theatre Duration-Minutes
NZSPTFEE  FORM      12.2   8        256   Theatre Fee                        
NZSPFFEE  FORM      14.2   9        264   Fixed Fee                          
NZSPHPAY  FORM      14.2   9        273   Funder Contribution/Funder to pay  
NZSPCPAY  FORM      14.2   9        282   Co-payment                         
NZSPFADJ  FORM      14.2   9        291   Fixed Fee Adjustment               
NZSPHADJ  FORM      14.2   9        300   Funder Contr./Funder to pay Adjustm
NZSPCADJ  FORM      14.2   9        309   Co-Payment Adjustment              
NZSPUDF1  DIM       3      3        318   User Defined 1 (Cat UJ)            
NZSPUDF2  DIM       3      3        321   User Defined 2 (Cat UK)            
NZSPCDAT  DIM       8      8        324   Date Record Created/Added(ccyymmdd)
NZSPCTIM  DIM       8      8        332   Time Record Created/Added(hh:mm:ss)
NZSPCUID  DIM       10     10       340   WEB User ID Created/Added(websecaf)
NZSPUDAT  DIM       8      8        350   Date Record Updated (ccyymmdd)     
NZSPUTIM  DIM       8      8        358   Time Record Updated (hh:mm:ss)     
NZSPUUID  DIM       10     10       366   WEB User ID Updated (websecaf)     
NZSPADTE  DIM       8      8        376   Approval Date                      
NZSPCONT  DIM       1      1        384   Maximum funder contribution 1=Yes  
NZSPINVD  DIM       1      1        385   Invoiced - 0=No Invoice Raised     
.                                         1=Patient Invoice raised/Not Required
.                                         2=Funder Invoice raised/Not Required 
.                                         3=All Invoices raised                
NZSPUNTH  DIM       10     10       386   Unique theatre booking ID          
NZSPSPAR  DIM       100    100      396   Spare                              
.
.End of Record                      496  
.
