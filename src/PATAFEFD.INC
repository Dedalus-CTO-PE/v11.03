.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATAFEFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Additional Fee for Overnight                    *
.  *                    (LOW OUTLIERS,INLIERS/HIGH OUTLIERS)            *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patafeaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 34                                          *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *                                                                    *
.  *      V10.10.01 28/03/2017 J.Tan          TSK 0297904               *
.  *                Added ICU/CCU Rules to Non-Accumulative Inliers     *
.  *      V10.07.01 26/10/2015 J.Tan          CAR 290448                *
.  *                Added PTFENPDY                                      *
.  *      V10.01.01 09/12/2010 Ebon Clements  CAR 233149                *
.  *                Added PTFEFIGR                                      *
.  *      V9.12.01  03/09/09 WeeLee Koo    CAR 205303                   *
.  *                Added Contract ID (PTFECNID)                        *
.  *      V9.09.01  10/08/07 J.Tan    CAR 144656                        *
.  *                Added Non-Accumulative Inliers                      *
.  *      V9.04.01  03/08/05 J.Tan    CAR 62750                         *
.  *                Removed redefined amount variables                  *
.  *      V6.05.00  27/04/98 J.Tan                                      *
.  *                Changed amount to F12.2                             *
.  *                                                                    *
.  **********************************************************************
.
PATAFEA1   IFILE SQL, FIXED=131, KEY="U111-116,1-3,4-9,10-12,13-21,22-24,25-28"
.
.NAME       TYPE   LENGTH  PHYSICAL   START     DESCRIPTION
.----       ----   ------  --------   -----     -----------
PTFECLMN    DIM      3        3         1       Claim code (Cat CL)
PTFEHFND    DIM      6        6         4       Health Fund
PTFETABT    DIM      3        3        10       Table Type (Cat HT)
PTFECASM    DIM      9        9        13       DRG/MBS Code
PTFEBTYP    DIM      3        3        22       Bed Type (Cat BT)
DPTFEEDA    DIM      4        4        25       Ending Day
PTFEDES1    DIM      30       30       29       Description 1
PTFEDES2    DIM      35       35       59       Description 2
PTFEDREB    FORM    12.2      8        94       Additional Daily rebate portion
PTFEDPAT    FORM    12.2      8       102       Additional Daily patient portion
PTFEACIN    DIM      1        1       110       Non-Accumulative Inliers
.                                               (0=No,1=Yes,2=ICU/CCU Rules)
PTFECNID    DIM      6        6       111       Contract ID
PTFEFIGR    DIM      3        3       117       Fees Invoiced Group (Cat FI)
PTFENPDY    DIM      1        1       120       Charge on No Pay Day
.                                               (1=Yes,blank or 0=No)
PTFESPAR    DIM     10       10       121       Spare
.
.End of Record                        131
.
. redefine form fields from key
. -----------------------------
PTFEEDAY    FORM     4                          Ending Day
