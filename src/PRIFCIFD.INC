. V10.13.01 25/07/2018 TNG C-0848506 Extended PRFCSDOC/PRFCRDOC from 6 to 10 cha
. V9.03.002 26/03/2004 LV  Added Credit GST Amount                              
. V9.03.001 24/03/2004 LV  Removed Reason for Credit Note field                 
. V9.03.000 18/03/2004 LV  Created new                                          
. *----------------------------------------------------------------------
. * Include Name  :   PRIFCIFD.INC
. *
. * Function      :   File Def'n Include for Private Practice                   
. *                   Fully Credited Invoices Table      
. *
. * File Type     :   SQL
. *
. * File Name     :   prifciaf.dat
. *
. * Index Values  :   KEY32   KEY33   KEY33                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PRIFCIA1   IFILE    SQL, FIXED=368, KEY="U1-8,9-10,19-26,27-32,33-40"
PRIFCIA2   IFILE    SQL, FIXED=368, KEY="U1-8,9-10,19-26,198-198,27-32,33-40"
PRIFCIA3   IFILE    SQL, FIXED=368, KEY="U33-40,1-8,9-10,19-26,198-198,27-32"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRFCDEBT  DIM       8      8        1     Debtor Number                      
PRFCSCAN  DIM       2      2        9     Scan Flag                          
.                                         0-Debtor                             
.                                         1-UR Number                          
PRFCUNIQ  DIM       8      8        11    Unique Number                      
PRFCINVN  DIM       8      8        19    Invoice Number                     
PRFCTRAN  DIM       6      6        27    Transaction Number                 
PRFCCRNO  DIM       8      8        33    Credit Note Number                 
PRFCCRDT  DIM       8      8        41    Credit Note Date                   
PRFCIAMT  FORM      12.2   8        49    Total Amount of Invoice            
PRFCCAMT  FORM      12.2   8        57    Total Amount of Credit             
PRFCTRDT  DIM       8      8        65    Date of Transaction                
PRFCTRTM  DIM       6      6        73    Time of Transaction                
PRFCDESC  DIM       30     30       79    Description                        
PRFCMPRA  DIM       6      6        109   Medical Practice Code              
PRFCSDOC  DIM       10     10       115   Service Doctor                     
PRFCNUMS  FORM      5      4        125   Number of Services                 
PRFCRDOC  DIM       10     10       129   Referring Doctor                   
PRFCRDET  DIM       50     50       139   Referring Details                  
PRFCCLMC  DIM       3      3        189   Claim Code                         
PRFCPIND  DIM       3      3        192   Patient Indicator                  
PRFCMSGC  DIM       3      3        195   Message Code                       
DPRFCRTY  DIM       1      1        198   Record Type                        
.                                         1-Item                               
.                                         2-N/A (Cash Receipt)                 
.                                         3-Journals                           
PRFCIFLG  FORM      2      2        199   Item/Receipt Flag                  
.                                         For Items                            
.                                         0-MBS                                
.                                         1-AMA                                
.                                         For Receipts                         
.                                         1-From Patient                       
.                                         2-From Health Fund                   
.                                         3-From Insurance Co                  
.                                         4-From Govt Dept                     
PRFCINUM  DIM       9      9        201   Item Number                        
.                                         For Items                            
.                                         - Item Number                        
.                                         For Receipts                         
.                                         - 1st 6 char of Health Fund, etc     
PRFCSUBI  DIM       3      3        210   Sub-item Number                    
PRFCMSCG  DIM       3      3        213   Miscellaneous Group                
PRFCBNUM  DIM       8      8        216   Batch Number                       
PRFCUDF1  DIM       3      3        224   User Defined Field 1               
PRFCUDF2  DIM       3      3        227   User Defined Field 2               
PRFCUDF3  DIM       3      3        230   User Defined Field 3               
PRFCUDF4  DIM       3      3        233   User Defined Field 4               
PRFCADMC  DIM       3      3        236   Admission Class                    
PRFCRDAT  DIM       8      8        239   Referral Date                      
PRFCITAM  FORM      12.2   8        247   Item Amount                        
PRFCOPCD  DIM       20     20       255   Operation Codes                    
PRFCMSFL  FORM      1      2        275   Multiple Service Code Flag         
.                                         0-No                                 
.                                         1-Yes                                
PRFCTRFR  DIM       1      1        277   Transferred to G/L                 
.                                         0-No                                 
.                                         1-Yes                                
PRFCMAFN  DIM       10     10       278   Medicare Assign Form Number        
PRFCGSTA  FORM      1      2        288   GST Applicable                     
.                                         0-No                                 
.                                         1-Yes                                
PRFCGSTC  DIM       3      3        290   GST Code                           
PRFCGAMT  FORM      12.2   8        293   GST Amount                         
PRFCCGST  FORM      12.2   8        301   Credit GST Amount                  
PRFCRPRD  DIM       3      3        309   Referral Period (CAT RF)           
PRFCUPDT  DIM       8      8        312   Date Record Updated                
PRFCUPTM  DIM       8      8        320   Time Record Updated                
PRFCWUID  DIM       10     10       328   WEB User ID                        
PRFCSPAR  DIM       30     30       338   Spare                              
.
.End of Record                      368  
.
.Redefine Key Variables
.----------------------
PRFCRTYP  FORM      1    
