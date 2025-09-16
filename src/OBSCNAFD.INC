. 9.07 .001 17/08/2006                                                       
. 9.07 .002 17/08/2006                                                       
. *----------------------------------------------------------------------
. * Include Name  :   OBSCNAFD.INC
. *
. * Function      :   File Def'n Include for Clinical Observations              
. *                   Observation Clinical Notes         
. *
. * File Type     :   SQL
. *
. * File Name     :   obscnaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OBSCNAA1   IFILE    SQL, FIXED=564, KEY="U1-8,9-12"                             
OBSCNAA2   IFILE    SQL, FIXED=564, KEY="U1-8,13-20,21-28,9-12"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OBCAVIS   DIM       8      8        1     Visit Number                       
OBCACID   DIM       4      4        9     Clinical Note ID                   
OBCADTE   DIM       8      8        13    Input Date                         
OBCATME   DIM       8      8        21    Input Time                         
OBCAUID   DIM       10     10       29    Input by User                      
OBCAOCG   DIM       3      3        39    Occupational Group                 
OBCATYP   DIM       3      3        42    Type of Note                       
OBCAMDL   DIM       1      1        45    Mark all of Note Deleted 0=No 1=Yes
OBCAHLV   DIM       3      3        46    Highlight Level                    
OBCASLV   DIM       2      2        49    Security Level                     
OBCAMIN   DIM       6      6        51    Time Used in Minutes               
OBCAPT1   DIM       60     60       57    Main Point 1                       
OBCAP1D   DIM       1      1        117   Mark Point 1 as Deleted 0=No, 1=Yes
OBCAPT2   DIM       60     60       118   Main Point 2                       
OBCAP2D   DIM       1      1        178   Mark Point 2 as Deleted 0=No, 1=Yes
OBCAPT3   DIM       60     60       179   Main Point 3                       
OBCAP3D   DIM       1      1        239   Mark Point 3 as Deleted 0=No, 1=Yes
OBCAPT4   DIM       60     60       240   Main Point 4                       
OBCAP4D   DIM       1      1        300   Mark Point 4 as Deleted 0=No, 1=Yes
OBCAUC1   DIM       3      3        301   User Def Code 1 (CAT xx)           
OBCAUC2   DIM       3      3        304   User Def Code 2 (CAT xx)           
OBCAUC3   DIM       3      3        307   User Def Code 3                    
OBCAUC4   DIM       3      3        310   User Def Code 4 (CAT xx)           
OBCAUC5   DIM       3      3        313   User Def Code 5 (CAT xx)           
OBCAUC6   DIM       3      3        316   User Def Code 6 (CAT xx)           
OBCAUC7   DIM       3      3        319   User Def Code 7 (CAT xx)           
OBCAUC8   DIM       3      3        322   User Def Code 8 (CAT xx)           
OBCAUD1   DIM       1      1        325   User Def Y/N 1                     
OBCAUD2   DIM       1      1        326   User Def Y/N 2                     
OBCAUD3   DIM       1      1        327   User Def Y/N 3                     
OBCAUD4   DIM       1      1        328   User Def Y/N 4                     
OBCADD1   DIM       8      8        329   User Def Date 1                    
OBCADD2   DIM       8      8        337   User Def Date 2                    
OBCADLU   DIM       8      8        345   Date Last Updated                  
OBCATLU   DIM       8      8        353   Time Last Updated                  
OBCALID   DIM       10     10       361   Last Updated User ID               
OBCAAT1   DIM       8      8        371   User Def Time 1                    
OBCAAT2   DIM       8      8        379   User Def Time 2                    
OBCATX1   DIM       127    127      387   Text field 1                       
OBCASPA   DIM       50     50       514   Spare                              
.
.End of Record                      564  
.
