. V10.08.01 14/04/2016 JP C-0279181 Created                                     
. *----------------------------------------------------------------------
. * Include Name  :   AUDPATFD.INC
. *
. * Function      :   File Def'n Include for Audit Tables                       
. *                   Patient Audit Table                
. *
. * File Type     :   SQL
. *
. * File Name     :   audpataf.dat
. *
. * Index Values  :   KEY20   KEY44   KEY44   KEY100  KEY44                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
AUDPATA1   IFILE    SQL, FIXED=895, KEY="U1-20"                                 
AUDPATA2   IFILE    SQL, FIXED=895, KEY="U21-28,37-44,45-52,1-20"               
AUDPATA3   IFILE    SQL, FIXED=895, KEY="U29-36,37-44,45-52,1-20"               
AUDPATA4   IFILE    SQL, FIXED=895, KEY="U193-256,37-44,45-52,1-20"             
AUDPATA5   IFILE    SQL, FIXED=895, KEY="U267-274,37-44,45-52,1-20"             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
AUPAUNQ   DIM       20     20       1     Unique Reference                   
AUPAURN   DIM       8      8        21    UR Number                          
AUPAVIS   DIM       8      8        29    Visit Number                       
AUPADAT   DIM       8      8        37    Date CCYYMMDD                      
AUPATIM   DIM       8      8        45    Time hh:mm:ss                      
AUPAOSU   DIM       30     30       53    Operating System User              
AUPADBU   DIM       30     30       83    Database User                      
AUPAMOD   DIM       48     48       113   Application Module                 
AUPAACT   DIM       32     32       161   Application Action                 
AUPACLI   DIM       64     64       193   Application Client Info            
AUPAUID   DIM       10     10       257   Web User ID                        
AUPAPRG   DIM       8      8        267   Program ID                         
AUPAVER   DIM       10     10       275   Version                            
AUPADES   DIM       50     50       285   Description                        
AUPAOLD   DIM       255    255      335   Old Value                          
AUPANEW   DIM       255    255      590   New Value                          
AUPASPA   DIM       50     50       845   Spare                              
.
.End of Record                      895  
.
