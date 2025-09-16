.******************************************************************************
.*                                                                            *
.*                              PRIINVVR                                      *
.*                              --------                                      *
.*                                                                            *
.*    Include to define all the variables required by the PRIINVPR include.   *
.*                                                                            *
.*    AUTHOR           : DIG                                                  *
.*                                                                            *
.*    DATE             : 01/07/91                                             *
.*                                                                            *
.*    COMMENTS         : The temp file PRITM3XX is used specifically for      *
.*                       processing the special cases involved with Pathology *
.*                       Billing. I have left the variable names the same as  *
.*                       the PRITM2XX temp file so that when we have finished *
.*                       processing the Pathology items we can read through   *
.*                       this file and write directly to the PRITM2XX temp    *
.*                       file for the printing of the invoice/s.              *
.*                                                                            *
.*    MODIFICATIONS                                                           *
.*       V11.03.01 12/04/2023  J.Tan          SK 0847250                      *
.*                 Changed CMDLINE to DIM 227 from 200                        *
.*       V11.01.01 24/08/2021  Davin         TSK 0897318                      *
.*                 Added Adjustment Total (ADJTOTAL)                          *
.*       V10.13.02 25/09/2018  J.Tan         TSK 0836727                      *
.*                 Added Restrictive Override code                            *
.*       V10.13.01 26/07/2018  J.Tan         TSK 0848506                      *
.*                 Changed PP Doctor from DIM6 to DIM10                       *
.*       V10.11.05 27/09/2017  Peter Vela       TSK 0837619                   *
.*                 Changed TMPASPF to Compensation Claim Indicator            * 
.*       V10.11.04 18/09/2017  Peter Vela       TSK 0837619                   *
.*                 Changed TMPASPF and TMPAICF to not used                    * 
.*       V10.11.03 31/08/2017  Peter Vela       TSK 0837619                   *
.*                 Added TMPLVIS                                              *
.*       V10.11.02 03/08/2017  Peter Vela       TSK 0837619                   *
.*                 Added TMPMPOV to TMPSDCD                                   *
.*       V10.11.01 27/07/2017  Peter Vela       TSK 0837619                   *
.*                 Added TMPRPER and TMPROVR                                  *
.*       V10.08.01 07/04/2016  Peter Vela       CAR 0294177                   *
.*                 Added TMPACOI and TMPTDUR                                  *
.*       V10.04.01 21/01/2014  Patrick Adair    CAR 265844                    *
.*                 Increase PRA address and phone field lengths and add       *
.*                 new fields for State and mobile phone                      *
.*        V9.12.02  22/09/2009 Peter Vela        CAR 194715                   *
.*                  Fixed PRITM3XX initialisation                             *
.*                  Fixed PRITM3XY initialisation                             *
.*                  Extended CMDLINE to 200                                   *
.*        V9.12.01  07/08/2009 Mike Laming       CAR 123419                   *
.*                  Add TMPOITEM & TMPOSITM for changes to PATHL000 routine   *
.*                  Add third key (KEY30 with Date) to count stepdown items   *
.*        V9.11.01  08/01/2009 Steve Armstrong   CAR 185927                   *
.*                  Extended the length of CMDLINE from 80 to 110             *
.*        V9.04.02  03/08/05 J.Tan    CAR 62750                               *
.*                  Removed redefined amount variables                        *
.*        V9.04.01  10/06/2004  J.Tan CAR 56701                               *
.*                  Mods for transfering HIC item to invoice                  *
.*        V9.03.04  13/05/2004  J.Tan CAR 49827                               *
.*                  Added nbnkdeps variable                                   *
.*        V9.03.03  25/03/2004  J.Tan                                         *
.*                  Added new variable for Credit note                        *
.*        V9.03.02  25/03/2004  J.Tan                                         *
.*                  Added new variable for actual test item code              *
.*        V9.03.01  02/03/2004  J.Tan                                         *
.*                  A copy of PRIINVVR for WEB servers                        *
.*                                                                            *
.*        V9.02.03  26/02/2004  J.Tan                                         *
.*                  Added new variable WEBFLAG                                *
.*        V9.02.02  21/06/2002  J.Tan                                         *
.*                  Fixed join key variables                                  *
.*        V9.02.01  04/06/2002  Dean Cramer                                   *
.*                  Due to Too Many Segments error reworked several variables *
.*                  into one with pack in IO                                  *
.*        V5.08.01  28/08/2000  Jill Habasque                                 *
.*                  Added variables for Referral Period                       *
.*        V5.07.01  18/10/1999  Steve Armstrong                               *
.*                  Fixed index components of PRITM3 for Oracle.              *
.*                     : V6.01  16/03/92  DIG                                 *
.*                              Added the new fields from the PRIHREFD and    *
.*                              PRIHTRFD files.                               *
.*                       V6.02  24/07/92  whirlpool                           *
.*                              made patient indicator part of the key        *
.*                       V6.03  14/08/92  DIG                                 *
.*                              Added a couple of variables for the General   *
.*                              Ledger Interface                              *
.*                              07/10/92  Steve Armstrong                     *
.*                              Modified for alphanumeric debtor number       *
.*        V6.00.04  12/08/1993  Glenn Berry      SRF 122974                   *
.*                  Added SAVRDATE                                            *
.*        V6.00.05  16/11/1993  Greg Horvat      SRF 126300                   *
.*                  Recompiled for PRIINVPR                                   *
.*        V6.00.06  18/11/1993  Greg Horvat      SRF 124924                   *
.*                  Added invoice layouts in PRIINVPR.PBL                     *
.*        V6.00.07  10/01/1994  Greg Horvat      SRF 127157                   *
.*                  Recomplied for changes to PRINVPR                         *
.*        V6.01.01  11/05/1994  Graeme Williams   SRF 129360                  *
.*                  Modified the definition of the PRITM3* temp file.         *
.*        V6.01.02  04/06/1994  Graeme Williams   SRF 129518                  *
.*                  Added TMPMAXR and TMPMAXD to both temp files              *
.*        V6.02.01  15/09/1994  Gabrielle         SRF 132082                  *
.*                  Reorded the key for the tempfile 3 to include service     *
.*                  date directly after service time                          *
.*        V6.02.02  03/10/1994  Graeme Williams   SRF 128854                  *
.*                  Added the constant ESC (escape character)                 *
.*        V6.03.B01 25/02/1995  Graeme Williams   R6.03 Enhancements          *
.*                  Added extra fields to the temp file to indicate stepdown  *
.*                  items, exception charges and fixed charges.               *
.*        V6.03.01  21/03/1995  Greg Horvat      SRF 135684                   *
.*                  Changed SAVPIND to be a DIM 3 instead of a DIM 1 & added  *
.*                  SAVTCIND - special patient indicator                      *
.*                                                                            *
.******************************************************************************
.
.******************************************************************************
.*                                 TEMP FILES                                 *
.******************************************************************************
PRITM2XX  IFILE     SQL, FIXED=747, KEY="U1-29,78-80,30-77"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
TMPDIM29   DIM     29        29          1        Join variables
.----
.TMPDEBT    DIM      8         8          1        Debtor or U/R number
.DTMPSCAN   DIM      2         2          9        Scan Flag
.                                                   0 = Debtor
.                                                   1 = PMI
.TMPPRAC    DIM      6         6         11        Medical Practice Code
.TMPCLAIM   DIM      3         3         17        Claim Type (Cat CL)
.TMPSDOCT   DIM     10        10         20        Service Doctor
.---
..
TMPDIM48   DIM      48        48        30         Join variables
.----
.TMPRDATE   DIM      8         8         30        Referral Date (CCYYMMDD)
.TMPRDOCT   DIM     10        10         38        Referring Doctor
.TMPSDATE   DIM      8         8         48        Service Date (CCYYMMDD)
.TMPSTIME   DIM      5         5         56        Service Time (HH:MM)
.DTMPIFLG   DIM      2         2         61        Item Flag
.                                                   0 = MBS
.                                                   1 = AMA
.TMPITEM    DIM      9         9         63        Item Code
.TMPSITEM   DIM      3         3         72        Sub Item Number
.DTMPTRAN   DIM      3         3         75        Transaction Number
.----
TMPPIND    DIM      3         3         78        Patient Indicator (Cat GI)
TMPADATE   DIM      8         8         81        Accident Date (CCYYMMDD)
TMPREFD    DIM     50        50         89        Referral Details
TMPOPS     DIM     20        20        139        Operation Codes
TMPMESG    DIM      3         3        159        Message Code (PATMESG1)
TMPSERVS   FORM     3         3        162        Number of Services
TMPIDESC   DIM     30        30        165        Item Description
TMPIAMNT   FORM    12.2       8        195        Item Amount
TMPRESP    DIM     45        45        203        Person Resp. for account
TMPRADD1   DIM     35        35        248        Resp. Address Line 1
TMPRADD2   DIM     35        35        283        Resp. Address Line 2
TMPRADD3   DIM     35        35        318        Resp. Address Line 3
TMPRADD4   DIM     35        35        353        Resp. Address Line 3
TMPRPOST   DIM      8         8        388        Resp. Postcode
TMPRPTEL   DIM     20        20        396        Resp. Private Telephone
TMPRBTEL   DIM     20        20        416        Resp. Business Telephone
TMPRMPHN   DIM     20        20        436        Resp. Mobile Telephone
TMPRREL    DIM     10        10        456        Resp. Relationship
TMPUDEF1   DIM      3         3        466        User Defined Field 1 (Cat G1)
TMPUDEF2   DIM      3         3        469        User Defined Field 2 (Cat G2)
TMPUDEF3   DIM      3         3        472        User Defined Field 3 (Cat G3)
TMPUDEF4   DIM      3         3        475        User Defined Field 4 (Cat G4)
TMPUIDEN   FORM     8         5        478        Unique Identifier
TMPCLNUM   FORM     8         5        483        Unique Claim Number
TMPADMN    DIM      3         3        488        Admission Class
TMPITOT    FORM     12.2      8        491        Item total amount
TMPPFLAG   FORM     1         2        499        Pathology Flag
.                                                    0 = No
.                                                    1 = Yes
TMPS4B3    FORM     1         2        501        S4B3 Flag
.                                                    0 = No
.                                                    1 = Yes
TMPBULK    DIM      3         3        503        Bulk Bill Code (Cat GB)
TMPBCODE   DIM      6         6        506        Fund/Insurance Co./Govt Code
TMPMASS    DIM     10        10        512        Medicare Assign Form Number
TMPMFLAG   FORM     1         2        522        Multiple Service Flag
.                                                    0 = No
.                                                    1 = Yes
TMPMAXR    FORM     3         3        524        Max. # of services to charge
TMPMAXD    FORM     3         3        527        ..within this number of days  
TMPSTEP    DIM      9         9        530        Item to stepdown to
TMPSTSB    DIM      3         3        539        Subitem to stepdown to
TMPFIXD    FORM     1         2        542        Fixed charged item?
.                                                    1 = Yes, 2 = No
TMPGSTA    FORM     1         2        544        GST Applicable ?
TMPGSTC    DIM      6         6        546        GST Code
TMPREFP    DIM      3         3        552        Referral Period (Cat RF)
TMPREFN    DIM      8         8        555        Referral Encounter number
TMPENCN    DIM      3         3        563        Encounter number
TMPHITM    DIM      9         9        566        Actual pathology Item Code
TMPHSUB    DIM      3         3        575        Actual pathology SubItem Num
TMPHTRN    DIM      3         3        578        Transaction Number
TMPHICI    DIM     18        18        581        Item key (HIC)
TMPACOI    DIM      1         1        599        After Car Override Indicator
TMPTDUR    DIM      3         3        600        Time Duration (mins)
TMPRPER    DIM      2         2        603        Referral Period (months, 1-98)
TMPROVR    DIM      3         3        605        Referral Override (Cat ro) 
TMPMPOV    DIM      1         1        608        Multi Procedure Override
TMPDSOV    DIM      1         1        609        Duplicate Service Override
TMPSTXT    DIM      100       100      610        Service Text
TMPASPF    DIM      1         1        710        Compensation Claim Indicator
.                                                 0 or Blank = No
.                                                 1 = Yes
TMPASPC    DIM      10        10       711        Alternate Service Provider HCP
TMPAICF    DIM      1         1        721        Not used
TMPAICV    DIM      3         3        722        Alternate IFC Issue Code Value
TMPNMPT    DIM      2         2        725        Number of Patients
TMPLSPN    DIM      6         6        727        LSPN
TMPSDCD    DIM      2         2        732        Self Deem Code (Cat Sd)
TMPLVIS    DIM      8         8        735        Linked Visit Number
TMPHOSI    DIM      1         1        743        Hospital Indicator
TMPROVC    DIM      3         3        744        Restrictive Override code
.
.End of Record                         747
.
. Redefine form fields from key
. -----------------------------
.
TMPSCAN   FORM     2
TMPIFLAG  FORM     2
TMPTRAN   FORM     3
.
.
PRITM3XX  IFILE  SQL,FIXED=591, KEY="U1-5,6-13,76-80,14-22,23-25,26-75,81-82,83-85"
PRITM3XY  IFILE  SQL,FIXED=591, KEY="U81-82,14-22,23-25,1-5,6-13,26-75,76-80,83-85"
PRITM3YY  IFILE  SQL,FIXED=591, KEY="U81-82,14-22,23-25,6-13,76-80,83-85"
.
. NAME     TYPE   LENGTH   PHYSICAL  START LOC.   DESCRIPTION
. ----     ----   ------   --------  ----------   -----------
TMPDIM13   DIM     13        13          1        Join variables
.----
.TMPSCODE  DIM      5         5          1        Multiple services code
.TMPSDATE  DIM      8         8          6        Service Date (CCYYMMDD)
.---
.TMPITEM   DIM      9         9         14        Item Code
.TMPSITEM  DIM      3         3         23        Sub Item Number
.
TMPDIM50   DIM      50        50        26        Join variables
.---
.DTMPROCS   DIM      3         3         26        Number of procedures
.TMPDEBT    DIM      8         8         29        Debtor or U/R number
.DTMPSCAN   DIM      2         2         37        Scan Flag
.                                                    0 = Debtor
.                                                    1 = PMI
.TMPPRAC    DIM      6         6         39        Medical Practice Code
.TMPCLAIM   DIM      3         3         45        Claim Type (Cat CL)
.TMPSDOCT   DIM     10        10         48        Service Doctor
.TMPRDATE   DIM      8         8         58        Referral Date (CCYYMMDD)
.TMPRDOCT   DIM     10        10         66        Referring Doctor
.-----
.
.TMPSTIME  DIM      5         5         76        Service Time (HH:MM)
.DTMPIFLG  DIM      2         2         81        Item Flag
.                                                    0 = MBS
.                                                    1 = AMA
.DTMPTRAN  DIM      3         3         83        Transaction Number
.TMPPIND   DIM      3         3         86        Patient Indicator (Cat GI)
.TMPADATE  DIM      8         8         89        Accident Date (CCYYMMDD)
.TMPREFD   DIM     50        50         97        Referral Details
.TMPOPS    DIM     20        20        147        Operation Codes
.TMPMESG   DIM      3         3        167        Message Code (PATMESG1)
.TMPSERVS  FORM     3         3        170        Number of Services
.TMPIDESC  DIM     30        30        173        Item Description
.TMPIAMNT  FORM    12.2       8        203        Item Amount
.TMPRESP   DIM     45        45        211        Person Resp. for account
.TMPRADD1  DIM     35        35        256        Resp. Address Line 1
.TMPRADD2  DIM     35        35        291        Resp. Address Line 2
.TMPRADD3  DIM     35        35        326        Resp. Address Line 3
.TMPRADD4  DIM     35        35        361        Resp. Address Line 4
.TMPRPOST  DIM      8         8        396        Resp. Postcode
.TMPRPTEL  DIM     20        20        404        Resp. Private Telephone
.TMPRBTEL  DIM     20        20        424        Resp. Business Telephone
.TMPRMPHN  DIM     20        20        444        Resp. Mobile Phone
.TMPRREL   DIM     10        10        464        Resp. Relationship
.TMPUDEF1  DIM      3         3        474        User Defined Field 1 (Cat G1)
.TMPUDEF2  DIM      3         3        477        User Defined Field 2 (Cat G2)
.TMPUDEF3  DIM      3         3        480        User Defined Field 3 (Cat G3)
.TMPUDEF4  DIM      3         3        483        User Defined Field 4 (Cat G4)
.TMPUIDEN  FORM     8         5        486        Unique Identifier
.TMPCLNUM  FORM     8         5        491        Unique Claim Number
.TMPADMN   DIM      3         3        496        Admission Class
.TMPITOT   FORM     12.2      8        499        Item total amount
.TMPBULK   DIM      3         3        507        Bulk Bill Code (Cat GB)
.TMPBCODE  DIM      6         6        510        Fund/Insurance Co./Govt Code
.TMPMASS   DIM     10        10        516        Medicare Assign Form Number
.TMPMFLAG  FORM     1         2        526        Multiple Service Flag
.                                                    0 = No
.                                                    1 = Yes
.
TMPABBRV   DIM      4         4        528        Standard abbreviation
TMPMITEM   FORM     1         2        532        Inserted Multiple Item ?
.                                                    0 = No
.                                                    1 = Yes
.TMPMAXR   FORM     3         3        534        Max. # of services to charge
.TMPMAXD   FORM     3         3        537        ..within this number of days  
.TMPSTEP   DIM      9         9        540        Item to stepdown to
.TMPSTSB   DIM      3         3        549        Subitem to stepdown to
.TMPFIXD   FORM     1         2        552        Fixed charged item?
.TMPGSTA   FORM     1         2        554        GST Applicable ?
.TMPGSTC   DIM      6         6        556        GST Code
.TMPREFP   DIM      3         3        562        Referral Period
.TMPREFN   DIM      8         8        565        Referral Encounter number
.TMPENCN   DIM      3         3        573        Encounter number
.TMPHITM   DIM      9         9        576        Item Code
.TMPHSUB   DIM      3         3        585        Sub Item Number
.TMPHTRN   DIM      3         3        588        Transaction Number
.End of Record                         591
.
.
. Redefine form fields from key
. -----------------------------
.
TMPROCS    FORM     3
.TMPSCAN   FORM     2
.TMPIFLAG  FORM     2
.TMPTRAN   FORM     3
.
TMPCASH    FILE     ASCII, FIXED=256
.******************************************************************************
.*                                 CONSTANTS                                  *
.******************************************************************************
CODECL    INIT      "CL"
CODEDT    INIT      "DT"
CODEGB    INIT      "GB"
CODEGI    INIT      "GI"
.
ESC       INIT      033
.
FMSPRI    INIT      "fmspriaf"
FORMP01   FORM      "0.01"
FORMP02   FORM      "0.02"
FORMP03   FORM      "0.03"
FORMP04   FORM      "0.04"
FORM85P0  FORM      "85.00"
.
HPCASH    INIT      "Cash"
HPCHEQ    INIT      "Cheque"
HPCRED    INIT      "Credit Card"
HPMERC    INIT      "Merchant Card"
HPMONEY   INIT      "Money Order"
.
NBNKDEPS  FORM      8.2
ONEHUND   FORM      "100"
.
PAYMENT1  INIT      "Cash"
PAYMENT2  INIT      "Cheque"
PAYMENT3  INIT      "Credit Card"
PAYMENT4  INIT      "Merchant Card"
PAYMENT5  INIT      "Money Order"
.
S4B3      INIT      "S4B3"
.
.
Z20       INIT      "ZZZZZZZZZZZZZZZZZZZZ"
+
.******************************************************************************
.*                             GLOBAL VARIABLES                               *
.******************************************************************************
ADJTOTAL  FORM      9.2
CLAIMDTE  DIM       10
CLAIMNUM  DIM       20
CLAIMTYP  DIM       3
CMDLINE   DIM       227
CONCATDS  DIM       30
COPINV    FORM      1
COUNTR    FORM      2
CURRDEP   FORM      12.2
.CREDTOT   FORM      8.2
.
DEPTOTAL  FORM      12.2
DESCITEM  DIM       21
DIM10A    DIM       10
DIM11     DIM       11
DIM14A    DIM       14
DIM34     DIM       34
DISPS4B3  DIM       4
.
EMPLNAME  DIM       30
.
FILEOPEN  DIM       30
FLAGBULK  FORM      1
FLAGCASH  FORM      1
FLAGEND3  FORM      1
FLAGFRST  FORM      1
FLAGHOLD  FORM      1
FLAGSING  FORM      1
FLAGSOME  FORM      1
FNAME2    DIM       8
FNAME3    DIM       8
FORM0P2   FORM      0.2
FORM8P2   FORM      8.2
FORM8P4   FORM      8.4
.
GSTTOTAL  FORM      12.2
HOWPAID   DIM       13
.
INDICATR  DIM       1
INVTOTAL  FORM      12.2
ITEM      DIM       9
ITEMCHAR  DIM       1
.
JULDAY4   FORM      4
JWKDAY4   DIM       4
.
LINTOTL   FORM      12.2
LINGSTA   FORM      8.2
.
OUTSTAND  FORM      12.2
.
PAYMENT   DIM       15
PDESC18   DIM       18
PINVPAID  FORM      9.2
PINVTOT   FORM      9.2
PLINTOT   FORM      8.2
PRIMTYPE  DIM       30 
PRITEM    DIM       15
PROCS     FORM      3
.
REFDATE   DIM       10
REQUESTS  FORM      3
RPERIOD   DIM       20
.
SAVAMT    FORM      12.2
SAVCLAIM  DIM       3
SAVDEP    FORM      12.2
SAVEDATE  DIM       8
SAVIFLAG  FORM      2
SAVITEM   DIM       9
SAVKEY22  DIM       22
SAVKEY85  DIM       85
SAVPRAC   DIM       6
SAVRDATE  DIM       8
SAVRDOCT  DIM       10
SAVSCODE  DIM       5
SAVSDATE  DIM       8
SAVSDOCT  DIM       10
SAVSITEM  DIM       3
SAVSTIME  DIM       5
SAVPIND   DIM       3
SAVTCIND  DIM       1
SAVUNIQ   FORM      8
SAVHICI   DIM       18
SHORTDOC  DIM       20
.
TEMPAMNT  FORM      12.2
TEMPINDC  DIM       1
TEMPTOTV  FORM      12.2
.
TMPSCODE  DIM      5         5          1        Multiple services code
TMPDEBT    DIM      8         8          1        Debtor or U/R number
DTMPSCAN   DIM      2         2          9        Scan Flag
TMPPRAC    DIM      6         6         11        Medical Practice Code
TMPCLAIM   DIM      3         3         17        Claim Type (Cat CL)
TMPSDOCT   DIM     10        10         20        Service Doctor
TMPRDATE   DIM      8         8         30        Referral Date (CCYYMMDD)
TMPRDOCT   DIM     10        10         38        Referring Doctor
TMPSDATE   DIM      8         8         48        Service Date (CCYYMMDD)
TMPSTIME   DIM      5         5         56        Service Time (HH:MM)
DTMPIFLG   DIM      2         2         61        Item Flag
.                                                   0 = MBS
.                                                   1 = AMA
TMPITEM    DIM      9         9         63        Item Code
TMPSITEM   DIM      3         3         72        Sub Item Number
DTMPTRAN   DIM      3         3         75        Transaction Number
.
DTMPROCS   DIM      3         3         26        Number of procedures
.
VLINENO   FORM      3
.
TMPOITEM  DIM       9                  * Original Item in stepdown    *I-123419
TMPOSITM  DIM       3                  * Orig Sub-Item in stepdown    *I-123419
WORKDATE  DIM       8
+
