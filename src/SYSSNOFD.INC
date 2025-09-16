. VF.00.002 29/10/1998 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   SYSSNOFD.INC
. *
. * Function      :   File Def'n Include for Common
. *                   System Summary Description         
. *
. * File Type     :   SQL
. *
. * File Name     :   syssnoaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SYSSNOA1   IFILE    SQL, FIXED=96, KEY="U1-2,3-5"                               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SYSNSYS   DIM       2      2        1     System                             
SYSNLIN   DIM       3      3        3     Line Number                        
SYSNDAT   DIM       70     70       6     Data Line                          
SYSNSPA   DIM       20     20       76    Spare                              
.
.End of Record                      96   
.
