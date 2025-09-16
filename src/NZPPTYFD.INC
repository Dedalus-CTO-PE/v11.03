. V9.08.001 02/01/2007 EC  Created FD CAR 126779                             
. *----------------------------------------------------------------------
. * Include Name  :   NZPPTYFD.INC
. *
. * Function      :   File Def'n Include for New Zealand Private                
. *                   Related Provider Type              
. *
. * File Type     :   SQL
. *
. * File Name     :   nzpptyaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
NZPPTYA1   IFILE    SQL, FIXED=160, KEY="U1-3"                                  
NZPPTYA2   IFILE    SQL, FIXED=160, KEY="U4-33,1-3"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
NZPTPTYP  DIM       3      3        1     Related Provider Type              
NZPTDESC  DIM       30     30       4     Description                        
NZPTPIND  DIM       1      1        34    Related Provider Indicator         
.                                         (S)urgeon, (A)naesthetist
NZPTCOST  DIM       3      3        35    Cost Centre                        
NZPTACOD  DIM       5      5        38    Account Code                       
NZPTSCOD  DIM       3      3        43    Sub Account Code                   
NZPTGSTC  DIM       3      3        46    GST Cost Centre                    
NZPTGSTA  DIM       5      5        49    GST Account Code                   
NZPTGSTS  DIM       3      3        54    GST Sub Account Code               
NZPTACTV  DIM       1      1        57    Active/Inactive 0=Active 1=Inactive
NZPTCDAT  DIM       8      8        58    Date Created (CCYYMMDD)            
NZPTCTIM  DIM       8      8        66    Created Time (HH:MM:SS)            
NZPTCUID  DIM       10     10       74    Web User Id Created (websecaf)     
NZPTUDAT  DIM       8      8        84    Date Updated (CCYYMMDD)            
NZPTUTIM  DIM       8      8        92    Time Updated (HH:MM:SS)            
NZPTUUID  DIM       10     10       100   Web User Id Updated (websecaf)     
NZPTSPAR  DIM       50     50       110   Spare                              
.
.End of Record                      160  
.
