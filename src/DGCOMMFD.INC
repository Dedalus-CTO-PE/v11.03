.**********************************************************************
.*  Include  : DGCOMMFD.INC                                           *
.*  Function : Store all common variables to datagate                 *
.*  Mods     :                                                        *
.*        V9.03.01  13/05/2004  Steve Armstrong      CAR 49679        *
.*                  PAS-CIS Product Integration                       *
.*                  Added variables for HL7CISIN                      *
.*        V5.08.01  28/01/2000  Steve Armstrong                       *
.*                  Mods to make APSTDATE DIM 10 instead of DIM 8     *
.**********************************************************************
.
APSTDATE  DIM       10                            * application start date
APSTTIME  DIM       5                             * application start time
.
CCDATE    DIM       13                            * CC Encoded date
CCDST     DIM       3                             * CC Encoded Dst External
CCENCODE  DIM       28                            * CC Encoded fields
CCNAME    DIM       6                             * CC Encoded Src CC Name
CCSRC     DIM       3                             * CC Encoded Src External
CDGMBUFF  DIM       1                             * dummy variable
.
DATAGATE  FORM      "1"                           * in datagate
DATETIME  DIM       14                            * current date/time
DGATE     DFILE                                   * datagate file
DGATEIN   DFILE                                   * datagate inbound file
DGATEOUT  DFILE                                   * datagate outbound file
DGMISC1   DIM       50                            * Miscellaneous 1
DGMISC2   DIM       50                            * Miscellaneous 2
DGMISC3   DIM       50                            * Miscellaneous 3
.
ERRRPROC  FORM      5                             * number of errors processed
.
FRSTGNAM  DIM       40
FULLGNAM  DIM       80
.
MESSTYPE  DIM       3                             * message type read
.
REPLYRPL  INIT      "RPL"                         * reply header
RPLYCODE  DIM       5                             * reply message code
RPLYDESC  DIM       50                            * reply message description
RPLYHEAD  DIM       3                             * reply message type header
.
SCNDGNAM  DIM       40
SP50      INIT      "                                                  "
SUCCPERC  FORM      3.2                           * % messages successful
SUCCPROC  FORM      5                             * no. success mess. processed
.
UPDFLAG   INIT      "{{"
.
.         INC       HL7CISVR/INC
          INC       PATECDFD/INC
