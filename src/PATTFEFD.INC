. V5.07.001 07/08/1998 Jim Stathopoulos  507 Changes 
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATTFEFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for                     *
.  *                    THEATRE FEES FILE                               *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : pattfeef.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 23                                          *
.  *                                                                    *
.  **********************************************************************
.  *   ***** Programmer's Note **************************************   *
.  *   *  Any changes made to this FD will also affect PATTF1FD/IO. *   *
.  *   *  Any changes made to this FD will also affect PATTF2FD/IO. *   *
.  *   **************************************************************   *
. *          V10.01.01 13/12/2010 Peter Vela CAR 233048                  *
. *                    Added PTTFHTYP and PTTFCNID                       *  
. *           V9.04.01 03/08/05 J.Tan    CAR 62750                       *
. *                    Removed redefined amount variables                *
. *           V5.08.01 15/08/2000  Caleb Sharman                         *
. *                    Changed Health Fund variables to be 8 chars       *
. *                                                                      *
. ************************************************************************
PATTFEE1   IFILE   SQL, FIXED=133, KEY="U1-3,4-9,10-12,13-13,14-18,117-122"
PATTFEE2   IFILE   SQL, FIXED=133, KEY="U117-122,1-3,4-9,10-12,13-13,14-18"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
TFCLM      DIM        3          3          1     CLM CODE (CODES FILE CAT. CL)
TFHFUND    DIM        6          6          4     H.F. (PATFUNDH FILE)
PTTFHTYP   DIM        3          3         10     Health Fund Table Type(Cat.HT)
TFDAYC     DIM        1          1         13     DAY CASE RATE INDICATOR
.                                                 "D" = Day Case rate
.                                                 " " = Not a Day Case rate
TFENDMBS   DIM        5          5         14     LAST MBS FEE IN RANGE or
.                                                 THEATRE CLASSIFICATION
TFHF1      FORM      12.2        8         19     REBATE PORT IF 1st HIGHEST FEE
TFPAT1     FORM      12.2        8         27     PATIENT PORTION
TFHF2      FORM      12.2        8         35     REBATE PORT IF 2nd HIGHEST FEE
TFPAT2     FORM      12.2        8         43     PATIENT PORTION
TFHF3      FORM      12.2        8         51     REBATE PORT IF 3rd HIGHEST FEE
TFPAT3     FORM      12.2        8         59     PATIENT PORTION
TFHF4      FORM      12.2        8         67     REBATE PORT IF 4th HIGHEST FEE
TFPAT4     FORM      12.2        8         75     PATIENT PORTION
TFHF5      FORM      12.2        8         83     REBATE PORT IF 5th HIGHEST FEE
TFPAT5     FORM      12.2        8         91     PATIENT PORTION
TFHF6      FORM      12.2        8         99     REBATE PORT IF 6th HIGHEST FEE
TFPAT6     FORM      12.2        8        107     PATIENT PORTION
TFNINV     FORM       1          2        115     NUMBER OF INVS (1 OR 2 ONLY)
PTTFCNID   DIM        6          6        117     Contract ID
TFSPARE    DIM       10         10        123     SPARE VARIABLES
.
.End of Record                            133
.
STFCLM     DIM         3             1       CLAIM CODE (CODES FILE CAT. CL)
STFHFUND   DIM         6             4       H.F. (PATFUNDH FILE)
SPTTFHTY   DIM         3             10      Health Fund Table Type(Cat.HT)
STFENDMB   DIM         5             13      LAST MBS FEE IN RANGE or
.                                            THEATRE CLASSIFICATION
STFHF1     FORM     12.2             18      REBATE PORTION
STFPAT1    FORM     12.2             26      PATIENT PORTION 
STFHF2     FORM     12.2             34      REBATE PORTION       
STFPAT2    FORM     12.2             42      PATIENT PORTION                  
STFHF3     FORM     12.2             50      REBATE PORTION               
STFPAT3    FORM     12.2             58      PATIENT PORTION               
STFHF4     FORM     12.2             66      REBATE PORTION               
STFPAT4    FORM     12.2             74      PATIENT PORTION               
STFHF5     FORM     12.2             82      REBATE PORTION               
STFPAT5    FORM     12.2             90      PATIENT PORTION               
STFHF6     FORM     12.2             98      REBATE PORTION               
STFPAT6    FORM     12.2            106      PATIENT PORTION               
STFNINV    FORM        1            114      NUMBER OF INVOICES (1 OR 2 ONLY)
STFDAYC    DIM         1            116      DAY CASE RATE INDICATOR
SPTTFCNI   DIM         6            117      Contract ID
STFSPARE   DIM        10            123      SPARE VARIABLES
.
           INC      JHSTFEFD/INC
