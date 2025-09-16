. V6.00.014 06/11/1992                                                       
. *----------------------------------------------------------------------
. * Include Name  :   SCRMASFD.INC
. *
. * Function      :   File Def'n Include for Common                      
. *                   Screen Table                      
. *
. * File Type     :   SQL
. *
. * File Name     :   scrmasaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SCRMASA1   IFILE    SQL, FIXED=96, KEY="U1-8,9-10"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SCMAPID   DIM       8      8        1     Program ID                         
SCMASID   DIM       2      2        9     Screen ID                          
SCMADES   DIM       35     35       11    Screen Description                 
SCMATOP   FORM      2      2        46    Top Screen Line                    
SCMALEF   FORM      3      3        48    Left                               
SCMABOT   FORM      2      2        51    Bottom                             
SCMARIG   FORM      3      3        53    Right                              
SCMACBF   DIM       8      8        56    Call Before                        
SCMACAF   DIM       8      8        64    Call After                         
SCMATYP   FORM      2      2        72    Screen Type                        
SCMASEX   DIM       1      1        74    Select Exit 0=Restart 1=Exit       
SCMAFSC   DIM       2      2        75    Field file screen Id               
SCMACLR   DIM       1      1        77    Clear Fields 0=All 1=Sel/Key 2=None
SCMAFPR   DIM       8      8        78    Field File Program ID              
SCMASPA   DIM       10     10       86    Spare                              
.
.End of Record                      96   
.
