. *****************************************************************************
. *                                                                           *
. * Include Name  : OUTRF1FD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Outpatients                        *
. *                 New Referral Letter                                       *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : outrf1af.dat                                              *
. *                                                                           *
. * Author        : Steve O'Gorman   27/02/1992                               *
. *                                                                           *
. * Modifications : V10.12.01 17/04/2018 Steve Armstrong  TSK:0851975         *
. *                 Added Triage Status (OTRLTRGS)                            *
. *                 V9.04.01 30/03/2005 Jill Habasque CAR 59996               *
. *                 Added claim code                                          *
. *                 V9.03.01 10/12/2003 Ebon Clements CAR 45549               *
. *                 Added update/created date, time and user id.              *
. *                 Changed doctor fields to be 10 characters                 *
. *                 28/10/1993    Justin Coates  (GP Practice changes)        *
. *                 added OTRLGPPT                                            *
. *                 03/10/1994    Paul Howells   SRF441025                    *
. *                 added 6th index.                                          *
. *                 13/10/1995   Howellsy         suht
. *                 added otrloper
. *                 23/04/1996   Howellsy         suht
. *                 added otrlctyp
. *                 added otrlsite
. *                 16/09/1996   Howellsy         nz
. *                 added otrlsrce,otrlrhcp,otrldrec,otrldpri
. *                 21/04/1997   Howellsy         rha
. *                 added otrlrank
. *****************************************************************************
.
.Data File Definition
.--------------------
OUTRF1A1   IFILE    SQL, FIXED=526, KEY="U1-8"                                  
OUTRF1A2   IFILE    SQL, FIXED=526, KEY="U9-16,17-24,1-8"                       
OUTRF1A3   IFILE    SQL, FIXED=526, KEY="U44-46,17-24,1-8"                      
OUTRF1A4   IFILE    SQL, FIXED=526, KEY="U25-34,17-24,1-8"                      
OUTRF1A5   IFILE    SQL, FIXED=526, KEY="U35-40,17-24,1-8"                      
OUTRF1A6   IFILE    SQL, FIXED=526, KEY="U17-24,1-8"                            
OUTRF1A7   IFILE    SQL, FIXED=526, KEY="U385-390,17-24,1-8"                    
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTRLOUTN  DIM       8      8        1     Outpatient Number                  
OTRLURNO  DIM       8      8        9     U/R Number                         
OTRLDATE  DIM       8      8        17    Letter Date                        
OTRLRDOC  DIM       10     10       25    Referring HCP                      
OTRLCONS  DIM       6      6        35    Consultant                         
OTRLDEPT  DIM       3      3        41    Department (Cat A)
OTRLPRIO  DIM       3      3        44    Priority                           
OTRLDIAG  DIM       50     50       47    Diagnosis                          
OTRLUSD1  DIM       3      3        97    User Defined Field 1               
OTRLUSD2  DIM       3      3        100   User Defined Field 2               
OTRLUSD3  DIM       3      3        103   User Defined Field 3               
OTRLUSD4  DIM       3      3        106   User Defined Field 4              
. -----  Booking Details  -----
. If this refferal results in an outpatient booking then the
. booking details will be stored in the following fields
.
OTRLBSIT  DIM       6      6        109   Booked Site                        
OTRLBCLI  DIM       6      6        115   Booked Clinic                      
OTRLBDTE  DIM       8      8        121   Booked Date                        
OTRLBSTR  DIM       5      5        129   Booked Start Time                  
OTRLBSLT  DIM       3      3        134   Booked Slot Number                 
. -----  New Variables  -----
OTRLRFGP  DIM       10     10       137   Referring GP                       
OTRLGPPC  DIM       10     10       147   GP Practice Code                   
OTRLRQST  DIM       20     20       157   Request Number                     
OTRLCDTE  DIM       8      8        177   Request for Appointment Canc. Date 
OTRLREAS  DIM       3      3        185   Reason for Request        "RQ"     
OTRLSPFC  DIM       3      3        188   Specialty Function Code   "OF"     
OTRLCAD1  DIM       35     35       191   Correspondence Address Line 1      
OTRLCAD2  DIM       35     35       226   Correspondence Address Line 2      
OTRLCAD3  DIM       35     35       261   Correspondence Address Line 3      
OTRLCAD4  DIM       35     35       296   Correspondence Address Line 4      
OTRLCPC   DIM       8      8        331   Correspondence Post Code           
OTRLECRN  DIM       20     20       339   ECR Approval Number                
OTRLGPFH  DIM       20     20       359   GPFH Approval Number               
OTRLGPPT  DIM       2      2        379   GP Practice count                  
OTRLOPER  DIM       4      4        381   Operator who recorded O/P referral 
OTRLCTYP  DIM       6      6        385   Clinic Type of Referral            
OTRLSITE  DIM       6      6        391   Site Code of Referral              
OTRLSRCE  DIM       3      3        397   Source of Referral (Cat S)
OTRLRHCP  DIM       10     10       400   Responsible HCP                    
OTRLDREC  DIM       8      8        410   Date Referral Received             
OTRLDPRI  DIM       8      8        418   Date of Priority                   
OTRLPURC  DIM       3      3        426   Expected Purchaser                 
OTRLTREF  FORM      1      2        429   Referral Type (0=Outpatient, 1=Other)
OTRLRANK  DIM       6      6        431   Patient Rank                       
OTRLUDAT  DIM       8      8        437   Date Record Updated (CCYYMMDD)     
OTRLUTIM  DIM       8      8        445   Time Record Updated (hh:mm:ss)     
OTRLUUID  DIM       10     10       453   Web User Id Updated (websecaf)     
OTRLCDAT  DIM       8      8        463   Date Record Created (CCYYMMDD)     
OTRLCTIM  DIM       8      8        471   Time Record Created (hh:mm:ss)     
OTRLCUID  DIM       8      8        479   Web User Id Created (websecaf)     
OTRLCLAM  DIM       3      3        487   Claim Code (Category CL)           
OTRLTRGS  DIM       3      3        490   Triage Status (Cat ts)
OTRLSPRE  DIM       33     33       493   Spare                              
.
.End of Record                      526  
.
SOTRLOTN  FORM      8                     * O/P number
