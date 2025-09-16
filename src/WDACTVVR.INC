.****************************************************************************
.*                              WDACTVVR.INC                                *
.*           Variables required for WDACTVDY routine - used to calculate    *
.*           active bed days for a ward.                                    *
.*                                                                          *
.****************************************************************************
.
ACTVBCHG  FORM      1             * Number of Beds Change Flag
.                                      0 = No change in no. of beds in period
.                                      1 = No. of beds in period has changed
ACTVDAYS  FORM      6             * Number of days the ward was active in period
ACTVBDAY  FORM      8             * No. of active bed days for ward in period
.                                    (no. of beds * active days)
ACTVFDTE  DIM       8             * start date for period (CCYYMMDD)
ACTVPHL1  DIM       8             * public holiday 1 (CCYYMMDD)
ACTVPHL2  DIM       8             * public holiday 2 (CCYYMMDD)
ACTVPHL3  DIM       8             * public holiday 3 (CCYYMMDD)
ACTVPHL4  DIM       8             * public holiday 4 (CCYYMMDD)
ACTVPHL5  DIM       8             * public holiday 5 (CCYYMMDD)
ACTVRTYP  DIM       3             * room type for ward only ward
ACTVTDTE  DIM       8             * end date for period (CCYYMMDD)
ACTVWDAY  FORM      5             * Weekend active bed days
ACTVWFLG  FORM      1             * Weekend active bed days flag
.                                      0 = required
.                                      1 = not required
ASTFLAG   FORM      1             * asterisk flag (no. of beds changed)
.                                    0 = asterisk not printed for any ward
.                                    1 = asterisk printed for 1 or more wards
.
CDYSDAYS  FORM      6             * for CALCDAYS
CDYSFDTE  DIM       8             * for CALCDAYS
CDYSTDTE  DIM       8             * for CALCDAYS
CDYSYEAR  FORM      2             * for CALCDAYS
.
TOTBED    FORM      8             * total number of beds in ward when ward
.                                   was last active within the period
