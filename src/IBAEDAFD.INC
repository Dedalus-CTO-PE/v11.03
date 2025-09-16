. V9.10.000 16/05/2008 ML  Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   IBAEDAFD.INC
. *
. * Function      :   File Def'n Include for IBA Software                       
. *                   Education Needs Assessment form
. *
. * File Type     :   SQL
. *
. * File Name     :   ibaedaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
IBAEDAA1   IFILE    SQL, FIXED=2750, KEY="U1-8,9-16"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
IBEAURNO  DIM       8      8        1     U/R Number
IBEAVISN  DIM       8      8        9     Visit Number
IBEACNTR  DIM       8      8        17    Counter
IBEAFL01  DIM       1      1        25    Flag Field 01 (0=No,1=Yes)
IBEAFL02  DIM       1      1        26    Flag Field 02 (0=No,1=Yes)
IBEAFL03  DIM       1      1        27    Flag Field 03 (0=No,1=Yes)
IBEAFL04  DIM       1      1        28    Flag Field 04 (0=No,1=Yes)
IBEAFL05  DIM       1      1        29    Flag Field 05 (0=No,1=Yes)
IBEAFL06  DIM       1      1        30    Flag Field 06 (0=No,1=Yes)
IBEAFL07  DIM       1      1        31    Flag Field 07 (0=No,1=Yes)
IBEAFL08  DIM       1      1        32    Flag Field 08 (0=No,1=Yes)
IBEAFL09  DIM       1      1        33    Flag Field 09 (0=No,1=Yes)
IBEAFL10  DIM       1      1        34    Flag Field 10 (0=No,1=Yes)
IBEAFL11  DIM       1      1        35    Flag Field 11 (0=No,1=Yes)
IBEAFL12  DIM       1      1        36    Flag Field 12 (0=No,1=Yes)
IBEAFL13  DIM       1      1        37    Flag Field 13 (0=No,1=Yes)
IBEAFL14  DIM       1      1        38    Flag Field 14 (0=No,1=Yes)
IBEAFL15  DIM       1      1        39    Flag Field 15 (0=No,1=Yes)
IBEAFL16  DIM       1      1        40    Flag Field 16 (0=No,1=Yes)
IBEAFL17  DIM       1      1        41    Flag Field 17 (0=No,1=Yes)
IBEAFL18  DIM       1      1        42    Flag Field 18 (0=No,1=Yes)
IBEAFL19  DIM       1      1        43    Flag Field 19 (0=No,1=Yes)
IBEAFL20  DIM       1      1        44    Flag Field 20 (0=No,1=Yes)
IBEAFL21  DIM       1      1        45    Flag Field 21 (0=No,1=Yes)
IBEAFL22  DIM       1      1        46    Flag Field 22 (0=No,1=Yes)
IBEAFL23  DIM       1      1        47    Flag Field 23 (0=No,1=Yes)
IBEAFL24  DIM       1      1        48    Flag Field 24 (0=No,1=Yes)
IBEAFL25  DIM       1      1        49    Flag Field 25 (0=No,1=Yes)
IBEAFL26  DIM       1      1        50    Flag Field 26 (0=No,1=Yes)
IBEAFL27  DIM       1      1        51    Flag Field 27 (0=No,1=Yes)
IBEAFL28  DIM       1      1        52    Flag Field 28 (0=No,1=Yes)
IBEAFL29  DIM       1      1        53    Flag Field 29 (0=No,1=Yes)
IBEAFL30  DIM       1      1        54    Flag Field 30 (0=No,1=Yes)
IBEAFL31  DIM       1      1        55    Flag Field 31 (0=No,1=Yes)
IBEAFL32  DIM       1      1        56    Flag Field 32 (0=No,1=Yes)
IBEAFL33  DIM       1      1        57    Flag Field 33 (0=No,1=Yes)
IBEAFL34  DIM       1      1        58    Flag Field 34 (0=No,1=Yes)
IBEAFL35  DIM       1      1        59    Flag Field 35 (0=No,1=Yes)
IBEAFL36  DIM       1      1        60    Flag Field 36 (0=No,1=Yes)
IBEAFL37  DIM       1      1        61    Flag Field 37 (0=No,1=Yes)
IBEAFL38  DIM       1      1        62    Flag Field 38 (0=No,1=Yes)
IBEAFL39  DIM       1      1        63    Flag Field 39 (0=No,1=Yes)
IBEAFL40  DIM       1      1        64    Flag Field 40 (0=No,1=Yes)
IBEAFL41  DIM       1      1        65    Flag Field 41 (0=No,1=Yes)
IBEAFL42  DIM       1      1        66    Flag Field 42 (0=No,1=Yes)
IBEAFL43  DIM       1      1        67    Flag Field 43 (0=No,1=Yes)
IBEAFL44  DIM       1      1        68    Flag Field 44 (0=No,1=Yes)
IBEAFL45  DIM       1      1        69    Flag Field 45 (0=No,1=Yes)
IBEACD01  DIM       1      1        70    Numeric Code  1 ( 0 to 9 )
IBEACD02  DIM       1      1        71    Numeric Code  2 ( 0 to 9 )
IBEACD03  DIM       1      1        72    Numeric Code  3 ( 0 to 9 )
IBEACD04  DIM       1      1        73    Numeric Code  4 ( 0 to 9 )
IBEACD05  DIM       1      1        74    Numeric Code  5 ( 0 to 9 )
IBEALC01  DIM       2      2        75    Large Num.Code 1 ( 00 to 99 )
IBEALC02  DIM       2      2        77    Large Num.Code 2 ( 00 to 99 )
IBEALC03  DIM       2      2        79    Large Num.Code 3 ( 00 to 99 )
IBEALC04  DIM       2      2        81    Large Num.Code 4 ( 00 to 99 )
IBEASD01  DIM       6      6        83    Small Char Fld 01
IBEASD02  DIM       6      6        89    Small Char Fld 02
IBEASD03  DIM       8      8        95    Small Char Fld 03
IBEASD04  DIM       8      8        103   Small Char Fld 04
IBEASD05  DIM       10     10       111   Small Char Fld 05
IBEAMD01  DIM       50     50       121   Medium Free Format 01
IBEAMD02  DIM       50     50       171   Medium Free Format 02
IBEAMD03  DIM       50     50       221   Medium Free Format 03
IBEAMD04  DIM       50     50       271   Medium Free Format 04
IBEAMD05  DIM       50     50       321   Medium Free Format 05
IBEALD01  DIM       70     70       371   Large Free Format 01
IBEALD02  DIM       70     70       441   Large Free Format 02
IBEALD03  DIM       70     70       511   Large Free Format 03
IBEALD04  DIM       70     70       581   Large Free Format 04
IBEALD05  DIM       70     70       651   Large Free Format 05
IBEALD06  DIM       70     70       721   Large Free Format 06
IBEALD07  DIM       70     70       791   Large Free Format 07
IBEALD08  DIM       70     70       861   Large Free Format 08
IBEALD09  DIM       70     70       931   Large Free Format 09
IBEALD10  DIM       70     70       1001  Large Free Format 10
IBEAXL01  DIM       200    200      1071  XLarge Free Format 01
IBEAXL02  DIM       200    200      1271  XLarge Free Format 02
IBEAXL03  DIM       200    200      1471  XLarge Free Format 03
IBEAXL04  DIM       200    200      1671  XLarge Free Format 04
IBEAXL05  DIM       200    200      1871  XLarge Free Format 05
IBEAXL06  DIM       200    200      2071  XLarge Free Format 06
IBEAXL07  DIM       200    200      2271  XLarge Free Format 07
IBEAXL08  DIM       200    200      2471  XLarge Free Format 08
IBEACDAT  DIM       8      8        2671  Date Record Created (CCYYMMDD)
IBEACTIM  DIM       8      8        2679  Time Record Created (HH:MM:SS)
IBEACUID  DIM       10     10       2687  WEB User ID Created (websecaf)
IBEAUDAT  DIM       8      8        2697  Date Record Updated (CCYYMMDD)
IBEAUTIM  DIM       8      8        2705  Time Record Updated (HH:MM:SS)
IBEAUUID  DIM       10     10       2713  WEB User ID Updated (websecaf)
IBEASPAR  DIM       27     27       2723  Spare Variable
.
.End of Record                      2750 
.
