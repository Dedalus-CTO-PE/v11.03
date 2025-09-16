. V9.05.B01 19/12/2005 EC  Changed ALERENCT to DIM 8 CAR 76341               
. *----------------------------------------------------------------------
. * Include Name  :   ALLERCFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   ERC Table                          
. *
. * File Type     :   SQL
. *
. * File Name     :   allercaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLERCA1   IFILE    SQL, FIXED=160, KEY="U1-8"                                  
ALLERCA2   IFILE    SQL, FIXED=160, KEY="U31-38,39-46,1-8"                      
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALERPHOT  DIM       8      8        1     Photo Number                       
ALERLASR  DIM       1      1        9     Laser (0=No,1=Yes)                 
ALERPOSS  DIM       1      1        10    Possum (0=No,1=Yes)                
ALERCAR   DIM       1      1        11    Child at Risk (0=No,1=Yes)         
ALERCARH  DIM       1      1        12    CAR - After Hours (0=No,1=Yes)     
ALERNVIE  FORM      3      3        13    Number of Views                    
ALERNTRA  FORM      3      3        16    Number of Transparencies           
ALERNNEG  FORM      3      3        19    Number of Negatives                
ALERNBWP  FORM      3      3        22    Number of Black & White Prints     
ALERNCLP  FORM      3      3        25    Number of Colour Prints            
ALERNVID  FORM      3      3        28    Number of Video Time               
ALERVISN  DIM       8      8        31    Referral/Visit Number              
ALERENCT  DIM       8      8        39    Encounter Number                   
ALERCDAT  DIM       8      8        47    Date Record Created (CCYYMMDD)     
ALERCTIM  DIM       8      8        55    Time Record Created (HH:MM:SS)     
ALERCUID  DIM       10     10       63    WEB User ID Created (websecaf)     
ALERUDAT  DIM       8      8        73    Date Record Updated (CCYYMMDD)     
ALERUTIM  DIM       8      8        81    Time Record Updated (HH:MM:SS)     
ALERUUID  DIM       10     10       89    WEB User ID Updated (websecaf)     
ALERDSNT  DIM       8      8        99    Date Sent (ccyymmdd)               
ALERSTFF  DIM       20     20       107   Sent to (free format)              
ALERNDIG  FORM      3      3        127   Number of Digital Images           
ALERSPAR  DIM       30     30       130   Spare Variable                     
.
.End of Record                      160  
.
