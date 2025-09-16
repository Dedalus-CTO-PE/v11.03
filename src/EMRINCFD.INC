. V9.02.001 25/11/2002 EC  Added Index 2 and 3                               
. V9.00.001 06/07/2001 SB  Created FD 
. *----------------------------------------------------------------------
. * Include Name  :   EMRINCFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   Incomplete Visit                   
. *
. * File Type     :   SQL
. *
. * File Name     :   emrincaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRINCA1   IFILE    SQL, FIXED=112, KEY="U1-8"                                  
EMRINCA2   IFILE    SQL, FIXED=112, KEY="U12-21,1-8"                            
EMRINCA3   IFILE    SQL, FIXED=112, KEY="U22-31,1-8"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMIPADMN  DIM       8      8        1     Visit Number                       
EMIPDCOM  DIM       1      1        9     Doctor Details Complete            
.                                         0 = No
.                                         1 = Yes
.                                         2 = Ignore Until Discharge
EMIPNCOM  DIM       1      1        10    Nurse Details Complete             
.                                         0 = No
.                                         1 = Yes
.                                         2 = Ignore Until Discharge
EMIPCCOM  DIM       1      1        11    Clerical (PSC) Details Complete    
.                                         0 = No
.                                         1 = Yes
EMIPDOCT  DIM       10     10       12    Doctor Code                        
EMIPNURS  DIM       10     10       22    Nurse Code                         
EMIPSPAR  DIM       80     80       32    Spare Variable                     
.
.End of Record                      112  
.
