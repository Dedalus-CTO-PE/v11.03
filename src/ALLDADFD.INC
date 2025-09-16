. V9.08.001 09/03/2007 JH  Created                                           
. *----------------------------------------------------------------------
. * Include Name  :   ALLDADFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Allied Health Referring Hospitals  
. *
. * File Type     :   SQL
. *
. * File Name     :   alldadaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLDADA1   IFILE    SQL, FIXED=69, KEY="U1-8"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALDAVISN  DIM       8      8        1     Referral/Visit Number              
ALDAFHOS  DIM       5      5        9     Referred From Hospital (patvadaf)  
ALDATHOS  DIM       5      5        14    Referred To Hospital (patvadaf)    
ALDASPAR  DIM       50     50       19    Spare                              
.
.End of Record                      69   
.
