. V5.07.00  17/12/1999 Steve Armstrong (copied from UK)
. *----------------------------------------------------------------------
. * Include Name  :   DGTRPLFD.INC
. *
. * Function      :    File Definition include for Datagate
. *                    Reply Table - for solicited RGR messages
. *
. * File Type     :   SQL
. *
. * File Name     :   dgtrplaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
DGTRPLA1   IFILE    SQL, FIXED=315, KEY="U1-3,59-108,237-244,245-252"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DGRPRPLY  DIM       3      3         1    Reply Indicator
DGRPSTAT  DIM       5      5         4    Status Code
DGRPERRD  DIM      50     50         9    Error Description
DGRPPAS1  DIM      50     50        59    Pass Field 1
DGRPPAS2  DIM      50     50       109    Pass Field 2
DGRPPAS3  DIM      50     50       159    Pass Field 3
DGRPURNO  DIM       8      8       209    New U/R Number
DGRPNHSN  DIM      20     20       217    NHS Number
DGRPDATE  DIM       8      8       237    Creation Date
DGRPTIME  DIM       8      8       245    Creation Time
DGRPPROG  DIM       8      8       253    Originating Program ID
DGRPUSER  DIM       4      4       261    User ID           
DGRPSPAR  DIM      50     50       265    Spare Filler
.
.End of Record                     315
.
