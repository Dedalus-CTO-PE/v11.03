.  ****************************************************************************
.  *                                                                          *
.  *     Include Name : OPRCONFD.INC                                          *
.  *                                                                          *
.  *     Function     : File Definition include for Theatre                   *
.  *                      Operating Room Control File                         *
.  *                                                                          *
.  *     File Type    : ASCII                                                 *
.  *                                                                          *
.  *     Sector used  : 40,42,68,113                                          *
.  *                                                                          *
.  *     File Name    : controlf.txt                                          *
.  *                                                                          *
.  *     Modifications:                                                       *
.  *      V11.00.01 22/04/2020  Ebon Clements    Task 0850105                 *
.  *                Added OPCNTHED - Display theatre status in patient header *
.  *      V10.15.01 21/11/2019  Peter Vela       Task 0871644                 *
.  *                Added OPCNPTMC - Preference and Tray Items from Misc Chrg *
.  *                file (patmchgf or nzpmchaf)                               *
.  *      V10.13.01 11/09/2018  Ania P           TSK 0859769                  *
.  *                Added OPCNTTDC                                            *
.  *      V10.12.06 17/07/2018  Richa Phogat     TSK 0851661                  *
.  *                Added OPCNZSC6 - Write inbound ZSC.6 to oprardaf.oparanas *
.  *                only                                                      *
.  *      V10.12.05 17/07/2018  Ken Bell         TSK 0850101                  *
.  *                Added OPCNDTSV Display Theatre Bookings in Visits Lists   *
.  *      V10.12.04 16/07/2018  Steve Armstrong  TSK 0851661                  *
.  *                Updated description and added values for OPCNPACU         *
.  *      V10.12.03 28/06/2018  Richa Phogat     TSK 0851661                  *
.  *                Added OPCNAIPS - Send AIP Segment for Anaesthetist and    *
.  *                other operating Personnel in S12, S14 and S15             *
.  *                Added OPCNAILS - Send AIL Segment with Session Start/End  *
.  *                Date/Time, Session Period and Case Number in S12, S14 and *
.  *                S15                                                       *
.  *      V10.12.02 02/05/2018  Peter Vela       TSK 0851006                  *
.  *                Added OPCNTOPA - Variance in time for Time Out Performed  *
.  *                to Anaesthetic Commenced (Cat ol)                         *
.  *                Added OPCNACSS - Variance in time for Anaesthetic         *
.  *                Commenced to Surgery Start (Cat TV)                       *
.  *                Added OPCNSETR - Variance in time for Surgery End to Time *
.  *                in Recovery - Day (Cat Ou)                                *
.  *                Added OPCNPACU - User Defined Time for Ready for PACU     *
.  *      V10.12.01 10/01/2018  J.Tan            TSK 0847295                  *
.  *                Added OPCNDMBS - Display all MBS Items on Input Charges   *
.  *      V10.11.02 05/12/2017  Tracey Nguyen    TSK 0825792                  *
.  *                Added OPCNURSE - Use oprnuraf/pmshcpaf for Theatre Nurse  *
.  *      V10.11.01 02/08/2017  Richa Phogat     TSK 0837479                  *
.  *                Added OPCNCONS - Enable use of consumption type in theatre*
.  *                and billing                                               *
.  *      V10.09.01 07/02/2017  Davin            TSK 0829089                  *
.  *                Added OPCNSIVB - Search Implant via Barcode (0=No/1=yes)  *
.  *                Added OPCNVPIN - Verify Prosthetics Input   (0=No/1=yes)  *
.  *      V10.08.03 29/07/2016  J.Tan            TSK 0813090                  *
.  *                Added OPCNOPAV- Using Theatre Banding for Operation Av.   *
.  *                Added OPCNP1ST- % Op Time of 1st Highest Banded item      *
.  *                Added OPCNP2ND- % Op Time of 2nd Highest Banded item      *
.  *      V10.08.02 22/06/2016  Ebon Clements    TSK 0312728                  *
.  *                Added OPCNCRRM - Clinical review required minutes         *
.  *      V10.08.01 26/05/2016  Peter Vela       TSK 0321157                  *
.  *                Added OPCNCTIN - Collecting Timeout Information           *
.  *                Added OPCNCOSO - Collecting OT Sign Out Information       *
.  *                Added OPCNCRRH - Collecting Recovery Room Handover        *
.  *                Added OPCNLDAE - Long Delay trigger Anaesthetic Event     *
.  *      V10.06.01 30/04/2015  Peter Vela       CAR 312771                   *
.  *                Added OPCNUTRA - Using Theatre Requests Approval          *
.  *      V10.04.02 08/04/2014  Ebon Clements    CAR 283332                   *
.  *                Added new layout 9 for OPCNR66A (IBAOPR66 - Healthscope)  *
.  *      V10.04.01 13/02/2014  Peter Vela       CAR 218689                   *
.  *                Added OPCNUTRN - Unique Theatre Request Number            *
.  *                Added OPCNTRCS - Theatre time for Request Clock Stop      *
.  *      V10.03.01 08/07/2012  Saroeun Soeur    CAR 255726                   *
.  *                Added OPCNVRRD                                            *
.  *      V10.02.01 02/06/2011  Saroeun Soeur    CAR 240742                   *
.  *                Added OPCNURAD                                            *
.  *      V10.00.03 25/10/2010  Ebon Clements    CAR 231458                   *
.  *                Added OPCNSMFT and OPCNSMTT                               *
.  *      V10.00.02 06/07/2010  J.Tan             CAR 200396                  *
.  *                Added new layout 8 for OPCNR66A (IBAOPR66 - Healthscope)  *
.  *      V10.00.01 01/06/2010  Ebon Clements    CAR 222983                   *
.  *                Added OPCNICOM Use Implants Codes on Combined CBMS & Misc *
.  *      V9.12.01  17/12/2009  Ebon Clements    CAR 208431                   *
.  *                Added OPCNDOVR - Delay/Overtime allowance amount (+- mins)*
.  *      V9.10.03  26/08/2008  Steve Armstrong  CAR 147323                   *
.  *                Added OPCNS12A - HL7 Add Theatre Booking Message          *
.  *                Added OPCNS14A - HL7 Modify Theatre Booking Message       *
.  *                Added OPCNS15A - HL7 Cancel Theatre Booking Message       *
.  *      V9.10.02  30/07/2008  Ebon Clements    CAR 173369                   *
.  *                Added OPCNPLIN - Don't print a blank line at the start    *
.  *                                 of theatre forms                         *
.  *      V9.10.01  27/05/2008  Ebon Clements    CAR 162259                   *
.  *                Added OPCNCOMB - Using Combined CBMS & Misc changes       *
.  *      V9.09.05  01/04/2008  Ebon Clements    CAR 162868                   *
.  *                Added OPCNFDUR - Using Free Format Duration               *
.  *      V9.09.04  04/02/2008  Ebon Clements    CAR 152783                   *
.  *                Added OPCNTPAT - Highlight Today patients on theatre list *
.  *      V9.09.03  04/12/2007  Steve Armstrong  CAR 155887                   *
.  *                Added OPCNH7BK - Send A05 for Theatre Booking             *
.  *      V9.09.02  08/10/2007  Jill Habasque  CAR 150324                     *
.  *                Added OPCNCRFL - Check for referral before booking        *
.  *      V9.09.01  19/09/2007  Jill Habasque  CAR 150318                     *
.  *                Added OPCNSEMP - Surgery End mandatory before next start  *
.  ****************************************************************************
.  *      V9.08.01  20/04/2007  Peter Vela     CAR 136525                     *
.  *                Added OPCNOP66 - Ward Bed Indicator for IBAOPR66          *
.  ****************************************************************************
.  *      V9.07.01  12/09/2006  Peter Vela     CAR 118228                     *
.  *                Modified OPCNCLSH description                             *
.  ****************************************************************************
.  *      V9.04.02  01/09/2005  Ebon Clements  CAR 73209                      *
.  *                Commented out OPCNFTYP,OPCNFTTM,OPCNTTYP,OPCNTTTM         *
.  *                OPCNDSTR,OPCNDEND                                         *
.  *                Added OPCNDSAS & OPCNDSAE usage default session start/end *
.  *      V9.04.01  24/01/2005  Lina Vo        CAR 56410                      *
.  *                Added OPCNWHCD - Warehouse code for Theatre Purchase order*
.  ****************************************************************************
.  *      V9.03.03  09/08/2004  Peter Vela     CAR 50678                      *
.  *                Added OPCNSCOM - Using Session Based Comments? 0=No 1=Yes *
.  *      V9.03.02  20/05/2004  Ebon Clements  CAR 49926                      *
.  *                Added OPCNDORD - Display order for booking list diagnosis *
.  *      V9.03.01  05/09/2003  CAR 41899   Mike Laming                       *
.  *                Added OPCNZMIS - Post zero value Misc.Items in OPR43      *
.  *                Sector 42 Pos 239                                         *
.  ****************************************************************************
.  *      V9.02.07  11/02/2003  Tonii                                         *
.  *                Added OPCNFTIM - new operation start time                 *
.  *                Added OPCNTTIM - new operation end time                   *
.  *      V9.02.06  02/10/02 J.Tan                                            *
.  *                Added OPCNPTUP - Path for theatre upload file             *
.  *                Added OPCNFTUP - File name for theatre upload             *
.  *      V9.02.05  19/07/02 Ebon Clements SRF 19440                          *
.  *                Added OPCNCPOD - Copy the operation full description      *
.  *                from the booking to the surgical details                  *
.  *      V9.02.04  31/01/02 Ashwin                                           *
.  *                Added OPCNSTCT - Staff category for operating surgeon     *
.  *      V9.02.03  20/12/01 J.Tan                                            *
.  *                Added OPCNPODY - No of pre-op days allowed                *
.  *      V9.02.02  13/11/01 Greg Horvat                                      *
.  *                Added OPCNMIND - Minutes delayed                          *
.  *      V9.02.01  05/07/01 Mike Laming                                      *
.  *                Added OPCNDGUB Write Pre-Admission Oper. Booking to DG    *
.  *                Added OPCNDGCB Write Cancel Oper. Booking to Datatgate    *
.  ****************************************************************************
.  *      V9.00.01  24/05/01 J.Habasque                                       *
.  *                Added OPCNARDA - Arrival and recovery details audit       *
.  ****************************************************************************
.  *      V5.05.02  21/12/99 J.Tan                                            *
.  *                Added OPCNANED - anaesthetic end                          *
.  *      V5.05.01  22/04/98 J.Tan        SRF  622811                         *
.  *                Added OPCNESIS - Using ESIS from W/L                      *
.  *      V5.04.01  20/05/1997  Steve Armstrong    WHL                        *
.  *                Added OPCNBELT.                                           *
.  *      V5.03.02  22/02/1996  Matt                                          *
.  *                Added OPCNLABL - Default Number of Booking Labels         *
.  *      V5.03.01  04/01/1996  Greg Horvat                                   *
.  *                Commented out the menu program, security key, IBA screen  *
.  *                password & data directory variables                       *
.  *                                                                          *
.  ****************************************************************************
.  *                                                                          *
.  *                    29/12/89 Mill Dew                                     *
.  *                    Maxium duration for session booking in minutes        *
.  *                    Flag to merge overlapping bookings by same clinics    *
.  *                    04/05/90 Paul Duncan                                  *
.  *                    Added OPCNMDUR (maximum duration)                     *
.  *                      "   OPCNTFLG (team flag)                            *
.  *                      "   OPCNMREC (send to medical records?)             *
.  *                      "   OPSCOPSU (Operating surgeon code)               *
.  *                      "   OPCNPROV (Using provitional items?)             *
.  *                    18/05/90  Bill Spew                                   *
.  *                    Add OPCNBPIU : Book patient in Usage.  This allows    *
.  *                    OPR32 to input operation details.                     *
.  *                    16/10/90 ROD                                          *
.  *                    Added heaps of new fields in Sector 42 from           *
.  *                    OPCNNPRV-OPCNSUMM & Sector 68 (All)                   *
.  *                    22/10/90 Glen Hobby                                   *
.  *                    Added OPCNXCHG (Charge codes for implants?)           *
.  *                          OPCNXAUT (Automatic charging for implants?)     *
.  *                    10/12/90 Graeme Williams                              *
.  *                    Removed the OPCNBDSF variable (sec 42, pos 42)        *
.  *                    02/01/91 Justin Coates                                *
.  *                    Added OPCNR53A and OPCNANST                           *
.  *                    02/01/91  ROD                                         *
.  *                    Added OPCNR59A (Session Stats. report format)         *
.  *                    03/01/91  Justin Coates                               *
.  *                    Added OPCNR58A, OPCNR60A                              *
.  *                    07/01/91  Justin Coates                               *
.  *                    Added OPCNR62A                                        *
.  *                    09/01/91  Peter Eddey                                 *
.  *                    Added OPCNR66A                                        *
.  *                    09/01/91  Justin Coates                               *
.  *                    Added OPCNR63A                                        *
.  *                    09/01/91  ROD                                         *
.  *                    Added OPCNR64A                                        *
.  *                    06/03/91  J.Tan     SRF 107987                        *
.  *                    Moved OPCNUUU6, OPCNUUM6 etc. to sector 42            *
.  *                    03/04/91  Justin Coates                               *
.  *                    Added OPCNPREC for Print Operation Records            *
.  *                    23/04/91  Justin Coates  Quote 6883                   *
.  *                    Added OPCNWLDS for Default OP desc from Wlist         *
.  *                    23/07/91  ROD   Quote 6995  SRF 109233                *
.  *                    Added OPCNUSAN,OPCNDSAN,OPCNPCOT                      *
.  *                    09/10/91  Justin Coates  (User Group Changes)         *
.  *                    Added OPCNASTD,OPCNPCOM,OPCNDFAD,OPCNCLSH,OPCNDSTR    *
.  *                    OPCNDEND,OPCNUSGE                                     *
.  *                    30/10/91  Justin Coates                               *
.  *                    Added OPCNCHMB                                        *
.  *                    19/11/91  J.Tan    SRF 111659                         *
.  *                    Added OPCNWKYR to include part weeks at start of year *
.  *                    24/12/1991   Justin Coates  (Modbury Changes)         *
.  *                    Added OPCNCBOK to OPCNMM75                            *
.  *                    24/02/1992   Justin Coates  SRF 113260                *
.  *                    Added OPCNDFCC                                        *
.  *                    13/03/92  ROD                                         *
.  *                    Added OPCNCMBD                                        *
.  *                    08/05/92  ROD                                         *
.  *                    Added OPCNASLN                                        *
.  *                    03/06/92  ROD                                         *
.  *                    Added OPCNPC64,OPCNPAMT                               *
.  *                    13/07/92  Steve O'Gorman SRF  115059                  *
.  *                    Added OPCNWLTM for Default OP time from Wlist         *
.  *                    17/08/92 J.Tan   SRF 116394                           *
.  *                    Added OPCNWLIT for default provisional item from Wlist*
.  *                    25/10/92 J.Tan   SRF 117585                           *
.  *                    Added OPCNBKBD                                        *
.  *                    13/01/93 J.Tan   SRF 119861                           *
.  *                    Mods the booking date audit description               *
.  *                    09/03/1993   Justin Coates (DUDLEY)                   *
.  *                    Added OPCNEALB                                        *
.  *                    07/06/1993  Glenn Berry      SRF 120247               *
.  *                    Added layout 5 to OPCNR62A                            *
.  *                    06/07/1993  Gabrielle        SRF 122899               *
.  *                    Added extra option to OPCNWLDS to default the W/L     *
.  *                    booking description.                                  *
.  *                22/11/1993  Glenn Berry      Hawkes Bay Changes           *
.  *                Added OPCNDLVE - Using Doctor Leave feature?              *
.  *                Added OPCNSPET - Using Special Equipment Tracking?        *
.  *                11/04/1994  Rob Leonard      Taranaki Mods (3.2.2)        *
.  *                Added OPCNANTH - Picking sheets by Surgeon/Anaesthetist   *
.  *                06/09/1994  Max White        Taranaki Mods                *
.  *                Added OPCNTREQ - Print Tray contents on Requisitions?     *
.  *                08/09/1994  Max White        Hawkes Bay Mods              *
.  *                Added OPCNAPRQ - Using Anaesthetist Preferences in        *
.  *                                 Theatre Requisitions?                    *
.  *                                                                          *
.  ****************************************************************************
.
.             SECTOR USED    :  40
.
. NAME    TYPE   LENGTH  START LOC.   DESCRIPTION
. ----    ----   ------  ----------   -----------
.....OPCNMENU  DIM       8        1        Main Menu
.....OPCNSECU  DIM       6        9        Security Code
.....OPCNDATA  DIM       20       15       Data Directory
.....OPCNPASS  DIM       8        35       Password for IBAOPR98
.
. ------- Audits  0=Off 1=On -------
.
OPCNAUDA  FORM      1        43       Audit 1    * opraveaf operation averages
OPCNAUDB  FORM      1        44       Audit 2    * oprdetaf operation bookings
OPCNAUDC  FORM      1        45       Audit 3
OPCNAUDD  FORM      1        46       Audit 4    * oprdetbf operation teams
OPCNAUDE  FORM      1        47       Audit 5    * oprdprbf doc. pref. details
OPCNAUDF  FORM      1        48       Audit 6    * oprdetcf operation usage
OPCNAUDG  FORM      1        49       Audit 7
OPCNAUDH  FORM      1        50       Audit 8    * oprdpraf doc. pref. header
OPCNAUDI  FORM      1        51       Audit 9
OPCNAUDJ  FORM      1        52       Audit 10
OPCNAUDK  FORM      1        53       Audit 11
OPCNAUDL  FORM      1        54       Audit 12
OPCNAUDM  FORM      1        55       Audit 13   * oprsemaf session masters
OPCNAUDN  FORM      1        56       Audit 14
OPCNAUDO  FORM      1        57       Audit 15
OPCNAUDP  FORM      1        58       Audit 16   * oprprfaf preferences
OPCNAUDQ  FORM      1        59       Audit 17   * oprreqaf requisitions
OPCNAUDR  FORM      1        60       Audit 18   * oproraaf theatre avail.
OPCNAUDS  FORM      1        61       Audit 19   * oprsesaf sessions file
OPCNAUDT  FORM      1        62       Audit 20   * opropraf operating room file
OPCNAUDU  FORM      1        63       Audit 21
OPCNAUDV  FORM      1        64       Audit 22
OPCNAUDW  FORM      1        65       Audit 23
OPCNAUDX  FORM      1        66       Audit 24
OPCNAUDY  FORM      1        67       Audit 25
OPCNAUDZ  FORM      1        68       Audit 26
.
OPCNEMER  DIM       3        69       Emergency Operation Type (OY)
OPCNBKBD  FORM      1        72       Using Booking date audit (Y/N)
.                                          0 = No
.                                          1 = Yes
.
.*Spare*  DIM       8        73       *** Spare Variable ***
.
OPCNODSC  DIM       15       81       Operating Room/Theatre Description
OPCNCDSC  DIM       15       96       Clinic/Surgeon Description
OPCNCLSU  FORM      1        111      Using Clinic or Surgeon ?
.                                          0 = Clinic
.                                          1 = Surgeon
OPCNCODE  FORM      1        112      Using MBS or ICD9-CM Codes
.                                          0 = ICD9-CM
.                                          1 = MBS
OPCNRUSI  FORM      1        113      Using RUS Interface ?
.                                          0 = No
.                                          1 = Yes
OPCNSESS  FORM      1        114      Using Session Coordinator ?
.                                          0 = No
.                                          1 = Yes
OPCNNOOP  FORM      1        115      Using "No of Operations" ?
.                                          0 = No
.                                          1 = Yes
OPCNBOOK  FORM      1        116      Allow Double bookings of Sessions ?
.                                          0 = No
.                                          1 = Yes
OPCNMAXB  FORM      2        117      Maximum Bookings / Session
OPCNNREQ  FORM      12       119      Next Requisition Number
OPCNNREC  FORM      12       131      Next Record Number
.
OPCNBRKA  DIM       5        143      Summary Breakdown A (HH:MM)
OPCNBRKB  DIM       5        148      Summary Breakdown B (HH:MM)
OPCNBRKC  DIM       5        153      Summary Breakdown C (HH:MM)
OPCNBRKD  DIM       5        158      Summary Breakdown D (HH:MM)
OPCNBRKE  DIM       5        163      Summary Breakdown E (HH:MM)
OPCNBRKF  DIM       5        168      Summary Breakdown F (HH:MM)
OPCNBRKG  DIM       5        173      Summary Breakdown G (HH:MM)
OPCNBRKH  DIM       5        178      Summary Breakdown H (HH:MM)
OPCNBRKI  DIM       5        183      Summary Breakdown I (HH:MM)
OPCNBRKJ  DIM       5        188      Summary Breakdown J (HH:MM)
OPCNBRKK  DIM       5        193      Summary Breakdown K (HH:MM)
OPCNBRKL  DIM       5        198      Summary Breakdown L (HH:MM)
.
. *************************************************************
. *           U S E R   D E F I N E D   F I E L D S           *
. *                  Values :  0=No   1=Yes                   *
. *************************************************************
.
. ------- Operating Room File (opropraf) -------
.
OPCNUOU1  FORM      1        203      Using Operating Room Field 1 ?
OPCNUOM1  FORM      1        204      Mandatory ?
OPCNUOU2  FORM      1        205      Using Operating Room Field 2 ?
OPCNUOM2  FORM      1        206      Mandatory ?
OPCNUOU3  FORM      1        207      Using Operating Room Field 3 ?
OPCNUOM3  FORM      1        208      Mandatory ?
OPCNUOU4  FORM      1        209      Using Operating Room Field 4 ?
OPCNUOM4  FORM      1        210      Mandatory ?
OPCNUOU5  FORM      1        211      Using Operating Room Field 5 ?
OPCNUOM5  FORM      1        212      Mandatory ?
.
. ------- Nurse File (oprnuraf) -------
.
OPCNUNU1  FORM      1        213      Using Nurse Field 1 ?
OPCNUNM1  FORM      1        214      Mandatory ?
OPCNUNU2  FORM      1        215      Using Nurse Field 2 ?
OPCNUNM2  FORM      1        216      Mandatory ?
OPCNUNU3  FORM      1        217      Using Nurse Field 3 ?
OPCNUNM3  FORM      1        218      Mandatory ?
OPCNUNU4  FORM      1        219      Using Nurse Field 4 ?
OPCNUNM4  FORM      1        220      Mandatory ?
OPCNUNU5  FORM      1        221      Using Nurse Field 5 ?
OPCNUNM5  FORM      1        222      Mandatory ?
.
. ------- Operation Detail File (oprdetaf) -------
.
OPCNUDU1  FORM      1        223      Using Operation Detail Field 1 ?
OPCNUDM1  FORM      1        224      Mandatory ?
OPCNUDU2  FORM      1        225      Using Operation Detail Field 2 ?
OPCNUDM2  FORM      1        226      Mandatory ?
OPCNUDU3  FORM      1        227      Using Operation Detail Field 3 ?
OPCNUDM3  FORM      1        228      Mandatory ?
OPCNUDU4  FORM      1        229      Using Operation Detail Field 4 ?
OPCNUDM4  FORM      1        230      Mandatory ?
.
. ------- Operating Team File (oprdetbf) -------
.
OPCNUTU1  FORM      1        231      Using Operating Team Field 1 ?
OPCNUTM1  FORM      1        232      Mandatory ?
OPCNUTU2  FORM      1        233      Using Operating Team Field 2 ?
OPCNUTM2  FORM      1        234      Mandatory ?
OPCNUTU3  FORM      1        235      Using Operating Team Field 3 ?
OPCNUTM3  FORM      1        236      Mandatory ?
OPCNUTU4  FORM      1        237      Using Operating Team Field 4 ?
OPCNUTM4  FORM      1        238      Mandatory ?
.
. ------- Operation Usage File (oprdetcf) -------
.
OPCNUUU1  FORM      1        239      Using Operation Usage Field 1 ?
OPCNUUM1  FORM      1        240      Mandatory ?
OPCNUUU2  FORM      1        241      Using Operation Usage Field 2 ?
OPCNUUM2  FORM      1        242      Mandatory ?
OPCNUUU3  FORM      1        243      Using Operation Usage Field 3 ?
OPCNUUM3  FORM      1        244      Mandatory ?
OPCNUUU4  FORM      1        245      Using Operation Usage Field 4 ?
OPCNUUM4  FORM      1        246      Mandatory ?
OPCNUUU5  FORM      1        247      Using Operation Usage Field 5 ?
OPCNUUM5  FORM      1        248      Mandatory ?
.
. End of Record              250
.******************************************************************************
.
.             SECTOR USED    :  42
.
. NAME    TYPE   LENGTH  START LOC.   DESCRIPTION
. ----    ----   ------  ----------   -----------
OPCNMDUR  FORM      4        1        Maximum DURation a Clinic can be booked
OPCNMERG  FORM      1        5        Merge the same clinic session records
.                                       if double booked.
OPCNTFLG  FORM      1        6        Team flag.
.                                       0 = input teams in IBAOPR31
.                                       1 = don't input teams in IBAOPR31
OPCNMREC  FORM      1        7        Send details to medical records?
.                                       0 = yes, 1 = no
OPCNOPSU  DIM       3        8        Operating surgeon code
.                                     used in opr31,33 as operating surg default
.
OPCNPROV  FORM      1        11       Using provisional items
.                                       0 = no , 1 = yes
OPCNBPIU  FORM      1        12       Book patients in OPR32 usage
.                                       0 = no , 1 = yes
OPCNNCOP  FORM      3        13       No. of copies
.
OPCNNPRV  FORM      1        16       No. of provisional items being used (0-3)
OPCNUDSC  FORM      1        17       Using operation desc. (Y/N)
OPCNIDFL  FORM      1        18       Operation desc default to item desc (Y/N)
OPCNFOTM  FORM      1        19       From time for operation duration (1-3)
OPCNTOTM  FORM      1        20       To time for operation duration (2-4)
..OPCNFTYP  DIM       1        21       Using pre-op or operation time for
.                                     start O/R duration (P or O)
..OPCNFTTM  FORM      1        22       From time for operation duration(1-5)
..OPCNTTYP  DIM       1        23       Using post-op or operation time for
.                                     end O/R duration (P or O)
..OPCNTTTM  FORM      1        24       To time for operating room duration(1-4)
OPCNANAE  DIM       3        25       Operaing personnal code for
.                                     anaesthetist (Cat OP)
OPCNFULL  FORM      3        28       Session "Full" percentage
OPCNSUMM  FORM      1        31       Display op codes/desc in new booking prgm
.                                        0 = Display codes/desc
.                                        1 = Display summary only
OPCNUNIQ  FORM      10       32       Next Unique Id. no.
OPCNBDSF  FORM      1        42       How many lines of Oper. Desc. to display
. OPCNBDSF is no longer used....         0 = Display only one line
.                                        1 = Display all of them
OPCNXCHG  FORM      1        43       Charge codes for implants
OPCNXAUT  FORM      1        44       Automatic charging for implants
OPCNR53A  FORM      2        45       Report Format for IBAOPR53
.                                        1 = layout 1
.                                        2 = layout 2
OPCNANST  FORM      1        47       Which pre-op time is anaesthetic start 
OPCNR59A  FORM      2        48       Report Format for IBAOPR59
.                                        1 = layout 1
.                                        2 = layout 2
OPCNR58A  FORM      2        50       Report Format for IBAOPR58
.                                        1 = layout 1
OPCNR60A  FORM      2        52       Report Format for IBAOPR60
.                                        1 = layout 1
.                                        2 = layout 2
OPCNR62A  FORM      2        54       Report Format for IBAOPR62
.                                        1 = layout 1
.                                        2 = layout 2
.                                        3 = layout 3
.                                        4 = layout 4
.                                        5 = layout 5
OPCNR66A  FORM      2        56        Report Format for IBAOPR66      
.                                        1 = layout 1
.                                        2 = layout 2
.                                        3 = layout 3
.                                        4 = layout 4
.                                        5 = layout 5
.                                        6 = layout 6
.                                        7 = layout 7
.                                        8 = layout 8     * Healthscope
.                                        9 = layout 9     * Healthscope
OPCNR63A  FORM      2        58       Report Format for IBAOPR63
.                                        1 = layout 1
.                                        2 = layout 2
.                                        3 = layout 3
.                                        4 = layout 4
OPCNR64A  FORM      2        60        Report Format for IBAOPR64
.                                        1 = layout 1
OPCNUUU6  FORM      1        62       Using Operation Usage Field 6 ?
OPCNUUM6  FORM      1        63       Mandatory ?
OPCNUUU7  FORM      1        64       Using Operation Usage Field 7 ?
OPCNUUM7  FORM      1        65       Mandatory ?
OPCNUUU8  FORM      1        66       Using Operation Usage Field 8 ?
OPCNUUM8  FORM      1        67       Mandatory ?
OPCNPREC  FORM      2        68       Print Operation Records format ?
.                                       0 = Wellington
.                                       1 = Southland
OPCNWLDS  FORM      1        70       Description default from W/L desc ?
.                                       0 = No
.                                       1 = Operation Desc.
.                                       2 = Booking Diagnosis Desc.
.                                       3 = Operation & Booking Desc.
OPCNUSAN  FORM      1        71       Using second anaesthetist ?
.                                       0 = No, 1 = Yes
OPCNDSAN  DIM       15       72       Description for 2nd anaesthetist
OPCNPCOT  DIM       3        87       Personnal code for teams
.
. user group changes
.
OPCNASTD  FORM      1        90       Update session start time and duration if
.                                     first case time is changed
.                                       0 = No, 1 = Yes
OPCNPCOM  FORM      1        91       Using Patient Comments when booking ?
.                                       0 = No, 1 = Yes
OPCNDFAD  FORM      1        92       Defaulting Attending doctor if not entered
.                                       0 = No, 1 = Yes
OPCNCLSH  FORM      1        93       Reallocation for Session Overlaps?    
.                                       0 = Do Not Re-Allocate
.                                       1 = Always Re-Allocate
.                                       2 = Query Re-Allocate
..OPCNDSTR  DIM       3        94     Code for default session actual start time
..OPCNDEND  DIM       3        97     Code for default session actual end time
OPCNUSGE  FORM      1        100      Input usage for Non-inpatients ?
.                                       0 = No, 1 = Yes
OPCNSGCL  FORM      1        101      Default Admission type to suggested class.
.                                     of the provisional item
.                                       0 = No, 1 = Yes
OPCNCHMB  FORM      1        102      Bill for MBS items ??
.                                       0 = No, 1 = Yes
OPCNWKYR  FORM      1        103      Include partial weeks at start of year
.                                       0 = No, 1 = Yes
.
OPCNCBOK  FORM      1        104      Cancellations to appear in IBAOPR22 ?
.                                      0 = No , 1 = Yes
OPCNR74A  FORM      2        105      Report Format for IBAOPR74
.                                        1 = layout 1
OPCNOTSU  FORM      2        107      Which user defined field in OPROTSFD
.                                        OPDCUSR1-8,OPDAUSR1-4 (1-12) 0=blank
OPCNCTSU  FORM      2        109      Which user defined field in OPRCTSFD
.                                        OPDCUSR1-8,OPDAUSR1-4 (1-12) 0=blank
OPCNR65A  FORM      2        111      Report Format for IBAOPR65
.                                        1 = layout 1
.                                        2 = layout 2
OPCNMM65  FORM      1        113      Change descs to major/minor in OPR65 ?
.                                      0 = No , 1 = Yes
OPCNR75A  FORM      2        114      Report Format for IBAOPR75
.                                        1 = layout 1
.                                        2 = layout 2
OPCNMM75  FORM      1        116      Change descs to major/minor in OPR75 ?
.                                      0 = No , 1 = Yes
OPCNDFCC  FORM      1        117      Count Correct default
.                                      0 = No , 1 = Yes
OPCNCMBD  FORM      1        118      Copy MBS item/descs to Booking Diagnosis?
.                                      0 = No , 1 = Yes
OPCNASLN  FORM      1        119      Update session start time and end time if
.                                     first case time is changed
.                                       0 = No, 1 = Yes
OPCNPC64  FORM      1        120      Print cancelled sessions in OPR64 ?
.                                      0 = No , 1 = Yes
OPCNPAMT  FORM      1        121      Post Anaesthetic for Multiple Teams OPR57?
.                                      0 = No , 1 = Yes
OPCNWLTM  FORM      1        122      Operation Time default to W/L Time ?
.                                       0 = No, 1 = Yes
OPCNWLIT  FORM      1        123      Provisional item default to W/L procedure?
.                                      0 = No, 1 = Yes
OPCNEALB  FORM      1        124      Enquire on all bookings in OPR22
.                                       0 = No, 1 = Yes
OPCNDLVE  FORM      1        125      Using Doctor Leave feature?
.                                       0 = No, 1 = Yes
OPCNSPET  FORM      1        126      Using Special Equipment Tracking?
.                                       0 = No, 1 = Yes
OPCNANTH  FORM      1        127      Picking Sheets by Anaesthetist as well
.                                     as Surgeon
.                                       0 = No, 1 = Yes
OPCNTREQ  FORM      1        128      Print Tray contents on Requisitions?
.                                       0 = No, 1 = Yes
OPCNAPRQ  FORM      1        129      Using Anaesthetist Preferences in   
.                                     Theatre Requisitions
.                                       0 = No, 1 = Yes
OPCNLABL  FORM      2        130      Default Number of Booking Labels
.                                       0 = Not using booking labels
.
OPCNANED  FORM      1        132      Which pre-op time is anaesthetic end
OPCNMIND  FORM      5        133      Minutes delayed
OPCNPODY  FORM      2        138      No of pre-op days allowed
.
OPCNPTUP  DIM       40       140      Unix Path for theatre upload file
OPCNFTUP  DIM       15       180      File name for theatre upload
OPCNBRUP  DIM       40       195      Window directory for theatre upload file
.
OPCNFTIM  FORM      2        235      New Operation start time
OPCNTTIM  FORM      2        237      New Operation end time
.
OPCNZMIS  FORM      1        239      Post zero value Misc.Items OPR43 *I-90301
.                                       0 = No, 1 = Yes                *I-90301
OPCNDORD  FORM      1        240      Booking list diagnosis display order
.                                       0 = BKDIDES2 then BKDIDES1
.                                       1 = BKDIDES1 then BKDIDES2
OPCNSCOM  FORM      1        241      Using Session Based Comments? 0=No 1=Yes
OPCNWHCD  DIM       5        242      Warehouse code for Theatre Purchase Orders
OPCNOP66  DIM       1        247      Ward/Bed Indicator for IBAOPR66
OPCNCRFL  DIM       1        248      Check for referral (pmsrflaf)
.                                     0=Not in use 1=Error 2=Warn
OPCNTPAT  DIM       1        249      Highlight today patients on theatre list
.                                     0 = No 1 = Yes
.
. End of Record              250
.******************************************************************************
.
.             SECTOR USED    :  68
.
. NAME    TYPE   LENGTH  START LOC.   DESCRIPTION
. ----    ----   ------  ----------   -----------
OPCNDPR1  DIM       18        1       Description for pre-op time 1
OPCNDPR2  DIM       18       19       Description for pre-op time 2
OPCNDPR3  DIM       18       37       Description for pre-op time 3
OPCNDPR4  DIM       18       55       Description for pre-op time 4
OPCNDPR5  DIM       18       73       Description for pre-op time 5
OPCNDOP1  DIM       18       91       Description for operation time 1
OPCNDOP2  DIM       18      109       Description for operation time 2
OPCNDOP3  DIM       18      127       Description for operation time 3
OPCNDOP4  DIM       18      145       Description for operation time 4
OPCNDPS1  DIM       18      163       Description for post-op time 1
OPCNDPS2  DIM       18      181       Description for post-op time 2
OPCNDPS3  DIM       18      199       Description for post-op time 3
OPCNDPS4  DIM       18      217       Description for post-op time 4
OPCNBELT  FORM       1      235       Using Eltron printer for booking labels
.                                          0 = No
.                                          1 = Yes
OPCNESIS  FORM       1      236       Default desc.Using ESIS code from W/L
.                                          0 = No
.                                          1 = Yes
OPCNPHDB  FORM       1      237       Display home phone or date of birth
.                                     in IBAOPR43
.                                          0 = Home Phone
.                                          1 = Date of Birth
OPCNARDA  FORM      1       238        Using ARD  Audit (oprardaf)
.                                      1 = Yes
.                                      0 = No
OPCNDGUB  FORM      1       239        Write Pre-Admission Oper. Booking to DG
OPCNDGCB  FORM      1       240        Write Cancel Oper. Booking to Datatgate.
OPCNSTCT  DIM       3       241        Staff Category for Operating Surgeon
OPCNCPOD  FORM      1       244        Copy Full Desc from booking to surgery
.                                          0 = No
.                                          1 = Yes
OPCNDSAS  DIM       2       245       Code for default session actual start time
OPCNDSAE  DIM       2       247       Code for default session actual end time
OPCNSEMP  DIM       1       249       Surgery End mandatory prior to next 
.                                     surgery start  1=Yes
.
. End of Record             250
.******************************************************************************
.
.             SECTOR USED    :  113
.
. NAME    TYPE   LENGTH  START LOC.   DESCRIPTION
. ----    ----   ------  ----------   -----------
OPCNH7BK  DIM       1         1       Send A05 for Theatre Booking
.                                         0 = No
.                                         1 = Yes
OPCNFDUR  DIM       1         2       Using Free Format Duration
.                                     0=No 1=Yes 
OPCNCOMB  DIM       1         3       Using Combined CBMS & Misc changes
.                                     0=No 1=Yes
OPCNPLIN  DIM       1         4       Don't print a blank line at the start of 
.                                     theatre forms (& cancer reg) 0=No 1=Yes
OPCNS12A  DIM       1         5       Sending HL7 S12 messages ?
.                                     0=No 1=Yes
OPCNS14A  DIM       1         6       Sending HL7 S14 messages ?
.                                     0=No 1=Yes
OPCNS15A  DIM       1         7       Sending HL7 S15 messages ?
.                                     0=No 1=Yes
OPCNDOVR  DIM       2         8       Delay/Overtime allowance amount (+- mins)
OPCNICOM  DIM       1         10      Use Implants Codes on Combined CBMS & Misc
.                                     changes Input within Theatre 0=No 1=Yes
OPCNSMFT  DIM       2         11      From time for Surgical Minutes (IBAOPR79)
OPCNSMTT  DIM       2         13      To time for Surgical Minutes (IBAOPR79)
.
OPCNURAD  DIM       1         15      Using Recovery Anaesthetic Details
.
OPCNVRRD  DIM       2         17      Variance in time for Theatre Recovery ready to depart
OPCNUTRN  DIM       10        19      Unique Theatre Request Number
OPCNTRCS  DIM       2         29      Theatre time for Request Clock Stop
OPCNUTRA  DIM       1         31      Using Theatre Requests Approval
OPCNCTIN  DIM       1         32      Collecting Timeout Information 
OPCNCOSO  DIM       1         33      Collecting OT Sign Out Information
OPCNCRRH  DIM       1         34      Collecting Recovery Room Handover
OPCNLDAE  DIM       3         35      Long Delay trigger Anaesthetic Event
OPCNCRRM  DIM       3         38      Clinical Review Required Minutes
OPCNOPAV  DIM       1         41      Using Theatre Banding for Op.Averages
OPCNP1ST  DIM       3         42      % Op Time of 1st Highest Banded item
OPCNP2ND  DIM       3         45      % Op Time of 2nd Highest Banded item
OPCNSIVB  DIM       1         48      Search Implant via Barcode (0=No/1=yes)
OPCNVPIN  DIM       1         49      Verify Prosthetics Input   (0=No/1=yes)
OPCNCONS  DIM       1         50      Enable use of consumption type in theatre                                       and billing  (0=No 1=Yes)
OPCNURSE  DIM       1         51      Use oprnuraf or pmshcpaf for Theatre Nurse
.                                     0=oprnuraf, 1=pmshcpaf     
OPCNDMBS  DIM       1         52      Displaying All MBS on Input Charges screen
.                                     0=Yes (Default)
.                                     1=Only for the selected Unique ID
OPCNTOPA  DIM       2         53      Variance in time for Time Out Performed 
.                                     to Anaesthetic Commenced (Cat ol)
OPCNACSS  DIM       2         55      Variance in time for Time Out Performed 
.                                     to Anaesthetic Commenced (Cat ol)
OPCNSETR  DIM       2         57      Variance in time for Surgery End to Time 
.                                     in Recovery - Day (Cat Ou) 
OPCNPACU  DIM       1         59      User Defined Time Field for Ready for PACU
.                                     1 = OPART06 - User Defined Time Field 6
.                                     2 = OPART07 - User Defined Time Field 7
.                                     3 = OPART08 - User Defined Time Field 8
.                                     4 = OPART09 - User Defined Time Field 9
.                                     5 = OPART10 - User Defined Time Field 10
OPCNAIPS  DIM       1         60      Send AIP Segment for Anaesthetist in
.                                     S12, S14 and S15
.                                     Blank or 0 = No
.                                     1 = Yes
OPCNAILS  DIM       1         61      Send AIL Segment with Session Start/End 
.                                     Date/Time, Session Period and Case Number 
.                                     in S12, S14 and S15
.                                     Blank or 0 = No
.                                     1 = Yes
OPCNDTSV  DIM       1         62      Display Theatre Bookings in Visits Lists
.                                     0=No,1=Yes
OPCNZSC6  DIM       1         63      Write inbound ZSC.6 to oprardaf.oparanas 
.                                     0=No,1=Yes
OPCNTTDC  DIM       2         64      Theatre time for Discharge check
OPCNPTMC  DIM       1         66      Use Misc.Charge or Theatre Item
.                                     1=(ticked)- Misc.Charge(patmchgf/nzpmchgf)
.                                     0=(unticked)- Theatre Item (opriteaf)
OPCNTHED  DIM       1         67      Display Theatre Status in Patient Header
.                                     0=No, 1=Yes
. End of record               68
