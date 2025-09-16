+
.******************************************************************************
.*                                                                            *
.* Include Name     : VARDSOPS.INC                                            *
.*                                                                            *
.* Description      : Common variables for COMDSOPS DSPDSOPS & INPDSOPS       *
.*                                                                            *
.******************************************************************************
.*     Any changes to this procedure need to be done in release 6.?? also     *
.******************************************************************************
.*                                                                            *
.* Author           : Greg Horvat  23/09/1996                                 *
.*                                                                            *
.* Modifications    :                                                         *
.*                                                                            *
.*       V10.11.01  15/08/2017  Davin            TSK 0842626                  *
.*                  Added table PATRDCFD (Restrict Diagnosis Codes Grouping)  *
.*       V10.10.02  04/04/2017  J.Tan             TSK 0297904                 *
.*                  Commented out duplicated vars(added WEBDINVS in IBAMRT53) *
.*       V10.10.01  17/03/2017  Davin             TSK 0833093                 *
.*                  Added F3A and F3B                                         *
.*       V10.06.01  10/04/2014  J.Tan             CAR 304813                  *
.*                  Added 2015/2016 WIES22 file (patweiaf)                    *
.*       V10.05.01  09/09/2014  Davin             CAR 296980                  *
.*                  Added 2014/2015 WIES21 file (patw21af)                    *
.*       V10.03.03  07/08/2013  Davin             CAR 284960                  *
.*                  Added 2013/2014 WIES20 file (patw20af)                    *
.*       V10.03.02  07/08/2012  Davin             CAR 270114                  *
.*                  Added 2012/2013 WIES19 file (patw19af)                    *
.*       V10.03.01  12/06/2012  Ebon Clements     CAR 262659                  *
.*                  Commented out CARETYPE                                    *
.*       V10.02.02  10/08/2011  Davin             CAR 238236                  *
.*                  Added 2011/2012 WIES18 file (patw18af)                    *
.*       V10.02.01  30/03/2011  Mike Laming       CAR 240107                  *
.*                  Remove PATMDSFD/IO - Obsolete                             *
.*       V10.00.01  23/03/2010  Davin             CAR 216505                  *
.*                  Added 2010/2011 WIES17 file (patw17af)                    *
.******************************************************************************
.*        V9.12.01  09/06/2009  Davin             CAR 199724                  *
.*                  Added 2009/2010 WIES16 file (patw16af)                    *
.******************************************************************************
.*        V9.10.01  16/07/2008  Davin             CAR 163993                  *
.*                  Added 2008/2009 WIES15 file (patw15af)                    *
.******************************************************************************
.*        V9.09.02  01/08/2007  Steve Armstrong   CAR 145161                  *
.*                  Removed all reference to WIES 7, 8, 9 and 10 - no longer  *
.*                  supported.                                                *
.*        V9.09.01  17/07/2007  Steve Armstrong   CAR 145161                  *
.*                  Added 2007/2008 WIES14 file (patw14af)                    *
.******************************************************************************
.*        V9.07.01  07/07/2006  Peter Vela               CAR 111764           *
.*                  Added 2006/2007 WIES13 file (patw13af)                    *
.******************************************************************************
.*        V9.04.01  26/07/2005  Peter Vela               CAR 66960            *
.*                  Added 2005/2006 WIES12 file (patw12bf)                    *
.******************************************************************************
.*        V9.03.03  26/07/2004  Henry Son                CAR 51504            *
.*                  Add WIES12 (2004/2005 changes)                            *
.*        V9.03.02  11/06/2004  Mike Laming   CAR 49016  July 2004 PRS/2      *
.*                  - Increase sex description to 8 for "Intersex"            *
.*        V9.03.01  08/08/2003  CAR 42039   Henry Son                         *
.*                  Added VARWIS11 routine & PATW11FD                         *
.******************************************************************************
.*        V9.02.02  25/07/2002  Davin                                         *
.*                  Added VARWIS10 routine & PATW10FD                         *
.*        V9.02.01  08/11/2001  Davin                                         *
.*                  Added VARWIES9 routine & PATVW9FD                         *
.******************************************************************************
.*        V5.09.B02 12/02/2001  Greg Horvat                                   *
.*                  Added new variables to make changing the no of items on   *
.*                  the screens easier                                        *
.*        V5.09.B01 13/10/2000  Pat Dirito                                    *
.*                  Added WARNCNT, WEBWRN[] & WEBERR for web error outputs    *
.*        V5.08.06  25/08/2000  Davin                                         *
.*                  Added WIES8 variables                                     *
.*        V5.08.05  04/08/2000  Greg Horvat      SRF 4535                     *
.*                  Changed CODTYP & MAPSCR to be 3 digit numerics            *
.*        V5.08.04  03/07/2000  Greg Horvat                                   *
.*                  Added PCCLCODE to encoder input file                      *
.*        V5.08.03  27/06/2000  Greg Horvat                                   *
.*                  Removed the episode counters from the tempfiles           *
.*        V5.08.02  30/05/2000  Greg Horvat                                   *
.*                  Added the health fund file                                *
.*        V5.08.01  01/05/2000  Greg Horvat                                   *
.*                  Changed the encoder input file format                     *
.*        V5.08.B05 10/03/2000  Greg Horvat                                   *
.*                  - Recompiled for PATECDFD & PATECOFD                      *
.*                  - Removed the episode indexs as there no longer required  *
.*        V5.08.B04 08/03/2000  Greg Horvat      SRF 637854                   *
.*                  Added DSDFEPS OPDFEPS POPDTE POPSTTM POPEDTM & removed    *
.*                  OPSDTE8 OPSSTTME & OPSEDTME                               *
.*        V5.08.B03 16/02/2000  Greg Horvat      SRF 637204                   *
.*                  Removed CODEDATE & added MRTCONFD, ECREQCNT & WRNCNT      *
.*        V5.08.B02 09/02/2000  Davin                                         *
.*                  Changed the WIES variables                                *
.*        V5.08.B02 12/01/2000  Davin                                         *
.*                  Changed ADJMVDAY to FORM12                                *
.*        V5.08.B01 24/12/1999  Greg Horvat                                   *
.*                  Changed the disease & operation episode indexs            *
.*        V5.07.09  23/11/1999  Davin                                         *
.*                  Changed WIES7DRG to 4 chars                               *
.*        V5.07.08  22/11/1999  Davin  SRF 635838                             *
.*                  Added CODEDATE & RESUBFLG                                 *
.*        V5.07.07  16/11/1999  Davin                                         *
.*                  Added DISPDRGN for WIES7 screen display                   *
.*        V5.07.06  16/10/1999  Greg Horvat                                   *
.*                  Changed for new complex mapping file structure            *
.*        V5.07.05  15/10/1999  Davin  SRF 635047                             *
.*                  Added some vars for WIES                                  *
.*        V5.07.04  17/09/1999  Greg Horvat                                   *
.*                  Added the 5th tempfile & DRG & MDC codes                  *
.*        V5.07.03  02/08/1999  Davin                                         *
.*                  Added - variables for print details option                *
.*                        - variables for PATWIES7                            *
.*        V5.07.02  17/06/1999  Davin                                         *
.*                  Added SAVDSEPS & SAVOPEPS                                 *
.*        V5.07.01  28/04/1999  Davin                                         *
.*                  Added TEMP4A & some other vars for ENCODER                *
.*        V5.06.01  29/06/1998  Greg Horvat                                   *
.*                  Ported from release 6.05                                  *
.*                                                                            *
.******************************************************************************
.
          INC       PATCALAG/INC            * CALCAGE variables
          INC       PATDHEAD/INC            * Standard header variables
          INC       VARWISCM/INC            * Common variables for WIES
          INC       VARWIS11/INC            * Variables for PATWIS11   *I-90301
          INC       VARWIS12/INC            * Variables for PATWIS12   *I-51504
          INC       VARWIS13/INC            * Variables for PATWIS13
          INC       VARWIS14/INC            * Variables for PATWIS14
          INC       VARWIS15/INC            * Variables for PATWIS15
          INC       VARWIS16/INC            * Variables for PATWIS16
          INC       VARWIS17/INC            * Variables for PATWIS17
          INC       VARWIS18/INC            * Variables for PATWIS18
          INC       VARWIS19/INC            * Variables for PATWIS19
          INC       VARWIS20/INC            * Variables for PATWIS20
          INC       VARWIS21/INC            * Variables for PATWIS21
