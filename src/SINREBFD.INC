. V6.00.002 22/07/1992 Nez Added 2nd Key                                     
. V6.00.003 20/08/1992 Nez Added transfer batch field (SIRBBCH) and key 3    
. V9.03.001 27/02/2004 SB  Added Index 4 CAR 9375                            
. *----------------------------------------------------------------------
. * Include Name  :   SINREBFD.INC
. *
. * Function      :   File Def'n Include for Supply and Inventory               
. *                   Requisition Details Table           
. *
. * File Type     :   SQL
. *
. * File Name     :   sinrebaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SINREBA1   IFILE    SQL, FIXED=83, KEY="U1-1,2-8,9-13,14-20"                    
SINREBA2   IFILE    SQL, FIXED=83, KEY="U14-20,1-1,2-8,9-13"                    
SINREBA3   IFILE    SQL, FIXED=83, KEY="U53-57,58-59,60-71,1-1,2-8,9-13,14-20"  
SINREBA4   IFILE    SQL, FIXED=83, KEY="U45-52,1-1,2-8,9-13,14-20"              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SIRBTYP   DIM       1      1        1     Type                               
SIRBREQ   DIM       7      7        2     Requisition                        
SIRBWAR   DIM       5      5        9     Warehouse                          
SIRBCAT   DIM       7      7        14    Catalog                            
SIRBRQT   FORM      12.2   8        21    Required Quantity (I)              
SIRBIQT   FORM      12.2   8        29    Issued Quantity (I)                
SIRBAMT   FORM      12.2   8        37    Total Cost                         
SIRBDAT   DIM       8      8        45    Receipt Date                       
SIRBBCH   DIM       5      5        53    Transfer Batch                     
SIRBLED   DIM       2      2        58    Transfer Ledger                    
SIRBACC   DIM       12     12       60    Transfer Account                   
SIRBSPA   DIM       11     11       72    Spare                              
.
.End of Record                      83   
.
