. VF.09.001 09/11/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   IBABASFD.INC
. *
. * Function      :   File Def'n Include for IBA Software                       
. *                   BAS Code Table                     
. *
. * File Type     :   SQL
. *
. * File Name     :   ibabasaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
IBABASA1   IFILE    SQL, FIXED=57, KEY="U1-3"                                   
IBABASA2   IFILE    SQL, FIXED=57, KEY="U4-33,1-3"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
IBBABASC  DIM       3      3        1     BAS Code                           
IBBADESC  DIM       30     30       4     BAS Description                    
IBBAACTV  FORM      1      2        34    Active/Inactive (1 - Inactive)     
IBBATYPE  DIM       1      1        36    Bas Code Type                      
IBBASPAR  DIM       20     20       37    Spare Variable                     
.
.End of Record                      57   
.
