.
.    V11.01.01 17/02/2021  J.Tan           TSK 0888639
.              Added SAVTHT11  for saved key for mmbs file (index 1 Thet)
.    V11.00.01 06/10/2020  J.Tan          Task 0897709
.              Added DIAGFLAG,PROCFLAG
.
.****************************************************************************
.*                            PATHFCVR.INC                                  *
.*                  Health Fund Claim Form Print Variables                  *
.****************************************************************************
.
ANATYPE   DIM       1             * Anaesthetic Type
.                                      Space = None
.                                      1 = Local
.                                      2 = Intravenous
.                                      3 = Regional
.                                      4 = General
.******************************************** start of addition        *I-62428
BABYFLAG  FORM      1                       * Baby print control flag
BBYNO     FORM      1                       * number of Linked Babies
BBYDOB    DIM       8[9]                    * Linked Baby Date of Birth
BBYGNAME  DIM       25[9]                   * Linked Baby Given name
BBYSNAME  DIM       20[9]                   * Linked Baby Surname
BBYSEX    DIM       1[9]                    * Linked Baby Sex
BBYURNO   DIM       8[9]                    * Linked Baby UR Number
.********************************************   end of addition        *I-62428
CATBT     INIT      "BT"
CATCC     INIT      "CC"                                               *I-57547
CATD      INIT      "D "
CATFI     INIT      "FI"
CATOA     INIT      "OA"
CATP      INIT      "P "
CATS      INIT      "S "
CHARD     INIT      "d"
COUNTR    FORM      1
DISDATE   DIM       8             * full discharge date
DSCHFLAG  FORM      1             * discharge flag
.                                     1 = discharge record found
.                                     0 = not a discharge record
.DTRDATE   DIM       8             * DTR transaction date
.
ENDTIMED  DIM       5             * End time
ENDTIMEF  FORM      4             * End time
.
FORM5     FORM      5
FRSTFLAG  FORM      1             * first loop flag
.                                        0 = first loop
.                                        1 = not first loop
FLDNUM    FORM      5             * data field number
LOSDAYS   FORM      3             * length of stay days
MMBSFLAG  FORM      1             * mbs record flag
.                                        0 = no lines printed
.                                        1 = one line printed
.                                        2 = second line printed
.                                        3 = third line printed
.                                        4 = fourth line printed
.                                        5 = more lines to print
.                                        6 = no more MBS records to print
ONE42     INIT      "142"
ONE43     INIT      "143"
ONE44     INIT      "144"
ONE45     INIT      "145"
ONE46     INIT      "146"
ONE47     INIT      "147"
ONE48     INIT      "148"
ONE49     INIT      "149"
ONE50     INIT      "150"
ONE51     INIT      "151"
ONE52     INIT      "152"
ONE53     INIT      "153"
ONE54     INIT      "154"
ONE55     INIT      "155"
ONE56     INIT      "156"
ONE57     INIT      "157"
ONE58     INIT      "158"
ONE59     INIT      "159"
ONE60     INIT      "160"
ONE61     INIT      "161"
ONE62     INIT      "162"
ONE63     INIT      "163"
ONE64     INIT      "164"
ONE65     INIT      "165"
ONE66     INIT      "166"
ONE67     INIT      "167"
ONE68     INIT      "168"
ONE69     INIT      "169"
ONE82     INIT      "182"
ONE83     INIT      "183"
ONE84     INIT      "184"
ONE85     INIT      "185"
ONE86     INIT      "186"
ONE87     INIT      "187"
ONE88     INIT      "188"
ONE89     INIT      "189"
ONE90     INIT      "190"
ONE91     INIT      "191"
ONE92     INIT      "192"
ONE93     INIT      "193"
ONE94     INIT      "194"
ONE95     INIT      "195"
ONE96     INIT      "196"
ONE97     INIT      "197"
OPRFOUND  FORM      1             * 0 = using input usage for op. times
.
THREE01   INIT      "301"                                              *I-57547
THREE02   INIT      "302"
THREE03   INIT      "303"
THREE04   INIT      "304"
THREE05   INIT      "305"
THREE06   INIT      "306"
THREE12   INIT      "312"
THREE13   INIT      "313"
THREE14   INIT      "314"
THREE15   INIT      "315"
.                                   1 = using input morbidity data for op. times
PREVSTTM  DIM       5             * Previous Theatre Start time        *I-57547
PREVETTM  DIM       5             * Previous Theatre End time          *I-57547
.
PAGEDESC  INIT      "Page: "
SAVACOM   DIM       1             * saved accommodation code
SAVDAT1   DIM       8
SAVDAT2   DIM       8
MBSKEY22  DIM       22            * saved key for dtr file (index 1) MBS record
SAVKEY8A  DIM       8             * saved key for admiss. in NEWBB000  *I-62428
SAVKEY11  DIM       11            * saved key for mmbs file (index 1)
SAVTHT11  DIM       11            * saved key for mmbs file (index 1 Thet)
SAVKEY22  DIM       22            * saved key for dtr file (index 1)
SAVRATE   FORM      6.2           * save daily rate
SERVFLAG  FORM      1             * other services flag
.                                        0 = no lines printed
.                                        1 = one line printed
.                                        2 = second line printed
.                                        3 = third line printed
.                                        4 = fourth line printed
.                                        5 = more records to print
.                                        6 = no more oth. serv. records to print
DIAGFLAG  FORM      1             * Diagnosis flag
PROCFLAG  FORM      1             * Procedure flag
SEDTIMED  DIM       5             * Saved end time
SEDTIMEF  FORM      4             * Saved end time
SSTTIMED  DIM       5             * Saved start time
SSTTIMEF  FORM      4             * Saved start time
.
SRTTIMED  DIM       5             * Start time
SRTTIMEF  FORM      4             * Start time
.
THETIMES  FORM      1             * Theatre times                      *I-57547
.                                        0 = no lines printed
.                                        1 = one line printed
.                                        2 = second line printed
.                                        3 = third line printed
.                                        4 = more records to print
.                                        5 = no more records to print
.
TRANFLAG  FORM      1             * transfer flag
.                                        0 = no lines printed
.                                        1 = one line printed
.                                        2 = second line printed
.                                        3 = third line printed
.                                        4 = fourth line printed
.                                        5 = more records to print
.                                        6 = no more transfer records to print
ZED20     INIT      "zzzzzzzzzzzzzzzzzzzz"
