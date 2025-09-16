. V10.14.01 19/02/2019 EC C-0867703 Changed NHETECD to 5 chars. Added index 2   
. V5.02.001 25/09/1994 BGA Created File                                         
. *----------------------------------------------------------------------
. * Include Name  :   NHIETHFD.INC
. *
. * Function      :   File Def'n Include for NZ National Health System          
. *                   Ethnicity Codes File               
. *
. * File Type     :   SQL
. *
. * File Name     :   nhiethaf.dat
. *
. * Index Values  :   KEY5    KEY6                                           
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
NHIETHA1   IFILE    SQL, FIXED=55, KEY="U1-5"
NHIETHA2   IFILE    SQL, FIXED=55, KEY="U34-34,1-5"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
NHETECD   DIM       5      5        1     Ethnicity Code                     
NHETDES   DIM       25     25       6     Description                        
NHETIBA   DIM       3      3        31    Map to IBA Code (Category P1)      
NHETLEV   DIM       1      1        34    Ethnicity Level                    
.                                         2 = Level 2. 4 = Level 4.            
NHETSPA   DIM       20     20       35    Spare                              
.
.End of Record                      55   
.
