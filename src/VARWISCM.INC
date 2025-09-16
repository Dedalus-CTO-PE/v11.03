.******************************************************************************
.*                                                                            *
.* Include Name     : VARWISCM.INC                                            *
.*                                                                            *
.* Description      : Common variables for WIES                               *
.*                                                                            *
.* Author           : Steve Armstrong   01/08/2007                            *
.*                                                                            *
.* Modifications    :                                                         *
.*       V11.00.01  23/09/2020  Ebon Clements     TSK 0893634                 *
.*                  Added variables for using WIES27                          *
.*       V10.14.01  26/08/2019  Davin             TSK 0880255                 *
.*                  Added variables for using WIES26                          *
.*       V10.13.01  17/08/2018  Davin             TSK 0860935                 *
.*                  Added variables for using WIES25                          *
.*       V10.11.01  01/08/2017  Davin             TSK 0842626                 *
.*                  Added variables for using WIES24                          *
.*       V10.08.01  18/07/2016  Davin             TSK 0822753                 *
.*                  Added variables for using WIES23                          *
.*       V10.06.01  10/04/2015  J.Tan             CAR 304813                  *
.*                  Added variables for using patwieaf file WIES22            *
.*       V10.05.01  09/09/2014  Davin             CAR 296980                  *
.*                  Added CPDCOPAY for 2014/2015 changes                      *
.******************************************************************************
.
TOTIES27  FORM      12.4                    * Total IES
TOTWIS27  FORM      12.4                    * Total WIES
W27NLIER  DIM       1                       * Inlier status (L/I/H)
WIS27DRG  DIM       4                       * DRG working variable
WIS27DSC  DIM       13                      * Display weight description
WIS27LOS  FORM      4                       * Length of stay
WIS27WGT  FORM      6.4                     * Display weight
WIS27RDC  DIM       1                       * Restrict Diag Codes sent to Grper
.
TOTIES26  FORM      12.4                    * Total IES
TOTWIS26  FORM      12.4                    * Total WIES
W26NLIER  DIM       1                       * Inlier status (L/I/H)
WIS26DRG  DIM       4                       * DRG working variable
WIS26DSC  DIM       13                      * Display weight description
WIS26LOS  FORM      4                       * Length of stay
WIS26WGT  FORM      6.4                     * Display weight
WIS26RDC  DIM       1                       * Restrict Diag Codes sent to Grper
.
TOTIES25  FORM      12.4                    * Total IES
TOTWIS25  FORM      12.4                    * Total WIES
W25NLIER  DIM       1                       * Inlier status (L/I/H)
WIS25DRG  DIM       4                       * DRG working variable
WIS25DSC  DIM       13                      * Display weight description
WIS25LOS  FORM      4                       * Length of stay
WIS25WGT  FORM      6.4                     * Display weight
WIS25RDC  DIM       1                       * Restrict Diag Codes sent to Grper
.
TOTIES24  FORM      12.4                    * Total IES
TOTWIS24  FORM      12.4                    * Total WIES
W24NLIER  DIM       1                       * Inlier status (L/I/H)
WIS24DRG  DIM       4                       * DRG working variable
WIS24DSC  DIM       13                      * Display weight description
WIS24LOS  FORM      4                       * Length of stay
WIS24WGT  FORM      6.4                     * Display weight
WIS24RDC  DIM       1                       * Restrict Diag Codes sent to Grper
.
TOTIES23  FORM      12.4                    * Total IES
TOTWIS23  FORM      12.4                    * Total WIES
W23NLIER  DIM       1                       * Inlier status (L/I/H)
WIS23DRG  DIM       4                       * DRG working variable
WIS23DSC  DIM       13                      * Display weight description
WIS23LOS  FORM      4                       * Length of stay
WIS23WGT  FORM      6.4                     * Display weight
.
TOTIES22  FORM      12.4                    * Total IES
TOTWIS22  FORM      12.4                    * Total WIES
WIESVERN  DIM       3                       * WIES Version number
W22NLIER  DIM       1                       * Inlier status (L/I/H)
WIS22DRG  DIM       4                       * DRG working variable
WIS22DSC  DIM       13                      * Display weight description
WIS22LOS  FORM      4                       * Length of stay
WIS22WGT  FORM      6.4                     * Display weight
.
AAACOPAY  FORM      12.4                    * AAA co-payment
ADJMVDAY  FORM      12                      * Days receiving mech. vent. copay.
ADJNVDAY  FORM      12                      * Days receiving non-inv vent. copay
ASDCOPAY  FORM      12.4                    * ASD co-payment
ATSIWIES  FORM      12.4                    * Abo./Torres. Islander Loading
COLCODES  DIM       9[11]                   * codes for col. copay.
COLCOPAY  FORM      12.4                    * Colonoscopy co-payment
CPDCOPAY  FORM      12.4                    * Cochlear Prosthetic co-payment
.
FORM12P4  FORM      12.4                    * Used for determining inlier stat.
.
HIGHDAYS  FORM      12.4                    * High outlier days
.
LOSCAT    DIM       1                       * Length of stay category (S/O/M)
MVCOPAY   FORM      12.4                    * Mech. vent. co-payment
NIVCOPAY  FORM      12.4                    * Non-invasive. vent. co-payment
SAMEDAY   FORM      1                       * Sameday flag (0=no/1=yes)
.
THCOPAY   FORM      12.4                    * Thalessaemia co-payment
TOTBWIES  FORM      12.4                    * Total base WIES
.
CATA1     INIT      "U1"
CATA2     INIT      "U2"
CATA3     INIT      "U3"
CATA4     INIT      "U4"
CATA5     INIT      "U5"
CATA6     INIT      "U6"
CATA7     INIT      "U7"
CATD1     INIT      "D1"
CATD2     INIT      "D2"
CATD3     INIT      "D3"
CATD4     INIT      "D4"
CATD5     INIT      "D5"
CATP1     INIT      "P1"
CATP2     INIT      "P2"
CATP3     INIT      "P3"
CATP4     INIT      "P4"
CATP5     INIT      "P5"
CATP6     INIT      "P6"
CATVA     INIT      "VA"
+
