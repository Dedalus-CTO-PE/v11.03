. *----------------------------------------------------------------------
. * Include Name  :   OUTMSPFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   Clinic Master Suspensions          
. *
. * File Type     :   SQL
. *
. * File Name     :   outmspaf.dat
. *
. * Modifications :
. *      V9.03.01  14/05/2003 Sylvek Litewka  CAR 39071  
. *                Added OTMSRFDT and OTMSRTDT to store the Suspension Range.
. *      V9.02.00  25/11/2002 Lina Vo
. *                Added site specific variable FILMSPA1 & FILMSPA2
. *      V5.10.002 10/05/2002 EC  
. *                Added index 2
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTMSPA1   IFILE    SQL, FIXED=136, KEY="U1-6,7-12,13-13,22-24,25-32"           
OUTMSPA2   IFILE    SQL, FIXED=136, KEY="U1-6,25-32,7-12,13-13,22-24"           
FILMSPA1   INIT     "mspaf"
FILMSPA2   INIT     "mspaf"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTMSSITE  DIM       6      6        1     Site Code                          
OTMSCLIN  DIM       6      6        7     CLinic ID                          
OTMSDOWK  DIM       1      1        13    Day of Week                        
OTMSSTIM  DIM       8      8        14    Start Time (HH:MM:SS)              
OTMSSUSP  DIM       3      3        22    Suspend Number (System Generated)  
OTMSFDAT  DIM       8      8        25    Suspended From Date (CCYYMMDD)     
OTMSTDAT  DIM       8      8        33    Suspended to Date (CCYYMMDD)       
.              The Suspended From and To Dates above hold the same value - 
.              the date of the suspended session. The Suspension Range is
.              stored in the Range Dates below. 
OTMSREAS  DIM       3      3        41    Reason Code (Category CE)          
OTMSEDAT  DIM       8      8        44    Entered Date (System Generated)    
OTMSETIM  DIM       8      8        52    Entered Time (System Generated)    
OTMSEUID  DIM       10     10       60    Entered by WEB User ID (Sys Gener.)
OTMSRFDT  DIM       8      8        70    Susp Range From Date (CCYYMMDD)    
OTMSRTDT  DIM       8      8        78    Susp Range To Date (CCYYMMDD)      
OTMSPARE  DIM       50     50       86    ****  SPARE  *****                 
.
.End of Record                      136  
.
