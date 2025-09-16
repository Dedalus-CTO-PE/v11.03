. v9.02.005 12/01/2002 dc  Made WARD part of key                             
. *----------------------------------------------------------------------
. * Include Name  :   PATMSDFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Department Statistics File         
. *
. * File Type     :   SQL
. *
. * File Name     :   patmsdaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATMSDA1   IFILE    SQL, FIXED=142, KEY="U1-3,92-94,4-9"                        
PATMSDA2   IFILE    SQL, FIXED=142, KEY="U4-9,1-3,92-94"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTMDDEPT  DIM       3      3        1     Department Code                    
PTMDDATE  DIM       6      6        4     Period (ccyymm)                    
PTMDPRAD  FORM      8      5        10    No. of Admiss. (Priv. not Boarders)
PTMDPBAD  FORM      8      5        15    No. of Admiss. (Publ. not Boarders)
PTMDTRIN  FORM      8      5        20    No. of Transfers In                
PTMDTOUT  FORM      8      5        25    No. of Transfers Out               
PTMDDSCH  FORM      8      5        30    No. of Discharges                  
PTMDNBDY  FORM      8      5        35    No. of Bed Days (Not Boarders)     
PTMDBBDY  FORM      8      5        40    No. of Bed Days (Boarders)         
PTMDDEAD  FORM      8      5        45    No. of Deaths                      
PTMDBPRA  FORM      8      5        50    No. of Admiss. (Private Boarders)  
PTMDBPBA  FORM      8      5        55    No. of Admiss. (Public Boarders)   
PTMDLVBD  FORM      8      5        60    No. of Bed Days on Leave           
PTMDAEAD  FORM      8      5        65    No. of A&E Admiss. (Source = A&E)  
PTMDOBTH  FORM      8      5        70    No. of Obstetrics Theatre          
PTMDOUTT  FORM      8      5        75    No. of Outpatient Theatre          
PTMDDAYS  FORM      2      2        80    No. of Days in the Month           
PTMDPATS  FORM      8      5        82    No. of Patients in the Month       
PTMDSBDY  FORM      8      5        87    No. of Separation Bed Days         
PTMDWARD  DIM       3      3        92    Ward Number                        
PTMDSPAR  DIM       47     47       95    Spare Variable                     
.
.End of Record                      142  
.
