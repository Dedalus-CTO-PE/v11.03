.  **********************************************************************
.  *                                                                    *
.  *     Include Name : OPRPRFFD.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Theatre             *
.  *                    OPERATING TEAM PREFERENCE                       *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : oprprfaf.dat                                    *
.  *                    opraudpr.dat  (audits)                          *
.  *                                                                    *
.  *     Keys         : KEY 32,KEY19                                    *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *          V9.04.01  24/02/2005 Lina Vo     CAR 56404                *
.  *                    Increase size of Preference from DIM9 to DIM15  *
.  *                    Added Quantity field. Increase key size.        *
.  **********************************************************************
.  *                    V5.01.01  20/12/89  E.Phan                      *
.  *                    Changed key & length.                           *
.  *                    22/01/90 Bill dew addition of audit vars        *
.  *                    09/10/90  J. Ceniza.  Changed according to new  *
.  *                    specs.                                          *  
.  *                    09/09/1994 Max White    Hawkes Bay Mods         *
.  *                    Added new Doctor Code field OPPRDCOD to key, to *
.  *                    allow for Surgeon & Anaesthetist Preferences    *
.  *                    to be recorded for the same Team.               *
.  **********************************************************************
.Audit File Definition
.---------------------
OPRAUDPR  IFILE     SQL, FIXED=91, KEY="D1-8,9-16,17-18,19-19"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPPRAUDD  DIM       8         8       1        Date of change
OPPRAUDT  DIM       8         8       9        Time of change
OPPRAUDP  DIM       2         2       17       Port doing change
OPPRAUDR  DIM       1         1       19       Record type
.                                                 A = Added 
.                                                 B = Before image
.                                                 C = After image
.                                                 D = Deleted
OPPRAUDS  FORM      1         2       20      Record status
.                                                 1 = Not printed
.                                                 2 = Printed
OPPRAUDO  DIM       4         4       22      Operator id that did the change
.
.Data File Definition
.--------------------
OPRPRFA1  IFILE     SQL, FIXED=66, KEY="U1-10,11-11,27-32,12-26"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPPRUNIQ  DIM       10       10       1        Unique id for theatre booking
OPPRTEAM  DIM       1        1        11       Team Number
OPPRPREF  DIM       15       15       12       Preference Code
OPPRDCOD  DIM       6        6        27       Doctor Code
OPPRPQTY  FORM      3        3        33       Quantity
OPPRSPAR  DIM       30       30       36       Spare
.
.End of Record                        66
.