.
          INC       MRTCONFD/INC            * Control file
          INC       PATASFFD/INC            * Admission special funding file
          INC       PATCANFD/INC            * Cancer codes file
          INC       PATCDEFD/INC            * Casemix data extract file
          INC       PATCHCFD/INC            * Care class file
          INC       PATCFAFD/INC            * Claim code file
          INC       PATCMOFD/INC            * Morbidity changes file
          INC       PATCMPFD/INC            * Complex mapping file
          INC       PATCODFD/INC            * Codes file
          INC       PATCONFD/INC            * Control file
          INC       PATCRDFD/INC            * Cancer reg file
          INC       PATDGWFD/INC            * DRG desc/weight file
          INC       PATDICVR/INC            * Disease keyword search variables
          INC       PATDSCFD/INC            * Disch file
          INC       PATECAFD/INC            * Episode details file
          INC       PATECDFD/INC            * Episode disease coding file
          INC       PATECMFD/INC            * Episode morbidity changes file
          INC       PATECOFD/INC            * Episode operation coding file
          INC       PATFN1FD/INC            * Health fund file
          INC       PATFX1FD/INC            * Health fund file
          INC       PATICDFD/INC            * ICD disease file
          INC       PATICOFD/INC            * ICD operation file
          INC       PATICUFD/INC            * ICU file
          INC       PATMA1FD/INC            * Master file
          INC       PATMI1FD/INC            * Admin file
          INC       PATMMBFD/INC            * Medical records MBS file
          INC       PATNOBFD/INC            * No bed file
          INC       PATODCFD/INC            * Operation/changes file
          INC       PATPGRFD/INC            * Patient grouper file
          INC       PATTRNFD/INC            * Transfer file
          INC       PATW11FD/INC            * Victorian cost weights (03/04)
          INC       PATW12FD/INC            * Victorian cost weights (04/05)
          INC       PTW12BFD/INC            * Victorian cost weights (05/06)
          INC       PATW13FD/INC            * Victorian cost weights (06/07)
          INC       PATW14FD/INC            * Victorian cost weights (07/08)
          INC       PATW15FD/INC            * Victorian cost weights (08/09)
          INC       PATW16FD/INC            * Victorian cost weights (09/10)
          INC       PATW17FD/INC            * Victorian cost weights (10/11)
          INC       PATW18FD/INC            * Victorian cost weights (11/12)
          INC       PATW19FD/INC            * Victorian cost weights (12/13)
          INC       PATW20FD/INC            * Victorian cost weights (13/14)
          INC       PATW21FD/INC            * Victorian cost weights (14/15)
          INC       PATWIEFD/INC            * Victorian cost weights (15/16)
          INC       PATRDCFD/INC
          INC       PATWR1FD/INC            * Ward file
