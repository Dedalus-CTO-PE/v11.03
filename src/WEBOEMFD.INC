. V11.01.01 29/11/2021 PVL C-0914306 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBOEMFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices OECW-ECM Table         
. *
. * File Type     :   SQL
. *
. * File Name     :   weboemaf.dat
. *
. * Index Values  :   KEY11   KEY16   KEY35   KEY47   KEY19   KEY14          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBOEMA1   IFILE    SQL, FIXED=760, KEY="U1-8,9-11"
WEBOEMA2   IFILE    SQL, FIXED=760, KEY="U12-13,612-614,1-8,9-11"
WEBOEMA3   IFILE    SQL, FIXED=760, KEY="U42-65,1-8,9-11"
WEBOEMA4   IFILE    SQL, FIXED=760, KEY="U623-658,1-8,9-11"
WEBOEMA5   IFILE    SQL, FIXED=760, KEY="U615-622,1-8,9-11"
WEBOEMA6   IFILE    SQL, FIXED=760, KEY="U612-614,1-8,9-11"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBOEVISN  DIM       8      8        1     Visit Number                       
WBOECNTR  DIM       3      3        9     Report Counter (right just.)       
WBOESTAT  DIM       2      2        12    OECW Status Flag (right just.)     
.                                         0 = Waiting                          
.                                         1 = Extracted                        
.                                         2 = Received                         
.                                         3 = WebPAS Error                     
.                                         4 = WebServices Error                
.                                         5 = Rejected Reported                
.                                         6 = Complete Reported                
.                                         7 = Health Fund Unavailable          
WBOEURNO  DIM       8      8        14    U/R Number                         
WBOEARID  DIM       20     20       22    Account Reference ID               
WBOETRID  DIM       24     24       42    Transaction ID                     
WBOERQDT  DIM       8      8        66    Date of Request (ccyymmdd)         
WBOEETYP  DIM       2      2        74    Extraction Type                    
.                                         (Trigger source)                     
WBOEERRC  DIM       4      4        76    Error Code                         
WBOEERRD  DIM       500    500      80    Error Description                  
WBOECDTE  DIM       8      8        580   Date Created (ccyymmdd)            
WBOECTIM  DIM       8      8        588   Time Created (hh:mm:ss)            
WBOEUDTE  DIM       8      8        596   Date Updated (ccyymmdd)            
WBOEUTIM  DIM       8      8        604   Time Updated (hh:mm:ss)            
WBOEHOSP  DIM       3      3        612   Hospital Id                        
WBOEELEG  DIM       8      8        615   Eligibility Number                 
WBOEMSID  DIM       36     36       623   Message Id                         
WBOESPAR  DIM       101    101      659   Spare Variable                     
.
.End of Record                      760  
.
