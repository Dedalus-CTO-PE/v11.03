. V10.08.01 28/04/2016 JP C-0817063 Created                                     
. *----------------------------------------------------------------------
. * Include Name  :   MEHPCSFD.INC
. *
. * Function      :   File Def'n Include for Mental Health                      
. *                   MH PRIMHD Transmission SC Record   
. *
. * File Type     :   SQL
. *
. * File Name     :   mehpcsaf.dat
. *
. * Index Values  :   KEY30                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MEHPCSA1   IFILE    SQL, FIXED=122, KEY="U1-8,9-11,12-19,20-27,28-30"           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MHPCXDAT  DIM       8      8        1     Extract Date                       
MHPCXNUM  DIM       3      3        9     Extract No. for this Date          
MHPCVISN  DIM       8      8        12    Referral Id./Visit No.             
MHPCURNO  DIM       8      8        20    UR No. Event HCU Id.               
MHPCOCUR  DIM       3      3        28    Multi Occurrence with RD Record     
MHPCERID  DIM       9      9        31    Error/Warning Ref Code             
MHPCUNIQ  DIM       20     20       40    Unique Number                      
MHPCCOLD  DIM       8      8        60    Collection Date                    
MHPCWELP  DIM       1      1        68    Wellness Plan                      
MHPCACCM  DIM       1      1        69    Accommodation                      
MHPCEMPS  DIM       1      1        70    Employment Status                  
MHPCEDUC  DIM       1      1        71    Education Status                   
MHPCSPAR  DIM       50     50       72    Spare                              
.
.End of Record                      122  
.
