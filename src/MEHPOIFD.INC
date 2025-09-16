. V9.11.002 17/03/2009 ML  Change all 3 Unique Nos. to Dim 3 (was Dim 2)     
. V9.11.001 08/01/2009 ML  Updated to V9.10 requirement                         
. V9.10.001 19/09/2008 ML  New Table                                            
. *----------------------------------------------------------------------
. * Include Name  :   MEHPOIFD.INC
. *
. * Function      :   File Def'n Include for Mental Health                      
. *                   PRIMHD Transmission OT & OI Records
. *
. * File Type     :   SQL
. *
. * File Name     :   mehpoiaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MEHPOIA1  IFILE  SQL, FIXED=100, KEY="U1-8,9-11,12-19,20-27,28-30,31-33,34-36"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MHPIXDAT  DIM       8      8        1     Extract Date                       
MHPIXNUM  DIM       3      3        9     Extract No. for this Date          
MHPIVISN  DIM       8      8        12    Referral Id./Visit No.             
MHPIURNO  DIM       8      8        20    UR No./Event HCU Id.               
.                                         *                             
MHPIOCUR  DIM       3      3        28    Multi Occurrence of CO within RD    
MHPIOCOT  DIM       3      3        31    Multi Occurrence of OT in CO        
MHPIOCOI  DIM       3      3        34    Multi Occurrence of OI in CO        
MHPIERID  DIM       9      9        37    Error/Warning Ref Id               
.                                         * -- Start of OT/OI Revords --
MHPIOITM  DIM       3      3        46    Outcome Item Code         (OT & OI)
MHPITYPE  DIM       2      2        49    Outcome Tool Type Version (OT & OI)
MHPIMADM  DIM       4      4        51    Mode of Administration             
MHPICSTA  DIM       4      4        55    Collection Status                  
MHPICDAT  DIM       19     19       59    Completeion Date                   
MHPIIVAL  DIM       1      1        78    Outcome Item Value                 
MHPISPAR  DIM       21     21       79    Spare                              
.
.End of Record                      100  
.
