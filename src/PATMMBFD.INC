.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATMMBFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Medical Records MBS                             *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patmmbsf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 20, KEY 11                                  *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *    V11.01.01 15/02/2021  Tracey Nguyen   TSK 0888639               *
.  *              Extended DMMRECN from DIM 2 to DIM 3                  *
.  *              Extended MMRECN from FORM 2 to FORM 3                 *
.  *              Extended PATMMBS1 from KEY10 to KEY11                 *
.  *              Extended PATMMBS2 from KEY19 to KEY20                 *
.  *              Reduced MMSPARE from 50 down to 49                    *
.  *    V10.13.01 24/10/2018  Davin           TSK 0854372               *
.  *              Added PTMMEDAT,PTMMRPST,PTMMRPET,PTMMAPRA,PTMMVAID    *
.  *    V10.00.01 31/03/2010 Mike Laming      207386                    *
.  *              Moved PTMMOPID/PTMMTMNO into recd                     *
.  *    V9.12.01  12/01/2010 Mike Laming      207386                    *
.  *              Add Opr Unique Id & Team Number                       *
.  *    V9.03.01  28/10/2003 Sylvek Litewka  CAR 44328                  *
.  *               Added Free Format Description.                       *
.  *    V5.07.001 07/08/1998 Jim Stathopoulos  507 Changes              *
.  *                                                                    *
.  **********************************************************************
.
PATMMBS1   IFILE SQL, FIXED=208, KEY="U10-17,18-20"
PATMMBS2   IFILE SQL, FIXED=208, KEY="U1-9,10-17,18-20"
.
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
MMCODE      DIM       9          9         1      MBS CODE
DMMADMN     DIM       8          8        10      ADMISSION NUMBER
DMMRECN     DIM       3          3        18      RECORD NUMBER FOR ADMISSION
MMDATE      DIM       8          8        21      OPERATION DATE (CCYYMMDD)
MMSTIM      DIM       5          5        29      OPERATION START TIME
MMETIM      DIM       5          5        34      OPERATION END TIME
PTMMDESC    DIM      70         70        39      FREE FORMAT DESCRIPTION
PTMMOPID    DIM      10         10       109      Theatre Unique Id.
PTMMTMNO    DIM       1          1       119      Theatre Team Number
PTMMEDAT    DIM       8          8       120      Operation End Date
PTMMRPST    DIM       5          5       128      Reporting Procedure Start Time
PTMMRPET    DIM       5          5       133      Reporting Procedure End Time
PTMMVAID    DIM       1          1       138      Valid AHPRA Identifier
.                                                 0 = No AHPRA ID
.                                                 1 = AHPRA ID validated
.                                                 2 = AHPRA ID not validated
PTMMAPRA    DIM      20         20       139      AHPRA Identifier
MMSPARE     DIM      49         49       159      Spare
.
.End of Record                           208
.
.
SMMCODE     DIM          9
.
.  redefine form fields from key
.  -----------------------------
. NAME     TYPE      LENGTH     START LOC.   DESCRIPTION
. ----     ----      ------     ----------   -----------
MMADMN     FORM          8            10      ADMISSION NUMBER
MMRECN     FORM          3            18      RECORD NUMBER FOR ADMISSION
