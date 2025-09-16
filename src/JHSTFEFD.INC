.  **********************************************************************
.  *                                                                    *
.  *     Include Name : JHSTFEFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for                     *
.  *                    THEATRE FEES FILE                               *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : jhstfeaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 23                                          *
.  *                                                                    *
.  **********************************************************************
.  *   ***** Programmer's Note **************************************   *
.  *   *  Any changes made to this FD will also affect JHSTF1FD/IO. *   *
.  *   *  Any changes made to this FD will also affect JHSTF2FD/IO. *   *
.  *   **************************************************************   *
. ************************************************************************
JHSTFEA1   IFILE   SQL, FIXED=133, KEY="U1-3,4-9,10-17,18-18,19-23"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
.TFCLM     DIM        3          3          1     CLM CODE (CODES FILE CAT. CL)
.TFHFUND   DIM        6          6          4     H.F. (PATFUNDH FILE)
TFHFTAB    DIM        8          8         10     H.F. TABLE (PATFUNDH)
.TFDAYC    DIM        1          1         18     DAY CASE RATE INDICATOR
.                                                 "D" = Day Case rate
.                                                 " " = Not a Day Case rate
.TFENDMBS  DIM        5          5         19     LAST MBS FEE IN RANGE or
.                                                 THEATRE CLASSIFICATION
.TFHF1     FORM      12.2        8         24     REBATE PORT IF 1st HIGHEST FEE
.TFPAT1    FORM      12.2        8         32     PATIENT PORTION
.TFHF2     FORM      12.2        8         40     REBATE PORT IF 2nd HIGHEST FEE
.TFPAT2    FORM      12.2        8         48     PATIENT PORTION
.TFHF3     FORM      12.2        8         56     REBATE PORT IF 3rd HIGHEST FEE
.TFPAT3    FORM      12.2        8         64     PATIENT PORTION
.TFHF4     FORM      12.2        8         72     REBATE PORT IF 4th HIGHEST FEE
.TFPAT4    FORM      12.2        8         80     PATIENT PORTION
.TFHF5     FORM      12.2        8         88     REBATE PORT IF 5th HIGHEST FEE
.TFPAT5    FORM      12.2        8         96     PATIENT PORTION
.TFHF6     FORM      12.2        8        104     REBATE PORT IF 6th HIGHEST FEE
.TFPAT6    FORM      12.2        8        112     PATIENT PORTION
.TFNINV    FORM       1          2        120     NUMBER OF INVS (1 OR 2 ONLY)
.TFSPARE   DIM       11         11        122     SPARE VARIABLES
.
.End of Record                            133
.
STFHFTAB   DIM         8             10      H.F. TABLE (PATFUNDH)
.
