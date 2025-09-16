. *----------------------------------------------------------------------
. * Include Name  :   FMSNRHFD.INC
. *
. * Function      :   File Def'n Include for Financial Management
. *                   Template Reporting Work Table
. *
. * File Type     :   SQL
. *
. * File Name     :   fmsnrhXX.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSNRHA1   IFILE    SQL, FIXED=107, KEY="U1-3,4-8,9-13"
FMSNRHA2   IFILE    SQL, FIXED=107, KEY="U1-3,9-13,4-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMNHREPT  DIM       3      3        1     Template Report Code               
FMNHCSEQ  DIM       5      5        4     Cost Centre Sequence               
FMNHSSEQ  DIM       5      5        9     Subjective Sequence                
FMNHACCT  DIM       12     12       14    Account                            
FMNHDESC  DIM       35     35       26    Description                        
FMNHTYPE  DIM       1      1        61    Type                               
FMNHAYTD  FORM      1      2        62    Ac YTD (1=yes)                     
FMNHCLEV  DIM       3      3        64    Cost Centre Level                  
FMNHSLEV  DIM       3      3        67    Subjective Level                   
FMNHCPRT  DIM       3      3        70    Cost Centre Print Code             
FMNHSPRT  DIM       3      3        73    Subjective Print Code              
FMNHDPLA  DIM       1      1        76    Decimal Places                     
FMNHMULT  FORM      6.2    5        77    Constant Multiplier                
FMNHDIV   FORM      6.2    5        82    Constant Divisor                   
FMNHSPAR  DIM       20     20       87    Spare                              
.
.End of Record                      107  
.
