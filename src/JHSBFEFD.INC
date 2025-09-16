. **********************************************************************
. *                                                                    *
. *     Include Name : JHSBFEFD.INC                                    *
. *                                                                    *
. *     Function     : File Definition include for                     *
. *                     JOHNS HOPKINS BED FEES FILE (SINGAPORE)        *
. *                                                                    *
. *     File Type    : SQL                                             *
. *                                                                    *
. *     File Name    : jhsbfeaf.dat                                    *
. *                                                                    *
. *     Keys         : KEY 26                                          *
. *                                                                    *
. **********************************************************************
.
JHSBFEA1   IFILE SQL, FIXED=97, KEY="U1-3,4-9,10-17,18-20,21-23,24-26"
JHSBFEA2   IFILE SQL, FIXED=97, KEY="U1-3,4-9,18-20,21-23,10-17,24-26"
JHSBFEA3   IFILE SQL, FIXED=97, KEY="U4-9,10-17,1-3,18-20,21-23,24-26"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
.BFCLM      DIM      3            3        1       CLM CODE (CODES FILE CAT. CL)
.BFHFUND    DIM      6            6        4       HEALTH FUND (PATFNDH FILE)
BFHFTAB    DIM      8            8        10      HEALTH FUND TABLE (PATFNDH)
.BFATYPE    DIM      3            3        18      ADMISSION TYPE (CODES CAT. A)
.BFBTYPE    DIM      3            3        21      BED TYPE (CODES CAT. BT)
.DBFENDDY   DIM      3            3        24      HIGHEST DAY IN PERIOD
.BFPAT      FORM  12.2            8        27      PATIENT PORTION OF RATE
.BFHF       FORM  12.2            8        35      REBATE PORTION OF RATE
.BFNINV     FORM     1            2        43      No OF INVOICES (1 OR 2 ONLY)
.BFDESC     DIM     30           30        45      DESCRIPTION
BFHDP      DIM      4            4        75      **** NOT USED ANYMORE ****
.BFSPARE    DIM     18           18        79      SPARE VARIABLES
.
.End of Record                            97
.
SBFHFTAB   DIM         8                     HEALTH FUND TABLE (PATFNDH)
