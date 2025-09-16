. V5.07.001 29/06/1999 P.D Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   PATKHFFD.INC
. *
. * Function      :   File Def'n Include for WEB          
. *                   Patient Health Fund Tables Keyword Index  
. *
. * File Type     :   SQL
. *
. * File Name     :   patkhfaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATKHFA1   IFILE    SQL, FIXED=50, KEY="U1-6,7-14,15-29"                        
PATKHFA2   IFILE    SQL, FIXED=50, KEY="U15-29,1-6,7-14"                        
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTHFFUN   DIM       6      6        1     Health Fund                        
PTHFTAB   DIM       8      8        7     Health Fund Table                  
PTHFKWD   DIM       15     15       15    Key Word                           
PTHFSPAR  DIM       20     20       30    Spare                              
.
.End of Record                      50   
.
