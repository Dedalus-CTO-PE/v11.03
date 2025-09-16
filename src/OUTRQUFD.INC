. *****************************************************************************
. *                                                                           *
. * Include Name  : OUTRQUFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Outpatients HL7 Messages -         *
. *                 Referral Letter Queue                                     *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : outrquaf.dat                                              *
. *                                                                           *
. * Author        : Steve Armstrong  26/02/2009  CAR 177234                   *
. *                                                                           *
. * Modifications :                                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
OUTRQUA1   IFILE    SQL, FIXED=530, KEY="U1-20"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DOTRQMES  DIM       20     20       1     Message Id
.
.OTRLOUTN  DIM       8      8        21    Outpatient Number                  
.OTRLURNO  DIM       8      8        29    U/R Number                         
.OTRLDATE  DIM       8      8        37    Letter Date                        
.OTRLRDOC  DIM       10     10       45    Referring HCP                      
.OTRLCONS  DIM       6      6        55    Consultant                         
.OTRLDEPT  DIM       3      3        61    Department                         
.OTRLPRIO  DIM       3      3        64    Priority                           
.OTRLDIAG  DIM       50     50       67    Diagnosis                          
.OTRLUSD1  DIM       3      3        117   User Defined Field 1               
.OTRLUSD2  DIM       3      3        120   User Defined Field 2               
.OTRLUSD3  DIM       3      3        123   User Defined Field 3               
.OTRLUSD4  DIM       3      3        126   User Defined Field 4              
. -----  Booking Details  -----
. If this referral results in an outpatient booking then the
. booking details will be stored in the following fields
.
.OTRLBSIT  DIM       6      6        139   Booked Site                        
.OTRLBCLI  DIM       6      6        135   Booked Clinic                      
.OTRLBDTE  DIM       8      8        141   Booked Date                        
.OTRLBSTR  DIM       5      5        149   Booked Start Time                  
.OTRLBSLT  DIM       3      3        154   Booked Slot Number                 
. -----  New Variables  -----
.OTRLRFGP  DIM       10     10       157   Referring GP                       
.OTRLGPPC  DIM       10     10       167   GP Practice Code                   
.OTRLRQST  DIM       20     20       177   Request Number                     
.OTRLCDTE  DIM       8      8        197   Request for Appointment Canc. Date 
.OTRLREAS  DIM       3      3        205   Reason for Request        "RQ"     
.OTRLSPFC  DIM       3      3        208   Specialty Function Code   "OF"     
.OTRLCAD1  DIM       35     35       211   Correspondence Address Line 1      
.OTRLCAD2  DIM       35     35       246   Correspondence Address Line 2      
.OTRLCAD3  DIM       35     35       281   Correspondence Address Line 3      
.OTRLCAD4  DIM       35     35       316   Correspondence Address Line 4      
.OTRLCPC   DIM       8      8        351   Correspondence Post Code           
.OTRLECRN  DIM       20     20       359   ECR Approval Number                
.OTRLGPFH  DIM       20     20       379   GPFH Approval Number               
.OTRLGPPT  DIM       2      2        399   GP Practice count                  
.OTRLOPER  DIM       4      4        401   Operator who recorded O/P referral 
.OTRLCTYP  DIM       6      6        405   Clinic Type of Referral            
.OTRLSITE  DIM       6      6        411   Site Code of Referral              
.OTRLSRCE  DIM       3      3        417   Source of Referral                 
.OTRLRHCP  DIM       10     10       420   Responsible HCP                    
.OTRLDREC  DIM       8      8        430   Date Referral Received             
.OTRLDPRI  DIM       8      8        438   Date of Priority                   
.OTRLPURC  DIM       3      3        446   Expected Purchaser                 
.OTRLTREF  FORM      1      2        449   Referral Type (0=Outpatient, 1=Other)
.OTRLRANK  DIM       6      6        451   Patient Rank                       
.OTRLUDAT  DIM       8      8        457   Date Record Updated (CCYYMMDD)     
.OTRLUTIM  DIM       8      8        465   Time Record Updated (hh:mm:ss)     
.OTRLUUID  DIM       10     10       473   Web User Id Updated (websecaf)     
.OTRLCDAT  DIM       8      8        483   Date Record Created (CCYYMMDD)     
.OTRLCTIM  DIM       8      8        491   Time Record Created (hh:mm:ss)     
.OTRLCUID  DIM       8      8        499   Web User Id Created (websecaf)     
.OTRLCLAM  DIM       3      3        507   Claim Code (Category CL)           
OTRQSPAR  DIM       20     20       510   Spare                              
.
.End of Record                      530  
.
OTRQMESG  FORM      20
