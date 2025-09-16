.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATWVEFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Veteran Affairs Claims                          *
.  *                                                                    *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patwvetf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 8                                           *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *      V10.01.01 06/01/2011  Ebon Clements  CAR 236087               *
.  *                Increased PTWVAUTH. Added PTWVCONT and PTWVTNUM     *
.  *      V9.07.01  10/07/2006  Mike Laming    CAR 111820               *
.  *                Add PTWVAUTH & PTWVDATE for IBAADT49 port to V9     *
.  *                                                                    *
.  *                    V5.00 31.03.89 J.Clark     (IBA)                *
.  *                          Change include heading                    *
.  *                    V5.01 01.06.89 K.Peak      (IBA)                *
.  *                          Change Admission to 8 characters          *
.  *                                                                    *
.  **********************************************************************
.
PATWVET1   IFILE SQL, FIXED=177, KEY="U1-8"
.
. NAME     TYPE   LENGTH  PHYSICAL   START LOC.  DESCRIPTION
. ----     ----   ------  --------   ----------  -----------
DVADMNO    DIM       8          8          1     ADMISSION NUMBER
VCLMNO     DIM      20         20          9     CLAIM NUMBER
PTWVAUTH   DIM      20         20         29     AUTHORISATION NUMBER
PTWVDATE   DIM       8          8         49     AUTHORISATION DATE
PTWVCONT   DIM      50         50         57     DVA CONTACT NAME
PTWVTNUM   DIM      20         20        107     DVA CONTACT TELEPHONE
VSPARE     DIM      50         50        127     SPARE
.
.End of Record                           177
.
.  redefine form fields from key
.  -----------------------------
.NAME     TYPE      LENGTH      START LOC.   DESCRIPTION
.----     ----      ------      ----------   -----------
VADMNO    FORM          8               1    ADMISSION NUMBER
