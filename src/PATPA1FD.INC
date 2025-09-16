. V10.07.01 12/11/2015 Steve Armstrong  CAR 294154
.                      Added PTPAOSMS
. V10.04.01 22/01/2014 Don Nguyen      CAR 295972
.                      Added PATIME and updated keys to include PATIME.
.                      Increased spare variable size.
. V5.10.001 10/04/2001 Ebon Clements changed PTPAUSID to PTPAWEBU and added
.                      PTPAEMAL,PTPACDTE,PTPACTIM,PTPAWEBU,PTPALUPD,PTPALUPT
. V5.09.001 03/01/2001 Pat Dirito Added Mobile Phone No & Web User ID Variables 
. V5.07.001 07/08/1998 Jim Stathopoulos  507 Changes 
. *****************************************************************************
. *                                                                           *
. * Include Name  : PATPA1FD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for Patient                       *
. *                 Previous Patient Addresses                                *
. *                                                                           *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : patpa1af.dat                                              *
. *                                                                           *
. * Keys          : KEY 24                                                    *
. *                                                                           *
. *****************************************************************************
.
PATPA1A1  IFILE     SQL, FIXED=418, KEY="U1-8,9-16,17-24"
PATPA1A2  IFILE     SQL, FIXED=418, KEY="U9-16,17-24,1-8"
.
.NAME     TYPE   LENGTH  PHYSICAL  START  DESCRIPTION
.----     ----   ------  --------  -----  -----------
PAURNO    DIM       8        8         1  Patient U/R Number
PADATE    DIM       8        8         9  Date this add was changed (CCYYMMDD)
PATIME    DIM       8        8        17  Time this add was changed (hh:mm:ss)
PAADD1    DIM       35       35       25  Previous Address Line 1
PAADD2    DIM       35       35       60  Previous Address Line 2
PASUBR    DIM       35       35       95  Previous Suburb
PAADD4    DIM       35       35      130  Previous Address Line 4
PAPOST    DIM       8        8       165  Previous Postcode
PATELEP   DIM       20       20      173  Previous Private Telephone
PATELEB   DIM       20       20      193  Previous Business Telephone
PTPADOR   DIM       3        3       213  District of Residence
PTPAMOBL  DIM       20       20      216  Previous Mobile Phone Number
PTPAEMAL  DIM       80       80      236  Email Address
PTPACDTE  DIM       8        8       316  Date Record Created (ccyymmdd)
PTPACTIM  DIM       8        8       324  Time Record Created (hh:mm:ss)
PTPAWEBC  DIM       10       10      332  WEB User Id Creator (websecaf)
PTPALUPD  DIM       8        8       342  Date Record Last Updated (ccyymmdd)
PTPALUPT  DIM       8        8       350  Time Record Last Updated (hh:mm:ss)
PTPAWEBU  DIM       10       10      358  Web User Id updated (websecaf)
PTPAOSMS  DIM       1        1       368  Opt Out of SMS
.                                           0 or Blank = No
.                                           1 = Yes
PTPASPAR  DIM       49       49      369  Spare Variable
.
.End of Record                       418
.
SPAURNO   FORM      8         * PATIENT U/R NUMBER
.
