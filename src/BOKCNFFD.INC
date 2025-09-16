. 9.10 .001 02/05/2008 JH  Created for CAR 140255                            
. 9.10 .002 06/05/2008                                                       
. 9.10 .003 08/05/2008                                                       
. *----------------------------------------------------------------------
. * Include Name  :   BOKCNFFD.INC
. *
. * Function      :   File Def'n Include for Bookings                           
. *                   Booking Confirmation Table         
. *
. * File Type     :   SQL
. *
. * File Name     :   bokcnfaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
BOKCNFA1   IFILE    SQL, FIXED=729, KEY="U1-8"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
BKCFADMN  DIM       8      8        1     Booking Number                     
BKCFPCPW  DIM       40     40       9     Person completed with              
BKCFRELP  DIM       10     10       49    Relationship to patient (pmsrelaf) 
BKCFPDTC  DIM       1      1        59    Patient Details correct 1=Yes 0=No 
BKCFUIBA  DIM       1      1        60    Updated IBA 1=Yes 0=No             
BKCFUHAS  DIM       1      1        61    Updated HAS 1=Yes 0=No             
BKCFODCF  DIM       1      1        62    Operation Date confirmed 1=Yes 0=No
BKCFATCF  DIM       1      1        63    Admission Time confirmed 1=Yes 0=No
BKCFFITM  DIM       1      1        64    Fasting Inst - Time 1=Yes 0=No     
BKCFCANC  DIM       1      1        65    Cancellation 1=Yes 0=No            
BKCFRCAN  DIM       3      3        66    Reason for cancellation (Cat BC)   
BKCFAILL  DIM       1      1        69    Any Illness 1=Yes 0=No             
BKCFAREG  DIM       3      3        70    Any Illness refer to (Cat AC)      
BKCFCPOX  DIM       1      1        73    Chicken Pox/measels contact 1=Yes  
BKCFCREG  DIM       3      3        74    CP refert to (Cat AC)              
BKCFVDOT  DIM       1      1        77    Vomitting/Diarrhea/Other 1=Yes     
BKCFVREG  DIM       3      3        78    Vomitting refer to reg (Cat AC)    
BKCFHCON  DIM       1      1        81    History of constip 1=Yes 0=No      
BKCFCSPC  DIM       127    127      82    Constipation details               
BKCFRLMH  DIM       1      1        209   Relevant Medical History 1=Yes 0=No
BKCFMHAS  DIM       1      1        210   Medical History Update in HAS 1=Yes
BKCFMHSP  DIM       127    127      211   Medical History Details            
BKCFMQUE  DIM       1      1        338   Medications query 1=Yes 0=No       
BKCFMREG  DIM       3      3        339   Medications Query refer to (Cat AC)
BKCFMQSP  DIM       127    127      342   Med query details                  
BKCFALLG  DIM       1      1        469   Allergies 1=Yes 0=No               
BKCFAHAS  DIM       1      1        470   Allergies updated in HAS 1=Yes     
BKCFALSP  DIM       127    127      471   Allergies details                  
BKCFLCLT  DIM       1      1        598   Luggage/Clothing 1=Yes 0=No        
BKCFFSAT  DIM       1      1        599   Family/Sibbling Attendance 1=Yes   
BKCFOVRN  DIM       1      1        600   Overnight 1=Yes 0=No               
BKCFWTIM  DIM       1      1        601   Waiting Time 1=Yes 0=No            
BKCFDADP  DIM       1      1        602   Direction to admission point 1=Yes 
BKCFCNTN  DIM       20     20       603   Contact number                     
BKCFPARK  DIM       1      1        623   Parking 1=Yes 0=No                 
BKCFCNST  DIM       3      3        624   Confirmation Status (Cat cu)       
BKCFWEBC  DIM       10     10       627   WEB User Id rec. creator (websecaf)
BKCFCDAT  DIM       8      8        637   Date record created (ccyymmdd)     
BKCFCTIM  DIM       8      8        645   Time record created (hh:mm:ss)     
BKCFWEBU  DIM       10     10       653   WEB User Id rec. update (websecaf) 
BKCFUDAT  DIM       8      8        663   Last Update Date (ccyymmdd)        
BKCFUTIM  DIM       8      8        671   Last Update Time (hh:mm:ss)        
BKCFSPAR  DIM       50     50       679   Spare                              
.
.End of Record                      729  
.
