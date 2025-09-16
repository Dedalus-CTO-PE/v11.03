.
. **********************************************************************
. *                                                                    *
. *      Include Name  : CCIBTRFD                                      *
. *                                                                    *
. *      Function      : File definition include for Clinical Costing  *
. *                      Batch Transaction Table                       *
. *                                                                    *
. *      File Type     : SQL                                           *
. *                                                                    *
. *      File Name     : ccibtraf.dat                                  *
. *                                                                    *
. *      Keys          : KEY46                                         *
. *                                                                    *
. *      Modifications :                                               *
. *       V5.04.02  23/06/1997  Steve Armstrong    WHL                 *
. *                 Added CCBTSERV                                     *
. *       V5.04.01  23/06/1997  Steve Armstrong    WHL                 *
. *                 Added CCBTORDD                                     *
. *       V5.03.01  22/03/1996  Greg Horvat      SRF 614630            *
. *                 Added the 3rd index                                *
. *                                                                    *
. **********************************************************************
.
. IO include   : CCIBTRIO.INC
.
CCIBTRA1     IFILE     SQL, FIXED=140, KEY="U1-8,9-12,13-20,21-23,24-31,32-38,39-46"
CCIBTRA2     IFILE     SQL, FIXED=140, KEY="U13-20,21-23,39-46,1-8,9-12,24-31,32-38"
CCIBTRA3     IFILE     SQL, FIXED=140, KEY="U39-46,13-20,21-23,1-8,9-12,24-31,32-38"
.
.NAME        TYPE    LENGTH    PHYSICAL   START   DESCRIPTION
.----        ----    ------    --------   -----   -----------
DCCBTBAT      DIM      8        8          1      Batch Number
CCBTUNIQ      DIM      4        4          9      Record Number
CCBTSDAT      DIM      8        8          13     Date of Service CCYYMMDD
CCBTDEPT      DIM      3        3          21     CCI Department
CCBTEVNT      DIM      8        8          24     Event number
CCBTPROC      DIM      7        7          32     Procedure Code
CCBTURNO      DIM      8        8          39     PMI Number
CCBTQNTY      FORM     8        5          47     Quantity
CCBTPTYP      DIM      3        3          52     Patient type
CCBTWARN      FORM     1        2          55     Duplicate transaction warning
.                                                 flag
.                                                     0 = Not a Duplicate
.                                                     1 = Possible error
CCBTCOMM      DIM      50       50         57     Comments
CCBTFSYR      DIM      4        4          107    Fiscal year
CCBTFSPR      DIM      2        2          111    Fiscal period
CCBTORDD      DIM      6        6          113    Ordering Doctor
CCBTSERV      DIM      1        1          119    Health Service Code
CCBTSPAR      DIM      20       20         120    Spare

.End of Record                             140
.
.  redefine form fields from key
.  -----------------------------
.
.NAME        TYPE   LENGTH    START    DESCRIPTION
.----        ----   ------    -----    -----------
CCBTBATN     FORM    8         1       Batch Number
.
.
