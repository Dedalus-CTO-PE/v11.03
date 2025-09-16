. V10.14.01 15/02/2019 Don Nguyen     Added 'Telehealth' Room Type   TSK 0821139
. V10.12.01 06/02/2018 Ebon Clements  Added EMLOCDAT to EMLOIUID     TSK 0848319
. V10.05.01 20/02/2015 Ebon Clements  Added next patient to EMLOTYPE CAR 304779
. V10.04.01 07/01/2014 Ania P         Moved EMLOSSIN out of SPARE  CAR 294365
. V10.03.01 11/07/2012 Peter Vela     Added Short Stay Unit Indicator CAR 265655
. V9.09.001 01.11.2007 Ebon Clements  Changed description of EMLOTYPE CAR 151800
. V9.07.001 20.06.2006 Peter Vela     Added Active Indicator CAR 112999
. V9.04.000 08.03.2005 Ebon Clements  Added index 3 CAR 59018                 
. V9.00.000 15.05.2001 bga            Added Room Type
. V5.07.000 14/10/1999 nmh            port to 5.07
. V6.06.001 18/05/1999 kcn            Created FD
. *----------------------------------------------------------------------
. * Include Name  :   EMRLOCFD.INC
. *
. * Function      :   File Def'n Include for WEB                          
. *                   Emergency Locations Table          
. *
. * File Type     :   SQL
. *
. * File Name     :   emrlocaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRLOCA1   IFILE    SQL, FIXED=166, KEY="U1-3"
EMRLOCA2   IFILE    SQL, FIXED=166, KEY="U4-28,1-3"
EMRLOCA3   IFILE    SQL, FIXED=166, KEY="U29-31,35-35,1-3"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMLOLOCA  DIM       3      3        1     Location                           
EMLODESC  DIM       25     25       4     Description                        
EMLOSCOD  DIM       3      3        29    Site Code                          
EMLOMAXP  FORM      4      3        32    Maximum Number of Patients         
EMLOTYPE  DIM       1      1        35    Room Type 
.                                          " " = Emergency Map Room
.                                          O=Other Dept
.                                          W=Waiting Room
.                                          N=Next Patient (Configurable Map)
.                                          E=Emergency Telehealth Service
EMLOACTV  DIM       1      1        36    Active=0 Inactive=1
EMLOSSIN  DIM       1      1        37    Short Stay Unit Indicator 1 = Yes
.                                                                   0 = No
EMLOCDAT  DIM       8      8        38    Date Record Created (CCYYMMDD)
EMLOCTIM  DIM       8      8        46    Time Record Created (HH:MM:SS)
EMLOCUID  DIM       10     10       54    WEB User ID Created (websecaf)
EMLOUDAT  DIM       8      8        64    Update Date (CCYYMMDD)
EMLOUTIM  DIM       8      8        72    Update Time (HH:MM:SS)
EMLOUUID  DIM       10     10       80    WEB User ID Updated (websecaf
EMLOIDAT  DIM       8      8        90    Inactive Date (CCYYMMDD)
EMLOITIM  DIM       8      8        98    Inactive Time (HH:MM:SS)
EMLOIUID  DIM       10     10       106   WEB User ID Inactivate (websecaf
EMLOSPAR  DIM       50     50       116   Spare                              
.
.End of Record                      166  
.
