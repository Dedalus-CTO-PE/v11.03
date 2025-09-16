.
. **********************************************************************
. *                                                                    *
. *      Include Name  : CCIBAUFD                                      *
. *                                                                    *
. *      Function      : File definition include for Clinical Costing  *
. *                      Batch Audit Table                             *
. *                                                                    *
. *      File Type     : SQL                                           *
. *                                                                    *
. *      File Name     : ccibauaf.dat                                  *
. *                                                                    *
. *      Keys          : KEY16                                         *
. *                                                                    *
. *      Modifications :                                               *
. *             V5.04.01 03/08/1997  Steve Armstrong  WHL Mods         *
. *                      Added CCBAORDD & CCBASERV                     *
. *                                                                    *
. **********************************************************************
.
. IO include   : CCIBAUIO.INC
.
CCIBAUA1     IFILE     SQL, FIXED=80, KEY="D1-8,9-16"
.
.NAME        TYPE    LENGTH    PHYSICAL   START   DESCRIPTION
.----        ----    ------    --------   -----   -----------
DCCBABAT      DIM      8        8          1      Batch Number
CCBADATE      DIM      8        8          9      Date of Change
CCBAOPER      DIM      4        4          17     Operator Id
CCBATRXT      FORM     1        2          21     Transaction type
.                                                    1 = added
.                                                    2 = changed (before image)
.                                                    3 = changed (after image)
.                                                    4 = deleted
CCBAEVNT      DIM      8        8          23     Event number
CCBAPROC      DIM      7        7          31     Procedure Code
CCBAURNO      DIM      8        8          38     PMI Number
CCBAPTYP      DIM      3        3          46     Patient type
CCBAQNTY      FORM     8        5          49     Quantity
CCBAORDD      DIM      6        6          54     Ordering Doctor
CCBASERV      DIM      1        1          60     Health Service Code
CCBASPAR      DIM      19       19         61     Spare
     
.End of Record                             80 
.
.  redefine form fields from key
.  -----------------------------
.
.NAME        TYPE   LENGTH    START    DESCRIPTION
.----        ----   ------    -----    -----------
CCBABATN     FORM    8         1       Batch Number
.
.
