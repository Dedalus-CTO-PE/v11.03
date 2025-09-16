. V9.04.001 15/04/2005 PV  CAR 59696 Changed FCO and TCO from DIM5 to DIM6   
. V9.02.001 20/03/2003 DS  Added Multiple Delivery Point Code
. *----------------------------------------------------------------------
. * Include Name  :   SINSOMFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Suggested Order Masterfile         
. *
. * File Type     :   SQL
. *
. * File Name     :   sinsomaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINSOMA1   IFILE    SQL, FIXED=143, KEY="U1-3"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIOMSID   DIM       3      3        1     Suggested Order ID                 
SIOMDES   DIM       40     40       4     Description                        
SIOMORG   DIM       3      3        44    Originator Code                    
SIOMDEL   DIM       1      1        47    Delivery Point                     
SIOMMES   DIM       3      3        48    Message Code                       
SIOMPER   FORM      3.2    4        51    Within Percentage                  
SIOMWAR   DIM       5      5        55    Warehouse Code                     
SIOMINC   FORM      1      2        60    Include                            
SIOMFCO   DIM       6      6        62    From Commodity                     
SIOMTCO   DIM       6      6        68    To Commodity                       
SIOMFPG   DIM       5      5        74    From Product Group                 
SIOMTPG   DIM       5      5        79    To Product Group                   
SIOMFSU   DIM       5      5        84    From Supplier                      
SIOMTSU   DIM       5      5        89    To Supplier                        
SIOMUID   DIM       4      4        94    User ID                            
SIOMPOR   DIM       2      2        98    Port                               
SIOMTIM   DIM       8      8        100   Time                               
SIOMDAT   DIM       8      8        108   Date                               
SIOMSOQ   DIM       1      1        116   Suggested Quantity Calculation     
SIOMFIA   DIM       3      3        117   From SIIAUC1                       
SIOMTIA   DIM       3      3        120   To   SIIAUC1                       
SIOMMDP   DIM       3      3        123   Multiple Delivery Point Code       
SIOMSPA   DIM       17     17       126   Spare                              
.
.End of Record                      143  
.
