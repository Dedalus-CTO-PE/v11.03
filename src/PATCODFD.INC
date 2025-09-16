.  ****************************************************************************
.  *                                                                          *
.  *     Include Name : PATCODFD.INC                                          *
.  *                                                                          *
.  *     Function     : File Definition include for Patient                   *
.  *                    Codes Table                                           *
.  *                                                                          *
.  *     File Type    : SQL                                                   *
.  *                                                                          *
.  *     File Name    : patcodes.dat                                          *
.  *                                                                          *
.  *     Keys         : KEY 5                                                 *
.  *                                                                          *
.  *     Modifications:                                                       *
.  *              V10.13.01  03/08/2018  Don Nguyen        TSK 0853011        *
.  *                         Added Indicators 22-41 (TCINDC22-TCINDC41),      *
.  *                         User Defined Fields 5-14 (PTCDUDF5-PTCDUD14),    *
.  *                         Associated Numbers 6-15 (PTCDASC6-PTCDAS15).     *
.  *              V10.02.01  22/07/2011  J.Tan            CAR 244159          *
.  *                         Added Credit Card Surcharge & Associated No      *
.  *              V10.00.01  09/04/2010  Steve Armstrong  CAR 218670          *
.  *                         Added TCINDC12, TCINDC13, TCINDC14,              *
.  *                         TCINDC15, TCINDC16, TCINDC17, TCINDC18,          *
.  *                         TCINDC19, TCINDC20, TCINDC21, PTCDUDF1,          *
.  *                         PTCDUDF2, PTCDUDF3 & PTCDUDF4.                   *
.  ****************************************************************************
.  *                    V9.09.02 13/12/2007  Davin            CAR 153384      *
.  *                             Added PTCDDFIC - Default Fee Info Code       *
.  *                    V9.09.01 09/08/2007  Steve Armstrong  CAR 147479      *
.  *                             Added PTCDLDES - Long Description            *
.  ****************************************************************************
.  *                    V9.05.01 07/03/2006  Ebon Clements CAR 78533          *
.  *                             Added PTCDHOSS - Hospital Specific           *
.  ****************************************************************************
.  *                    V9.02.02 16/09/2002  Peter Vela                       *
.  *                             Added PTCDNHCP - Nat HCP Equivalent          *
.  *                    V9.02.01 16/10/2001  Ebon Clements                    *
.  *                             Added PTCDDEFT - Default code                *
.  ****************************************************************************
.  *                    V5.08.03 03/05/2001  Steve Armstrong                  *
.  *                             Added index 5                                *
.  *                    V5.08.02 14/09/2000  Jill Habasque                    *
.  *                             Added PTCDGRPV - grouper version             *
.  *                    V5.08.01 04/03/2000  Steve Armstrong                  *
.  *                             Added TCINDC11                               *
.  *                    V5.08.00 14/01/2000  Davin                            *
.  *                             Standardised with release 6                  *
.  ****************************************************************************
.  *                    V5.07.00 01.07.1999  Katie Nelson                     *
.  *                             Added index 3 and 4                          *
.  *                                                                          *
.  ****************************************************************************
.
.Data File Definition
.--------------------
PATCODE1   IFILE SQL, FIXED=424, KEY="U1-2,3-5"
PATCODE2   IFILE SQL, FIXED=424, KEY="U1-2,6-25,3-5"
PATCODE3   IFILE SQL, FIXED=424, KEY="U3-5,1-2"
PATCODE4   IFILE SQL, FIXED=424, KEY="U3-5,6-25,1-2"
PATCODE5   IFILE SQL, FIXED=424, KEY="U1-2,26-29,3-5"
.
. NAME    TYPE    LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----    ----    ------   --------  ----------   -----------
TCODE     DIM       2          2          1       TYPE OF CODE TO TABLE
ACODE     DIM       3          3          3       ACTUAL CODE
.
TDESC     DIM       20        20          6       TABLE DESCRIPTION
THCSCOD   DIM       4          4         26       HCS EQUIVALENT
.                                                 (Journal Type for Journals)
TCFORM6   FORM      6          4         30       FORM 6 USING ANYWHERE
TCINDC1   DIM       1          1         34       SPECIAL INDIC 1 (Categ depend)
TCINDC2   DIM       1          1         35       SPECIAL INDIC 2 (Categ depend)
TCINDC3   DIM       1          1         36       SPECIAL INDIC 3 (Categ depend)
TCINDC4   DIM       1          1         37       SPECIAL INDIC 4 (Categ depend)
TCINDC5   DIM       1          1         38       SPECIAL INDIC 5 (Categ depend)
PTCOACTV  DIM       1          1         39       ACTIVE INDICATOR, A = Active
.                                                                   I = Inactive
TCINDC6   DIM       1          1         40       SPECIAL INDIC 6 (Categ depend)
TCINDC7   DIM       1          1         41       SPECIAL INDIC 7 (Categ depend)
TCINDC8   DIM       1          1         42       SPECIAL INDIC 8 (Categ depend)
TCINDC9   DIM       1          1         43       SPECIAL INDIC 9 (Categ depend)
TCINDC10  DIM       1          1         44       SPECIAL INDIC10 (Categ depend)
TCINDC11  DIM       1          1         45       SPECIAL INDIC11 (Categ depend)
PTCDGRPV  DIM       3          3         46       GROUPER VERSION (031 or 041)
PTCDDEFT  DIM       1          1         49       DEFAULT CODE (0=NO 1=YES)
PTCDNHCP  DIM       4          4         50       National HCP Equivalent
PTCDHOSS  DIM       1          1         54       Hospital Specific Code
.                                                 (0=NO 1=YES) mltcodaf
PTCDLDES  DIM      50         50         55       Long Description
PTCDDFIC  DIM       6          6        105       Default Fee Information Code
.                                                 (Stationery Code - Type 3)
TCINDC12  DIM       1          1        111       SPECIAL INDIC12 (Categ depend)
TCINDC13  DIM       1          1        112       SPECIAL INDIC13 (Categ depend)
TCINDC14  DIM       1          1        113       SPECIAL INDIC14 (Categ depend)
TCINDC15  DIM       1          1        114       SPECIAL INDIC15 (Categ depend)
TCINDC16  DIM       1          1        115       SPECIAL INDIC16 (Categ depend)
TCINDC17  DIM       1          1        116       SPECIAL INDIC17 (Categ depend)
TCINDC18  DIM       1          1        117       SPECIAL INDIC18 (Categ depend)
TCINDC19  DIM       1          1        118       SPECIAL INDIC19 (Categ depend)
TCINDC20  DIM       1          1        119       SPECIAL INDIC20 (Categ depend)
TCINDC21  DIM       1          1        120       SPECIAL INDIC21 (Categ depend)
PTCDFELC  DIM      10         10        121       Financial Election Stationery
.                                                 Template Form 
PTCDUDF2  DIM      10         10        131       Hospital code (pathspaf)
PTCDUDF3  DIM      10         10        141       User Defined Field 3
PTCDUDF4  DIM      10         10        151       User Defined Field 4
PTCDCRSC  FORM      2.2        3        161       % Credit Card Surcharge
PTCDASC1  DIM       6          6        164       Associated Number 1
PTCDASC2  DIM       6          6        170       Associated Number 2
PTCDASC3  DIM       6          6        176       Associated Number 3
PTCDASC4  DIM       6          6        182       Associated Number 4
PTCDASC5  DIM       6          6        188       Associated Number 5
TCINDC22  DIM       1          1        194       SPECIAL INDIC22 (Categ depend)
TCINDC23  DIM       1          1        195       SPECIAL INDIC23 (Categ depend)
TCINDC24  DIM       1          1        196       SPECIAL INDIC24 (Categ depend)
TCINDC25  DIM       1          1        197       SPECIAL INDIC25 (Categ depend)
TCINDC26  DIM       1          1        198       SPECIAL INDIC26 (Categ depend)
TCINDC27  DIM       1          1        199       SPECIAL INDIC27 (Categ depend)
TCINDC28  DIM       1          1        200       SPECIAL INDIC28 (Categ depend)
TCINDC29  DIM       1          1        201       SPECIAL INDIC29 (Categ depend)
TCINDC30  DIM       1          1        202       SPECIAL INDIC30 (Categ depend)
TCINDC31  DIM       1          1        203       SPECIAL INDIC31 (Categ depend)
TCINDC32  DIM       1          1        204       SPECIAL INDIC32 (Categ depend)
TCINDC33  DIM       1          1        205       SPECIAL INDIC33 (Categ depend)
TCINDC34  DIM       1          1        206       SPECIAL INDIC34 (Categ depend)
TCINDC35  DIM       1          1        207       SPECIAL INDIC35 (Categ depend)
TCINDC36  DIM       1          1        208       SPECIAL INDIC36 (Categ depend)
TCINDC37  DIM       1          1        209       SPECIAL INDIC37 (Categ depend)
TCINDC38  DIM       1          1        210       SPECIAL INDIC38 (Categ depend)
TCINDC39  DIM       1          1        211       SPECIAL INDIC39 (Categ depend)
TCINDC40  DIM       1          1        212       SPECIAL INDIC40 (Categ depend)
TCINDC41  DIM       1          1        213       SPECIAL INDIC41 (Categ depend)
PTCDUDF5  DIM      10         10        214       User Defined Field 5
PTCDUDF6  DIM      10         10        224       User Defined Field 6
PTCDUDF7  DIM      10         10        234       User Defined Field 7
PTCDUDF8  DIM      10         10        244       User Defined Field 8
PTCDUDF9  DIM      10         10        254       User Defined Field 9
PTCDUD10  DIM      10         10        264       User Defined Field 10
PTCDUD11  DIM      10         10        274       User Defined Field 11
PTCDUD12  DIM      10         10        284       User Defined Field 12
PTCDUD13  DIM      10         10        294       User Defined Field 13
PTCDUD14  DIM      10         10        304       User Defined Field 14
PTCDASC6  DIM       6          6        314       Associated Number 6
PTCDASC7  DIM       6          6        320       Associated Number 7
PTCDASC8  DIM       6          6        326       Associated Number 8
PTCDASC9  DIM       6          6        332       Associated Number 9
PTCDAS10  DIM       6          6        338       Associated Number 10
PTCDAS11  DIM       6          6        344       Associated Number 11
PTCDAS12  DIM       6          6        350       Associated Number 12
PTCDAS13  DIM       6          6        356       Associated Number 13
PTCDAS14  DIM       6          6        362       Associated Number 14
PTCDAS15  DIM       6          6        368       Associated Number 15
TCSPARE   DIM      50         50        374       SPARE VARIABLE
.End of Record                          424

.         The following is used as the key for the 2nd index of the codes
.         file. It is defined here, with this name, because otherwise we
.         would have had to add KEY25 to every program that uses the codes
.         file. Unfortunately, some of the programs already define KEY25,
.         so we couldn't just add it to IBACOMM or this include.
.
PTCDKEY2  DIM       25        * Key variable for 2nd index
