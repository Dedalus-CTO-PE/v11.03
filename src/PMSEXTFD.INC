. V10.13.01 07/11/2018 SA C-0837357 Changed description for PMEXCAT1 to "Rank"  
. V10.08.01 01/04/2016 SA C-0296379 Added PMEXFSRC, PMEXHFND, PMEXFTBL, PMEXHFMN
. V                                  & PMEXHFCN                                 
. V10.04.01 26/02/2014 SA C-275810 Added PMEXDANO and PMEXPMKN                  
. V10.02.00 31/05/2011 JT C-239592                                              
. V10.01.01 12/01/2011 EC  Created FD CAR 236087                                
. *----------------------------------------------------------------------
. * Include Name  :   PMSEXTFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Extra Compensable Details          
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsextaf.dat
. *
. * Index Values  :   KEY11   KEY19   KEY27                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSEXTA1   IFILE    SQL, FIXED=2752, KEY="U1-8,9-11"
PMSEXTA2   IFILE    SQL, FIXED=2752, KEY="U395-402,1-8,9-11"
PMSEXTA3   IFILE    SQL, FIXED=2752, KEY="U395-402,230-237,1-8,9-11"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMEXVISN  DIM       8      8        1     Visit Number                       
PMEXCLAM  DIM       3      3        9     Claim Code (Cat CL)                
PMEXNAME  DIM       50     50       12    Employer Name                      
PMEXADD1  DIM       35     35       62    Employer Address Line 1            
PMEXADD2  DIM       35     35       97    Employer Address Line 2            
PMEXADD3  DIM       35     35       132   Employer Address Line 3            
PMEXADD4  DIM       35     35       167   Employer Address Line 4            
PMEXPOST  DIM       8      8        202   Employer Post Code                 
PMEXTELE  DIM       20     20       210   Employer Telephone                 
PMEXADAT  DIM       8      8        230   Date of Accident (CCYYMMDD)        
PMEXABIC  DIM       1      1        238   Accepted by Insurance Company      
.                                         0 = No, 1 = Yes                      
PMEXICOD  DIM       6      6        239   Insurance Company Code             
PMEXCLMN  DIM       20     20       245   Insurance Claim Number             
PMEXICON  DIM       50     50       265   Insurance Contact Name             
PMEXCOM1  DIM       40     40       315   Comment 1                          
PMEXCOM2  DIM       40     40       355   Comment 2                          
PMEXURNO  DIM       8      8        395   U/R                                
PMEXVDAT  DIM       8      8        403   Visit Date (CCYYMMDD)              
PMEXODIN  DIM       1      1        411   Off Duty Injury                    
.                                         0 = No, 1 = Yes, 2 = N/A             
PMEXSERV  DIM       3      3        412   Service (Cat Ve)                   
PMEXRANK  DIM       50     50       415   Rank                               
PMEXSNUM  DIM       20     20       465   Service Number                     
PMEXBASE  DIM       50     50       485   Barracks / Bases                   
PMEXMCOM  DIM       3      3        535   Military Compensation (Cat Vf)     
PMEXUNIT  DIM       50     50       538   Unit                               
PMEXMCNM  DIM       80     80       588   Military Comments                  
PMEXSSNM  DIM       20     20       668   Social Security Number             
PMEXCONT  DIM       3      3        688   Country (Cat C)                    
PMEXCTEL  DIM       20     20       691   Contact Telephone                  
PMEXOMEM  DIM       20     20       711   O/S Membership (Health Fund)       
PMEXIEDT  DIM       8      8        731   Insurance Expiry Date (CCYYMMDD)   
PMEXSBIL  DIM       1      1        739   Send Bill to Local Address         
.                                         0 = No, 1 = Yes                      
PMEXTINS  DIM       1      1        740   Travel Insurance                   
.                                         0 = No, 1 = Yes                      
PMEXIPOL  DIM       20     20       741   Travel Insurance Policy Number     
PMEXIEXD  DIM       8      8        761   Policy Number Expiry Date(CCYYMMDD)
PMEXSNAM  DIM       50     50       769   Ships Name                         
PMEXSAGN  DIM       50     50       819   Shipping Agent Name                
PMEXSCON  DIM       50     50       869   Contact Name                       
PMEXDAT1  DIM       8      8        919   User Defined Date 1 (CCYYMMDD)     
PMEXDAT2  DIM       8      8        927   User Defined Date 1 (CCYYMMDD)     
PMEXDAT3  DIM       8      8        935   User Defined Date 3 (CCYYMMDD)     
PMEXDAT4  DIM       8      8        943   User Defined Date 4 (CCYYMMDD)     
PMEXDAT5  DIM       8      8        951   User Defined Date 5 (CCYYMMDD)     
PMEXTIM1  DIM       8      8        959   User Defined Time 1 (hh:mm:ss)     
PMEXTIM2  DIM       8      8        967   User Defined Time 2 (hh:mm:ss)     
PMEXTIM3  DIM       8      8        975   User Defined Time 3 (hh:mm:ss)     
PMEXTIM4  DIM       8      8        983   User Defined Time 4 (hh:mm:ss)     
PMEXTIM5  DIM       8      8        991   User Defined time 5 (hh:mm:ss)     
PMEXUYN1  DIM       1      1        999   User Defined Y/N 1                 
.                                         0 = No, 1 = Yes                      
PMEXUYN2  DIM       1      1        1000  User Defined Y/N 2                 
.                                         0 = No, 1 = Yes                      
PMEXUYN3  DIM       1      1        1001  User Defined Y/N 3                 
.                                         0 = No, 1 = Yes                      
PMEXUYN4  DIM       1      1        1002  User Defined Y/N 4                 
.                                         0 = No, 1 = Yes                      
PMEXUYN5  DIM       1      1        1003  User Defined Y/N 5                 
.                                         0 = No, 1 = Yes                      
PMEXCAT1  DIM       3      3        1004  Rank (Cat Vg)                      
PMEXCAT2  DIM       3      3        1007  User Defined Cat 2 (Cat Vh)        
PMEXCAT3  DIM       3      3        1010  User Defined Cat 3 (Cat Vi)        
PMEXCAT4  DIM       3      3        1013  User Defined Cat 4 (Cat Vj)        
PMEXCAT5  DIM       3      3        1016  User Defined Cat 5 (Cat Vk)        
PMEXUCM1  DIM       50     50       1019  User Defined Comment 1             
PMEXUCM2  DIM       50     50       1069  User Defined Comment 2             
PMEXUCM3  DIM       50     50       1119  User Defined Comment 3             
PMEXUCM4  DIM       50     50       1169  User Defined Comment 4             
PMEXUCM5  DIM       50     50       1219  User Defined Comment 5             
PMEXSLNM  DIM       50     50       1269  Solicitor Name                     
PMEXSAD1  DIM       35     35       1319  Solicitor Address Line 1           
PMEXSAD2  DIM       35     35       1354  Solicitor Address Line 2           
PMEXSAD3  DIM       35     35       1389  Solicitor Address Line 3           
PMEXSAD4  DIM       35     35       1424  Solicitor Address Line 4           
PMEXSPOS  DIM       8      8        1459  Solicitor Post Code                
PMEXSTEL  DIM       20     20       1467  Solicitor Telephone                
PMEXSCNM  DIM       50     50       1487  Solicitor Contact Name             
PMEXVTYP  DIM       3      3        1537  Visa Type (Cat vt)                 
PMEXVEXP  DIM       8      8        1540  Visa Expiry Date (CCYYMMDD)        
PMEXPASN  DIM       20     20       1548  Passport Number                    
PMEXPASC  DIM       3      3        1568  Passport Country (Cat C)           
PMEXOSVS  DIM       3      3        1571  Overseas Visitor Status (Cat Vl)   
PMEXBASC  DIM       3      3        1574  Barracks / Bases Code (Cat Br)     
PMEXECON  DIM       50     50       1577  Employer Contact Name or           
.                                         Free Format Name of School           
PMEXEPHN  DIM       20     20       1627  Employer Contact Phone             
PMEXCAD1  DIM       35     35       1647  Free Format Address Line 1         
.                                         (Employer,Other School,Shipping Addrs
.                                         )                                    
PMEXCAD2  DIM       35     35       1682  Free Format Address Line 2         
PMEXCAD3  DIM       35     35       1717  Free Format Address Line 3         
PMEXCAD4  DIM       35     35       1752  Free Format Address Line 4         
PMEXCPCD  DIM       8      8        1787  Free Format Postcode               
PMEXCNAM  DIM       50     50       1795  Free Format Contact Name           
PMEXCPHN  DIM       20     20       1845  Free Format Contact Phone Number   
PMEXCINJ  DIM       3      3        1865  Cause of Injury (Cat IK)           
PMEXINCD  DIM       3      3        1868  Injury Code (Cat IJ)               
PMEXACCF  DIM       3      3        1871  Work Related (Cat IQ)              
PMEXPLIN  DIM       3      3        1874  Place injury occurred (Cat IP)     
PMEXACTI  DIM       3      3        1877  Activity when injured (Cat IO)     
PMEXADTE  DIM       8      8        1880  ACC Decline Date (ccyymmdd)        
PMEXATME  DIM       8      8        1888  Accident Time (hh:mm:ss)           
PMEXACLC  DIM       3      3        1896  Accident Location (Cat IM)         
PMEXALOC  DIM       50     50       1899  Accident Location                  
PMEXAINZ  DIM       1      1        1949  Accident in NZ Y/N (0=No,1=Yes)    
PMEXMOVV  DIM       1      1        1950  Involves Moving Vehicle on Pub.Road
.                                         0=No 1=Yes                           
PMEXSPTI  DIM       1      1        1951  Sporting Injury Y/N                
.                                         0=No 1=Yes                           
PMEXSPRT  DIM       3      3        1952  Sport Name (Cat IB)                
PMEXRECI  DIM       1      1        1955  Recurring Injury Indicator Y/N     
.                                         0=No 1=Yes                           
PMEXTRIC  DIM       1      1        1956  Treatment Injury Claim Y/N         
.                                         0=No 1=Yes                           
PMEXESTA  DIM       3      3        1957  Employment Status (Cat IF)         
PMEXPDDT  DIM       8      8        1960  Patient Declaration Date           
PMEXARG1  DIM       40     40       1968  Authorized Representative Giv.Name1
PMEXARG2  DIM       40     40       2008  Authorized Representative Giv.Name2
PMEXARSN  DIM       40     40       2048  Authorized Representative Surname  
PMEXARTL  DIM       4      4        2088  Authorized Representative Title    
PMEXARRP  DIM       10     10       2092  Authorized Representative Relation 
PMEXASST  DIM       1      1        2102  Assistance is Required (Y/N)       
.                                         0=No 1=Yes                           
PMEXNEED  DIM       1      1        2103  Need to call HP Y/N 0=No,1=Yes     
PMEXCNOR  DIM       1      1        2104  Continue Normal Hours of Work Y/N  
.                                         0=No 1=Yes                           
PMEXALTW  DIM       1      1        2105  Alternative Work Indicator Y/N     
.                                         0=No 1=Yes                           
PMEXTYPA  DIM       3      3        2106  Type of Alternative Work (Cat IH)  
PMEXSALT  DIM       8      8        2109  Start Date of Alternative Work     
PMEXHPDA  DIM       2      2        2117  Hours per day of Alternative Work  
PMEXUNFD  DIM       3      3        2119  Unfit for Work For Duration        
PMEXUNFT  DIM       3      3        2122  Unfit for Work for Type(Cat UI)    
PMEXFISD  DIM       8      8        2125  Full Incapacity Start Date         
PMEXRNWD  DIM       8      8        2133  Return to Normal Work Date         
PMEXCSTA  DIM       1      1        2141  Claim Status                       
.                                         0=Existing 1=Parked 2=Completed      
PMEXTWRK  DIM       3      3        2142  Type of Work (Cat IX)              
PMEXOEST  DIM       50     50       2145  Other Employment Status            
PMEXTPRO  DIM       10     10       2195  HCP Treatment Provider             
PMEXAUTH  DIM       20     20       2205  Authorisation Number               
PMEXAUDA  DIM       8      8        2225  Authorisation Date                 
PMEXREFN  DIM       20     20       2233  M.A.B. Reference Number            
PMEXPOLI  DIM       20     20       2253  Police Station Accident reported to
PMEXREGO  DIM       36     36       2273  Car Rego Number involved           
PMEXDRPS  DIM       1      1        2309  1=Driver 2=Passenger               
PMEXENGD  DIM       20     20       2310  While Eng.in-free format entry     
PMEXINJR  DIM       30     30       2330  Patient Injured when               
PMEXMTRN  DIM       10     10       2360  Mode of Transport                  
PMEXMSEV  DIM       30     30       2370  Mechanism of severist injury       
PMEXRSEV  DIM       20     20       2400  Region of severist injury          
PMEXODD1  DIM       30     30       2420  Other Driver details line 1        
PMEXODD2  DIM       30     30       2450  Other Driver details line 2        
PMEXODD3  DIM       30     30       2480  Other Driver details line 3        
PMEXTCLM  DIM       1      1        2510  TAC Clm Form completed/Settled WC  
.                                         or Settled MVIT?                     
.                                         0=No 1=Yes                           
PMEXMTYP  DIM       3      3        2511  Role in Accident (Cat RA)          
PMEXALEL  DIM       3      3        2514  Alternate Election (Cat CL)        
PMEXPOLC  DIM       1      1        2517  Police Officer 1=Yes 0=No          
PMEXIDNO  DIM       20     20       2518  ID Number                          
PMEXSCHL  DIM       6      6        2538  Name of School (pateoraf)          
PMEXCUID  DIM       10     10       2544  WEB User ID Created (websecaf)     
PMEXCDAT  DIM       8      8        2554  Date Record Created (CCYYMMDD)     
PMEXCTIM  DIM       8      8        2562  Time Record Created (hh:mm:ss)     
PMEXUUID  DIM       10     10       2570  WEB User ID Updated (websecaf)     
PMEXUDAT  DIM       8      8        2580  Date Record Updated (CCYYMMDD)     
PMEXUTIM  DIM       8      8        2588  Time Record Updated (hh:mm:ss)     
PMEXDANO  DIM       20     20       2596  Defence Approval Number (DAN)      
PMEXPMKN  DIM       20     20       2616  PMKeys Number                      
PMEXFSRC  DIM       3      3        2636  Funding Source (Cat cx)            
PMEXHFND  DIM       6      6        2639  Health Fund Code (patfn1af)        
PMEXFTBL  DIM       8      8        2645  Health Fund Table (patfn1af)       
PMEXHFMN  DIM       19     19       2653  Health Fund Membership Number      
PMEXHFCN  DIM       40     40       2672  Health Fund Contributor Name       
PMEXSPAR  DIM       40     40       2712  Spare variable                     
.
.End of Record                      2752 
.
