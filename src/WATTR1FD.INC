. ******************************************************************************
. * Include Name :  WATTR1FD
. * Function     :  File Definition Include for Waiting List Patient Procedures
. * File Type    :  SQL
. * File Name    :  wattr1af.dat
. * Audit Name   :  watautr1.dat
. * Keys         :  KEY19, KEY20, KEY27,KEY32, KEY31
. * Modifications:  
. ******************************************************************************
. * V11.02.01  04/03/2022  Thanh T          TSK 0889899
. *            Added WMDESC2 - Procedure Description 2
. *                  WMDESC3 - Procedure Description 3
. * V11.00.01  24/03/2020  Thanh T          TSK 0888687
. *            Added Referral Accepted Date  
. ******************************************************************************
. *      V10.04.02  19/02/2014  Steve Armstrong  CAR 294167
. *                 Extended WMREASON from DIM 40 to DIM 80.
. *                 Also increased WTWMSPAR to DIM 50.
. *      V10.04.01  08/02/2014  Ania P           CAR 294376
. *                 Moved WTWMPDSC out of SPARE. Increased SPARE.
. ******************************************************************************
. *      V10.03.03  20/03/2013  Patrick Adair    CAR 281132
. *                 Added WTWMPDSC - Procedure Description Comments
. *      V10.03.02  12/12/2012  Steve Armstrong  CAR 264964
. *                 Updated description for WTWMDABD             
. *      V10.03.01  14/11/2011  Mike Laming    CAR 234014
. *                 Add WTWMACPR - "Actual Procedure Event No."
. ******************************************************************************
. *      V10.01.01  12/01/2011  Jill Parkinson CAR 234014
. *                 Increase length of WMDESC        
. ******************************************************************************
. *      V9.10.01   01/05/2008  Jill Habasque CAR 165994
. *                 Added WTWMASSR - Assessor Code
. ******************************************************************************
. *      V9.04.01   23/09/2005  Mike Laming   CAR 52354
. *                 Added WTWMCSST, WTWMCSDT - Consent & Consent Change Date
. *                 31/01/2002  Ebon Clements 
. *                 Added WTWMECNT unique count for ESIS eg.CCYY?????
. *                 09/01/2002  Ebon Clements 
. *                 Added WMSTAT 9 for cancelled booking
. *                 03/07/2000  Jill Habasque
. *                 Changed the audit file length from 425 to 475     
. *                 07/06/2000  Jill Habasque
. *                 Added WTWMDRSA,WTWMDOSA,WTWMPHSP,WTWMBSCD,WTWMRSFL
. *                 & index 8 (WATTR1A8)
. *                 17/05/2000  Steve Armstrong 
. *                 Added WATTR1A7
. *                 11/05/2000    J.Tan                  
. *                 Extend the record length
. *                 18/08/1999    J.Tan                  
. *                 Added WTWMSRCR
. *                 14/04/97 Howellsy        RHA        
. *                 Added wmudef5-8, wtwmrank             
. ******************************************************************************
. *                 Add 4th index UR number and date on list
. *                 20/11/90 i chung         SRF 106963
. *                 Change WMREMOVE's descirption to include "WR"
. *                 10/07/1991    Justin Coates  
. *                 Added WTWMCLSS - Pat. Cat/Adm Class (Cat P)
. *                 21/01/93      ROD IS GAY     
. *                 Changed Elective Admission Type to Cat "CC" 
. *                 19/03/93      WHIRLPOOL      
. *                 Added not available dates                    
. *                 06/07/93      WHIRLPOOL      
. *                 Added fifth index                            
. *                 28/10/1993    Justin Coates  (GP Practice changes)
. *                 added WTWMGPPT
. *                 07/03/1994    Justin Coates  SRF 440719
. *                 added WTWMDOFR
. *                 07/04/1994   Paul Howells  Dudley 
. *                 added 6th index 
. *                 28/03/1995   Helen Crick            
. *                 Standardised FD 
. *                 13/10/1995   Howellsy         suht  
. *                 added wtwmoper  
. *                 25/10/1995    Justin Coates  (SUHT mods)
. *                 added wtwmihsp,wtwmvlsf,wtwmpro2,wtwmpro3,wtwmtrpa
. ******************************************************************************
.Audit File
.
WATAUTR1  IFILE     SQL, FIXED=841, KEY="D1-8,9-16,17-18,19-19"
.
WTWMAUDD  DIM       8       8         1       Date of Change
WTWMAUDT  DIM       8       8         9       Time of Change
WTWMAUDP  DIM       2       2        17       Port Doing Change
WTWMAUDR  DIM       1       1        19       Record Type
.                                                 A = Added Record
.                                                 B = Before Change Record
.                                                 C = After Change Record
.                                                 D = Deleted Record
WTWMAUDS  FORM      1       2        20       Record Status
.                                                 1 = Not Printed
.                                                 2 = Printed
WTWMAUDO  DIM       4       4        22       Operator ID of Change
.
.Data File
.
WATTR1A1  IFILE    SQL, FIXED=816, KEY="U1-8,9-17,18-19"
WATTR1A2  IFILE    SQL, FIXED=816, KEY="U184-184,1-8,9-17,18-19"
WATTR1A3  IFILE    SQL, FIXED=816, KEY="U185-192,1-8,9-17,18-19"
WATTR1A4  IFILE    SQL, FIXED=816, KEY="U1-8,185-192,9-17,18-19"
WATTR1A5  IFILE    SQL, FIXED=816, KEY="U184-184,223-228,220-222,233-235,1-8,9-17,18-19"
WATTR1A6  IFILE    SQL, FIXED=816, KEY="U297-304,184-184,1-8,9-17,18-19"
WATTR1A7  IFILE    SQL, FIXED=816, KEY="U184-184,220-222,185-192,1-8,9-17,18-19"
WATTR1A8  IFILE    SQL, FIXED=816, KEY="U481-481,1-8,9-17,18-19"
.
.NAME     TYPE      LENGTH  PHYS   START  DESCRIPTION
.----     ----      ------  ----   -----  -----------
WMURNO    DIM       8       8         1   U/R Number
WMCODE    DIM       9       9         9   Procedure Code
DWMCNT    DIM       2       2        18   Procedure Count
.
WMTIME    FORM      5       4        20   Procedure Time (Minutes)
WMDESC    DIM       80     80        24   Procedure Description
WMREASON  DIM       80     80       104   Reason/Diagnosis for Procedure
DWMSTAT   DIM       1       1       184   Procedure Status
.                                           1 - Unscheduled
.                                           2 - Scheduled
.                                           3 - Pre-Admitted
.                                           4 - Admitted
.                                           5 - Discharged
.                                           6 - Removed from Waiting List
.                                           7 - Performed (No longer used)
.                                           8 - Not Performed (No longer used)
.                                           9 - Cancelled Admission
WMDATE1   DIM       8       8       185   Date on List (ccyymmdd)
WMDATE2   DIM       8       8       193   Date of Last Review (ccyymmdd) /
.                                         Final Outcome of Offer
WMDATE3   DIM       8       8       201   Scheduled Admit. Date (ccyymmdd)
WMDATE4   DIM       8       8       209   Removal Date (ccyymmdd)
WMREMOVE  DIM       3       3       217   Removal Reason (Category WR/BC)
WMUNIT    DIM       3       3       220   Unit/Clinic (Category WU)
WMDOCTOR  DIM       6       6       223   Attending Doctor
WMSTAY    FORM      5       4       229   Estimated Stay (Days)
WMPTY     DIM       3       3       233   Priority (Category TP)
WMNOTICE  DIM       3       3       236   Short Notice (Category WS)
WMPTYPE   DIM       3       3       239   Resident Status (Category T)
WMPCAT    DIM       3       3       242   Admission Type (Cat A)
WMUDEF1   DIM       3       3       245   User Defined 1 (Category W1)
WMUDEF2   DIM       3       3       248   User Defined 2 (Category W2)
WMUDEF3   DIM       3       3       251   User Defined 3 (Category W3)
WMUDEF4   DIM       3       3       254   User Defined 4 (Category W4)
.
WMBOOK    FORM      8       5       257   Booking Number
WMKEYDT   DIM       8       8       262   Keyin Date For Procedure
.                                                 (ccyymmdd)
WTWMPORT  DIM       2       2       270   Locking Indicator
WTWMREAD  DIM       8       8       272   Re-Assessment Date (ccyymmdd)
WTWMDEDA  DIM       8       8       280   Deferred or Staged Adm Date
.                                               (ccyymmdd)
. The following two fields are used for Transmission to the SAHC
.
WTWMUNIQ  FORM      5       4       288   Unique Identifier
WTWMSENT  FORM      1       2       292   Procedure Status 4 & 5 records
.                                         already sent = 1, otherwise = 0
WTWMCLSS  DIM       3       3       294   Patient Cat/Adm Class (Cat P)
.
WTWMDTAD  DIM       8       8       297   Decision to Admit Date 
WTWMACAT  DIM       3       3       305   Administrative Category  "CL"
WTWMGADD  DIM       8       8       308   Guaranteed Admission Date
WTWMDABD  DIM       8       8       316   Do Not Admit Before Date/Proposed
.                                         Operation Date
WTWMEATY  DIM       3       3       324   Elective Admission Type  "CC"
WTWMADMC  DIM       3       3       327   Admission Category   "WA"
WTWMECRA  DIM       20      20      330   ECR Approval Number
WTWMGPFA  DIM       20      20      350   GPFH Approval Number
WTWMRFGP  DIM       8       8       370   Referring GP
WTWMGPPC  DIM       6       6       378   GP Practice code
WTWMNAFR  DIM       8       8       384   Not available from date
WTWMNATO  DIM       8       8       392   Not available to date
WTWMGPPT  DIM       2       2       400   GP Practice count
WTWMDOFR  DIM       3       3       402   District of Residence (Cat DA)
WTWMOPER  DIM       4       4       405   Operator who added proc to W/L
WTWMIHSP  DIM       3       3       409   Intended Hospital (pathspaf)  
WTWMVLSF  DIM       1       1       412   Validation Letter Sent Flag (Y/N)
WTWMPRO2  DIM       9       9       413   Procedure Code 2
WTWMPRO3  DIM       9       9       422   Procedure Code 3
WTWMTRPA  DIM       8       8       431   Pre-Anaesthetic Date (CCYYMMDD)
WMUDEF5   DIM       3       3       439   User Defined 5 (Category X5)
WMUDEF6   DIM       3       3       442   User Defined 6 (Category X6)
WMUDEF7   DIM       3       3       445   User Defined 7 (Category X7)
WMUDEF8   DIM       3       3       448   User Defined 8 (Category X8)
WTWMRANK  DIM       6       6       451   Patient Rank
WTWMSRCR  DIM       3       3       457   Source of Referral (S)
WTWMDRSA  DIM       8       8       460   Date of ref for 1st spec. assessment
WTWMDOSA  DIM       8       8       468   Date of 1st specialised assessment
WTWMPHSP  DIM       3       3       476   Principal Health serv Purchaser Cat HP
WTWMBSCD  DIM       2       2       479   Booking Status Code
WTWMRSFL  DIM       1       1       481   Record sent flag (Y or N)
WTWMECNT  DIM       9       9       482   ESIS unique count eg. CCYY?????
WTWMCSST  DIM       1       1       491   Consent Obtained (N=NO,Y=YES)
WTWMCSDT  DIM       8       8       492   Consent Changed Date (ccyymmdd)
WTWMASSR  DIM       10      10      500   Assessor Code (pmshcpaf)         
WTWMACPR  DIM       8       8       510   Actual Procedure Event Number
WTWMPDSC  DIM       80      80      518   Procedure Description Comments
WTWMRADT  DIM       8       8       598   Referral Accepted Date
WMDESC2   DIM       80      80      606   Procedure Description 2
WMDESC3   DIM       80      80      686   Procedure Description 3
WTWMSPAR  DIM       50      50      766   Spare
.End of Record                      816
.
.    redefine form fields from key
.    -----------------------------
.NAME     TYPE   LENGTH  PHYSICAL   START     DESCRIPTION
.----     ----   ------  --------   -----     -----------
WMCNT     FORM      2                18       Procedure Count
WMSTAT    FORM      1               115       Procedure Status
