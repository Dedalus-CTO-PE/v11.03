. V9.04.001 07/02/2005 EC  Created FD                                        
. V9.04.002 07/02/2005                                                       
. V9.04.003 23/05/2005 EC  Added provider usage                              
. *----------------------------------------------------------------------
. * Include Name  :   ALLRITFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Referral Items                     
. *
. * File Type     :   SQL
. *
. * File Name     :   allritaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLRITA1   IFILE    SQL, FIXED=147, KEY="U1-8,9-10"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALRTVISN  DIM       8      8        1     Referral/Visit Number              
ALRTITMC  DIM       2      2        9     Item Count                         
ALRTIFLG  DIM       2      2        11    Item Type 0=MBS 1=AMA              
ALRTITMN  DIM       9      9        13    MBS Item Number                    
ALRTSUBN  DIM       3      3        22    Sub Item Number                    
ALRTCDAT  DIM       8      8        25    Date Record Created (ccyymmdd)     
ALRTCTIM  DIM       8      8        33    Time Record Created (hh:mm:ss)     
ALRTCUID  DIM       10     10       41    WEB User ID Created (websecaf)     
ALRTUDAT  DIM       8      8        51    Date Record Updated (ccyymmdd)     
ALRTUTIM  DIM       8      8        59    Time Record Updated (hh:mm:ss)     
ALRTUUID  DIM       10     10       67    WEB User ID Updated (websecaf)     
ALRTPUSE  DIM       20     20       77    Provider Usage                     
ALRTSPAR  DIM       50     50       97    Spare                              
.
.End of Record                      147  
.
