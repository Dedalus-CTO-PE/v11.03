. V11.00.01 24/08/2020 PVL C-0895969 Changed spare length                       
. V11.00.01 20/08/2020 PVL C-0895969 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBOECFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices OECW Table             
. *
. * File Type     :   SQL
. *
. * File Name     :   weboecaf.dat
. *
. * Index Values  :   KEY11   KEY16   KEY35   KEY47   KEY19   KEY14          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBOECA1   IFILE    SQL, FIXED=760, KEY="U1-8,9-11"
WEBOECA2   IFILE    SQL, FIXED=760, KEY="U12-13,612-614,1-8,9-11"
WEBOECA3   IFILE    SQL, FIXED=760, KEY="U42-65,1-8,9-11"
WEBOECA4   IFILE    SQL, FIXED=760, KEY="U623-658,1-8,9-11"
WEBOECA5   IFILE    SQL, FIXED=760, KEY="U615-622,1-8,9-11"
WEBOECA6   IFILE    SQL, FIXED=760, KEY="U612-614,1-8,9-11"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBOCVISN  DIM       8      8        1     Visit Number                       
WBOCCNTR  DIM       3      3        9     Report Counter (right just.)       
WBOCSTAT  DIM       2      2        12    OECW Status Flag (right just.)     
.                                         0 = Waiting                          
.                                         1 = Extracted                        
.                                         2 = Received                         
.                                         3 = WebPAS Error                     
.                                         4 = WebServices Error                
.                                         5 = Rejected Reported                
.                                         6 = Complete Reported                
.                                         7 = Health Fund Unavailable          
WBOCURNO  DIM       8      8        14    U/R Number                         
WBOCARID  DIM       20     20       22    Account Reference ID               
WBOCTRID  DIM       24     24       42    Transaction ID                     
WBOCRQDT  DIM       8      8        66    Date of Request (ccyymmdd)         
WBOCETYP  DIM       2      2        74    Extraction Type                    
.                                         (Trigger source)                     
WBOCERRC  DIM       4      4        76    Error Code                         
WBOCERRD  DIM       500    500      80    Error Description                  
WBOCCDTE  DIM       8      8        580   Date Created (ccyymmdd)            
WBOCCTIM  DIM       8      8        588   Time Created (hh:mm:ss)            
WBOCUDTE  DIM       8      8        596   Date Updated (ccyymmdd)            
WBOCUTIM  DIM       8      8        604   Time Updated (hh:mm:ss)            
WBOCHOSP  DIM       3      3        612   Hospital Id                        
WBOCELEG  DIM       8      8        615   Eligibility Number                 
WBOCMSID  DIM       36     36       623   Message Id                         
WBOCSPAR  DIM       101    101      659   Spare Variable                     
.
.End of Record                      760  
.
