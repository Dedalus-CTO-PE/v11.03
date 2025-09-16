. V10.02.01 19/05/2011 ML C-240724 Added MREXVHOS Hospital (of Visit)           
. V9.07.001 12/09/2006 PV C-118227 Added Admission Type and Class               
. V5.10.006 06/03/2001 JT  Added new fields                                     
. *----------------------------------------------------------------------
. * Include Name  :   MRTEXTFD.INC
. *
. * Function      :   File Def'n Include for Medical Records                    
. *                   Medical Records Extract            
. *
. * File Type     :   SQL
. *
. * File Name     :   mrtextaf.dat
. *
. * Index Values  :   KEY4    KEY39                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MRTEXTA1   IFILE    SQL, FIXED=345, KEY="U1-4"                                  
MRTEXTA2   IFILE    SQL, FIXED=345, KEY="U5-39,1-4"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MREXEID   DIM       4      4        1     Extract ID                         
MREXDESC  DIM       35     35       5     Description                        
MREXDDFR  DIM       8      8        40    Discharge Date From                
MREXDDTO  DIM       8      8        48    Discharge Date To                  
MREXADFR  DIM       8      8        56    Admission Date From                
MREXADTO  DIM       8      8        64    Admission Date To                  
MREXUNIT  DIM       3      3        72    Unit                               
MREXWARD  DIM       3      3        75    Ward                               
MREXPDRG  DIM       4      4        78    Provisional DRG                    
MREXPRCG  DIM       3      3        82    Procedure Group                    
MREXWLPR  DIM       3      3        85    Waiting List Procedure             
MREXCONS  DIM       6      6        88    Consultant                         
MREXINCD  DIM       1      1        94    Include Deceased                   
MREXAUTC  DIM       4      4        95    Automatic Coding Template          
MREXNUMR  FORM      5      4        99    Number of Records Extracted        
MREXINPR  DIM       1      1        103   Extract in Progress Ind(0=NO 1=YES)
MREXANL1  DIM       3      3        104   Analysis Level 1                   
MREXANL2  DIM       3      3        107   Analysis Level 2                   
MREXANL3  DIM       3      3        110   Analysis Level 3                   
MREXANL4  DIM       3      3        113   Analysis Level 4                   
MREXANM1  DIM       3      3        116   Analysis Measures 1                
MREXANM2  DIM       3      3        119   Analysis Measures 2                
MREXANM3  DIM       3      3        122   Analysis Measures 3                
MREXCUID  DIM       10     10       125   Created by User ID                 
MREXCDAT  DIM       8      8        135   Date Created                       
MREXCTIM  DIM       8      8        143   Time Created                       
MREXMUID  DIM       10     10       151   Modified by User ID                
MREXMDAT  DIM       8      8        161   Modified Date                      
MREXMTIM  DIM       8      8        169   Modified Time                      
MREXDIND  DIM       1      1        177   Discharged Patients Only Indicator  
MREXSDSC  DIM       1      1        178   Sameday Discharge                  
MREXSUBR  DIM       35     35       179   Suburb                             
MREXPCOD  DIM       8      8        214   Postcode                           
MREXPSEX  DIM       1      1        222   Sex                                
MREXCNTR  DIM       3      3        223   Country of Birth                   
MREXATYP  DIM       3      3        226   Patient Admission Type (CAT A)     
MREXPTYP  DIM       3      3        229   Patient Admission Class (CAT P)    
MREXVHOS  DIM       3      3        232   Hospital Id. (of Visit)            
MREXSPAR  DIM       110    110      235   Spare                              
.
.End of Record                      345  
.
