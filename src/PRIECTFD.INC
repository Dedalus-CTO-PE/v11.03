. V11.02.01 05/04/2022 JJ 0917394 Added PRECSTAT='4' Transferred to webimcaf
. V11.00.01 17/04/2020 PVL C-0874025 Added PRECPRAC and index 7                 
. V10.08.01 28/07/2016 SA C-0294177 Created File Definition
. *----------------------------------------------------------------------
. * Include Name  :   PRIECTFD.INC
. *
. * Function      :   File Def'n Include for Private Practice                   
. *                   Eclipse IMC Claim Transactions     
. *
. * File Type     :   SQL
. *
. * File Name     :   priectaf.dat
. *
. * Index Values  :   KEY35   KEY16   KEY24   KEY24   KEY35   KEY40   KEY45  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PRIECTA1   IFILE    SQL, FIXED=193, KEY="U1-3,4-5,6-11,12-19,20-27,28-35"
PRIECTA2   IFILE    SQL, FIXED=193, KEY="U20-27,28-35"
PRIECTA3   IFILE    SQL, FIXED=193, KEY="U28-35,12-19,20-27"
PRIECTA4   IFILE    SQL, FIXED=193, KEY="U12-19,20-27,28-35"
PRIECTA5   IFILE    SQL, FIXED=193, KEY="U1-3,36-43,12-19,20-27,28-35"
PRIECTA6   IFILE    SQL, FIXED=193, KEY="U60-83,20-27,28-35"
PRIECTA7   IFILE    SQL, FIXED=193, KEY="U143-152,1-3,4-5,6-11,12-19,20-27,28-35"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRECHOSP  DIM       3      3        1     Hospital ID (pathspaf)             
DPRECFLG  DIM       2      2        4     Eclipse Status Flag                
.                                         ibaPAS Processing                    
.                                            0 = Not Sent                      
.                                            1 = Error (PAS validation)        
.                                            2 = Extracted                     
.                                         Eclipse - Processing                 
.                                            3 = Error (SA validation)         
.                                            4 = Received                      
.                                            5 = Medicare Unverified           
.                                            6 = Medicare Verified             
.                                            7 = Health Fund Unverified        
.                                            8 = Health Fund Verified          
.                                            9 = Medicare Assessing            
.                                           10 = Health Fund Assessing         
.                                         Eclipse - Ready                      
.                                           11 = Medicare Rejected             
.                                           12 = Health Fund Rejected          
.                                           13 = Requested Delete              
.                                           14 = Assessing Complete            
.                                         Eclipse - Reported                   
.                                           15 = MC Rejected - Reported        
.                                           16 = HF Rejected - Reported        
.                                           17 = Complete - Reported           
.                                         Eclipse - Remittance                 
.                                           18 = Reported                      
.                                           19 = Closed                        
PRECHFND  DIM       6      6        6     Health Fund Code (patfn1af)        
PRECUNIQ  DIM       8      8        12    Unique Identifier                  
PRECINVN  DIM       8      8        20    Invoice Number                     
PRECBATN  DIM       8      8        28    Batch Number                       
PRECURNO  DIM       8      8        36    U/R Number                         
PRECPBAT  DIM       8      8        44    Previous Batch Number              
.                                         (Resubmission from)                  
PRECNBAT  DIM       8      8        52    Next Batch Number                  
.                                         (Resubmission to)                    
PRECTRID  DIM       24     24       60    Claim Transaction Id               
PRECEETP  DIM       1      1        84    Eclipse extract type               
.                                         0 - Health Fund                      
.                                         1 - Health Fund & Medicare           
.                                         2 - Medicare Only                    
PRECAMTC  FORM      12.2   8        85    Amount Claimed                     
PRECAMFP  FORM      12.2   8        93    Amount Paid by Health Fund         
PRECAMMP  FORM      12.2   8        101   Amount Paid by Medicare            
PRECPDAT  DIM       8      8        109   Payment Date (ccyymmdd)            
PRECSTAT  DIM       2      2        117   Closed Status                      
.                                         Spaces - not closed                  
.                                         " 0" = Closed                        
.                                         " 1" = Closed with Write Off         
.                                         " 2" = Closed with Payment           
.                                         " 3" = Closed with WO & Pymt
.                                         " 4" = Transferred to webimcaf         
PRECFTID  DIM       24     24       119   Fund Report Transaction Id         
PRECPRAC  DIM       10     10       143   Medical Practice                   
PRECSPAR  DIM       40     40       153   Spare Variable                     
.
.End of Record                      193  
.
. Redefine FORM fields from key
. -----------------------------
PRECFLAG  FORM      2
