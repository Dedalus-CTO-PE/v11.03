. V9.10.001 18/07/2008 JH  Created for CAR 174030                            
. V9.11.001 08/10/2008 EC  Added PMEBURNO CAR 174068                          
. V9.11.002 28/10/2008 EC  Changed index 2 CAR 174077                        
. V9.11.003 05/12/2008 EC  Added Indexes 3 to 7. CAR 174080                  
. V9.11.004 17/12/2008 EC  Added PMEBGEND CAR 174080                         
. V9.11.005 19/12/2008 EC  Added index 8 CAR 174080                          
. *----------------------------------------------------------------------
. * Include Name  :   PMSEPBFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Expected Patient Bed Board Table   
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsepbaf.dat
. *
. *       Programmer Note: The variables in this FD have the same 4-character
. *                        prefix as those in PMSEBHFD, so if you are adding
. *                        new variables, then make sure they don't clash
. *                        with those in PMSEBHFD.
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSEPBA1   IFILE    SQL, FIXED=239, KEY="U1-3,4-6,7-9,10-12,23-30"              
PMSEPBA2   IFILE    SQL, FIXED=239, KEY="U128-135,23-30,1-3,4-6,7-9,10-12"      
PMSEPBA3   IFILE    SQL, FIXED=239, KEY="U1-3,13-14,4-6,7-9,10-12,23-30"        
PMSEPBA4   IFILE    SQL, FIXED=239, KEY="U1-3,15-16,4-6,7-9,10-12,23-30"        
PMSEPBA5   IFILE    SQL, FIXED=239, KEY="U1-3,17-18,4-6,7-9,10-12,23-30"        
PMSEPBA6   IFILE    SQL, FIXED=239, KEY="U1-3,19-20,4-6,7-9,10-12,23-30"        
PMSEPBA7   IFILE    SQL, FIXED=239, KEY="U1-3,21-22,4-6,7-9,10-12,23-30"        
PMSEPBA8   IFILE    SQL, FIXED=239, KEY="U1-3,4-6,7-9,10-12,31-38,39-46,23-30"  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMEBHOSP  DIM       3      3        1     Hospital Id (pathspaf)             
PMEBWARD  DIM       3      3        4     Ward (patwr1af)                    
PMEBROOM  DIM       3      3        7     Room                               
PMEBBEDD  DIM       3      3        10    Bed                                
PMEBSEQ1  DIM       2      2        13    Sequence of ward View 1            
PMEBSEQ2  DIM       2      2        15    Sequence of ward View 2            
PMEBSEQ3  DIM       2      2        17    Sequence of ward View 3            
PMEBSEQ4  DIM       2      2        19    Sequence of ward View 4            
PMEBSEQ5  DIM       2      2        21    Sequence of ward View 5            
PMEBADMN  DIM       8      8        23    Admission number                   
PMEBEDAT  DIM       8      8        31    Expected admission date (ccyymmdd) 
PMEBETIM  DIM       8      8        39    Expected admission time (hh:mm:ss) 
PMEBEWRD  DIM       3      3        47    Exp admission ward                 
PMEBEBED  DIM       3      3        50    Exp admission bed                  
PMEBTBDT  DIM       8      8        53    Theatre booking date (ccyymmdd)    
PMEBTBTM  DIM       8      8        61    Theatre booking time (hh:mm:ss)    
PMEBPOWD  DIM       3      3        69    Exp Post Op Ward                   
PMEBPOBD  DIM       3      3        72    Exp Post Op Bed                    
PMEBABRW  DIM       3      3        75    Allocated bed request ward         
PMEBABRB  DIM       3      3        78    Allocated bed request bed          
PMEBSURN  DIM       20     20       81    Surname                            
PMEBGIVN  DIM       25     25       101   Given name                         
PMEBBRPT  DIM       1      1        126   Bed Request Patient (1=Yes)        
PMEBCEAS  DIM       1      1        127   Deceased (1=Yes)                   
PMEBURNO  DIM       8      8        128   U/R Number                         
PMEBGEND  DIM       1      1        136   Gender                             
PMEBWEBC  DIM       10     10       137   WEB User id created (websecaf)     
PMEBDATC  DIM       8      8        147   Date created (ccyymmdd)            
PMEBTIMC  DIM       8      8        155   Time created (hh:mm:ss)            
PMEBWEBU  DIM       10     10       163   WEB User id updated (websecaf)     
PMEBDATU  DIM       8      8        173   Date updated (ccyymmdd)            
PMEBTIMU  DIM       8      8        181   Time updated (hh:mm:ss)            
PMEBSPAR  DIM       50     50       189   Spare                              
.
.End of Record                      239  
.
