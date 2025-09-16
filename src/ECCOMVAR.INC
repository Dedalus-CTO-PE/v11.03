.******************************************************************************
.*  Include Name  : ECCOMVAR.PBL                                              *
.*  Description   : Variables for SELEOCID                                    *
.*  Author        : Howellsy                                                  *
.******************************************************************************
.
.         Temporary File Definition - Episodes        
.         ------------------------------------
.
TEMPB     IFILE SQL, FIXED=111, KEY="U1-8,9-16,17-21"
KEYB      INIT      " 111 U1-8,9-16,17-21"
.
.NAME     TYPE    LENGTH     PHYSICAL     START     DESCRIPTION
.----     ----    ------     --------     -----     -----------
XXRDAT    DIM       8           8           1       Referral Date
XXURNO    DIM       8           8           9       U/R Number
XXEPNO    DIM       5           5           17      Episode Number
XXREAS    DIM       50          50          22      Referral Reason/Diagnosis
XXRHCP    DIM       6           6           72      Responsible HCP 
XXACCN    DIM       20          20          78      ACC Number      
XXPURC    DIM       3           3           98      Expected Purchaser
XXSTAT    FORM      1           2          101      EOC Status        
XXCDAT    DIM       8           8          103      Date EOC Closed   
.End of Record                             111
.
.         Temporary File Definition - Unlinked Events
.         -------------------------------------------
.
TEMPC     IFILE SQL, FIXED=66, KEY="U1-8,9-16,17-18"
TEMPC2    IFILE SQL, FIXED=66, KEY="U45-45,1-8,9-16,17-18"
KEYC      INIT      " 66 U1-8,9-16,17-18 U45-45,1-8,9-16,17-18"
.
.NAME     TYPE    LENGTH     PHYSICAL     START     DESCRIPTION
.----     ----    ------     --------     -----     -----------
XXDAT1    DIM       8           8           1       Event Date 
XXEVN1    DIM       8           8           9       Event Number 
XXHOS1    DIM       2           2           17      Hospital        
XXTYP1    FORM      2           2           19      Event Type     
XXDOC1    DIM       6           6           21      Doctor/Clinic   
XXHSP1    DIM       3           3           27      Hospital (Multi Hosp) 
XXDIA1    DIM       15          15          30      Diagnosis             
XXSEL1    DIM       1           1           45      Selected 0=No,1=Yes
XXDDE1    DIM       20          20          46      Doctor Description 
.End of Record                              66
.
.         Temporary File Definition - Episode Events
.         -------------------------------------------
.
TEMPD     IFILE SQL, FIXED=66, KEY="U1-8,9-16,17-18"
TEMPD2    IFILE SQL, FIXED=66, KEY="U45-45,1-8,9-16,17-18"
KEYD      INIT      " 66 U1-8,9-16,17-18 U45-45,1-8,9-16,17-18"
.
.NAME     TYPE    LENGTH     PHYSICAL     START     DESCRIPTION
.----     ----    ------     --------     -----     -----------
XXDAT2    DIM       8           8           1       Event Date 
XXEVN2    DIM       8           8           9       Event Number 
XXHOS2    DIM       2           2           17      Hospital        
XXTYP2    FORM      2           2           19      Event Type     
XXDOC2    DIM       6           6           21      Doctor/Clinic   
XXHSP2    DIM       3           3           27      Hospital (multi hosp)
XXDIA2    DIM       15          15          30      Diagnosis             
XXSEL2    DIM       1           1           45      Selected 0=No,1=Yes
XXDDE2    DIM       20          20          46      Doctor Description 
.End of Record                              66
.
CFNAMEO   DIM       8
TEMPO     IFILE     SQL, FIXED=4, KEY="U1-3"
PRFIXO    INIT      "EOC01D"
.
KEYO      INIT      " 4 U1-3"
TMPKEY    DIM       21[16]
TMPKEY1   DIM       18[5]
TMPKEY2   DIM       18[5]
FNAMEB    DIM       8
FNAMEC    DIM       8
FNAMED    DIM       8
LSTRKEY   DIM       18
USTRKEY   DIM       18
LCOUNT    FORM      2
UCOUNT    FORM      2
CURVERT   FORM      2
POSVIS    FORM      2
SELECTED  FORM      1
BOXNO     FORM      1
SCREENL   FORM      1
SCREENU   FORM      1
LNOPT     FORM      1
LPOPT     FORM      1
UNOPT     FORM      1
UPOPT     FORM      1
LEOF      FORM      1
UEOF      FORM      1
.
SDAT      DIM       8
SEVN      DIM       8
SHOS      DIM       2
STYP      FORM      2
SDOC      DIM       6
SHSP      DIM       3
SSEL      DIM       1
.
EOCENQ    FORM      1
ORIGACCN  DIM       20
DOCTDESC  DIM       20
.
. these are the different type of events displayed
.
MVEVN01   INIT      "A&E       "
MVEVN02   INIT      "O/P Att.  " 
MVEVN03   INIT      "Admission "
MVEVN04   INIT      "Cancelled "
MVEVN05   INIT      "Discharged"
MVEVN06   INIT      "On-Leave  "
MVEVN07   INIT      "Pre-Adm.  "
MVEVN08   INIT      "Community "
MVEVN09   INIT      "Waiting   "
MVEVN10   INIT      "I/P Book  "
MVEVN11   INIT      "O/P Ref.  "
MVEVN12   INIT      "O/P Book  "
MVEVN13   INIT      "Dis Nurs A"
MVEVN14   INIT      "Dis Nurs D"
MVEVN15   INIT      "Maternity "
MVEVN16   INIT      "Orig Ref. "
.
VTYPE     FORM       2
VDIAG     DIM        15
.
DISSTAT   DIM       1
CHOICE    DIM       2
TNUMB     FORM      2
DIM20     DIM       20
DIM20A    DIM       20
DIM16     DIM       16 
DIM17     DIM       17 
DIM30     DIM       30
DIM17A    DIM       17
OPBRA     INIT      " ("
ISBUILD   INIT      "isbuild "
ISERASE   INIT      "iserase "
SOPTION   FORM      2
SAVKEY8   DIM       8
COUNT     FORM      3
IARYNO    FORM      2     * Item array subscript
DIM15A    DIM       15
FORM5     FORM      5
FORM12    FORM      12
SCREEN    FORM      2
COUNTER   FORM      2
CMDLINE   DIM       80
MRCNNOHS  FORM      2
HOSPCNT   FORM      2
XXDPATH   DIM       120
FPRGID    DIM       5
FPRGNAM   DIM       8
EOCADDED  FORM      1
VISITNO   FORM      8
FORKEDTO  FORM      1
.
CODEHP    INIT      "HP"
OPEN      INIT      "Open  "
CLOSED    INIT      "Closed"
DCLOSEOC  FORM      1
LOCKREC   FORM      1
.
CODEC     INIT      "C "
CODEM     INIT      "M "
CODER     INIT      "R "
CODET     INIT      "T "
CODEP1    INIT      "P1"
CODEP2    INIT      "P2"
CODEP3    INIT      "P3"
CODEP4    INIT      "P4"
CODEP5    INIT      "P5"
CODEP6    INIT      "P6"
XAGE      DIM       3
DSMOKE    DIM       3
XWKAGE    DIM       2
.
REFFLAG   FORM      1
