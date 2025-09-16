.*****************************************************************************
.*                           NCGCLMVR.INC                                    *
.*            Common variables for HosClaims status checking routine.        *
.*            Used by IBAADT10, IBAADT33 and IBAADT57.                       *
.*                                                                           *
.*        V10.02.01 25/03/2011  Mike Laming       CAR 240107                 *
.*                  Mods to PATECDaf & PATECOaf variables & Keys             *
.*                                                                           *
.*        25/01/2010  Steve Armstrong   CAR 201308                           *
.*                    Added CONTRCID, CMCODE, PATCMXFD/IO, SKEY19, PCFLAG,   *
.*                    CMXFLAG                                                *
.*        15/11/2007  Steve Armstrong   CAR 154963                           *
.*                    Added STCOUNTR                                         *
.*        12/07/2006  Steve Armstrong   CAR 112415                           *
.*                    Added FORM6P2                                          *
.*        03/02/2006  J.Tan             CAR 93540                            *
.*                    Mods for TFR - Transfer segments                       *
.*        28/11/2005  Mike Laming       CAR 86040                            *
.*                    Add PATCERFD, PATCLCFD and other vars for Certificates *
.*        28/11/2005  Mike Laming       CAR 86417                            *
.*                    Changed CATSCN to "SCN" (from "SCU")                   *
.*        22/11/2005  Steve Armstrong   CAR 85944                            *
.*                    Added value "2" for FOUNDLNK                           *
.*                    Changed COUNTER from FORM 2 to a FORM 3.               *
.*        11/08/2005  Steve Armstrong   CAR 71776                            *
.*                    Added SAVPURNO                                         *
.*        21/07/2005  Steve Armstrong   CAR 65071                            *
.*                    Added ENDDATE                                          *
.*        10/06/2005  Steve Armstrong   CAR 62812                            *
.*                    Added PATHDFFD & MAXMDAYS.                             *
.*        05/04/2005  Steve Armstrong   CAR 60208                            *
.*                    Removed PATEBIFD                                       *
.*        21/10/2004  Steve Armstrong   CAR 54520                            *
.*                    Added PATLINFD & FOUNDLNK                              *
.*                    Also added ED020006, ED020007, & ED020008.             *
.*        16/09/2004  Steve Armstrong   CAR 53557                            *
.*                    Added DPS, ANB, TFR, TRG, MOR, CER, MED & REM segment  *
.*                    variables.                                             *
.*        21/08/2004  Steve Armstrong   CAR 52899                            *
.*                    Added ITEMDATE & SAVEITEM                              *
.*        27/07/2004  Steve Armstrong   CAR 51477                            *
.*                    Added SAVEDATE, MSGTEMP1, CMBSDATE, MSGCOUNT, PSGCOUNT,*
.*                    TEMPMSGF, THTRDATE, ERASE, MSGFNAME, ISBUILD, UKEYMSG. *
.*                    All these variables are for the changes to the         *
.*                    processing of PSG and MSG segments.                    *
.*        27/07/2004  Steve Armstrong   CAR 50708                            *
.*                    Added ASSOCNUM                                         *
.*****************************************************************************
.
.         FILE DEFINITIONS
.         ----------------
          INC       PATCALAG/INC            * Calculate age include
