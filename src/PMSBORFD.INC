. V9.11.001 17/03/2009 JH  Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   PMSBORFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Boarder Defaults                   
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsboraf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSBORA1   IFILE    SQL, FIXED=73, KEY="U1-8"                                   
PMSBORA2   IFILE    SQL, FIXED=73, KEY="U9-11"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMBOFIEL  DIM       8      8        1     Field                              
PMBOFLNO  DIM       3      3        9     Field number                       
PMBODEFT  DIM       1      1        12    Default Type 0=PMI 1=Code          
PMBOCODE  DIM       10     10       13    Code                               
PMBOSPAR  DIM       50     50       23    Spare                              
.
.End of Record                      73   
.
