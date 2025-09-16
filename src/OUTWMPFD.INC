. V10.07.01 26/10/2015 EC Added OP site to index 1. Removed index 2 CAR 268970
. V10.06.01 12/03/2015 EC Added OP site and index 2 CAR 268970
. V5.08.005 12/04/2000                                                       
. V5.08.006 19/04/2000 Pat                                                   
. *----------------------------------------------------------------------
. * Include Name  :   OUTWMPFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   Template Mapping        
. *
. * File Type     :   SQL
. *
. * File Name     :   outwmpaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTWMPA1   IFILE    SQL, FIXED=103, KEY="U53-58,1-6,7-14,15-16,17-19" 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTWMCLID  DIM       6      6        1     Clinic ID                          
OTWMMPSV  DIM       8      8        7     Map from Server                    
OTWMMPRP  DIM       2      2        15    Map from Report                    
OTWMMPTP  DIM       3      3        17    Map from Template                  
OTWMMPTT  DIM       3      3        20    Map to Template                    
OTWMDESC  DIM       30     30       23    Description                        
OTWMSITE  DIM       6      6        53    Site Code
OTWMSPAR  DIM       44     44       59    Spare                              
.
.End of Record                      103  
.