.
          INC       OPRDEAFD/INC            * Operation detail file
          INC       PAT3MIFD/INC            * ICD9 mapping file
          INC       PATCERFD/INC            * certificates
          INC       PATCLCFD/INC            * certificate line comments
          INC       PATCMPFD/INC            * Complex mapping file
          INC       PATCODFD/INC            * Codes file
          INC       PATCONFD/INC            * Control file
          INC       PATCHCFD/INC            * Code changes file
          INC       PATCMXFD/INC            * Casemix Funding file
          INC       PATCFAFD/INC
          INC       PMSCIDFD/INC
          INC       PATDHEAD/INC
          INC       PATDSCFD/INC            * Disch file
          INC       PATDTRFD/INC            * DTR file
          INC       PATDGWFD/INC            * DTR file
          INC       PATEBHFD/INC            * EDI batch header file
          INC       PATECDFD/INC            * Patient episode disease file
          INC       PATECOFD/INC            * Patient episode operation file
          INC       PATEDSFD/INC            * Patient EDI Summary Table
          INC       PATFN1FD/INC            * Health fund file
          INC       PATFX1FD/INC            * Health fund extention
          INC       PATHDFFD/INC            * Daily Fee/High Outlier
          INC       PATHGPFD/INC            * Health fund group file
          INC       PATICDFD/INC            * ICD disease file
          INC       PATICOFD/INC            * ICD operation file
          INC       PATICUFD/INC            * ICU file
          INC       PATINVFD/INC            * Invoice file
          INC       PATITMFD/INC            * Item file
          INC       PATLINFD/INC            * U/R Link file
          INC       PATMA1FD/INC            * Master file
          INC       PATMCHFD/INC            * Miscellaneous charges file
          INC       PATHSPFD/INC            * Admin file
          INC       PATMI1FD/INC            * Admin file
          INC       PATMMBFD/INC            * Patient MBS file
          INC       PATPGRFD/INC            * Patient grouper file
          INC       PATTRNFD/INC            * Transfer file
          INC       PMSVX1FD/INC            * Visit File Extension
          INC       PMSHCPFD/INC            * Health Care Provider (Doctors)
          INC       PATVADFD/INC            * Transfer source file
          INC       PATDADFD/INC            * Patient transfer destination file
          INC       PATWC1FD/INC
          INC       PATWMAFD/INC            * TAC file
          INC       PATWVEFD/INC            * DVA file
