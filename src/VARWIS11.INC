+
.******************************************************************************
.*                                                                            *
.* Include Name     : VARWIS11.INC                                            *
.*                                                                            *
.* Description      : Common variables for PATWIS11                           *
.*                                                                            *
.* Author           : Henry Son    08/08/2003                                 *
.*                                                                            *
.* Modifications    :                                                         *
.*                                                                            *
.*        V9.03.01  08/08/2003  CAR 42039   Henry Son                         *
.*                  Modified from VARWIS10 for 2003/2004 changes              *
.******************************************************************************
.
.AAACOPAY  FORM      12.4                    * AAA co-payment
.ASDCOPAY  FORM      12.4                    * ASD co-payment
.COLCODES  DIM       9[11]                   * codes for col. copay.
.COLCOPAY  FORM      12.4                    * Colonoscopy co-payment
.
HIHSTDTE   DIM       8                      * Start Hopital in Home Date
HIHLOS     FORM      12.4                   * Total Hospital in Home Days
HITHDAYS   FORM      12.4                   * Hos[pital in The Home Days
HIHIND     FORM      1                      * Hospital in Home Indicator
.
TOTIES11  FORM      12.4                    * Total IES11
TOTWIS11  FORM      12.4                    * Total WIES11
.
W11NLIER  DIM       1                       * Inlier status (L/I/H)
WIS11DRG  DIM       4                       * DRG working variable
WIS11DSC  DIM       13                      * Display weight description
WIS11LOS  FORM      4                       * Length of stay
WIS11WGT  FORM      6.4                     * Display weight
+
.

