.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   EMRQUEFD.INC                                  *
.  *                                                                      *
.  *  Function          :   Queuing Emergency Visit Details Message File  *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   emrqueaf.dat                                  *
.  *                                                                      *
.  *  Keys              :   KEY20                                         *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  ************************************************************************
.  *  V10.13.01 08/10/2018  Steve Armstrong    TSK 0860677                *
.  *            Added new variables EMVIUC31 to EMVIBNAA (including       *
.  *            moving EMVIBNAA from the SPARE variable into a normal     *
.  *            FD field.                                                 *
.  *            02/10/2018  Thanh T            TSK 0859743                *
.  *            Added EMVIBNAA                                            *
.  ************************************************************************
.  *  V10.12.01 05/06/2018  Davin              TSK 0851377                *
.  *            Added EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34,EMVIUC35        *
.  ************************************************************************
.  *  V10.05.02 20/08/2014  Steve Armstrong    CAR 303879                 *
.  *            Extended Ambulance Case Number (EMVIAMBL) from DIM6 to    *
.  *            DIM15.                                                    *
.  *  V10.05.01 13/08/2014  Ania P             CAR 303879                 *
.  *            Added/Moved fields (out of SPARE): EMVIPRLO - EMVIMDTM    *
.  *  V10.04.01 11/03/2014  Ebon Clements      CAR 294181                 *
.  *            Added EMVIAADT to EMVIDATM stored in spare                *
.  *  V9.09.01  26/10/2007  Peter Vela         CAR 151159                 *
.  *            Added Status 4 Cancelled                                  *
.  *  V9.02.00  08/01/2002  Davin                                         * 
.  *            FD Created                                                *
.  *                                                                      *
.  ************************************************************************
.
.Data File Definition
.--------------------
EMRQUEA1   IFILE SQL, FIXED=1647, KEY="U1-20"
.
.Name      Type   Length  Physical Start Description
.----      ----   ------  -------- ----- -----------
DEMQUMES   DIM       20     20       1     Message Id
.
.          EMRVISFD variables
.
.EMVIADMN  FORM      8      5        21    Visit Number                       
.EMVISTAT  FORM      1      2        26    Status                             
.                                              1 = Current Patient
.                                              2 = Discharged Incomplete
.                                              3 = Discharged Complete
.                                              4 = Cancelled
.EMVIURNO  DIM       8      8        28    Patient U/R Number                 
.EMVIDATE  DIM       8      8        36    Arrival Date (CCYYMMDD)            
.EMVITIME  DIM       8      8        44    Arrival Time (HH:MM:SS)            
.EMVITRIG  DIM       3      3        52    Triage Code (category AA)          
.EMVICOM1  DIM       50     50       55    Complaint Line 1                   
.EMVICOM2  DIM       50     50       105   Complaint Line 2                   
.EMVILOCN  DIM       3      3        155   Location (emrlocaf)                
.EMVIDOCT  DIM       10     10       158   Attending Doctor                   
.EMVICOMP  DIM       3      3        168   Compensation Code (category CL)    
.EMVICLAS  DIM       3      3        171   Patient Classification (category A)
.EMVIINSR  DIM       3      3        174   Insurance Status (category U1)     
.EMVISRCE  DIM       3      3        177   Source of Referal (category S)     
.EMVISITN  DIM       3      3        180   Situation (category ES)            
.EMVIMODE  DIM       3      3        183   Mode of Arrival (category EA)      
.EMVIADMT  FORM      1      2        186   Admitted to Hospital               
.                                          0 = No
.                                          1 = Yes
.EMVIDURN  FORM      4      3        188   Duration of Waiting (in minutes)   
.EMVIEMPL  DIM       20     20       191   Employer (Workcover)               
.EMVIWAIT  DIM       3      3        211   Completion Wait Code (category EW) 
.EMVIPREV  DIM       3      3        214   Previous A&E Attendance (cat. EP)  
.EMVIFUND  DIM       6      6        217   Health Fund                        
.EMVITABL  DIM       8      8        223   Health Fund Table                  
.EMVIREFG  DIM       10     10       231   Referring GP                       
.EMVIREFD  DIM       10     10       241   Referring Doctor                   
.EMVIPLIN  DIM       3      3        251   Place of Incident (category AP)    
.EMVIINIT  DIM       3      3        254   Initiator (category AI)            
.EMVIRTAS  DIM       3      3        257   RTA Seatbelt Details (category AR) 
.EMVIDDAT  DIM       8      8        260   Discharge Date (CCYYMMDD)          
.EMVIDTIM  DIM       8      8        268   Discharge Time (HH:MM:SS)          
.EMVIDSTA  DIM       3      3        276   Discharge Status (category ED)     
.EMVIOPR1  DIM       10     10       279   Web Operator - event (websecaf)    
.EMVIOPR2  DIM       10     10       289   Web Operator - discharge (websecaf)
.EMVIUC01  DIM       3      3        299   User Defined Code 1  (category A1) 
.EMVIUC02  DIM       3      3        302   User Defined Code 2  (category A2) 
.EMVIUC03  DIM       3      3        305   User Defined Code 3  (category A3) 
.EMVIUC04  DIM       3      3        308   User Defined Code 4  (category A4) 
.EMVIUC05  DIM       3      3        311   User Defined Code 5  (category A5) 
.EMVIUC06  DIM       3      3        314   User Defined Code 6  (category A6) 
.EMVIUC07  DIM       3      3        317   User Defined Code 7  (category A7) 
.EMVIUC08  DIM       3      3        320   User Defined Code 8  (category A8) 
.EMVIUC09  DIM       3      3        323   Transport Mode       (category ea) 
.EMVIUC10  DIM       3      3        326   Escort Source        (category eb) 
.EMVIUC11  DIM       3      3        329   Referred to on Disch (category ec) 
.EMVIUC12  DIM       3      3        332   Reason for Transfer  (category ed) 
.EMVIUC13  DIM       3      3        335   Type of Visit        (category ee) 
.EMVIUC14  DIM       3      3        338   Human Intent         (category ef) 
.EMVIUC15  DIM       3      3        341   Activity when Injured(category eg) 
.EMVIUC16  DIM       3      3        344   Nurse Code           (category eh) 
.EMVIUC17  DIM       3      3        347   Injury Cause         (category ei) 
.EMVIUC18  DIM       3      3        350   User Defined Code 18 (category ej) 
.EMVIUC19  DIM       3      3        353   User Defined Code 19 (category ek) 
.EMVIUC20  DIM       3      3        356   Presenting Complaint (category el) 
.EMVIUC21  DIM       3      3        359   User Defined Code 21 (category em) 
.EMVIUC22  DIM       3      3        362   User Defined Code 22 (category en) 
.EMVIUC23  DIM       3      3        365   User Defined Code 23 (category eo) 
.EMVIUC24  DIM       3      3        368   User Defined Code 24 (category ep) 
.EMVIUC25  DIM       3      3        371   User Defined Code 25 (category eq) 
.EMVIUC26  DIM       3      3        374   User Defined Code 26 (category er) 
.EMVIUC27  DIM       3      3        377   User Defined Code 27 (category es) 
.EMVIUC28  DIM       3      3        380   User Defined Code 28 (category et) 
.EMVIUC29  DIM       3      3        383   User Defined Code 20 (category eu) 
.EMVIUC30  DIM       3      3        386   User Defined Code 30 (category ev) 
.EMVIUD01  DIM       8      8        389   User Defined Date 1  (CCYYMMDD)    
.EMVIUD02  DIM       8      8        397   User Defined Date 2  (CCYYMMDD)    
.EMVIUD03  DIM       8      8        405   User Defined Date 3  (CCYYMMDD)    
.EMVIUD04  DIM       8      8        413   User Defined Date 4  (CCYYMMDD)    
.EMVIUD05  DIM       8      8        421   User Defined Date 5  (CCYYMMDD)    
.EMVIUD06  DIM       8      8        429   User Defined Date 6  (CCYYMMDD)    
.EMVIUD07  DIM       8      8        437   User Defined Date 7  (CCYYMMDD)    
.EMVIUD08  DIM       8      8        445   User Defined Date 8  (CCYYMMDD)    
.EMVIUD09  DIM       8      8        453   User Defined Date 9  (CCYYMMDD)    
.EMVIUD10  DIM       8      8        461   User Defined Date 10 (CCYYMMDD)    
.EMVIUT01  DIM       8      8        469   User Defined Time 1  (CCYYMMDD)    
.EMVIUT02  DIM       8      8        477   User Defined Time 2  (HH:MM:SS)    
.EMVIUT03  DIM       8      8        485   User Defined Time 3  (HH:MM:SS)    
.EMVIUT04  DIM       8      8        493   User Defined Time 4  (HH:MM:SS)    
.EMVIUT05  DIM       8      8        501   User Defined Time 5  (HH:MM:SS)    
.EMVIUT06  DIM       8      8        509   User Defined Time 6  (HH:MM:SS)    
.EMVIUT07  DIM       8      8        517   User Defined Time 7  (HH:MM:SS)    
.EMVIUT08  DIM       8      8        525   User Defined Time 8  (HH:MM:SS)    
.EMVIUT09  DIM       8      8        533   User Defined Time 9  (HH:MM:SS)    
.EMVIUT10  DIM       8      8        541   User Defined Time 10 (HH:MM:SS)    
.EMVIYN01  FORM      1      2        549   User Defined Y/N Field 1           
.                                          0 = No
.                                          1 = Yes
.EMVIYN02  FORM      1      2        551   User Defined Y/N Field 2           
.                                          0 = No
.                                          1 = Yes
.EMVIYN03  FORM      1      2        553   User Defined Y/N Field 3           
.                                          0 = No
.                                          1 = Yes
.EMVIYN04  FORM      1      2        555   User Defined Y/N Field 4           
.                                          0 = No
.                                          1 = Yes
.EMVIYN05  FORM      1      2        557   User Defined Y/N Field 5           
.                                          0 = No
.                                          1 = Yes
.EMVIYN06  FORM      1      2        559   User Defined Y/N Field 6           
.                                          0 = No
.                                          1 = Yes
.EMVIYN07  FORM      1      2        561   User Defined Y/N Field 7           
.                                          0 = No
.                                          1 = Yes
.EMVIYN08  FORM      1      2        563   User Defined Y/N Field 8           
.                                          0 = No
.                                          1 = Yes
.EMVIYN09  FORM      1      2        565   User Defined Y/N Field 9           
.                                          0 = No
.                                          1 = Yes
.EMVIYN10  FORM      1      2        567   Ongoing Care Communication         
.                                          0 = No
.                                          1 = Yes
.EMVITXT1  DIM       50     50       569   User Defined Text Field 1          
.EMVITXT2  DIM       50     50       619   User Defined Text Field 2          
.EMVITXT3  DIM       50     50       669   User Defined Text Field 3          
.EMVITXT4  DIM       50     50       719   User Defined Text Field 4          
.EMVITXT5  DIM       50     50       769   User Defined Text Field 5          
.EMVIUN01  FORM      6      4        819   User Defined Numeric Field 1       
.EMVIUN02  FORM      6      4        823   User Defined Numeric Field 2       
.EMVIUN03  FORM      6      4        827   User Defined Numeric Field 3       
.EMVIUN04  FORM      6      4        831   User Defined Numeric Field 4       
.EMVIUN05  FORM      6      4        835   User Defined Numeric Field 5       
.EMVIELAP  DIM       3      3        839   Elapsed Since Accident (cat. AE)   
.EMVINSDT  DIM       8      8        842   Date First Seen by Nurse (CCYYMMDD)
.EMVINSTM  DIM       8      8        850   Time First Seen by Nurse (HH:MM:SS)
.EMVIDRDT  DIM       8      8        858   Date First Seen by Doct. (CCYYMMDD)
.EMVIDRTM  DIM       8      8        866   Time First Seen by Doct. (HH:MM:SS)
.EMVIPATT  FORM      3      3        874   Number of Previous Attendences     
.EMVITSRC  DIM       5      5        877   Transfer Source Code               
.EMVIDEST  DIM       5      5        882   Discharge Destination Code         
.EMVIAMBL  DIM       15     15       887   Ambulance Case Number              
.EMVIREGN  DIM       2      2        902   Body Region                        
.EMVISENT  DIM       1      1        904   Extract Sent                       
.                                          0 = No
.                                          1 = Yes
.EMVIUR01  DIM       6      6        905   User Defined Doctor Field 1        
.EMVIUR02  DIM       6      6        911   User Defined Doctor Field 2        
.EMVIUR03  DIM       6      6        917   User Defined Doctor Field 3        
.EMVIUR04  DIM       6      6        923   User Defined Doctor Field 4        
.EMVIUR05  DIM       6      6        929   User Defined Doctor Field 5        
.EMVIPADM  DIM       8      8        935   Patient System Admission Number    
.                                          (if admitted to hospital)
.EMVIEWRD  DIM       3      3        943   Expected Ward (Patient System)     
.EMVIEBED  DIM       3      3        946   Expected Bed  (Patient System)     
.EMVIHFMN  DIM       10     10       949   Health Fund Member Number          
.EMVIACLS  DIM       3      3        959   Admission Class (category P)       
.EMVICCLS  DIM       3      3        962   Care Class      (category CC)      
.EMVITRNS  DIM       10     10       965   Triage Nurse                       
.EMVIDUM1  DIM       3      3        975   Dummy Field 1                      
.EMVITRDT  DIM       8      8        978   Triage Date                        
.EMVITRTM  DIM       8      8        986   Triage Time                        
.EMVIATNS  DIM       10     10       994   Attending Nurse                    
.EMVIDUM2  DIM       3      3        1004  Dummy Field 2                      
.EMVIEXLC  DIM       3      3        1007  External Location Code (emrlocaf)  
.EMVISITE  DIM       3      3        1010  Emergency Site Code                
.EMVIUNIT  DIM       3      3        1013  Unit (category AC)                 
.EMVICOM3  DIM       50     50       1016  Complaint Line 3                   
.EMVICOM4  DIM       50     50       1066  Complaint Line 4                   
.EMVICOM5  DIM       50     50       1116  Complaint Line 5                   
.EMVICOM6  DIM       50     50       1166  Complaint Line 6                   
.EMVIINJ1  DIM       50     50       1216  Injury Description Line 1          
.EMVIINJ2  DIM       50     50       1266  Injury Description Line 2          
.EMVINATI  DIM       3      3        1316  Nature of Main Injury (category ex)
.EMVIINJC  DIM       3      3        1319  Injury Cause          (category ey)
.EMVIHUMI  DIM       3      3        1322  Human Intent          (category ez)
.EMVIACTI  DIM       3      3        1325  Activity When Injured (category EY)
.EMVILOCO  DIM       25     25       1328  Other Location Description         
.EMVIPRLO  DIM       3      3        1353  Previous Location (emrlocaf)
.EMVIPRTM  DIM       8      8        1356  Time Left Previous Location (hh:mm:
.EMVIDPDT  DIM       8      8        1364  Departure Date (CCYYMMDD)
.EMVIDPTM  DIM       8      8        1372  Departure Time (HH:MM:SS)
.EMVIEXRS  DIM       3      3        1380  Extended Visit Reason (Cat RX)
.EMVIDLRS  DIM       3      3        1383  Departure Delay Reason (Cat RY)
.EMVISPDT  DIM       8      8        1386  Speciality Date (CCYYMMDD)
.EMVISPTM  DIM       8      8        1394  Speciality Time (HH:MM:SS)
.EMVISADT  DIM       8      8        1402  Speciality Arrival Date (CCYYMMDD)
.EMVISATM  DIM       8      8        1410  Speciality Arrival Time (HH:MM:SS)
.EMVIMPRA  DIM       10     10       1418  Mental Health Practitioner (pmshcpa
.EMVIMPDT  DIM       8      8        1428  Date First Seen by MH Prac.(CCYYMMD
.EMVIMPTM  DIM       8      8        1436  Time First Seen by MH Prac.(HH:MM:S
.EMVIAADT  DIM       8      8        1444  Ambulance Arrival Date (CCYYMMDD)
.EMVIAATM  DIM       8      8        1452  Ambulance Arrival Time (HH:MM:SS)
.EMVIAHDT  DIM       8      8        1460  Ambulance Handover Date (CCYYMMDD)
.EMVIAHTM  DIM       8      8        1468  Ambulance Handover Time (HH:MM:SS)
.EMVIDADT  DIM       8      8        1476  Decision to Admit Date (CCYYMMDD)
.EMVIDATM  DIM       8      8        1484  Decision to Admit Time (HH:MM:SS)
.EMVIPURC  DIM       3      3        1492  Health Purchaser (Cat HP)
.EMVIMNCD  DIM       10     10       1495  Meet & Greet Assessment Nurse Code
.EMVIMNDT  DIM       8      8        1505  Meet & Greet Ass. Nurse Date Seen
.EMVIMNTM  DIM       8      8        1513  Meet & Greet Ass. Nurse Time Seen
.EMVIMDCD  DIM       10     10       1521  Meet & Greet Ass. Doctor Code
.EMVIMDDT  DIM       8      8        1531  Meet & Greet Ass. Doctor Date Seen
.EMVIMDTM  DIM       8      8        1539  Meet & Greet Ass. Doctor Time Seen
.EMVIUC31  DIM       3      3        1547  User Defined Code 31 (category YN)
.EMVIUC32  DIM       3      3        1550  Call Attempt 2 Status (category YO)
.EMVIUC33  DIM       3      3        1553  Call Attempt 3 Status (category YP)
.EMVIUC34  DIM       3      3        1556  Patient Follow Up Outcome(categoryYQ)
.EMVIUC35  DIM       3      3        1559  Call Attempt 1 Status (category YR)
.EMVIREFP  DIM       3      3        1562  Referral Period (Category RF)
.EMVIREPM  DIM       2      2        1565  Referring Period Month
.                                          (1-98 months, right justified)
.EMVIREDT  DIM       8      8        1567  Referral Date
.EMVIBNAA  DIM       1      1        1575  Benefit Assignment Authorised
.                                          0 or Blank - No
.                                          1 - Yes
EMQUSPAR  DIM        71     71       1576  Spare Variables                    
.
.End of Record                       1647 
.
.
.Redefine FORM fields from key
.-----------------------------
EMQUMESI   FORM      20
