.
. *****************************************************************************
. *                                                                           *
. *      Include Name  : CCIERRFD.INC                                         *
. *                                                                           *
. *      Function      : File definition include for Clinical Costing         *
. *                      Error Record Table                                   *
. *                                                                           *
. *      File Type     : SQL                                                  *
. *                                                                           *
. *      File Name     : ccierraf.dat                                         *
. *                                                                           *
. *      Keys          : KEY23                                                *
. *                                                                           *
. *      Modifications :                                                      *
. *                      09/02/2000  Steve Armstrong                          *
. *                      Added 2nd index for U/R merging                      *
. *                                                                           *
. *****************************************************************************
.
CCIERRA1  IFILE     SQL, FIXED=50, KEY="U1-8,9-11,12-19,20-23"
CCIERRA2  IFILE     SQL, FIXED=50, KEY="U12-19,1-8,9-11,20-23"
.
.Name     Type    Length  Physical   Start     Description
.----     ----    ------  --------   -----     -----------
CCERDATE  DIM       8        8        1        Date of Service
CCERDEPT  DIM       3        3        9        Department Code
CCERURNO  DIM       8        8        12       NMPI Number
CCERPTYP  DIM       4        4        20       Patient Type
CCERFSYR  DIM       4        4        24       Fiscal Year    (CCYY)
CCERFSPR  DIM       2        2        28       Fiscal Period  (MM)
CCERECNU  DIM       12       12       30       Encounter Number
CCERRTYP  DIM       3        3        42       Record type
.                                              DOP - Department Outpatient
.                                              COP - Converted Outpatient
.                                              GOP - General Outpatient
.                                              GIP - General Inpatient
.                                              DIP - Depatment Inpatient
CCERSPAR  DIM       5        5        45       *** Spare ***
.
.End of Record                        50
.
