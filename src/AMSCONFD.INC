. *----------------------------------------------------------------------
. * Include Name  :   AMSCONFD.INC
. *
. * Function      :   File Def'n Include for Asset Management
. *                   Asset Control File                
. *
. * File Type     :   ASCII
. *
. * File Name     :   controlf.txt
. *
. *----------------------------------------------------------------------
.
. Sector  3
. Standard Abbreviations Used CF - Control File
.                             AM - Asset Management
.
.Name     Type      Length     Start  Description
.----     ----      ------     -----  -----------
CFAMSRUN  FORM          5          1  Next Stocktake Run Number
CFAMYEAR  DIM           4          6  Current Financial Year
CFAMAUDA  FORM          1         10  Asset Audit Masterfile 1=Yes
CFAMAUDB  FORM          1         11    "   Audit Leasing 1=Yes
CFAMAUDC  FORM          1         12    "   Audit Insurance 1=Yes
CFAMAUDD  FORM          1         13    "   Audit D 1=Yes
CFAMAUDE  FORM          1         14    "   Audit E 1=Yes
CFAMAUDF  FORM          1         15    "   Audit F 1=Yes
CFAMAUDG  FORM          1         16    "   Audit G 1=Yes
CFAMAUDH  FORM          1         17    "   Audit H 1=Yes
CFAMIRUN  FORM          5         18  Next General Ledger Interface Run No.
CFAMGL01  FORM          1         23  GL Transfer Flag 0=No Period 01
CFAMGL02  FORM          1         24  GL Transfer Flag 0=No Period 02
CFAMGL03  FORM          1         25  GL Transfer Flag 0=No Period 03
CFAMGL04  FORM          1         26  GL Transfer Flag 0=No Period 04
CFAMGL05  FORM          1         27  GL Transfer Flag 0=No Period 05
CFAMGL06  FORM          1         28  GL Transfer Flag 0=No Period 06
CFAMGL07  FORM          1         29  GL Transfer Flag 0=No Period 07
CFAMGL08  FORM          1         30  GL Transfer Flag 0=No Period 08
CFAMGL09  FORM          1         31  GL Transfer Flag 0=No Period 09
CFAMGL10  FORM          1         32  GL Transfer Flag 0=No Period 10
CFAMGL11  FORM          1         33  GL Transfer Flag 0=No Period 11
CFAMGL12  FORM          1         34  GL Transfer Flag 0=No Period 12
CFAMGL13  FORM          1         35  GL Transfer Flag 0=No Period 13
CFAMFILB  DIM           17        36  Spare Controlf Area for Asset Man. Sys.
CFAMPASS  DIM           8         53  Password for IBAAMS98
CFAMFILC  DIM           9         61  Spare Controlf Area for Asset Man. Sys.
.
.End of Sector                    70
.
