. V9.02.004 19/12/2001  EC Added new key                                     
. *----------------------------------------------------------------------
. * Include Name  :   PMSDUNFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Doctor/Unit Combination            
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsdunaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSDUNA1   IFILE    SQL, FIXED=90, KEY="U1-6,7-9"                               
PMSDUNA2   IFILE    SQL, FIXED=90, KEY="U7-9,10-10,1-6"                         
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMDUDOCT  DIM       6      6        1     Doctor Code                        
PMDUUNIT  DIM       3      3        7     Unit (Category AC)                 
PMDUHEAD  DIM       1      1        10    Head of Unit                       
PMDUSPAR  DIM       79     79       11    Spare Variable                     
.
.End of Record                      90   
.
