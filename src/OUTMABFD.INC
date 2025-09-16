. **********************************************************************
. *                                                                    *
. * Include Name  : OUTMABFD.INC                                       *
. *                                                                    *
. * Function      : File Definition include for Outpatients            *
. *                    Clinic Master Table B                           *
. *                                                                    *
. * File Type     : SQL                                                *
. *                                                                    *
. * File Name     : outmasbf.dat                                       *
. *                                                                    *
. * Keys          : KEY 31                                             *
. *                                                                    *
. * Modifications : V9.03.01 26/08/2003 Ebon Clements CAR 22361        *
. *                          Added OTMBSHNO and OTMBSDAT               *
. *                 V5.00 03.05.89 H.Donnard   (IBA)                   *
. *                          Change include heading                    *
. *                 V5.01 03.06.89 S.Barcham   (IBA)                   *
. *                          Split include                             *
. *                                                                    *
. *       V5.03.01  20/10/1995    Justin Coates (SUHT Mods)            *
. *                 added DOTMBRES                                     *
. **********************************************************************
.
.    IO INC       OUTMABIO
.
OUTMASB1    IFILE    SQL, FIXED=95, KEY="U1-6,7-12,13-13,14-18,35-36,37-44,19-21"
FILMASB1    INIT     "masbf"
.
.NAME     TYPE      LENGTH  PHYS  START  DESCRIPTION
.-------  ----      ------  ----  -----  -----------
OMBSITE   DIM       6         6      1   SITE ID
OMBCLIN   DIM       6         6      7   CLINIC ID 
DOMBDAY   DIM       1         1     13   DAY INDICATOR 1 = MONDAY
.                                                      2 = TUESDAY
.                                                      3 = WEDNESDAY
.                                                      4 = THURDAY
.                                                      5 = FRIDAY
.                                                      6 = SATURDAY
.                                                      7 = SUNDAY
OMBSTRT   DIM       5         5     14   SESSION START TIME  (HH:MM)
DOMBSLOT  DIM       3         3     19   AVAILIABLE SLOT NUMBER
.
OMBVTYP   DIM       3         3     22   VISIT TYPE (Codes File)
OMBTIME   DIM       5         5     25   AVAILABLE SLOT STRT TME (HH:MM) 
OMBEXSL   FORM      3         3     30   SLOT NO OF PARENT SLOT (EXTENSN)
DOTMBRES  DIM       2         2     33   Number of days to reserve slot for
OTMBSHNO  DIM       2         2     35   SCHEDULE NUMBER
OTMBSDAT  DIM       8         8     37   SHEDULE DATE
OMBSPARE  DIM       50        50    45                         
.
.End of Record                      95
.
.
.  Save variables
.
SOMBSITE  DIM       6         SITE ID
SOMBCLIN  DIM       6         CLINIC ID 
SOMBDAY   FORM      1         DAY INDICATOR 1 = MONDAY
SOMBSTRT  DIM       5         SESSION START TIME  (HH:MM)
SOMBSLOT  FORM      3         AVAILIABLE SLOT NUMBER
SOMBSHNO  DIM       2         SCHEDULE NUMBER
SOMBSDAT  DIM       8         SCHEDULE DATE
.
. Re-define form fields
. ---------------------
OMBDAY    FORM      1         * DAY INDICATOR
OMBSLOT   FORM      3         * AVAILIABLE SLOT NUMBER
OTMBRESV  FORM      2         * number of days to reserve slot for
