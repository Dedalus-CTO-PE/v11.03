. V9.09.001 06/08/2007 DS  Created FD  CAR 135538                            
. *----------------------------------------------------------------------
. * Include Name  :   ALLDSPFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Department Specific Parameters     
. *
. * File Type     :   SQL
. *
. * File Name     :   alldspaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLDSPA1   IFILE    SQL, FIXED=106, KEY="U1-3"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALDPDEPT  DIM       3      3        1     Department Code (Cat CG Indc3='A') 
ALDPCT01  DIM       2      2        4     Category 01 (Category aa)          
ALDPCT02  DIM       2      2        6     Category 02 (Category ab)          
ALDPCT03  DIM       2      2        8     Category 03 (Category ac)          
ALDPCT04  DIM       2      2        10    Category 04 (Category ad)          
ALDPCT05  DIM       2      2        12    Category 05 (Category ae)          
ALDPCT06  DIM       2      2        14    Category 06 (Category af)          
ALDPCT07  DIM       2      2        16    Category 07 (Category ag)          
ALDPCT08  DIM       2      2        18    Category 08 (Category ah)          
ALDPCT09  DIM       2      2        20    Category 09 (Category ai)          
ALDPCT10  DIM       2      2        22    Category 10 (Category aj)          
ALDPCT11  DIM       2      2        24    Category 11 (Category ak)          
ALDPCT12  DIM       2      2        26    Category 12 (Category al)          
ALDPCT13  DIM       2      2        28    Category 13 (Category am)          
ALDPCT14  DIM       2      2        30    Category 14 (Category an)          
ALDPCT15  DIM       2      2        32    Category 15 (Category ao)          
ALDPCT16  DIM       2      2        34    Category 16 (Category ap)          
ALDPCT17  DIM       2      2        36    Category 17 (Category aq)          
ALDPCT18  DIM       2      2        38    Category 18 (Category ar)          
ALDPCT19  DIM       2      2        40    Category 19 (Category as)          
ALDPCT20  DIM       2      2        42    Category 20 (Category at)          
ALDPCT21  DIM       2      2        44    Category 21 (Category au)          
ALDPCT22  DIM       2      2        46    Category 22 (Category av)          
ALDPCT23  DIM       2      2        48    Category 23 (Category aw)          
ALDPCT24  DIM       2      2        50    Category 24 (Category ax)          
ALDPCT25  DIM       2      2        52    Category 25 (Category ay)          
ALDPCT26  DIM       2      2        54    Category 26 (Category az)          
ALDPSPAR  DIM       50     50       56    Spare Variable                     
.
.End of Record                      106  
.
