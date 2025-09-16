. *----------------------------------------------------------------------
. * Include Name  :   BOKRX1TD.INC
. *
. * Function      :   CGI variables for BOKRX1FD - bokrx1af.dat                
. *                                                                            
. * Modifications :
. *               :   V10.05.02 30/07/2014 Peter Vela     CAR 283332
. *               :             Added 51
. *               :   V10.05.01 30/07/2014 Peter Vela     CAR 299131
. *               :             Added 48-50
. *               :   V10.04.01 14/05/2014 Peter Vela     CAR 279020
. *               :             Added 45-47
. *               :   V10.02.01 11/08/2011 Jill Parkinson CAR 243296
. *               :             Added 41-44
. *               :   V9.11.02 17/02/2009 Peter Vela     CAR 183976
. *               :            Added BOKRX039 - BKRCPOEC
. *               :   V9.11.01 24/11/2008 Ebon Clements  CAR 174077
. *               :            Added BOKRX038                         
. *               :   V9.02.01 07/02/2002 - EC Added BOKRX035
. *----------------------------------------------------------------------
.
.Name     Type      Length Description
.----     ----      ------ -----------
BOKRX001  DIM       8      Booking Number                     
BOKRX002  DIM       3      Post-Op Ward (patwr1af)            
BOKRX003  DIM       3      Admitting Ward (patwr1af)          
BOKRX004  DIM       8      Contact Date (ccyymmdd)            
BOKRX005  DIM       1      Parent Staying (0=NO,1=YES)        
BOKRX006  DIM       8      Confirmation Date (ccyymmdd)       
BOKRX007  DIM       3      User Defined Field 1 (Cat BE)      
BOKRX008  DIM       3      User Defined Field 2 (Cat BF)      
BOKRX009  DIM       3      User Defined Field 3 (Cat BG)      
BOKRX010  DIM       3      User Defined Field 4 (Cat BH)      
BOKRX011  DIM       3      User Defined Field 5 (Cat BL)      
BOKRX012  DIM       8      User Defined Date 1 (ccyymmdd)     
BOKRX013  DIM       8      User Defined Date 2 (ccyymmdd)     
BOKRX014  DIM       8      User Defined Date 3 (ccyymmdd)     
BOKRX015  DIM       8      User Defined Date 4 (ccyymmdd)     
BOKRX016  DIM       80     User Defined Free Format 1         
BOKRX017  DIM       80     User Defined Free Format 2         
BOKRX018  DIM       80     User Defined Free Format 3         
BOKRX019  DIM       80     User Defined Free Format 4         
BOKRX020  DIM       10     Extra Doctor Code 1 (pmshcpaf)     
BOKRX021  DIM       10     Extra Doctor Code 2 (pmshcpaf)     
BOKRX022  DIM       10     Extra Doctor Code 3 (pmshcpaf)     
BOKRX023  DIM       8      Operation Date (ccyymmdd)          
BOKRX024  DIM       3      Operation Period (Cat SP)          
BOKRX025  DIM       8      Date record created (ccyymmdd)     
BOKRX026  DIM       8      Time record created (hh:mm:ss)     
BOKRX027  DIM       10     WEB User Id rec. creator (websecaf)
BOKRX028  DIM       8      Last Update Date (ccyymmdd)        
BOKRX029  DIM       8      Last Update Time (hh:mm:ss)        
BOKRX030  DIM       10     WEB User Id rec. updater (websecaf)
BOKRX031  DIM       3      Admission Source (Cat 2)          
BOKRX032  DIM       3      Blood Type (Cat BO)               
BOKRX033  DIM       3      Contact Type (Letter No.-watletaf)
BOKRX034  DIM       1      Surgical Booking                   
BOKRX035  DIM       8      Confirmation Time (hh:mm:ss)
BOKRX036  DIM       8      User defined Time 1 (hh:mm:ss)
BOKRX037  DIM       8      User defined Time 2 (hh:mm:ss)
BOKRX038  DIM       3      Post-Op Bed (patwr1af)
BOKRX039  DIM       1      Patient Online Eligibility Consent
BOKRX040  DIM       3      Diet (Cat DC)
BOKRX041  DIM       3      Transport (Cat OB)
BOKRX042  DIM       3      Arrival Transport (Cat SI)
BOKRX043  DIM       3      Anaesthetic Type (Cat OA)
BOKRX044  DIM       5      Estimated Op Time
BOKRX045  DIM       3      Early Booking Reason (Cat b1)
BOKRX046  DIM       3      Authorised By (Cat b2)
BOKRX047  DIM       10     Web User ID that Added the Early Booking Reason
BOKRX048  DIM       3      Drug Orders (Cat Ba)
BOKRX049  DIM       3      User Defined Field 6 (Cat Bb)
BOKRX050  DIM       5      User Defined Field 7 (Cat Bc)
BOKRX051  DIM       1      PAC Attended 1 = Yes 0 = No
.
