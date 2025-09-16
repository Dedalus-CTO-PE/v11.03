. V9.10.001 18/07/2008 JH  Created for CAR 174029
. V9.11.001 08/10/2008 EC  Added PMBDURNO CAR 174068
. V9.11.002 10/10/2008 EC  Added index 3
. V9.11.003 15/10/2008 EC  Added PMBDCADM to index 1 CAR 174077
. V9.11.004 15/10/2008 EC  Added PMBDCADM to index 3 CAR 174077              
. V9.11.005 30/10/2008 EC  Added PMBDEWRD and PMBDEBED CAR 174077            
. V9.11.006 04/12/2008 EC  Added Indexes 4 to 7. EC CAR 174044               
. *----------------------------------------------------------------------
. * Include Name  :   PMSBBDFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Bed Board Table                    
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsbbdaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSBBDA1   IFILE    SQL, FIXED=217, KEY="U1-3,4-6,7-9,10-12,23-30"              
PMSBBDA2   IFILE    SQL, FIXED=217, KEY="U101-108,23-30,1-3,4-6,7-9,10-12"      
PMSBBDA3   IFILE    SQL, FIXED=217, KEY="U1-3,13-14,4-6,7-9,10-12,23-30"        
PMSBBDA4   IFILE    SQL, FIXED=217, KEY="U1-3,15-16,4-6,7-9,10-12,23-30"        
PMSBBDA5   IFILE    SQL, FIXED=217, KEY="U1-3,17-18,4-6,7-9,10-12,23-30"        
PMSBBDA6   IFILE    SQL, FIXED=217, KEY="U1-3,19-20,4-6,7-9,10-12,23-30"        
PMSBBDA7   IFILE    SQL, FIXED=217, KEY="U1-3,21-22,4-6,7-9,10-12,23-30"        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMBDHOSP  DIM       3      3        1     Hospital Id (pathspaf)             
PMBDWARD  DIM       3      3        4     Ward (patwr1af)                    
PMBDROOM  DIM       3      3        7     Room                               
PMBDBEDD  DIM       3      3        10    Bed                                
PMBDSEQ1  DIM       2      2        13    Sequence of ward View 1            
PMBDSEQ2  DIM       2      2        15    Sequence of ward View 2            
PMBDSEQ3  DIM       2      2        17    Sequence of ward View 3            
PMBDSEQ4  DIM       2      2        19    Sequence of ward View 4            
PMBDSEQ5  DIM       2      2        21    Sequence of ward View 5            
PMBDCADM  DIM       8      8        23    Current Admission Number           
PMBDTBDT  DIM       8      8        31    Theatre booking date (ccyymmdd)    
PMBDTBTM  DIM       8      8        39    Theatre booking time (hh:mm:ss)    
PMBDPOWD  DIM       3      3        47    Exp Post Op ward                   
PMBDPOBD  DIM       3      3        50    Exp Post Op Bed                    
PMBDSURN  DIM       20     20       53    Surname                            
PMBDGIVN  DIM       25     25       73    Given name                         
PMBDGEND  DIM       1      1        98    Gender                             
PMBDHFST  DIM       1      1        99    Health Fund Stepdown reached       
PMBDCEAS  DIM       1      1        100   Deceased                           
PMBDURNO  DIM       8      8        101   U/R Number                         
PMBDEWRD  DIM       3      3        109   Expected Ward (Bed Request)        
PMBDEBED  DIM       3      3        112   Expected Bed (Bed Request)         
PMBDWEBC  DIM       10     10       115   Web user id created (websecaf)     
PMBDDATC  DIM       8      8        125   Date created (ccyymmdd)            
PMBDTIMC  DIM       8      8        133   Time created (hh:mm:ss)            
PMBDWEBU  DIM       10     10       141   Web User id updated (websecaf)     
PMBDDATU  DIM       8      8        151   Date updated (ccyymmdd)            
PMBDTIMU  DIM       8      8        159   Time updated (hh:mm:ss)            
PMBDSPAR  DIM       50     50       167   Spare                              
.
.End of Record                      217  
.
