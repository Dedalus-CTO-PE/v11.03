.
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATWBHFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Ward Bed History Details                        *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patwbhaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 22                                          * 
.  *                                                                    *
.  *     Modifications:                                                 *
.  *           V10.12.01 07/03/2018  Jill Parkinson Task 0848131        *
.  *                     Added index 2                                  *
.  *           V9.03.01 18/08/2003  Sylvek Litewka  CAR 41826           *
.  *                    Added new variables from UPID to CRID.          *
.  * ------------------------------------------------------------------ *
.  *                    07/02/94 I.Rutt MTA                             *
.  *                    Added Last Effective Time WBHTIME               * 
.  *                                                                    *
.  **********************************************************************
.
PATWBHA1  IFILE     SQL, FIXED=135, KEY="U1-3,4-6,7-14"
PATWBHA2  IFILE     SQL, FIXED=135, KEY="U63-70,71-78,1-3,4-6,7-14"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.  DESCRIPTION
. ----    ----   ------  -------- ----------  -----------
WBHWARD   DIM       3        3       1        Ward from Ward/Bed file
WBHBED    DIM       3        3       4        Bed from Ward/Bed file
WBHDATE   DIM       8        8       7        Last Effective Date (CCYYMMDD)
WBHRTYP   DIM       3        3       15       Room Type (Cat RT)
WBHACTV   FORM      1        2       18       0=Active  1=Non-Active
WBHNOCC   FORM      3        3       20       WARDS ONLY - # Beds for Occ Stats
WBHCLAS   DIM       3        3       23       WARDS ONLY - Ward Class (Cat CG)
WBHDCHG   DIM       8        8       26       Record posting date (CCYYMMDD)
WBHTCHG   DIM       8        8       34       Record posting time (HH:MM:SS)
WBHTIME   DIM       8        8       42       Last Effective Time (HH:MM:SS)
WBHUPID   DIM      10       10       50       WEB User ID - Updated
WBHIFST   DIM       3        3       60       Infection Status (Cat BW)
WBHCRDT   DIM       8        8       63       Date Record Created (CCYYMMDD)
WBHCRTM   DIM       8        8       71       Time Record Created (HH:MM:SS)
WBHCRID   DIM      10       10       79       WEB User ID - Creator
WBHSPAR   DIM      46       46       89       Spare
.
.End of Record                      135
.
