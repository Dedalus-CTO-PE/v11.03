. *----------------------------------------------------------------------
. * Include Name  :   NZPMCHTD.INC
. *
. * Function      :   CGI Vars for NZPMCHFD.INC - nzpmchaf
. *                   CGI Vars for NZPMXCFD.INC - nzpmxcaf
. *
. * File Name     :   nzpmchaf.dat
. *
. * V10.03.01 09/03/2012 J.Tan           CAR 259879
. *           Added Active/Inactive and Effective to date
. * V9.08.02  21/11/2006  Ebon Clements CAR 120007
. *           Added copy to cgi vars
. * V9.08.01  17/11/2006  Ebon Clements CAR 120007
. *           Added NZPMXCFD cgi vars
. * V9.08.00  09/11/2006  Ebon Clements CAR 120007
. *           Created include
. *----------------------------------------------------------------------
.
.Name     Type      Length Description
.----     ----      ------ -----------
NZMCH001  DIM       3      Hospital Code (pathspaf)           
NZMCH002  DIM       3      Claim Code (Cat CL)                
NZMCH003  DIM       6      Contract (Health Fund)             
NZMCH004  DIM       8      Fund Table                         
NZMCH005  DIM       9      Charge Code                        
NZMCH006  DIM       8      Effective Date                     
NZMCH007  DIM       90     Description                        
NZMCH008  DIM       1      Charge Type                        
NZMCH009  DIM       3      Charge Group (Cat FI)              
NZMCH010  DIM       15     Patient Portion                    
NZMCH011  DIM       15     Rebate Portion                     
NZMCH012  DIM       1      Indicator for changing description 
NZMCH013  DIM       1      GST applicable                     
NZMCH014  DIM       6      GST payable code (GST rates table) 
NZMCH015  DIM       10     EDI Equivalent                     
NZMCH016  DIM       1      Keyin rebate portion               
NZMCH017  DIM       1      Show detail on invoice             
NZMCH018  DIM       1      Active/Inactive flag
NZMCH019  DIM       8      Effective To date
.
.CGI Vars for NZPMXCFD.INC - nzpmxcaf
.
.Name     Type      Length Description
.----     ----      ------ -----------
NZMXC001  DIM       3      Exploding Misc Item Quantity
NZMXC002  DIM       9      Exploding Misc Item
NZMXC003  DIM       3      Unique Number
.
. CGI vars for copy to
.
.Name     Type      Length Description
.----     ----      ------ -----------
CPMCH001  DIM       3      Hospital Code (pathspaf)
CPMCH002  DIM       3      Claim Code (Cat CL)
CPMCH003  DIM       6      Contract (Health Fund)
CPMCH004  DIM       8      Fund Table
CPMCH005  DIM       9      Charge Code
CPMCH006  DIM       8      Effective Date
