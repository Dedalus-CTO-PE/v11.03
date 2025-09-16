. V6.00.001 22/02/1993 Nez New File                                          
. *----------------------------------------------------------------------
. * Include Name  :   SINTRNFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Transmission Control for VHA SOS   
. *
. * File Type     :   SQL
. *
. * File Name     :   sintrnaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINTRNA1   IFILE    SQL, FIXED=85, KEY="U1-7"                                   
SINTRNA2   IFILE    SQL, FIXED=85, KEY="U8-8,1-7"                               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SITRPURC  DIM       7      7        1     Purchase Order                     
SITRSTAT  DIM       1      1        8     Status 0=Await 1=Progr 3=Comp 9=Can
SITRUSER  DIM       4      4        9     User ID for Transmission/Cancell'n 
SITRCREA  DIM       30     30       13    Cancellation Reason                
SITRORG   DIM       3      3        43    Transmission/Cancell'n Originator  
SITREDAT  DIM       8      8        46    Date Order Entered                 
SITRTDAT  DIM       8      8        54    Date Order Transmitted/Cancelled   
SITRTNUM  FORM      3      3        62    Transmission File Number           
SITRSPAR  DIM       20     20       65    Spare                              
.
.End of Record                      85   
.
