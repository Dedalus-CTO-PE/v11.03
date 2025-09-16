. V9.09.001 31/10/2007 PV  Created Morgue Management Table CAR 151949
. V9.11.001 23/09/2008 EC  Added PMMRHOSP CAR 174048                         
. *----------------------------------------------------------------------
. * Include Name  :   PMSMORFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Morgue Management Table            
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsmoraf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSMORA1   IFILE    SQL, FIXED=314, KEY="U9-16"                                 
PMSMORA2   IFILE    SQL, FIXED=314, KEY="U17-24,25-32,9-16"                     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMMRURNO  DIM       8      8        1     U/R Number                         
PMMRADMN  DIM       8      8        9     Admission Number                   
PMMRARDT  DIM       8      8        17    Arrival Date (CCYYMMDD)            
PMMRARTM  DIM       8      8        25    Arrival Time (HH:MM:SS)            
PMMRLOCA  DIM       3      3        33    Location (Cat mu)                  
PMMRECBY  DIM       3      3        36    Expected Collection By (Cat cy)    
PMMRECDT  DIM       8      8        39    Expected Collection Date (CCYYMMDD)
PMMRECTM  DIM       8      8        47    Expected Collection Time (HH:MM:SS)
PMMRECCM  DIM       70     70       55    Expected Collection Comments       
PMMRACBY  DIM       3      3        125   Actual Collection By (Cat ac)      
PMMRACDT  DIM       8      8        128   Actual Collection Date (CCYYMMDD)  
PMMRACTM  DIM       8      8        136   Actual Collection Time (HH:MM:SS)  
PMMRACCM  DIM       70     70       144   Actual Collection Comments         
PMMRHOSP  DIM       3      3        214   Hospital ID (pathspaf)             
.                                                                       
PMMRSPAR  DIM       97     97       217   Spare Variable                     
.
.End of Record                      314  
.
