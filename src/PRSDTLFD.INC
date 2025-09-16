. V9.05.002 09/04/2006 JH  Added hospital code                               
. V9.05.003 09/04/2006 JH                                                    
. V9.05.004 09/04/2006                                                       
. *----------------------------------------------------------------------
. * Include Name  :   PRSDTLFD.INC
. *
. * Function      :   File Def'n Include for PRS2 System                        
. *                   PRS2 Admission Details             
. *
. * File Type     :   SQL
. *
. * File Name     :   prsdtlaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PRSDTLA1   IFILE    SQL, FIXED=79, KEY="U1-10,11-18"                            
PRSDTLA2   IFILE    SQL, FIXED=79, KEY="U11-18,1-10"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
P2DTURUN  DIM       10     10       1     Unique Run Number                  
P2DTADMN  DIM       8      8        11    Admission Number                   
P2DTEPSS  DIM       1      1        19    PRS2 Episode Sent (0=No,1=Yes)     
P2DTCODS  DIM       1      1        20    PRS2 Coding Sent (0=No,1=Yes)      
P2DTEPSD  DIM       8      8        21    PRS2 Episode Sent Date             
P2DTCODD  DIM       8      8        29    PRS2 Coding Sent Date              
P2DTHOSP  DIM       3      3        37    Hospital code (pathspaf)           
P2DTSPAR  DIM       39     39       40    Spare Variable                     
.
.End of Record                      79   
.
