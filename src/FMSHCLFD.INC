. *************************************************************************
. *                                                                       *
. *  Include Name    :   FMSHCLFD.INC                                     *
. *                                                                       *
. *  Function        :   File Def'n Include for Financial Management      *
. *                      HCS Institution Set Up Table                     *
. *                                                                       *
. *  File Type       :   SQL                                              *
. *                                                                       *
. *  File Name       :   fmshclaf.dat                                     *
. *                                                                       *
. *  Keys            :   KEY3                                             *
. *                                                                       *
. *  Modifications   :                                                    *
. *************************************************************************
.
FMSHCLA1  IFILE SQL, FIXED=168, KEY="U1-3"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMHLINST  DIM       3      3        1     HCS Institution Code
.
FMHLDESC  DIM       35     35       4     Description
FMHLPILE  DIM       2      2        39    Ledger
FMHLPIS1  DIM       12     12       41    Debit Subj Codes - Basic
FMHLPIS2  DIM       12     12       53                     - Overheads
FMHLPIS3  DIM       12     12       65    Debit Account    - LSL
FMHLPIS4  DIM       12     12       77    Debit Subj Codes - Workcare
FMHLPIS5  DIM       12     12       89                     - Accrual
FMHLPIC1  DIM       12     12       101   Credit Accounts  - Cash
FMHLPIC2  DIM       12     12       113                    - Accrual
FMHLPIB1  DIM       4      4        125   Budget Type      - Cash
FMHLPIB2  DIM       4      4        129                    - Accrual
FMHLPIRS  DIM       4      4        133   Responsibility
FMHLPIDS  DIM       5      5        137   Dissection
FMHLPIP1  DIM       3      3        142   Cash Budget Prof - Basic
FMHLPIP2  DIM       3      3        145                    - Overhead
FMHLPITD  DIM       35     35       148   Transaction Description
.
FMHLSPAR  DIM       20     20       183   Spare Variable
.
.End of Record                      203
.
