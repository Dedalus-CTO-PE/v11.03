. V9.08.001 15/12/2006 PV  Created table CAR 128233                          
. *----------------------------------------------------------------------
. * Include Name  :   MRTDSRFD.INC
. *
. * Function      :   File Def'n Include for Medical Records                    
. *                   Discharge Summary Request Table    
. *
. * File Type     :   SQL
. *
. * File Name     :   mrtdsraf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MRTDSRA1   IFILE    SQL, FIXED=613, KEY="U1-8,9-11"                             
MRTDSRA2   IFILE    SQL, FIXED=613, KEY="U12-19,1-8,9-11"                       
MRTDSRA3   IFILE    SQL, FIXED=613, KEY="U20-29,1-8,9-11"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MRDSVISN  DIM       8      8        1     Visit Number                       
DMRDSCNT  DIM       3      3        9     Unique Counter                     
MRDSDTRQ  DIM       8      8        12    Date of Request                    
MRDSCONS  DIM       10     10       20    Consultant                         
MRDSLTST  DIM       3      3        30    Letter Sent                        
MRDSCOM1  DIM       100    100      33    Comments 1                         
MRDSCOM2  DIM       100    100      133   Comments 2                         
MRDSCOM3  DIM       100    100      233   Comments 3                         
MRDSCOM4  DIM       100    100      333   Comments 4                         
MRDSCOM5  DIM       100    100      433   Comments 5                         
MRDSSPAR  DIM       80     80       533   Spare Variable                     
.
.End of Record                      613  
.
.Redefine for form field keys
MRDSCNT   FORM      3
