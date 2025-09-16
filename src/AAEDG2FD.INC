. 6.01 .001 21/10/0091 jgc New FD for Box Hill Demo                          
. 6.01 .002 21/10/1991 jgc Added Index 2 for Question mark Routine           
. 6.01 .003 22/10/1991 jgc Deleted 2nd Index Not required                    
. *----------------------------------------------------------------------
. * Include Name  :   AAEDG2FD.INC
. *
. * Function      :   File Def'n Include for Accident and Emergency             
. *                   A&E Sickness/Disease Diagnosis     
. *
. * File Type     :   SQL
. *
. * File Name     :   aaedg2af.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
AAEDG2A1   IFILE    SQL, FIXED=40, KEY="U1-1,2-3"                               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
AED2BOX1  DIM       1      1        1     Disease/Sickness Box Display Number
AED2DISE  DIM       2      2        2     Disease/Sickness Diagnosis Code    
AED2DESC  DIM       35     35       4     Disease/Sickness Description       
AED2BOX2  DIM       1      1        39    Location Box Display Number        
.
.End of Record                      40   
.
