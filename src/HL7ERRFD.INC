. *****************************************************************************
. *                                                                           *
. *       Include Name : HL7ERRFD.INC                                         *
. *                                                                           *
. *       Function     : File definition include for                          *
. *                      Error Segment                                        *
. *                                                                           *
. *                                                                           *
. *       File Type    : SQL                                                  *
. *                                                                           *
. *       File Name    : hl7erraf.dat                                         *
. *                                                                           *
. *       Keys         : KEY22                                                *
. *                                                                           *
. *       Modifications:                                                      *
. *                                                                           *
. *****************************************************************************
.
HL7ERR01  IFILE     SQL, FIXED=203, KEY="U1-20,21-22"
.
.Name     Type   Length   Physical   Start Loc.   Description
.----     ----   ------   --------   ----------   -----------
DERRIN01  DIM      20        20           1       Message id
DERRIN02  DIM       2         2          21       Counter
ERR001    DIM      80        80          23       Error code & location
ERR002    DIM     100       100         103       Spare
.
.End of Record                          203
.
.Redefine form field from key
.----------------------------
.Name     Type   Length   Start Loc.   Description
.----     ----   ------   ----------   -----------
ERRIN01   FORM     20          1       Message id
ERRIN02   FORM      2         21       Counter
.
ERR00101  DIM       3          3       Segment id
ERR00102  DIM       5          5       Sequence
ERR00103  DIM       5          5       Field position
ERR00104  DIM      67         67       Code identifying error
+
.

