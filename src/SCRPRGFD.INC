. V6.00.005 10/10/1991 BGA Add Generation Flag                               
. V6.00.006 10/10/1991 BGA Remove Last Change                                
. *----------------------------------------------------------------------
. * Include Name  :   SCRPRGFD.INC
. *
. * Function      :   File Def'n Include for Common                      
. *                   Screen Program Master Table                
. *
. * File Type     :   SQL
. *
. * File Name     :   scrprgaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SCRPRGA1   IFILE    SQL, FIXED=129, KEY="U1-8"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SCPRPID   DIM       8      8        1     Program ID                         
SCPRNAM   DIM       40     40       9     IBA Program Name                   
SCPRNAT   DIM       40     40       49    Native Language Name               
SCPRCBF   DIM       8      8        89    Call Before                        
SCPRCAF   DIM       8      8        97    Call After                         
SCPRISC   DIM       2      2        105   Initial Screen                     
SCPRSPA   DIM       22     22       107   Spare                              
.
.End of Record                      129  
.
