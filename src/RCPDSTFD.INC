. V10.10.01 27/09/2017 JT C-0843232 Create a new file for Deposit status        
. *----------------------------------------------------------------------
. * Include Name  :   RCPDSTFD.INC
. *
. * Function      :   File Def'n Include for Receipting                         
. *                   Deposit Status table               
. *
. * File Type     :   SQL
. *
. * File Name     :   rcpdstaf.dat
. *
. * Index Values  :   KEY20   KEY28   KEY21                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
RCPDSTA1   IFILE    SQL, FIXED=190, KEY="U1-20"
RCPDSTA2   IFILE    SQL, FIXED=190, KEY="U29-36,1-20"
RCPDSTA3   IFILE    SQL, FIXED=190, KEY="U55-55,1-20"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
RCDSUNIQ  DIM       20     20       1     Unique ID for Inbound Text file    
RCDSURNO  DIM       8      8        21    U/R Number                         
RCDSVISN  DIM       8      8        29    Visit Number                       
RCDSSFID  DIM       18     18       37    SalesForce ID                      
RCDSDSTA  DIM       1      1        55    Deposit Status                     
.                                         1=Processing                         
.                                         2=Error-Validation                   
.                                         3=Error-Upload                       
.                                         4=Processed                          
RCDSDAMN  FORM      12.2   8        56    Deposit Amount                     
RCDSUDAT  DIM       8      8        64    Date Record Uploaded               
RCDSUTIM  DIM       8      8        72    Time Record Uploaded               
RCDSUWID  DIM       10     10       80    Web User ID of Upload (websecaf)   
RCDSSPAR  DIM       100    100      90    Spare Variable                     
.
.End of Record                      190  
.
