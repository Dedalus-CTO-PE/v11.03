. V10.06.01 13/03/2015 EC C-303890 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   ALLPROFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Procedure Codes For Each Department
. *
. * File Type     :   SQL
. *
. * File Name     :   allproaf.dat
. *
. * Index Values  :   KEY12   KEY62                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLPROA1   IFILE    SQL, FIXED=233, KEY="U1-3,4-12"                             
ALLPROA2   IFILE    SQL, FIXED=233, KEY="U1-3,13-62,4-12"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALPODEPT  DIM       3      3        1     Department (alldepaf)              
ALPOPROC  DIM       9      9        4     Procedure Code                     
ALPODESC  DIM       50     50       13    Procedure Description              
ALPOICDC  DIM       9      9        63    Equivalent ICD10 Code              
ALPOACTV  DIM       1      1        72    Active (0=No,1=Yes)                
ALPOCDAT  DIM       8      8        73    Date Record Created (CCYYMMDD)     
ALPOCTIM  DIM       8      8        81    Time Record Created (HH:MM:SS)     
ALPOCUID  DIM       10     10       89    WEB User ID Created (websecaf)     
ALPOUDAT  DIM       8      8        99    Date Record Updated (CCYYMMDD)     
ALPOUTIM  DIM       8      8        107   Time Record Updated (HH:MM:SS)     
ALPOUUID  DIM       10     10       115   WEB User ID Updated (websecaf)     
ALPOMHDP  DIM       4      4        125   HDP Equivalent                     
ALPOMHCP  DIM       4      4        129   HCP Equivalent                     
ALPOSPAR  DIM       100    100      133   Spare Variable                     
.
.End of Record                      233  
.
