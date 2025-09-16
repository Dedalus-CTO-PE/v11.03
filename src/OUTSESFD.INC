.
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OUTSESFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Outpatients         *
.  *                    Clinic Open Sessions                            *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : outsesaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 25, KEY 26                                  *
.  *                                                                    *
.  *     Modifications:                                                 *
.  * V10.04.01 18/02/2014 Patrick Adair     CAR 294991                  *
.  *                      Added New index                               *
.  **********************************************************************  
.  *                    V9.11.01  06/11/2008 Peter Vela    CAR 181690   *
.  *                          Added OSESGHCP Group Session HCP          *
.  *                    V9.03.03  12/02/2004 Ebon Clements CAR 47407    *
.  *                          Added index 6                             *
.  *                    V9.03.02  19/09/2003 Ebon Clements CAR 22361    *
.  *                          Added OSESSHNO,OSESSDAT                   *
.  *                    V9.03.01  05/08/2003 Ebon Clements CAR 41801    *
.  *                          Add OSESCTYP                              *
.  *                    V5.10.B00 23/4/2001 Dean Cramer                 *
.  *                          Add additional scheduled slots            *
.  *                          OSESSLTN, OSESSLTR & OSESSLTS             *
.  *                    V5.00 03.05.89 H.Donnard   (IBA)                *
.  *                          Change include heading                    *
.  *                    V5.01 24.10.90 D.Di.Paola    SRF 106407         *
.  *                          Changed hours scheduled and used to dim 5.*
.  *                                                                    *
.  **********************************************************************
.
.    IO INC       OUTSESIO
.
OUTSESA1    IFILE   SQL, FIXED=165, KEY="U1-6,7-12,13-20,21-25"
OUTSESA2    IFILE   SQL, FIXED=165, KEY="U13-20,21-25,1-6,7-12"
OUTSESA3    IFILE   SQL, FIXED=165, KEY="U1-6,7-12,26-26,21-25,13-20"
OUTSESA4    IFILE   SQL, FIXED=165, KEY="U1-6,99-104,13-20,7-12,21-25"
OUTSESA5    IFILE   SQL, FIXED=165, KEY="U1-6,7-12,26-26,21-25,105-106,107-114,13-20"
OUTSESA6    IFILE   SQL, FIXED=165, KEY="U1-6,13-20,21-25,7-12"
OUTSESA7    IFILE   SQL, FIXED=165, KEY="U1-6,99-104,13-20,21-25,7-12"
FILSESA1    INIT     "sesaf"
FILSESA2    INIT     "sesaf"
FILSESA3    INIT     "sesaf"
FILSESA4    INIT     "sesaf"
FILSESA5    INIT     "sesaf"
FILSESA6    INIT     "sesaf"
FILSESA7    INIT     "sesaf"
.
.NAME       TYPE   LENGTH   PHYSICAL  START     DESCRIPTION
.----       ----   ------   --------  -----     -----------
OSESITE      DIM        6         6      1      SITE CODE
OSECLIN      DIM        6         6      7      CLINIC ID 
OSEDATE      DIM        8         8     13      USAGE DATE (CCYYMMDD)
OSESTRT      DIM        5         5     21      SESSION START TIME (HH:MM)
DOSEDAY      DIM        1         1     26      DAY INDICATOR e.g. 1 = MON
.
.        --- TOTAL SLOTS STATISTICS ---
.
OSESLOTS     FORM       6         4     27      TOTAL SLOTS SCHEDULED    
OSESLOTB     FORM       3         3     31      TOTAL SLOTS BOOKED    
.
.        --- TOTAL TIME (HOURS) STATISTICS ---
.
OSETIMES     DIM        5         5     34      TOTAL TIME SCHEDULED (HH:MM)
OSETIMEU     DIM        5         5     39      TOTAL TIME USED      (HH:MM)
.
.        --- NUMBER OF BOOKINGS ---
.
OSEBNEW      FORM       3         3     44      NUMBER OF NEW PATIENTS
OSEBRV       FORM       3         3     47      NUMBER OF RE-VISITING PATIENTS
OSEBSPC      FORM       3         3     50      NUMBER OF SPECIAL PATIENTS
.
.        --- NUMBER OF ATTENDANCES ---
.
OSEANEW      FORM       3         3     53      NUMBER OF NEW PATIENTS
OSEARV       FORM       3         3     56      NUMBER OF RE-VISITING PATIENTS
OSEASPC      FORM       3         3     59      NUMBER OF SPECIAL PATIENTS
.
.        --- SCHEDULED SLOTS ---
.
OSESSLTR     FORM       3         3     62      REVIEW SLOTS SCHEDULED 
OSESSLTN     FORM       3         3     65      NEW SLOTS SCHEDULED    
OSESSLTS     FORM       3         3     68      SPECIAL SLOTS SCHEDULED 
.
.
OSESCSTT     DIM        3         3     71      CLINIC STATUS (CS)
OSESCOMM     DIM        25       25     74 
.
OSESCTYP     DIM        6         6     99      CLINIC TYPE
OSESSHNO     DIM        2         2     105     SCHEDULE NUMBER
OSESSDAT     DIM        8         8     107     SCHEDULE DATE (CCYYMMDD)
OSESGHCP     DIM        10       10     115     GROUP SESSION HCP
OSESPARE     DIM        40       40     125     ****  SPARE  ****
.
.End of record                         165
.
.
.
SOSESITE     DIM          6         1      SITE CODE
SOSECLIN     DIM          6         7      CLINIC ID 
SOSEDATE     DIM          8        13      USAGE DATE (CCYYMMDD)
SOSESTRT     DIM          5        21      SESSION START TIME (HH:MM)
SOSEDAY      FORM         1        26      DAY INDICATOR e.g. 1 = MON
.
.  redefine form fields from key
.  -----------------------------
.NAME       TYPE     LENGTH     START     DESCRIPTION
.----       ----     ------     -----     -----------
OSEDAY       FORM         1        26      DAY INDICATOR e.g. 1 = MON
