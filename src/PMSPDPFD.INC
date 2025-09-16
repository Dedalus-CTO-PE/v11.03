. v9.00.003 14/03/2002                                                       
. *----------------------------------------------------------------------
. * Include Name  :   PMSPDPFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Patient Dependency Table           
. *
. * File Type     :   SQL
. *
. * File Name     :   pmspdpaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSPDPA1   IFILE    SQL, FIXED=55, KEY="U1-8,9-16,17-17"                        
PMSPDPA2   IFILE    SQL, FIXED=55, KEY="U18-20,9-16,17-17,1-8"                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMPDADMN  DIM       8      8        1     Admission Number                   
PMPDDATE  DIM       8      8        9     Date of Service                    
PMPDSHIF  DIM       1      1        17    Shift (1,2 or 3)                   
PMPDWARD  DIM       3      3        18    Ward                               
PMPDSCOR  FORM      3      3        21    Score                              
PMPDCATE  DIM       1      1        24    Grouping (dependent on PMPDSCOR)   
.                                         1 if Score 0-24
.                                         2 if Score 25-48 
.                                         3 if Score 49-120
.                                         4 if Score 121-223
.                                         5 if Score over 223
PMPDCLOS  DIM       1      1        25    Closed (Y=Yes)                     
PMPDSPAR  DIM       29     29       26    Spare Variable                     
.
.End of Record                      55   
.
