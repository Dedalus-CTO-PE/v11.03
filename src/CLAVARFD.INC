. V5.01.001 31/03/1992 JMC Created                                           
. *----------------------------------------------------------------------
. * Include Name  :   CLAVARFD.INC
. *
. * Function      :   File Def'n Include for Clinical Audits      
. *                   Clinical Audit Details 
. *
. * File Type     :   SQL
. *
. * File Name     :   clavaraf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CLAVARA1   IFILE    SQL, FIXED=182, KEY="U1-2,3-10,11-12,13-22"
CLAVARA2   IFILE    SQL, FIXED=182, KEY="D1-2,11-12,23-25"
CLAVARA3   IFILE    SQL, FIXED=182, KEY="D1-2,11-12,76-83"
CLAVARA4   IFILE    SQL, FIXED=182, KEY="D1-2,11-12,84-88"
CLAVARA5   IFILE    SQL, FIXED=182, KEY="D1-2,11-12,89-97"
CLAVARA6   IFILE    SQL, FIXED=182, KEY="D1-2,11-12,98-103"
CLAVARA7   IFILE    SQL, FIXED=182, KEY="D1-2,11-12,104-109"
CLAVARA8   IFILE    SQL, FIXED=182, KEY="D1-2,11-12,110-118"
CLAVARA9   IFILE    SQL, FIXED=182, KEY="D1-2,11-12,119-121"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CAVRSITE  DIM       2      2        1     Site Code                          
CAVRVIST  DIM       8      8        3     Visit Number                       
CAVRUNIQ  DIM       2      2        11    Unique Line counter  (1-20)
CAVRTHEU  DIM       10     10       13    Theatre Unique count               
CAVRCODE  DIM       3      3        23    Coded                              
CAVRFREE  DIM       50     50       26    Free format                        
CAVRDATE  DIM       8      8        76    Date                               
CAVRTIME  DIM       5      5        84    Time                               
DCAVRNUM  DIM       9      9        89    Numeric                            
CAVRDOCT  DIM       6      6        98    Doctor                             
CAVRTHET  DIM       6      6        104   Theatre                            
CAVRCOD9  DIM       9      9        110   MBS/ICD-9                          
CAVRCODC  DIM       3      3        119   Coded changeable code              
CAVRDESC  DIM       30     30       122   Changeable coded field description 
CAVRSPAR  DIM       30     30       182   Spare variable
.
.End of Record                      182
.
.Redefine Key Variables
.----------------------
CAVRNUMB  FORM      6.2
.
