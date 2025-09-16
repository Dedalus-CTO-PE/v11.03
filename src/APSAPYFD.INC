. VF.01.001 12/04/2000 SB  Added Pay As You Go Indicator                     
. *----------------------------------------------------------------------
. * Include Name  :   APSAPYFD.INC
. *
. * Function      :   File Def'n Include for Accounts Payable
. *                   Automatic Payments
. *
. * File Type     :   SQL
. *
. * File Name     :   apsapyaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
APSAPYA1   IFILE   SQL, FIXED=174, KEY="U1-5,6-20,21-21,22-36,37-44,45-47,48-52"
APSAPYA2   IFILE   SQL, FIXED=174, KEY="U1-5,6-20,21-21,37-44,45-47,22-36,48-52"
APSAPYA3   IFILE   SQL, FIXED=174, KEY="U1-5,145-147,6-20,21-21,22-36,37-44,45-47,48-52"
APSAPYA4   IFILE   SQL, FIXED=174, KEY="U148-153,1-5,6-20,21-21,22-36,37-44,45-47,48-52"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
APAPCRD   DIM       5      5        1     Creditor                           
APAPREF   DIM       15     15       6     Invoice Reference                  
APAPTYP   DIM       1      1        21    Tran Type 0=inv,1=cr,2=py,3=cc,4=ri
APAPDOC   DIM       15     15       22    Document Reference                 
APAPORD   DIM       8      8        37    Order Number                       
APAPLIN   DIM       3      3        45    Line  Number                       
APAPBCH   DIM       5      5        48    Batch Number                       
APAPPAY   FORM      12.2   8        53    Amount to Pay                      
APAPGST   FORM      12.2   8        61    G.S.T. to Pay                      
APAPTPY   FORM      12.2   8        69    Total amount to pay after mods     
APAPCHQ   DIM       15     15       77    Cheque Account                     
APAPDAT   DIM       8      8        92    Extraction Date                    
APAPPYC   DIM       15     15       100   Payment Cheque Number              
APAPPYD   DIM       8      8        115   Payment Date                       
APAPPYB   DIM       5      5        123   Payments Batch Number              
APAPDOF   DIM       8      8        128   Department of Finance Batch Number 
APAPDUE   DIM       8      8        136   Payment Due                        
APAPPIN   DIM       1      1        144   Priority Indicator                 
APAPMDI   DIM       3      3        145   Mode of Distribution               
APAPSKY   DIM       6      6        148   Sort Key                           
APAPPOR   DIM       1      1        154   Print Order (1=Creditor 2=Sort Key)
APAPGMT   DIM       1      1        155   Payment Generation Method
APAPPAYG  DIM       1      1        156   Pay As You Go Indicator
APAPSPA   DIM       17     17       157   Spare Variable                     
.
.End of Record                      174  
.
