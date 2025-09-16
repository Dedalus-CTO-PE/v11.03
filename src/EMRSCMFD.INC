. V10.03.01 31/08/2012 DN C-270231 Created                                      
. *----------------------------------------------------------------------
. * Include Name  :   EMRSCMFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   Emergency Site Based Comments      
. *
. * File Type     :   SQL
. *
. * File Name     :   emrscmaf.dat
. *
. * Index Values  :   KEY5                                                   
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRSCMA1   IFILE    SQL, FIXED=176, KEY="U1-3,4-5"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMSCSITE  DIM       3      3        1     Site Code                          
EMSCLINE  DIM       2      2        4     Line Number                        
EMSCCMNT  DIM       70     70       6     Comment Line                       
EMSCSPAR  DIM       100    100      76    Spare Variable                     
.
.End of Record                      176  
.
