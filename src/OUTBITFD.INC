. *----------------------------------------------------------------------
. * Include Name  :   OUTBITFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   Booking Items                      
. *
. * File Type     :   SQL
. *
. * File Name     :   outbitaf.dat
. *                   V9.04.02 23/05/05 Ebon Clements CAR 62018
. *                   Added provider usage
. *                   V9.04.01 21/04/05 J.Tan     CAR 56699
. *                   Added a new variable for status
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTBITA1   IFILE    SQL, FIXED=164, KEY="U1-8,9-10"                             
OUTBITA2   IFILE    SQL, FIXED=164, KEY="U1-8,27-28,29-37,38-40,9-10"           
FILBITA1   INIT     "bitaf"
FILBITA2   INIT     "bitaf"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTBIVISN  DIM       8      8        1     Outpatient Number                  
OTBIITMC  DIM       2      2        9     Item Count                         
OTBIURNO  DIM       8      8        11    U/R Number                         
OTBIDATE  DIM       8      8        19    Transaction/Booking Date           
OTBIIFLG  DIM       2      2        27    Item Type 0=MBS 1=AMA              
OTBIITMN  DIM       9      9        29    MBS Item Number                    
OTBISUBN  DIM       3      3        38    Sub Item Number                    
OTBICDAT  DIM       8      8        41    Date Record Created (ccyymmdd)     
OTBICTIM  DIM       8      8        49    Time Record Created (hh:mm:ss)     
OTBICUID  DIM       10     10       57    WEB User ID Created (websecaf)     
OTBIUDAT  DIM       8      8        67    Date Record Updated (ccyymmdd)     
OTBIUTIM  DIM       8      8        75    Time Record Updated (hh:mm:ss)     
OTBIUUID  DIM       10     10       83    WEB User ID Updated (websecaf)     
OTBISTAT  DIM       1      1        93    Status                             
.                                         0 = Not Batched/Resubmitted
.                                         1 = Batched
OTBIPUSE  DIM       20     20       94    Priovider Usage                    
OTBISPAR  DIM       50     50       114   Spare Variable                     
.
.End of Record                      164  
.
