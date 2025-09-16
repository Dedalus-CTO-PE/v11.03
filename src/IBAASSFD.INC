. V9.07.001 04/09/2006 DS  Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   IBAASSFD.INC
. *
. * Function      :   File Def'n Include for IBA Software                       
. *                   Health Assessment Details          
. *
. * File Type     :   SQL
. *
. * File Name     :   ibaassaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
IBAASSA1   IFILE    SQL, FIXED=1529, KEY="U1-8,9-16"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
IBASURNO  DIM       8      8        1     U/R Number                         
IBASCNTR  DIM       8      8        9     Counter                            
IBASFL01  DIM       1      1        17    Flag Field 01 (0=No,1=Yes)         
IBASFL02  DIM       1      1        18    Flag Field 02 (0=No,1=Yes)         
IBASFL03  DIM       1      1        19    Flag Field 03 (0=No,1=Yes)         
IBASFL04  DIM       1      1        20    Flag Field 04 (0=No,1=Yes)         
IBASFL05  DIM       1      1        21    Flag Field 05 (0=No,1=Yes)         
IBASFL06  DIM       1      1        22    Flag Field 06 (0=No,1=Yes)         
IBASFL07  DIM       1      1        23    Flag Field 07 (0=No,1=Yes)         
IBASFL08  DIM       1      1        24    Flag Field 08 (0=No,1=Yes)         
IBASFL09  DIM       1      1        25    Flag Field 09 (0=No,1=Yes)         
IBASFL10  DIM       1      1        26    Flag Field 10 (0=No,1=Yes)         
IBASFL11  DIM       1      1        27    Flag Field 11 (0=No,1=Yes)         
IBASFL12  DIM       1      1        28    Flag Field 12 (0=No,1=Yes)         
IBASFL13  DIM       1      1        29    Flag Field 13 (0=No,1=Yes)         
IBASFL14  DIM       1      1        30    Flag Field 14 (0=No,1=Yes)         
IBASFL15  DIM       1      1        31    Flag Field 15 (0=No,1=Yes)         
IBASFL16  DIM       1      1        32    Flag Field 16 (0=No,1=Yes)         
IBASFL17  DIM       1      1        33    Flag Field 17 (0=No,1=Yes)         
IBASFL18  DIM       1      1        34    Flag Field 18 (0=No,1=Yes)         
IBASFL19  DIM       1      1        35    Flag Field 19 (0=No,1=Yes)         
IBASFL20  DIM       1      1        36    Flag Field 20 (0=No,1=Yes)         
IBASFL21  DIM       1      1        37    Flag Field 21 (0=No,1=Yes)         
IBASFL22  DIM       1      1        38    Flag Field 22 (0=No,1=Yes)         
IBASFL23  DIM       1      1        39    Flag Field 23 (0=No,1=Yes)         
IBASFL24  DIM       1      1        40    Flag Field 24 (0=No,1=Yes)         
IBASFL25  DIM       1      1        41    Flag Field 25 (0=No,1=Yes)         
IBASFL26  DIM       1      1        42    Flag Field 26 (0=No,1=Yes)         
IBASFL27  DIM       1      1        43    Flag Field 27 (0=No,1=Yes)         
IBASFL28  DIM       1      1        44    Flag Field 28 (0=No,1=Yes)         
IBASFL29  DIM       1      1        45    Flag Field 29 (0=No,1=Yes)         
IBASFL30  DIM       1      1        46    Flag Field 30 (0=No,1=Yes)         
IBASFL31  DIM       1      1        47    Flag Field 31 (0=No,1=Yes)         
IBASFL32  DIM       1      1        48    Flag Field 32 (0=No,1=Yes)         
IBASFL33  DIM       1      1        49    Flag Field 33 (0=No,1=Yes)         
IBASFL34  DIM       1      1        50    Flag Field 34 (0=No,1=Yes)         
IBASFL35  DIM       1      1        51    Flag Field 35 (0=No,1=Yes)         
IBASFL36  DIM       1      1        52    Flag Field 36 (0=No,1=Yes)         
IBASFL37  DIM       1      1        53    Flag Field 37 (0=No,1=Yes)         
IBASFL38  DIM       1      1        54    Flag Field 38 (0=No,1=Yes)         
IBASFL39  DIM       1      1        55    Flag Field 39 (0=No,1=Yes)         
IBASFL40  DIM       1      1        56    Flag Field 40 (0=No,1=Yes)         
IBASFL41  DIM       1      1        57    Flag Field 41 (0=No,1=Yes)         
IBASFL42  DIM       1      1        58    Flag Field 42 (0=No,1=Yes)         
IBASFL43  DIM       1      1        59    Flag Field 43 (0=No,1=Yes)         
IBASFL44  DIM       1      1        60    Flag Field 44 (0=No,1=Yes)         
IBASFL45  DIM       1      1        61    Flag Field 45 (0=No,1=Yes)         
IBASFL46  DIM       1      1        62    Flag Field 46 (0=No,1=Yes)         
IBASFL47  DIM       1      1        63    Flag Field 47 (0=No,1=Yes)         
IBASFL48  DIM       1      1        64    Flag Field 48 (0=No,1=Yes)         
IBASFL49  DIM       1      1        65    Flag Field 49 (0=No,1=Yes)         
IBASFL50  DIM       1      1        66    Flag Field 50 (0=No,1=Yes)         
IBASFL51  DIM       1      1        67    Flag Field 51 (0=No,1=Yes)         
IBASFL52  DIM       1      1        68    Flag Field 52 (0=No,1=Yes)         
IBASFL53  DIM       1      1        69    Flag Field 53 (0=No,1=Yes)         
IBASFL54  DIM       1      1        70    Flag Field 54 (0=No,1=Yes)         
IBASFL55  DIM       1      1        71    Flag Field 55 (0=No,1=Yes)         
IBASFL56  DIM       1      1        72    Flag Field 56 (0=No,1=Yes)         
IBASFL57  DIM       1      1        73    Flag Field 57 (0=No,1=Yes)         
IBASFL58  DIM       1      1        74    Flag Field 58 (0=No,1=Yes)         
IBASFL59  DIM       1      1        75    Flag Field 59 (0=No,1=Yes)         
IBASFL60  DIM       1      1        76    Flag Field 60 (0=No,1=Yes)         
IBASSM01  DIM       10     10       77    Small Free Format 01               
IBASSM02  DIM       10     10       87    Small Free Format 02               
IBASSM03  DIM       10     10       97    Small Free Format 03               
IBASSM04  DIM       10     10       107   Small Free Format 04               
IBASSM05  DIM       10     10       117   Small Free Format 05               
IBASSM06  DIM       10     10       127   Small Free Format 06               
IBASSM07  DIM       10     10       137   Small Free Format 07               
IBASSM08  DIM       10     10       147   Small Free Format 08               
IBASSM09  DIM       10     10       157   Small Free Format 09               
IBASSM10  DIM       10     10       167   Small Free Format 10               
IBASSM11  DIM       10     10       177   Small Free Format 11               
IBASSM12  DIM       10     10       187   Small Free Format 12               
IBASSM13  DIM       10     10       197   Small Free Format 13               
IBASSM14  DIM       10     10       207   Small Free Format 14               
IBASSM15  DIM       10     10       217   Small Free Format 15               
IBASSM16  DIM       10     10       227   Small Free Format 16               
IBASSM17  DIM       10     10       237   Small Free Format 17               
IBASSM18  DIM       10     10       247   Small Free Format 18               
IBASSM19  DIM       10     10       257   Small Free Format 19               
IBASSM20  DIM       10     10       267   Small Free Format 20               
IBASSM21  DIM       10     10       277   Small Free Format 21               
IBASSM22  DIM       10     10       287   Small Free Format 22               
IBASSM23  DIM       10     10       297   Small Free Format 23               
IBASSM24  DIM       10     10       307   Small Free Format 24               
IBASSM25  DIM       10     10       317   Small Free Format 25               
IBASSM26  DIM       10     10       327   Small Free Format 26               
IBASSM27  DIM       10     10       337   Small Free Format 27               
IBASSM28  DIM       10     10       347   Small Free Format 28               
IBASSM29  DIM       10     10       357   Small Free Format 29               
IBASSM30  DIM       10     10       367   Small Free Format 30               
IBASMD01  DIM       20     20       377   Medium Free Format 01              
IBASMD02  DIM       20     20       397   Medium Free Format 02              
IBASMD03  DIM       20     20       417   Medium Free Format 03              
IBASMD04  DIM       20     20       437   Medium Free Format 04              
IBASMD05  DIM       20     20       457   Medium Free Format 05              
IBASMD06  DIM       20     20       477   Medium Free Format 06              
IBASMD07  DIM       20     20       497   Medium Free Format 07              
IBASMD08  DIM       20     20       517   Medium Free Format 08              
IBASMD09  DIM       20     20       537   Medium Free Format 09              
IBASMD10  DIM       20     20       557   Medium Free Format 10              
IBASMD11  DIM       20     20       577   Medium Free Format 11              
IBASMD12  DIM       20     20       597   Medium Free Format 12              
IBASMD13  DIM       20     20       617   Medium Free Format 13              
IBASMD14  DIM       20     20       637   Medium Free Format 14              
IBASMD15  DIM       20     20       657   Medium Free Format 15              
IBASMD16  DIM       20     20       677   Medium Free Format 16              
IBASMD17  DIM       20     20       697   Medium Free Format 17              
IBASMD18  DIM       20     20       717   Medium Free Format 18              
IBASMD19  DIM       20     20       737   Medium Free Format 19              
IBASMD20  DIM       20     20       757   Medium Free Format 20              
IBASLR01  DIM       30     30       777   Large Free Format 01               
IBASLR02  DIM       30     30       807   Large Free Format 02               
IBASLR03  DIM       30     30       837   Large Free Format 03               
IBASLR04  DIM       30     30       867   Large Free Format 04               
IBASLR05  DIM       30     30       897   Large Free Format 05               
IBASLR06  DIM       30     30       927   Large Free Format 06               
IBASLR07  DIM       30     30       957   Large Free Format 07               
IBASLR08  DIM       30     30       987   Large Free Format 08               
IBASLR09  DIM       30     30       1017  Large Free Format 09               
IBASLR10  DIM       30     30       1047  Large Free Format 10               
IBASXL01  DIM       60     60       1077  XLarge Free Format 01              
IBASXL02  DIM       60     60       1137  XLarge Free Format 02              
IBASXL03  DIM       60     60       1197  XLarge Free Format 03              
IBASXL04  DIM       60     60       1257  XLarge Free Format 04              
IBASXL05  DIM       60     60       1317  XLarge Free Format 05              
IBASCDAT  DIM       8      8        1377  Date Record Created (CCYYMMDD)     
IBASCTIM  DIM       8      8        1385  Time Record Created (HH:MM:SS)     
IBASCUID  DIM       10     10       1393  WEB User ID Created (websecaf)     
IBASUDAT  DIM       8      8        1403  Date Record Updated (CCYYMMDD)     
IBASUTIM  DIM       8      8        1411  Time Record Updated (HH:MM:SS)     
IBASUUID  DIM       10     10       1419  WEB User ID Updated (websecaf)     
IBASSPAR  DIM       100    100      1429  Spare Variable                     
.
.End of Record                      1529 
.
