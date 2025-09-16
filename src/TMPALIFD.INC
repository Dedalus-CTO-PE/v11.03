. V5.02.001 03/10/1994                                                       
. *----------------------------------------------------------------------
. * Include Name  :   TMPALIFD.INC
. *
. * Function      :   File Def'n Include for Temporary Code for Temp Files      
. *                   Temporary Alias Details            
. *
. * File Type     :   SQL
. *
. * File Name     :   tmpaliaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
TMPALIA1   IFILE    SQL, FIXED=118, KEY="U1-8,9-11"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
TMALURNO  DIM       8      8        1     U/R Number                         
TMALLIN   DIM       3      3        9     Line Number                        
TMALSUR   DIM       25     25       12    Surname                            
TMALGV1   DIM       20     20       37    1st Given Name                     
TMALGV2   DIM       20     20       57    2nd Given Name                     
TMALGV3   DIM       20     20       77    3rd Guven Name                     
TMALPRE   DIM       1      1        97    Preferred Given Name               
TMALSPA   DIM       20     20       98    Spare                              
.
.End of Record                      118  
.
