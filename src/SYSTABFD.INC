.  ****************************************************************************
.  *                                                                          *
.  *  Include Name    :   SYSTABFD.INC                                        *
.  *                                                                          *
.  *  Function        :   File Def'n Include for Common                       *
.  *                      Table Owner Detail                                  *
.  *                                                                          *
.  *  File Type       :   SQL                                                 *
.  *                                                                          *
.  *  File Name       :   systables.dat                                       *
.  *                                                                          *
.  *  Keys            :   KEY26                                               *
.  *                                                                          *
.  *  Modifications   :                                                       *
.  *      V9.03.01  09/09/2003  CAR 43237   Mike Laming                       *
.  *                Add a re-definition to handle the 2 Directory Paths to    *
.  *                cater for 256 characters.                                 *
.  ****************************************************************************
.
SYSTABLE  IFILE SQL, FIXED=177, KEY="U1-18,19-26"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SYTBNAME  DIM       18     18       1     Table Name
SYTBOWN   DIM       8      8        19    Owner
SYTBPATH  DIM       64     64       27    Directory Path for the Table File
SYTBID    DIM       4      4        91    Internal Table Id TYPE SERIAL
SYTBRSIZ  DIM       2      2        95    Row Size TYPE SMALLINT
SYTBNCOL  DIM       2      2        97    Number of Columns TYPE SMALLINT
SYTBNIDX  DIM       2      2        99    Number of Indexes TYPE SMALLINT
SYTBNROW  DIM       4      4        101   Number of Rows TYPE INTEGER
SYTBCDAT  DIM       4      4        105   Date Created TYPE DATE
SYTBVERS  DIM       4      4        109   Table Version No. TYPE INTEGER
SYTBTYPE  DIM       1      1        113   Table Type (T = Table, V = View)
SYTBAUDP  DIM       64     64       114   Audit File Name (Full Path)
.
.End of Record                      178
..* ****************************************** Start of Addition       *I-90301
SYSTABLX  IFILE SQL, FIXED=561, KEY="U1-18,19-26"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
.SYTBNAME  DIM      18     18       1     Table Name
.SYTBOWN   DIM      8      8        19    Owner
SYTBPATX  DIM       127    127      27    Directory Path for the Table File
SYTBPAT2  DIM       127    127      154   Directory Path - (256 chars)     **
SYTBPAT3  DIM       2      2        281   Directory Path - (256 chars)     **
.SYTBID    DIM      4      4        283   Internal Table Id TYPE SERIAL
.SYTBRSIZ  DIM      2      2        287   Row Size TYPE SMALLINT
.SYTBNCOL  DIM      2      2        289   Number of Columns TYPE SMALLINT
.SYTBNIDX  DIM      2      2        291   Number of Indexes TYPE SMALLINT
.SYTBNROW  DIM      4      4        293   Number of Rows TYPE INTEGER
.SYTBCDAT  DIM      4      4        297   Date Created TYPE DATE
.SYTBVERS  DIM      4      4        301   Table Version No. TYPE INTEGER
.SYTBTYPE  DIM      1      1        305   Table Type (T = Table, V = View)
SYTBAUDX  DIM       127    127      306   Audit File Name (Full Path)
SYTBAUD2  DIM       127    127      433   Audit File Name - (256 chars)    **
SYTBAUD3  DIM       2      2        560   Audit File Name - (256 chars)    **
.
.End of Record                      561
