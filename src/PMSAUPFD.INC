. V10.13.01 17/12/2018 EC - Added Action access type                         
. 5.09 .002 14/02/2001 EC                                                    
. *----------------------------------------------------------------------
. * Include Name  :   PMSAUPFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Problem List Audit Table           
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsaupaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSAUPA1   IFILE    SQL, FIXED=121, KEY="U1-8,9-13,24-31,32-36,14-23"           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMAPURNO  DIM       8      8        1     UR Number                          
PMAPPNUM  DIM       5      5        9     Problem Number                     
PMAPWUID  DIM       10     10       14    Web User ID                        
PMAPDATE  DIM       8      8        24    Date                               
PMAPTIME  DIM       5      5        32    Time                               
PMAPACTY  DIM       1      1        37    Access Type A=Add U=Update V=Veiwed
.                                         M=Action
PMAPACCD  DIM       3      3        38    Action Code                        
PMAPCOMM  DIM       40     40       41    Comment                            
PMAPSPAR  DIM       40     40       81    Spare                              
.
.End of Record                      121  
.
