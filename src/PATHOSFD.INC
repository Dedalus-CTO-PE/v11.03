. *****************************************************************************
. *                                                                           *
. * Include Name  : PATHOSFD.INC                                              *
. *                                                                           *
. * Function      : File Definition include for Patient                       *
. *                 Hospital Database                                         *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : pathospf.dat                                              *
. *                                                                           *
. * Keys          : KEY 2, KEY 4                                              *
. *                                                                           *
. * Modifications : 21/08/89 Graeme Williams                                  *
. *                 Include written                                           *
. *                 22/08/89 Graeme Williams                                  *
. *                 Added the variables for the PATNOTES incl.                *
. *                 25/01/90 Graeme Williams                                  *
. *                 Added HOSRUNR, reducing size of HOSSPAR                   *
. *                 22/05/1992  Graeme Williams        SRF 114798             *
. *                 Added PTHOACTV - active/inactive flag                     *
. *                 31/01/1994    Justin Coates                               *
. *                 Added PTHORUNB (for the normal RUN macro for IBAMRT21)    *
. *****************************************************************************
.
PATHOSP1  IFILE     SQL, FIXED=128, KEY="U1-4"
PATHOSP2  IFILE     SQL, FIXED=128, KEY="U5-6"
.
.Name     Type      Length  Phys.  Start  Description
.-------  ----      ------  -----  -----  --------------------------
HOSCODE   DIM       4          4       1  HOSPITAL CODE
DHOSINDX  DIM       2          2       5  UNIQUE IDENTIFIER (1 to 20)
HOSDESC   DIM       30        30       7  HOSIPTAL DESCRIPTION
HOSRUN    DIM       30        30      37  RUN COMMAND (Unique Ports)
HOSRUNR   DIM       30        30      67  RUN COMMAND (Batch recording)
PTHOACTV  DIM       1          1      97  Active/Inactive indicator
.                                           Blank = active
.                                           "I"   = inactive
PTHORUNB  DIM       20        20      98  RUN COMMNAD for Patient Billing MRT21
HOSSPAR   DIM       10        10     118  SPARE VARIABLE
.End of Record                       128
.
.  redefine form fields from key
.  -----------------------------
.Name     Type      Length  Start  Description
.-------  ----      ------  -----  --------------------------
HOSINDX   FORM      2           1  UNIQUE IDENTIFIER (1 to 20)
.
.         The following variables are used by the PATNOTES include for the
.         display of available case notes.
.
NOTEDTYP  FORM      1         * Parameter. 0 = Normal, 1 = Enquiry program
NOTEVERT  FORM      2         * Save variable for starting line number
.
