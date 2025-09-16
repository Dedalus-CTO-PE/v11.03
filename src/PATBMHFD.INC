. 9.09 .001 10/09/2007 PV  Created PATBMHFD / PATBMHIO CAR 148954            
. *----------------------------------------------------------------------
. * Include Name  :   PATBMHFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Bed Management Header Table        
. *
. * File Type     :   SQL
. *
. * File Name     :   patbmhaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATBMHA1   IFILE    SQL, FIXED=70, KEY="U1-3,4-11,12-14"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTBHWARD  DIM       3      3        1     Ward                               
PTBHDATE  DIM       8      8        4     Date (CCYYMMDD)                    
PTBHOPPE  DIM       3      3        12    Operating Period (Cat SP)          
PTBHTOTP  DIM       5      5        15    Total Number of Patients           
PTBHSPAR  DIM       50     50       20    Spare Variable                     
.
.End of Record                      70   
.
