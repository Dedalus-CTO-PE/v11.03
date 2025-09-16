. V10.12.01 08/01/2018 EC C-0845295 Created FD                                  
. *----------------------------------------------------------------------
. * Include Name  :   COMERDFD.INC
. *
. * Function      :   File Def'n Include for Common                             
. *                   eReferral Pending Detail Table     
. *
. * File Type     :   SQL
. *
. * File Name     :   comerdaf.dat
. *
. * Index Values  :   KEY28                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
COMERDA1   IFILE    SQL, FIXED=855, KEY="U1-20,21-28"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CMRDUNIQ  DIM       20     20       1     Unique Id                          
CMRDPRID  DIM       8      8        21    Property ID                        
CMRDWBID  DIM       8      8        29    webPAS ID (cgi name)               
CMRDNVAL  FORM      14.4   10       37    Numeric Value                      
CMRDDVAL  DIM       8      8        47    Date Value                         
CMRDVALU  DIM       600    600      55    Value                              
CMRDSPAR  DIM       200    200      655   Spare                              
.
.End of Record                      855  
.
