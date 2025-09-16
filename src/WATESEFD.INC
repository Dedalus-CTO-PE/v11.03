. V11.03.01 22/03/2023 EC C-0928366 Added WTEETCMP                              
. V11.00.01 24/03/2020 TTI C-0888687 Added Referral Accepted Date               
. V10.14.01 01/04/2019 JP C-0868835 Added surgeon id                            
. V10.08.01 07/04/2016 JP C-0813956 Added Previous Total Waiting Time for Trans 
. V10.06.01 23/07/2015 SA C-N/A Updated category source for WTEESREF            
. V9.04.001 07/06/2005 JH  Added WTEEARDT                                       
. V9.04.002 07/06/2005                                                          
. V9.04.003 29/11/2005 EC  Added WTEEMANU - CAR 86062                           
. *----------------------------------------------------------------------
. * Include Name  :   WATESEFD.INC
. *
. * Function      :   File Def'n Include for Waiting List                       
. *                   Waiting List ESIS Episode table    
. *
. * File Type     :   SQL
. *
. * File Name     :   wateseaf.dat
. *
. * Index Values  :   KEY17   KEY17                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WATESEA1   IFILE    SQL, FIXED=243, KEY="U1-9,10-17"
WATESEA2   IFILE    SQL, FIXED=243, KEY="U10-17,1-9"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WTEEUNIQ  DIM       9      9        1     Unique Key                         
WTEEEDAT  DIM       8      8        10    Extract sent date (CCYYMMDD)       
WTEEURNO  DIM       8      8        18    UR Number                          
WTEEADAT  DIM       8      8        26    Admission Date (CCYYMMDD)          
WTEEDEST  DIM       4      4        34    Destination                        
WTEEINSD  DIM       3      3        38    Insurance Declaration (Cat CL)     
WTEEPLOS  DIM       3      3        41    Cat XB or WMSTAY                   
WTEEPROC  DIM       9      9        44    Principal Procedure                
WTEEPDES  DIM       50     50       53    PPP Description                    
WTEERREM  DIM       3      3        103   Reason for removal (Cat WR)        
WTEERDAT  DIM       8      8        106   Registration Date                  
WTEEREMD  DIM       8      8        114   Removal Date                       
WTEESREF  DIM       3      3        122   Source of Referral                 
.                                         Category dependent on value of       
.                                         parameter WTCNBRSR                   
.                                         0 = Cat S                            
.                                         1 = Cat W1                           
.                                         2 = Cat W2                           
.                                         3 = Cat W3                           
.                                         4 = Cat W4                           
.                                         5 = Cat X5                           
.                                         6 = Cat X6                           
.                                         7 = Cat X7                           
.                                         8 = Cat X8                           
WTEESSPC  DIM       3      3        125   Surgical Specialty (Cat WU)        
WTEEPREV  DIM       9      9        128   Previous Identifier                
WTEEREFR  DIM       4      4        137   Referred From                      
WTEEWEBC  DIM       10     10       141   Web User ID Creator                
WTEECDAT  DIM       8      8        151   Date record created                
WTEECTIM  DIM       8      8        159   Time record created                
WTEEWEBU  DIM       10     10       167   Web User ID Updated                
WTEEUDAT  DIM       8      8        177   Date Updated (CCYYMMDD)            
WTEEUTIM  DIM       8      8        185   Time Update (hh:mm:ss)             
WTEEARDT  DIM       8      8        193   Date Keyed                         
WTEEMANU  DIM       1      1        201   Manually Added Record              
WTEEPTWT  DIM       4      4        202   Previous Total Waiting Time (days) 
WTEESGID  DIM       10     10       206   Surgeon Identifier (pmshcpaf)      
WTEERADT  DIM       8      8        216   Referral Accepted Date             
WTEETCMP  DIM       6      6        224   Treatment Campus Code              
WTEESPAR  DIM       13     13       230   Spare                              
.
.End of Record                      243  
.
