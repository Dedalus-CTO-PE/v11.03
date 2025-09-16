. V10.02.01 31/03/2011 JP  Increased printer size  CAR 239574
. V9.02.001 13/06/2002 EC  Created FD                                           
. *----------------------------------------------------------------------
. * Include Name  :   WATLPCFD.INC
. *
. * Function      :   File Def'n Include for Waiting List                       
. *                   Waiting List Print File            
. *
. * File Type     :   SQL
. *
. * File Name     :   watlpcaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WATLPCA1   IFILE    SQL, FIXED=80, KEY="U1-5"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WTLPSCHE  DIM       5      5        1     Schedule Number                    
WTLPURNO  DIM       8      8        6     U/R Number                         
WTLPPCOD  DIM       9      9        14    Procedure Code                     
WTLPPCNT  DIM       2      2        23    Procedure Count                    
WTLPPRNT  DIM       6      6        25    Printer                            
WTLPCOPY  FORM      3      3        31    Number of Copies                   
WTLPLETT  DIM       3      3        34    Letter Number                      
WTLPWEBU  DIM       10     10       37    WEB User ID (websecaf)             
WTLPRDAT  DIM       8      8        47    Request Date (CCYYMMDD)            
WTLPRTIM  DIM       8      8        55    Request Time (HH:MM:SS)            
WTLPSPAR  DIM       17     17       63    Spare Variable                     
.
.End of Record                      80   
.
