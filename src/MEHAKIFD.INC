. V9.02.001 15/10/2002 EC  Created FD                                        
. V9.02.002 16/10/2002                                                       
. V9.02.003 16/10/2002     Amend to include type of Axis code                
. *----------------------------------------------------------------------
. * Include Name  :   MEHAKIFD.INC
. *
. * Function      :   File Def'n Include for Mental Health                      
. *                   Mental Health Axis Code Search     
. *
. * File Type     :   SQL
. *
. * File Name     :   mehakiaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MEHAKIA1   IFILE    SQL, FIXED=46, KEY="U1-1,2-10,11-25"                        
MEHAKIA2   IFILE    SQL, FIXED=46, KEY="U11-25,1-1,2-10"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MHAKKTYP  DIM       1      1        1     Type of Code                       
MHAKKITM  DIM       9      9        2     Axis Code                          
MHAKKKWD  DIM       15     15       11    Key Word                           
MHAKSPAR  DIM       20     20       26    Spare                              
.
.End of Record                      46   
.
