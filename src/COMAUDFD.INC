. V11.01.01 10/01/2022 JT C-0209320 Fixed up Index 4 to include Date Transferred
. V11.01.01 02/03/2021 TN C-0309320 Created FD
. *----------------------------------------------------------------------
. * Include Name  :   COMAUDFD.INC
. *
. * Function      :   File Def'n Include for Common                             
. *                   Transferred Deposit Audit Table    
. *
. * File Type     :   SQL
. *
. * File Name     :   comaudaf.dat
. *
. * Index Values  :   KEY33   KEY33   KEY41   KEY41                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
COMAUDA1   IFILE    SQL, FIXED=160, KEY="U1-12,13-17,18-25,26-33"
COMAUDA2   IFILE    SQL, FIXED=160, KEY="U1-12,18-25,26-33,13-17"
COMAUDA3   IFILE    SQL, FIXED=160, KEY="U34-41,1-12,18-25,26-33,13-17"
COMAUDA4   IFILE    SQL, FIXED=160, KEY="U18-25,26-33,34-41,1-12,13-17"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CMAURECN  DIM       12     12       1     Receipt Number                     
CMAUTCNT  DIM       5      5        13    Transaction Count                  
CMAUTDAT  DIM       8      8        18    Date Deposit Transferred (CCYYMMDD)
CMAUTTIM  DIM       8      8        26    Time Deposit Transferred (hh:mm:ss)
CMAUURNO  DIM       8      8        34    Patient U/R No.                    
CMAUFADM  DIM       8      8        42    Visit Number Deposit Transferred   
.                                         From                                 
CMAUTADM  DIM       8      8        50    Visit Number Deposit Transferred To
CMAUFPRA  DIM       6      6        58    Medical Practice Deposit           
.                                         Transferred From                     
CMAUTPRA  DIM       6      6        64    Medical Practice Deposit           
.                                         Transferred To                       
CMAUFSDR  DIM       10     10       70    Service Doctor From                
CMAUTSDR  DIM       10     10       80    Service Doctor To                  
CMAUFDTY  DIM       3      3        90    Deposit Type From (Cat DP)         
CMAUTDTY  DIM       3      3        93    Deposit Type to (Cat DP)           
CMAUFVTY  DIM       1      1        96    Visit Type From                    
.                                         1 = EMERGENCY                        
.                                         2 = OUTPATIENT                       
.                                         3 = INPATIENT                        
.                                         4 = PRIVATE PRACTICE                 
CMAUTVTY  DIM       1      1        97    Visit Type To                      
.                                         1 = EMERGENCY                        
.                                         2 = OUTPATIENT                       
.                                         3 = INPATIENT                        
.                                         4 = PRIVATE PRACTICE                 
CMAUFREG  DIM       3      3        98    Register From                      
CMAUTREG  DIM       3      3        101   Register To                        
CMAUCUID  DIM       10     10       104   Web User Id Created (websecaf)     
CMAUSPAR  DIM       46     46       114   Spare Variable                     
.
.End of Record                      160  
.
