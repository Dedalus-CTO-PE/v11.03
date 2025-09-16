. ****************************************************************************
. *                                                                          *
. * Include Name  : CCIUTLFD                                                 *
. *                                                                          *
. * Function      : File definition include for Clinical Costing             *
. *                      Patient Detail                                      *
. *                                                                          *
. * File Type     : SQL                                                      *
. *                                                                          *
. * File Name     : cciutlaf.dat                                             *
. *                                                                          *
. * Keys          : KEY42                                                    *
. *                                                                          *
. * Modifications : 17/08/92 Peter Eddey                                     *
. *                 Added Batch number to all indexes                        *
. *                                                                          *
. *                 29.09.93 B.G.Ackland                                     *
. *                 Added Sent Flag for IBA - CCUTSIBA                       *
. *                                                                          *
. *                 21/01/1994    Justin Coates  (Hawkes Bay mods)           *
. *                 added fifth index - UR/DATE order                        *
. *                                                                          *
. *                 19/07/1995    Justin Coates                              *
. *                 added field CCUTORIG - indicates how record extracted    *
. *                                                                          *
. *                 21.06.1996    B.G.Ackland                                *
. *                 Changed Spare Variable to Hospital Episode Prefix Char   *
. *                 to fix CHC Multiple Hospital Database Probem.            *
. *                                                                          *
. *                 23/05/1997  Steve Armstrong    WHL Mods                  *
. *                 Added CCUTORDD and added new spare variable              *
. *                                                                          *
. *                 01/08/1997  Steve Armstrong    WHL Mods                  *
. *                 Added CCUTSERV                                           *
. *                                                                          *
. ****************************************************************************
.
. IO include   : CCIUTLIO.INC
.
CCIUTLL1     IFILE     SQL, FIXED=146, KEY="U1-8,9-11,12-19,20-26,27-34,81-88"
CCIUTLL2     IFILE     SQL, FIXED=146, KEY="U1-8,9-11,27-34,12-19,20-26,81-88"
CCIUTLL3     IFILE     SQL, FIXED=146, KEY="U12-19,1-8,9-11,27-34,20-26,81-88"
CCIUTLL4     IFILE     SQL, FIXED=146, KEY="U81-88,1-8,9-11,27-34,12-19,20-26"
CCIUTLL5     IFILE     SQL, FIXED=146, KEY="U27-34,1-8,9-11,12-19,20-26,81-88"
.
.NAME        TYPE    LENGTH    PHYSICAL   START   DESCRIPTION
.----        ----    ------    --------   -----   -----------
CCUTDATE     DIM       8          8         1     DATE OF SERVICE
CCUTDEPT     DIM       3          3         9     DEPARTMENT CODE
DCCUTEVN     DIM       8          8        12     EVENT NUMBER
CCUTPROC     DIM       7          7        20     PROCEDURE CODE
CCUTURNO     DIM       8          8        27     PMI NUMBER
CCUTQUNT     FORM      8          5        35     QUANTITY
CCUTPTYP     DIM       4          4        40     PATIENT TYPE
CCUTFSYR     DIM       4          4        44     FISCAL YEAR  (CCYY)
CCUTFSPR     DIM       2          2        48     FISCAL PERIOD  (MM)
CCUTCOMM     DIM      30         30        50     COMMENTS
CCUTSENT     DIM       1          1        80     Sent yet ? 
.                                                 blank = yes
.                                                 "N"   = no
DCCUTBAT     DIM       8          8        81     Batch Number for manual data
.                                                 This is 0 for auto-extract
CCUTCHRG     FORM      8.2        6        89     Patient charge
CCUTORIG     DIM       3          3        95     Record Origin
.                                                  DET = Detente Interface
.                                                  PC  = PC      Interface
.                                                  MAN = Manual Data Entry
.                                                  OUT = Outpatient Manual Ent.
.                                                  nnn = Auto Ext. Proc. Type
CCUTHPRE     DIM       1          1        98     Hospital Episode Prefix Char
CCUTSIBA     DIM       1          1        99     Sent IBA Clinical Costing 1=Y
CCUTORDD     DIM       6          6       100     Ordering Doctor
CCUTSERV     DIM       1          1       106     Health Service
.                                                   (Only extrenal & Manual data
.                                                    entry)
CCUTSPAR     DIM      39         39       107     Spare variable
.
.End of Record                            146
.
.  redefine form fields from key
.  -----------------------------
.
.NAME        TYPE   LENGTH    START    DESCRIPTION
.----        ----   ------    -----    -----------
CCUTEVNT     FORM      8        12     EVENT NUMBER
CCUTBATN     FORM      8               Batch number for manual data entry
.
.
