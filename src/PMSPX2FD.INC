. V11.03.02 30/08/2023 EC 0936452   Updated Description of PMPXSN21
. V11.03.01 15/06/2023 NB 0907196   Updated Description for PMPXUTM5
. V11.02.01 27/04/2022 DS C-0903453 Changed descriptions for UCC4,UCC5,ATF1,ATF2
. V11.01.02 22/12/2021 DS C-0882972 Changed to use PMPXSN18 for Secure Address  
. V11.01.01 25/11/2021 JJA C-0882972 Changed PMPXSN20 field description to secur
. V11.00.01 12/03/2020 DN C-0881876 Updated Description for PMPXSN19            
. V10.14.01 11/02/2019 EC C-0828972 Updated description for PMPXSN17            
. V10.13.01 29/10/2018 SA C-0860241 Updated description for PMPXSN16            
. V10.09.01 05/01/2017 DS C-0823516 Added fields PMPXSN16 to PMPXATF5           
. V10.08.04 08/08/2016 DS C-0321234 Changed description for PMPXSN11 to Chronic 
. V10.08.03 05/04/2016 SA C-0279181 Added PMPXUUID, PMPXUDAT & PMPXUTIM         
. V10.08.02 30/03/2016 SA C-0814716 Added PMPXUPRF                              
. V10.08.01 30/03/2016 SA C-0315393 Added PMPXRPER & PMPXRDAT                   
. V10.06.03 15/04/2015 PV C-312723 Changed description of PMPXUSR9              
. V10.06.02 02/04/2015 DS C-305441 Use SN10 for PCEHR Flag                      
. V10.06.01 17/03/2015 EC C-282146 Added PMPXOSMS                               
. V10.04.02 27/02/2014 PA C-292935 Added Consent Release of Info to HCP1-5      
. V10.04.01 05/01/2014 AP C-294471 Moved PMPXPMCN & PMPXPMCR out of Spare       
. V10.03.02 19/06/2013 PV Added PMPXPMCN and PMPXPMCR CAR 283202                
. V10.03.01 15/08/2012 SA C-270795 Updated values for PMPXINTR                  
. V10.02.02 20/06/2011 EC C-242416 Added PMPXHFCN and PMPXLUBH                  
. V10.02.01 04/05/2011 DS  Use SIN7 to SIN9 for wahealth alerts  CAR 239539     
. V10.01.01 15/02/2011 JP  Added Postal as option for PMPXCONP  CAR 233256      
. V10.00.03 25/05/2010 JP  Added Ethnicity CAR 222551                           
. V10.00.02 18/05/2010 JP  Added Maiden Name CAR                                
. V10.00.01 13/04/2010 SA  Added PMPXASNO and Reduced PMPXSPAR (CAR 219900)     
. V9.12.001 01/10/2009 EC  Changed PMPXSIN6 description (CAR 205398)            
. V9.11.002 21/04/2009 JH  Added verified GP details (CAR 145706)               
. V9.11.001 19/11/2008 EC  Added PMPXFNAM to PMPXFUPI CAR 183976                
. V9.08.002 21/02/2007 ML  Change PMPXSN15 description                          
. V9.08.001 25/10/2006 EC  Added PMPXPFAX CAR 123415                            
. V9.07.002 08/09/2006 PV  Added PMPXPFSN PMPXPFGN CAR 118225                   
. V9.07.001 07/08/2006 EC  Added PMPXCHKD CAR 109852                            
. V9.05.001 20/03/2006 JH  Added PMPXIHOS                                       
. V9.02.002 13/12/2005 JT  Added Iwi fields                                     
. V9.02.001 25/02/2003 TT  Added new variable PMPXFLDR (Folder Selection)       
. V9.07.003 12/09/2006 JH  Added new status indicators                          
. *----------------------------------------------------------------------
. * Include Name  :   PMSPX2FD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   PMI extension table                
. *
. * File Type     :   SQL
. *
. * File Name     :   pmspx2af.dat
. * Audit Name    :   pmsaudpx.dat
. *
. * Index Values  :   KEY8                                                   
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
PMSAUDPX   IFILE    SQL, FIXED=2436, KEY="D1-8,9-16,17-18,19-19"                
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMPXAUDD  DIM       8      8        1     Date of Change
PMPXAUDT  DIM       8      8        9     Time of Change
PMPXAUDP  DIM       2      2        17    Port
PMPXAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
PMPXAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
PMPXAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
PMSPX2A1   IFILE    SQL, FIXED=2411, KEY="U1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMPXURNO  DIM       8      8        1     Patient U/R Number                 
PMPXRHC1  DIM       10     10       9     Registered HCP 1 (pmshcpaf)        
PMPXRH1G  DIM       10     10       19    Registered HCP 1 Group (pmshcgaf)  
PMPXR1GC  DIM       2      2        29    Reg. HCP 1 Group Count (pmshclaf)  
PMPXINTR  DIM       1      1        31    Interpreter Required?              
.                                         0 = No                               
.                                         1 = Yes                              
.                                         U = Unknown (Not Stated)             
PMPXLNG1  DIM       3      3        32    Preferred Language 1 (Cat LA)      
PMPXLNG2  DIM       3      3        35    Preferred Language 2 (Cat LA)      
PMPXLNG3  DIM       3      3        38    Preferred Language 3 (Cat LA)      
PMPXPEML  DIM       80     80       41    Patient's Email Address            
PMPXEDOB  DIM       1      1        121   Date of Birth Estimated? 0=NO,1=YES
PMPXCMOB  DIM       20     20       122   Emergency Contact Mobile Number    
PMPXCEML  DIM       80     80       142   Emergency Contact Email Address    
PMPXCCRP  DIM       1      1        222   Emer. Contact Corres. (0=NO,1=YES) 
PMPXKMOB  DIM       20     20       223   NOK Mobile Number                  
PMPXKEML  DIM       80     80       243   NOK Email Address                  
PMPXKCRP  DIM       1      1        323   NOK Correspondence (0=NO,1=YES)    
PMPXRMOB  DIM       20     20       324   Nearest Relative Mobile Number     
PMPXREML  DIM       80     80       344   Nearest Relative Email Address     
PMPXRCRP  DIM       1      1        424   Nearest Relative Corres. 0=NO,1=YES
PMPXMEDC  DIM       8      8        425   Medicare Card Valid to (CCYYMMDD)  
PMPXDETY  DIM       3      3        433   Death Type (Cat DY)                
PMPXPRIS  DIM       15     15       436   PRISM Number                       
PMPXCSER  DIM       15     15       451   Correctional Services Number       
PMPXPHEI  FORM      6      4        466   Patient Height                     
PMPXPWEI  FORM      6      4        470   Patient Weight                     
PMPXDREC  DIM       8      8        474   Date Weight & Height Rec.(CCYYMMDD)
PMPXMSNA  DIM       20     20       482   Mother's Surname                   
PMPXMGNA  DIM       25     25       502   Mother's Given Name                
PMPXMTLE  DIM       4      4        527   Mother's Title                     
PMPXMAD1  DIM       35     35       531   Mother's Address Line 1            
PMPXMAD2  DIM       35     35       566   Mother's Address Line 2            
PMPXMAD3  DIM       35     35       601   Mother's Address Line 3            
PMPXMAD4  DIM       35     35       636   Mother's Address Line 4            
PMPXMPOS  DIM       8      8        671   Mother's Address Post Code         
PMPXMPNO  DIM       20     20       679   Mother's Private Number            
PMPXMBNO  DIM       20     20       699   Mother's Business Number           
PMPXMMNO  DIM       20     20       719   Mother's Mobile Number             
PMPXMEML  DIM       80     80       739   Mother's Email Address             
PMPXMCNT  DIM       3      3        819   Mother's Country of Birth (Cat C)  
PMPXMCRP  DIM       1      1        822   Mother's Correspondence  0=NO,1=YES
PMPXMLAB  DIM       1      1        823   Mother's Name on Labels  0=NO,1=YES
PMPXMREL  DIM       10     10       824   Relationship to Patient            
PMPXFSNA  DIM       20     20       834   Father's Surname                   
PMPXFGNA  DIM       25     25       854   Father's Given Name                
PMPXFTLE  DIM       4      4        879   Father's Title                     
PMPXFAD1  DIM       35     35       883   Father's Address Line 1            
PMPXFAD2  DIM       35     35       918   Father's Address Line 2            
PMPXFAD3  DIM       35     35       953   Father's Address Line 3            
PMPXFAD4  DIM       35     35       988   Father's Address Line 4            
PMPXFPOS  DIM       8      8        1023  Father's Address Post Code         
PMPXFPNO  DIM       20     20       1031  Father's Private Number            
PMPXFBNO  DIM       20     20       1051  Father's Business Number           
PMPXFMNO  DIM       20     20       1071  Father's Mobile Number             
PMPXFEML  DIM       80     80       1091  Father's Email Address             
PMPXFCNT  DIM       3      3        1171  Father's Country of Birth (Cat C)  
PMPXFCRP  DIM       1      1        1174  Father's Correspondence 0=NO,1=YES 
PMPXFLAB  DIM       1      1        1175  Father's Name on Labels 0=NO,1=YES 
PMPXFREL  DIM       10     10       1176  Relationship to Patient            
PMPXTDIG  DIM       2      2        1186  Terminal Digit (Last 2 chrs of U/R)
PMPXWBID  DIM       10     10       1188  WEB User Id re. creator (websecaf) 
PMPXDVAC  DIM       3      3        1198  DVA Card Colour (Cat DX)           
PMPXPNSD  DIM       8      8        1201  Pension Start Date (CCYYMMDD)      
PMPXUYN4  DIM       1      1        1209  User Defined Y/N field 4 0=NO,1=YES
PMPXUYN5  DIM       1      1        1210  User Defined Y/N field 5 0=NO,1=YES
PMPXUYN6  DIM       1      1        1211  Not for Resusitation Y/N 0=NO,1=YES
PMPXABRG  DIM       3      3        1212  Aboriginality (Cat VA)             
PMPXPRVI  DIM       3      3        1215  Privacy Indicator (Cat PV)         
PMPXCRIN  DIM       1      1        1218  Consent Release of Info? 0=NO,1=YES
PMPXHOML  DIM       1      1        1219  Homeless? (0=NO,1=YES)             
PMPXUDC1  DIM       50     50       1220  User Defined Comments 1            
PMPXUDC2  DIM       50     50       1270  User Defined Comments 2            
PMPXUDC3  DIM       50     50       1320  User Defined Comments 3            
PMPXUSR7  DIM       3      3        1370  User Defined 7 (Category P7)       
PMPXUSR8  DIM       3      3        1373  User Defined 8 (Category P8)       
PMPXUSR9  DIM       3      3        1376  Advance Care Plan Flag(Category P9)
PMPXMSNO  DIM       10     10       1379  Medicare Safety Net Number         
PMPXCONP  DIM       1      1        1389  Which contact for PRA              
.                                         0=Patient                            
.                                         1=Mother (this file)                 
.                                         2=Father (this file)                 
.                                         3=Next of Kin (patma1af)             
.                                         4=Emergency Contact (patmx1af)       
.                                         5=Nearest Relative (patmx1af)        
.                                         6=PRA (priinvof)                     
.                                         7=Postal                             
PMPXFLDR  DIM       3      3        1390  Folder Selection (Category FS)     
PMPXIWI1  DIM       3      3        1393  Iwi 1 (Category iw)                
PMPXIWI2  DIM       3      3        1396  Iwi 2 (Category iw)                
PMPXIWI3  DIM       3      3        1399  Iwi 3 (Category iw)                
PMPXIHOS  DIM       3      3        1402  Hospital which initiated UR        
PMPXPFSN  DIM       20     20       1405  Preferred Surname                  
PMPXPFGN  DIM       25     25       1425  Preferred Given Name               
PMPXSIN6  DIM       1      1        1450  Transport Required - 1=Yes         
PMPXSIN7  DIM       1      1        1451  Medical Alert (wahealth) - 1=Yes   
PMPXSIN8  DIM       1      1        1452  Micro Alert (wahealth) - 1=Yes     
PMPXSIN9  DIM       1      1        1453  Risk Alert (wahealth) - 1=Yes      
PMPXSN10  DIM       1      1        1454  PCEHR Flag                         
.                                         0 - Blank                            
.                                         1 - Not published / unknown PCEHR    
.                                         2 - No / non advertised PCEHR        
.                                         3 - Yes / advertised PCEHR           
PMPXSN11  DIM       1      1        1455  Chronic Condition Alert (wah) 1=Yes
PMPXSN12  DIM       1      1        1456  Patient Debt Only - 1=Yes          
PMPXSN13  DIM       1      1        1457  Set Payment Plan - 1=Yes           
PMPXSN14  DIM       1      1        1458  Debt Collection Agency - 1=Yes     
PMPXSN15  DIM       1      1        1459  Outstanding Debt Ind. 1=Yes        
PMPXPFAX  DIM       20     20       1460  Patient Fax Number                 
PMPXFNAM  DIM       40     40       1480  Patient First Name                 
PMPXSNAM  DIM       40     40       1520  Patient Second Name                
PMPXHFGN  DIM       40     40       1560  Health Fund First Given Name Alias 
PMPXHFSN  DIM       40     40       1600  Health Fund Surname Alias          
PMPXFUPI  DIM       2      2        1640  Health Fund UPI                    
PMPXVGPC  DIM       10     10       1642  Verified GP Code (pmshcpaf)        
PMPXVGPP  DIM       10     10       1652  Verified GP Practice (pmshcgaf)    
PMPXVGPG  DIM       2      2        1662  Verified GP Group Count (pmshclaf) 
PMPXASNO  DIM       15     15       1664  Ambulance Subscriber No.           
PMPXMAID  DIM       20     20       1679  Maiden Name                        
PMPXETHN  DIM       3      3        1699  Ethnicity (Cat EN)                 
PMPXHFCN  DIM       40     40       1702  Health Fund Contributor Name       
PMPXLUBH  DIM       3      3        1742  Last Updated By Hospital (pathspaf)
PMPXPMCN  DIM       3      3        1745  Preferred Method of Contact (Cat Pn
PMPXPMCR  DIM       3      3        1748  Preferred Method of Correspondence 
PMPXCRN1  DIM       1      1        1751  Consent Release of info to HCP1    
.                                         0=No                                 
.                                         1=Yes                                
PMPXCRN2  DIM       1      1        1752  Consent Release of info to HCP2    
.                                         0=No                                 
.                                         1=Yes                                
PMPXCRN3  DIM       1      1        1753  Consent Release of info to HCP3    
.                                         0=No                                 
.                                         1=Yes                                
PMPXCRN4  DIM       1      1        1754  Consent Release of info to HCP4    
.                                         0=No                                 
.                                         1=Yes                                
PMPXCRN5  DIM       1      1        1755  Consent Release of info to HCP5    
.                                         0=No                                 
.                                         1=Yes                                
PMPXOSMS  DIM       1      1        1756  Opt out of SMS                     
.                                         0=No                                 
.                                         1=Yes                                
PMPXRPER  DIM       3      3        1757  Retention Period (Cat rt)          
PMPXRDAT  DIM       8      8        1760  Retention Date (ccyymmdd)          
PMPXUPRF  DIM       3      3        1768  Usual PRFA Coded (Cat tc)          
PMPXUUID  DIM       10     10       1771  User Id who Last Updated Record    
.                                         (websecaf)                           
PMPXUDAT  DIM       8      8        1781  Date Record Last Updated (ccyymmdd)
PMPXUTIM  DIM       8      8        1789  Time Record Last Updated (hh:mm:ss)
PMPXSN16  DIM       1      1        1797  MyHR Consent Flag                  
.                                         0 = No                               
.                                         Blank or 1 = Yes                     
PMPXSN17  DIM       1      1        1798  SMR - Scanned Medical Record Exists
.                                         Blank or 0 = No                      
.                                         1 = Yes                              
PMPXSN18  DIM       1      1        1799  Secure Address                     
PMPXSN19  DIM       1      1        1800  Verified Address                   
PMPXSN20  DIM       1      1        1801  Multiple Birth Indicator           
PMPXSN21  DIM       1      1        1802  Email Validation Flag              
PMPXSN22  DIM       1      1        1803  Status Indicator 22                
PMPXSN23  DIM       1      1        1804  Status Indicator 23                
PMPXSN24  DIM       1      1        1805  Status Indicator 24                
PMPXSN25  DIM       1      1        1806  Status Indicator 25                
PMPXSN26  DIM       1      1        1807  Status Indicator 26                
PMPXSN27  DIM       1      1        1808  Status Indicator 27                
PMPXSN28  DIM       1      1        1809  Status Indicator 28                
PMPXSN29  DIM       1      1        1810  Status Indicator 29                
PMPXSN30  DIM       1      1        1811  Status Indicator 30                
PMPXUDT1  DIM       8      8        1812  User Defined Date 1 (ccyymmdd)     
PMPXUTM1  DIM       8      8        1820  User Defined Time 1 (hh:mm:ss)     
PMPXUDT2  DIM       8      8        1828  User Defined Date 2 (ccyymmdd)     
PMPXUTM2  DIM       8      8        1836  User Defined Time 2 (hh:mm:ss)     
PMPXUDT3  DIM       8      8        1844  User Defined Date 3 (ccyymmdd)     
PMPXUTM3  DIM       8      8        1852  User Defined Time 3 (hh:mm:ss)     
PMPXUDT4  DIM       8      8        1860  User Defined Date 4 (ccyymmdd)     
PMPXUTM4  DIM       8      8        1868  User Defined Time 4 (hh:mm:ss)     
PMPXUDT5  DIM       8      8        1876  User Defined Date 5 (ccyymmdd)     
PMPXUTM5  DIM       8      8        1884  Patient Time of Birth (hh:mm:ss)     
PMPXUCC1  DIM       3      3        1892  User Defined Category Code 1       
PMPXUCC2  DIM       3      3        1895  User Defined Category Code 2       
PMPXUCC3  DIM       3      3        1898  User Defined Category Code 3       
PMPXUCC4  DIM       3      3        1901  Identifying Gender (Cat Gi)        
PMPXUCC5  DIM       3      3        1904  Identifying Pronoun (Cat Gp)       
PMPXAHC1  DIM       10     10       1907  Additional HCP 1                   
PMPXAHG1  DIM       10     10       1917  Additional HCP Group 1             
PMPXAGC1  DIM       2      2        1927  Additional HCP Group Count 1       
PMPXAHC2  DIM       10     10       1929  Additional HCP 2                   
PMPXAHG2  DIM       10     10       1939  Additional HCP Group 2             
PMPXAGC2  DIM       2      2        1949  Additional HCP Group Count 2       
PMPXAUF1  DIM       1      1        1951  Additional User Defined Field 1    
.                                         Used for LegalGuardian by RCH        
.                                         (Mother)                             
PMPXAUF2  DIM       1      1        1952  Additional User Defined Field 2    
.                                         Used for LegalGuardian by RCH        
.                                         (Father)                             
PMPXAUF3  DIM       1      1        1953  Additional User Defined Field 3    
.                                         Used for LegalGuardian by RCH        
.                                         (NoK)                                
PMPXAUF4  DIM       1      1        1954  Additional User Defined Field 4    
.                                         Used for LegalGuardian by RCH        
.                                         (Emergency Contact)                  
PMPXAUF5  DIM       1      1        1955  Additional User Defined Field 5    
.                                         Used for LegalGuardian by RCH        
.                                         (Nearest Relative)                   
PMPXAUF6  DIM       1      1        1956  Additional User Defined Field 6    
PMPXAUF7  DIM       1      1        1957  Additional User Defined Field 7    
PMPXAUF8  DIM       1      1        1958  Additional User Defined Field 8    
PMPXAUF9  DIM       1      1        1959  Additional User Defined Field 9    
PMPXAU10  DIM       1      1        1960  Additional User Defined Field 10   
PMPXATF1  DIM       80     80       1961  Identifying Gender Free Text       
PMPXATF2  DIM       80     80       2041  Identifying Pronoun Free Text      
PMPXATF3  DIM       80     80       2121  Additional Text Field 3            
PMPXATF4  DIM       80     80       2201  Additional Text Field 4            
PMPXATF5  DIM       80     80       2281  Additional Text Field 5            
PMPXSPAR  DIM       50     50       2361  Spare                              
.
.End of Record                      2411 
.
