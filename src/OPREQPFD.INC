. V11.03.01 20/01/2023 TTI C-0919770 New Hospital Field Added                   
. V10.04.01 05/01/2014 AP C-267230 Added Active Variable                        
. V9.04.000 10/03/2005 LV  Created New                                          
. *----------------------------------------------------------------------
. * Include Name  :   OPREQPFD.INC
. *
. * Function      :   File Def'n Include for Theatre System                     
. *                   Equipment Table                    
. *
. * File Type     :   SQL
. *
. * File Name     :   opreqpaf.dat
. *
. * Index Values  :   KEY18   KEY68   KEY29   KEY26                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OPREQPA1   IFILE    SQL, FIXED=491, KEY="U1-15,442-444"
OPREQPA2   IFILE    SQL, FIXED=491, KEY="U16-65,1-15,442-444"
OPREQPA3   IFILE    SQL, FIXED=491, KEY="U69-78,79-79,1-15,442-444"
OPREQPA4   IFILE    SQL, FIXED=491, KEY="U134-141,1-15,442-444"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPEQCODE  DIM       15     15       1     Equipment Code                     
OPEQDESC  DIM       50     50       16    Equipment Description              
OPEQTYPE  DIM       3      3        66    Equipment type (Cat OE)            
OPEQUNIQ  DIM       10     10       69    Theatre Unique Id                  
OPEQTEAM  DIM       1      1        79    Theatre Team Number                
OPEQSTAT  DIM       3      3        80    Current Status (Cat ER)            
OPEQDTSC  DIM       8      8        83    Date Status Changed (CCYYMMDD)     
OPEQUSLO  DIM       15     15       91    Usual Location/Tray                
OPEQCULO  DIM       15     15       106   Current Location/Tray              
OPEQDE1U  DIM       8      8        121   Date Equipment 1st Used (CCYYMMDD) 
OPEQMNOU  DIM       5      5        129   Maximum Number of Uses             
OPEQEEDT  DIM       8      8        134   Equipment Expiry Date (CCYYMMDD)   
OPEQNOUR  DIM       5      5        142   Number of Uses Remaining           
OPEQLSDT  DIM       8      8        147   Last Sterilisation Date (CCYYMMDD) 
OPEQULST  DIM       5      5        155   Total Num of Uses Since Last Steril
OPEQLMDT  DIM       8      8        160   Last Maintenance Date (CCYYMMDD)   
OPEQULMT  DIM       5      5        168   Total Num of Uses Since Last Maintd
OPEQSRNO  DIM       15     15       173   Equipment Serial Number            
OPEQSPNO  DIM       15     15       188   Supplier Catalog Number            
OPEQSPDT  DIM       50     50       203   Supplier Details                   
OPEQNOTE  DIM       50     50       253   Notes                              
OPEQUDT1  DIM       50     50       303   User Defined Text 1                
OPEQUDT2  DIM       50     50       353   User Defined Text 2                
OPEQUDF1  DIM       3      3        403   User Defined Cat 1 (Cat o6)        
OPEQUDF2  DIM       3      3        406   User Defined Cat 2 (Cat o7         
OPEQDTE1  DIM       8      8        409   User Defined Date 1 (CCYYMMDD)     
OPEQDTE2  DIM       8      8        417   User Defined Date 2 (CCYYMMDD)     
OPEQTME1  DIM       8      8        425   User Defined Time 1 (HH:MM:SS)     
OPEQTME2  DIM       8      8        433   User Defined Time 2 (HH:MM:SS)     
OPEQACTV  DIM       1      1        441   Inactive? (Y=1, N=0)               
OPEQHOSP  DIM       3      3        442   Hospital ID (pathspaf)             
OPEQSPAR  DIM       46     46       445   Spare Variable                     
.
.End of Record                      491  
.
