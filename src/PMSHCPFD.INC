. V11.00.01 16/04/2020 TN C-0889111 Added PMHCSMD1/2 from SPARE                 
. V10.13.01 17/10/2018 DS C-0854372 Added index 7                               
. V10.12.02 26/04/2018 EC C-0848318 Added index 5 and 6                         
. V10.12.01 08/01/2018 SA C-0825792 Added values 14 & 15 to PMHCHCST            
. V10.08.01 01/04/2016 SA C-0322540 Extended PMHCWWCN from DIM 8 to DIM 20      
. V10.05.01 17/07/2014 DN C-293595 Added PMHCWWCN, PMHCWWCE, PMHCWWCS.          
. V10.04.01 19/12/2013 AP C-294302 Moved PMHCNHTA out of SPARE                  
. V10.03.03 29/11/2012 PA C-244064 Added New Index on PMHCLDOC,PMHCHCPC         
. V10.03.02 17/07/2012 PA C-244064 Added NEHTA Identifier                       
. V10.03.01 12/02/2012 JP C-255142 Added HCP Types 11,12 and 13                 
. V10.02.01 06/06/2011 SA C-240692 Added PMHCLDOC, PMHCSDAT & PMHCEDAT          
. V10.01.01 09/02/2011 EC  Added PMHCAHC1 to PMHCAHC3  CAR 234598               
. V9.09.002 11/12/2007 EC  Added PMHCDEAC CAR 143977                            
. V9.09.001 29/08/2007 PV  Added PMHCEXML CAR 148637                            
. V9.08.001 01/12/2006 EC  Added PMHCPTYP CAR 126779                            
. V9.05.001 14/03/2006 EC  Added PMHCHOSS CAR 78533                             
. V9.04.003 27/10/2005 EC  Changed description of PMHCHEML CAR 79067            
. V9.04.002 24/08/2005 EC  Added PMHCSLGP CAR 70766                             
. V9.04.001 27/05/2005 DS  Added index 3                                        
. V5.10.003 26/10/2001 EC  Added new descriptions to HCP status                 
. V5.10.002 10/04/2001 EC  Created FD                                           
. V5.10.001 05/04/2001 SB  Created FD                                           
. V9.09.005 07/05/2008 JT  Added Common Person Number                           
. *----------------------------------------------------------------------
. * Include Name  :   PMSHCPFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Healthcare Profess was patgpcaf    
. *
. * File Type     :   SQL
. *
. * File Name     :   pmshcpaf.dat
. *
. * Index Values  :   KEY10   KEY80   KEY20   KEY16   KEY26   KEY26   KEY30  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSHCPA1   IFILE    SQL, FIXED=1883, KEY="U1-10"
PMSHCPA2   IFILE    SQL, FIXED=1883, KEY="U58-92,23-57,1-10"
PMSHCPA3   IFILE    SQL, FIXED=1883, KEY="U824-833,1-10"
PMSHCPA4   IFILE    SQL, FIXED=1883, KEY="U1760-1765,1-10"
PMSHCPA5   IFILE    SQL, FIXED=1883, KEY="U1679-1686,1687-1694,1-10"
PMSHCPA6   IFILE    SQL, FIXED=1883, KEY="U1705-1712,1713-1720,1-10"
PMSHCPA7   IFILE    SQL, FIXED=1883, KEY="U1536-1555,1-10"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMHCHCPC  DIM       10     10       1     HCP Code                           
PMHCHCPT  DIM       2      2        11    Type of HCP D=Dentist G=GP         
PMHCTITL  DIM       10     10       13    HCP Title                          
PMHCGNAM  DIM       35     35       23    HCP Given Names                    
PMHCSNAM  DIM       35     35       58    HCP Surname                        
PMHCINIT  DIM       5      5        93    HCP Initials                       
PMHCGNDR  DIM       1      1        98    HCP Gender (M,F,I,U)               
PMHCDTOB  DIM       8      8        99    HCP Date of Birth (ccyymmdd)       
PMHCSPC1  DIM       3      3        107   HCP Speciality 1 (Cat DT)          
PMHCSPD1  DIM       8      8        110   HCP Speciality Date 1 (ccyymmdd)   
PMHCSPC2  DIM       3      3        118   HCP Speciality 2 (Cat DT)          
PMHCSPD2  DIM       8      8        121   HCP Speciality Date 2 (ccyymmdd)   
PMHCSPC3  DIM       3      3        129   HCP Speciality 3 (Cat DT)          
PMHCSPD3  DIM       8      8        132   HCP Speciality Date 3 (ccyymmdd)   
PMHCSPC4  DIM       3      3        140   HCP Speciality 4 (Cat DT)          
PMHCSPD4  DIM       8      8        143   HCP Speciality Date 4 (ccyymmdd)   
PMHCSPC5  DIM       3      3        151   HCP Speciality 5 (Cat DT)          
PMHCSPD5  DIM       8      8        154   HCP Speciality Date 5 (ccyymmdd)   
PMHCRCPT  DIM       25     25       162   HCP Receptionist's Name            
PMHCADR1  DIM       60     60       187   HCP Surgery Address Line 1         
PMHCADR2  DIM       60     60       247   HCP Surgery Address Line 2         
PMHCADR3  DIM       60     60       307   HCP Surgery Address Line 3         
PMHCADR4  DIM       60     60       367   HCP Surgery Address Line 4         
PMHCADR5  DIM       60     60       427   HCP Surgery Address Line 5         
PMHCADR6  DIM       60     60       487   HCP Surgery Address Line 6         
PMHCPOST  DIM       8      8        547   HCP Surgery PostCode               
PMHCSTAT  DIM       4      4        555   HCP State                          
PMHCSEML  DIM       80     80       559   HCP Surgery Email Address          
PMHCSTEL  DIM       20     20       639   Surgery Telephone                  
PMHCPAGR  DIM       20     20       659   HCP Pager Telephone                
PMHCPAGN  DIM       20     20       679   HCP Pager Number                   
PMHCAHP1  DIM       25     25       699   Associated HCP 1                   
PMHCAHP2  DIM       25     25       724   Associated HCP 2                   
PMHCAHP3  DIM       25     25       749   Associated HCP 3                   
PMHCAHP4  DIM       25     25       774   Associated HCP 4                   
PMHCAHP5  DIM       25     25       799   Associated HCP 5                   
PMHCPRV1  DIM       10     10       824   Provider Number 1 - Reg. No. NZ    
PMHCPRV2  DIM       10     10       834   Provider Number 2 - Prev Reg. No NZ
PMHCPRV3  DIM       10     10       844   Provider Number 3                  
PMHCPRV4  DIM       10     10       854   Provider Number 4                  
PMHCPRV5  DIM       10     10       864   Provider Number 5                  
PMHCHTEL  DIM       20     20       874   HCP Home Telephone                 
PMHCHAD1  DIM       60     60       894   HCP Home Address Line 1            
PMHCHAD2  DIM       60     60       954   HCP Home Address Line 2            
PMHCHAD3  DIM       60     60       1014  HCP Home Address Line 3            
PMHCHAD4  DIM       60     60       1074  HCP Home Address Line 4            
PMHCHAD5  DIM       60     60       1134  HCP Home Address Line 5            
PMHCHAD6  DIM       60     60       1194  HCP Home Address Line 6            
PMHCHPCD  DIM       8      8        1254  HCP Home Post Code                 
PMHCHEML  DIM       80     80       1262  HCP Home Email Address             
.                                         NZ - Healthlink Mailbox              
PMHCDFAC  DIM       8      8        1342  Date of First Accred. (ccyymmdd)   
PMHCDLAC  DIM       8      8        1350  Date of Last Accred. (ccyymmdd)    
PMHCYACC  FORM      2      2        1358  Years Of Accreditation             
PMHCATYP  DIM       3      3        1360  Accreditation Type (Cat AT)        
PMHCHHCP  FORM      3      3        1363  H.C.S. HCP Code                    
PMHCOSLV  DIM       3      3        1366  Operating Supervision Level (cat DL
PMHCHCST  FORM      2      2        1369  HCP Status                         
.                                         0 - Attending Doctor                 
.                                         1 - Referring Doctor                 
.                                         2 - Attending & Referring Doctor     
.                                         3 - GP                               
.                                         4 - Attending Doctor & GP            
.                                         5 - Referring Doctor & GP            
.                                         6 - Attending, Referring & GP        
.                                         7 - Other                            
.                                         8 - Other Attending                  
.                                         9 - Other Referring                  
.                                         10 - Other Attending & Referring     
.                                         11 - Attending, GP & Other           
.                                         12 - Referring, GP & Other           
.                                         13 - Attending, Referring, GP & Other
.                                         14 - Nurse                           
.                                         15 - Nurse & Other                   
PMHCHCSD  DIM       8      8        1371  HCP Status Date (ccyymmdd)         
PMHCFAXN  DIM       20     20       1379  HCP's Fax Number                   
PMHCHFXN  DIM       20     20       1399  HCP's Home Fax Number              
PMHCMOBN  DIM       20     20       1419  HCP's Mobile Phone Number          
PMHCCRDC  DIM       5      5        1439  Creditor Code (apsmasaf)           
PMHCWAHC  DIM       10     10       1444  WA HDP HCP Code                    
PMHCMRBN  DIM       10     10       1454  Medical Registration Board Number  
PMHCNHSN  DIM       10     10       1464  N.H.S. Proscriber Number           
PMHCUDF1  DIM       3      3        1474  User Defined Field 1 (Cat R5)      
PMHCUDF2  DIM       3      3        1477  User Defined Field 2 (Cat R6)      
PMHCUDF3  DIM       3      3        1480  User Defined Field 3 (Cat R7)      
PMHCUDF4  DIM       3      3        1483  User Defined Field 4 (Cat R8)      
PMHCUDF5  DIM       3      3        1486  User Defined Field 5 (Cat R9)      
PMHCUYN1  DIM       1      1        1489  User def. Y/N field 1 (0=NO,1=YES) 
PMHCUYN2  DIM       1      1        1490  User def. Y/N field 2 (0=NO,1=YES) 
PMHCUYN3  DIM       1      1        1491  User def. Y/N field 3 (0=NO,1=YES) 
PMHCUYN4  DIM       1      1        1492  User def. Y/N field 4 (0=NO,1=YES) 
PMHCUYN5  DIM       1      1        1493  User def. Y/N field 5 (0=NO,1=YES) 
PMHCINSC  DIM       6      6        1494  Insurance Code (patin1af)          
PMHCIPLN  DIM       20     20       1500  Insurance Policy Number            
PMHCIDTF  DIM       8      8        1520  Insurance Date From (ccyymmdd)     
PMHCIDTT  DIM       8      8        1528  Insurance Date To (ccyymmdd)       
PMHCMPGN  DIM       20     20       1536  MPG Certificate Number             
PMHCAPCI  DIM       1      1        1556  APC (0=NO,1=YES) - NZ              
PMHCREGT  DIM       3      3        1557  Registration Type (Cat HR) - NZ    
PMHCRGDF  DIM       8      8        1560  Reg. Date From - Gen Reg Date (NZ) 
PMHCRGDT  DIM       8      8        1568  Reg. Date To - Gen Reg Date (NZ)   
PMHCPRDF  DIM       8      8        1576  Probation. Reg. Date From ccyymmdd 
PMHCPRDT  DIM       8      8        1584  Probation. Reg. Date To ccyymmdd   
PMHCTSDF  DIM       8      8        1592  Temp. Start Date From (ccyymmdd)   
PMHCTFDT  DIM       8      8        1600  Temp. Finish Date To (ccyymmdd)    
PMHCVISD  DIM       8      8        1608  Visa Date (ccyymmdd)               
PMHCPRFC  DIM       3      3        1616  HCP's Preferd Communication (Cat CZ
PMHCPRFN  DIM       30     30       1619  HCP's Preferred Name               
PMHCABNN  DIM       11     11       1649  ABN Number                         
PMHCUPDF  DIM       1      1        1660  Update Flag M=manual, A=Automatic  
PMHCPRMK  DIM       1      1        1661  Processed Record Marker 1=Processed
PMHCSTTS  DIM       1      1        1662  HCP rec status (0=Active/1=Inactive
PMHCDLMI  DIM       8      8        1663  Date Last Made Inactive (ccyymmdd) 
PMHCDLMA  DIM       8      8        1671  Date Last Made Active (ccyymmdd)   
PMHCCDTE  DIM       8      8        1679  Date Record Created (ccyymmdd)     
PMHCCTIM  DIM       8      8        1687  Time Record Created (hh:mm:ss)     
PMHCWEBC  DIM       10     10       1695  WEB User Id creator (websecaf)     
PMHCLUPD  DIM       8      8        1705  Last Update Date (ccyymmdd)        
PMHCLUPT  DIM       8      8        1713  Last Update Time (hh:mm:ss)        
PMHCWEBU  DIM       10     10       1721  WEB User Id updated (websecaf)     
PMHCSLGP  DIM       1      1        1731  Show Local GP on PMI (plocdoc)     
.                                         0=No 1=Yes                           
PMHCHOSS  DIM       1      1        1732  Hospital Specific HCP              
.                                         (0=NO 1=YES) mlthcpaf                
PMHCPTYP  DIM       3      3        1733  Provider Type (nzpptyaf Cat pt)    
PMHCEXML  DIM       1      1        1736  Exclude from Mailing List 0=N 1=Y  
PMHCDEAC  DIM       8      8        1737  Accred. Expiry Date (ccyymmdd)     
PMHCCPER  DIM       6      6        1745  Common Person Number or HPN CPN    
PMHCAHC1  DIM       3      3        1751  AH Pref Contact Method 1 (Cat CZ)  
PMHCAHC2  DIM       3      3        1754  AH Pref Contact Method 2 (Cat CZ)  
PMHCAHC3  DIM       3      3        1757  AH Pref Contact Method 3 (Cat CZ)  
PMHCLDOC  DIM       6      6        1760  Linked Doctor Code (patdo1af)      
PMHCSDAT  DIM       8      8        1766  Start Date (ccyymmdd)              
PMHCEDAT  DIM       8      8        1774  End Date (ccyymmdd)                
PMHCNHTA  DIM       20     20       1782  NEHTA Identifier                   
PMHCWWCN  DIM       20     20       1802  WWCC Number (state based format)   
PMHCWWCE  DIM       8      8        1822  WWCC Expiry Date (ccyymmdd)        
PMHCWWCS  DIM       3      3        1830  WWCC Status (Cat HW)               
PMHCSMD1  DIM       16     16       1833  SMD GUID value 1                   
PMHCSMD2  DIM       16     16       1849  SMD GUID value 2                   
PMHCSPAR  DIM       18     18       1865  Spare Variable                     
.
.End of Record                      1883 
.
