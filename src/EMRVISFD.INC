. V11.01.01 01/03/2021 EC C-0873184 Added EMVIAHCP to EMVIDRUG                  
. V10.14.01 13/03/2019 EC C-0868834 Added EMVIVSTY and EMVIVPLC                 
. V10.13.07 17/01/2019 SA C-0858370 Updated description for EMVIUT07            
. V10.13.06 17/01/2019 SA C-0867489 Updated description for EMVIYN01            
. V10.13.05 17/01/2019 SA C-0867489 Updated description for EMVIUR01            
. V10.13.04 17/01/2019 SA C-0867489 Updated description for EMVIUC31            
. V10.13.03 27/09/2018 TT C-0859743 Added Benefit Assignment Authorised         
. V10.13.02 05/09/2018 PV C-0859742 Added Referral variables                    
. V10.13.01 10/08/2018 EC  0861770 Changed descriptions for HEA Standardised    
. V                         Emergency Department Clinical Templates             
. V10.12.01 16/05/2018 PV  0850174 Changed descriptions for HEA Standardised    
. V                         Emergency Department Clinical Templates             
. V10.06.02 07/04/2015 JT  244314 Added description for Dr Billing Complete     
. V10.06.01 10/03/2015 EC  304779 Added EMVIUC31 - EMVIUC35                     
. V10.05.01 13/08/2014 AP  303879 Added EMVIAADT-EMVIMDTM, Increased EMVIAMBL   
. V10.04.02 28/03/2014 PV  Changed EMVIREFG comment to                          
. V                         Referred to on Departure (HCP CAR 283599            
. V10.04.01 11/03/2014 EC  Added EMVIAADT to EMVIDATM stored in spare CAR 294181
. V10.00.03 15/04/2010 EC  Added EMVIMPRA to EMVIMPTM CAR 218982                
. V10.00.02 09/04/2010 EC  Added EMVISPDT to EMVISATM CAR 164849                
. V10.00.01 29/03/2010 EC  Added EMVIDPDT to EMVIDLRS CAR 216782                
. V9.09.003 15/11/2007 EC  Changed description of EMVIUC28 CAR 151894           
. V9.09.002 31/10/2007 EC  Added EMVIPRLO & EMVIPRTM CAR 151800                 
. V9.09.001 26/10/2007 PV  Added Status 4 Cancelled. Comment only.  CAR 151159  
. V                         Generator not used.                                 
. Vv9.04.001 27/01/2005 EC  Changed EMVIUC14,15,and 17 descriptions  CAR 50854  
. Vv9.03.001 27/10/2003 EC  Changed EMVIYN02 description  CAR 44609             
. Vv9.00.001 20/06/2001 DC  Created                                             
. *----------------------------------------------------------------------
. * Include Name  :   EMRVISFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   Visit Table                        
. *
. * File Type     :   SQL
. *
. * File Name     :   emrvisaf.dat
. *
. * Index Values  :   KEY8    KEY9    KEY16   KEY24   KEY12   KEY27   KEY11  
. *
. *  **** Programmer Note **************
. *       Any changes to this FD may also need to be made in EMRQUEFD.
. *       Please check this before proceeding.
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRVISA1   IFILE    SQL, FIXED=1629, KEY="U1-8"
EMRVISA2   IFILE    SQL, FIXED=1629, KEY="U9-9,1-8"
EMRVISA3   IFILE    SQL, FIXED=1629, KEY="U10-17,1-8"
EMRVISA4   IFILE    SQL, FIXED=1629, KEY="U18-25,26-33,1-8"
EMRVISA5   IFILE    SQL, FIXED=1629, KEY="U992-994,9-9,1-8"
EMRVISA6   IFILE    SQL, FIXED=1629, KEY="U992-994,18-25,26-33,1-8"
EMRVISA7   IFILE    SQL, FIXED=1629, KEY="U137-139,1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DEMVIADM  DIM       8      8        1     Visit Number                       
DEMVISTA  DIM       1      1        9     Status                             
.                                         1 = Current Patient                  
.                                         2 = Discharged Incomplete            
.                                         3 = Discharged Complete              
.                                         4 = Cancelled                        
EMVIURNO  DIM       8      8        10    Patient U/R Number                 
EMVIDATE  DIM       8      8        18    Arrival Date (CCYYMMDD)            
EMVITIME  DIM       8      8        26    Arrival Time (HH:MM:SS)            
EMVITRIG  DIM       3      3        34    Triage Code (category AA)          
EMVICOM1  DIM       50     50       37    Complaint Line 1                   
EMVICOM2  DIM       50     50       87    Complaint Line 2                   
EMVILOCN  DIM       3      3        137   Location (emrlocaf)                
EMVIDOCT  DIM       10     10       140   Attending Doctor                   
EMVICOMP  DIM       3      3        150   Compensation Code (category CL)    
EMVICLAS  DIM       3      3        153   Patient Classification (category A)
EMVIINSR  DIM       3      3        156   Insurance Status (category U1)     
EMVISRCE  DIM       3      3        159   Source of Referral (category S)    
EMVISITN  DIM       3      3        162   Situation (category ES)            
EMVIMODE  DIM       3      3        165   Mode of Arrival (category EA)      
EMVIADMT  FORM      1      2        168   Admitted to Hospital               
.                                         0 = No                               
.                                         1 = Yes                              
EMVIDURN  FORM      4      3        170   Duration of Waiting (in minutes)   
EMVIEMPL  DIM       20     20       173   Employer (Workcover)               
EMVIWAIT  DIM       3      3        193   Completion Wait Code (category EW) 
EMVIPREV  DIM       3      3        196   Previous A&E Attendance (cat. EP)  
EMVIFUND  DIM       6      6        199   Health Fund                        
EMVITABL  DIM       8      8        205   Health Fund Table                  
EMVIREFG  DIM       10     10       213   Referred to on Departure (HCP)     
EMVIREFD  DIM       10     10       223   Referring Doctor                   
EMVIPLIN  DIM       3      3        233   Place of Incident (category AP)    
EMVIINIT  DIM       3      3        236   Initiator (category AI)            
EMVIRTAS  DIM       3      3        239   RTA Seatbelt Details (category AR) 
EMVIDDAT  DIM       8      8        242   Discharge Date (CCYYMMDD)          
EMVIDTIM  DIM       8      8        250   Discharge Time (HH:MM:SS)          
EMVIDSTA  DIM       3      3        258   Discharge Status (category ED)     
EMVIOPR1  DIM       10     10       261   Web Operator - event (websecaf)    
EMVIOPR2  DIM       10     10       271   Web Operator - discharge (websecaf)
EMVIUC01  DIM       3      3        281   User Defined Code 1  (category A1) 
EMVIUC02  DIM       3      3        284   User Defined Code 2  (category A2) 
EMVIUC03  DIM       3      3        287   User Defined Code 3  (category A3) 
EMVIUC04  DIM       3      3        290   User Defined Code 4  (category A4) 
EMVIUC05  DIM       3      3        293   User Defined Code 5  (category A5) 
EMVIUC06  DIM       3      3        296   User Defined Code 6  (category A6) 
EMVIUC07  DIM       3      3        299   User Defined Code 7  (category A7) 
EMVIUC08  DIM       3      3        302   Discharge Dest ACT(category A8)    
EMVIUC09  DIM       3      3        305   Transport Mode (Cat ea)            
EMVIUC10  DIM       3      3        308   Escort Source (Cat eb)             
EMVIUC11  DIM       3      3        311   Referred to on Disch (Cat ec)      
EMVIUC12  DIM       3      3        314   Reason for Transfer (Cat ed)       
EMVIUC13  DIM       3      3        317   Attendance type (Cat ee)           
EMVIUC14  DIM       3      3        320   User Defined Code 14               
EMVIUC15  DIM       3      3        323   User Defined Code 15               
EMVIUC16  DIM       3      3        326   Nurse Code (Cat eh)                
EMVIUC17  DIM       3      3        329   User Defined Code 17 (category ei) 
EMVIUC18  DIM       3      3        332   Reason for Undisch (Cat ej)        
EMVIUC19  DIM       3      3        335   User Defined Code 19 (category ek) 
EMVIUC20  DIM       3      3        338   Presenting Complaint (Cat el)      
EMVIUC21  DIM       3      3        341   Attendance Source (Cat em)         
EMVIUC22  DIM       3      3        344   Clerical ID (Cal en)               
EMVIUC23  DIM       3      3        347   User Defined Code 23 (category eo) 
EMVIUC24  DIM       3      3        350   User Defined Code 24 (category ep) 
EMVIUC25  DIM       3      3        353   User Defined Code 25 (category eq) 
EMVIUC26  DIM       3      3        356   User Defined Code 26 (category er) 
EMVIUC27  DIM       3      3        359   User Defined Code 27 (category es) 
EMVIUC28  DIM       3      3        362   Ready for Admission (Cat et)       
EMVIUC29  DIM       3      3        365   Research (Cat eu)                  
EMVIUC30  DIM       3      3        368   User Defined Code 30 (category ev) 
EMVIUD01  DIM       8      8        371   Ready for Departure DT ACT CCYYMMDD
EMVIUD02  DIM       8      8        379   User Defined Date 2  (CCYYMMDD)    
EMVIUD03  DIM       8      8        387   Ward Request Date (CCYYMMDD)       
EMVIUD04  DIM       8      8        395   Ward Allocation Date (CCYYMMDD)    
EMVIUD05  DIM       8      8        403   Bed Ready Date (CCYYMMDD)          
EMVIUD06  DIM       8      8        411   Call Attempt 1 Date (CCYYMMDD)     
EMVIUD07  DIM       8      8        419   User Defined Date 7 (CCYYMMDD)     
EMVIUD08  DIM       8      8        427   Call Attempt 3 Date (CCYYMMDD)     
EMVIUD09  DIM       8      8        435   Date Amb Case Created (CCYYMMDD)   
EMVIUD10  DIM       8      8        443   Call Attempt 2 Date (CCYYMMDD)     
EMVIUT01  DIM       8      8        451   Ready for Depart. TM ACT (HH:MM:SS)
EMVIUT02  DIM       8      8        459   User Defined Time 2  (HH:MM:SS)    
EMVIUT03  DIM       8      8        467   Ward Request Time (HH:MM:SS)       
EMVIUT04  DIM       8      8        475   Ward Allocation Time (HH:MM:SS)    
EMVIUT05  DIM       8      8        483   Bed Ready Time (HH:MM:SS)          
EMVIUT06  DIM       8      8        491   Call Attempt 1 Time (HH:MM:SS)     
EMVIUT07  DIM       8      8        499   Ambulance Booking Time  (HH:MM:SS) 
EMVIUT08  DIM       8      8        507   Call Attempt 3 Time (HH:MM:SS)     
EMVIUT09  DIM       8      8        515   Time Amb Case Create (HH:MM:SS)    
EMVIUT10  DIM       8      8        523   Call Attempt 2 Time (HH:MM:SS)     
EMVIYN01  FORM      1      2        531   Admitting Doctor Contacted         
.                                         0 = No                               
.                                         1 = Yes                              
EMVIYN02  FORM      1      2        533   C-Type Admission                   
.                                         0 = No                               
.                                         1 = Yes                              
EMVIYN03  FORM      1      2        535   User Defined Y/N Field 3           
.                                         0 = No                               
.                                         1 = Yes                              
EMVIYN04  FORM      1      2        537   User Defined Y/N Field 4           
.                                         0 = No                               
.                                         1 = Yes                              
EMVIYN05  FORM      1      2        539   User Defined Y/N Field 5           
.                                         0 = No                               
.                                         1 = Yes                              
EMVIYN06  FORM      1      2        541   User Defined Y/N Field 6           
.                                         0 = No                               
.                                         1 = Yes                              
EMVIYN07  FORM      1      2        543   User Defined Y/N Field 7           
.                                         0 = No                               
.                                         1 = Yes                              
EMVIYN08  FORM      1      2        545   User Defined Y/N Field 8           
.                                         0 = No                               
.                                         1 = Yes                              
EMVIYN09  FORM      1      2        547   User Defined Y/N Field 9           
.                                         0 = No                               
.                                         1 = Yes                              
.                                         For Dr Billing Complete:             
.                                         0 or blank = No                      
.                                                  1 = Dr Billing Complete     
.                                                  2 = No Dr Charge            
EMVIYN10  FORM      1      2        549   Ongoing Care Communication         
.                                         0 = No                               
.                                         1 = Yes                              
EMVITXT1  DIM       50     50       551   User Defined Text Field 1          
EMVITXT2  DIM       50     50       601   User Defined Text Field 2          
EMVITXT3  DIM       50     50       651   User Defined Text Field 3          
EMVITXT4  DIM       50     50       701   User Defined Text Field 4          
EMVITXT5  DIM       50     50       751   User Defined Text Field 5          
EMVIUN01  FORM      6      4        801   User Defined Numeric Field 1       
EMVIUN02  FORM      6      4        805   User Defined Numeric Field 2       
EMVIUN03  FORM      6      4        809   User Defined Numeric Field 3       
EMVIUN04  FORM      6      4        813   User Defined Numeric Field 4       
EMVIUN05  FORM      6      4        817   User Defined Numeric Field 5       
EMVIELAP  DIM       3      3        821   Elapsed Since Accident (cat. AE)   
EMVINSDT  DIM       8      8        824   Date First Seen by Nurse (CCYYMMDD)
EMVINSTM  DIM       8      8        832   Time First Seen by Nurse (HH:MM:SS)
EMVIDRDT  DIM       8      8        840   Date First Seen by Doct. (CCYYMMDD)
EMVIDRTM  DIM       8      8        848   Time First Seen by Doct. (HH:MM:SS)
EMVIPATT  FORM      3      3        856   Number of Previous Attendences     
EMVITSRC  DIM       5      5        859   Transfer Source Code               
EMVIDEST  DIM       5      5        864   Discharge Destination Code         
EMVIAMBL  DIM       15     15       869   Ambulance Case Number              
EMVIREGN  DIM       2      2        884   Body Region                        
EMVISENT  DIM       1      1        886   Extract Sent                       
.                                         0 = No                               
.                                         1 = Yes                              
EMVIUR01  DIM       6      6        887   Admitting Doctor Code (patdo1af)   
EMVIUR02  DIM       6      6        893   User Defined Doctor Field 2        
EMVIUR03  DIM       6      6        899   User Defined Doctor Field 3        
EMVIUR04  DIM       6      6        905   User Defined Doctor Field 4        
EMVIUR05  DIM       6      6        911   User Defined Doctor Field 5        
EMVIPADM  DIM       8      8        917   Patient System Admission Number    
.                                         (if admitted to hospital)            
EMVIEWRD  DIM       3      3        925   Expected Ward (Patient System)     
EMVIEBED  DIM       3      3        928   Expected Bed  (Patient System)     
EMVIHFMN  DIM       10     10       931   Health Fund Member Number          
EMVIACLS  DIM       3      3        941   Admission Class (category P)       
EMVICCLS  DIM       3      3        944   Care Class      (category CC)      
EMVITRNS  DIM       10     10       947   Triage Nurse                       
EMVIDUM1  DIM       3      3        957   Dummy Field 1                      
EMVITRDT  DIM       8      8        960   Triage Date                        
EMVITRTM  DIM       8      8        968   Triage Time                        
EMVIATNS  DIM       10     10       976   Attending Nurse                    
EMVIDUM2  DIM       3      3        986   Dummy Field 2                      
EMVIEXLC  DIM       3      3        989   External Location Code (emrlocaf)  
EMVISITE  DIM       3      3        992   Emergency Site Code                
EMVIUNIT  DIM       3      3        995   Unit (category AC)                 
EMVICOM3  DIM       50     50       998   Complaint Line 3                   
EMVICOM4  DIM       50     50       1048  Complaint Line 4                   
EMVICOM5  DIM       50     50       1098  Complaint Line 5                   
EMVICOM6  DIM       50     50       1148  Complaint Line 6                   
EMVIINJ1  DIM       50     50       1198  Injury Description Line 1          
EMVIINJ2  DIM       50     50       1248  Injury Description Line 2          
EMVINATI  DIM       3      3        1298  Nature of Main Injury (category ex)
EMVIINJC  DIM       3      3        1301  Injury Cause          (category ey)
EMVIHUMI  DIM       3      3        1304  Human Intent          (category ez)
EMVIACTI  DIM       3      3        1307  Activity When Injured (category EY)
EMVILOCO  DIM       25     25       1310  Other Location Description         
EMVIPRLO  DIM       3      3        1335  Previous Location (emrlocaf)       
EMVIPRTM  DIM       8      8        1338  Time Left Previous Location (hh:mm:
EMVIDPDT  DIM       8      8        1346  Departure Date (CCYYMMDD)          
EMVIDPTM  DIM       8      8        1354  Departure Time (HH:MM:SS)          
EMVIEXRS  DIM       3      3        1362  Extended Visit Reason (Cat RX)     
EMVIDLRS  DIM       3      3        1365  Departure Delay Reason (Cat RY)    
EMVISPDT  DIM       8      8        1368  Speciality Date (CCYYMMDD)         
EMVISPTM  DIM       8      8        1376  Speciality Time (HH:MM:SS)         
EMVISADT  DIM       8      8        1384  Speciality Arrival Date (CCYYMMDD) 
EMVISATM  DIM       8      8        1392  Speciality Arrival Time (HH:MM:SS) 
EMVIMPRA  DIM       10     10       1400  Mental Health Practitioner (pmshcpa
EMVIMPDT  DIM       8      8        1410  Date First Seen by MH Prac.(CCYYMMD
EMVIMPTM  DIM       8      8        1418  Time First Seen by MH Prac.(HH:MM:S
EMVIAADT  DIM       8      8        1426  Ambulance Arrival Date (CCYYMMDD)  
EMVIAATM  DIM       8      8        1434  Ambulance Arrival Time (HH:MM:SS)  
EMVIAHDT  DIM       8      8        1442  Ambulance Handover Date (CCYYMMDD) 
EMVIAHTM  DIM       8      8        1450  Ambulance Handover Time (HH:MM:SS) 
EMVIDADT  DIM       8      8        1458  Decision to Admit Date (CCYYMMDD)  
EMVIDATM  DIM       8      8        1466  Decision to Admit Time (HH:MM:SS)  
EMVIPURC  DIM       3      3        1474  Health Purchaser (Cat HP)          
EMVIMNCD  DIM       10     10       1477  Meet & Greet Assessment Nurse Code 
EMVIMNDT  DIM       8      8        1487  Meet & Greet Ass. Nurse Date Seen  
EMVIMNTM  DIM       8      8        1495  Meet & Greet Ass. Nurse Time Seen  
EMVIMDCD  DIM       10     10       1503  Meet & Greet Ass. Doctor Code      
EMVIMDDT  DIM       8      8        1513  Meet & Greet Ass. Doctor Date Seen 
EMVIMDTM  DIM       8      8        1521  Meet & Greet Ass. Doctor Time Seen 
EMVIUC31  DIM       3      3        1529  Initial Assessor Reason (Cat YN)   
EMVIUC32  DIM       3      3        1532  Call Attempt 2 Status (category YO)
EMVIUC33  DIM       3      3        1535  Call Attempt 3 Status (category YP)
EMVIUC34  DIM       3      3        1538  Patient Follow Up Outcome(cat YQ)  
EMVIUC35  DIM       3      3        1541  Call Attempt 1 Status (category YR)
EMVIREFP  DIM       3      3        1544  Referral Period (Category RF)      
EMVIREPM  DIM       2      2        1547  Referring Period Month             
.                                         (1-98 months, right justified)       
EMVIREDT  DIM       8      8        1549  Referral Date                      
EMVIBNAA  DIM       1      1        1557  Benefit Assignment Authorised      
.                                         0 or Blank - No                      
.                                         1 - Yes                              
EMVIVSTY  DIM       3      3        1558  VEMD Service Type (Cat YW)         
EMVIVPLC  DIM       3      3        1561  VEMD Patient Location (Cat YX)     
EMVIAHCP  DIM       10     10       1564  Allied Health HCP Code (pmshcpaf)  
EMVIAHST  DIM       1      1        1574  Allied Health Status               
.                                         R = Red                              
.                                         A = Amber                            
.                                         G = Green                            
.                                         N = Not Applicable                   
EMVIDISD  DIM       3      3        1575  Disposition Delay (Cat dd)         
EMVIDRUG  DIM       1      1        1578  Drug / Alcohol Related             
.                                         0 = No, 1 = Yes, 2 = Unknown         
EMVISPAR  DIM       50     50       1579  Spare                              
.
.End of Record                      1629 
.
.Redefine Key Variables
.----------------------
EMVIADMN  FORM      8    
EMVISTAT  FORM      1    
