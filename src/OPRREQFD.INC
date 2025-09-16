.  ****************************************************************************
.  *                                                                          *
.  *  Include Name  : OPRREQFD.INC                                            *
.  *                                                                          *
.  *  Function      : File Definition include for Theatre                     *
.  *                  INSTRUMENT AND TRAY ITEM REQUISITION                    * 
.  *                                                                          *
.  *  File Type     : SQL                                                     *
.  *                                                                          *
.  *                                                                          *
.  *  File Name     : oprreqaf.dat                                            *
.  *  Audit File    : opraudrq.dat                                            *
.  *                                                                          *
.  *  Keys          : KEY36, KEY19                                            *
.  *                                                                          *
.  *  Author        : Bill Dew         15/01/1990                             *
.  *                                                                          *
.  *  Modifications :                                                         *
.  *        V10.15.02 28/11/2019 Peter Vela Task 0871644                      *
.  *                  Removed Charges comment                                 *
.  *                  Added OPRQCHRG                                          *
.  *        V10.15.01 20/11/2019 Peter Vela Task 0871644                      *
.  *                  Added Comments and Charges                              *
.  *        V9.04.01  02/03/2005 Lina Vo    CAR 56404                         *
.  *                  Increased size of item field and added spare variable.  *
.  *                  Changed size of 1st index and added 2nd index.          *
.*                    Increased size of file.                                 *
.  *                  Audits added by Author.  I do it right the first time   *
.  *                : 09/10/90  J. Ceniza . Changed according to new specs    *
.  *                  09/09/1994 Max White    Hawkes Bay Changes              *
.  *                  Added new Doctor Code field OPRQDCOD to key, to         *
.  *                  allow for Surgeon & Anaesthetist Requisitions           *
.  *                  to be recorded for the same Team.                       *
.  ****************************************************************************
.Audit File Definition
.---------------------
OPRAUDRQ  IFILE     SQL, FIXED=95, KEY="D1-8,9-16,17-18,19-19"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPRQAUDD  DIM       8         8       1        Date of change
OPRQAUDT  DIM       8         8       9        Time of change
OPRQAUDP  DIM       2         2       17       Port doing change
OPRQAUDR  DIM       1         1       19       Record type
.                                                 A = Added 
.                                                 B = Before image
.                                                 C = After image
.                                                 D = Deleted
OPRQAUDS  FORM      1         2       20      Record status
.                                                 1 = Not printed
.                                                 2 = Printed
OPRQAUDO  DIM       4         4       22      Operator id that did the change
.
.Data File Definition
.--------------------
OPRREQA1  IFILE     SQL, FIXED=70, KEY="U1-10,11-11,34-39,12-14,15-15,16-30"
OPRREQA2  IFILE     SQL, FIXED=70, KEY="U1-10,11-11,34-39,16-30,15-15,12-14"
OPRREQA3  IFILE     SQL, FIXED=70, KEY="U1-10,11-11,34-39,15-15,16-30,12-14"
.
. NAME    TYPE   LENGTH  PHYSICAL START LOC.   DESCRIPTION
. ----    ----   ------  -------- ----------   -----------
OPRQUNIQ  DIM       10       10       1        Unique id for theatre booking
OPRQTEAM  DIM       1        1        11       Team number
OPRQCLSS  DIM       3        3        12       Class (Category OG)
OPRQTYPE  DIM       1        1        15       Item Type 
.                                              0 = Tray 
.                                              1 = Instrument
.                                              2 = Equipment 
.                                              3 = Comments
OPRQITEM  DIM       15       15       16       Item code
OPRQAMNT  FORM      3        3        31       Amount
OPRQDCOD  DIM       6        6        34       Doctor Code
OPRQCHRG  DIM       1        1        40       Charged 0 = No, 1 = Yes
OPRQSPAR  DIM       29       29       41       Spare Variable
.
.End of Record                        70
.
