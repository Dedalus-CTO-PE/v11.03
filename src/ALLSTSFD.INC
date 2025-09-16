. V9.00.001 20/05/2001 SB  Created FD                                        
. V9.05.B01 14/12/2005 Added rejected status CAR 76341                       
. *----------------------------------------------------------------------
. * Include Name  :   ALLSTSFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Referral Status History Table      
. *
. * File Type     :   SQL
. *
. * File Name     :   allstsaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLSTSA1   IFILE    SQL, FIXED=110, KEY="U1-8,9-9,10-17"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALSTVISN  DIM       8      8        1     Referral/Visit Number              
ALSTSTAT  DIM       1      1        9     Status                             
.                                            0 = On Waiting List                
.                                            1 = Open
.                                            2 = Closed
.                                            3 = Inactive
.                                            4 = Cancelled
.                                            5 = Rejected 
ALSTSDAT  DIM       8      8        10    Date Status is Effective (CCYYMMDD)
ALSTCDAT  DIM       8      8        18    Date Record Created (CCYYMMDD)     
ALSTCTIM  DIM       8      8        26    Time Record Created (HH:MM:SS)     
ALSTCUID  DIM       10     10       34    WEB User ID Created (websecaf)     
ALSTUDAT  DIM       8      8        44    Date Record Updated (CCYYMMDD)     
ALSTUTIM  DIM       8      8        52    Time Record Updated (HH:MM:SS)     
ALSTUUID  DIM       10     10       60    WEB User ID Updated (websecaf)     
ALSTSPAR  DIM       40     40       70    Spare Variable                     
.
.End of Record                      110  
.
