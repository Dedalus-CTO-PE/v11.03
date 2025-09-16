.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   PRIMULFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File Definition include for Private Practice  *
.  *                        Multiple Item                                 *
.  *                                                                      *
.  *                        This file is used in the billing process for  *
.  *                        pathology tests, to determine which item will *
.  *                        will cover a number of tests with the same    *
.  *                        item number.                                  *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   primultf.dat                                  *
.  *                                                                      *
.  *  Keys              :   KEY 13, KEY 16, KEY46                         *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *                                                                      *
.  ************************************************************************
.Data File Definition
.--------------------
PRIMULT1   IFILE SQL, FIXED=72, KEY="U1-5,6-13,14-16"
PRIMULT2   IFILE SQL, FIXED=72, KEY="U17-46,1-5,6-13,14-16"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRMUCODE  DIM       5      5        1     Multiple Services Code
PRMUDATE  DIM       8      8        6     Date Effective From
DPRMUNUM  DIM       3      3        14    Number of Procedures
.
PRMUDESC  DIM       30     30       17    Description
PRMUITMN  DIM       9      9        47    MBS Item Number
PRMUSUBN  DIM       3      3        56    MBS Subitem Number
PRMUAMAN  DIM       9      9        59    AMA Item Number
.
PRMUSPAR  DIM       4      4        68    Spare Variable
.
.End of Record                      72
.
.
. Redefine from fields from key
. -----------------------------
.
PRMUNUMB  FORM      3