.
EXTRFILE  FILE      ASCII, FIXED=53      * file length is irrelevant as we
.                                          only need to know if it exists
.
.         Temporary File Definition for MSG Data
.         --------------------------------------
.
.         Filename : msgtmpxx.dat          (xx = port id)
.
MSGTEMP1  IFILE SQL, FIXED=21, KEY="U1-5"
.
.NAME     TYPE    LENGTH     PHYSICAL     START     DESCRIPTION
.----     ----    ------     --------     -----     -----------
TMPSEQNO  DIM       5           5           1       Sequence Number
TMPITEMN  DIM       9           9           6       Theatre Item Number
TMPAMNT   FORM      8.2         6          15       Theatre Item Amount
.
.End of Record                             21
.
.
. LOCAL VARIABLE DEFINITION
. -------------------------
ACCSQCNT  FORM      5                       * Accom sequence count
ADMINO    FORM      8                       * Admin no
ARRAY     DIM       8[99]                   * Array to store filenames
ASSOCNUM  FORM      6                       * associated # storage
.
BATCHNO   DIM       6
BJDAY     FORM      3                       * For CALCAGE
.
CALDAYS   FORM      4                       * For NHOSPDAY
CDYSDAYS  FORM      6                       * For CALCDAYS
CDYSFDTE  DIM       8                       * For CALCDAYS
CDYSTDTE  DIM       8                       * For CALCDAYS
CDYSYEAR  FORM      2                       * For CALCDAYS
CHARPOSN  FORM      2
CJDAY     FORM      3                       * For CALCAGE
CMBSDATE  DIM       8                       * ccyymmdd
CMCODE    DIM       9
CMXFLAG   FORM      1
CODCNT    FORM      3
CODE      DIM       2                       * For PATCODKY
CONTRCID  DIM       6
COUNT     FORM      2
COUNTER   FORM      3
CURDTE8   DIM       8                       * Current date (ccyymmdd)
CURNTINV  FORM      3                       * Current invoice for an admission
.
DDRGCODE  DIM       4
DMDCCODE  DIM       4
DIM2A     DIM       2
DIM3      DIM       3
DIM30     DIM       30
DIM4      DIM       4
DIM8      DIM       8
DIM9      DIM       9
MAXARRY   INIT      "200"                                             *I-240107
DISARY    DIM       7[200]                  * Disease array           *C-240107
OPRARY    DIM       7[200]                  * Operation array         *C-240107
DRGVER    DIM       3
.
.
. ----- EDI Variables -----
.
. HDR segment
.-------------
ED010001  INIT      "~"          * Segment deliminater (#10001)
ED010002  INIT      "HDR"        * Segment Identifier (#10002)
ED010003  INIT      "HCLM"       * Message Type (#10003)
ED010004  INIT      "0202"       * Message version (0202) (#10004)
ED010005  DIM       4            * Provider's EDI Interface (#10005)
ED010006  DIM       5            * No. of Claims Submitted in this msg (#10006)
ED010007  DIM       6            * Provider's batch number (#10007)
ED010008  DIM       4            * Time Prep. for last transmission (#10008)
ED010009  DIM       8            * Date Prep, for last transmission (#10009)
ED010010  DIM       1            * Test Flag (#10010)
ED010011  DIM       4            * Time of preperation (#10011)
ED010012  DIM       8            * Date of preperation (#10012)
.
. PRO segment
.-------------
ED020001  INIT      "~"          * Segment deliminater (#20001)
ED020002  INIT      "PRO"        * Segment Identifier (#20002)
ED020003  DIM       9            * Provider Number (#20003)
ED020004  DIM       30           * Provider Name (#20004)
ED020005  DIM       120          * Provider EDI Address (#20005)
ED020006  DIM       6            * Provider Bank BSB Code (#20006)
ED020007  DIM       12           * Provider Bank Account No. (#20007)
ED020008  DIM       1            * Provider Type (#20008)
.
. INS segment
.-------------
ED030001  INIT      "~"          * Segment deliminater (#30001)
ED030002  INIT      "INS"        * Segment Identifier (#30002)
ED030003  DIM       3            * Fund Identifier (#30003)
ED030004  DIM       30           * Fund Name (#30004)
ED030005  DIM       120          * Fund EDI Address (#30005)
.
. DPS segment
.-------------
ED031001  INIT      "~"          * Segment deliminater (#31001)
ED031002  INIT      "DPS"        * Segment Identifier (#31002)
ED031003  DIM       8            * Minor Customer ID (#31003)
.
. CID segment
.-------------
ED040001  INIT      "~"          * Segment deliminater (#40001)
ED040002  INIT      "CID"        * Segment Identifier (#40002)
ED040003  DIM       5            * Claim Sequence Number (#40003)
ED040004  DIM       15           * Account Reference Number (#40004)
ED040005  DIM       1            * Contiguous Claim Code (#40005)
ED040006  DIM       1            * Previous Claim Processing (#40006)
.
ED040007  DIM       4            * Previous Claim Time of Preparation (#40007)
ED040008  DIM       8            * Previous Claim Date of Preparation (#40008)
ED040009  DIM       6            * Previous Claim's batch no. (#40009)
ED040010  DIM       5            * Previous Claim's sequential no. (#40010)
.
ED040011  DIM       1            * Deposit Paid Indicator (#40011)
ED040012  DIM       9            * Deposit Amount (#40012)
ED040013  DIM       1            * Accident/Emergency Indicator (#40013)
ED040014  DIM       1            * Compensable Status Code (#40014)
ED040015  DIM       1            * Veterans Affairs Flag (#40015)
ED040016  DIM       9            * Total hospital Charge (#40016)
ED040017  DIM       9            * Total Medical Charge (#40017)
ED040018  DIM       9            * Total Charge this Claim (#40018)
.
. PAT segment
.-------------
ED050001  INIT      "~"          * Segment deliminater (#50001)
ED050002  INIT      "PAT"        * Segment Identifier (#50002)
ED050003  DIM       20           * Fund Membership Identifier (#50003)
ED050004  DIM       10           * Medicare Card Number (#50004)
.
ED050009  DIM       4            * Patient's Postcode (#50009)
ED050010  DIM       30           * Patient's First Given name (#50010)
ED050011  DIM       1            * Patient's Second Initial (#50011)
.
ED050012  DIM       28           * Patient's family name (#50012)
ED050013  DIM       8            * Date patient first aware of symptoms(#50013)
.
ED050015  DIM       1            * Patient Gender (#50013)
ED050016  DIM       8            * Patient Date of birth (#50016)
ED050017  DIM       4            * Patient Admission weight (#50017)
ED050018  DIM       1            * Marital Status (#50018) - indicator 2
.
. EPD segment
.-------------
ED060001  INIT      "~"          * Segment deliminater (#60001)
ED060002  INIT      "EPD"        * Segment Identifier (#60002)
ED060003  DIM       15           * Episode Identifier (#60003)
ED060004  DIM       2            * PCS Episode Type Code (#60004)
ED060005  DIM       2            * Type of Episode of Care Code (#60005)
ED060006  DIM       1            * Accommodation Status Code (#60006)
ED060007  DIM       1            * Actual Sameday Status Code (#60007)
.
ED060009  DIM       8            * Date of Admission (#60009) 
ED060010  DIM       8            * Date of Seperation (#60010)
ED060011  DIM       2            * Seperation Mode (#600011)       
ED060012  DIM       4            * Length of Stay (#60012)            
ED060013  DIM       4            * Admission Time (#60013)
ED060014  DIM       4            * Seperation Time (#60014)
ED060015  DIM       1            * Source of Referral (#60015)
.
. SVB segment
.-------------
ED070001  INIT      "~"          * Segment deliminater (#70001)
ED070002  INIT      "SVB"        * Segment Identifier (#70002)
ED070003  DIM       1            * Service Code Type (#70003)
ED070004  DIM       11           * Service Code (#70004)
ED070005  DIM       9            * Fixed Charge (#70005)
ED070006  DIM       1            * Credit Charge Indicator (#70006)
ED070007  DIM       8            * Date From (#70007)
ED070008  DIM       8            * Date To (#70008)
ED070009  DIM       4            * No. of days (#70009)
.
. ANB segment
.-------------
ED080001  INIT      "~"          * Segment deliminater (#80001)
ED080002  INIT      "ANB"        * Segment Identifier (#80002)
ED080003  DIM       1            * Cancel Original Data Indicator (#80003)
ED080004  DIM       5            * Sequential Baby Number (#80004)
ED080005  DIM       30           * First Given Name (#80005)
ED080006  DIM       1            * Second Initial (#80006)
ED080007  DIM       28           * Family Name (#80007)
ED080008  DIM       1            * Gender Code (#80008)
ED080009  DIM       8            * Date Of Birth (#80009)
.
. TFR segment
.-------------
ED090001  INIT      "~"          * Segment deliminater (#90001)
ED090002  INIT      "TFR"        * Segment Identifier (#90002)
ED090003  DIM       5            * Transfer Sequential Number (#90003)
ED090004  DIM       1            * Transfer Indicator (#90004)
ED090005  DIM       8            * Transfer Date (#90005)
ED090006  DIM       9            * Provider No. (#90006)
ED090007  DIM       4            * Provider Postocde (#90007)
ED090008  DIM       30           * Provider Name (#90008)
ED090009  DIM       1            * Transfer Type (#90009)
ED090010  DIM       4            * Days At Previous Provider (#90010)
ED090011  DIM       2            * Hours At Previous Provider (#90011)
.
. ACS segment
.-------------
ED100001  INIT      "~"          * Segment deliminater (#100001)
ED100002  INIT      "ACS"        * Segment Identifier (#100002)
ED100003  DIM       8            * Date from (#100003)
ED100004  DIM       8            * Date from (#100004)
ED100005  DIM       4            * No. of days (#100005)
ED100006  DIM       4            * Total leave days (#100006)
ED100007  DIM       4            * Total Accomm. Days (#100007)
ED100008  DIM       9            * Total Accomm. Charge (#100008)
ED100009  DIM       1            * Credit Charge Indicator (#100009)
.
. ACD Segment
.-------------
ED110001  INIT      "~"          * Segment deliminater (#110001)
ED110002  INIT      "ACD"        * Segment Identifier (#110002)
ED110003  DIM       5            * Accomm. Squence Number (#110003)
ED110004  DIM       2            * PCS Episode Type Code (#110004)
ED110005  DIM       2            * Bed Level Code (#110005)
ED110006  DIM       1            * Bed band (#110006)
ED110007  DIM       1            * Service Code Type (#110007)
ED110008  DIM       11           * Service code (#110008)
ED110009  DIM       4            * Program No. (#110009)
ED110010  DIM       8            * Date From (#110010)
ED110011  DIM       8            * Date To (#110011)
ED110012  DIM       4            * No. of Days (#110012)
ED110013  DIM       9            * Rate/Day (#110013)
ED110014  DIM       9            * Charge (#110014)
ED110015  DIM       1            * Credit Charge Indicator (#110015)
.
. CCG Segment
.-------------
ED120001  INIT      "~"          * Segment deliminater (#120001)
ED120002  INIT      "CCG"        * Segment Identifier (#120002)
ED120003  DIM       5            * CC Sequence number (#120003)
ED120004  DIM       3            * CC Type Code (#120004)
ED120005  DIM       1            * CC Level Code (#120005)
.
ED120006  DIM       1            * Service Code Type (#120006)
ED120007  DIM       11           * Service Code (#120007)
ED120008  DIM       8            * Date From (#120008)
ED120009  DIM       8            * Date To (#120009)
ED120010  DIM       4            * No. of Days (#120010)
ED120011  DIM       9            * Rate/Day (#120011)
ED120012  DIM       9            * Charge (#120012)
ED120013  DIM       1            * Credit Charge Indicator (#120013)
ED120014  DIM       4            * ICU hours (#120014)
.
. LPD Segment
.-------------
ED130001  INIT      "~"          * Segment deliminiter (#130001)
ED130002  INIT      "LPD"        * Segment Identifier (#130002)
ED130003  DIM       5            * Leave Period Sequence Number (#130003)
ED130004  DIM       8            * Date from (#130004)
ED130005  DIM       8            * Date to (#130005)
ED130006  DIM       4            * No. of Leave Days (#130006)
.
. PSG Segment
.-------------
ED140001  INIT      "~"          * Segment deliminater (#140001)
ED140002  INIT      "PSG"        * Segment Identifier (#140002)
ED140003  DIM       5            * Principal Service Sequence Number (#140003)
ED140004  DIM       1            * Service Code Type Indicator (#140004)
ED140005  DIM       11           * Service Code (#140005)
ED140006  DIM       8            * Date of Service (#140006)
ED140007  DIM       2            * Theatre band (#140007)
ED140008  DIM       9            * Principal Service Charge (#140008)
ED140009  DIM       9            * Total Charge for all Services (#140009)
ED140010  DIM       2            * Time of Day (#140010)
ED140011  DIM       4            * Time in Theatre or Procedure Room (#140011)
ED140012  DIM       1            * Anaesthetic Type Code (#140012)
ED140013  DIM       1            * Credit Charge Indicator (#140013)
.
. MSG Segment
.-------------
ED150001  INIT      "~"          * Segment deliminater (#150001)
ED150002  INIT      "MSG"        * Segment Identifier (#150002)
ED150003  DIM       5            * Multiple Service Sequence Number (#150003)
ED150004  DIM       1            * Service Code Type Indicator (#150004)
ED150005  DIM       11           * Multiple Service Code (#150005)
ED150006  DIM       9            * Multiple Service Charge (#150006)
ED150007  DIM       1            * Credit Charge indicator (#150007)
.
. TRG segment
.-------------
ED160001  INIT      "~"          * Segment deliminater (#160001)
ED160002  INIT      "TRG"        * Segment Identifier (#160002)
ED160003  DIM       5            * Transport Service Sequence No (#160003)
ED160004  DIM       8            * Date Of Service (#160004)
ED160005  DIM       15           * Ambulance Service's Ref No (#160005)
ED160006  DIM       1            * Transport Type Used (#160006)
ED160007  DIM       20           * From (#160007)
ED160008  DIM       20           * To (#160008)
ED160009  DIM       4            * Distance Travelled (#160009)
ED160010  DIM       4            * Start Time (#160010)
ED160011  DIM       4            * Elapsed Time (#160011)
ED160012  DIM       9            * Charge (#160012)
ED160013  DIM       1            * Credit Charge Indicator (#160013)
.
. MIG Segment
.-------------
ED170001  INIT      "~"          * Segment deliminater (#170001)
ED170002  INIT      "MIG"        * Segment Identifier (#170002)
ED170003  DIM       5            * Misc. Service Sequence No. (#170003)
ED170004  DIM       10           * Service Code (#170004)
ED170005  DIM       30           * Service Number/Name (#170005)
ED170006  DIM       8            * Date of Service (#170006)
ED170007  DIM       2            * No. of Services Provided (#170007)
ED170008  DIM       9            * Charge/Services (#170008)
ED170009  DIM       9            * Total Misc. Service Charge for service code
.                                  (#170009)
ED170010  DIM       1            * Credit Charge Indicator (#170010)
.
. DMG Segment
.-------------
ED180001  INIT      "~"          * Segment deliminater (#180001)
ED180002  INIT      "DMG"        * Segment Identifier (#180002)
ED180007  DIM       4            * Hrs of Mechanical Ventilation (#180007)
ED180008  DIM       4            * DRG Code (#180008)
ED180009  DIM       2            * AN-DRG Grouper Version (#180009)
.
. MOR segment
.-------------
ED190001  INIT      "~"          * Segment deliminater (#190001)
ED190002  INIT      "MOR"        * Segment Identifier (#190002)
ED190003  DIM       5            * Non-DRG Sequence Number (#190003)
ED190004  DIM       1            * Casemix/Service Code Type Indicator (#190004)
ED190005  DIM       11           * Casemix/Service Code (#190005)
.
. CER segment
.-------------
ED200001  INIT      "~"          * Segment deliminater (#200001)
ED200002  INIT      "CER"        * Segment Identifier (#200002)
ED200003  DIM       5            * Certificate Sequence Number (#200003)
ED200004  DIM       1            * Cancel Orig. Certificate Indicator (#200004)
ED200005  DIM       2            * Certificate Type Code (#200005)
ED200006  DIM       40           * Nature Of Illness (#200006)
ED200007  DIM       8            * Certifying Provider Number (#200007)
ED200008  DIM       30           * Certifying Provider Name (#200008)
ED200009  DIM       8            * Date Signed/Issued (#200009)
ED200010  DIM       8            * Date From (#200010)
ED200011  DIM       8            * Date To (#200011)
ED200012  DIM       4            * No. Of Days (#200012)
.
. MED segment
.-------------
ED210001  INIT      "~"          * Segment deliminater (#210001)
ED210002  INIT      "MED"        * Segment Identifier (#210002)
ED210003  DIM       5            * Medical Sequence Number (#210003)
ED210004  DIM       8            * Payee Provider Number (#210004)
ED210005  DIM       8            * Servicing Provider Number (#210005)
ED210006  DIM       30           * Servicing Provider Name (#210006)
ED210007  DIM       1            * Service Code Type Indicator (#210007)
ED210008  DIM       11           * Service Code (#210008)
ED210009  DIM       8            * Date Of Service (#210009)
ED210010  DIM       9            * Charge (#210010)
ED210011  DIM       1            * Credit Charge Indicator (#210011)
.
. REM segment
.-------------
ED900001  INIT      "~"          * Segment deliminater (#900001)
ED900002  INIT      "REM"        * Segment Identifier (#900002)
ED900003  DIM       5            * Remarks Sequence Number (#900003)
ED900004  DIM       69           * Remarks (#900004)
.
. TLR Segment
.-------------
ED910001  INIT      "~"          * Segment deliminater (#910001)
ED910002  INIT      "TLR"        * Segment Identifier (#910002)
ED910003  DIM        5           * Number of Claims Submitted in (#910003)
ED910004  DIM        9           * Total $ value this message (#910004)
.
.
ENDDATE   DIM       8
ENDTME    DIM       5                       * End time (hh:mm)
ERRCT     FORM      5                       * Error counter
ERRFLG    FORM      1                       * Error flag
ERRMSG    DIM       60                      * Error message
EXTFNAME  DIM       127                     * Extract file name
EXTRFLAG  FORM      1                       * Extract Flag (for NCGSEGMT)
.                                              0 = IBAADT10
.                                              1 = IBAADT33
EXTRNAME  DIM       127
.
FIELD1    FORM      2
FIELD2    FORM      2
FILENAME  DIM       8
FORM3     FORM      3
FORM5     FORM      5
FORM6A    FORM      6
FORM6P2   FORM      6.2
FORM8P2   FORM      8.2
FORM9     FORM      9
FOUNDLNK  FORM      1             * found U/R link flag
.                                     0 = link found (for unqualified baby)
.                                     1 = no link found ( for unqualified baby)
.                                     2 = sending qualified baby
FROMDATE  DIM       8                       * From date for NHOSPDAY
.
INVAMTCT  FORM      7.2                     * Invoice amount
INVCOUNT  FORM      3                       * Total invoices for an admission
INVFRDTE  DIM       8                       * Invoice from date
INVRECCT  FORM      5                       * Invoice record counter
INVTODTE  DIM       8                       * Invoice to date
ITEMDATE  DIM       8
.
KEY1A     DIM       1
KEY1B     DIM       1
KEY2A     DIM       2
KEY11A    DIM       11
.
LEAVEPD   FORM      5
LEAVDAY   FORM      4
LOFSTAY   FORM      1                       * Intended LOS
.
MAPFLG    FORM      1                       * Map flag
MAXMDAYS  FORM      4
MSGCOUNT  FORM      5
.
NOINVDYS  DIM       4                       * No of invoice days
NBRDAYS   FORM      4                       * No of days in hospital
NUMBDAYS  FORM      4
.
OPRFLG    FORM      1                       * OPR flag
.
PATHDESC  DIM       4
PCFLAG    FORM      1
PREVINVN  DIM       8
PSGCOUNT  FORM      5
.
RECARRY   DIM       5[99]
REDCT     FORM      5                       * Read counter
RESUBMN   FORM      1                       * Resubmission Flag
.                                              0 = No
SAVADMIN  FORM      8                       * Save the admin no
SAVBTHN   FORM      8
SAVEDATE  DIM       8                       * saved theatre date (ddmmccyy)
SAVEITEM  DIM       9
SAVINVNO  DIM       8                       * Save the invoice no
SAVINVN2  DIM       8                       * Save the invoice no 2
SAVKEY32  DIM       32
SAVPRVBN  DIM       8                       * Save previous batch number
SAVPURNO  DIM       8
STCOUNTR  FORM      2                       * status counter
STRTTME   DIM       5                       * Start time (hh:mm)
.
TEMPMSGF  DIM       8                       * temporary MSG file
THTRDATE  DIM       8                       * theatre date
TMPCNT    FORM      5
TMPFILNM  DIM       8
TMPKEY1   DIM       8[18]	
TMPKEY2   DIM       24[15]
TODATE    DIM       8                       * To date for NHOSPDAY
TOTRECCT  FORM      5                       * Total record counter
TOTAMTCT  FORM      7.2                     * Total amount counter
.
URCNT     FORM      5
.
VALDFLG   FORM      1                       * Validation flag
.
WARCT     FORM      5                       * Warning counter
WRTCT     FORM      5                       * Write counter
.                                              1 = Yes
.
. PROGRAM CONSTANTS
. -----------------
CATADN    INIT      "ADN"
CATAM     INIT      "AM"
CATAS     INIT      "AS"
CATCCU    INIT      "CCU"
CATCR     INIT      "cr"
CATD      INIT      "D "
CATD1     INIT      "D1"
CATD2     INIT      "D2"
CATD3     INIT      "D3"
CATD4     INIT      "D4"
CATDD     INIT      "DD"
CATEC     INIT      "EC"
CATHDU    INIT      "HDU"
CATICU    INIT      "ICU"
CATME     INIT      "ME"
CATNCU    INIT      "NCU"
CATNH     INIT      "NH"
CATOB     INIT      "OB"
CATOT     INIT      "OT"
CATPCU    INIT      "PCU"
CATPS     INIT      "PS"
CATRE     INIT      "RE"
CATSCN    INIT      "SCN"
CATSU     INIT      "SU"
.
CERTTYPB  INIT      "B "
CERTTYPC  INIT      "C "
CERTYP3B  INIT      "3B"
CERTYPPS  INIT      "PS"
CERTYPRE  INIT      "RE"
CERTYPNE  INIT      "NE"
CERTYPCC  INIT      "CC"
CERTYPEM  INIT      "EM"
CERTYPED  INIT      "ED"
CERTYPNA  INIT      "NA"
CERTYPAC  INIT      "AC"
.
CATU1     INIT      "U1"
CATU2     INIT      "U2"
CATU3     INIT      "U3"
CATU4     INIT      "U4"
CATU5     INIT      "U5"
CATVI     INIT      "VI"
.
CHARACTA  INIT      0101                    * Octal "A"
CHARACTZ  INIT      0132                    * Octal "Z"
.
ERASE     INIT      "iserase "
.
ISBUILD   INIT      "isbuild "
.
MSGFNAME  INIT      "msgtmp"
.
OUTPATH1  INIT      "sent"
OUTPATH2  INIT      "ack"
OUTPATH3  INIT      "nack"
.
SP60      INIT      "                              ":
                    "                              "
.
TESTFLG   FORM      "1"                     * Test flag
.                                               0 - Normal EDI format
.                                               1 - New line for each segment
.
UKEYMSG   INIT      " 21 U1-5"
.
ZERO2     INIT      "00"
ZERO4     INIT      "0000"
ZERO6     INIT      "000000"
ZERO12    INIT      "000000000000"
