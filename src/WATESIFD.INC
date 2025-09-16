. v9.00.001 22/11/2001 bga New Table                                         
. *----------------------------------------------------------------------
. * Include Name  :   WATESIFD.INC
. *
. * Function      :   File Def'n Include for Waiting List                       
. *                   ESIS Extract History               
. *
. * File Type     :   SQL
. *
. * File Name     :   watesiaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WATESIA1   IFILE    SQL, FIXED=230, KEY="U1-8,9-16"                             
WATESIA2   IFILE    SQL, FIXED=230, KEY="U9-16,1-8"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WTEIUNIQ  DIM       8      8        1     Unique key                         
WTEIDATE  DIM       8      8        9     Date of Extract                    
WTEIURNO  DIM       10     10       17    U/R no                             
WTEIMEDC  DIM       11     11       27    Medicare number                    
WTEIMEDS  DIM       3      3        38    Medicare suffix                    
WTEIWTNO  DIM       2      2        41    W/L counter                        
WTEIDOB   DIM       8      8        43    DOB (ddmmccyy)                     
WTEISEX   DIM       1      1        51    Sex                                
WTEIPSTC  DIM       4      4        52    Postcode                           
WTEILOCA  DIM       30     30       56    Locality                           
WTEIPROC  DIM       3      3        86    Procedure code indicator           
WTEISRGS  DIM       2      2        89    Surgical speciality                
WTEICLCT  DIM       1      1        91    Clinical urgency category          
WTEIILOS  DIM       1      1        92    Intended LOS                       
WTEIDTRG  DIM       8      8        93    Date of registration (ddmmccyy)    
WTEISRCR  DIM       1      1        101   Source referral                    
WTEIREFH  DIM       4      4        102   Referring hospital                 
WTEICLDT  DIM       8      8        106   Clinical urgency cat last date (ddm
WTEIDTIN  DIM       8      8        114   Date of Last Clinical Urgency Incre
WTEICLCD  DIM       1      1        122   Clinical urgency category last code
WTEILTST  DIM       1      1        123   Patient listing status             
WTEIPSDT  DIM       8      8        124   Patient listing status last date (d
WTEIRFCS  DIM       1      1        132   Reason for NRFC Status             
WTEIBKDT  DIM       8      8        133   Booking date (ddmmccyy)            
WTEIBKNO  DIM       2      2        141   Booking U/R no count               
WTEIREBK  DIM       1      1        143   Reason for rebooking               
WTEISCDT  DIM       8      8        144   Date scheduled for admin (ddmmccyy)
WTEIDTRM  DIM       8      8        152   Date of removal (ddmmccyy)         
WTEIRREM  DIM       1      1        160   Reason for removal                 
WTEIINSD  DIM       1      1        161   Insurance declaration              
WTEITRND  DIM       4      4        162   Transfer Destination               
WTEINRFC  DIM       4      4        166   Total not ready for care days      
WTEINRRE  DIM       4      4        170   Total not ready for care days since
WTEINRLC  DIM       4      4        174   Total NRFC days following Last Clin
WTEIHOSP  DIM       2      2        178   Hospital initiated postponement    
WTEISPAR  DIM       50     50       180   Spare                              
.
.End of Record                      230  
.
