. *----------------------------------------------------------------------
. * Include Name  :   ALLERCTD.INC 
. *
. * Function      :   CGI variables for ALLERCFD - allercaf.dat                 
. *
. * Modifications :   V9.05.B01 19/12/2005 Ebon Clements CAR 76341
. *                   Changed encounter number to DIM 8
. *                   V9.03.01 29/05/2003 Davin CAR 37388
. *                   Added ALERC022
. *                   V9.02.01 13/11/2001 Ebon Clements
. *                   Added ALERC020 and ALERC021
. *----------------------------------------------------------------------
.
.Name     Type      Length Description
.----     ----      ------ -----------
ALERC001  DIM       8      Photo Number (generated)
ALERC002  DIM       1      Laster (0=No,1=Yes)
ALERC003  DIM       1      Possum (0=No,1=Yes)
ALERC004  DIM       1      Child at Risk (0=No,1=Yes)         
ALERC005  DIM       1      CAR - After Hours (0=No,1=Yes)     
ALERC006  DIM       3      Number of Views
ALERC007  DIM       3      Number of Transparencies
ALERC008  DIM       3      Number of Negatives
ALERC009  DIM       3      Number of Black & White Prints     
ALERC010  DIM       3      Number of Colour Prints            
ALERC011  DIM       3      Number of Video Time
ALERC012  DIM       8      Referral/Visit Number              
ALERC013  DIM       8      Encounter Number
ALERC014  DIM       8      Date Record Created (CCYYMMDD)     
ALERC015  DIM       8      Time Record Created (HH:MM:SS)     
ALERC016  DIM       10     WEB User ID Created (websecaf)     
ALERC017  DIM       8      Date Record Updated (CCYYMMDD)     
ALERC018  DIM       8      Time Record Updated (HH:MM:SS)     
ALERC019  DIM       10     WEB User ID Created (websecaf)     
ALERC020  DIM       8      Date Sent (ccyymmdd)
ALERC021  DIM       20     Sent to (free format)
ALERC022  DIM       3      Number of Digital Images
.
