. *****************************************************************************
. *                                                                           *
. * Include Name  : LEGDSCFD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for Legacy                        *
. *                 LEGACY PATIENT DISCHARGE DETAILS                          *
. *                                                                           *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : legdschf.dat                                              *
. *                                                                           *
. * Keys          : KEY 16, KEY 8                                             *
. *                                                                           *
. * Modifications :                                                           *
. *       V9.08.01  18/01/2008  Steve Armstrong  CAR 159429                   *
. *                 Added Index 3                                             *
. *       V9.03.00  03/05/2004  Davin         CAR 49209                       *
. *                 Created FD from 6.11 PATDSCFD                             *
. *                                                                           *
. *****************************************************************************
.
LEGDSCH1  IFILE     SQL, FIXED=195, KEY="U9-16"
LEGDSCH2  IFILE     SQL, FIXED=195, KEY="U17-24,9-16"
LEGDSCH3  IFILE     SQL, FIXED=195, KEY="U1-8,9-16"
.
. NAME    TYPE   LENGTH  PHYSICAL  START LOC.   DESCRIPTION
. ----    ----   ------  --------  ----------   -----------
LDDURNO   DIM       8           8         1      PATIENT ADMISSION U.R NO.
LDDADMNO  DIM       8           8         9      PATIENT ADMISSION NO.
LDDATE    DIM       8           8        17      PATIENT DISCHRGE DATE(CCYYMMDD)
LDTIME    DIM       8           8        25      PATIENT DISCHARGE TIME
.
LDSTAT    DIM       3           3        33      DISCHARGE STATUS
LDDEST    DIM       3           3        36      DISCHARGE DESTINATION
.
LDDIAG    DIM      50          50        39      DISCHARGE DIAGNOSIS
LDDIAG2   DIM      50          50        89      DISCHARGE DIAGNOSIS (PART 2)
LDUSD1    DIM       3           3       139      USER DEFINED FIELD 1 (CAT D1)
LDUSD2    DIM       3           3       142      USER DEFINED FIELD 2 (CAT D2)
LDUSD3    DIM       3           3       145      USER DEFINED FIELD 3 (CAT D3)
LDUSD4    DIM       3           3       148      USER DEFINED FIELD 4 (CAT D4)
LDUSD5    DIM       3           3       151      USER DEFINED FIELD 5 (CAT D5)
LDFMBS    DIM       9           9       154      DISCHARGE DIAGNOSIS CODE
LPDSDMDC  DIM       4           4       163      MDC code
LPDSDDRG  DIM       4           4       167      DRG code
LPDSSIDX  DIM       1           1       171      DRG severity index
LPDSVOGU  DIM       3           3       172      Version of grouper used when
.                                                grouping
LPDSSREF  DIM       4           4       175      Separation referral
LDSPARE   DIM       16          16      179      SPARE
.End of Record                          195
.
LSDDATE   DIM          8            17      PATIENT DISCHARGE DATE (CCYYMMDD)
.
.  redefine form fields from key
.  -----------------------------
. NAME    TYPE      LENGTH     START LOC.   DESCRIPTION
. ----    ----      ------     ----------   -----------
LQDADMNO  FORM         8             9      PATIENT ADMISSION NO.
LQDURNO   FORM         8             1      PATIENT U/R NUMBER
LDADMNO   FORM         8             9      PATIENT ADMISSION NO.
LDURNO    FORM         8             1      PATIENT U/R NUMBER
.

