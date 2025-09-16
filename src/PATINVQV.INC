.*********************************************************************
.* System         : Patient Management                               *
.* Include Name   : PATINVQV.INC                                     *
.* Description    : A list of variables, FD's and IO's needed for    *
.*                  PATINVQ.PBL include                              *
.* Date Written   : 27/05/1991                                       *
.* Modifications  :                                                  * 
.*        V5.10.B01 10/04/2001  Glenn Saunders                       *
.*                  Remove all references to PATSUR file (old sname).*
.*                  V5.02.00  21/04/95  Paul Howells  SRF 134947     *
.*                  Ported from 6.03                                 *
.*********************************************************************
.
CALLPOSN  FORM      1         * which line 24 prompt have
CNTINV    FORM      3         * number of invoices visit has
INVOUTST  FORM      6.2       * oustanding amount for invoices
.
INV01     DIM       9         * invoice number displayed
INV02     DIM       9         * invoice number displayed
INV03     DIM       9         * invoice number displayed
INV04     DIM       9         * invoice number displayed
INV05     DIM       9         * invoice number displayed
INV06     DIM       9         * invoice number displayed
INV07     DIM       9         * invoice number displayed
INV08     DIM       9         * invoice number displayed
INV09     DIM       9         * invoice number displayed
INV10     DIM       9         * invoice number displayed
INV11     DIM       9         * invoice number displayed
INV12     DIM       9         * invoice number displayed
INV13     DIM       9         * invoice number displayed
INV14     DIM       9         * invoice number displayed
INV15     DIM       9         * invoice number displayed
.
.         other keys may also be required for each FD/IO defined
.
NAME30    DIM       30        * doctor/clinic name
PAYTYP    DIM       13
PAYA      INIT      "CASH         "
PAYB      INIT      "CHEQUE       "
PAYC      INIT      "CREDIT CARD  "
PAYD      INIT      "MERCHANT CARD"
SAVEINV   DIM       8         * save invoice number
SAVEA     FORM      1         * save cheque flag (BIL03)
SAVEB     FORM      6.2       * save cheque total (BIL03)
SAVEC     FORM      1         * save payment type BIL03)
SAVED     DIM       8         * save receipt number (BIL03)
SAVEE     DIM       30        * save drawer (BIL03)
SAVEF     DIM       10        * save bank name (BIL03)
SAVEG     DIM       30        * save bank branch (BIL03)
SCRNFLAG  FORM      1         * redisplay flag
.
VIS01     DIM       24        * visit number displayed
VIS02     DIM       24        * visit number displayed
VIS03     DIM       24        * visit number displayed
VIS04     DIM       24        * visit number displayed
VIS05     DIM       24        * visit number displayed
VIS06     DIM       24        * visit number displayed
VIS07     DIM       24        * visit number displayed
VIS08     DIM       24        * visit number displayed
VIS09     DIM       24        * visit number displayed
VIS10     DIM       24        * visit number displayed
VIS11     DIM       24        * visit number displayed
VIS12     DIM       24        * visit number displayed
VIS13     DIM       24        * visit number displayed
VIS14     DIM       24        * visit number displayed
VIS15     DIM       24        * visit number displayed
VISCNT    FORM      2         * number of visits displayed
Z16       INIT      "zzzzzzzzzzzzzzzz"
.
.         FD's required
.
.>>>>>>>> INC       BOKRC1FD/INC            * booking file
.>>>>>>>> INC       OUTCLIFD/INC            * Op clinic file
.>>>>>>>> INC       OUTPREFD/INC            * Op pre-attendance file
.>>>>>>>> INC       PATCOMM/INC             * variables
.>>>>>>>> INC       PATCONFD/INC            * control file
.>>>>>>>> INC       PATDHEAD/INC            * variables for patient header
.>>>>>>>> INC       PATDO1FD/INC            * doctor file
.>>>>>>>> INC       PATMI1FD/INC            * admission file
.>>>>>>>> INC       PATPR1FD/INC            * preadmission file
.
.         I/O includes needed for PATINVQ.PBL
.
.>>>>>>>> INC       BOKRC1IO/INC            * booking file
.>>>>>>>> INC       OUTCLIIO/INC            * OP clinic file
.>>>>>>>> INC       OUTPREIO/INC            * Op pre-attendance file
.>>>>>>>> INC       PATDO1IO/INC            * doctor file
.>>>>>>>> INC       PATMI1IO/INC            * admission file
.>>>>>>>> INC       PATPR1IO/INC            * pre-admission file
.>>>>>>>> INC       PATSNDX/PBL             * soundex search
.>>>>>>>> INC       PATCOMN1/PBL            * KURN and MURN
.>>>>>>>> INC       PMIHEAD/PBL             * pmihead
.
.         labels needed for KURN
.
.>>>>>>>> GETSVAR
.>>>>>>>> REDISPS   RETURN
................................................................................
