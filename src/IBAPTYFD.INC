.  ****************************************************************************
.  *                                                                          *
.  *  Include Name    :   IBAPTYFD.INC                                        *
.  *                                                                          *
.  *  Function        :   File Def'n Include for Common                       *
.  *                      Print Type Details                                  *
.  *                                                                          *
.  *  File Type       :   SQL                                                 *
.  *                                                                          *
.  *  File Name       :   ibaptyaf.dat                                        *
.  *                                                                          *
.  *  Keys            :   KEY3                                                *
.  *                                                                          *
.  *  Modifications   :                                                       *
.  ****************************************************************************
.
IBAPTYA1  IFILE     SQL, FIXED=59, KEY="U1-3"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
IBPTCODE  DIM       3      3        1     Print Type Code
IBPTDESC  DIM       35     35       4     Print Type Description
.
IBPTSPAR  DIM       20     20       39    Spare
.
.End of Record                      59
.
