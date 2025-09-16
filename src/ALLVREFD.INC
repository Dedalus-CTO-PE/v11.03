. V10.11.01 29/11/2017 SA C-0844404 Added ALVRCONT and reduced length of SPARE  
. V10.05.01 20/10/2014 SA C-305679 Created FD
. *----------------------------------------------------------------------
. * Include Name  :   ALLVREFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   VINAH Response Errors              
. *
. * File Type     :   SQL
. *
. * File Name     :   allvreaf.dat
. *
. * Index Values  :   KEY17                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLVREA1   IFILE    SQL, FIXED=69, KEY="U1-1,2-9,10-17"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALVRSTAT  DIM       1      1        1     Record Status                      
.                                         0 = Waiting for processing           
.                                         1 = Processing completed             
ALVRURNO  DIM       8      8        2     Patient U/R Number                 
ALVRVISN  DIM       8      8        10    Visit Number                       
ALVRMTYP  DIM       7      7        18    Message Type (eg PPP-PCB)          
ALVRECOD  DIM       4      4        25    Error Code (E052 or E061)          
ALVRCONT  DIM       8      8        29    Contact Number                     
ALVRSPAR  DIM       32     32       37    Spare Variable                     
.
.End of Record                      69   
.
