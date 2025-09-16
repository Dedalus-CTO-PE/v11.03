. 6.01 .001 21/10/0091     TEST                                              
. *----------------------------------------------------------------------
. * Include Name  :   AAEDG1FD.INC
. *
. * Function      :   File Def'n Include for Accident and Emergency             
. *                   A&E Initial Diagnosis Code         
. *
. * File Type     :   SQL
. *
. * File Name     :   aaedg1af.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
AAEDG1A1   IFILE    SQL, FIXED=24, KEY="U1-2"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
AED1INIT  DIM       2      2        1     Initial Diagnosis Code             
AED1DESC  DIM       20     20       3     Description                        
AED1BOX1  DIM       1      1        23    Disease/ Sickness Box              
.
.End of Record                      24   
.
