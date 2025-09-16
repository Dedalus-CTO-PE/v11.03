. VF.01.001 01/04/2000 SB  Added GST Fields                                  
. *----------------------------------------------------------------------
. * Include Name  :   SINOQCFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Purchase Requisition History Table 
. *
. * File Type     :   SQL
. *
. * File Name     :   sinoqcaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINOQCA1   IFILE    SQL, FIXED=300, KEY="U1-5,6-13"                             
SINOQCA2   IFILE    SQL, FIXED=300, KEY="U213-220,1-5,6-13"                     
SINOQCA3   IFILE    SQL, FIXED=300, KEY="U206-212,229-233,66-95,1-5,6-13"       
SINOQCA4   IFILE    SQL, FIXED=300, KEY="U206-212,229-233,1-5,66-95,6-13"       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIQCCST   DIM       5      5        1     Cost Centre Code                   
SIQCRID   DIM       8      8        6     Purchase Requisition ID            
SIQCCAT   DIM       7      7        14    Catalog Code                       
SIQCUNT   DIM       15     15       21    Unit of Issue to Cost Centre       
SIQCPD    DIM       30     30       36    Part Description                   
SIQCPN    DIM       30     30       66    Part Number                        
SIQCQTY   FORM      12.2   8        96    Quantity Required                  
SIQCSTA   DIM       3      3        104   Status Code (Category PRC)         
SIQCUID   DIM       4      4        107   User ID                            
SIQCDAT   DIM       8      8        111   CCYYMMDD                           
SIQCTIM   DIM       5      5        119   Time HH:MM                         
SIQCPOR   DIM       2      2        124   Port                               
SIQCPDT   DIM       8      8        126   Processed Date CCYYMMDD            
SIQCPTM   DIM       5      5        134             Time HH:MM               
SIQCPID   DIM       4      4        139             User ID                  
SIQCPPO   DIM       2      2        143             Port                     
SIQCORI   DIM       3      3        145   Originator                         
SIQCPTY   FORM      1      2        148   0=Stock, 1=PO, 2=Can CC, 3=Can Supp
SIQCPQT   FORM      12.2   8        150   Quantity Processed                 
SIQCECT   FORM      12.4   9        158   Unit Cost or Expected Unit Cost    
SIQCGSTA  FORM      12.4   9        167   Expected GST                       
SIQCCAN   DIM       30     30       176   Reasn for Cancellation or Adustment
SIQCORD   DIM       7      7        206   Processed to Order Number          
SIQCREQ   DIM       8      8        213   Processed to Stock Requisition ID  
SIQCEDT   DIM       8      8        221   Expected Delivery Date CCYYMMDD    
SIQCSUP   DIM       5      5        229   Supplier Code                      
SIQCSUT   DIM       15     15       234   Supply Unit                        
SIQCPGP   DIM       5      5        249   Product Group (If not cataloged)   
SIQCGST   DIM       6      6        254   GST Code                           
SIQCCON   DIM       10     10       260   Supplier Contract                  
SIQCCDT   DIM       8      8        270   Supplier Contract Price Date       
SIQCSPA   DIM       22     22       278   Spare                              
.
.End of Record                      300  
.
