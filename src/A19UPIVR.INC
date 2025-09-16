.*****************************************************************************
.*                           A19UPIVR.INC                                    *
.*               UPI variables for interface to NSLHD                        *
.*****************************************************************************
.* Mods      :                                                               *
.*****************************************************************************
.*        V10.13.02 13/03/2019  Steve Armstrong  TSK 0871671                 *
.*                  Added ELEMENT                                            *
.*        V10.13.01 28/08/2018  Davin            TSK 0857732                 *
.*                  Added field 25 to patient datarray (MAXPFLDS = 25)       *
.*                  Added NK1 fields and tempfile NOK1TMP1 for next-of-kin   *
.*****************************************************************************
.*        V10.12.05 17/05/2018  Davin            TSK 0856298                 *
.*                  Changed wording of RECVCAPT and TIMECAP2 for logging     *
.*        V10.12.04 01/05/2018  Davin            TSK 0844685                 *
.*                  Added 8 fields to patient datarray (MAXPFLDS = 24)       *
.*        V10.12.03 20/04/2018  Davin            TSK 0844685                 *
.*                  Added field for NSLHD PersonID (HL7NSPID)                *
.*                  Added medicare number search parameter (HL7PTMED)        *
.*        V10.12.02 18/04/2018  Davin            TSK 0844685                 *
.*                  Added fields for alias tempfile (for PID.9) and PID.33   *
.*        V10.12.01 09/03/2018  Davin            TSK 0844685                 *
.*                  Added variables for A19 continuation pointer (DSC00101)  *
.*****************************************************************************
.
COMSOCKT  SOCKET    ASCII,FIXED=1      * Socket on which to communicate
.
. DATA VARIABLES
. ---------------
A19ARRAY  DIM       1[3]          * ARD^A19 mandatory segment array
.                                      element 1 = MSH
.                                      element 2 = MSA
.                                      element 3 = QRD
A19SERVR  DIM       20
A19SOCKT  DIM       20
.
ALTERDSC  DIM       50            * error description for email alert
.
CDDRCTRY  DIM       80
.
CMDLINE   DIM       300
COMPCNT   FORM      2             * component count for a field
COMPFLAG  FORM      1             * Component Flag
.                                         0 = Component character not set
.                                         1 = Component character set
COMSEPAR  DIM       1             * component separator variable
COUNTER   FORM      3
COUNTR    FORM      2
CURRDATE  DIM       8
.
DIM14     DIM       14
DIM500    DIM       500
DISPFLAG  FORM      1             * display to screen flag
.                                     0 = don't display messages to screen
.                                     1 = display messages to screen (debug)
DPATHVAR  DIM       100
DSC00101  DIM       500
.
ELEMENT   FORM      1
ERORNUMB  FORM      3             * HL7 error number for MSH segment
.
LODECAPT  INIT      " segment loaded"
LODSCAPT  INIT      "Loading segment: "
.
LOOPCNT1  FORM      3             * Loop counter 1
LOOPCNT2  FORM      3             * Loop counter 2
.
.
. Patient Data...
MAXPRECS  EQU       100           * Max patient records per transaction
MAXPFLDS  EQU       25            * Max patient fields; returned from LHD search
.                                    1 - Title
.                                    2 - Surname
.                                    3 - First Given Name
.                                    4 - Second Given Name
.                                    5 - Gender
.                                    6 - Date of Birth
.                                    7 - Address Line 1     ( Street Address 1 )
.                                    8 - Address Line 2     ( Street Address 2 )
.                                    9 - Address Line 3     ( Suburb )
.                                   10 - Address Line 4     ( State )
.                                   11 - Address Line 5     ( Postcode )
.                                   12 - NSLHD PersonID
.                                   13 - Medicare No.
.                                   14 - U/R Number
.                                   15 - UPI                ( max 10 chars )
.                                   16 - Date Last Updated
.                                   17 - Home Phone
.                                   18 - Mobile Phone
.                                   19 - Work Phone
.                                   20 - Country of Birth       (Cat C thcscod)
.                                   21 - Preferred Language     (Cat LA thcscod)
.                                   22 - Interpreter Required   (Y/N)
.                                   23 - Race / Aboriginality   (Cat VA thcscod)
.                                   24 - Medicare Valid To Date (ccyymmdd)
.                                   25 - Resident Status        (Cat T tcindc1)
.                                   xx - Marital Status         (PID.16)
.                                   xx - Email Address          (PID.13) ???
.                                   xx - Religion               (PID.17) ???
.
DATARRAY  DIM       200[MAXPRECS][MAXPFLDS]      * Data Array (search results)
DATARCNT  FORM      3                            * Data Array Record Count 
.                                                   (Number of records returned)
.
.
. Temporary File Definition (Patient Aliases)
. -------------------------------------------
.
ALIATMP1  IFILE SQL, FIXED=154, KEY="U1-20,21-30,31-33"
.
.NAME     TYPE    LENGTH     PHYSICAL     START     DESCRIPTION
.----     ----    ------     --------     -----     -----------
ALIAMSID  DIM         20           20         1     Message ID
ALIAUPIN  DIM         10           10        21     UPI Number
ALIACNTR  DIM          3            3        31     Counter
ALIASURN  DIM         40           40        34     Surname
ALIAFNME  DIM         40           40        74     First Given Name
ALIASNME  DIM         40           40       114     Second Given Name
.
.End of Record                              154
.
ALIATFNM  DIM       8             * Temporary File name (Aliases)
UKEYA     INIT      " 154 UC1-20,21-30,31-33"
.
.
. Temporary File Definition (Patient Next-Of-Kin)
. -------------------------------------------
.
NOK1TMP1  IFILE SQL, FIXED=359, KEY="U1-10,11-13"
.
.NAME     TYPE    LENGTH     PHYSICAL     START     DESCRIPTION
.----     ----    ------     --------     -----     -----------
NOK1UPIN  DIM         10           10         1     UPI Number
NOK1CNTR  DIM          3            3        11     Counter
NOK1SURN  DIM         40           40        14     Surname
NOK1FNME  DIM         40           40        54     First Given Name
NOK1SNME  DIM         40           40        94     Second Given Name
NOK1TITL  DIM          4            4       134     Title
NOK1RELP  DIM         10           10       138     Relationship
NOK1ADD1  DIM         35           35       148     Address Line 1
NOK1ADD2  DIM         35           35       183     Address Line 2
NOK1ADD3  DIM         35           35       218     Address Line 3
NOK1ADD4  DIM         35           35       253     Address Line 4
NOK1POST  DIM          8            8       288     Post Code
NOK1TELP  DIM         20           20       296     Telephone Private
NOK1TELM  DIM         20           20       316     Telephone Mobile
NOK1TELB  DIM         20           20       336     Telephone Business
NOK1TYPE  DIM          3            3       356     Type of Contact (Cat tc)
.
.End of Record                              359
.
NOK1TFNM  DIM       8             * Temporary File name (Next-Of-Kin)
UKEYB     INIT      " 359 UC1-10,11-13"
.
.
DATETIME  DIM       14
DIM2C     DIM       2             * century variable (cc)
DIM2Y     DIM       2             * year variable    (yy)
DIM2M     DIM       2             * month variable   (mm)
DIM2D     DIM       2             * day variable     (dd)
DIM2H     DIM       2             * hour variable    (hh)
DIM2N     DIM       2             * minute variable  (mm)
DIM2S     DIM       2             * second variable  (ss)
ERORFLAG  FORM      1             * error flag
.                                     0 = no errors occured
.                                     1 = errors occured with AA
ERRORDSC  DIM       70            * error description for acknowledgement
ERRORCNT  FORM      4             * error count
ERRORNUM  FORM      3             * HL7 error number
ERORLINE  DIM       80            * save variable for 1st error description
ERORTEXT  DIM       50
ERRMESSG  DIM       50
ERRNUMBR  FORM      2             * error number
ESCSEPAR  DIM       1             * escape character
.
FIELDNO   FORM      3             * segment field counter for ACK message
FPPOSITN  FORM      4
FULLPATH  DIM       100
.
HL7PTDOB  DIM       8
HL7PTMED  DIM       12
HL7CONTP  DIM       180
HL7FGNAM  DIM       40
HL7GENDR  DIM       1
HL7SGNAM  DIM       40
HL7SMODE  FORM      1             * HL7 mode
.                                   0 = Initial search
.                                   1 = Continuation search
.                                   2 = Retrieve Patient using UPI
.                                   3 = Test Connection Only
HL7SURNM  DIM       40
HL7UPIVL  DIM       10            * UPI Value (used by Retrieve Patient)
HL7NSPID  DIM       30            * NSLHD PersonID (used by Retrieve Patient)
HOURTM    DIM       2
.
.>>>>>MAXCOLS   EQU       ??
HL7MXREC  DIM       3    *>>>>> Check with Don
.>>>>>MAXROWS   EQU       ??
MESSAGID  DIM       20
MESSTYPE  DIM       3
MINTIME   DIM       2
.
ERR001    DIM       80
.
LASTPOSN  FORM      4
LLPOSITN  FORM      4
.
MSA001    DIM       2
MSA002    DIM       20
MSA003    DIM       80
MSA004    DIM       15
MSA005    DIM       1
MSA006    DIM       100
.
MSH001    DIM       1
MSH002    DIM       4
MSH003    DIM       30
MSH004    DIM       30
MSH005    DIM       30
MSH006    DIM       30
MSH007    DIM       14
MSH008    DIM       1
MSH009    DIM       15
MSH010    DIM       20
MSH011    DIM       1
MSH012    DIM       5
MSH013    DIM       1
MSH014    DIM       180
MSH015    DIM       1
MSH016    DIM       1
MSH017    DIM       3
MSH018    DIM       1
MSH019    DIM       13
MSH00101  DIM       500           * MSH Component variables
MSH00201  DIM       500
MSH00301  DIM       500
MSH00302  DIM       500
MSH00303  DIM       500
MSH00401  DIM       500
MSH00402  DIM       500
MSH00403  DIM       500
MSH00501  DIM       500
MSH00502  DIM       500
MSH00503  DIM       500
MSH00601  DIM       500
MSH00602  DIM       500
MSH00603  DIM       500
MSH00701  DIM       500
MSH00801  DIM       500
MSH00901  DIM       3
MSH00902  DIM       3
MSH00903  DIM       7
MSH01001  DIM       500
MSH01101  DIM       500
MSH01102  DIM       500
MSH01201  DIM       500
MSH01202  DIM       500
MSH01203  DIM       500
MSH01301  DIM       500
MSH01401  DIM       500
MSH01501  DIM       500
MSH01601  DIM       500
MSH01701  DIM       500
MSH01801  DIM       500
MSH01901  DIM       500
MSH01902  DIM       500
MSH01903  DIM       500
MSH01904  DIM       500
MSH01905  DIM       500
MSH01906  DIM       500
MSH02001  DIM       500
MSH02101  DIM       100   * Note:  MSH fields from here on are only valid for
.                                  HL7 2.4
.
MLOGFLAG  FORM      1             * message log flag
.                                    0 = logging sent message
.                                    1 = logging received acknowledgement header
.                                    2 = logging received acknowledgement errors
.                                    3 = logging received acknowledgement messg.
.                                    4 = connection to socket
.
MTCHFLAG  FORM      1             * match flag for message id
.                                     0 = match
.                                     1 = no match
NEWSTRNG  DIM       4000
.
NK100101  DIM       500
NK100201  DIM       500
NK100202  DIM       500
NK100203  DIM       500
NK100204  DIM       500
NK100205  DIM       500
NK100206  DIM       500
NK100207  DIM       500
NK100208  DIM       500
NK100301  DIM       500
NK100302  DIM       500
NK100303  DIM       500
NK100304  DIM       500
NK100305  DIM       500
NK100306  DIM       500
NK100401  DIM       500
NK100402  DIM       500
NK100403  DIM       500
NK100404  DIM       500
NK100405  DIM       500
NK100406  DIM       500
NK100407  DIM       500
NK100408  DIM       500
NK100409  DIM       500
NK100410  DIM       500
NK100411  DIM       500
NK100501  DIM       500[2]
NK100502  DIM       500[2]
NK100503  DIM       500[2]
NK100504  DIM       500[2]
NK100505  DIM       500[2]
NK100506  DIM       500[2]
NK100507  DIM       500[2]
NK100508  DIM       500[2]
NK100509  DIM       500[2]
NK100601  DIM       500[2]
NK100602  DIM       500[2]
NK100603  DIM       500[2]
NK100604  DIM       500[2]
NK100605  DIM       500[2]
NK100606  DIM       500[2]
NK100607  DIM       500[2]
NK100608  DIM       500[2]
NK100609  DIM       500[2]
NK100701  DIM       500
NK100702  DIM       500
NK100703  DIM       500
NK100704  DIM       500
NK100705  DIM       500
NK100706  DIM       500
NK100801  DIM       500
NK100901  DIM       500
NK101001  DIM       500
NK101101  DIM       500
NK101102  DIM       500
NK101201  DIM       500
NK101202  DIM       500
NK101203  DIM       500
NK101204  DIM       500
NK101205  DIM       500
NK101206  DIM       500
NK101301  DIM       500
NK101302  DIM       500
NK101303  DIM       500
NK101304  DIM       500
NK101305  DIM       500
NK101306  DIM       500
NK101307  DIM       500
NK101308  DIM       500
NK101309  DIM       500
NK101401  DIM       500
NK101402  DIM       500
NK101403  DIM       500
NK101404  DIM       500
NK101405  DIM       500
NK101406  DIM       500
NK101501  DIM       500
NK101601  DIM       500
NK101701  DIM       500
NK101801  DIM       500
NK101901  DIM       500
NK101902  DIM       500
NK101903  DIM       500
NK101904  DIM       500
NK101905  DIM       500
NK101906  DIM       500
NK102001  DIM       500
NK102002  DIM       500
NK102003  DIM       500
NK102004  DIM       500
NK102005  DIM       500
NK102006  DIM       500
NK102101  DIM       500
NK102201  DIM       500
NK102202  DIM       500
NK102203  DIM       500
NK102204  DIM       500
NK102205  DIM       500
NK102206  DIM       500
NK102301  DIM       500
NK102401  DIM       500
NK102501  DIM       500
NK102502  DIM       500
NK102503  DIM       500
NK102504  DIM       500
NK102505  DIM       500
NK102506  DIM       500
NK102601  DIM       500
NK102602  DIM       500
NK102603  DIM       500
NK102604  DIM       500
NK102605  DIM       500
NK102606  DIM       500
NK102607  DIM       500
NK102608  DIM       500
NK102701  DIM       500
NK102702  DIM       500
NK102703  DIM       500
NK102704  DIM       500
NK102705  DIM       500
NK102706  DIM       500
NK102801  DIM       500
NK102802  DIM       500
NK102803  DIM       500
NK102804  DIM       500
NK102805  DIM       500
NK102806  DIM       500
NK102901  DIM       500[2]
NK102902  DIM       500[2]
NK102903  DIM       500[2]
NK102904  DIM       500[2]
NK102905  DIM       500[2]
NK102906  DIM       500[2]
NK103001  DIM       500
NK103002  DIM       500
NK103003  DIM       500
NK103004  DIM       500
NK103005  DIM       500
NK103006  DIM       500
NK103007  DIM       500
NK103008  DIM       500
NK103101  DIM       500[3]
NK103102  DIM       500[3]
NK103103  DIM       500[3]
NK103104  DIM       500[3]
NK103105  DIM       500[3]
NK103106  DIM       500[3]
NK103107  DIM       500[3]
NK103108  DIM       500[3]
NK103109  DIM       500[3]
NK103201  DIM       500
NK103202  DIM       500
NK103203  DIM       500
NK103204  DIM       500
NK103205  DIM       500
NK103206  DIM       500
NK103207  DIM       500
NK103208  DIM       500
NK103209  DIM       500
NK103210  DIM       500
NK103211  DIM       500
NK103301  DIM       500
NK103302  DIM       500
NK103303  DIM       500
NK103304  DIM       500
NK103305  DIM       500
NK103306  DIM       500
NK103401  DIM       500
NK103501  DIM       500
NK103502  DIM       500
NK103503  DIM       500
NK103504  DIM       500
NK103505  DIM       500
NK103506  DIM       500
NK103601  DIM       500
NK103701  DIM       500
.
NK1COUNT  FORM      3
NK1FOUND  FORM      1             * NK1 found flag
.                                     0 = one or more NK1 segments received
.                                     1 = no NK1 segments received
NUMRETRY  FORM      3             * retry counter
.
OLDSTRNG  DIM       4000
.
POSCOUNT  FORM      2
PREVCHAR  DIM       1
.
PID001    DIM       4
PID002    DIM       20
PID003    DIM       500
PID004    DIM       20
PID005    DIM       140
PID006    DIM       48
PID007    DIM       26
PID008    DIM       1
PID009    DIM       3000
PID010    DIM       80
PID011    DIM       500
PID012    DIM       4
PID013    DIM       140
PID014    DIM       40
PID015    DIM       60
PID016    DIM       80
PID017    DIM       80
PID018    DIM       20
PID019    DIM       16
PID020    DIM       25
PID021    DIM       20
PID022    DIM       120
PID023    DIM       60
PID024    DIM       1
PID025    DIM       2
PID026    DIM       80
PID027    DIM       60
PID028    DIM       80
PID029    DIM       26
PID030    DIM       1
PID031    DIM       1
PID032    DIM       1
PID033    DIM       26
.
PID00101  DIM       500
PID00201  DIM       500
PID00202  DIM       500
PID00203  DIM       500
PID00204  DIM       500
PID00205  DIM       500
PID00206  DIM       500
PID00301  DIM       100[5]
PID00302  DIM       100[5]
PID00303  DIM       5[5]
PID00304  DIM       6[5]
PID00305  DIM       100[5]
PID00306  DIM       100[5]
PID00401  DIM       500
PID00402  DIM       500
PID00403  DIM       500
PID00404  DIM       500
PID00405  DIM       500
PID00406  DIM       500
PID00501  DIM       500
PID00502  DIM       500
PID00503  DIM       500
PID00504  DIM       500
PID00505  DIM       500
PID00506  DIM       500
PID00507  DIM       500
PID00508  DIM       500
PID00601  DIM       500
PID00602  DIM       500
PID00603  DIM       500
PID00604  DIM       500
PID00605  DIM       500
PID00606  DIM       500
PID00607  DIM       500
PID00608  DIM       500
PID00701  DIM       500
PID00801  DIM       500
PID00901  DIM       40[80]
PID00902  DIM       40[80]
PID00903  DIM       40[80]
PID00904  DIM       2[80]
PID00905  DIM       2[80]
PID00906  DIM       2[80]
PID00907  DIM       2[80]
PID00908  DIM       2[80]
PID01001  DIM       500
PID01002  DIM       500
PID01003  DIM       500
PID01004  DIM       500
PID01005  DIM       500
PID01006  DIM       500
PID01101  DIM       35[2]
PID01102  DIM       35[2]
PID01103  DIM       35[2]
PID01104  DIM       35[2]
PID01105  DIM       8[2]
PID01106  DIM       35[2]
PID01107  DIM       2[2]
PID01108  DIM       2[2]
PID01109  DIM       2[2]
PID01110  DIM       2[2]
PID01111  DIM       2[2]
PID01201  DIM       500
PID01301  DIM       500[2]
PID01302  DIM       500[2]
PID01303  DIM       500[2]
PID01304  DIM       500[2]
PID01305  DIM       500[2]
PID01306  DIM       500[2]
PID01307  DIM       500[2]
PID01308  DIM       500[2]
PID01309  DIM       500[2]
PID01401  DIM       500[2]
PID01402  DIM       500[2]
PID01403  DIM       500[2]
PID01404  DIM       500[2]
PID01405  DIM       500[2]
PID01406  DIM       500[2]
PID01407  DIM       500[2]
PID01408  DIM       500[2]
PID01409  DIM       500[2]
PID01501  DIM       500
PID01502  DIM       500
PID01503  DIM       500
PID01504  DIM       500
PID01505  DIM       500
PID01506  DIM       500
PID01601  DIM       500
PID01602  DIM       500
PID01603  DIM       500
PID01604  DIM       500
PID01605  DIM       500
PID01606  DIM       500
PID01701  DIM       500
PID01702  DIM       500
PID01703  DIM       500
PID01704  DIM       500
PID01705  DIM       500
PID01706  DIM       500
PID01801  DIM       500
PID01802  DIM       500
PID01803  DIM       500
PID01804  DIM       500
PID01805  DIM       500
PID01806  DIM       500
PID01901  DIM       500
PID02001  DIM       500
PID02002  DIM       500
PID02003  DIM       500
PID02101  DIM       500
PID02102  DIM       500
PID02103  DIM       500
PID02104  DIM       500
PID02105  DIM       500
PID02106  DIM       500
PID02201  DIM       500
PID02202  DIM       500
PID02203  DIM       500
PID02204  DIM       500
PID02205  DIM       500
PID02206  DIM       500
PID02301  DIM       500
PID02401  DIM       500
PID02501  DIM       500
PID02601  DIM       500
PID02602  DIM       500
PID02603  DIM       500
PID02604  DIM       500
PID02605  DIM       500
PID02606  DIM       500
PID02701  DIM       500
PID02702  DIM       500
PID02703  DIM       500
PID02704  DIM       500
PID02705  DIM       500
PID02706  DIM       500
PID02801  DIM       500
PID02802  DIM       500
PID02803  DIM       500
PID02804  DIM       500
PID02805  DIM       500
PID02806  DIM       500
PID02901  DIM       500
PID03001  DIM       500
PID03101  DIM       500
PID03201  DIM       500
PID03301  DIM       500
.
PIDCOUNT  FORM      3
PIDFOUND  FORM      1             * PID found flag
.                                     0 = one or more PID segments received
.                                     1 = no PID segments received
POSNDIFF  FORM      4
.
QRD001    DIM       14
QRD002    DIM       1
QRD003    DIM       1
QRD004    DIM       20
QRD005    DIM       1
QRD006    DIM       1
QRD007    DIM       5
QRD008    DIM       500
QRD009    DIM       8
QRD010    DIM       4
QRD011    DIM       10
QRD012    DIM       10
QRD00101  DIM       500
QRD00201  DIM       500
QRD00301  DIM       500
QRD00401  DIM       500
QRD00501  DIM       500
QRD00601  DIM       500
QRD00701  DIM       500
QRD00702  DIM       500
QRD00801  DIM       500
QRD00802  DIM       500
QRD00803  DIM       500
QRD00804  DIM       500
QRD00805  DIM       500
QRD00806  DIM       500
QRD00807  DIM       500
QRD00808  DIM       500
QRD00809  DIM       500
QRD00810  DIM       500
QRD00811  DIM       500
QRD00812  DIM       500
QRD00813  DIM       500
QRD00814  DIM       500
QRD00815  DIM       500
QRD00901  DIM       500
QRD00902  DIM       500
QRD00903  DIM       500
QRD00904  DIM       500
QRD00905  DIM       500
QRD00906  DIM       500
QRD01001  DIM       500
QRD01002  DIM       500
QRD01003  DIM       500
QRD01004  DIM       500
QRD01005  DIM       500
QRD01006  DIM       500
QRD01101  DIM       500
QRD01102  DIM       500
QRD01201  DIM       500
QRF001    DIM       6
QRF002    DIM       1
QRF003    DIM       1
QRF004    DIM       10
.
ZXP00101  DIM       8
ZXP00201  DIM       8
.
RECVMESS  DIM       4000          * message buffer
REPSEPAR  DIM       1             * repetition separator character
REPTNCNT  FORM      3             * repetition count
RPLYTIME  FORM      5
RESPTOUT  FORM      2             * response timeout
RETRYINT  FORM      2             * retry interval (secs)
RETRYNUM  FORM      3             * number of retries
.
SAVAPPLI  DIM       180           * save application variable
SAVEDATE  DIM       8
SAVFACIL  DIM       180           * save facility variable
SAVMESID  DIM       20
SAVSEGMT  DIM       3
SECTIME   DIM       2
SEGCOUNT  FORM      3             * segment sequence count
SEGMENT   DIM       3             * 3 character HL7 segment code
SEGNUMBR  FORM      2             * segment number
.                                         1 = MSH
.                                         2 = MSA
SEGSTRNG  DIM       4090          * segment string
SPCHFLAG  FORM      1             * special character flag
.                                    1 = pipe
.                                    2 = caret
.                                    3 = ampersand
.                                    4 = tilda
.                                    5 = backslash
.                                    6 = tab
STRNGLEN  FORM      4
STRTPOSN  FORM      4
SUBSEPAR  DIM       1             * sub-component separator
.
TCPIPORT  DIM       40            * receiving machine name and port number
TEXTFILE  FILE      ASCII, FIXED=2000   * log file
TIMSTAMP  DIM       8
TMPSTRNG  DIM       4000          * buffer for reading in message
TXTFNAME  DIM       8             * text file name variable
.
VALECAPT  INIT      " segment validated"
VALSCAPT  INIT      "Validating segment: "
VOTSCAPT  INIT      "Validating message specific fields"
VOTECAPT  INIT      "Message specific fields validated"
.
.
. CONSTANTS
. ---------
AMPRSEQN  INIT      "\T\"
BLANKSTR  INIT      "#"#""
BSLASEQN  INIT      "\E\"
CARET     INIT      "^"
CARTSEQN  INIT      "\S\"
CRETURN   INIT      015           * carriage return character
DASHLINE  INIT      "--------------------------------------------------":
                    "------------------------------"
ENDBLOCK  INIT      034
ENVVNAME  INIT      "DPATH"
MINUS3    FORM      "-3"
MSHMCAPT  INIT      "MSH segment missing"
MSHSEGMT  INIT      "MSH"
MSASEGMT  INIT      "MSA"
MTYPEM02  INIT      "M02"
QRDSEGMT  INIT      "QRD"
PIDSEGMT  INIT      "PID"
PIPE      INIT      "|"
PIPESEQN  INIT      "\F\"
QUOTESPC  INIT      "#" "
RECVCAPT  INIT      "Data received @ "
STRTBLOK  INIT      013
TABSEQN   INIT      "\X09\"
TILDA     INIT      "~"
TILDSEQN  INIT      "\R\"
TIMECAP2  INIT      "Full Acknowledgement received @ "
SPECCHAR  INIT      "^~\&|"
MSEQCAPT  INIT      "Message segment sequence not valid"
