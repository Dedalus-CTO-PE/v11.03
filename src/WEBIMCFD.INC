. V11.00.02 25/11/2020 PVL C-0898361 Added Processing status comment
.                                    Added Health Fund Unprocessed
.                                    status comment
. V11.00.01 11/11/2020 PVL C-0898361 Added Index 8                              
. V11.00.01 19/10/2020 PVL C-0898361 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBIMCFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices IMCW Table             
. *
. * File Type     :   SQL
. *
. * File Name     :   webimcaf.dat
. *
. * Index Values  :   KEY35   KEY16   KEY24   KEY24   KEY35   KEY40   KEY45  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBIMCA1   IFILE    SQL, FIXED=291, KEY="U1-3,4-5,6-11,12-19,20-27,28-35"
WEBIMCA2   IFILE    SQL, FIXED=291, KEY="U20-27,28-35"
WEBIMCA3   IFILE    SQL, FIXED=291, KEY="U28-35,12-19,20-27"
WEBIMCA4   IFILE    SQL, FIXED=291, KEY="U12-19,20-27,28-35"
WEBIMCA5   IFILE    SQL, FIXED=291, KEY="U1-3,36-43,12-19,20-27,28-35"
WEBIMCA6   IFILE    SQL, FIXED=291, KEY="U60-83,20-27,28-35"
WEBIMCA7   IFILE    SQL, FIXED=291, KEY="U143-152,1-3,4-5,6-11,12-19,20-27,28-35"
WEBIMCA8   IFILE    SQL, FIXED=291, KEY="U4-5,6-11,12-19,20-27,28-35,1-3"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBIMHOSP  DIM       3      3        1     Hospital ID (pathspaf)             
DWBIMFLG  DIM       2      2        4     WebServices Status Flag            
.                                         ibaPAS Processing                    
.                                            0 = Not Sent                      
.                                            1 = Error (PAS validation)        
.                                            2 = Extracted                     
.                                         WebServices - Processing             
.                                            3 = Error (SA validation)         
.                                            4 = Posted                        
.                                            5 = Received
.                                            6 = Medicare Unverified           
.                                            7 = Medicare Verified             
.                                            8 = Health Fund Unverified        
.                                            9 = Health Fund Verified          
.                                           10 = Medicare Assessing            
.                                           11 = Health Fund Assessing         
.                                         WebServices - Ready                  
.                                           12 = Medicare Rejected             
.                                           13 = Health Fund Rejected          
.                                           14 = Health Fund Unprocessed
.                                           15 = Requested Delete              
.                                           16 = Assessing Complete            
.                                         WebServices - Reported               
.                                           17 = MC Rejected - Reported        
.                                           18 = HF Rejected - Reported        
.                                           19 = Complete - Reported           
.                                         WebServices - Remittance             
.                                           20 = Reported                      
.                                           21 = Closed                        
WBIMHFND  DIM       6      6        6     Health Fund Code (patfn1af)        
WBIMUNIQ  DIM       8      8        12    Unique Identifier                  
WBIMINVN  DIM       8      8        20    Invoice Number                     
WBIMBATN  DIM       8      8        28    Batch Number                       
WBIMURNO  DIM       8      8        36    U/R Number                         
WBIMPBAT  DIM       8      8        44    Previous Batch Number              
.                                         (Resubmission from)                  
WBIMNBAT  DIM       8      8        52    Next Batch Number                  
.                                         (Resubmission to)                    
WBIMTRID  DIM       24     24       60    Claim Transaction Id               
WBIMEETP  DIM       1      1        84    WebServices extract type           
.                                         0 - Health Fund                      
.                                         1 - Health Fund & Medicare           
.                                         2 - Medicare Only                    
WBIMAMTC  FORM      12.2   8        85    Amount Claimed                     
WBIMAMFP  FORM      12.2   8        93    Amount Paid by Health Fund         
WBIMAMMP  FORM      12.2   8        101   Amount Paid by Medicare            
WBIMPDAT  DIM       8      8        109   Payment Date (ccyymmdd)            
WBIMSTAT  DIM       2      2        117   Closed Status                      
.                                         Spaces - not closed                  
.                                         " 0" = Closed                        
.                                         " 1" = Closed with Write Off         
.                                         " 2" = Closed with Payment           
.                                         " 3" = Closed with WO & Pymt         
WBIMFTID  DIM       24     24       119   Fund Report Transaction Id         
WBIMPRAC  DIM       10     10       143   Medical Practice                   
WBIMMSID  DIM       36     36       153   Message Id                         
WBIMCTYP  DIM       2      2        189   IMCW Type                          
.                                         AG = Agreements                      
.                                         SC = Schemes                         
.                                         MB = Billing Agent, Medicare and Priv
.                                          Health                              
.                                         MO = Medicare Only                   
WBIMSPAR  DIM       100    100      191   Spare Variable                     
.
.End of Record                      291  
.
. Redefine FORM fields from key
. -----------------------------
WBIMFLAG  FORM      2
