. V11.03.01 16/01/2023 TTI C-0816724 New table for Insurance Company Keyword    
. *----------------------------------------------------------------------
. * Include Name  :   PATKICFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Insurance Company Keyword          
. *
. * File Type     :   SQL
. *
. * File Name     :   patkicaf.dat
. *
. * Index Values  :   KEY21   KEY21                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATKICA1   IFILE    SQL, FIXED=51, KEY="U1-6,7-21"
PATKICA2   IFILE    SQL, FIXED=51, KEY="U7-21,1-6"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTKICODE  DIM       6      6        1     Insurance Code (patin1af.icode)    
PTKIKWRD  DIM       15     15       7     Insurance Keyword                  
PTKISPAR  DIM       29     29       22    Spare Variable                     
.
.End of Record                      51   
.
