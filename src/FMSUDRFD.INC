. *************************************************************************
. *                                                                       *
. *  Include Name    :   FMSUDRFD.INC                                     *
. *                                                                       *
. *  Function        :   File Def'n Include for Financial Management      *
. *                      User Defined Report Definition Table             *
. *                                                                       *
. *  File Type       :   SQL                                              *
. *                                                                       *
. *  File Name       :   fmsudraf.dat                                     *
. *                                                                       *
. *  Keys            :   KEY3                                             *
. *                                                                       *
. *  Modifications   :                                                    *
. *************************************************************************
.
FMSUDRA1  IFILE     SQL, FIXED=3463, KEY="U1-3"
.
.Name     Type      Length Physical Start Descritpion
.----     ----      ------ -------- ----- -----------
FMUDSTY   DIM       3      3        1     Code
FMUDDES   DIM       35     35       4     Description
FMUDWID   FORM      1      2        39    Width 1=132 2=80 3=160 4=210
FMUDROW   FORM      2      2        41    Rows per Account 1 - 5
.
FMUDH11   DIM       80     80       43    Heading Line 1 Part 1
FMUDH12   DIM       80     80       123   Heading Line 1 Part 2
FMUDH13   DIM       50     50       203   Heading Line 1 Part 3
.
FMUDH21   DIM       80     80       253   Heading Line 2 Part 1
FMUDH22   DIM       80     80       333   Heading Line 2 Part 2
FMUDH23   DIM       50     50       413   Heading Line 2 Part 3
.
. Row One
.
FMUDT101  FORM      2      2        463   Type
FMUDW101  FORM      2      2        465   Width
FMUDA101  FORM      2      2        467   Type or Variance Type
FMUDS101  FORM      2      2        469   Scale
FMUDP101  FORM      2      2        471   Period
FMUDF101  DIM       20     20       473   Format
.
FMUDT102  FORM      2      2        493   Type
FMUDW102  FORM      2      2        495   Width
FMUDA102  FORM      2      2        497   Type or Variance Type
FMUDS102  FORM      2      2        499   Scale
FMUDP102  FORM      2      2        501   Period
FMUDF102  DIM       20     20       503   Format
.
FMUDT103  FORM      2      2        523   Type
FMUDW103  FORM      2      2        525   Width
FMUDA103  FORM      2      2        527   Type or Variance Type
FMUDS103  FORM      2      2        529   Scale
FMUDP103  FORM      2      2        531   Period
FMUDF103  DIM       20     20       533   Format
.
FMUDT104  FORM      2      2        553   Type
FMUDW104  FORM      2      2        555   Width
FMUDA104  FORM      2      2        557   Type or Variance Type
FMUDS104  FORM      2      2        559   Scale
FMUDP104  FORM      2      2        561   Period
FMUDF104  DIM       20     20       563   Format
.
FMUDT105  FORM      2      2        583   Type
FMUDW105  FORM      2      2        585   Width
FMUDA105  FORM      2      2        587   Type or Variance Type
FMUDS105  FORM      2      2        589   Scale
FMUDP105  FORM      2      2        591   Period
FMUDF105  DIM       20     20       593   Format
.
FMUDT106  FORM      2      2        613   Type
FMUDW106  FORM      2      2        615   Width
FMUDA106  FORM      2      2        617   Type or Variance Type
FMUDS106  FORM      2      2        619   Scale
FMUDP106  FORM      2      2        621   Period
FMUDF106  DIM       20     20       623   Format
.
FMUDT107  FORM      2      2        643   Type
FMUDW107  FORM      2      2        645   Width
FMUDA107  FORM      2      2        647   Type or Variance Type
FMUDS107  FORM      2      2        649   Scale
FMUDP107  FORM      2      2        651   Period
FMUDF107  DIM       20     20       653   Format
.
FMUDT108  FORM      2      2        673   Type
FMUDW108  FORM      2      2        675   Width
FMUDA108  FORM      2      2        677   Type or Variance Type
FMUDS108  FORM      2      2        679   Scale
FMUDP108  FORM      2      2        681   Period
FMUDF108  DIM       20     20       683   Format
.
FMUDT109  FORM      2      2        703   Type
FMUDW109  FORM      2      2        705   Width
FMUDA109  FORM      2      2        707   Type or Variance Type
FMUDS109  FORM      2      2        709   Scale
FMUDP109  FORM      2      2        711   Period
FMUDF109  DIM       20     20       713   Format
.
FMUDT110  FORM      2      2        733   Type
FMUDW110  FORM      2      2        735   Width
FMUDA110  FORM      2      2        737   Type or Variance Type
FMUDS110  FORM      2      2        739   Scale
FMUDP110  FORM      2      2        741   Period
FMUDF110  DIM       20     20       743   Format
.
FMUDT111  FORM      2      2        763   Type
FMUDW111  FORM      2      2        765   Width
FMUDA111  FORM      2      2        767   Type or Variance Type
FMUDS111  FORM      2      2        769   Scale
FMUDP111  FORM      2      2        771   Period
FMUDF111  DIM       20     20       773   Format
.
FMUDT112  FORM      2      2        793   Type
FMUDW112  FORM      2      2        795   Width
FMUDA112  FORM      2      2        797   Type or Variance Type
FMUDS112  FORM      2      2        799   Scale
FMUDP112  FORM      2      2        801   Period
FMUDF112  DIM       20     20       803   Format
.
FMUDT113  FORM      2      2        823   Type
FMUDW113  FORM      2      2        825   Width
FMUDA113  FORM      2      2        827   Type or Variance Type
FMUDS113  FORM      2      2        829   Scale
FMUDP113  FORM      2      2        831   Period
FMUDF113  DIM       20     20       833   Format
.
FMUDT114  FORM      2      2        853   Type
FMUDW114  FORM      2      2        855   Width
FMUDA114  FORM      2      2        857   Type or Variance Type
FMUDS114  FORM      2      2        859   Scale
FMUDP114  FORM      2      2        861   Period
FMUDF114  DIM       20     20       863   Format
.
FMUDT115  FORM      2      2        883   Type
FMUDW115  FORM      2      2        885   Width
FMUDA115  FORM      2      2        887   Type or Variance Type
FMUDS115  FORM      2      2        889   Scale
FMUDP115  FORM      2      2        891   Period
FMUDF115  DIM       20     20       893   Format
.
FMUDT116  FORM      2      2        913   Type
FMUDW116  FORM      2      2        915   Width
FMUDA116  FORM      2      2        917   Type or Variance Type
FMUDS116  FORM      2      2        919   Scale
FMUDP116  FORM      2      2        921   Period
FMUDF116  DIM       20     20       923   Format
.
FMUDT117  FORM      2      2        943   Type
FMUDW117  FORM      2      2        945   Width
FMUDA117  FORM      2      2        947   Type or Variance Type
FMUDS117  FORM      2      2        949   Scale
FMUDP117  FORM      2      2        951   Period
FMUDF117  DIM       20     20       953   Format
.
FMUDT118  FORM      2      2        973   Type
FMUDW118  FORM      2      2        975   Width
FMUDA118  FORM      2      2        977   Type or Variance Type
FMUDS118  FORM      2      2        979   Scale
FMUDP118  FORM      2      2        981   Period
FMUDF118  DIM       20     20       983   Format
.
FMUDT119  FORM      2      2        1003  Type
FMUDW119  FORM      2      2        1005  Width
FMUDA119  FORM      2      2        1007  Type or Variance Type
FMUDS119  FORM      2      2        1009  Scale
FMUDP119  FORM      2      2        1011  Period
FMUDF119  DIM       20     20       1013  Format
.
FMUDT120  FORM      2      2        1033  Type
FMUDW120  FORM      2      2        1035  Width
FMUDA120  FORM      2      2        1037  Type or Variance Type
FMUDS120  FORM      2      2        1039  Scale
FMUDP120  FORM      2      2        1041  Period
FMUDF120  DIM       20     20       1043  Format
.
. Row 2
.
FMUDT201  FORM      2      2        1063  Type
FMUDW201  FORM      2      2        1065  Width
FMUDA201  FORM      2      2        1067  Type or Variance Type
FMUDS201  FORM      2      2        1069  Scale
FMUDP201  FORM      2      2        1071  Period
FMUDF201  DIM       20     20       1073  Format
.
FMUDT202  FORM      2      2        1093  Type
FMUDW202  FORM      2      2        1095  Width
FMUDA202  FORM      2      2        1097  Type or Variance Type
FMUDS202  FORM      2      2        1099  Scale
FMUDP202  FORM      2      2        1101  Period
FMUDF202  DIM       20     20       1103  Format
.
FMUDT203  FORM      2      2        1123  Type
FMUDW203  FORM      2      2        1125  Width
FMUDA203  FORM      2      2        1127  Type or Variance Type
FMUDS203  FORM      2      2        1129  Scale
FMUDP203  FORM      2      2        1131  Period
FMUDF203  DIM       20     20       1133  Format
.
FMUDT204  FORM      2      2        1153  Type
FMUDW204  FORM      2      2        1155  Width
FMUDA204  FORM      2      2        1157  Type or Variance Type
FMUDS204  FORM      2      2        1159  Scale
FMUDP204  FORM      2      2        1161  Period
FMUDF204  DIM       20     20       1163  Format
.
FMUDT205  FORM      2      2        1183  Type
FMUDW205  FORM      2      2        1185  Width
FMUDA205  FORM      2      2        1187  Type or Variance Type
FMUDS205  FORM      2      2        1189  Scale
FMUDP205  FORM      2      2        1191  Period
FMUDF205  DIM       20     20       1193  Format
.
FMUDT206  FORM      2      2        1213  Type
FMUDW206  FORM      2      2        1215  Width
FMUDA206  FORM      2      2        1217  Type or Variance Type
FMUDS206  FORM      2      2        1219  Scale
FMUDP206  FORM      2      2        1221  Period
FMUDF206  DIM       20     20       1223  Format
.
FMUDT207  FORM      2      2        1243  Type
FMUDW207  FORM      2      2        1245  Width
FMUDA207  FORM      2      2        1247  Type or Variance Type
FMUDS207  FORM      2      2        1249  Scale
FMUDP207  FORM      2      2        1251  Period
FMUDF207  DIM       20     20       1253  Format
.
FMUDT208  FORM      2      2        1273  Type
FMUDW208  FORM      2      2        1275  Width
FMUDA208  FORM      2      2        1277  Type or Variance Type
FMUDS208  FORM      2      2        1279  Scale
FMUDP208  FORM      2      2        1281  Period
FMUDF208  DIM       20     20       1283  Format
.
FMUDT209  FORM      2      2        1303  Type
FMUDW209  FORM      2      2        1305  Width
FMUDA209  FORM      2      2        1307  Type or Variance Type
FMUDS209  FORM      2      2        1309  Scale
FMUDP209  FORM      2      2        1311  Period
FMUDF209  DIM       20     20       1313  Format
.
FMUDT210  FORM      2      2        1333  Type
FMUDW210  FORM      2      2        1335  Width
FMUDA210  FORM      2      2        1337  Type or Variance Type
FMUDS210  FORM      2      2        1339  Scale
FMUDP210  FORM      2      2        1341  Period
FMUDF210  DIM       20     20       1343  Format
.
FMUDT211  FORM      2      2        1363  Type
FMUDW211  FORM      2      2        1365  Width
FMUDA211  FORM      2      2        1367  Type or Variance Type
FMUDS211  FORM      2      2        1369  Scale
FMUDP211  FORM      2      2        1371  Period
FMUDF211  DIM       20     20       1373  Format
.
FMUDT212  FORM      2      2        1393  Type
FMUDW212  FORM      2      2        1395  Width
FMUDA212  FORM      2      2        1397  Type or Variance Type
FMUDS212  FORM      2      2        1399  Scale
FMUDP212  FORM      2      2        1401  Period
FMUDF212  DIM       20     20       1403  Format
.
FMUDT213  FORM      2      2        1423  Type
FMUDW213  FORM      2      2        1425  Width
FMUDA213  FORM      2      2        1427  Type or Variance Type
FMUDS213  FORM      2      2        1429  Scale
FMUDP213  FORM      2      2        1431  Period
FMUDF213  DIM       20     20       1433  Format
.
FMUDT214  FORM      2      2        1453  Type
FMUDW214  FORM      2      2        1455  Width
FMUDA214  FORM      2      2        1457  Type or Variance Type
FMUDS214  FORM      2      2        1459  Scale
FMUDP214  FORM      2      2        1461  Period
FMUDF214  DIM       20     20       1463  Format
.
FMUDT215  FORM      2      2        1483  Type
FMUDW215  FORM      2      2        1485  Width
FMUDA215  FORM      2      2        1487  Type or Variance Type
FMUDS215  FORM      2      2        1489  Scale
FMUDP215  FORM      2      2        1491  Period
FMUDF215  DIM       20     20       1493  Format
.
FMUDT216  FORM      2      2        1513  Type
FMUDW216  FORM      2      2        1515  Width
FMUDA216  FORM      2      2        1517  Type or Variance Type
FMUDS216  FORM      2      2        1519  Scale
FMUDP216  FORM      2      2        1521  Period
FMUDF216  DIM       20     20       1523  Format
.
FMUDT217  FORM      2      2        1543  Type
FMUDW217  FORM      2      2        1545  Width
FMUDA217  FORM      2      2        1547  Type or Variance Type
FMUDS217  FORM      2      2        1549  Scale
FMUDP217  FORM      2      2        1551  Period
FMUDF217  DIM       20     20       1553  Format
.
FMUDT218  FORM      2      2        1573  Type
FMUDW218  FORM      2      2        1575  Width
FMUDA218  FORM      2      2        1577  Type or Variance Type
FMUDS218  FORM      2      2        1579  Scale
FMUDP218  FORM      2      2        1581  Period
FMUDF218  DIM       20     20       1583  Format
.
FMUDT219  FORM      2      2        1603  Type
FMUDW219  FORM      2      2        1605  Width
FMUDA219  FORM      2      2        1607  Type or Variance Type
FMUDS219  FORM      2      2        1609  Scale
FMUDP219  FORM      2      2        1611  Period
FMUDF219  DIM       20     20       1613  Format
.
FMUDT220  FORM      2      2        1633  Type
FMUDW220  FORM      2      2        1635  Width
FMUDA220  FORM      2      2        1637  Type or Variance Type
FMUDS220  FORM      2      2        1639  Scale
FMUDP220  FORM      2      2        1641  Period
FMUDF220  DIM       20     20       1643  Format
.
. Row 3
.
FMUDT301  FORM      2      2        1663  Type
FMUDW301  FORM      2      2        1665  Width
FMUDA301  FORM      2      2        1667  Type or Variance Type
FMUDS301  FORM      2      2        1669  Scale
FMUDP301  FORM      2      2        1671  Period
FMUDF301  DIM       20     20       1673  Format
.
FMUDT302  FORM      2      2        1693  Type
FMUDW302  FORM      2      2        1695  Width
FMUDA302  FORM      2      2        1697  Type or Variance Type
FMUDS302  FORM      2      2        1699  Scale
FMUDP302  FORM      2      2        1701  Period
FMUDF302  DIM       20     20       1703  Format
.
FMUDT303  FORM      2      2        1723  Type
FMUDW303  FORM      2      2        1725  Width
FMUDA303  FORM      2      2        1727  Type or Variance Type
FMUDS303  FORM      2      2        1729  Scale
FMUDP303  FORM      2      2        1731  Period
FMUDF303  DIM       20     20       1733  Format
.
FMUDT304  FORM      2      2        1753  Type
FMUDW304  FORM      2      2        1755  Width
FMUDA304  FORM      2      2        1757  Type or Variance Type
FMUDS304  FORM      2      2        1759  Scale
FMUDP304  FORM      2      2        1761  Period
FMUDF304  DIM       20     20       1763  Format
.
FMUDT305  FORM      2      2        1783  Type
FMUDW305  FORM      2      2        1785  Width
FMUDA305  FORM      2      2        1787  Type or Variance Type
FMUDS305  FORM      2      2        1789  Scale
FMUDP305  FORM      2      2        1791  Period
FMUDF305  DIM       20     20       1793  Format
.
FMUDT306  FORM      2      2        1813  Type
FMUDW306  FORM      2      2        1815  Width
FMUDA306  FORM      2      2        1817  Type or Variance Type
FMUDS306  FORM      2      2        1819  Scale
FMUDP306  FORM      2      2        1821  Period
FMUDF306  DIM       20     20       1823  Format
.
FMUDT307  FORM      2      2        1843  Type
FMUDW307  FORM      2      2        1845  Width
FMUDA307  FORM      2      2        1847  Type or Variance Type
FMUDS307  FORM      2      2        1849  Scale
FMUDP307  FORM      2      2        1851  Period
FMUDF307  DIM       20     20       1853  Format
.
FMUDT308  FORM      2      2        1873  Type
FMUDW308  FORM      2      2        1875  Width
FMUDA308  FORM      2      2        1877  Type or Variance Type
FMUDS308  FORM      2      2        1879  Scale
FMUDP308  FORM      2      2        1881  Period
FMUDF308  DIM       20     20       1883  Format
.
FMUDT309  FORM      2      2        1903  Type
FMUDW309  FORM      2      2        1905  Width
FMUDA309  FORM      2      2        1907  Type or Variance Type
FMUDS309  FORM      2      2        1909  Scale
FMUDP309  FORM      2      2        1911  Period
FMUDF309  DIM       20     20       1913  Format
.
FMUDT310  FORM      2      2        1933  Type
FMUDW310  FORM      2      2        1935  Width
FMUDA310  FORM      2      2        1937  Type or Variance Type
FMUDS310  FORM      2      2        1939  Scale
FMUDP310  FORM      2      2        1941  Period
FMUDF310  DIM       20     20       1943  Format
.
FMUDT311  FORM      2      2        1963  Type
FMUDW311  FORM      2      2        1965  Width
FMUDA311  FORM      2      2        1967  Type or Variance Type
FMUDS311  FORM      2      2        1969  Scale
FMUDP311  FORM      2      2        1971  Period
FMUDF311  DIM       20     20       1973  Format
.
FMUDT312  FORM      2      2        1993  Type
FMUDW312  FORM      2      2        1995  Width
FMUDA312  FORM      2      2        1997  Type or Variance Type
FMUDS312  FORM      2      2        1999  Scale
FMUDP312  FORM      2      2        2001  Period
FMUDF312  DIM       20     20       2003  Format
.
FMUDT313  FORM      2      2        2023  Type
FMUDW313  FORM      2      2        2025  Width
FMUDA313  FORM      2      2        2027  Type or Variance Type
FMUDS313  FORM      2      2        2029  Scale
FMUDP313  FORM      2      2        2031  Period
FMUDF313  DIM       20     20       2033  Format
.
FMUDT314  FORM      2      2        2053  Type
FMUDW314  FORM      2      2        2055  Width
FMUDA314  FORM      2      2        2057  Type or Variance Type
FMUDS314  FORM      2      2        2059  Scale
FMUDP314  FORM      2      2        2061  Period
FMUDF314  DIM       20     20       2063  Format
.
FMUDT315  FORM      2      2        2083  Type
FMUDW315  FORM      2      2        2085  Width
FMUDA315  FORM      2      2        2087  Type or Variance Type
FMUDS315  FORM      2      2        2089  Scale
FMUDP315  FORM      2      2        2091  Period
FMUDF315  DIM       20     20       2093  Format
.
FMUDT316  FORM      2      2        2113  Type
FMUDW316  FORM      2      2        2115  Width
FMUDA316  FORM      2      2        2117  Type or Variance Type
FMUDS316  FORM      2      2        2119  Scale
FMUDP316  FORM      2      2        2121  Period
FMUDF316  DIM       20     20       2123  Format
.
FMUDT317  FORM      2      2        2143  Type
FMUDW317  FORM      2      2        2145  Width
FMUDA317  FORM      2      2        2147  Type or Variance Type
FMUDS317  FORM      2      2        2149  Scale
FMUDP317  FORM      2      2        2151  Period
FMUDF317  DIM       20     20       2153  Format
.
FMUDT318  FORM      2      2        2173  Type
FMUDW318  FORM      2      2        2175  Width
FMUDA318  FORM      2      2        2177  Type or Variance Type
FMUDS318  FORM      2      2        2179  Scale
FMUDP318  FORM      2      2        2181  Period
FMUDF318  DIM       20     20       2183  Format
.
FMUDT319  FORM      2      2        2203  Type
FMUDW319  FORM      2      2        2205  Width
FMUDA319  FORM      2      2        2207  Type or Variance Type
FMUDS319  FORM      2      2        2209  Scale
FMUDP319  FORM      2      2        2211  Period
FMUDF319  DIM       20     20       2213  Format
.
FMUDT320  FORM      2      2        2233  Type
FMUDW320  FORM      2      2        2235  Width
FMUDA320  FORM      2      2        2237  Type or Variance Type
FMUDS320  FORM      2      2        2239  Scale
FMUDP320  FORM      2      2        2241  Period
FMUDF320  DIM       20     20       2243  Format
.
. Row 4
.
FMUDT401  FORM      2      2        2263  Type
FMUDW401  FORM      2      2        2265  Width
FMUDA401  FORM      2      2        2267  Type or Variance Type
FMUDS401  FORM      2      2        2269  Scale
FMUDP401  FORM      2      2        2271  Period
FMUDF401  DIM       20     20       2273  Format
.
FMUDT402  FORM      2      2        2293  Type
FMUDW402  FORM      2      2        2295  Width
FMUDA402  FORM      2      2        2297  Type or Variance Type
FMUDS402  FORM      2      2        2299  Scale
FMUDP402  FORM      2      2        2301  Period
FMUDF402  DIM       20     20       2303  Format
.
FMUDT403  FORM      2      2        2323  Type
FMUDW403  FORM      2      2        2325  Width
FMUDA403  FORM      2      2        2327  Type or Variance Type
FMUDS403  FORM      2      2        2329  Scale
FMUDP403  FORM      2      2        2331  Period
FMUDF403  DIM       20     20       2333  Format
.
FMUDT404  FORM      2      2        2353  Type
FMUDW404  FORM      2      2        2355  Width
FMUDA404  FORM      2      2        2357  Type or Variance Type
FMUDS404  FORM      2      2        2359  Scale
FMUDP404  FORM      2      2        2361  Period
FMUDF404  DIM       20     20       2363  Format
.
FMUDT405  FORM      2      2        2383  Type
FMUDW405  FORM      2      2        2385  Width
FMUDA405  FORM      2      2        2387  Type or Variance Type
FMUDS405  FORM      2      2        2389  Scale
FMUDP405  FORM      2      2        2391  Period
FMUDF405  DIM       20     20       2393  Format
.
FMUDT406  FORM      2      2        2413  Type
FMUDW406  FORM      2      2        2415  Width
FMUDA406  FORM      2      2        2417  Type or Variance Type
FMUDS406  FORM      2      2        2419  Scale
FMUDP406  FORM      2      2        2421  Period
FMUDF406  DIM       20     20       2423  Format
.
FMUDT407  FORM      2      2        2443  Type
FMUDW407  FORM      2      2        2445  Width
FMUDA407  FORM      2      2        2447  Type or Variance Type
FMUDS407  FORM      2      2        2449  Scale
FMUDP407  FORM      2      2        2451  Period
FMUDF407  DIM       20     20       2453  Format
.
FMUDT408  FORM      2      2        2473  Type
FMUDW408  FORM      2      2        2475  Width
FMUDA408  FORM      2      2        2477  Type or Variance Type
FMUDS408  FORM      2      2        2479  Scale
FMUDP408  FORM      2      2        2481  Period
FMUDF408  DIM       20     20       2483  Format
.
FMUDT409  FORM      2      2        2503  Type
FMUDW409  FORM      2      2        2505  Width
FMUDA409  FORM      2      2        2507  Type or Variance Type
FMUDS409  FORM      2      2        2509  Period
FMUDP409  FORM      2      2        2511  Period
FMUDF409  DIM       20     20       2513  Format
.
FMUDT410  FORM      2      2        2533  Type
FMUDW410  FORM      2      2        2535  Width
FMUDA410  FORM      2      2        2537  Type or Variance Type
FMUDS410  FORM      2      2        2539  Scale
FMUDP410  FORM      2      2        2541  Period
FMUDF410  DIM       20     20       2543  Format
.
FMUDT411  FORM      2      2        2563  Type
FMUDW411  FORM      2      2        2565  Width
FMUDA411  FORM      2      2        2567  Type or Variance Type
FMUDS411  FORM      2      2        2569  Scale
FMUDP411  FORM      2      2        2571  Period
FMUDF411  DIM       20     20       2573  Format
.
FMUDT412  FORM      2      2        2593  Type
FMUDW412  FORM      2      2        2595  Width
FMUDA412  FORM      2      2        2597  Type or Variance Type
FMUDS412  FORM      2      2        2599  Scale
FMUDP412  FORM      2      2        2601  Period
FMUDF412  DIM       20     20       2603  Format
.
FMUDT413  FORM      2      2        2623  Type
FMUDW413  FORM      2      2        2625  Width
FMUDA413  FORM      2      2        2627  Type or Variance Type
FMUDS413  FORM      2      2        2629  Scale
FMUDP413  FORM      2      2        2631  Period
FMUDF413  DIM       20     20       2633  Format
.
FMUDT414  FORM      2      2        2653  Type
FMUDW414  FORM      2      2        2655  Width
FMUDA414  FORM      2      2        2657  Type or Variance Type
FMUDS414  FORM      2      2        2659  Scale
FMUDP414  FORM      2      2        2661  Period
FMUDF414  DIM       20     20       2663  Format
.
FMUDT415  FORM      2      2        2683  Type
FMUDW415  FORM      2      2        2685  Width
FMUDA415  FORM      2      2        2687  Type or Variance Type
FMUDS415  FORM      2      2        2689  Scale
FMUDP415  FORM      2      2        2691  Period
FMUDF415  DIM       20     20       2693  Format
.
FMUDT416  FORM      2      2        2713  Type
FMUDW416  FORM      2      2        2715  Width
FMUDA416  FORM      2      2        2717  Type or Variance Type
FMUDS416  FORM      2      2        2719  Scale
FMUDP416  FORM      2      2        2721  Period
FMUDF416  DIM       20     20       2723  Format
.
FMUDT417  FORM      2      2        2743  Type
FMUDW417  FORM      2      2        2745  Width
FMUDA417  FORM      2      2        2747  Type or Variance Type
FMUDS417  FORM      2      2        2749  Scale
FMUDP417  FORM      2      2        2751  Period
FMUDF417  DIM       20     20       2753  Format
.
FMUDT418  FORM      2      2        2773  Type
FMUDW418  FORM      2      2        2775  Width
FMUDA418  FORM      2      2        2777  Type or Variance Type
FMUDS418  FORM      2      2        2779  Scale
FMUDP418  FORM      2      2        2781  Period
FMUDF418  DIM       20     20       2783  Format
.
FMUDT419  FORM      2      2        2803  Type
FMUDW419  FORM      2      2        2805  Width
FMUDA419  FORM      2      2        2807  Type or Variance Type
FMUDS419  FORM      2      2        2809  Scale
FMUDP419  FORM      2      2        2811  Period
FMUDF419  DIM       20     20       2813  Format
.
FMUDT420  FORM      2      2        2833  Type
FMUDW420  FORM      2      2        2835  Width
FMUDA420  FORM      2      2        2837  Type or Variance Type
FMUDS420  FORM      2      2        2839  Scale
FMUDP420  FORM      2      2        2841  Period
FMUDF420  DIM       20     20       2843  Format
.
. Row 5
.
FMUDT501  FORM      2      2        2863  Type
FMUDW501  FORM      2      2        2865  Width
FMUDA501  FORM      2      2        2867  Type or Variance Type
FMUDS501  FORM      2      2        2869  Scale
FMUDP501  FORM      2      2        2871  Period
FMUDF501  DIM       20     20       2873  Format
.
FMUDT502  FORM      2      2        2893  Type
FMUDW502  FORM      2      2        2895  Width
FMUDA502  FORM      2      2        2897  Type or Variance Type
FMUDS502  FORM      2      2        2899  Scale
FMUDP502  FORM      2      2        2901  Period
FMUDF502  DIM       20     20       2903  Format
.
FMUDT503  FORM      2      2        2923  Type
FMUDW503  FORM      2      2        2925  Width
FMUDA503  FORM      2      2        2927  Type or Variance Type
FMUDS503  FORM      2      2        2929  Scale
FMUDP503  FORM      2      2        2931  Period
FMUDF503  DIM       20     20       2933  Format
.
FMUDT504  FORM      2      2        2953  Type
FMUDW504  FORM      2      2        2955  Width
FMUDA504  FORM      2      2        2957  Type or Variance Type
FMUDS504  FORM      2      2        2959  Scale
FMUDP504  FORM      2      2        2961  Period
FMUDF504  DIM       20     20       2963  Format
.
FMUDT505  FORM      2      2        2983  Type
FMUDW505  FORM      2      2        2985  Width
FMUDA505  FORM      2      2        2987  Type or Variance Type
FMUDS505  FORM      2      2        2989  Scale
FMUDP505  FORM      2      2        2991  Period
FMUDF505  DIM       20     20       2993  Format
.
FMUDT506  FORM      2      2        3013  Type
FMUDW506  FORM      2      2        3015  Width
FMUDA506  FORM      2      2        3017  Type or Variance Type
FMUDS506  FORM      2      2        3019  Scale
FMUDP506  FORM      2      2        3021  Period
FMUDF506  DIM       20     20       3023  Format
.
FMUDT507  FORM      2      2        3043  Type
FMUDW507  FORM      2      2        3045  Width
FMUDA507  FORM      2      2        3047  Type or Variance Type
FMUDS507  FORM      2      2        3049  Scale
FMUDP507  FORM      2      2        3051  Period
FMUDF507  DIM       20     20       3053  Format
.
FMUDT508  FORM      2      2        3073  Type
FMUDW508  FORM      2      2        3075  Width
FMUDA508  FORM      2      2        3077  Type or Variance Type
FMUDS508  FORM      2      2        3079  Scale
FMUDP508  FORM      2      2        3081  Period
FMUDF508  DIM       20     20       3083  Format
.
FMUDT509  FORM      2      2        3103  Type
FMUDW509  FORM      2      2        3105  Width
FMUDA509  FORM      2      2        3107  Type or Variance Type
FMUDS509  FORM      2      2        3109  Scale
FMUDP509  FORM      2      2        3111  Period
FMUDF509  DIM       20     20       3113  Format
.
FMUDT510  FORM      2      2        3133  Type
FMUDW510  FORM      2      2        3135  Width
FMUDA510  FORM      2      2        3137  Type or Variance Type
FMUDS510  FORM      2      2        3139  Scale
FMUDP510  FORM      2      2        3141  Period
FMUDF510  DIM       20     20       3143  Format
.
FMUDT511  FORM      2      2        3163  Type
FMUDW511  FORM      2      2        3165  Width
FMUDA511  FORM      2      2        3167  Type or Variance Type
FMUDS511  FORM      2      2        3169  Scale
FMUDP511  FORM      2      2        3171  Period
FMUDF511  DIM       20     20       3173  Format
.
FMUDT512  FORM      2      2        3193  Type
FMUDW512  FORM      2      2        3195  Width
FMUDA512  FORM      2      2        3197  Type or Variance Type
FMUDS512  FORM      2      2        3199  Scale
FMUDP512  FORM      2      2        3201  Period
FMUDF512  DIM       20     20       3203  Format
.
FMUDT513  FORM      2      2        3223  Type
FMUDW513  FORM      2      2        3225  Width
FMUDA513  FORM      2      2        3227  Type or Variance Type
FMUDS513  FORM      2      2        3229  Scale
FMUDP513  FORM      2      2        3231  Period
FMUDF513  DIM       20     20       3233  Format
.
FMUDT514  FORM      2      2        3253  Type
FMUDW514  FORM      2      2        3255  Width
FMUDA514  FORM      2      2        3257  Type or Variance Type
FMUDS514  FORM      2      2        3259  Scale
FMUDP514  FORM      2      2        3261  Period
FMUDF514  DIM       20     20       3263  Format
.
FMUDT515  FORM      2      2        3283  Type
FMUDW515  FORM      2      2        3285  Width
FMUDA515  FORM      2      2        3287  Type or Variance Type
FMUDS515  FORM      2      2        3289  Scale
FMUDP515  FORM      2      2        3291  Period
FMUDF515  DIM       20     20       3293  Format
.
FMUDT516  FORM      2      2        3313  Type
FMUDW516  FORM      2      2        3315  Width
FMUDA516  FORM      2      2        3317  Type or Variance Type
FMUDS516  FORM      2      2        3319  Scale
FMUDP516  FORM      2      2        3321  Period
FMUDF516  DIM       20     20       3323  Format
.
FMUDT517  FORM      2      2        3343  Type
FMUDW517  FORM      2      2        3345  Width
FMUDA517  FORM      2      2        3347  Type or Variance Type
FMUDS517  FORM      2      2        3349  Scale
FMUDP517  FORM      2      2        3351  Period
FMUDF517  DIM       20     20       3353  Format
.
FMUDT518  FORM      2      2        3373  Type
FMUDW518  FORM      2      2        3375  Width
FMUDA518  FORM      2      2        3377  Type or Variance Type
FMUDS518  FORM      2      2        3379  Scale
FMUDP518  FORM      2      2        3381  Period
FMUDF518  DIM       20     20       3383  Format
.
FMUDT519  FORM      2      2        3403  Type
FMUDW519  FORM      2      2        3405  Width
FMUDA519  FORM      2      2        3407  Type or Variance Type
FMUDS519  FORM      2      2        3409  Scale
FMUDP519  FORM      2      2        3411  Period
FMUDF519  DIM       20     20       3413  Format
.
FMUDT520  FORM      2      2        3433  Type
FMUDW520  FORM      2      2        3435  Width
FMUDA520  FORM      2      2        3437  Type or Variance Type
FMUDS520  FORM      2      2        3439  Scale
FMUDP520  FORM      2      2        3441  Period
FMUDF520  DIM       20     20       3443  Format
.
.End of Record                      3463
.
