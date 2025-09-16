. VF.09.001 23/11/2000 SB  Copied from sthccc                                
. *----------------------------------------------------------------------
. * Include Name  :   CCSUPDFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing
. *                   Patient Service Usage Table        
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsupdaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSUPDA1   IFILE    SQL, FIXED=113, KEY="U1-4,5-12"                             
CCSUPDA2   IFILE    SQL, FIXED=113, KEY="D13-14,31-46,57-64,65-69"              
CCSUPDA3   IFILE    SQL, FIXED=113, KEY="D13-14,15-22,23-30,57-64,65-69"        
CCSUPDA4   IFILE    SQL, FIXED=113, KEY="D47-56,57-64,65-69"                    
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCUPRUN   DIM       4      4        1     Run Number                         
CCUPREC   DIM       8      8        5     Record Number                      
CCUPHCD   DIM       2      2        13    Hospital                           
CCUPDPT   DIM       8      8        15    Department                         
CCUPPCD   DIM       8      8        23    Patient Service                    
CCUPENC   DIM       16     16       31    Episode                            
CCUPURN   DIM       10     10       47    U/R Number/Code                    
CCUPDAT   DIM       8      8        57    Date CCYYMMDD                      
CCUPTIM   DIM       5      5        65    Time HH:MM                         
CCUPQTY   FORM      6.2    5        70    Quantity                           
CCUPCHG   FORM      12.2   8        75    Charge                             
CCUPCL1   DIM       4      4        83    Class 1 (Patient Category NZ)      
CCUPCL2   DIM       4      4        87    Class 2 (Clinical Dept    NZ)      
CCUPCL3   DIM       4      4        91    Class 3 (Service Code     NZ)      
CCUPCL4   DIM       4      4        95    Class 4                            
CCUPCL5   DIM       4      4        99    Class 5                            
CCUPSPA   DIM       10     10       103                                      
.
.End of Record                      113  
.
