. 5.09 .004 21/07/2000 WEB                                                   
. 5.09 .005 21/07/2000 WEB                                                   
. *----------------------------------------------------------------------
. * Include Name  :   WEBRSPFD.INC
. *
. * Function      :   File Def'n Include for Web Reporting                      
. *                   Report Spool Files Available       
. *
. * File Type     :   SQL
. *
. * File Name     :   webrspaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBRSPA1   IFILE    SQL, FIXED=155, KEY="U1-8"                                  
WEBRSPA2   IFILE    SQL, FIXED=155, KEY="U19-26,1-8"                            
WEBRSPA3   IFILE    SQL, FIXED=155, KEY="U9-18,19-26,1-8"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBRSSPID  DIM       8      8        1     Spool File ID                      
WBRSUSID  DIM       10     10       9     Web User ID                        
WBRSPRID  DIM       8      8        19    Program ID                         
WBRSDATE  DIM       8      8        27    Date Created                       
WBRSTIME  DIM       5      5        35    Time Created                       
WBRSDESC  DIM       35     35       40    Description                        
WBRSSPAR  DIM       80     80       75    Spare                              
.
.End of Record                      155  
.
