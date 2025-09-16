. V6.00.002 15/01/1992                                                       
. V6.00.003 15/01/1992                                                       
. *----------------------------------------------------------------------
. * Include Name  :   SCRFMAFD.INC
. *
. * Function      :   File Def'n Include for Common                      
. *                   Screen Function Table                
. *
. * File Type     :   SQL
. *
. * File Name     :   scrfmaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SCRFMAA1   IFILE    SQL, FIXED=91, KEY="U1-8,9-16"                              
SCRFMAA2   IFILE    SQL, FIXED=91, KEY="U9-16,1-8"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SCFMFID   DIM       8      8        1     Function Call ID                   
SCFMPID   DIM       8      8        9     Program ID (SP8=Global Function)   
SCFMDES   DIM       35     35       17    Function Description               
SCFMTYP   FORM      2      2        52    Function Type                      
SCFMSFI   DIM       5      5        54    Syste/File/Index                   
SCFMSPA   DIM       32     32       59    Spare                              
.
.End of Record                      91   
.
