+
.******************************************************************************
.*                                                                            *
.* Include Name     : VARWIS13.INC                                            *
.*                                                                            *
.* Description      : Common variables for PATWIS13                           *
.*                                                                            *
.* Author           : Davin S      10/07/2006                                 *
.*                                                                            *
.* Modifications    :                                                         *
.*                                                                            *
.*        V9.07.01  10/07/2006  CAR 111764  Davin S                           *
.*                  Modified from VARWIS12 for 2006/2007 changes              *
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
TOTIES13  FORM      12.4                    * Total IES13
TOTWIS13  FORM      12.4                    * Total WIES13
.
W13NLIER  DIM       1                       * Inlier status (L/I/H)
WIS13DRG  DIM       4                       * DRG working variable
WIS13DSC  DIM       13                      * Display weight description
WIS13LOS  FORM      4                       * Length of stay
WIS13WGT  FORM      6.4                     * Display weight
+
.

