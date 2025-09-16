. V6.05.001 08/01/1999                                                       
. V6.05.002 22/01/1999                                                       
. V6.06.003 24/06/1999 BGA Added Index                                       
. *----------------------------------------------------------------------
. * Include Name  :   RESPDSFD.INC
. *
. * Function      :   File Def'n Include for WEB
. *                   Clinical Results PIT Format Result Details          
. *
. * File Type     :   SQL
. *
. * File Name     :   respdsaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
RESPDSA1   IFILE    SQL, FIXED=171, KEY="U1-8,9-13,14-17,18-20"                 
RESPDSA2   IFILE    SQL, FIXED=171, KEY="U1-8,9-13,14-17,148-150,18-20"         
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
REPDRDT   DIM       8      8        1     Result Date                        
REPDRTM   DIM       5      5        9     Result Time                        
REPDRUN   DIM       4      4        14    Result Unique ID                   
REPDLIN   DIM       3      3        18    Line Number                        
REPDTXT   DIM       127    127      21    Formated HTML Text                 
REPDPTL   DIM       3      3        148   PIT Line Number                    
REPDSPA   DIM       20     20       151   Spare                              
.
.End of Record                      171  
.
