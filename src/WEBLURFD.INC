. V9.09.001 05/12/2007 JH  Added ur and visits from 11-20  CAR 147606        
. *----------------------------------------------------------------------
. * Include Name  :   WEBLURFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   Last 20 U/R's for WEB User ID      
. *
. * File Type     :   SQL
. *
. * File Name     :   webluraf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBLURA1   IFILE    SQL, FIXED=381, KEY="U1-10"                                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBLRUID   DIM       10     10       1     Web User ID                        
WBLRUR01  DIM       8      8        11    UR Number 1 (Most Recent Reference)
WBLRVS01  DIM       8      8        19    Visit number 1 (Most Recent Ref)   
WBLRUR02  DIM       8      8        27    UR Number 2                        
WBLRVS02  DIM       8      8        35    Visit Number 2                     
WBLRUR03  DIM       8      8        43    UR Number 3                        
WBLRVS03  DIM       8      8        51    Visit Number 3                     
WBLRUR04  DIM       8      8        59    UR Number 4                        
WBLRVS04  DIM       8      8        67    Visit Number 4                     
WBLRUR05  DIM       8      8        75    UR Number 5                        
WBLRVS05  DIM       8      8        83    Visit Number 5                     
WBLRUR06  DIM       8      8        91    UR Number 6                        
WBLRVS06  DIM       8      8        99    Visit Number 6                     
WBLRUR07  DIM       8      8        107   UR Number 7                        
WBLRVS07  DIM       8      8        115   Visit Number 7                     
WBLRUR08  DIM       8      8        123   UR Number 8                        
WBLRVS08  DIM       8      8        131   Visit Number 8                     
WBLRUR09  DIM       8      8        139   UR Number 9                        
WBLRVS09  DIM       8      8        147   Visit Number 9                     
WBLRUR10  DIM       8      8        155   UR Number 10                       
WBLRVS10  DIM       8      8        163   Visit Number 10                    
WBLRUR11  DIM       8      8        171   UR Number 11                       
WBLRVS11  DIM       8      8        179   Visit Number 11                    
WBLRUR12  DIM       8      8        187   UR Number 12                       
WBLRVS12  DIM       8      8        195   Visit Number 12                    
WBLRUR13  DIM       8      8        203   UR Number 13                       
WBLRVS13  DIM       8      8        211   Visit Number 13                    
WBLRUR14  DIM       8      8        219   UR Number 14                       
WBLRVS14  DIM       8      8        227   Visit Number 14                    
WBLRUR15  DIM       8      8        235   UR Number 15                       
WBLRVS15  DIM       8      8        243   Visit Number 15                    
WBLRUR16  DIM       8      8        251   UR Number 16                       
WBLRVS16  DIM       8      8        259   Visit Number 16                    
WBLRUR17  DIM       8      8        267   UR Number 17                       
WBLRVS17  DIM       8      8        275   Visit Number 17                    
WBLRUR18  DIM       8      8        283   UR Number 18                       
WBLRVS18  DIM       8      8        291   Visit Number 18                    
WBLRUR19  DIM       8      8        299   UR Number 19                       
WBLRVS19  DIM       8      8        307   Visit Number 19                    
WBLRUR20  DIM       8      8        315   UR Number 20 (Oldest Reference)    
WBLRVS20  DIM       8      8        323   Visit Number 20 (Oldest Reference) 
WBLRSPAR  DIM       50     50       331   Spare                              
.
.End of Record                      381  
.
