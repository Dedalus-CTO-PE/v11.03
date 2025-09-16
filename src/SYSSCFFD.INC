.  ****************************************************************************
.  *                                                                          *
.  *  Include Name    :   SYSSCFFD.INC                                        *
.  *                                                                          *
.  *  Function        :   File Def'n Include for Common                       *
.  *                      System Codes Table                                  *
.  *                                                                          *
.  *  File Type       :   SQL                                                 *
.  *                                                                          *
.  *  File Name       :   sysscfaf.dat                                        *
.  *                                                                          *
.  *  Keys            :   KEY2 KEY3                                           *
.  *                                                                          *
.  *  Modifications   :                                                       *
.  ****************************************************************************
SYSSCFA1  IFILE  SQL, FIXED=61, KEY="U1-2" 
SYSSCFA2  IFILE  SQL, FIXED=61, KEY="U3-5" 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SYSCSYS   DIM       2      2        1     System Code
SYSCID3   DIM       3      3        3     System ID
SYSCDES   DIM       35     35       6     Description
SYSCSPA   DIM       20     20       41    Spare
.
.End of Record                      61
.
