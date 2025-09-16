. 6.01 .001 21/10/1991 jgc New FD / IO for Box Hill Demo                     
. 6.01 .002 21/10/0091 jgc Fixed Description of Code Field                   
. 6.01 .003 21/10/1991 jgc Addes Extra Index for Question Mark Routine       
. 6.01 .004 22/10/1991 jgc Deleted 2nd Index Not required                    
. *----------------------------------------------------------------------
. * Include Name  :   AAEDG3FD.INC
. *
. * Function      :   File Def'n Include for Accident and Emergency             
. *                   A&E Location Diagnosis Code        
. *
. * File Type     :   SQL
. *
. * File Name     :   aaedg3af.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
AAEDG3A1   IFILE    SQL, FIXED=40, KEY="U1-1,2-3"                               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
AED3BOX2  DIM       1      1        1     Location Box Display Number        
AED3LOCT  DIM       2      2        2     Location Diagnosis Code            
AED3DESC  DIM       35     35       4     Location Diagnosis Description     
AED3BOX3  DIM       1      1        39    Associated Box Display Number      
.
.End of Record                      40   
.
