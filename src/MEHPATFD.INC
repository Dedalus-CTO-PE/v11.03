. V11.01.01 30/03/2021 TN C-0904417 Added MHPTFAMW from spare variable          
. V10.03.01 10/04/2012 ML C-261603 Change MHPTOCUR from DIM 3 to DIM 5          
. V9.11.002 17/03/2009 ML  Change Unique No. to Dim 3 (was Dim 2)               
. V9.11.001 07/01/2009 ML  Ported from V9.10                                    
. *----------------------------------------------------------------------
. * Include Name  :   MEHPATFD.INC
. *
. * Function      :   File Def'n Include for Mental Health                      
. *                   PRIMHD Transmission AT Record      
. *
. * File Type     :   SQL
. *
. * File Name     :   mehpataf.dat
. *
. * Index Values  :   KEY32                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MEHPATA1   IFILE    SQL, FIXED=110, KEY="U1-8,9-11,12-19,20-27,28-32"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MHPTXDAT  DIM       8      8        1     Extract Date                       
MHPTXNUM  DIM       3      3        9     Extract No. by Date                
MHPTVISN  DIM       8      8        12    Referral Id./Visit No.             
MHPTURNO  DIM       8      8        20    UR No./Event HCU Id.               
MHPTOCUR  DIM       5      5        28    Multi Occurrence within RD Record   
MHPTERID  DIM       9      9        33    Error/Warning Reference Code       
MHPTACID  DIM       3      3        42    Activity Id.                       
MHPTATYP  DIM       3      3        45    Activity Type                      
MHPTASET  DIM       2      2        48    Activity Setting                   
MHPTWCPN  DIM       6      6        50    Healthcare Worker CPN              
MHPTSDAT  DIM       19     19       56    Start Date Time                    
MHPTEDAT  DIM       19     19       75    End Date Time                      
MHPTFAMW  DIM       1      1        94    Family/Whanau Involvement          
.                                         1=Yes 2=No                           
MHPTSPAR  DIM       15     15       95    Spare Variable                     
.
.End of Record                      110  
.
