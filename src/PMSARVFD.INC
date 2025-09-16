. V10.09.01 30/11/2016 SA C-0323730 Added Medical Auth. Approval to PMAVRTYP &
.                                   PMAVRSTA
. V10.03.03 11/11/2013 EC C-291974 Changed category of PMAVBTYP                 
. V10.03.02 28/10/2013 EC C-291974 Changed category of PMAVRSTA                 
. V10.03.01 20/09/2013 EC C-275205 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   PMSARVFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Admission Request Review Details   
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsarvaf.dat
. *
. * Index Values  :   KEY16   KEY32                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSARVA1   IFILE    SQL, FIXED=323, KEY="U1-10,11-13,14-16"                     
PMSARVA2   IFILE    SQL, FIXED=323, KEY="U1-10,17-24,25-32,11-13,14-16"         
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMAVREQN  DIM       10     10       1     Admission Request Number           
PMAVRTYP  DIM       3      3        11    Type of Review                     
.                                         001 - Pre Anaesthetic                
.                                         002 - Clinical Review                
.                                         003 - Medical Authorisation Approval 
PMAVCNTR  DIM       3      3        14    Counter                            
PMAVDATR  DIM       8      8        17    Date of Review (CCYYMMDD)          
PMAVTIMR  DIM       8      8        25    Time of Review (hh:mm:ss)          
PMAVURNO  DIM       8      8        33    U/R Number                         
PMAVVISN  DIM       8      8        41    Visit Number                       
PMAVRSTA  DIM       3      3        49    Review Status                      
.                                          Type of Review 001 - Pre Anaesthetic
.                                                               (Cat ym)
.                                                         002 - Clinical Review
.                                                               (Cat yl)
.                                                         003 - Medical
.                                                               Authorisation
.                                                               Approval
.                                                               (Cat Ma)
PMAVBTYP  DIM       3      3        52    Type of Bed Required (Cat yj)      
PMAVPSAH  DIM       1      1        55    Patient Suitable for Another Hospit
.                                         "0" = No                             
.                                         "1" = yes                            
.                                         "2" = Unknown                        
PMAVHOSP  DIM       3      3        56    Other Hospital Code (pathspaf)     
PMAVASAS  DIM       4      4        59    ASA Score                          
PMAVRSED  DIM       8      8        63    Review Status End Date (CCYYMMDD)  
PMAVDAT1  DIM       8      8        71    User Defined Date 1 (CCYYMMDD)     
PMAVDAT2  DIM       8      8        79    User Defined Date 2 (CCYYMMDD)     
PMAVDAT3  DIM       8      8        87    User Defined Date 3                
PMAVDAT4  DIM       8      8        95    User Defined Date 4 (CCYYMMDD)     
PMAVDAT5  DIM       8      8        103   User Defined Date 5 (CCYYMMDD)     
PMAVTIM1  DIM       8      8        111   User Defined Time 1 (HH:MM:SS)     
PMAVTIM2  DIM       8      8        119   User Defined Time 2 (HH:MM:SS)     
PMAVTIM3  DIM       8      8        127   User Defined Time 3 (HH:MM:SS)     
PMAVTIM4  DIM       8      8        135   User Defined Time 4 (HH:MM:SS)     
PMAVTIM5  DIM       8      8        143   User Defined Time 5 (HH:MM:SS)     
PMAVYN01  DIM       1      1        151   User Defined Y/N 1                 
PMAVYN02  DIM       1      1        152   User Defined Y/N 2                 
PMAVYN03  DIM       1      1        153   User Defined Y/N 3                 
PMAVYN04  DIM       1      1        154   User Defined Y/N 4                 
PMAVYN05  DIM       1      1        155   User Defined Y/N 5                 
PMAVHCP1  DIM       10     10       156   User Defined HCP 1                 
PMAVHCP2  DIM       10     10       166   User Defined HCP 2                 
PMAVHCP3  DIM       10     10       176   User Defined HCP 3                 
PMAVHCP4  DIM       10     10       186   User Defined HCP 4                 
PMAVHCP5  DIM       10     10       196   User Defined HCP 5                 
PMAVUDC1  DIM       3      3        206   User Defined Coded Field 1         
PMAVUDC2  DIM       3      3        209   User Defined Coded Field 2         
PMAVUDC3  DIM       3      3        212   User Defined Coded Field 3         
PMAVUDC4  DIM       3      3        215   User Defined Coded Field 4         
PMAVUDC5  DIM       3      3        218   User Defined Coded Field 5         
PMAVCDAT  DIM       8      8        221   Created Date (CCYYMMDD)            
PMAVCTIM  DIM       8      8        229   Created Time (HH:MM:SS)            
PMAVCUID  DIM       10     10       237   Created By User (websecaf)         
PMAVUDAT  DIM       8      8        247   Updated Date (CCYYMMDD)            
PMAVUTIM  DIM       8      8        255   Updated Time (HH:MM:SS)            
PMAVUUID  DIM       10     10       263   Updated By User (websecaf)         
PMAVSPAR  DIM       50     50       273   Spare                              
.
.End of Record                      323  
.
