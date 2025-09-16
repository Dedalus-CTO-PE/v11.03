.  **********************************************************************
.  *                                                                    *
.  *     Include Name : LEGVISFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Legacy              *
.  *                    LEGACY PATIENT VISITS DETAILS                   *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : legvisaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 8, KEY 24, KEY 14                           *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *          v9.03.00  30/04/2004  Davin  CAR 49209                    *
.  *                    Created FD                                      *
.  **********************************************************************
.
LEGVISA1   IFILE SQL, FIXED=64, KEY="U17-24"
LEGVISA2   IFILE SQL, FIXED=64, KEY="U1-8,9-16,17-24"
LEGVISA3   IFILE SQL, FIXED=64, KEY="U27-32,9-16,17-24"
.
.NAME       TYPE   LENGTH  PHYSICAL   START     DESCRIPTION
.----       ----   ------  --------   -----     -----------
LVIURNO      DIM        8        8       1      U/R NUMBER
LVIDATE      DIM        8        8       9      DATE OF VISIT  CCYYMMDD
DLVIBILL     DIM        8        8      17      A&E NUMBER (ACCIDENT & EMRG)
.                                               OUTPATIENT NUMBER 
.                                               ADMISSION NUMBER (IN-PATIENT)
.
LVITYPE      FORM       1        2      25      VISIT TYPE  1 = A & E
.                                                           2 = OUTPATIENT
.                                                           3 = INPATIENT
.                                                           4 = OTHER FINANCIAL
LVIDOCT      DIM        6        6      27      CLINIC / DOCTOR
LVISTAT      FORM       1        2      33      STATUS - 1 = PRIVATE PATIENT
.                                                        2 = PUBLIC PATIENT
.                                               Maintained as 1st indic of Cat A.
LVITRAN      FORM       6        4      35      NEXT TRANSACTION NUMBER FOR DTRA
LVILOCK      DIM        2        2      39      LOCKING PORT NUMBER 
LVISITE      DIM        6        6      41      OUTPATIENTS SITE
LVILETT      DIM        8        8      47      Date to send letters
LVISPAR      DIM        9        9      55      ****  SPARE  ****
.
.End of Record
.
SLVIURNO    FORM        8                1      U/R NUMBER
SLVIDATE    DIM         8                7      DATE OF VISIT  CCYYMMDD
SLVIBILL    FORM        8               15      ADMISSION NUMBER (FOR ACCESS
.
.  redefine form fields from key
.  ----------------------------- 
.NAME       TYPE   LENGTH  START     DESCRIPTION
.----       ----   ------  -----     -----------
LVIBILL     FORM       8     14      A&E NUMBER (ACCIDENT & EMRG)
