. V9.11.002 17/03/2009 ML  Change Unique No. to Dim 3 (was Dim 2)            
. V9.11.001 08/01/2009 ML  Updated to V9.10 specs                               
. *----------------------------------------------------------------------
. * Include Name  :   MEHPCOFD.INC
. *
. * Function      :   File Def'n Include for Mental Health                      
. *                   PRIMHD Transmission CO Record      
. *
. * File Type     :   SQL
. *
. * File Name     :   mehpcoaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MEHPCOA1   IFILE    SQL, FIXED=120, KEY="U1-8,9-11,12-19,20-27,28-30"           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MHPOXDAT  DIM       8      8        1     Extract Date                       
MHPOXNUM  DIM       3      3        9     Extract No. for this Date          
MHPOVISN  DIM       8      8        12    Referral Id./Visit No.             
MHPOURNO  DIM       8      8        20    UR No./Event HCU Id.               
MHPOOCUR  DIM       3      3        28    Multi Occurrence within RD Record   
MHPOERID  DIM       9      9        31    Error/Warning Ref Code             
.                                         * ---- start of CO Record ----
MHPOCCOD  DIM       20     20       40    Collection Occasion Id             
MHPORCOL  DIM       4      4        60    Reason for Collection              
MHPOCDAT  DIM       19     19       64    Collection Occasion Date           
MHPOWCPN  DIM       6      6        83    Healthcare Worker CPN              
MHPOOESP  DIM       9      9        89    Outcome Episode Id                 
MHPOPVER  DIM       4      4        98    Protocol Version                   
MHPOFCAR  DIM       4      4        102   Focus of Care                      
MHPOSPAR  DIM       14     14       106   Spare                              
.
.End of Record                      120  
.
