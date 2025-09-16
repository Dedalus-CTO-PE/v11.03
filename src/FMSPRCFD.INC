. *************************************************************************
. *                                                                       *
. *  Include Name    :   FMSPRCFD.INC                                     *
. *                                                                       *
. *  Function        :   File Def'n Include for Financial Management      *
. *                      Print Codes                                      *
. *                                                                       *
. *  File Type       :   SQL                                              *
. *                                                                       *
. *  File Name       :   fmsprcaf.dat                                     *
. *                                                                       *
. *  Keys            :   KEY3                                             *
. *                                                                       *
. *  Modifications   :   15.09.1998 B.G.Ackland                           *
. *                                 Allow for overline print type         *
. *                      30.07.1991 Neeriem Dye                           *
. *                                 Added FMPRSUPP field                  *
. *                                                                       *
. *                                                                       *
. *************************************************************************
.
FMSPRCA1  IFILE  SQL, FIXED=93, KEY="U1-3" 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMPRCODE  DIM       3      3        1     Print Code
FMPRDESC  DIM       20     20       4     Print Code Description
FMPRPT1B  DIM       3      3        24    Print Type Before Account 1
FMPRPT2B  DIM       3      3        27    Print Type Before Account 2
FMPRPT3B  DIM       3      3        30    Print Type Before Account 3
FMPRPT1A  DIM       3      3        33    Print Type After Account 1
FMPRPT2A  DIM       3      3        36    Print Type After Account 2
FMPRPT3A  DIM       3      3        39    Print Type After Account 3
FMPRUNDL  FORM      1      2        42    Draft Underline
.                                         0 - No
.                                         1 - After
.                                         2 - Before
.                                         3 - Both
FMPRUNDC  DIM       1      1        44    Draft Underline Character
FMPRBLIN  FORM      1      2        45    Blank lines Preceeding (9-New Page)
FMPRALIN  FORM      1      2        47    Blank lines After      (9-New Page)
FMPRBOLD  FORM      1      2        49    Draft Bold 0 = No
FMPRSUPP  DIM       1      1        51    Suppress post acc printing (1=yes)
.
FMPRSPAR  DIM       41     41       52    Spare
.
.End of Record                      93
.
