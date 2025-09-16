.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATFN1FD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for                     *
.  *                       NEW PATIENT HEALTH FUND FILE                 *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patfn1af.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 14, KEY54, KEY20                            *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *     V10.08.02  18/04/2016 Steve Armstrong TSK 0294177              *
.  *                Updated PTHFIMCD to be a DIM 3 cat/code field       *
.  *                instead of a DIM 1.                                 *
.  *     V10.08.01  24/03/2016 Steve Armstrong TSK 0294177              *
.  *                Added PTHFIMCD & PTHFDPRI                           *
.  **********************************************************************
.  *     V10.04.01  31/12/2013 PA              Car 295197               *
.  *                Moved AROC Health Fund Equivalent Code out of spare *
.  *     V10.03.01  10/10/2012 PA              Car 273294               *
.  *                AROC Health Fund Equivalent Code                    *
.  *      V9.12.03  04/10/2009  J.Tan          CAR 174079               *
.  *                Added Occupational Group                            *
.  *      V9.12.02  01/10/2009  Jill Parkinson CAR 174079               *
.  *                Added Future Action code and number of days         *
.  *      V9.12.01  08/09/2009  Peter Vela    CAR 187022                *
.  *                Added Contact variables                             *
.  *                Lengthened table                                    *
.  *      V9.09.01  13/12/2007  Davin         CAR 153384                *
.  *                Added PTHFDFIC                                      *
.  *      V9.08.01  07/02/2007  Davin         CAR 126848                *
.  *                Added index 3                                       *
.  *      V9.02.02  14/11/2001 Mike Laming                              *
.  *                Added PTHFUCMX Casemix Matrix Indicator             *
.  *      V9.02.01  04/10/2001 J.Tan                                    *
.  *                Added PTHFUMTD                                      *
.  *      V5.09.B01 13/12/2000 Ebon Clements                            *
.  *                Added PTHFMAXM,PTHFDSC1,PTHFDSC2                    *
.  *      V5.08.01 15/08/2000  Caleb Sharman                            *
.  *               Changed Health Fund variables to be 8 chars          *
.  *      V5.08.01  01/06/2000 Jill Habasque                            *
.  *                Added PTHFGRPV - Version of grouper                 *
.  *                    V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                    V5.01 18/05/90 J.Tan   SRF 10104901             *
.  *                          Change charging indic.from FORM1 to FORM2 *
.  *                          Extend the size of record                 *
.  *                    V5.02 10.11.93 S.Barcham                        *
.  *                          Mt Alvernia Changes                       *
.  *      V5.03.01  16/10/1995  Greg Horvat      SRF 611799             *
.  *                Added PTHFHGRP - Health Fund Group                  *
.  *      V5.03.02  06/12/1995  Greg Horvat                             *
.  *                Added PTHFHCPE - HCP Equivalent                     *
.  *      V5.07.00  23/02/99 J.Tan                                      *
.  *                Added health fund table for casemix                 *
.  *                                                                    *
.  **********************************************************************
.
PATFN1A1   IFILE SQL, FIXED=700, KEY="U1-6,7-14"
PATFN1A2   IFILE SQL, FIXED=700, KEY="U15-54,1-6,7-14"
PATFN1A3   IFILE SQL, FIXED=700, KEY="U249-254,1-6,7-14"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
HCODE      DIM       6           6         1      FUND NUMBER
HFTABL     DIM       8           8         7      FUND TABLE
HFNAME     DIM      40          40        15      FUND NAME
HFADD1     DIM      35          35        55      HEALTH FUND ADD 1
HFADD2     DIM      35          35        90      HEALTH FUND ADD 2
HFADD3     DIM      35          35       125      HEALTH FUND ADD 3
HFADD4     DIM      35          35       160      HEALTH FUND ADD 4
HFPCODE    DIM      8           8        195      POST CODE
HFTELE     DIM      20          20       203      HEALTH FUND TELEPHONE
HFBAND     FORM      2           2       223      THEATRE CHARGING INDICATOR
HFHDPE     DIM       4           4       225      HDP EQUIVALENT
HFFAXN     DIM      20          20       229      FAX NUMBER
PTHFHGRP   DIM       6           6       249      HEALTH FUND GROUP
PTHFHCPE   DIM       6           6       255      HCP EQUIVALENT
PTHFBCAT   DIM       3           3       261      TABLE TYPE (CAT HT)
DHFTACT    DIM       1           1       264      ACTIVE INDICATOR
.                                                 0=Active 1=Inactive
PTHFGRPV   DIM       3           3       265      VERSION OF GROUPER 031 or 041
PTHFMAXM   FORM      12.2        8       268      MAXIMUM PATIENT MOEITY
PTHFDSC1   DIM       30         30       276      PATIENT MOEITY DESCRIPTION 1
PTHFDSC2   DIM       35         35       306      PATIENT MOEITY DESCRIPTION 2
DTHFUMTD   DIM       1          1        341      USE MATRIX DEFAULT INDICATOR
.                                                 (Search for Default in Matrix)
.                                                 0=No 1=Yes
DTHFUCMX   DIM       1          1        342      USE CASEMIX MATRIX INDICATOR
.                                                 (Make CP and Search Matrix)
.                                                 0=No 1=Yes
PTHFBILN   DIM       40         40       343      BILLING NAME
PTHFFULD   DIM       70         70       383      FULL DESCRIPTION
PTHFCARC   DIM       1          1        453      Code all records 1=yes
PTHFDFIC   DIM       6          6        454      Default Fee Information Code
.                                                 (Stationery Code - Type 3)
PTHFCNAM   DIM       50         50       460      Contact Name
PTHFCTTL   DIM       10         10       510      Contact Title
PTHFCEML   DIM       80         80       520      Contact Email Address
PTHFCMOB   DIM       20         20       600      Contact Mobile Number
PTHFFACD   DIM       3          3        620      Future Action Code (Cat FA)
PTHFNDFP   FORM      3          3        623      No. of days for payment
PTHFOCGR   DIM       3          3        626      Occupational Group (Cat w0)
PTHFARCE   DIM       3          3        629      AROC Equivalent Code
PTHFIMCD   DIM       3          3        632      Type of IMC Default (Cat ta)
.                                                  (Type of Account/Claim)
PTHFDPRI   DIM       1          1        635      Default to Sub-item in PRI
.                                                  0 or Blank = Not in use
.                                                  1 = Default the HF code
.                                                      to the sub-tem field
.                                                      when entering items in
.                                                      PRI for patients with
.                                                      this HF
PTFNSPAR   DIM       64         64       636      SPARE VARIABLE
.
.End of Record                           700
.
.  redefine form fields from key
.  -----------------------------
. NAME     TYPE   LENGTH   START LOC.   DESCRIPTION
. ----     ----   ------   ----------   -----------
PHFTACT    FORM      1
PTHFUMTD   FORM      1
PTHFUCMX   FORM      1
.
