. *****************************************************************************
. *                                                                           *
. *       Include Name : HL7DSCFD.INC                                         *
. *                                                                           *
. *       Function     : File definition include for                          *
. *                      Continuation Pointer Segment                         *
. *                                                                           *
. *                                                                           *
. *       File Type    : SQL                                                  *
. *                                                                           *
. *       File Name    : hl7dscaf.dat                                         *
. *                                                                           *
. *       Keys         : KEY22                                                *
. *                                                                           *
. *       Modifications:                                                      *
. *                                                                           *
. *****************************************************************************
.
HL7DSC01  IFILE     SQL, FIXED=303, KEY="U1-20,21-22"
.
.Name     Type   Length   Physical   Start Loc.   Description
.----     ----   ------   --------   ----------   -----------
DDSCIN01  DIM      20        20           1       Message id
DDSCIN02  DIM       2         2          21       Counter
DSC00101  DIM      90        90          23       Continue pointer 1
DSC00102  DIM      90        90         113       Continue pointer 2
DSC002    DIM     100       100         203       Spare
.
.End of Record                          303
.
.Redefine form field from key
.----------------------------
.Name     Type   Length   Start Loc.   Description
.----     ----   ------   ----------   -----------
DSCIN01   FORM     20          1       Message id
DSCIN02   FORM      2         21       Counter

