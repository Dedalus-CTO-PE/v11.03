. ***********************************************************************
. *                                                                     *
. *  Include Name  :   PMSQDRFD.INC                                     *
. *                                                                     *
. *  Function      :   Queuing Doctor Details Message File              *
. *                                                                     *
. *  File Type     :   SQL                                              *
. *                                                                     *
. *  File Name     :   pmsqdraf.dat                                     *
. *                                                                     *
. *  Modifications :                                                    *
. *       V9.05.B00 23/02/2006  Mike Laming   CAR 81335                 *
. *                 FD Created                                          *
. ***********************************************************************
.
.Data File Definition
.--------------------
PMSQDRA1   IFILE SQL, FIXED=1771, KEY="U1-20"
.
.Name      Type   Length  Physical Start Description
.----      ----   ------  -------- ----- -----------
DPMQRMES   DIM       20     20       1     Message Id
.
.                   PMSHCPFD Variables
.
.PMHCHCPC  DIM       10     10       21    HCP Code                           
.PMHCHCPT  DIM       2      2        31    Type of HCP D=Dentist G=GP         
.PMHCTITL  DIM       10     10       33    HCP Title                          
.PMHCGNAM  DIM       35     35       43    HCP Given Names                    
.PMHCSNAM  DIM       35     35       78    HCP Surname                        
.PMHCINIT  DIM       5      5        113   HCP Initials                       
.PMHCGNDR  DIM       1      1        118   HCP Gender (M,F,I,U)               
.PMHCDTOB  DIM       8      8        119   HCP Date of Birth (ccyymmdd)       
.PMHCSPC1  DIM       3      3        127   HCP Speciality 1 (Cat DT)          
.PMHCSPD1  DIM       8      8        130   HCP Speciality Date 1 (ccyymmdd)   
.PMHCSPC2  DIM       3      3        138   HCP Speciality 2 (Cat DT)          
.PMHCSPD2  DIM       8      8        141   HCP Speciality Date 2 (ccyymmdd)   
.PMHCSPC3  DIM       3      3        149   HCP Speciality 3 (Cat DT)          
.PMHCSPD3  DIM       8      8        152   HCP Speciality Date 3 (ccyymmdd)   
.PMHCSPC4  DIM       3      3        160   HCP Speciality 4 (Cat DT)          
.PMHCSPD4  DIM       8      8        163   HCP Speciality Date 4 (ccyymmdd)   
.PMHCSPC5  DIM       3      3        171   HCP Speciality 5 (Cat DT)          
.PMHCSPD5  DIM       8      8        174   HCP Speciality Date 5 (ccyymmdd)   
.PMHCRCPT  DIM       25     25       182   HCP Receptionist's Name            
.PMHCADR1  DIM       60     60       207   HCP Surgery Address Line 1         
.PMHCADR2  DIM       60     60       267   HCP Surgery Address Line 2         
.PMHCADR3  DIM       60     60       327   HCP Surgery Address Line 3         
.PMHCADR4  DIM       60     60       387   HCP Surgery Address Line 4         
.PMHCADR5  DIM       60     60       447   HCP Surgery Address Line 5         
.PMHCADR6  DIM       60     60       507   HCP Surgery Address Line 6         
.PMHCPOST  DIM       8      8        567   HCP Surgery PostCode               
.PMHCSTAT  DIM       4      4        575   HCP State                          
.PMHCSEML  DIM       80     80       579   HCP Surgery Email Address          
.PMHCSTEL  DIM       20     20       659   Surgery Telephone                  
.PMHCPAGR  DIM       20     20       679   HCP Pager Telephone                
.PMHCPAGN  DIM       20     20       699   HCP Pager Number                   
.PMHCAHP1  DIM       25     25       719   Associated HCP 1                   
.PMHCAHP2  DIM       25     25       744   Associated HCP 2                   
.PMHCAHP3  DIM       25     25       769   Associated HCP 3                   
.PMHCAHP4  DIM       25     25       794   Associated HCP 4                   
.PMHCAHP5  DIM       25     25       819   Associated HCP 5                   
.PMHCPRV1  DIM       10     10       844   Provider Number 1 - Reg. No. NZ    
.PMHCPRV2  DIM       10     10       854   Provider Number 2 - Prev Reg. No NZ
.PMHCPRV3  DIM       10     10       864   Provider Number 3                  
.PMHCPRV4  DIM       10     10       874   Provider Number 4                  
.PMHCPRV5  DIM       10     10       884   Provider Number 5                  
.PMHCHTEL  DIM       20     20       894   HCP Home Telephone                 
.PMHCHAD1  DIM       60     60       914   HCP Home Address Line 1            
.PMHCHAD2  DIM       60     60       974   HCP Home Address Line 2            
.PMHCHAD3  DIM       60     60       1034  HCP Home Address Line 3            
.PMHCHAD4  DIM       60     60       1094  HCP Home Address Line 4            
.PMHCHAD5  DIM       60     60       1154  HCP Home Address Line 5            
.PMHCHAD6  DIM       60     60       1214  HCP Home Address Line 6            
.PMHCHPCD  DIM       8      8        1274  HCP Home Post Code                 
.PMHCHEML  DIM       80     80       1282  HCP Home Email Address             
.                                          NZ - Healthlink Mailbox
.PMHCDFAC  DIM       8      8        1362  Date of First Accred. (ccyymmdd)   
.PMHCDLAC  DIM       8      8        1370  Date of Last Accred. (ccyymmdd)    
.PMHCYACC  FORM      2      2        1378  Years Of Accreditation             
.PMHCATYP  DIM       3      3        1380  Accreditation Type (Cat AT)        
.PMHCHHCP  FORM      3      3        1383  H.C.S. HCP Code                    
.PMHCOSLV  DIM       3      3        1386  Operating Supervision Level (cat DL
.PMHCHCST  FORM      2      2        1389  HCP Status                         
.                                          0 - Attending Doctor
.                                          1 - Referring Doctor
.                                          2 - Attending & Referring Doctor
.                                          3 - GP
.                                          4 - Attending Doctor & GP
.                                          5 - Referring Doctor & GP
.                                          6 - Attending, Referring & GP
.                                          7 - Other
.                                          8 - Other Attending
.                                          9 - Other Referring
.                                         10 - Other Attending & Referring
.PMHCHCSD  DIM       8      8        1391  HCP Status Date (ccyymmdd)         
.PMHCFAXN  DIM       20     20       1399  HCP's Fax Number                   
.PMHCHFXN  DIM       20     20       1419  HCP's Home Fax Number              
.PMHCMOBN  DIM       20     20       1439  HCP's Mobile Phone Number          
.PMHCCRDC  DIM       5      5        1459  Creditor Code (apsmasaf)           
.PMHCWAHC  DIM       10     10       1464  WA HDP HCP Code                    
.PMHCMRBN  DIM       10     10       1474  Medical Registration Board Number  
.PMHCNHSN  DIM       10     10       1484  N.H.S. Proscriber Number           
.PMHCUDF1  DIM       3      3        1494  User Defined Field 1 (Cat R5)      
.PMHCUDF2  DIM       3      3        1497  User Defined Field 2 (Cat R6)      
.PMHCUDF3  DIM       3      3        1500  User Defined Field 3 (Cat R7)      
.PMHCUDF4  DIM       3      3        1503  User DEfined Field 4 (Cat R8)      
.PMHCUDF5  DIM       3      3        1506  User Defined Field 5 (Cat R9)      
.PMHCUYN1  DIM       1      1        1509  User def. Y/N field 1 (0=NO,1=YES) 
.PMHCUYN2  DIM       1      1        1510  User def. Y/N field 2 (0=NO,1=YES) 
.PMHCUYN3  DIM       1      1        1511  User def. Y/N field 3 (0=NO,1=YES) 
.PMHCUYN4  DIM       1      1        1512  User def. Y/N field 4 (0=NO,1=YES) 
.PMHCUYN5  DIM       1      1        1513  User def. Y/N field 5 (0=NO,1=YES) 
.PMHCINSC  DIM       6      6        1514  Insurance Code (patin1af)          
.PMHCIPLN  DIM       20     20       1520  Insurance Policy Number            
.PMHCIDTF  DIM       8      8        1540  Insurance Date From (ccyymmdd)     
.PMHCIDTT  DIM       8      8        1548  Insurance Date To (ccyymmdd)       
.PMHCMPGN  DIM       20     20       1556  MPG Certificate Number             
.PMHCAPCI  DIM       1      1        1576  APC (0=NO,1=YES) - NZ              
.PMHCREGT  DIM       3      3        1577  Registration Type (Cat HR) - NZ    
.PMHCRGDF  DIM       8      8        1580  Reg. Date From - Gen Reg Date (NZ) 
.PMHCRGDT  DIM       8      8        1588  Reg. Date To - Gen Reg Date (NZ)   
.PMHCPRDF  DIM       8      8        1596  Probation. Reg. Date From ccyymmdd 
.PMHCPRDT  DIM       8      8        1604  Probation. Reg. Date To ccyymmdd   
.PMHCTSDF  DIM       8      8        1612  Temp. Start Date From (ccyymmdd)   
.PMHCTFDT  DIM       8      8        1620  Temp. Finish Date To (ccyymmdd)    
.PMHCVISD  DIM       8      8        1628  Visa Date (ccyymmdd)               
.PMHCPRFC  DIM       3      3        1636  HCP's Preferd Communication (Cat CZ
.PMHCPRFN  DIM       30     30       1639  HCP's Preferred Name               
.PMHCABNN  DIM       11     11       1669  ABN Number                         
.PMHCUPDF  DIM       1      1        1680  Update Flag M=manual, A=Automatic  
.PMHCPRMK  DIM       1      1        1681  Processed Record Marker 1=Processed
.PMHCSTTS  DIM       1      1        1682  HCP rec status (0=Active/1=Inactive
.PMHCDLMI  DIM       8      8        1683  Date Last Made Inactive (ccyymmdd) 
.PMHCDLMA  DIM       8      8        1691  Date Last Made Active (ccyymmdd)   
.PMHCCDTE  DIM       8      8        1699  Date Record Created (ccyymmdd)     
.PMHCCTIM  DIM       8      8        1707  Time Record Created (hh:mm:ss)     
.PMHCWEBC  DIM       10     10       1715  WEB User Id creator (websecaf)     
.PMHCLUPD  DIM       8      8        1725  Last Update Date (ccyymmdd)        
.PMHCLUPT  DIM       8      8        1733  Last Update Time (hh:mm:ss)        
.PMHCWEBU  DIM       10     10       1741  WEB User Id updated (websecaf)     
.PMHCSLGP  DIM       1      1        1751  Show Local GP on PMI (plocdoc)     
.                                          0=No 1=Yes
PMQRSPAR   DIM       19     19       1752  Spare Variable                     
.
.End of Record                       1771 
.
.Redefine Key Variables
.----------------------
PMQRMESI   FORM      20
