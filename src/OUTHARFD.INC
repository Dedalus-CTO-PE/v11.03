. *****************************************************************************
. *                                                                           *
. * Include Name  : OUTHARFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Outpatients                        *
. *                 Hong Kong Attendance register                             *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : outharaf.dat                                              *
. *                                                                           *
. * Keys          : KEY28                                                     *
. *                                                                           *
. * I/O Include   : OUTHARIO.INC                                              *
. *                                                                           *
. * Author        : Justin Coates 18/11/1992                                  *
. *                                                                           *
. * Modifications :                                                           *
. *       V5.01.01  04/01/1993  Graeme Williams            SRF 119697         *
. *                 Added second index to the file                            *
. *       V5.01.02  04/01/1993  Graeme Williams            SRF 119697         *
. *                 Removed U/R number from the file                          *
. *       V5.02.01  28/03/1995  Helen Crick                                   *
. *                 Standardised FD                                           *
. *****************************************************************************
.
.Data File Definition
.--------------------
OUTHARA1  IFILE     SQL, FIXED=60, KEY="U1-6,7-12,13-20,21-25,26-28"
OUTHARA2  IFILE     SQL, FIXED=60, KEY="U1-6,7-12,13-20,21-25,29-33,26-28"
.
FILHARA1  INIT      "haraf"
FILHARA2  INIT      "haraf"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  --------------------------------------
OTHASITE  DIM       6          6       1  Site code
OTHACLIN  DIM       6          6       7  Clinic code
OTHADATE  DIM       8          8      13  Clinic date
OTHASTRT  DIM       5          5      21  Clinic start time
DOTHASLO  DIM       3          3      26  Slot number
OTHAATTM  DIM       5          5      29  Attendance Time
OTHASPAR  DIM       26         26     34  Spare variable
.End of Record                        60
.
.Redefine form fields from key
.-----------------------------
. Name    Type      Length
. ----    ----      ------
OTHASLOT  FORM      3
