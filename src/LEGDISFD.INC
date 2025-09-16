.
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : LEGDISAF.INC                                    *
.  *                                                                    *
.  *     Function     : File Def'n Include for Accident & Emergency     *
.  *                    Discharge Table                                 *
.  *                    Legacy Visits                                   *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : legdisaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 8                                           *
.  *                                                                    *
.  *     Modifications: V9.03.00  03/05/2004  Ebon Clements  CAR 49209  *
.  *                    Ported from 6.11                                *
.  *                                                                    *
.  **********************************************************************
.
.
LEGDISA1    IFILE  SQL, FIXED=102, KEY="U1-8"
.
.
.NAME       TYPE   LENGTH   PHYSICAL  START     DESCRIPTION
.----       ----   ------   --------  -----     -----------
LADSNUMB      DIM        8         8      1      A & E NUMBER
.
LADSDATE      DIM        8         8      9      DISCHARGE DATE (CCYYMMDD)
LADSTIME      DIM        5         5     17      DISCHARGE TIME (HH:MM)
LADSSSES      DIM       60        60     22      ASSESSMENT DETAILS
.
LADSDISC      DIM        3         3     82      DISCHARGE STATUS (ED)
LADSDIAG      DIM        7         7     85      DIAGNOSIS CODE
LADSUSD1      DIM        3         3     92      USER DEFINED 1   (E1)
LADSUSD2      DIM        3         3     95      USER DEFINED 2   (E2)
LADSUSD3      DIM        3         3     98      USER DEFINED 3   (E3)
LADSSPAR      DIM        1         1    101      ****  SPARE  ****
.
.End of Record                      102
