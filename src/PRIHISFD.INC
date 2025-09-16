.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   PRIHISFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File Definition include for Private Practice  *
.  *                        Test History Details of Pathology Tests       *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   prithisf.dat                                  *
.  *                                                                      *
.  *  Keys              :   KEY 37                                        *
.  *                                                                      *
.  *  Modifications     :   08/10/92  Steve Armstrong                     *
.  *                        Modified PRTHDEBT from a FORM 8 to a DIM 8    *
.  *                        to handle alphanumeric debtor numbers         *
.  *      V6.01.01  04/06/1994  Graeme Williams   SRF 129518              *
.  *                Added a number of services to the history file        *
.  *                                                                      *
.  ************************************************************************
.Data File Definition
.--------------------
PRITHIS1   IFILE SQL, FIXED=50, KEY="U1-8,9-10,11-18,19-23,24-25,26-34,35-37"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRTHDEBT  DIM       8      8        1     Debtor Number
DPRTHSCN  DIM       2      2        9     Scan Flag
.                                             0 = Debtor
.                                             1 = PMI
PRTHDATE  DIM       8      8        11    Service Date
PRTHTIME  DIM       5      5        19    Service Time
DPRTHFLG  DIM       2      2        24    Item Flag
.                                           0 = MBS
.                                           1 = AMA
PRTHITEM  DIM       9      9        26    Item Number
PRTHSUBN  DIM       3      3        35    Subitem Number
PRTHNUMB  FORM      4      3        38    Number of services charged
PRTHSPAR  DIM       9      9        41    Spare Variable
.
.End of Record                      50
.
.
. Redefine form fields from key
. -----------------------------
.
PRTHSCAN  FORM      2
PRTHFLAG  FORM      2
