. 9.11 .001 18/08/2009 JT                                                    
. *----------------------------------------------------------------------
. * Include Name  :   PATCMEFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Casemix Management Extract         
. *
. * File Type     :   SQL
. *
. * File Name     :   patcmeaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATCMEA1   IFILE    SQL, FIXED=207, KEY="U1-8"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTCEADMN  DIM       8      8        1     Admission Number                   
PTCEURNO  DIM       8      8        9     U/R Number                         
PTCEWARD  DIM       3      3        17    Ward                               
PTCEWBED  DIM       3      3        20    Bed                                
PTCEPNAM  DIM       20     20       23    Patient Name                       
PTCEPSEX  DIM       1      1        43    Sex                                
PTCEPAGE  FORM      3      3        44    Age                                
PTCEADOC  DIM       10     10       47    Attending Doctor/Clinician         
PTCEAMBS  DIM       9      9        57    CMBS/DRG Code                      
PTCEIDSC  DIM       30     30       66    DRG Description                    
PTCEHFND  DIM       6      6        96    Health Fund                        
PTCEADAT  DIM       8      8        102   Admission Date (CCYYMMDD)          
PTCEODAT  DIM       8      8        110   Operation Date (CCYYMMDD)          
PTCECPAY  DIM       1      1        118   Casepayment                        
PTCEPCAT  DIM       3      3        119   Patient Classification (Catg. A)   
PTCEBTYP  DIM       3      3        122   Bed Type (Catg. BT)                
PTCECLOS  FORM      4      3        125   Current Length of Stay             
PTCETLOS  FORM      4      3        128   Target Length of Stay              
PTCELDAY  FORM      4      3        131   Leave Days                         
PTCEIDAY  FORM      4      3        134   Inlier Days                        
PTCEODAY  FORM      4      3        137   Outlier Days                       
PTCEDPIN  FORM      4      3        140   Days past Inlier                   
PTCEDTOU  FORM      4      3        143   Days to Outlier                    
PTCEDTOR  FORM      4      3        146   Days Over Target LOS               
PTCEEDAY  FORM      4      3        149   Last day of Stepdown (S/D Table)   
PTCERATE  FORM      12.2   8        152   Current Room rate                  
PTCEDCHR  FORM      4      3        160   Days to next Rate Change           
PTCELSUM  FORM      12.2   8        163   Lumpsum Amount                     
PTCEACHR  FORM      12.2   8        171   Overall Charge                     
PTCEDRGD  DIM       8      8        179   DRG Date                           
PTCESPAR  DIM       20     20       187   Spare variable                     
.
.End of Record                      207  
.
