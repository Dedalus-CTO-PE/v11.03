.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PATCMXFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Patient             *
.  *                    Casemix Funding                                 *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : patcmxaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY 24                                          *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *         V10.11.01 14/07/2017  Tracey Nguyen TSK 0835226            *
.  *                   Added PTCMEHCP for Health Care Provider (Eclipse)*
.  **********************************************************************
.  *         V10.10.01 10/03/2017  J.Tan         TSK 0315207            *
.  *                   Updated desc.for Transfer Trim Point             *
.  **********************************************************************
.  *         V10.09.01 03/01/2017  Davin         TSK 0315207            *
.  *                   Added PTCMTLOS (Target Length of Stay)           *
.  **********************************************************************
.  *         V10.04.01 23/12/2013  Patrick Adair CAR 294388             *
.  *                   Moved Transfer Trim Point, Eclipse Equivalent    *
.  *                   and Type out of spare variable                   *
.  *         V10.03.02 10/05/2013  J.Tan         CAR 282824             *
.  *                   Added Transfer Trim Point using spare            *
.  *         V10.03.01 28/05/2012  J.Tan         CAR 244246             *
.  *                   Added Eclipse Equivalent and Type using spare    *
.  *         V10.01.01 27/01/2011  Ebon Clements CAR 233050             *
.  *                   Removed start type, start date and end date      *
.  *         5.08.01   23/10/2000  Tonii                                *
.  *                   Removed field PTCMEPSO, added 2 new fields       *
.  *                   PTCMXLOS and PTCMDIFG                            *
.  *         9.12.01   03/09/2000  J.Tan   CAR 205303                   *
.  *                   Added End date and Contract ID                   *
.  *                                                                    *
.  **********************************************************************
.
PATCMXA1   IFILE SQL, FIXED=96, KEY="U1-3,4-9,10-18,24-29"
PATCMXA2   IFILE SQL, FIXED=96, KEY="U24-29,1-3,4-9,10-18"
.
.NAME       TYPE   LENGTH  PHYSICAL   START     DESCRIPTION
.----       ----   ------  --------   -----     -----------
PTCMCLMN    DIM      3        3         1       Claim code (Cat CL)
PTCMHFND    DIM      6        6         4       Health Fund
PTCMCASM    DIM      9        9        10       DRG/MBS Code
PTCMXLOS    FORM     4        3        19       Expected Length of Stay
PTCMDIFG    FORM     1        2        22       Detailed invoice flag
PTCMCNID    DIM      6        6        24       Contract ID
PTCMECEQ    DIM      11       11       30       Eclipse Equivalent
PTCMECTS    DIM      2         2       41       Eclipse Type of Service
PTCMTRPT    DIM      3         3       43       Transfer Trim Point (cat TP)
PTCMTLOS    FORM     4         3       46       Target Length of Stay
PTCMEHCP    DIM      2         2       49       Health Care Provider (Eclipse)
PTCMSPAR    DIM     45        45       51       Spare
.
.End of Record                         96
.
