. V11.02.02 04/02/2022 DS C-0896905 Added Description to ALDEDACP               
. V11.02.01 03/02/2022 TT C-0896905 Added ALDEDACP field                        
. V11.01.01 30/03/2021 EC C-0902602 Changed ALDECSEP to DIM 6 & Increased spare 
. V10.10.01 28/03/2017 EC C-0833052 Added ALDEUTRS and ALDEUPRT                 
. V10.07.01 05/10/2015 EC  Added ALDEAONE                CAR 316634             
. V10.06.01 13/03/2015 EC  Added OP site and clinic type CAR 303886             
. V10.04.01 18/12/2013 AP  Moved ALDEVECC through to ALDEUAHP out of SPARE      
. V                     CAR 294354                                              
. V10.03.03 04/06/2013 AP  Added ALDEAHCP to spare variable CAR 285833          
. V10.03.02 23/05/2012 DN  Added ALDEUERF to ALDEUESU. CAR 264682               
. V10.03.01 27/03/2012 PV  C-261277 Added ALDEVECC VINAH Episode Campus Code    
. V10.02.01 06/04/2011 EC  Changed description of ALDECSEP CAR 239576           
. V10.01.01 23/11/2010 SA  Moved ALDEPRGS & ALDEPENC into FD CAR 220289         
. V10.00.01 03/05/2010 EC  Added ALDEPRGS & ALDEPENC CAR 220289                 
. V9.07.001 01/08/2006 EC  Added client service event provider CAR 113925       
. V9.04.002 07/09/2005 EC  Added ALDEACTV CAR 73702                             
. V9.04.001 17/08/2004 LV  Added Hospital ID  CAR 52746                         
. V9.00.001 12/05/2001 SB  Created FD                                           
. V9.05.B01 09/12/2005 EC  Added SACS referral required CAR 76341               
. *----------------------------------------------------------------------
. * Include Name  :   ALLDEPFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Department Table                   
. *
. * File Type     :   SQL
. *
. * File Name     :   alldepaf.dat
. *
. * Index Values  :   KEY3    KEY6                                           
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLDEPA1   IFILE    SQL, FIXED=238, KEY="U1-3"
ALLDEPA2   IFILE    SQL, FIXED=238, KEY="U140-142,1-3"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALDEDEPT  DIM       3      3        1     Department - Clinic Group (Cat CG) 
ALDEREFE  DIM       1      1        4     Using Referrals (0=No,1=Yes)       
ALDESECU  DIM       1      1        5     Security Options                   
.                                         0=Viewable by All Departments        
.                                         1=Display on Summary Only            
.                                         2=Display only if the Users Departmen
.                                         t                                    
.                                           is equal to the Referral Department
ALDEVACS  DIM       1      1        6     Using VACS Reporting (0=No,1=Yes)  
ALDEBILL  DIM       1      1        7     Billing (0=No,1=Yes)               
ALDEPRAC  DIM       6      6        8     Medical Practice (pripracf)        
ALDEUR1   DIM       25     25       14    User Defined Reference 1           
ALDEUR2   DIM       25     25       39    User Defined Reference 2           
ALDEUD1   DIM       8      8        64    User Defined Date 1 (CCYYMMDD)     
ALDEUD2   DIM       8      8        72    User Defined Date 2 (CCYYMMDD)     
ALDEUY1   DIM       1      1        80    User Defined Y/N (0=No,1=Yes)      
ALDEUY2   DIM       1      1        81    User Defined Y/N (0=No,1=Yes)      
ALDEUC1   DIM       3      3        82    User Defined Code 1 (Category UA)  
ALDEUC2   DIM       3      3        85    User Defined Code 2 (Category UB)  
ALDECDAT  DIM       8      8        88    Date Record Created (CCYYMMDD)     
ALDECTIM  DIM       8      8        96    Time Record Created (HH:MM:SS)     
ALDECUID  DIM       10     10       104   WEB User ID Created (websecaf)     
ALDEUDAT  DIM       8      8        114   Date Record Updated (CCYYMMDD)     
ALDEUTIM  DIM       8      8        122   Time Record Updated (HH:MM:SS)     
ALDEUUID  DIM       10     10       130   WEB User ID Created (websecaf)     
ALDEHOSP  DIM       3      3        140   Hospital ID (pathspaf)             
ALDEACTV  DIM       1      1        143   Active 0=Active 1=Inactive         
ALDESREQ  DIM       1      1        144   SACS Referral Required (0=No,1=Yes)
ALDECSEP  DIM       6      6        145   Contact Provider                   
ALDEPRGS  DIM       3      3        151   Episode/Program Stream (Cat lF)    
ALDEPENC  DIM       1      1        154   Allow Encounters on Primary Ref.   
.                                         0=Yes, 1=No                          
ALDEVECC  DIM       6      6        155   VINAH Episode Campus Code          
ALDEUERF  DIM       1      1        161   Using External Referrals (0=No,1=Ye
ALDEURAD  DIM       1      1        162   Using Residential Admission        
ALDEUASS  DIM       1      1        163   Using Assessments                  
ALDEURAP  DIM       1      1        164   Using Request Appointments         
ALDEDLAS  DIM       1      1        165   Display Last 5 Contacts            
ALDEDCLI  DIM       1      1        166   Display Clinical Documentation     
ALDEDRAA  DIM       1      1        167   Display Referral Action Audit      
ALDEDLET  DIM       1      1        168   Display Letter History             
ALDEUEME  DIM       1      1        169   Using Encounter Medications        
ALDEUEIN  DIM       1      1        170   Using Encounter Interventions      
ALDEUESU  DIM       1      1        171   Using Encounter Supplies           
ALDEUAHP  DIM       1      1        172   Using Additional HCPs (0=No,1=Yes) 
ALDESITE  DIM       6      6        173   Outpatient Site                    
ALDECTYP  DIM       6      6        179   Outpatient Clinic Type             
ALDEAONE  DIM       1      1        185   Allow only one Waiting/Active Prima
.                                          Referral                            
.                                         " " or 0 = No, 1 = Yes               
ALDEUTRS  DIM       1      1        186   Using Triage Status (VINAH)        
.                                         " " or 0 = No, 1 = Yes               
ALDEUPRT  DIM       1      1        187   Using Priority (VINAH)             
.                                         " " or 0 = No, 1 = Yes               
ALDEDACP  DIM       1      1        188   Don't Allow Copying Of Linked Refs 
.                                         " " or 0 = No, 1 = Yes               
ALDESPAR  DIM       49     49       189   Spare                              
.
.End of Record                      238  
.
