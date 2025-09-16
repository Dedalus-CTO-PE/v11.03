. V10.11.01 09/08/2017 DS C-0842626 Created FD                                  
. *----------------------------------------------------------------------
. * Include Name  :   PATRDCFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Restricted Diagnosis Codes         
. *
. * File Type     :   SQL
. *
. * File Name     :   patrdcaf.dat
. *
. * Index Values  :   KEY11                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATRDCA1   IFILE    SQL, FIXED=112, KEY="U1-9,80-81"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTRCCODE  DIM       9      9        1     ICD 10 Diagnosis Code              
PTRCDESC  DIM       70     70       10    ICD 10 Diagnosis Description       
PTRCVRSN  DIM       2      2        80    ICD 10 Version                     
PTRCSPAR  DIM       30     30       82    Spare                              
.
.End of Record                      112  
.
