. V11.00.02 30/03/2020 TT C-0857573 Manually added 2nd index to ALLAUDRE    
. V11.00.01 11/03/2020 EC C-0888624 Added ALREFTSC                              
. V10.14.01 10/04/2019 SA C-0868837 Updated descripton for ALREUDT2             
. V10.13.01 25/09/2018 TT 0859743 Added ALREBKOV, ALREBKPR, ALREBKPM            
. V                       and ALREBKBA fields                                   
. V10.10.01 30/03/2017 EC C-0833052 Added ALRETRGS and ALRETRGD                 
. V10.07.01 05/11/2015 EC C-320392 Added ALREUD11 to ALREUT15                   
. V10.06.02 27/05/2015 DS C-313320 Added comments for ALREUC25 (nz)             
. V10.06.01 13/03/2015 EC C-303890 Added ALREDIA4 to ALREPRC5                   
. V                     Renamed ALREHCPC - Referring HCP State                  
. V                     Renamed ALREHCPS - Referring HCP Post Code and changed  
. V                     from DIM 6 to DIM 8                                     
. V10.05.02 22/09/2014 SA C-298073 Added comments for ALREUC20, ALREUC21,       
. V                         ALREUC22 and ALREUD10 for NZ use.                   
. V10.05.01 05/09/2014 DN C-291413 Added ALRERRDT - Referral Renewal Date       
. V10.04.02 25/02/2014 SA C-256037 Added fields ALREUHC5 to ALREUHC8            
. V10.04.01 03/01/2014 DN  Moved ALRENVIN out of spare     CAR 294462           
. V10.03.02 29/08/2013 DN  Added ALRENVIN to spare.        CAR 273426           
. V10.03.01 15/08/2012 EC  Assigned new cat code to ALREUC32 CAR 261277         
. V10.01.01 16/03/2011 EC  Added ALREUD10 CAR 239576                            
. V10.00.02 21/04/2010 SA  Added ALREYN10,ALREYN11,ALREYN12,ALREUDT7,ALREUTM7,  
. V                          ALRUUDT8,ALREUTM8,ALREUDT9,ALREUTM9,ALREEIOD,      
. V                          ALREACDD.   CAR 220289                             
. V10.00.01 24/03/2010 EC  Added ALREORIG CAR 135505                            
. V9.10.001 25/05/2008 ML  Added ALREDIAT,ALREUYN7,ALREUYN8,ALREUYN9 CAR 152286 
. V9.08.003 16/05/2007 EC  Added ALREEVPR CAR 140983                            
. V9.08.002 17/04/2007 EC  Added ALREPURC,ALREOUTP,ALRECONT,ALRESCOR,ALREMOHR   
. V9.08.001 02/04/2007 NP  Added Index 7                                        
. V9.04.001 22/11/2004 EC  Changed name of ALREUHC4                             
. V9.00.003 10/10/2002 SB  Add Hospital/Unit Number                             
. V9.00.002 15/05/2002 EC  Added Index 6                                        
. V9.04.002 02/02/2005 DS  Added new fields for HIC Claims                      
. V9.04.003 14/02/2005 EC  Added ALREMDAT CAR 56375                             
. V9.04.004 22/03/2005 EC  Added ALREPRDT CAR 56375                             
. V9.04.005 20/10/2005 EC  Added Rejected status CAR 76341                      
. V9.05.B01 09/12/2005 EC  Changed name of ALREUYN4 CAR 76341                   
. V9.05.B02 13/12/2005 EC  Added SACS Rejection Fields CAR 76341                
. V9.05.B03 12/01/2006 DS  Added new user defined fields (for SACS)             
. V9.05.B04 24/01/2006 EC  Added ALREUDT6 - ALREUYN6 CAR 76341                  
. V9.05.B05 20/02/2006 EC  Added audit file CAR 76341                           
. V9.07.001 02/08/2006 EC  Added case review date CAR 113925                    
. *----------------------------------------------------------------------
. * Include Name  :   ALLREFFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Referral Table                     
. *
. * File Type     :   SQL
. *
. * File Name     :   allrefaf.dat
. * Audit Name    :   allaudre.dat
. *
. * Index Values  :   KEY8    KEY16   KEY17   KEY22   KEY27   KEY30   KEY30  
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
ALLAUDRE   IFILE    SQL, FIXED=1695, KEY="D1-8,9-16,17-18,19-19"                
ALLAUDR2   IFILE    SQL, FIXED=1695, KEY="D26-33,1-8,9-16,17-18,19-19"                
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALREAUDD  DIM       8      8        1     Date of Change
ALREAUDT  DIM       8      8        9     Time of Change
ALREAUDP  DIM       2      2        17    Port
ALREAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
ALREAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
ALREAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
ALLREFA1   IFILE    SQL, FIXED=1670, KEY="U1-8"
ALLREFA2   IFILE    SQL, FIXED=1670, KEY="U9-16,1-8"
ALLREFA3   IFILE    SQL, FIXED=1670, KEY="U17-17,129-136,1-8"
ALLREFA4   IFILE    SQL, FIXED=1670, KEY="U172-174,17-17,250-259,1-8"
ALLREFA5   IFILE    SQL, FIXED=1670, KEY="U250-259,17-17,129-136,1-8"
ALLREFA6   IFILE    SQL, FIXED=1670, KEY="U172-174,17-17,129-136,250-259,1-8"
ALLREFA7   IFILE    SQL, FIXED=1670, KEY="U172-174,17-17,260-267,250-259,1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALREVISN  DIM       8      8        1     Referral/Visit Number              
ALREURNO  DIM       8      8        9     U/R Number                         
ALRESTAT  DIM       1      1        17    Status                             
.                                         0 = On Waiting List                  
.                                         1 = Active                           
.                                         2 = Closed                           
.                                         3 = Inactive                         
.                                         4 = Cancelled                        
.                                         5 = Rejected                         
ALREDACT  DIM       8      8        18    Date Active (CCYYMMDD)             
ALRELINK  DIM       8      8        26    Linked Visit Number                
ALRERCLO  DIM       3      3        34    Reason for Closure (Category LL)   
ALREDCLO  DIM       8      8        37    Date Closed (CCYYMMDD)             
ALRETCLO  DIM       8      8        45    Time Closed (HH:MM:SS)             
ALREUCLO  DIM       10     10       53    WEB User ID Closed (websecaf)      
ALRERCAN  DIM       3      3        63    Reason Cancelled (Category LN)     
ALREDCAN  DIM       8      8        66    Date Cancelled (CCYYMMDD)          
ALRETCAN  DIM       8      8        74    Time Cancelled (HH:MM:SS)          
ALREUCAN  DIM       10     10       82    WEB User ID Cancelled (websecaf)   
ALRERINA  DIM       3      3        92    Reason Inactive (Category LI)      
ALREDINA  DIM       8      8        95    Date Inactive (CCYYMMDD)           
ALRETINA  DIM       8      8        103   Time Inactive (HH:MM:SS)           
ALREDINU  DIM       8      8        111   Date Inactive Until (CCYYMMDD)     
ALREUINA  DIM       10     10       119   WEB User ID Inactive (websecaf)    
ALRERDAT  DIM       8      8        129   Date of Referral (CCYYMMDD)        
ALRERDEP  DIM       3      3        137   Referred to Department (alldepaf)  
ALRERDOC  DIM       10     10       140   Referred by Doctor (DO NOT USE)    
ALRERHCP  DIM       10     10       150   Referring HCP (pmshcpaf)           
ALRERHCR  DIM       10     10       160   Referring Practice (pmshclaf)      
ALRERHCT  DIM       2      2        170   Referring Group Count (pmshcgaf)   
ALREDEPT  DIM       3      3        172   Department Code (alldepaf)         
ALREUNIT  DIM       3      3        175   Unit/Specialty (Category AC)       
ALREPRTY  DIM       3      3        178   Priority (Category PR)             
ALREPRO1  DIM       9      9        181   Problem Code 1 (allprraf)          
ALREPRO2  DIM       9      9        190   Problem Code 2 (allprraf)          
ALREPRO3  DIM       9      9        199   Problem Code 3 (allprraf)          
ALREDIA1  DIM       9      9        208   Diagnosis Code 1 (alldiaaf)        
ALREDIA2  DIM       9      9        217   Diagnosis Code 2 (alldiaaf)        
ALREDIA3  DIM       9      9        226   Diagnosis Code 3 (alldiaaf)        
ALRESRCE  DIM       3      3        235   Source of Referral(ostcatg.outsitaf
ALRECOMP  DIM       3      3        238   Compensation Code (Category CL)    
ALREBULK  DIM       1      1        241   Bulk Bill (0=No,1=Yes)             
ALREDREV  DIM       8      8        242   Date of Next Review (CCYYMMDD)     
ALREHCP   DIM       10     10       250   Responsible HCP (pmshcpaf)         
ALREDREC  DIM       8      8        260   Date Referral Received (CCYYMMDD)  
ALREUC01  DIM       3      3        268   User Defined Code 1 (Category la)  
ALREUC02  DIM       3      3        271   User Defined Code 2 (Category lb)  
ALREUC03  DIM       3      3        274   User Defined Code 3 (Category lc)  
ALREUC04  DIM       3      3        277   User Defined Code 4 (Category ld)  
ALREUC05  DIM       3      3        280   User Defined Code 5 (Category le)  
ALREUC06  DIM       3      3        283   User Defined Code 6 (Category lf)  
ALREUC07  DIM       3      3        286   User Defined Code 7 (Category lg)  
ALREUC08  DIM       3      3        289   User Defined Code 8 (Category lh)  
ALREUC09  DIM       3      3        292   User Defined Code 9 (Category li)  
ALREUC10  DIM       3      3        295   User Defined Code 10 (Category lj) 
ALREUC11  DIM       3      3        298   User Defined Code 11 (Category lk) 
ALREUC12  DIM       3      3        301   User Defined Code 12 (Category ll) 
ALREUC13  DIM       3      3        304   User Defined Code 13 (Category lm) 
ALREUC14  DIM       3      3        307   User Defined Code 14 (Category ln) 
ALREUC15  DIM       3      3        310   User Defined Code 15 (Category lo) 
ALREUC16  DIM       3      3        313   User Defined Code 16 (Category lp) 
ALREUC17  DIM       3      3        316   User Defined Code 17 (Category lq) 
ALREUC18  DIM       3      3        319   User Defined Code 18 (Category lr) 
ALREUC19  DIM       3      3        322   User Defined Code 19 (Category ls) 
ALREUC20  DIM       3      3        325   User Defined Code 20 (Category lt) 
.                                         *** NZ - NPF Type Proc. Clinical     
.                                         Exclusion                            
ALREUC21  DIM       3      3        328   User Defined Code 21 (Category lu) 
.                                         *** NZ - NPF Suspicion of Cancer     
.                                         (Referrer)                           
ALREUC22  DIM       3      3        331   User Defined Code 22 (Category lv) 
.                                         *** NZ - NPF Suspicion of Cancer     
.                                         (Triage)                             
ALREUC23  DIM       3      3        334   User Defined Code 23 (Category lw) 
ALREUC24  DIM       3      3        337   User Defined Code 24 (Category lx) 
ALREUC25  DIM       3      3        340   User Defined Code 25 (Category ly) 
.                                         *** NZ - Out Of Area Flag            
ALREUC26  DIM       3      3        343   User Defined Code 26 (Category lz) 
ALREUC27  DIM       3      3        346   User Defined Code 27 (Category lA) 
ALREUC28  DIM       3      3        349   User Defined Code 28 (Category lB) 
ALREUC29  DIM       3      3        352   User Defined Code 29 (Category lC) 
ALREUC30  DIM       3      3        355   User Defined Code 30 (Category lD) 
ALREUC31  DIM       3      3        358   User Defined Code 31 (Category lE) 
ALREUC32  DIM       3      3        361   User Defined Code 32 (Category lO) 
ALREUC33  DIM       3      3        364   User Defined Code 33 (Category lG) 
ALREUC34  DIM       3      3        367   User Defined Code 34 (Category lH) 
ALREUC35  DIM       3      3        370   User Defined Code 35 (Category lI) 
ALREUC36  DIM       3      3        373   User Defined Code 36 (Category lJ) 
ALREUC37  DIM       3      3        376   User Defined Code 37 (Category lK) 
ALREUC38  DIM       3      3        379   User Defined Code 38 (Category lL) 
ALREUC39  DIM       3      3        382   User Defined Code 39 (Category lM) 
ALREUC40  DIM       3      3        385   User Defined Code 40 (Category lN) 
ALREUYN1  DIM       1      1        388   User Defined Y/N 1 (0=No,1=Yes)    
ALREUYN2  DIM       1      1        389   User Defined Y/N 2 (0=No,1=Yes)    
ALREUYN3  DIM       1      1        390   User Defined Y/N 3 (0=No,1=Yes)    
ALREUYN4  DIM       1      1        391   SACS Referral (0=No,1=Yes)         
ALREUHC1  DIM       10     10       392   User Defined HCP 1 (pmshcpaf)      
ALREUHC2  DIM       10     10       402   User Defined HCP 2 (pmshcpaf)      
ALREUHC3  DIM       10     10       412   User Defined HCP 3 (pmshcpaf)      
ALREUHC4  DIM       10     10       422   HCP Case Team Code (allcasaf)      
ALREUFR1  DIM       60     60       432   User Defined Free Format 1         
ALREUFR2  DIM       60     60       492   User Defined Free Format 2         
ALREUDT1  DIM       8      8        552   User Defined Date 1 (CCYYMMDD)     
ALREUTM1  DIM       8      8        560   User Defined Time 1 (HH:MM:SS)     
ALREUDT2  DIM       8      8        568   Episode Patient Ready for Care Date
.                                         (ccyymmdd)                           
ALREUTM2  DIM       8      8        576   User Defined Time 2 (HH:MM:SS)     
ALREUDT3  DIM       8      8        584   User Defined Date 3 (CCYYMMDD)     
ALREUTM3  DIM       8      8        592   User Defined Time 3 (HH:MM:SS)     
ALREUDT4  DIM       8      8        600   User Defined Date 4 (CCYYMMDD)     
ALREUTM4  DIM       8      8        608   User Defined Time 4 (HH:MM:SS)     
ALREUNO1  FORM      12.2   8        616   User Defined Numeric 1             
ALREUNO2  FORM      12.2   8        624   Job Number (Orthotics)             
ALRECDAT  DIM       8      8        632   Date Record Created (CCYYMMDD)     
ALRECTIM  DIM       8      8        640   Time Record Created (HH:MM:SS)     
ALRECUID  DIM       10     10       648   WEB User ID Created (websecaf)     
ALREUDAT  DIM       8      8        658   Update Date (CCYYMMDD)             
ALREUTIM  DIM       8      8        666   Update Time (HH:MM:SS)             
ALREUUID  DIM       10     10       674   WEB User ID Updated (websecaf)     
ALRECTYP  DIM       6      6        684   Clinic Type                        
ALREHOSN  DIM       3      3        690   Hospital/Unit Number               
ALREFHCP  DIM       60     60       693   Referring HCP (Free Format)        
ALREHCP1  DIM       60     60       753   Referring HCP Addr 1 (Free Format) 
ALREHCP2  DIM       60     60       813   Referring HCP Addr 2 (Free Format) 
ALREHCP3  DIM       60     60       873   Referring HCP Addr 3 (Free Format) 
ALREHCPC  DIM       8      8        933   Referring HCP State (Free Format)  
ALREHCPS  DIM       8      8        941   Referring HCP Post Code (Free Frm) 
ALREHCPB  DIM       20     20       949   Referring HCP Bus. Phone (Free Frm)
ALREHCPF  DIM       20     20       969   Referring HCP Bus. Fax (Free Frm)  
ALREHCPP  DIM       10     10       989   Referring HCP Prov.Numb. (Free Frm)
ALRESTYP  DIM       3      3        999   Slot Type (Category CV)            
ALREPRCM  DIM       50     50       1002  Presenting Complaint (Free Format) 
ALREPSIT  DIM       6      6        1052  Preferred Site                     
ALRECLID  DIM       6      6        1058  Clinic ID                          
ALRECSTA  DIM       3      3        1064  Claim Status (Category sc)         
ALRERREJ  DIM       3      3        1067  HIC Reason for Rejection (Cat hr)  
ALRECCOM  DIM       50     50       1070  Claim Comments (Free Format)       
ALRERTYP  DIM       3      3        1120  Type of Referral (Category RI)     
ALREREXP  DIM       8      8        1123  Referral Expiry Date (ccyymmdd)    
ALREMDAT  DIM       8      8        1131  Must Be Seen By Date (ccyymmdd)    
ALREPRDT  DIM       8      8        1139  Priority Date (CCYYMMDD)           
ALRESREJ  DIM       3      3        1147  SACS Reason for Rejection (Cat rr) 
ALRESRDT  DIM       8      8        1150  SACS Date Rejected (CCYYMMDD)      
ALRESRTM  DIM       8      8        1158  SACS Time Rejected (hh:mm:ss)      
ALRESRUI  DIM       10     10       1166  SACS WEB User Rejected (websecaf)  
ALREUDT5  DIM       8      8        1176  User Defined Date 5 (CCYYMMDD)     
ALREUTM5  DIM       8      8        1184  User Defined Time 5 (HH:MM:SS)     
ALREUYN5  DIM       1      1        1192  User Defined Y/N 5 (0=No,1=Yes)    
ALREUDID  DIM       10     10       1193  User Defined User ID 1 (websecaf)  
ALREUDT6  DIM       8      8        1203  User Defined Date 6 (CCYYMMDD)     
ALREUTM6  DIM       8      8        1211  User Defined Time 6 (HH:MM:SS)     
ALREUYN6  DIM       1      1        1219  User Defined Y/N 6 (0=No,1=Yes)    
ALREREVD  DIM       8      8        1220  Case Review Date (CCYYMMDD)        
ALREPURC  DIM       3      3        1228  Purchaser (Cat HP)                 
ALREOUTP  DIM       3      3        1231  Outcome of Priority (CAT AO)       
ALRECONT  DIM       3      3        1234  Contract (Cat gb)                  
ALRESCOR  DIM       6      6        1237  Score                              
ALREMOHR  DIM       1      1        1243  MOH Indicator Record sent to MHINC 
.                                         blank = Not for MHINC                
.                                         0 = Unsent                           
.                                         1 = Sent                             
.                                         2 = Send Delete required             
.                                         3 = Send Discharged required         
.                                         4 = Send RF and Discharge required   
.                                         5 = Send Delete Discharge required   
ALREEVPR  DIM       3      3        1244  Event Program (Cat zG)             
ALREDIAT  DIM       50     50       1247  Diagnosis Code Free Text           
ALREUYN7  DIM       1      1        1297  User Defined Y/N 7 (0=No,1=Yes)    
ALREUYN8  DIM       1      1        1298  User Defined Y/N 8 (0=No,1=Yes)    
ALREUYN9  DIM       1      1        1299  User Defined Y/N 9 (0=No,1=Yes)    
ALREUCD1  DIM       1      1        1300  User Defined Code 1 (0 to 9)       
ALREUCD2  DIM       1      1        1301  User Defined Code 2 (0 to 9)       
ALREUCD3  DIM       1      1        1302  User Defined Code 3 (0 to 9)       
ALREORIG  DIM       30     30       1303  Referral Originator                
ALREYN10  DIM       1      1        1333  User Defined Y/N 10 (0=No,1=Yes)   
ALREYN11  DIM       1      1        1334  User Defined Y/N 11 (0=No,1=Yes)   
ALREYN12  DIM       1      1        1335  User Defined Y/N 12 (0=No,1=Yes)   
ALREUDT7  DIM       8      8        1336  User Defined Date 7 (CCYYMMDD)     
ALREUTM7  DIM       8      8        1344  User Defined Time 7 (HH:MM:SS)     
ALREUDT8  DIM       8      8        1352  User Defined Date 8 (CCYYMMDD)     
ALREUTM8  DIM       8      8        1360  User Defined Time 8 (HH:MM:SS)     
ALREUDT9  DIM       8      8        1368  User Defined Date 9 (CCYYMMDD)     
ALREUTM9  DIM       8      8        1376  User Defined Time 9 (HH:MM:SS)     
ALREEIOD  DIM       8      8        1384  Impairment Onset Date (CCYYMMDD)   
ALREACDD  DIM       8      8        1392  Adv. Care Plan Doc. Date (CCYYMMDD)
ALREUD10  DIM       8      8        1400  User Defined Date 10 (CCYYMMDD)    
.                                         *** NZ - NPF Date Susp. of Cancer    
.                                         (Triage)                             
ALRENVIN  DIM       1      1        1408  Is a Non-VINAH Referral?           
.                                         0 = No                               
.                                         1 = Yes                              
ALREUHC5  DIM       10     10       1409  User Defined HCP 5 (pmshcpaf)      
ALREUHC6  DIM       10     10       1419  User Defined HCP 6 (pmshcpaf)      
ALREUHC7  DIM       10     10       1429  User Defined HCP 7 (pmshcpaf)      
ALREUHC8  DIM       10     10       1439  User Defined HCP 8 (pmshcpaf)      
ALRERRDT  DIM       8      8        1449  Referral Renewal Date (CCYYMMDD)   
ALREDIA4  DIM       9      9        1457  Diagnosis Code 4 (alldiaaf)        
ALREDIA5  DIM       9      9        1466  Diagnosis Code 5 (alldiaaf)        
ALREPRC1  DIM       9      9        1475  Procedure Code 1 (allproaf)        
ALREPRC2  DIM       9      9        1484  Procedure Code 2 (allproaf)        
ALREPRC3  DIM       9      9        1493  Procedure Code 3 (allproaf)        
ALREPRC4  DIM       9      9        1502  Procedure Code 4 (allproaf)        
ALREPRC5  DIM       9      9        1511  Procedure Code 5 (allproaf)        
ALREUD11  DIM       8      8        1520  User Defined Date 11 (CCYYMMDD)    
ALREUT11  DIM       8      8        1528  User Defined Time 11 (HH:MM:SS)    
ALREUD12  DIM       8      8        1536  User Defined Date 12 (CCYYMMDD)    
ALREUT12  DIM       8      8        1544  User Defined Time 12 (HH:MM:SS)    
ALREUD13  DIM       8      8        1552  User Defined Date 13 (CCYYMMDD)    
ALREUT13  DIM       8      8        1560  User Defined Time 13 (HH:MM:SS)    
ALREUD14  DIM       8      8        1568  User Defined Date 14 (CCYYMMDD)    
ALREUT14  DIM       8      8        1576  User Defined Time 14 (HH:MM:SS)    
ALREUD15  DIM       8      8        1584  User Defined Date 15 (CCYYMMDD)    
ALREUT15  DIM       8      8        1592  User Defined Time 15 (HH:MM:SS)    
ALRETRGS  DIM       3      3        1600  Current Triage Status (Cat ts)     
ALRETRGD  DIM       8      8        1603  Current Triage Date (CCYYMMDD)     
ALREBKOV  DIM       3      3        1611  Referral Override (Cat ro)         
ALREBKPR  DIM       3      3        1614  Referral Period (Cat RF)           
ALREBKPM  DIM       2      2        1617  Referral Period (Month Range 1-98) 
ALREBKBA  DIM       1      1        1619  Benefit Assignment Authorised      
.                                         0 or Blank - No                      
.                                         1 - Yes                              
ALREFTSC  DIM       3      3        1620  Referral in First Triage Score     
ALRESPAR  DIM       47     47       1623  Spare                              
.
.End of Record                      1670 
.
