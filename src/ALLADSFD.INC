. V9.09.001 23/08/2007 DS  Created FD  CAR 135538                            
. V9.09.002 29/08/2007 DS  Added audit file  CAR 135538                      
. *----------------------------------------------------------------------
. * Include Name  :   ALLADSFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Assessment Details Setup           
. *
. * File Type     :   SQL
. *
. * File Name     :   alladsaf.dat
. * Audit Name    :   allaudad.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
ALLAUDAD   IFILE    SQL, FIXED=2241, KEY="D1-8,9-16,17-18,19-19"                
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALADAUDD  DIM       8      8        1     Date of Change
ALADAUDT  DIM       8      8        9     Time of Change
ALADAUDP  DIM       2      2        17    Port
ALADAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
ALADAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
ALADAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
ALLADSA1   IFILE    SQL, FIXED=2216, KEY="U1-8,9-16"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALADREFN  DIM       8      8        1     Referral Number                    
ALADANUM  DIM       8      8        9     Assessment Number                  
ALADTYPE  DIM       10     10       17    Assessment Type                    
ALADACTV  DIM       1      1        27    Active (0=No[default],1=yes)       
ALADDEPT  DIM       3      3        28    Department (Cat CG - Indc3=A)      
ALADCOLD  DIM       8      8        31    Collection Date                    
ALADREMD  DIM       8      8        39    Reminder Date (coldate+remind days)
ALADCOMP  DIM       1      1        47    Assessment Completed (0=No,1=yes)  
ALADOUTC  DIM       3      3        48    Outcome Code (Cat OZ)              
ALADHCP1  DIM       10     10       51    HCP Performing Assessment 1        
ALADHCP2  DIM       10     10       61    HCP 2                              
ALADHCP3  DIM       10     10       71    HCP 3                              
ALADHCP4  DIM       10     10       81    HCP 4                              
ALADHCP5  DIM       10     10       91    HCP 5                              
ALADHCP6  DIM       10     10       101   HCP 6                              
ALADHCP7  DIM       10     10       111   HCP 7                              
ALADHCP8  DIM       10     10       121   HCP 8                              
ALADHCP9  DIM       10     10       131   HCP 9                              
ALADCD01  DIM       3      3        141   User Defined Code 1 (Cat ALDPCT01) 
ALADCD02  DIM       3      3        144   User Defined Code 2 (Cat ALDPCT02) 
ALADCD03  DIM       3      3        147   User Defined Code 3 (Cat ALDPCT03) 
ALADCD04  DIM       3      3        150   User Defined Code 4 (Cat ALDPCT04) 
ALADCD05  DIM       3      3        153   User Defined Code 5 (Cat ALDPCT05) 
ALADCD06  DIM       3      3        156   User Defined Code 6 (Cat ALDPCT06) 
ALADCD07  DIM       3      3        159   User Defined Code 7 (Cat ALDPCT07) 
ALADCD08  DIM       3      3        162   User Defined Code 8 (Cat ALDPCT08) 
ALADCD09  DIM       3      3        165   User Defined Code 9 (Cat ALDPCT09) 
ALADCD10  DIM       3      3        168   User Defined Code 10 (Cat ALDPCT10)
ALADCD11  DIM       3      3        171   User Defined Code 11 (Cat ALDPCT11)
ALADCD12  DIM       3      3        174   User Defined Code 12 (Cat ALDPCT12)
ALADCD13  DIM       3      3        177   User Defined Code 13 (Cat ALDPCT13)
ALADCD14  DIM       3      3        180   User Defined Code 14 (Cat ALDPCT14)
ALADCD15  DIM       3      3        183   User Defined Code 15 (Cat ALDPCT15)
ALADCD16  DIM       3      3        186   User Defined Code 16 (Cat ALDPCT16)
ALADCD17  DIM       3      3        189   User Defined Code 17 (Cat ALDPCT17)
ALADCD18  DIM       3      3        192   User Defined Code 18 (Cat ALDPCT18)
ALADCD19  DIM       3      3        195   User Defined Code 19 (Cat ALDPCT19)
ALADCD20  DIM       3      3        198   User Defined Code 20 (Cat ALDPCT20)
ALADCD21  DIM       3      3        201   User Defined Code 21 (Cat ALDPCT21)
ALADCD22  DIM       3      3        204   User Defined Code 22 (Cat ALDPCT22)
ALADCD23  DIM       3      3        207   User Defined Code 23 (Cat ALDPCT23)
ALADCD24  DIM       3      3        210   User Defined Code 24 (Cat ALDPCT24)
ALADCD25  DIM       3      3        213   User Defined Code 25 (Cat ALDPCT25)
ALADCD26  DIM       3      3        216   User Defined Code 26 (Cat ALDPCT26)
ALADNM01  DIM       5      5        219   User Defined Numeric 1             
ALADNM02  DIM       5      5        224   User Defined Numeric 2             
ALADNM03  DIM       5      5        229   User Defined Numeric 3             
ALADNM04  DIM       5      5        234   User Defined Numeric 4             
ALADNM05  DIM       5      5        239   User Defined Numeric 5             
ALADNM06  DIM       5      5        244   User Defined Numeric 6             
ALADNM07  DIM       5      5        249   User Defined Numeric 7             
ALADNM08  DIM       5      5        254   User Defined Numeric 8             
ALADNM09  DIM       5      5        259   User Defined Numeric 9             
ALADNM10  DIM       5      5        264   User Defined Numeric 10            
ALADNM11  DIM       5      5        269   User Defined Numeric 11            
ALADNM12  DIM       5      5        274   User Defined Numeric 12            
ALADNM13  DIM       5      5        279   User Defined Numeric 13            
ALADNM14  DIM       5      5        284   User Defined Numeric 14            
ALADNM15  DIM       5      5        289   User Defined Numeric 15            
ALADDT01  DIM       8      8        294   User Defined Date 1 (ccyymmdd)     
ALADDT02  DIM       8      8        302   User Defined Date 2 (ccyymmdd)     
ALADDT03  DIM       8      8        310   User Defined Date 3 (ccyymmdd)     
ALADDT04  DIM       8      8        318   User Defined Date 4 (ccyymmdd)     
ALADDT05  DIM       8      8        326   User Defined Date 5 (ccyymmdd)     
ALADDT06  DIM       8      8        334   User Defined Date 6 (ccyymmdd)     
ALADDT07  DIM       8      8        342   User Defined Date 7 (ccyymmdd)     
ALADDT08  DIM       8      8        350   User Defined Date 8 (ccyymmdd)     
ALADDT09  DIM       8      8        358   User Defined Date 9 (ccyymmdd)     
ALADDT10  DIM       8      8        366   User Defined Date 10 (ccyymmdd)    
ALADTM01  DIM       8      8        374   User Defined Time 1 (hh:mm:ss)     
ALADTM02  DIM       8      8        382   User Defined Time 2 (hh:mm:ss)     
ALADTM03  DIM       8      8        390   User Defined Time 3 (hh:mm:ss)     
ALADTM04  DIM       8      8        398   User Defined Time 4 (hh:mm:ss)     
ALADTM05  DIM       8      8        406   User Defined Time 5 (hh:mm:ss)     
ALADTM06  DIM       8      8        414   User Defined Time 6 (hh:mm:ss)     
ALADTM07  DIM       8      8        422   User Defined Time 7 (hh:mm:ss)     
ALADTM08  DIM       8      8        430   User Defined Time 8 (hh:mm:ss)     
ALADTM09  DIM       8      8        438   User Defined Time 9 (hh:mm:ss)     
ALADTM10  DIM       8      8        446   User Defined Time 10 (hh:mm:ss)    
ALADUN01  DIM       3      3        454   Three digit number 1               
ALADUN02  DIM       3      3        457   Three digit number 2               
ALADUN03  DIM       3      3        460   Three digit number 3               
ALADUN04  DIM       3      3        463   Three digit number 4               
ALADUN05  DIM       3      3        466   Three digit number 5               
ALADUN06  DIM       3      3        469   Three digit number 6               
ALADUN07  DIM       3      3        472   Three digit number 7               
ALADUN08  DIM       3      3        475   Three digit number 8               
ALADUN09  DIM       3      3        478   Three digit number 9               
ALADUN10  DIM       3      3        481   Three digit number 10              
ALADUN11  DIM       3      3        484   Three digit number 11              
ALADUN12  DIM       3      3        487   Three digit number 12              
ALADUN13  DIM       3      3        490   Three digit number 13              
ALADUN14  DIM       3      3        493   Three digit number 14              
ALADUN15  DIM       3      3        496   Three digit number 15              
ALADUN16  DIM       3      3        499   Three digit number 16              
ALADUN17  DIM       3      3        502   Three digit number 17              
ALADUN18  DIM       3      3        505   Three digit number 18              
ALADUN19  DIM       3      3        508   Three digit number 19              
ALADUN20  DIM       3      3        511   Three digit number 20              
ALADUN21  DIM       3      3        514   Three digit number 21              
ALADUN22  DIM       3      3        517   Three digit number 22              
ALADUN23  DIM       3      3        520   Three digit number 23              
ALADUN24  DIM       3      3        523   Three digit number 24              
ALADUN25  DIM       3      3        526   Three digit number 25              
ALADUN26  DIM       3      3        529   Three digit number 26              
ALADUN27  DIM       3      3        532   Three digit number 27              
ALADUN28  DIM       3      3        535   Three digit number 28              
ALADUN29  DIM       3      3        538   Three digit number 29              
ALADUN30  DIM       3      3        541   Three digit number 30              
ALADFT01  DIM       50     50       544   User Defined Free Text 1           
ALADFT02  DIM       50     50       594   User Defined Free Text 2           
ALADFT03  DIM       50     50       644   User Defined Free Text 3           
ALADFT04  DIM       50     50       694   User Defined Free Text 4           
ALADFT05  DIM       50     50       744   User Defined Free Text 5           
ALADFT06  DIM       50     50       794   User Defined Free Text 6           
ALADFT07  DIM       50     50       844   User Defined Free Text 7           
ALADFT08  DIM       50     50       894   User Defined Free Text 8           
ALADFT09  DIM       50     50       944   User Defined Free Text 9           
ALADFT10  DIM       50     50       994   User Defined Free Text 10          
ALADFT11  DIM       50     50       1044  User Defined Free Text 11          
ALADFT12  DIM       50     50       1094  User Defined Free Text 12          
ALADFT13  DIM       50     50       1144  User Defined Free Text 13          
ALADFT14  DIM       50     50       1194  User Defined Free Text 14          
ALADFT15  DIM       50     50       1244  User Defined Free Text 15          
ALADFT16  DIM       50     50       1294  User Defined Free Text 16          
ALADFT17  DIM       50     50       1344  User Defined Free Text 17          
ALADFT18  DIM       50     50       1394  User Defined Free Text 18          
ALADFT19  DIM       50     50       1444  User Defined Free Text 19          
ALADFT20  DIM       50     50       1494  User Defined Free Text 20          
ALADFT21  DIM       50     50       1544  User Defined Free Text 21          
ALADFT22  DIM       50     50       1594  User Defined Free Text 22          
ALADFT23  DIM       50     50       1644  User Defined Free Text 23          
ALADFT24  DIM       50     50       1694  User Defined Free Text 24          
ALADFT25  DIM       50     50       1744  User Defined Free Text 25          
ALADFT26  DIM       50     50       1794  User Defined Free Text 26          
ALADFT27  DIM       50     50       1844  User Defined Free Text 27          
ALADFT28  DIM       50     50       1894  User Defined Free Text 28          
ALADFT29  DIM       50     50       1944  User Defined Free Text 29          
ALADFT30  DIM       50     50       1994  User Defined Free Text 30          
ALADYN01  DIM       1      1        2044  User Defined Flag 1                
ALADYN02  DIM       1      1        2045  User Defined Flag 2                
ALADYN03  DIM       1      1        2046  User Defined Flag 3                
ALADYN04  DIM       1      1        2047  User Defined Flag 4                
ALADYN05  DIM       1      1        2048  User Defined Flag 5                
ALADYN06  DIM       1      1        2049  User Defined Flag 6                
ALADYN07  DIM       1      1        2050  User Defined Flag 7                
ALADYN08  DIM       1      1        2051  User Defined Flag 8                
ALADYN09  DIM       1      1        2052  User Defined Flag 9                
ALADYN10  DIM       1      1        2053  User Defined Flag 10               
ALADYN11  DIM       1      1        2054  User Defined Flag 11               
ALADYN12  DIM       1      1        2055  User Defined Flag 12               
ALADYN13  DIM       1      1        2056  User Defined Flag 13               
ALADYN14  DIM       1      1        2057  User Defined Flag 14               
ALADYN15  DIM       1      1        2058  User Defined Flag 15               
ALADYN16  DIM       1      1        2059  User Defined Flag 16               
ALADYN17  DIM       1      1        2060  User Defined Flag 17               
ALADYN18  DIM       1      1        2061  User Defined Flag 18               
ALADYN19  DIM       1      1        2062  User Defined Flag 19               
ALADYN20  DIM       1      1        2063  User Defined Flag 20               
ALADCDAT  DIM       8      8        2064  Date Record Created (CCYYMMDD)     
ALADCTIM  DIM       8      8        2072  Time Record Created (HH:MM:SS)     
ALADCUID  DIM       10     10       2080  WEB User ID Created (websecaf)     
ALADUDAT  DIM       8      8        2090  Update Date (CCYYMMDD)             
ALADUTIM  DIM       8      8        2098  Update Time (HH:MM:SS)             
ALADUUID  DIM       10     10       2106  WEB User ID Updated (websecaf)     
ALADSPAR  DIM       100    100      2116  Spare Variable                     
.
.End of Record                      2216 
.
