. V11.00.01 15/04/2020 EC C-0888071 Added PMVXADMP, PMVXCONO and PMVXMEDH       
. V11.00.01 31/03/2020 TN C-0887397 Updated PMVXUD13 desc - NDIS Part. Flag (Cat
. V10.13.02 22/01/2019 SA C-0867489 Updated description for PMVXUD15            
. V10.13.01 29/10/2018 SA C-0860241 Updated Description for PMVXUDF7            
. V10.12.01 07/02/2018 EC C-0848319 Added index 4                               
. V10.11.02 10/11/2017 EC C-0843363 Added Cat ae and af to PMVXUD10/11          
. V10.11.01 01/08/2017 SA C-0837619 Added PMVXEAFL                              
. V10.10.02 21/03/2017 PV  Changed PMVXUDF9 to category lj TSK 0833050          
. V10.10.01 02/03/2017 PV  Changed PMVXUDF9 to Death Place Cat. dp TSK 0833050  
. V10.07.02 15/10/2015 DN  Added PMVXCASE for Case Team     CAR 316625          
. V10.07.01 01/10/2015 PV  Added PMVXCNID to spare variable CAR 316637          
. V                         Added PMVXCNDT to spare variable CAR 316637         
. V10.06.02 01/06/2015 JP C-317467 Added Category YF for pmvxudf8               
. V10.06.01 07/04/2015 DS C-305441 Use UDF7 for PCEHR Flag                      
. V10.05.02 04/03/2015 AP C-311205 Added Category YE to PMVXUDF6                
. V10.05.01 06/10/2014 DS C-300056 Changed PMVXUDF5 to Coding Delay Reason      
. V10.04.01 06/01/2014 AP C-294384 Moved PMVXCPDD & PMVXPBMI out of SPARE       
. V10.03.02 20/07/2012 EC  Added PMVXPBMI to spare variable CAR 217579          
. V10.03.01 26/04/2012 DS  Added PMVXCPDD to spare variable CAR 260600 VAED-2012
. V10.02.03 15/09/2011 JP  Added 2=Not Stated for PMVXINGP CAR 250281           
. V10.02.02 19/08/2011 DS C-248341 Changed descriptions for EDC1/EDC2/EDC3/EDU1 
. V10.02.01 21/06/2011 DS C-242269 Added fields TEAM to CONM for WA Health      
. V10.01.01 25/11/2010 JP  Added fund membership no and UDF fields CAR 233088   
. V10.00.01 09/04/2010 EC  Added PMVXFVIO CAR 164849                            
. V9.11.004 07/04/2009 PV  Added PMVXPILC Presenting Illness Code il   183976   
. V9.11.003 02/04/2009 JT  Added Reason Theatre Incomplete                      
. V9.11.002 13/03/2009 JH  Added Program Identifier                             
. V9.11.001 16/02/2009 PV  Added PMVXPOEC Patient Online Elig Consent 183976    
. V9.09.001 24/09/2007 JH  Added PMVXATCP                                       
. V9.09.002 24/09/2007                                                          
. V9.09.003 05/11/2007                                                          
. V9.09.004 10/04/2008 PV  Changed Release to Enduring POA / IFC CAR 163717     
. V9.11.001 20/11/2008 EC  Added PMVXHFGN to PMVXFUPI CAR 183976                
. *----------------------------------------------------------------------
. * Include Name  :   PMSVX1FD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Visit Extension Table              
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsvx1af.dat
. *
. * Index Values  :   KEY8    KEY16   KEY11   KEY24                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSVX1A1   IFILE    SQL, FIXED=1066, KEY="U1-8"
PMSVX1A2   IFILE    SQL, FIXED=1066, KEY="U9-16,1-8"
PMSVX1A3   IFILE    SQL, FIXED=1066, KEY="U682-684,1-8"
PMSVX1A4   IFILE    SQL, FIXED=1066, KEY="U554-561,562-569,1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMVXVISN  DIM       8      8        1     Visit Number                       
PMVXVSDT  DIM       8      8        9     Visit Date                         
PMVXDOCA  DIM       10     10       17    Attending Doctor (patdo1af)        
PMVXDOCT  DIM       10     10       27    Treating Doctor (patdo1af)         
PMVXCSNR  DIM       1      1        37    Consent release info (0=NO,1=YES)  
PMVXPOST  DIM       8      8        38    Post Code                          
PMVXPIND  DIM       3      3        46    Privacy Indicator (Cat PV)         
PMVXVLOC  DIM       40     40       49    Valuables Location                 
PMVXCFSG  DIM       1      1        89    Claim Form Signed (0=NO,1=YES)     
PMVXINGP  DIM       1      1        90    Inform Registered GP               
.                                         (0=NO,1=YES,2=Not Stated)            
PMVXCPTH  DIM       3      3        91    Critical Pathway (Cat PW)          
PMVXHCP1  DIM       1      1        94    Notify HCP1 (0=NO,1=YES)           
PMVXHCP2  DIM       1      1        95    Notify HCP2 (0=NO,1=YES)           
PMVXHCP3  DIM       1      1        96    Notify HCP3 (0=NO,1=YES)           
PMVXHCP4  DIM       1      1        97    Notify HCP4 (0=NO,1=YES)           
PMVXRHC1  DIM       10     10       98    Referring HCP 1 (pmshcpaf)         
PMVXRH1G  DIM       10     10       108   Referring HCP 1 Practice (pmshclaf)
PMVXRH1C  DIM       2      2        118   Referring HCP 1 Grp Count (pmshcgaf
PMVXRHC2  DIM       10     10       120   Referring HCP 2 (pmshcpaf)         
PMVXRH2G  DIM       10     10       130   Referring HCP 2 Practice (pmshclaf)
PMVXRH2C  DIM       2      2        140   Referring HCP 2 Grp Count (pmshcgaf
PMVXRHC3  DIM       10     10       142   Referring HCP 3 (pmshcpaf)         
PMVXRH3G  DIM       10     10       152   Referring HCP 3 Practice (pmshclaf)
PMVXRH3C  DIM       2      2        162   Referring HCP 3 Grp Count (pmshcgaf
PMVXRHC4  DIM       10     10       164   Referring HCP 4 (pmshcpaf)         
PMVXRH4G  DIM       10     10       174   Referring HCP 4 Practice (pmshclaf)
PMVXRH4C  DIM       2      2        184   Referring HCP 4 Grp Count (pmshclaf
PMVXABRG  DIM       3      3        186   Aboriginality (PRS/2) (Cat VA)     
PMVXCADM  DIM       3      3        189   Admission Criterion (PRS/2) (Cat VB
PMVXIRAD  DIM       3      3        192   Intent to Readmit (PRS/2) (Cat VR) 
PMVXIDUS  DIM       3      3        195   Intend Stay Duration (PRS/2) Cat VI
PMVXCRAV  DIM       3      3        198   Carer Availability (PRS/2) (Cat VK)
PMVXRCCT  DIM       3      3        201   Crit. Care Xfer Reason (PRS/2) (VJ)
PMVXAPWD  DIM       3      3        204   Admitting Point Ward (Cat ap)      
PMVXAPBD  DIM       3      3        207   No Longer in Use                   
PMVXPOWD  DIM       3      3        210   Post-Op Ward (patwr1af)            
PMVXPOBD  DIM       3      3        213   Post-Op Bed (patwr1af)             
PMVXPSTY  DIM       1      1        216   Parent Staying (0=NO,1=YES)        
PMVXVALW  DIM       1      1        217   Visitor Allowed (0=NO,1=YES)       
PMVXPALW  DIM       1      1        218   Phone Calls Allowed? (0=NO,1=YES)  
PMVXINDC  DIM       1      1        219   Intended Day Case (0=NO,1=YES)     
PMVXMDAV  DIM       3      3        220   Mode of Arrival (Cat VM)           
PMVXFRMS  DIM       3      3        223   Forms (Cat VF)                     
PMVXCSNG  DIM       3      3        226   Coder Snags (Cat VN)               
PMVXPWGT  FORM      6      4        229   Patient Weight(Convert to FORM 4.2)
PMVXPHGT  FORM      6      4        233   Patient Height                     
PMVXDHWR  DIM       8      8        237   Date Height/Weight Record. ccyymmdd
PMVXEDC1  DIM       10     10       245   Secondary Doctor (shared care)     
PMVXEDC2  DIM       10     10       255   Resident (wahealth)                
PMVXEDC3  DIM       10     10       265   Registrar (wahealth)               
PMVXHOME  DIM       1      1        275   Homeless Person (0=NO,1=YES)       
PMVXUDF1  DIM       50     50       276   User Defined Free Format 1         
PMVXUDF2  DIM       50     50       326   User Defined Free Format 2         
PMVXUDF3  DIM       50     50       376   User Defined Free Format 3         
PMVXUDF4  DIM       50     50       426   User Defined Free Format 4         
PMVXUDT1  DIM       13     13       476   User Def. Date/Time 1 ccyymmddhh:mm
PMVXUDT2  DIM       13     13       489   User Def. Date/Time 2 ccyymmddhh:mm
PMVXUDT3  DIM       13     13       502   User Def. Date/Time 3 ccyymmddhh:mm
PMVXUDT4  DIM       13     13       515   User Def. Date/Time 4 ccyymmddhh:mm
PMVXUDT5  DIM       13     13       528   User Def. Date/Time 5 ccyymmddhh:mm
PMVXUDT6  DIM       13     13       541   User Def. Date/time 6 ccyymmddhh:mm
PMVXCDTE  DIM       8      8        554   Date record created (ccyymmdd)     
PMVXCTIM  DIM       8      8        562   Time record created (hh:mm:ss)     
PMVXWEBC  DIM       10     10       570   WEB User Id rec. creator (websecaf)
PMVXLUPD  DIM       8      8        580   Last Update Date (ccyymmdd)        
PMVXLUPT  DIM       8      8        588   Last Update Time (hh:mm:ss)        
PMVXWEBU  DIM       10     10       596   WEB User Id rec. update (websecaf) 
PMVXMHLS  DIM       3      3        606   Mental Health Legal Status (LS)    
PMVXPICD  DIM       9      9        609   Provisional ICD10 Code             
PMVXRMOR  DIM       3      3        618   RMO Responsible Cat MO             
PMVXASUT  DIM       3      3        621   Admission Service Unit Type Cat KA 
PMVXELPS  DIM       3      3        624   Elective Patient Status Cat KC     
PMVXEMPL  DIM       3      3        627   Employment Status Cat KD           
PMVXFINP  DIM       3      3        630   Which Financial Program Cat KE     
PMVXOCCP  DIM       3      3        633   Occupation Cat KF                  
PMVXPALC  DIM       3      3        636   Involvement in Palliat Care Cat KG 
PMVXPPAL  DIM       3      3        639   Prev Non-Admitt Palliat Care Cat KH
PMVXPPPT  DIM       3      3        642   Public/Private Patients Cat KI     
PMVXPSOS  DIM       3      3        645   Pension Status on Separation Cat KJ
PMVXPYSP  DIM       3      3        648   Payment Status on Separation Cat KK
PMVXQLDB  DIM       3      3        651   Banding/Type of Episode for QLDHDP 
PMVXREAD  DIM       3      3        654   Re-Admission in 28 Days Cat KM     
PMVXUDIN  DIM       3      3        657   Discharge Intention Cat KN         
PMVXUREA  DIM       3      3        660   Unplanned Readmission Cat KO       
PMVXUSAC  DIM       3      3        663   Usual Accommodation Cat KP         
PMVXUVTH  DIM       3      3        666   Unplanned Visit to Theatre Cat KB  
PMVXINTR  DIM       1      1        669   Interpreter Required? (0=NO,1=YES) 
PMVXLNG1  DIM       3      3        670   Preferred Language 1 (Cat LA)      
PMVXASGC  DIM       9      9        673   ABS AGSC                           
PMVXMHOS  DIM       3      3        682   Multi Hospital ID (pathspaf)       
PMVXDSPD  DIM       8      8        685   Disch Summary Produced (ccyymmdd)  
PMVXDSIF  DIM       1      1        693   Disch Summary (I)nterim / (F)inal  
PMVXPRMI  DIM       1      1        694   Participate/Receive Marketing Info 
PMVXPRAI  DIM       1      1        695   Participate/Receive Advertising Inf
PMVXPRES  DIM       1      1        696   Participate in Research Projects   
PMVXUITR  DIM       1      1        697   Use Information for Training       
PMVXRPOA  DIM       1      1        698   Release to Enduring POA / IFC      
PMVXRCN1  DIM       1      1        699   Release to Contact 1 ptmxnrnm      
PMVXRCN2  DIM       1      1        700   Release to Contact 2 ptmxexnm      
PMVXRHFU  DIM       1      1        701   Release to Health Fund             
PMVXRDVA  DIM       1      1        702   Release to DVA                     
PMVXRSLO  DIM       1      1        703   RSL Visit OK                       
PMVXMLOC  DIM       3      3        704   Medical Record Location (Cat MV)   
PMVXPACC  DIM       3      3        707   Preferred Accommodation (Cat BP)   
PMVXEDU1  DIM       3      3        710   Secondary Unit (shared care Cat AC)
PMVXEDU2  DIM       3      3        713   Extra Doctor Unit 2 (Cat AC)       
PMVXEDU3  DIM       3      3        716   Extra Doctor Unit 3 (Cat AC)       
PMVXPRGM  DIM       8      8        719   Program Code                       
PMVXCONF  DIM       1      1        727   Appointment Confirmed 0=No 1=Yes   
PMVXEOCL  DIM       8      8        728   EOC Link admission no.             
PMVXSLOC  DIM       3      3        736   Location SOR (Cat SG)              
PMVXSCLI  DIM       3      3        739   Clinical SOR (Cat SH)              
PMVXSTRA  DIM       3      3        742   Transport SOR (Cat.SI)             
PMVXQASN  DIM       12     12       745   QAS Number                         
PMVXATCP  DIM       1      1        757   All theatre charges posted (1=yes) 
PMVXATIM  DIM       8      8        758   Arrival Time (hh:mm:ss)            
PMVXITIM  DIM       8      8        766   Interview Time (hh:mm:ss)          
PMVXHFGN  DIM       40     40       774   Health Fund First Given Name Alias 
PMVXHFSN  DIM       40     40       814   Health Fund Surname Alias          
PMVXFUPI  DIM       2      2        854   Health Fund UPI                    
PMVXPOEC  DIM       1      1        856   Patient Online Eligibility Consent 
PMVXPGID  DIM       3      3        857   Program Identifier (Cat PK)        
PMVXTICM  DIM       3      3        860   Reason Theatre Incomplete Catg Rt  
PMVXPILC  DIM       3      3        863   Presenting Illness Code CAT (il)   
PMVXFVIO  DIM       3      3        866   Family Violence (Cat fv)           
PMVXFNDM  DIM       19     19       869   Health Fund Membership Number      
PMVXUDF5  DIM       3      3        888   Coding Delay Reason (Cat dr)       
PMVXUDF6  DIM       3      3        891   Prev Specialized Treatment (Cat YE)
PMVXUDF7  DIM       3      3        894   Upload to MyHR (0=No,1=Yes)        
PMVXUDF8  DIM       3      3        897   NSW Referred to on Sep (Cat YF)    
PMVXUDF9  DIM       3      3        900   Death Place (Cat lj)               
PMVXUD10  DIM       3      3        903   Receive a Patient Survey (Cat ae)  
PMVXUD11  DIM       3      3        906   Find out about this hosp (Cat af)  
PMVXUD12  DIM       3      3        909   Reason for Transfer (Cat rT)       
PMVXUD13  DIM       3      3        912   NDIS Participant Flag (Cat N)      
PMVXUD14  DIM       3      3        915   User defined Category Code         
PMVXUD15  DIM       3      3        918   Anaesthetic Type for Billing       
.                                         (Cat OA)                             
PMVXTEAM  DIM       5      5        921   Team                               
PMVXNWHC  DIM       3      3        926   Non WA Hospital Contact (Cat cw)   
PMVXEDDT  DIM       8      8        929   Expected Delivery Date (ccyymmdd)  
PMVXPHLD  DIM       3      3        937   Property Held (Cat ps)             
PMVXPLOC  DIM       3      3        940   Property Location (Cat pt)         
PMVXDTRT  DIM       8      8        943   Date Returned (ccyymmdd)           
PMVXDFLG  DIM       9      9        951   Disaster Flag                      
PMVXFSRC  DIM       3      3        960   Funding Source (Cat cx)            
PMVXCONM  DIM       40     40       963   Contributor Name                   
PMVXCPDD  DIM       8      8        1003  Care Plan Documented Date          
PMVXPBMI  DIM       5      5        1011  Patient Body Mass Index            
PMVXCNID  DIM       10     10       1016  Visit Confirmed WEB User Id        
.                                         (websecaf)                           
PMVXCNDT  DIM       13     13       1026  Visit Confirmed Date and Time      
.                                         (ccyymmddhh:mm)                      
PMVXCASE  DIM       10     10       1039  Case Team (allcasaf)               
PMVXEAFL  DIM       1      1        1049  Eclipse Adjustment Flag            
.                                         Blank or 0 = No                      
.                                         1 = Yes                              
PMVXADMP  DIM       1      1        1050  Adm Paperwork Received             
.                                         Blank or 0 = No, 1 = Yes             
PMVXCONO  DIM       1      1        1051  Consent Obtained                   
.                                         Blank or 0 = No, 1 = Yes             
PMVXMEDH  DIM       1      1        1052  Medical History Received           
.                                         Blank or 0 = No, 1 = Yes             
PMVXSPAR  DIM       13     13       1053  Spare                              
.
.End of Record                      1066 
.
