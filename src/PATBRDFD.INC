. V10.02.03 05/07/2011 PV C-240705 Added Title                                  
. V10.02.02 17/06/2011 PV C-240705 Added Index 4                                
. V10.02.01 08/06/2011 PV C-240705 Created FD and IO                            
. *----------------------------------------------------------------------
. * Include Name  :   PATBRDFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Boarder Details Table              
. *
. * File Type     :   SQL
. *
. * File Name     :   patbrdaf.dat
. *
. * Index Values  :   KEY10   KEY18   KEY26   KEY13                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATBRDA1   IFILE    SQL, FIXED=565, KEY="U1-10"                                 
PATBRDA2   IFILE    SQL, FIXED=565, KEY="U11-18,1-10"                           
PATBRDA3   IFILE    SQL, FIXED=565, KEY="U19-26,1-10,11-18"                     
PATBRDA4   IFILE    SQL, FIXED=565, KEY="U378-380,1-10"                         
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTBRBRDN  DIM       10     10       1     Unique Boarder Number              
PTBRURNO  DIM       8      8        11    Patient U/R No                     
PTBRVISN  DIM       8      8        19    Admission Number                   
PTBRCNTR  DIM       2      2        27    Count                              
PTBRLURN  DIM       8      8        29    Linked U/R No (existing Reg Pat)   
PTBRTITL  DIM       4      4        37    Title                              
PTBRSNAM  DIM       35     35       41    Surname                            
PTBRGNAM  DIM       35     35       76    Given Name                         
PTBRGEND  DIM       1      1        111   Gender                             
PTBRBDAT  DIM       8      8        112   Date of Birth                      
PTBRADR1  DIM       35     35       120   Address Line 1                     
PTBRADR2  DIM       35     35       155   Address Line 2                     
PTBRADR3  DIM       35     35       190   Address Line 3                     
PTBRADR4  DIM       35     35       225   Address Line 4                     
PTBRPOST  DIM       8      8        260   Postcode                           
PTBRHPHN  DIM       20     20       268   Home Phone                         
PTBRWPHN  DIM       20     20       288   Work Phone                         
PTBRMPHN  DIM       20     20       308   Mobile Phone                       
PTBREMAL  DIM       50     50       328   Email Address                      
PTBRHOSP  DIM       3      3        378   Hospital Code                      
PTBRSDAT  DIM       8      8        381   Boarder Start Date                 
PTBRSTIM  DIM       8      8        389   Boarder Start Time                 
PTBREDAT  DIM       8      8        397   Boarder End Date                   
PTBRETIM  DIM       8      8        405   Boarder End Time                   
PTBRCUSR  DIM       10     10       413   User who created record            
PTBRCDAT  DIM       8      8        423   Date record created                
PTBRCTIM  DIM       8      8        431   Time record created                
PTBRUUSR  DIM       10     10       439   User who updated record            
PTBRUDAT  DIM       8      8        449   Date record updated                
PTBRUTIM  DIM       8      8        457   Time record updated                
PTBRSPAR  DIM       100    100      465   Spare                              
.
.End of Record                      565  
.
