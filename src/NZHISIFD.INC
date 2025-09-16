.------------------------------------------------------------
. Data variables required for  NZHISIIO.PBL 
.
. Modifications -
. V10.00.01  06.03.2013  Jill Parkinson CAR 281060
.                        Changed NZTMPD25 from 25 to 40
.------------------------------------------------------------
.
DLINE23A  DIM       80
DATTR23A  DIM       80
PRAEXIST  FORM      1        * flag to indicate whether Ad num existed
DOTPIP    INIT      ".pip"
.
MWSPRE    INIT      "mwstmp"
MWFNAME1  DIM       8                     * tmp save file for medical warnings
MWSTEMP1  IFILE     SQL, FIXED=143, KEY="U1-3,4-6" 
DNPRE     INIT      "dnrtmp"
DNFNAME1  DIM       8                     * tmp save file for donor details
DNRTEMP1  IFILE     SQL, FIXED=12, KEY="U1-3" 
GSPRE     INIT      "gsrtmp"
GSFNAME1  DIM       8
GSRTEMP1  FILE      ASCII, FIXED=74       * tmp save file for given/sur detail 
SUPRE     INIT      "surtmp"
SUFNAME1  DIM       8
SURTEMP1  FILE      ASCII, FIXED=59       * tmp save file for surname details
ALRPRE    INIT      "alrtmp"
ALFNAME1  DIM       8                      * tmp save file for alerts
ALRTEMP1  IFILE     SQL, FIXED=15, KEY="U1-2,3-5"    
.
NZIBSTX   INIT      002      * start of text marker
NZOPTION  FORM      1        * option selection in surname search method
NZHISNEW  FORM      1        * KURN Ind.- 0=Normal UR
.                            *            1=Register Existing National Patient
.                            *            2=Register New Patient
NZIBCADD  FORM      1        * Address details changed? (1=Yes)
NZIBVNEW  FORM      1        *
NZIBCBAS  FORM      1        * Basic details changed? (1=Yes)
NZIBCCAD  FORM      1        * Person to Contact address changed? (1=Yes)
NZIBCCON  FORM      1        * Contact details changed? (1=Yes)
NZIBPERS  FORM      1        * Person to Contact changed? (1=Yes)
NZIBCNHI  FORM      1        * NHI Number has changed (both non blank)  (1=Yes)
NZIBCNAM  FORM      1        * Changed Name (1=Yes)
NZIBNMAS  FORM      1        * do we have a valid U/R no. flag (Register opt)
NZIBDOBS  FORM      1        * doing DOB search?  1=Yes
NZIBOLDA  FORM      1        * old patients name saved as alias?   1=Yes
NZIBREGO  FORM      1        * Register (National Database) chosen?  1=Yes
NZIBRFIL  INIT      "nzibrf"
NZIBRFIF  DIM       8
NZIBDM25  DIM       25
SAVNMPI   DIM       20
NZTMPURP  INIT      "             $"   * temp UR number prefix
NZADMUR   FORM      1                  * 1=use admission number, 2=use UR number
FULLPATH  DIM       70
NZIBCNT   FORM      2
NZIBIGCK  FORM      1        * ignore check in PMS04 if = 1 (inconsistent data)
NZIBFRA1  FORM      1
NZIBFRA2  FORM      2
NZIBFRB2  FORM      2
NZIBFRC2  FORM      2
NZIBFRD2  FORM      2
TOTALCNT  FORM      3
TOTALMWS  FORM      3
SCRNCNT   FORM      1
SRCHCITY  DIM       30
NZDOB     DIM       8
.NZGIVEN   DIM       25[15]
NZOPENOK  FORM      1
NZIBDM30  DIM       30
NZIBDM40  DIM       40
NZIBSVCL  FORM      2
NZIBSVCV  FORM      2
NZFORM2A  FORM      2
NZFORM2B  FORM      2
NZFORM3A  FORM      3
NZFORM3B  FORM      3
.NZADDR    DIM       67[15]
NZCOMMA   INIT      ", "
NZSVKY61  DIM       61
NZSVKY71  DIM       71
NZRECDSP  FORM      3
NZSVDONR  DIM       10       * save donor string for update
.
NZIBNMPI  DIM       7        * NMPI Number
NZIBCPTR  DIM       22       * Continuation Pointer
NZIBNMCF  DIM       1        * name change flag
.
.Header
NZIBACTN  DIM       2        * Action Identifier
NZIBUSER  DIM       10       * User Id
NZIBVDU   DIM       10       * VDU Id
.NZIBRFIF  DIM       8        * Reply FIFO Name
.
.Reply
NZIBAPPC  DIM       2        * Application  Accept="AA", Error="AE", Reject="AR"
NZIBERRN  DIM       4        * Error Number
NZIBERRD  DIM       80       * Error Description
.
.PMI details
NZIBSURN  DIM       25       * Surname/Family name
NZIBGIV1  DIM       20       * Given Name 1
NZIBGIV2  DIM       20       * Given Name 2
NZIBGIV3  DIM       20       * Given Name 3
NZIBPRNM  DIM       1        * preferred name indicator
NZIBADD1  DIM       35       * Address Line 1
NZIBADD2  DIM       30       * Address Line 2
NZIBSUBR  DIM       30       * Suburb
NZIBCITY  DIM       30       * City
NZIBCTRY  DIM       30       * Country
NZIBPANO  DIM       7        * Pre Allocated HCU Id
NZIBDOB   DIM       8        * Date of Birth
NZIBDDTH  DIM       8        * Date of Death
NZIBDOMC  DIM       4        * Domicile code
NZIBRESI  DIM       1        * Resident Status
NZIBETHN  DIM       2        * Ethnicity
NZIBETH2  DIM       2        * Ethnicity
NZIBETH3  DIM       2        * Ethnicity
NZIBSEX   DIM       1        * Sex/Gender
NZIBACNT  DIM       1        * Alias Name Count (0-4)
NZIBALSR  DIM       25[4]    * 1st Surname/Family name Alias
NZIBALG1  DIM       20[4]    * 1st Given Name 1 Alias
NZIBALG2  DIM       20[4]    * 1st Given Name 2 Alias
NZIBALG3  DIM       20[4]    * 1st Given Name 3 Alias
NZIBALPN  DIM       1[4]     * Preferred Name indicator
NZIBSCRB  DIM       1        * Overide Scrub
NZIBDUPL  DIM       1        * Overide Duplicates
NZIBUPDT  DIM       1        * Overide Update
.
.GETHCU Reply
NZIBALNM  DIM       1        * Alternative Name flag   Y/N
NZIBMWDN  DIM       1        * MW's donor flag "Y" or "N"
NZIBMWST  DIM       1        * MW's status flag  D/W/blank (Danger/Warning)
NZIBMERG  DIM       1        * Merge Status "N", "O" or "M"
NZIBALID  DIM       7        * HCU/NMPI alternative Id
NZIBLAST  DIM       8        * Date of last update of NHI Record
.
.
.SRHHCU
NZIBSTYP  DIM       1        * Search Type
NZIBSTIM  INIT      "987"    * Search TimeOut
NZIBRLIM  INIT      "15"     * Reply Limit
NZIBNSTY  DIM       1        * HCU Name search type "M", "S" or "W"
NZIBASTY  DIM       1        * HCU Address search type "M", "S" or "W"
NZIBMGEN  DIM       1        * Gender Match
NZIBMDOB  DIM       8        * DOB Match
NZIBMAGE  DIM       3        * Age Match
NZIBMPAG  DIM       2        * Permitted Age range
.
.SRHHCU reply
NZIBNMFN  DIM       3        * No. matches found
NZIBNMRE  DIM       3        * No. matches remaining
NZIBNMRP  DIM       2        * No. matches in this reply
.
.NXTHCU
.NZIBCPTR  DIM       22       * Continuation Pointer
.NZIBSTIM  INIT      "999"    * Search TimeOut
.NZIBRLIM  INIT      "15"    * Reply Limit
NZIBTSRC  DIM       1         * Terminate Search flag  "Y" or "N"
.
.GETAKA
.NZIBNMPI  DIM       7        * HCU Id / NMPI No.
.NZIBCPTR  DIM       22       * Continuation Pointer
NZIBMXRP   INIT      "15"     * Maximum per reply
.
. GETAKA reply
.NZIBNMFN  DIM       3        * No. matches found
.NZIBNMRE  DIM       3        * No. matches remaining
NZIBNARP   DIM       2        * No. aliases in this reply
.NZIBCPTR  DIM       22       * Continuation Pointer
. upto 15 name fields 
.
.
.GETMWS
.NZIBNMPI  DIM       7        * HCU Id / NMPI No.
.NZIBCPTR  DIM       22       * Continuation Pointer
NZIBMWRP   INIT      "15"    * Maximum per reply
.
.GETMWS reply
.NZIBMWDN   DIM       1       * Medical Warnings flag "Y" or "N"
NZIBMRGS   DIM       1        * Merge status "N" "O" or "M"
NZIBNMWF   DIM       3        * No. of Medical Warnings found
NZIBNMWR   DIM       2        * No. of Medical Warnings in this reply
.NZIBCPTR  DIM       22       * Continuation Pointer
.
NZIBSEVR   DIM       1        * Severity code
NZIBDTON   DIM       8        * Date of Onset
NZIBWTXT   DIM       70       * MW Text description
NZIBMARC   DIM       8        * MARC approval date
NZIBWDTU   DIM       8        * MW Date of Last Update
...NZIBFACC   DIM       20       * Facility code Changed 23/7/96
NZIBFACC   DIM       4        * Facility code
NZIBDOCC   DIM       5        * MW Doctor code
NZIBSYSI   DIM       2        * MW Coding System identifier
NZIBMWCD   DIM       6        * MW Code
NZIBENTM   DIM       14       * MW Entry Time
.
.MRGHCU
NZIBALNO   DIM       7        * HCU Alternative identifier
.
.
.GETHCE
.NZIBNMPI  DIM       7        * HCU Id / NMPI No.
.NZIBCPTR  DIM       22       * Continuation Pointer
.NZIBMXRP  INIT      "15"     * Maximum per reply
.
.GETHCE reply
.NZIBMRGS   DIM       1       * Merge status "N" "O" or "M"
.NZIBNMWF   DIM       3        * No. of Medical Warnings/HCE's found
.NZIBNMWR   DIM       2        * No. of Medical Warnings/HCE's in this reply
.NZIBCPTR  DIM       22       * Continuation Pointer
NZARSTDT   DIM       8[15]    * start date
NZARENDT   DIM       8[15]    * end date
NZAREVND   DIM       70[15]   * Event description
NZARRPTF   DIM       20[15]   * Reporting facility Changed 23/7/96
.
.
.GETDNR (reply)
NZIBSTSU  DIM       10        * donor status summary
NZIBPCSN  DIM       25        * Patient Contact Surname
NZIBPCG1  DIM       20        * Patient Contact Given 1
NZIBPCG2  DIM       20        * Patient Contact Given 2
NZIBPCG3  DIM       20        * Patient Contact Given 3
CONTNAME  DIM       20        * Variable Used to format Contact Name
NZIBPCA1  DIM       35        * Patient Contact Address 1
NZIBPCA2  DIM       30        * Patient Contact Address 2
NZIBPCSB  DIM       30        * Patient Contact Suburb
NZIBPCTW  DIM       30        * Patient Contact City/Town
NZIBPCCT  DIM       30        * Patient Contact Country
NZIBWKPH  DIM       25        * Patient Contact Works phone no.
NZIBAHPH  DIM       25        * Patient Contact After hours phone no.
NZIBRELC  DIM       2         * Patient Contact relationship code
NZIBDTLU  DIM       8         * Date of last update
.
.
.UPDDNR
NZIBUACT  DIM       1         * Update action "C", "M" or "D"
.
. save variables to check if basic details have changed
NZSVSURN  DIM       25
NZSVGIV1  DIM       20
NZSVADD1  DIM       35
NZSVADD2  DIM       25
NZSVADD3  DIM       25
NZSVADD4  DIM       25
NZSVADD5  DIM       25
NZSVDOB   DIM       8
NZSVDDTH  DIM       8
NZSVRESI  DIM       3
NZSVSEX   DIM       1
NZSVETHN  DIM       3
NZSVETH2  DIM       3
NZSVETH3  DIM       3
.
NZSVPCNM  DIM       25
NZSVPCA1  DIM       35
NZSVPCA2  DIM       30
NZSVPCA3  DIM       30
NZSVPCA4  DIM       30
NZSVPCA5  DIM       30
NZSVPCPP  DIM       25
NZSVPCBP  DIM       25
NZSVPCRL  DIM       10
NZSVPCPC  DIM       4
.
DNREXIST  FORM      1
DIM30A    DIM       30
FORM3Z    FORM      3
FORM4CUR  FORM      4
FORM4AA   FORM      4
FNTN      DIM       1                       * function to call in proc NZGET
NZTMPD25  DIM       40
NZTMPF1   FORM      1
RDLNGTH   FORM      4        * length of reply FIFO
NZRFIFA1  FIFO      ASCII, FIXED=RDLNGTH   * read(reply) FIFO
WRLNGTH   FORM      4        * length of write FIFO
NZWFIFA1  FIFO      ASCII, FIXED=WRLNGTH   * write FIFO
.
