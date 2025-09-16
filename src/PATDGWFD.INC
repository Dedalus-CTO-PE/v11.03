. V5.07.001 19/08/1998 Glenn  507 Changes
.  ***************************************************************************
.  *                                                                         *
.  *     Include Name : PATDGWFD.INC                                         *
.  *                                                                         *
.  *     Function     : File Definition include for Patient                  *
.  *                    DRG Description and Weightings                       *
.  *                                                                         *
.  *     File Type    : SQL                                                  *
.  *                                                                         *
.  *     File Name    : patdgwaf.dat                                         *
.  *                                                                         *
.  *     Keys         : KEY 7, KEY 11, KEY 67                                *
.  *                                                                         *
.  *     Modifications:                                                      *
.  *      V10.14.01 26/03/2019 J.Tan         TSK 0857392                     *
.  *                 Added DRG Partition (DRG Type)                          *
.  *      V9.12.01  07/09/2009  Davin        CAR 205464                      *
.  *                Added PTDWWTEP - Warning to Enter a Prosthetic           *
.  *      V9.08.01  10/04/2007  Mike Laming  CAR 137125 2007 HDP DRG 5.2     *
.  *                Added PTDWDRGV - DRG Version - Also added to Keys        *
.  *      V5.08.B01 03/04/2000  Greg Horvat                                  *
.  *                Added PTDWCLSP - Clinical speciality                     *
.  *          V5.07.01  23/11/1999  Davin                                    *
.  *                    Removed PTDWDRGN & PTDWMDCN                          *
.  ***************************************************************************
.
PATDGWA1   IFILE SQL, FIXED=109, KEY="U1-4,85-87"
PATDGWA2   IFILE SQL, FIXED=109, KEY="U5-8,1-4,85-87"
PATDGWA3   IFILE SQL, FIXED=109, KEY="U9-68,1-4,85-87"
.
. NAME     TYPE  LENGTH  PHYSICAL  START LOC.   DESCRIPTION
. ----     ----  ------  --------  ----------   -----------
PTDWDRGC   DIM      4         4        1        DRG Number
PTDWMDCC   DIM      4         4        5        MDC Number
PTDWDESC   DIM      60        60       9        DRG Description
PTDWLOWT   FORM     3.2       4       69        Low Trim
PTDWHIGH   FORM     3.2       4       73        High Trim
PTDWRWGT   FORM     3.6       6       77        Resource Weight
PTDWCLSP   DIM      2         2       83        Clincal Speciality
PTDWDRGV   DIM      3         3       85        DRG Version format "nnn" 
PTDWWTEP   DIM      1         1       88        Warning to Enter a Prosthetic
PTDWDRGT   DIM      3         3       89        DRG Partition (DRG Type) Cat Dt
.                                               I - Intervention
.                                               M - Medical
PTDWSPAR   DIM      17        17      92        Spare Variable
.End of Record                       ---
                                     109 
+
.

