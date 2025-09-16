. V11.01.01 02/03/2021 EC C-0886820 Created FD                                  
. *----------------------------------------------------------------------
. * Include Name  :   OPRWCNFD.INC
. *
. * Function      :   File Def'n Include for Theatre System                     
. *                   Theatre Week Cycle Number          
. *
. * File Type     :   SQL
. *
. * File Name     :   oprwcnaf.dat
. *
. * Index Values  :   KEY11   KEY11                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OPRWCNA1   IFILE    SQL, FIXED=90, KEY="U1-8,9-11"
OPRWCNA2   IFILE    SQL, FIXED=90, KEY="U9-11,1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPWCEFFD  DIM       8      8        1     Effective Date (CCYYMMDD)          
OPWCUNIT  DIM       3      3        9     Unit (Category ST)                 
OPWCWEEK  DIM       2      2        12    Number of Weeks for Rotation       
OPWCCDAT  DIM       8      8        14    Date Record Created (CCYYMMDD)     
OPWCCTIM  DIM       8      8        22    Time Record Created (HH:MM:SS)     
OPWCCUID  DIM       10     10       30    WEB User ID Created (websecaf)     
OPWCSPAR  DIM       50     50       40    Spare                              
.
.End of Record                      90   
.
