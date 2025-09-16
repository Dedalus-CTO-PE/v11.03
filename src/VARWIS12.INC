+
.******************************************************************************
.*                                                                            *
.* Include Name     : VARWIS12.INC                                            *
.*                                                                            *
.* Description      : Common variables for PATWIS12                           *
.*                                                                            *
.* Author           : Henry Son    12/08/2004                                 *
.*                                                                            *
.* Modifications    :                                                         *
.*                                                                            *
.*        V9.03.01  23/07/2004  CAR 51504   Henry Son                         *
.*                  Modified from VARWIS11 for 2004/2005 changes              *
.******************************************************************************
.
.AAACOPAY  FORM      12.4                    * AAA co-payment
.ASDCOPAY  FORM      12.4                    * ASD co-payment
.COLCODES  DIM       9[11]                   * codes for col. copay.
.COLCOPAY  FORM      12.4                    * Colonoscopy co-payment
.
.DHITHDAY   FORM      4                      * Hospital in The Home Days-Display
.
.HIHSTDTE   DIM       8                      * Start Hopital in Home Date
.HIHLOS     FORM      12.4                   * Total Hospital in Home Days
.HITHDAYS   FORM      12.4                   * Hospital in The Home Days
.HIHIND     FORM      1                      * Hospital in Home Indicator
.
TOTIES12  FORM      12.4                    * Total IES12
TOTWIS12  FORM      12.4                    * Total WIES12
.
W12NLIER  DIM       1                       * Inlier status (L/I/H)
WIS12DRG  DIM       4                       * DRG working variable
WIS12DSC  DIM       13                      * Display weight description
WIS12LOS  FORM      4                       * Length of stay
WIS12WGT  FORM      6.4                     * Display weight
+
.

