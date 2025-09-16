. V6.06.005 30/04/1999                                                       
. V6.06.001 03/05/1999                                                       
. *----------------------------------------------------------------------
. * Include Name  :   EMRUSEFD.INC
. *
. * Function      :   File Def'n Include for WEB
. *                   Emergency User Security            
. *
. * File Type     :   SQL
. *
. * File Name     :   emruseaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRUSEA1   IFILE    SQL, FIXED=127, KEY="U1-10"                                 
EMRUSEA2   IFILE    SQL, FIXED=127, KEY="U11-45,1-10"                           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMUSEUS   DIM       10     10       1     Emergency User ID                  
EMUSDES   DIM       35     35       11    Name                               
EMUSPAS   DIM       10     10       46    Password                           
EMUSLEV   DIM       2      2        56    Security Level                     
EMUSACT   DIM       1      1        58    Active 0=no 1=yes                  
EMUSEDT   DIM       8      8        59    Expire Date ccyymmdd               
EMUSSPA   DIM       60     60       67    Spare                              
.
.End of Record                      127  
.