.
. ----- Tempfile definitions -----
.
TEMP1A    IFILE     SQL, FIXED=94, KEY="U1-2"
TEMP1B    IFILE     SQL, FIXED=94, KEY="U3-4,1-2"
FILELIN1  INIT      " 94 U1-2 U3-4,1-2"
.
.Name     Type   Length   Physical   Start   Description
.----     ----   ------   --------   -----   -----------
DDSCODNO  DIM       2         2        1     Disease code no
DDSEPS    DIM       2         2        3     Disease episode
DSCODPFX  DIM       1         1        5     Disease code prefix
DSCOD     DIM       9         9        6     Disease code
DSCODDSC  DIM      63        63       15     Disease code description
DSCODDTE  DIM       8         8       78     Disease coding date (ccyymmdd)
DSACCDTE  DIM       8         8       86     Disease accident date (ccyymmdd)
.
.End of Record                        94
.
DSCODNO   FORM      2                       * Disease code no
DSEPS     FORM      2                       * Disease episode
.
SDSCODNO  FORM      2                       * Saved disease code no
SDSEPS    FORM      2                       * Saved disease episode
SDSCODFX  DIM       1                       * Saved disease code prefix
SDSCOD    DIM       9                       * Saved disease code
SDSCODDS  DIM      63                       * Saved disease code description
SDSCODDT  DIM       8                       * Saved disease coding date
SDSACCDT  DIM       8                       * Saved disease accident date
.
.
TEMP2A    IFILE     SQL, FIXED=108, KEY="U1-2"
TEMP2B    IFILE     SQL, FIXED=108, KEY="U3-4,1-2"
FILELIN2  INIT      " 108 U1-2 U3-4,1-2"
.
.Name     Type   Length   Physical   Start   Description
.----     ----   ------   --------   -----   -----------
DOPCODNO  DIM       2         2        1     Operation code no
DOPEPS    DIM       2         2        3     Operation episode
OPCODPFX  DIM       1         1        5     Operation code prefix
OPCOD     DIM       9         9        6     Operation code
OPCODDSC  DIM      63        63       15     Operation code description
OPCODDTE  DIM       8         8       78     Operation coding date (ccyymmdd)
OPDTE     DIM       8         8       86     Operation date (ccyymmdd)
OPSTTIME  DIM       5         5       94     Operation start time
OPEDTIME  DIM       5         5       99     Operation end time
OPBLKNO   DIM       4         4      104     Operation code block no
.
.End of Record                       108
.
OPCODNO   FORM      2                       * Operation code no
OPEPS     FORM      2                       * Operation episode
.
SOPCODNO  FORM      2                       * Saved operation code no
SOPEPS    FORM      2                       * Saved operation episode
SOPCODFX  DIM       1                       * Saved operation code prefix
SOPCOD    DIM       9                       * Saved operation code
SOPCODDS  DIM      63                       * Saved operation code description
SOPCODDT  DIM       8                       * Saved operation coding date
SOPDTE    DIM       8                       * Saved operation date
SOPSTTME  DIM       5                       * Saved operation start time
SOPEDTME  DIM       5                       * Saved operation end time
SOPBLKNO  DIM       4                       * Saved operation code block no
.
.
TEMP3A    IFILE     SQL, FIXED=48, KEY="U1-8" * Same format as MRT65 tempfile
.
.Name     Type   Length   Physical   Start   Description
.----     ----   ------   --------   -----   -----------
.DAADMNO  DIM       8         8        1     Admin no
.KEY8     DIM       8         8        9     U/R no
.KEY3     DIM       3         3       17     Ward
.KEY8     DIM       8         8       20     Discharge date
.KEY20    DIM      20        20       28     Name
.
.End of Record                        48
.
.
TEMP4A    IFILE     SQL, FIXED=103, KEY="U1-1,2-3,4-12" * Same format as
.                                                         ENCODER.PBL tempfile
.Name     Type      Length   Physical   Start   Description
.----     ----      ------   --------   -----   -----------
ENCCODTP  DIM       1        1          1       Type of code, O - operation
.                                                             D - disease
DENCCNT   DIM       2        2          2       Record counter
ENCCOD    DIM       9        9          4       Disease/operation code
ENCDSC    DIM       70       70         13      Code description
ENCDSTYP  DIM       1        1          83      Disease type
ENCOPTYP  DIM       1        1          84      Operation type
ENCOPDTE  DIM       8        8          85      Operation date (ccyymmdd)
ENCOPSTM  DIM       5        5          93      Operation start time
ENCOPETM  DIM       5        5          98      Operation finish time
.
.End of record                         103
.
ENCCNT    FORM      2                       * Record counter
.
.
TEMP5A    FILE      ASCII, FIXED=10
.
.Name     Type   Length   Physical   Start   Description
.----     ----   ------   --------   -----   -----------
DRGCODE   DIM       4         4        1     DRG code
MDCCODE   DIM       4         4        5     MDC code
PCCLCODE  DIM       1         1        9     PCCL code
.
.End of record                         10
.
.
TEMP6A    IFILE     SQL, FIXED=77, KEY="U1-2,3-4"
FILELIN6  INIT      " 77 U1-2,3-4"
.
.Name     Type   Length   Physical   Start   Description
.----     ----   ------   --------   -----   -----------
DDSMPNO   DIM       2         2        1     Disease map no
.DDSCODNO DIM       2         2        3     Disease code no
DSMPCD    DIM       9         9        5     Disease map code
DSMPDS    DIM      63        63       14     Disease map code desc
.
.End of Record                        77
.
DSMPNO    FORM      2                       * Disease map no
.
.
TEMP7A    IFILE     SQL, FIXED=77, KEY="U1-2,3-4"
FILELIN7  INIT      " 77 U1-2,3-4"
.
.Name     Type   Length   Physical   Start   Description
.----     ----   ------   --------   -----   -----------
DOPMPNO   DIM       2         2        1     Operation map no
.DOPCODNO DIM       2         2        3     Operation code no
OPMPCD    DIM       9         9        5     Operation map code
OPMPDS    DIM      63        63       14     Operation map code desc
.
.End of Record                        77
.
OPMPNO    FORM      2                       * Operation map no
.
. ----- Procedure variables -----
.
MAXSCRAY  EQU       20                      * Max screen array
.
ACCDCNT   FORM      2                       * Activity code count
ACCDRCNT  FORM      2                       * Activity code req count
ACUTTYPE  DIM       1                       * Set to 'A' if acute
ADD       FORM      1                       * Add screen flag
APCDRCNT  FORM      2                       * Activity/placement code req count
AUTCDFLG  FORM      1                       * Auto coding flag
.
BJDAY     FORM      3                       * For CALCAGE
.
CALDAYS   FORM      8                       * For NHOSPDAY
CARECLSS  DIM       3                       * Care class
..CARETYPE  DIM       3                       * Care type
CJDAY     FORM      3                       * For CALCAGE
CNCODCNT  FORM      2                       * Cancer code counter
CODE      DIM       2                       * For PATCODKY
CODTYP    FORM      3                       * Coding type
.                                               9 - ICD9 coding
.                                             101 - ICD10 version 1 coding
.                                             102 - ICD10 version 2 coding
.COMFLAG   FORM      1                       * Complex mapping flag
CURDTE8   DIM       8                       * Current date (ccyymmdd)
.
DISPACLD  DIM       20                      * Print account class description
DISPADTE  DIM       10                      * Print admission date
DISPAGE   DIM       3                       * Print age
DISPALOS  DIM       4                       * Print ALOS (total acute days)
DISPBDTE  DIM       10                      * Print birthdate
DISPDDTE  DIM       10                      * Print discharge date
DISPDRGN  DIM       20                      * Print WIES7 DRG
DISPGVER  DIM       3                       * Print grouper version
DISPLOS   DIM       4                       * Print LOS (from NHOSPDAY)
DISPNAME  DIM       40                      * Print name
DISPNLOS  DIM       4                       * Print non-acute LOS (LOS - acute)
DISPSEX   DIM       8                       * Print sex       * was 6  *C-49016
DISPSMOD  DIM       22                      * Print separation mode
DISPTLOS  DIM       4                       * Print total LOS
DISPWARD  DIM       7                       * Print ward
DPLINNO   FORM      1                       * Display line no flag
DPSCRFLG  FORM      1                       * Display screen flag
DSBCKCVT  FORM      2                       * Disease background position
DSCHG     FORM      1                       * Disease change flag
DSDFEPS   FORM      1                       * Disease default episode flag
DSENDCVT  FORM      2                       * Disease end position
DSEXDTFG  FORM      1                       * Disease existing data flag
DSMODE    DIM       1                       * Keyin disease mode
.                                               C - change
.                                               I - insert
DSSCRAY   DIM       2[MAXSCRAY]             * 1st record on each disease screen
DSSCRMX   FORM      2                       * Maximum disease screens
DSSCRNO   FORM      2                       * Current disease screen
DSSMPAY   DIM       4[MAXSCRAY]             * 1st rec on each disease map scr
DSSMPMX   FORM      2                       * Maximum disease map screens
DSSMPNO   FORM      2                       * Current disease map screen
DSSRTCVT  FORM      2                       * Disease start position
.
ECODECNT  FORM      2                       * 'E' code counter
ECREQCNT  FORM      2                       * 'E' code required counter
ENCODCNT  FORM      2                       * 800/900 code counter
EPISODE   FORM      1                       * Episode screen flag
EPSCHG    FORM      1                       * Episode change flag
EPSDTE8   DIM       8[36]                   * Episode dates (ccyymmdd)
EPSEDDTE  DIM       8                       * Episode end date (ccyymmdd)
.EPSFLAG   FORM      1                       * Episode details flag
EPSMAX    FORM      2                       * Maximum episodes
EPSSTDTE  DIM       8                       * Episode start date (ccyymmdd)
EPSTYP    DIM       3[36]                   * Episode type
EPSWKDTE  DIM       8                       * Episode work date (ccyymmdd)
ERRCNT    FORM      3                       * Error counter
ERRMSG    DIM       69                      * Error message
.
FNAME1    DIM       8                       * 1st tempfile name
FNAME2    DIM       8                       * 2nd tempfile name
FNAME3    DIM       8                       * 3rd tempfile name
FNAME4    DIM       8                       * 4th tempfile name
FNAME5    DIM       5                       * 5th tempfile name
FNAME6    DIM       8                       * 6th tempfile name
FNAME7    DIM       8                       * 7th tempfile name
FORM2A    FORM      2
FORM2B    FORM      2
F3A       FORM      3
F3B       FORM      3
.FROMDATE  DIM       8                       * For NHOSPDAY
.
GETNEXT   FORM      1                       * Get next flag
.
INSERT    FORM      1                       * Insert screen flag
INSMODE   FORM      1                       * Insert mode flag
ITMMAX    FORM      2                       * Maximum items on screen
ITMMIN    FORM      2                       * Minimum items on screen
ITMNO     FORM      2                       * Current item
.
KEY17A    DIM       17                      * Display variable
KEY17B    DIM       17                      * Display variable
KYEPSNO   FORM      1                       * Keying in episode coding flag
.
LOSDAYS   FORM      4                       * LOS days (from NHOSPDAY)
LPRFXCNT  FORM      1                       * 'L' disease prefix counter
.
MAP       FORM      1                       * Map screen flag
MAPSCR    FORM      3                       * Mapping screen
.                                               0 - No mapping
.                                               9 - ICD9 mapping
.                                             101 - ICD10 version 1 mapping
MAXITMSR  FORM      2                       * Maximum items on screen
MCODECNT  FORM      2                       * 'M' code disease counter
.
.NBRDAYS   FORM      4                       * For NHOSPDAY
NEXT      FORM      1                       * Next screen flag
.
OPBCKCVT  FORM      2                       * Operation background position
OPCHG     FORM      1                       * Operation change flag
OPDFEPS   FORM      1                       * Operation default episode flag
OPENDCVT  FORM      2                       * Operation end position
OPEXDTFG  FORM      1                       * Operation existing data flag
OPMODE    DIM       1                       * Keyin operation mode
.                                               C - change
.                                               I - insert
OPSCRAY   DIM       2[MAXSCRAY]             * 1st record on each operation scr
OPSCRMX   FORM      2                       * Maximum operation screens
OPSCRNO   FORM      2                       * Current operation screen
OPSMPAY   DIM       4[MAXSCRAY]             * 1st rec on each operation map scr
OPSMPMX   FORM      2                       * Maximum operation map screens
OPSMPNO   FORM      2                       * Current operation map screen
OPSRTCVT  FORM      2                       * Operation start position
.
PLCDCNT   FORM      2                       * Placement code count
PLCDRCNT  FORM      2                       * Placement code req count
POPDTE    DIM       8                       * Previous operation date
POPEDTM   DIM       5                       * Previous operation end time
POPSTTM   DIM       5                       * Previous operation start time
POST      FORM      1                       * Post screen flag
PREVIOUS  FORM      1                       * Previous screen flag
PREVTYPE  DIM       3                       * Previous care type
PRVATYPE  DIM       1                       * Previous acute care type
.
RESUBFLG  FORM      1                       * Re-submit flag when posting codes
.                                             (0=No, 1=Yes)
.
SAVDSEPS  FORM      2                       * Save disease episode number
SAVOPEPS  FORM      2                       * Save operation episode number
SCRMAX    FORM      2                       * Maximum screen
SCRNO     FORM      2                       * Current screen
SDSCNCD   DIM       9                       * Save the disease cancer code
SDSDGCD   DIM       9                       * Save the disease dagger code
SOPDGCD   DIM       9                       * Save the operation dagger code
SWAP      FORM      1                       * Swap screen flag
SWAPCOD1  FORM      2                       * Swap code 1
SWAPCOD2  FORM      2                       * Swap code 2
SWAPFLG   FORM      1                       * Swap flag
.
.TODATE    DIM       8                       * For NHOSPDAY
TOGGLE    FORM      1                       * Toggle screen flag
.
WIESDTE   DIM       8[36]                   * WIES episode end dates (ccyymmdd)
WIESFLG   FORM      1                       * Get next flag
WIESMAX   FORM      2                       * Maximum WIES episodes
WIESTYP   DIM       1[36]                   * WIES episode type
WRNCNT    FORM      2                       * Warning counter
WARNCNT   FORM      2                       * Warning counter
WEBWRN    DIM       40[10]                  * Warning Array
WEBERR    DIM       40                      * Output Web error
.
XFROMAP   FORM      1                       * Exit from map screen
+
.

