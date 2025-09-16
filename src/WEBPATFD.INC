. 5.09 .001 01/02/2001 JH                                                    
. *----------------------------------------------------------------------
. * Include Name  :   WEBPATFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   Patient List by Web User ID Table  
. *
. * File Type     :   SQL
. *
. * File Name     :   webpataf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBPATA1   IFILE    SQL, FIXED=254, KEY="U1-10,11-13,14-21"                     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBPTWUID  DIM       10     10       1     Web User ID                        
WBPTLNUM  DIM       3      3        11    List Number                        
WBPTURNO  DIM       8      8        14    UR Number                          
WBPTVNUM  DIM       8      8        22    Visit Number                       
WBPTDATC  DIM       8      8        30    Date Created                       
WBPTTIMC  DIM       5      5        38    Time Created                       
WBPTRDAT  DIM       8      8        43    Review Date                        
WBPTSTAT  DIM       3      3        51    Status (Category wv)               
WBPTCOM1  DIM       60     60       54    Comment 1                          
WBPTCOM2  DIM       60     60       114   Comment 2                          
WBPTSPAR  DIM       80     80       174   Spare                              
.
.End of Record                      254  
.
