. V **** Programmer Note **************                                         
. V      Any changes to this FD may also need to be made in BOKQUEFD.           
. V      Please check this before proceeding.                                   
.                                                                               
. V10.14.01 28/03/2019 SA C-0870496 Added new Index 2                           
. V10.05.02 30/07/2014 PV C-283332 Added BKRXPACA PAC Attended                  
. V10.05.01 30/07/2014 PV C-299131 Added BKRXDROR, BKRXUDF6, BKRXUDF7           
. V                        Moved variables in the spare into the table          
. V                        Extended spare variable                              
. V10.04.01 05/05/2014 PV C-279020 Added the following variables to the spare   
. V                        BKRXEABR - Early Booking Reason                      
. V                        BKRXAUBY - Authorised By                             
. V                        BKRXEAID - Early Booking Reason Web User ID          
. V10.03.01 16/03/2012 JP C-243341 Changed description of BKRXUDF5              
. V10.02.02 11/07/2011 PV C-243296 Added BKRXANTY, BKRXESOP                     
. V10.02.01 21/06/2011 DS C-242269 Added field ATRN for WA Health               
. V10.01.01 11/01/2011 JP  Increased description lengths to 80 CAR 234014       
. V9.11.001 17/02/2009 PV  Added BKRXPOEC - Patient Online Elg Consent 183976   
. V9.09.001 21/09/2007 JH  Added UDF Times                                      
. V9.09.002 21/09/2007                                                          
. V9.11.001 24/11/2008 EC  Added BKRXPOBD CAR 174077                            
. *----------------------------------------------------------------------
. * Include Name  :   BOKRX1FD.INC
. *
. * Function      :   File Def'n Include for Bookings                           
. *                   Booking Details file extension     
. *
. * File Type     :   SQL
. *
. * File Name     :   bokrx1af.dat
. *
. * Index Values  :   KEY8    KEY16                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
BOKRX1A1   IFILE    SQL, FIXED=626, KEY="U1-8"
BOKRX1A2   IFILE    SQL, FIXED=626, KEY="U440-447,1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
BKRXBNUM  DIM       8      8        1     Booking Number                     
BKRXPOWD  DIM       3      3        9     Post-Op Ward (patwr1af)            
BKRXADWD  DIM       3      3        12    Admitting Ward (Cat ap)            
BKRXCDTE  DIM       8      8        15    Contact Date (ccyymmdd)            
BKRXPSTY  DIM       1      1        23    Parent Staying (0=NO,1=YES)        
BKRXCNDT  DIM       8      8        24    Confirmation Date (ccyymmdd)       
BKRXUDF1  DIM       3      3        32    Canc Booking Reason W/L (Cat BE)   
BKRXUDF2  DIM       3      3        35    Model of Care (Medical book Cat BF)
BKRXUDF3  DIM       3      3        38    User Defined Field 3 (Cat BG)      
BKRXUDF4  DIM       3      3        41    User Defined Field 4 (Cat BH)      
BKRXUDF5  DIM       3      3        44    Intended Stay (Cat VI)             
BKRXUDD1  DIM       8      8        47    User Defined Date 1 (ccyymmdd)     
BKRXUDD2  DIM       8      8        55    User Defined Date 2 (ccyymmdd)     
BKRXUDD3  DIM       8      8        63    User Defined Date 3 (ccyymmdd)     
BKRXUDD4  DIM       8      8        71    User Defined Date 4 (ccyymmdd)     
BKRXUFF1  DIM       80     80       79    Procedure Description 1            
BKRXUFF2  DIM       80     80       159   Procedure Description 2            
BKRXUFF3  DIM       80     80       239   Procedure Description 3            
BKRXUFF4  DIM       80     80       319   User Defined Free Format 4         
BKRXEDC1  DIM       10     10       399   Extra Doctor Code 1 (pmshcpaf)     
BKRXEDC2  DIM       10     10       409   Extra Doctor Code 2 (pmshcpaf)     
BKRXEDC3  DIM       10     10       419   Extra Doctor Code 3 (pmshcpaf)     
BKRXODTE  DIM       8      8        429   Operation Date (ccyymmdd)          
BKRXOPRD  DIM       3      3        437   Operation Period (Cat SP)          
BKRXCRDT  DIM       8      8        440   Date record created (ccyymmdd)     
BKRXCRTM  DIM       8      8        448   Time record created (hh:mm:ss)     
BKRXWEBC  DIM       10     10       456   WEB User Id rec. creator (websecaf)
BKRXLUPD  DIM       8      8        466   Last Update Date (ccyymmdd)        
BKRXLUPT  DIM       8      8        474   Last Update Time (hh:mm:ss)        
BKRXWEBU  DIM       10     10       482   WEB User Id rec. updater (websecaf)
BKRXASRC  DIM       3      3        492   Admission Source (Category S)      
BKRXBLDT  DIM       3      3        495   Blood Type (category BO)           
BKRXCTTY  DIM       3      3        498   Contact Type (Letter No.-watletaf) 
BKRXSGBK  DIM       1      1        501   Surgical Booking (0=No 1=Yes)      
BKRXFORM  DIM       3      3        502   Forms (Cat VF)                     
BKRXCNTM  DIM       8      8        505   Confirmation Time (hh:mm:ss)       
BKRXUDT1  DIM       8      8        513   User defined time 1 (hh:mm:ss)     
BKRXUDT2  DIM       8      8        521   User defined time 2 (hh:mm:ss)     
BKRXPOBD  DIM       3      3        529   Post-Op Bed (patwr1af)             
BKRXPOEC  DIM       1      1        532   Patient Online Eligibility Consent 
BKRXDIET  DIM       3      3        533   Diet (Cat DC)                      
BKRXTRAN  DIM       3      3        536   Transport (Cat OB)                 
BKRXATRN  DIM       3      3        539   Arrival Transport (Cat SI)         
BKRXANTY  DIM       3      3        542   Anaesthetic Type (Cat OA)          
BKRXESOP  DIM       5      5        545   Estimated Op Time                  
BKRXEABR  DIM       3      3        550   Early Booking Reason (Cat b1)      
BKRXAUBY  DIM       3      3        553   Authorised By (Cat b2)             
BKRXEAID  DIM       10     10       556   Web User ID Early Booking Reason   
BKRXDROR  DIM       3      3        566   Drug Order (Cat Ba)                
BKRXUDF6  DIM       3      3        569   User Defined Field 6 (Cat Bb)      
BKRXUDF7  DIM       3      3        572   User Defined Field 7 (Cat Bc)      
BKRXPACA  DIM       1      1        575   PAC Attended 1 = Yes 0 = No        
BKRXSPAR  DIM       50     50       576   Spare                              
.
.End of Record                      626  
.
