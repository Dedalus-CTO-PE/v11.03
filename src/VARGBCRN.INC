.******************************************************************************
.*                                                                            *
.* Include Name     : VARGBCRN.INC                                            *
.*                                                                            *
.* Description      : Variables for PATGBCRN                                  *
.*                                                                            *
.* Author           : Davin Sloan  12/09/2003                                 *
.*                                                                            *
.* Modifications    :                                                         *
.*                                                                            *
.*         V10.06.01  15/05/2015  Davin             CAR 310155                *
.*                    Added BPAYWGH2 and WGHTARA2 for MOD10V05 check digit    *
.*                    Changed CHKPRDCT from FORM2 to FORM3                    *
.*          V9.11.02  17/07/2012  Don Nguyen   CAR 264561                     *
.*                    Added BPAYHOSP - Hospital ID                            *
.*          V9.11.01  20/03/2009 Davin S    CAR 178015                        *
.*                    Added bpayinvn - generate bpay crn from INP or PRI      *
.*          V9.03.01  02/04/2004 Peter Vela CAR 48227                         *
.*                    Ported from 6.11 to 9.03                                *
.*                                                                            *
.******************************************************************************
+
BPAYHOSP  DIM       3                            * Hospital ID
BPAYINVN  DIM       8                            * invoice no. from INP or PRI
BPAYREFN  DIM       15                           * BPAY reference number
BPAYWGHT  FORM      1                            * single digit weight
BPAYWGH2  FORM      2                            * double digit weight
WGHTARAY  INIT      "21212121212121212121"       * weights array   (MOD10V1)
WGHTARA2  INIT      "010203040506070809101112"   * weights array 2 (MOD10V5)
CHKPRDCT  FORM      3                            * check digit product
CRNLNGTH  FORM      2                            * length of id+admno
CHKDIGIT  FORM      4                            * sum of products
+
.
