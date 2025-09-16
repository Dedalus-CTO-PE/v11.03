. ***********************************************************************
. * Include Name  :   PATCANFD.INC
. *
. * Function      :   File Def'n Include for Patient                            
. *                   Cancer Codes
. *
. * File Type     :   SQL     Keys: KEY9
. *
. * File Name     :   patcanaf.dat
. *
. ***********************************************************************
.
.Data File Definition
.--------------------
PATCANA1   IFILE    SQL, FIXED=42, KEY="U1-9"                            
.
.Name     Type      Length Physical Start  Description
.----     ----      ------ -------- -----  -----------
PTCCCODE  DIM          9       9      1    Cancer Code                        
PTCCLATR  FORM         1       2     10    Input Laterality (Y/N)?  0=No, 1=Yes
PTCCSPAR  DIM         30      30     12    Spare                              
.
.End of Record                       42   
