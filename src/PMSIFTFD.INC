. V9.03.001 13/06/2003 LV  Created New FD                                    
. *----------------------------------------------------------------------
. * Include Name  :   PMSIFTFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Infection Control File             
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsiftaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSIFTA1   IFILE    SQL, FIXED=164, KEY="U9-16"                                 
PMSIFTA2   IFILE    SQL, FIXED=164, KEY="U1-8,9-16"                             
PMSIFTA3   IFILE    SQL, FIXED=164, KEY="U33-40,17-18,9-16"                     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMIFURNO  DIM       8      8        1     UR Number                          
PMIFADMN  DIM       8      8        9     Admission Number                   
PMIFVTYP  DIM       2      2        17    Visit Type                         
PMIFCLOC  DIM       6      6        19    Current Location                   
PMIFICAT  DIM       2      2        25    Type of Infection Category         
PMIFITYP  DIM       3      3        27    Type of Infection                  
PMIFILOC  DIM       3      3        30    Location of Infection (CAT DJ)     
PMIFIDTE  DIM       8      8        33    Date Infection Discovered          
PMIFITIM  DIM       8      8        41    Date Infection Discoverd (HH:MM:SS)
PMIFLVIS  DIM       2      2        49    Level of Isolation                 
PMIFDTIS  DIM       8      8        51    Date of Isolation                  
PMIFTMIS  DIM       8      8        59    Time of Isolation (HH:MM:SS)       
PMIFDPND  DIM       3      3        67    Dependancy (CAT DB)                
PMIFLTGP  DIM       1      1        70    Letter to GP 0=No 1=Yes            
PMIFGVTN  DIM       70     70       71    Government Agency Notified         
PMIFGVTC  DIM       3      3        141   Govt Agency Contacted via (CAT CZ) 
PMIFSPAR  DIM       20     20       144   Spare                              
.
.End of Record                      164  
.
