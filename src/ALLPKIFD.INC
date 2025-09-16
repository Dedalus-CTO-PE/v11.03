. V9.12.001 13/10/2009 EC  Created FD CAR 207550                             
. *----------------------------------------------------------------------
. * Include Name  :   ALLPKIFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Problem keyword Index              
. *
. * File Type     :   SQL
. *
. * File Name     :   allpkiaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLPKIA1   IFILE    SQL, FIXED=73, KEY="U1-3,4-12,13-52"                        
ALLPKIA2   IFILE    SQL, FIXED=73, KEY="U1-3,13-52,4-12"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALPKDEPT  DIM       3      3        1     Department (alldepaf)              
ALPKPROB  DIM       9      9        4     Problem Code                       
ALPKKKWD  DIM       40     40       13    Keyword                            
ALPKSPAR  DIM       20     20       53    Spare                              
.
.End of Record                      73   
.
