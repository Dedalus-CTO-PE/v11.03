. *----------------------------------------------------------------------
. * Include Name  :   ARCVX1FD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Visit Extension Table              
. *
. * File Type     :   SQL
. *
. * File Name     :   arcvx1af.dat
. *
. * Mods          :
. *       V9.11.01  17/02/2009  Mike Laming   CAR 167860
. *                 Update Table to match PMSVX1FD - Increase size to 916, 
. *                 Add 12 new fields
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ARCVX1A1   IFILE    SQL, FIXED=916, KEY="U1-8"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ARVXVISN  DIM       8      8        1     Visit Number                       
ARVXVSDT  DIM       8      8        9     Visit Date                         
ARVXDOCA  DIM       10     10       17    Attending Doctor (patdo1af)        
ARVXDOCT  DIM       10     10       27    Treating Doctor (patdo1af)         
ARVXCSNR  DIM       1      1        37    Consent release info (0=NO,1=YES)  
ARVXPOST  DIM       8      8        38    Post Code                          
ARVXPIND  DIM       3      3        46    Privacy Indicator (Cat PV)         
ARVXVLOC  DIM       40     40       49    Valuables Location                 
ARVXCFSG  DIM       1      1        89    Claim Form Signed (0=NO,1=YES)     
ARVXINGP  DIM       1      1        90    Inform Registered GP (0=NO,1=YES)  
ARVXCPTH  DIM       3      3        91    Critical Pathway (Cat PW)          
ARVXHCP1  DIM       1      1        94    Notify HCP1 (0=NO,1=YES)           
ARVXHCP2  DIM       1      1        95    Notify HCP2 (0=NO,1=YES)           
ARVXHCP3  DIM       1      1        96    Notify HCP3 (0=NO,1=YES)           
ARVXHCP4  DIM       1      1        97    Notify HCP4 (0=NO,1=YES)           
ARVXRHC1  DIM       10     10       98    Referring HCP 1 (pmshcpaf)         
ARVXRH1G  DIM       10     10       108   Referring HCP 1 Practice (pmshclaf)
ARVXRH1C  DIM       2      2        118   Referring HCP 1 Grp Count (pmshcgaf
ARVXRHC2  DIM       10     10       120   Referring HCP 2 (pmshcpaf)         
ARVXRH2G  DIM       10     10       130   Referring HCP 2 Practice (pmshclaf)
ARVXRH2C  DIM       2      2        140   Referring HCP 2 Grp Count (pmshcgaf
ARVXRHC3  DIM       10     10       142   Referring HCP 3 (pmshcpaf)         
ARVXRH3G  DIM       10     10       152   Referring HCP 3 Practice (pmshclaf)
ARVXRH3C  DIM       2      2        162   Referring HCP 3 Grp Count (pmshcgaf
ARVXRHC4  DIM       10     10       164   Referring HCP 4 (pmshcpaf)         
ARVXRH4G  DIM       10     10       174   Referring HCP 4 Practice (pmshclaf)
ARVXRH4C  DIM       2      2        184   Referring HCP 4 Grp Count (pmshclaf
ARVXABRG  DIM       3      3        186   Aboriginality (PRS/2) (Cat VA)     
ARVXCADM  DIM       3      3        189   Admission Criterion (PRS/2) (Cat VB
ARVXIRAD  DIM       3      3        192   Intent to Readmit (PRS/2) (Cat VR) 
ARVXIDUS  DIM       3      3        195   Intend Stay Duration (PRS/2) Cat VI
ARVXCRAV  DIM       3      3        198   Carer Availability (PRS/2) (Cat VK)
ARVXRCCT  DIM       3      3        201   Crit. Care Xfer Reason (PRS/2) (VJ)
ARVXAPWD  DIM       3      3        204   Admitting Point Ward (Cat ap)      
ARVXAPBD  DIM       3      3        207   No Longer in Use                   
ARVXPOWD  DIM       3      3        210   Post-Op Ward (patwr1af)            
ARVXPOBD  DIM       3      3        213   Post-Op Bed (patwr1af)             
ARVXPSTY  DIM       1      1        216   Parent Staying (0=NO,1=YES)        
ARVXVALW  DIM       1      1        217   Visitor Allowed (0=NO,1=YES)       
ARVXPALW  DIM       1      1        218   Phone Calls Allowed? (0=NO,1=YES)  
ARVXINDC  DIM       1      1        219   Intended Day Case (0=NO,1=YES)     
ARVXMDAV  DIM       3      3        220   Mode of Arrival (Cat VM)           
ARVXFRMS  DIM       3      3        223   Forms (Cat VF)                     
ARVXCSNG  DIM       3      3        226   Coder Snags (Cat VN)               
ARVXPWGT  FORM      6      4        229   Patient Weight(Convert to FORM 4.2)
ARVXPHGT  FORM      6      4        233   Patient Height                     
ARVXDHWR  DIM       8      8        237   Date Height/Weight Record. ccyymmdd
ARVXEDC1  DIM       10     10       245   Extra Doctor Code 1 (patdo1af)     
ARVXEDC2  DIM       10     10       255   Extra Doctor Code 2 (patdo1af)     
ARVXEDC3  DIM       10     10       265   Extra Doctor Code 3 (patdo1af)     
ARVXHOME  DIM       1      1        275   Homeless Person (0=NO,1=YES)       
ARVXUDF1  DIM       50     50       276   User Defined Free Format 1         
ARVXUDF2  DIM       50     50       326   User Defined Free Format 2         
ARVXUDF3  DIM       50     50       376   User Defined Free Format 3         
ARVXUDF4  DIM       50     50       426   User Defined Free Format 4         
ARVXUDT1  DIM       13     13       476   User Def. Date/Time 1 ccyymmddhh:mm
ARVXUDT2  DIM       13     13       489   User Def. Date/Time 2 ccyymmddhh:mm
ARVXUDT3  DIM       13     13       502   User Def. Date/Time 3 ccyymmddhh:mm
ARVXUDT4  DIM       13     13       515   User Def. Date/Time 4 ccyymmddhh:mm
ARVXUDT5  DIM       13     13       528   User Def. Date/Time 5 ccyymmddhh:mm
ARVXUDT6  DIM       13     13       541   User Def. Date/time 6 ccyymmddhh:mm
ARVXCDTE  DIM       8      8        554   Date record created (ccyymmdd)     
ARVXCTIM  DIM       8      8        562   Time record created (hh:mm:ss)     
ARVXWEBC  DIM       10     10       570   WEB User Id rec. creator (websecaf)
ARVXLUPD  DIM       8      8        580   Last Update Date (ccyymmdd)        
ARVXLUPT  DIM       8      8        588   Last Update Time (hh:mm:ss)        
ARVXWEBU  DIM       10     10       596   WEB User Id rec. update (websecaf) 
ARVXMHLS  DIM       3      3        606   Mental Health Legal Status (LS)    
ARVXPICD  DIM       9      9        609   Provisional ICD10 Code             
ARVXRMOR  DIM       3      3        618   RMO Responsible Cat MO             
ARVXASUT  DIM       3      3        621   Admission Service Unit Type Cat KA 
ARVXELPS  DIM       3      3        624   Elective Patient Status Cat KC     
ARVXEMPL  DIM       3      3        627   Employment Status Cat KD           
ARVXFINP  DIM       3      3        630   Which Financial Program Cat KE     
ARVXOCCP  DIM       3      3        633   Occupation Cat KF                  
ARVXPALC  DIM       3      3        636   Involvement in Palliat Care Cat KG 
ARVXPPAL  DIM       3      3        639   Prev Non-Admitt Palliat Care Cat KH
ARVXPPPT  DIM       3      3        642   Public/Private Patients Cat KI     
ARVXPSOS  DIM       3      3        645   Pension Status on Separation Cat KJ
ARVXPYSP  DIM       3      3        648   Payment Status on Separation Cat KK
ARVXQLDB  DIM       3      3        651   Banding/Type of Episode for QLDHDP 
.                                              (Cat KL)
ARVXREAD  DIM       3      3        654   Re-Admission in 28 Days Cat KM     
ARVXUDIN  DIM       3      3        657   Discharge Intention Cat KN         
ARVXUREA  DIM       3      3        660   Unplanned Readmission Cat KO       
ARVXUSAC  DIM       3      3        663   Usual Accommodation Cat KP         
ARVXUVTH  DIM       3      3        666   Unplanned Visit to Theatre Cat KB  
ARVXINTR  DIM       1      1        669   Interpreter Required? (0=NO,1=YES) 
ARVXLNG1  DIM       3      3        670   Preferred Language 1 (Cat LA)      
ARVXASGC  DIM       9      9        673   ABS AGSC                           
ARVXMHOS  DIM       3      3        682   Multi Hospital ID (pathspaf)       
ARVXDSPD  DIM       8      8        685   Disch Summary Produced (ccyymmdd)  
ARVXDSIF  DIM       1      1        693   Disch Summary (I)nterim / (F)inal  
ARVXPRMI  DIM       1      1        694   Participate/Receive Marketing Info 
ARVXPRAI  DIM       1      1        695   Participate/Receive Advertising Inf
ARVXPRES  DIM       1      1        696   Participate in Research Projects   
ARVXUITR  DIM       1      1        697   Use Information for Training       
ARVXRPOA  DIM       1      1        698   Release to Enduring POA            
ARVXRCN1  DIM       1      1        699   Release to Contact 1 ptmxnrnm      
ARVXRCN2  DIM       1      1        700   Release to Contact 2 ptmxexnm      
ARVXRHFU  DIM       1      1        701   Release to Health Fund             
ARVXRDVA  DIM       1      1        702   Release to DVA                     
ARVXRSLO  DIM       1      1        703   RSL Visit OK                       
ARVXMLOC  DIM       3      3        704   Medical Record Location (Cat MV)   
ARVXPACC  DIM       3      3        707   Preferred Accommodation (Cat BP)   
ARVXEDU1  DIM       3      3        710   Extra Doctor Unit 1 (Cat AC)       
ARVXEDU2  DIM       3      3        713   Extra Doctor Unit 2 (Cat AC)       
ARVXEDU3  DIM       3      3        716   Extra Doctor Unit 3 (Cat AC)       
ARVXPRGM  DIM       8      8        719   Program Code                       
ARVXCONF  DIM       1      1        727   Appointment Confirmed 0=No 1=Yes   
ARVXEOCL  DIM       8      8        728   EOC Link admission no.
ARVXSLOC  DIM       3      3        736   Location SOR (Cat SG)       
ARVXSCLI  DIM       3      3        739   Clinical SOR (Cat SH)            
ARVXSTRA  DIM       3      3        742   Transport SOR (Cat.SI)           
ARVXQASN  DIM       12     12       745   QAS Number                        
ARVXATCP  DIM       1      1        757   All theatre charges posted (1=yes) 
ARVXATIM  DIM       8      8        758   Arrival Time (hh:mm:ss)         
ARVXITIM  DIM       8      8        766   Interview Time (hh:mm:ss)   
ARVXHFGN  DIM       40     40       774   Health Fund First Given Name Alias
ARVXHFSN  DIM       40     40       814   Health Fund Surname Alias    
ARVXFUPI  DIM       2      2        854   Health Fund UPI              
ARVXPOEC  DIM       1      1        856   Patient Online Eligibility Consent
ARVXSPAR  DIM       59     59       857   Spare
.
.End of Record                      916  
.
