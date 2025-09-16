. V6.00.002 30/08/0091 BGA Add Multi Item ID                                 
. V6.00.003 15/09/0091 BGA Extended for Format Control                       
. V6.00.004 15/09/0091                                                       
. *----------------------------------------------------------------------
. * Include Name  :   SCRPSTFD.INC
. *
. * Function      :   File Def'n Include for Common                      
. *                   Screen Field Positions             
. *
. * File Type     :   SQL
. *
. * File Name     :   scrpstaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SCRPSTA1   IFILE    SQL, FIXED=64, KEY="U1-8,9-10,11-12,13-15"                  
SCRPSTA2   IFILE    SQL, FIXED=64, KEY="U1-8,9-10,16-20,11-12,13-15"            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SCPSPID   DIM       8      8        1     Program ID                         
SCPSSID   DIM       2      2        9     Screen ID                          
SCPSROW   DIM       2      2        11    Row                                
SCPSCOL   DIM       3      3        13    Column                             
SCPSITM   DIM       5      5        16    Item                               
SCPSLEN   FORM      3      3        21    Length                             
SCPSMAN   FORM      1      2        24    Mandatory 0=No                     
SCPSATT   DIM       1      1        26    Attributes                         
SCPSNOR   FORM      2      2        27    Number of Rows                     
SCPSMTY   DIM       5      5        29    Multiple Sys/Fil/Idx               
SCPSFMT   DIM       25     25       34    String Format                      
SCPSSPA   DIM       5      5        59    Spare                              
.
.End of Record                      64   
.
