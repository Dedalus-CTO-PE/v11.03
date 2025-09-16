. V11.00.01 22/04/2020 EC C-0850105 Added PMCUTSTA and PMCUTLOC                 
. V10.02.01 27/06/2011 SA C-240722 Extended Name Fields. Added Second Given Name
. V9.09.002 28/08/2007                                                          
. V9.05.001 17/03/2006 EC  Added PMCUHOSP and Index 6 CAR 78527                 
. V9.04.001 15/08/2005 EC  Added Index 5 CAR 57203                              
. V9.03.002 15/12/2003 EC  Added PMCUOSIT                                       
. *----------------------------------------------------------------------
. * Include Name  :   PMSCURFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Current Patient Location Table     
. *
. * File Type     :   SQL
. *
. * File Name     :   pmscuraf.dat
. *
. * Index Values  :   KEY8    KEY96   KEY16   KEY16   KEY97   KEY99   KEY88  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSCURA1   IFILE    SQL, FIXED=246, KEY="U1-8"
PMSCURA2   IFILE    SQL, FIXED=246, KEY="U9-48,49-88,89-96,1-8"
PMSCURA3   IFILE    SQL, FIXED=246, KEY="U89-96,1-8"
PMSCURA4   IFILE    SQL, FIXED=246, KEY="U97-104,1-8"
PMSCURA5   IFILE    SQL, FIXED=246, KEY="U155-155,9-48,49-88,89-96,1-8"
PMSCURA6   IFILE    SQL, FIXED=246, KEY="U162-164,9-48,49-88,89-96,1-8"
PMSCURA7   IFILE    SQL, FIXED=246, KEY="U49-88,9-48,1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMCUVISN  DIM       8      8        1     Visit Number                       
PMCUSURN  DIM       40     40       9     Surname                            
PMCUGNAM  DIM       40     40       49    First Given name                   
PMCUURNO  DIM       8      8        89    UR Number                          
PMCUDATE  DIM       8      8        97    Visit Date (CCYYMMDD)              
PMCULOCN  DIM       50     50       105   Location                           
PMCUSYST  DIM       1      1        155   System                             
.                                         1=EMR                                
.                                         2=Outpatient                         
.                                         3=Inpatient                          
.                                         4=Booking                            
.                                         8=Patient Events                     
.                                         9=Allied Health                      
PMCUOSIT  DIM       6      6        156   Outpatient Site                    
PMCUHOSP  DIM       3      3        162   Hospital ID (pathspaf)             
PMCUGNM2  DIM       40     40       165   Second Given Name                  
PMCUTSTA  DIM       2      2        205   Theatre Status                     
.                                         01 = Holding                         
.                                         02 = Anaes                           
.                                         03 = Theatre                         
.                                         04 = Abandoned                       
.                                         05 = Recovery-Front                  
.                                         06 = Recovery-Back                   
.                                         07 = Recovery-Day                    
.                                         08 = Ready to Depart                 
.                                         09 = Exit                            
.                                         10 = ICU                             
.                                         11 = Deceased                        
.                                         12 = Transferred                     
.                                         13 = Cancelled                       
PMCUTLOC  DIM       6      6        207   Theatre Location (opropraf)        
PMCUSPAR  DIM       33     33       213   Spare Variable                     
.
.End of Record                      246  
.
