. V9.10.000 28/05/2008 ML  Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   IBASCEFD.INC
. *
. * Function      :   File Def'n Include for IBA Software                       
. *                   School Evaluation form
. *
. * File Type     :   SQL
. *
. * File Name     :   ibasceaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
IBASCEA1   IFILE    SQL, FIXED=1800, KEY="U1-8,9-16"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
IBSEURNO  DIM       8      8        1     U/R Number
IBSEVISN  DIM       8      8        9     Visit Number
IBSECNTR  DIM       8      8        17    Counter
IBSEFL01  DIM       1      1        25    Flag Field 01 (0=No,1=Yes)
IBSEFL02  DIM       1      1        26    Flag Field 02 (0=No,1=Yes)
IBSEFL03  DIM       1      1        27    Flag Field 03 (0=No,1=Yes)
IBSEFL04  DIM       1      1        28    Flag Field 04 (0=No,1=Yes)
IBSEFL05  DIM       1      1        29    Flag Field 05 (0=No,1=Yes)
IBSEFL06  DIM       1      1        30    Flag Field 06 (0=No,1=Yes)
IBSEFL07  DIM       1      1        31    Flag Field 07 (0=No,1=Yes)
IBSEFL08  DIM       1      1        32    Flag Field 08 (0=No,1=Yes)
IBSEFL09  DIM       1      1        33    Flag Field 09 (0=No,1=Yes)
IBSEFL10  DIM       1      1        34    Flag Field 10 (0=No,1=Yes)
IBSEFL11  DIM       1      1        35    Flag Field 11 (0=No,1=Yes)
IBSEFL12  DIM       1      1        36    Flag Field 12 (0=No,1=Yes)
IBSEFL13  DIM       1      1        37    Flag Field 13 (0=No,1=Yes)
IBSEFL14  DIM       1      1        38    Flag Field 14 (0=No,1=Yes)
IBSEFL15  DIM       1      1        39    Flag Field 15 (0=No,1=Yes)
IBSEFL16  DIM       1      1        40    Flag Field 16 (0=No,1=Yes)
IBSEFL17  DIM       1      1        41    Flag Field 17 (0=No,1=Yes)
IBSEFL18  DIM       1      1        42    Flag Field 18 (0=No,1=Yes)
IBSEFL19  DIM       1      1        43    Flag Field 19 (0=No,1=Yes)
IBSEFL20  DIM       1      1        44    Flag Field 20 (0=No,1=Yes)
IBSECD01  DIM       1      1        45    Numeric Code  1  ( 0 to 9 )
IBSECD02  DIM       1      1        46    Numeric Code  2  ( 0 to 9 )
IBSECD03  DIM       1      1        47    Numeric Code  3  ( 0 to 9 )
IBSECD04  DIM       1      1        48    Numeric Code  4  ( 0 to 9 )
IBSECD05  DIM       1      1        49    Numeric Code  5  ( 0 to 9 )
IBSECD06  DIM       1      1        50    Numeric Code  6  ( 0 to 9 )
IBSECD07  DIM       1      1        51    Numeric Code  7  ( 0 to 9 )
IBSECD08  DIM       1      1        52    Numeric Code  8  ( 0 to 9 )
IBSECD09  DIM       1      1        53    Numeric Code  9  ( 0 to 9 )
IBSECD10  DIM       1      1        54    Numeric Code  10 ( 0 to 9 )
IBSECD11  DIM       1      1        55    Numeric Code  11 ( 0 to 9 )
IBSECD12  DIM       1      1        56    Numeric Code  12 ( 0 to 9 )
IBSECD13  DIM       1      1        57    Numeric Code  13 ( 0 to 9 )
IBSECD14  DIM       1      1        58    Numeric Code  14 ( 0 to 9 )
IBSECD15  DIM       1      1        59    Numeric Code  15 ( 0 to 9 )
IBSESD01  DIM       6      6        60    Small Char Fld 01
IBSESD02  DIM       6      6        66    Small Char Fld 02
IBSESD03  DIM       8      8        72    Small Char Fld 03
IBSESD04  DIM       8      8        80    Small Char Fld 04
IBSESD05  DIM       10     10       88    Small Char Fld 05
IBSESD06  DIM       10     10       98    Small Char Fld 06
IBSEMD01  DIM       50     50       108   Medium Free Format 01
IBSEMD02  DIM       50     50       158   Medium Free Format 02
IBSEMD03  DIM       50     50       208   Medium Free Format 03
IBSEMD04  DIM       50     50       258   Medium Free Format 04
IBSEMD05  DIM       50     50       308   Medium Free Format 05
IBSEMD06  DIM       50     50       358   Medium Free Format 06
IBSEMD07  DIM       50     50       408   Medium Free Format 07
IBSEMD08  DIM       50     50       458   Medium Free Format 08
IBSEMD09  DIM       50     50       508   Medium Free Format 09
IBSEMD10  DIM       50     50       558   Medium Free Format 10
IBSEMD11  DIM       50     50       608   Medium Free Format 11
IBSEMD12  DIM       50     50       658   Medium Free Format 12
IBSEXL01  DIM       200    200      708   XLarge Free Format 01
IBSEXL02  DIM       200    200      908   XLarge Free Format 02
IBSEXL03  DIM       200    200      1108  XLarge Free Format 03
IBSEXL04  DIM       200    200      1308  XLarge Free Format 04
IBSEXL05  DIM       200    200      1508  XLarge Free Format 05
IBSECDAT  DIM       8      8        1708  Date Record Created (CCYYMMDD)
IBSECTIM  DIM       8      8        1716  Time Record Created (HH:MM:SS)
IBSECUID  DIM       10     10       1724  WEB User ID Created (websecaf)
IBSEUDAT  DIM       8      8        1734  Date Record Updated (CCYYMMDD)
IBSEUTIM  DIM       8      8        1742  Time Record Updated (HH:MM:SS)
IBSEUUID  DIM       10     10       1750  WEB User ID Updated (websecaf)
IBSESPAR  DIM       40     40       1760  Spare Variable
.
.End of Record                      1800 
.
