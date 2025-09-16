. *****************************************************************************
. *                                                                           *
. * Include Name  : PATVISFD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for Patient                       *
. *                 Visit Details                                             *
. *                                                                           *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : patvisaf.dat                                              *
. *                                                                           *
. * Keys          : KEY 24, KEY 8                                             *
. *                                                                           *
. * Modifications :                                                           *
. *       V9.02.00  06/02/2003 Ebon Clements SRF 19889                        *
. *                 Added PTVITYPE and index 4                                *
. *       V5.10.00  17/04/2001 Sandra Barcham                                 *
. *                 Added PVISYST                                             *
. *       V5.06.00  18/09/1998 Katie Nelson                                   *
. *                 Added Index PATVISA3.                                     *
. *                                                                           *
. *                 31.03.89 J.Clark     (IBA)                                *
. *                 Change include heading                                    *
. *                 02.06.89 K.Peak      (IBA)                                *
. *                 Change U/R to 8 characters                                *
. *                 21.07.89 K.Peak      (IBA)                                *
. *                 Added Resident Status                                     *
. *                 03.09.90 K.Peak      (IBA)                                *
. *                 Added PVITYPE type 5 - day centre                         *
. *                 22/09/1994  LOFTY                                         *
. *                 Added PVITYPE type 6 - Community Health                   *
. *****************************************************************************
.
PATVISA1   IFILE SQL, FIXED=64, KEY="U17-24"
PATVISA2   IFILE SQL, FIXED=64, KEY="U1-8,9-16,17-24"
PATVISA3   IFILE SQL, FIXED=64, KEY="U27-32,9-16,17-24"
PATVISA4   IFILE SQL, FIXED=64, KEY="U1-8,53-54,9-16,17-24"
.
.NAME       TYPE   LENGTH  PHYSICAL   START     DESCRIPTION
.----       ----   ------  --------   -----     -----------
PVIURNO      DIM        8        8       1      U/R NUMBER
PVIDATE      DIM        8        8       9      DATE OF VISIT  CCYYMMDD
DPVIBILL     DIM        8        8      17      A&E NUMBER (ACCIDENT & EMRG)
.                                               OUTPATIENT NUMBER 
.                                               ADMISSION NUMBER (IN-PATIENT)
.
PVITYPE      FORM       1        2      25      VISIT TYPE  1 = A & E
.                                                           2 = OUTPATIENT
.                                                           3 = INPATIENT
.                                                           4 = OTHER FINANCIAL
.                                                           5 = DAY CENTRE     
.                                                           6 = COMMUNITY HEALTH
.                                                           7 = WARD ATTENDERS
.                                                           8 = AD-HOC ATTENDEES
.                                                           9 = Other
PVIDOCT      DIM        6        6      27      CLINIC / DOCTOR
PVISTAT      FORM       1        2      33      STATUS - 1 = PRIVATE PATIENT
.                                                        2 = PUBLIC PATIENT
.                                               Maintained as 1st indic of Cat A.
PVITRAN      FORM       6        4      35      NEXT TRANSACTION NUMBER FOR DTRA
PVILOCK      DIM        2        2      39      LOCKING PORT NUMBER 
PVISITE      DIM        6        6      41      OUTPATIENTS SITE
PVIRESI      DIM        3        3      47      RESIDENT STATUS 
PVIUNQE      DIM        1        1      50
PVISYST      DIM        2        2      51      Extra Visit Type
.                                                " 1" = Events Coding
.                                                " 2" = Allied Health
.
PTVITYPE     DIM        2        2      53      Replaces PVITYPE and PVISYST
.                                               This is populated by the IO
.                                                           1 = A & E
.                                                           2 = OUTPATIENT
.                                                           3 = INPATIENT
.                                                           4 = OTHER FINANCIAL
.                                                           5 = DAY CENTRE
.                                                           6 = COMMUNITY HEALTH
.                                                           7 = WARD ATTENDERS
.                                                           8 = AD-HOC ATTENDEES
.                                                           9 = Event
.                                                          10 = Allied Health
.
PVISPAR      DIM        9        9      55      ****  SPARE  ****
.
.End of Record                          64
.
SPVIURNO    DIM         8                1      U/R NUMBER
SPVIDATE    DIM         8                7      DATE OF VISIT  CCYYMMDD
SPVIBILL    FORM        8               15      ADMISSION NUMBER (FOR ACCESS
.
.  redefine form fields from key
.  ----------------------------- 
.NAME       TYPE   LENGTH  START     DESCRIPTION
.----       ----   ------  -----     -----------
PVIBILL     FORM       8     14      A&E NUMBER (ACCIDENT & EMRG)
