. V6.00.002 23/08/0091 BGA Changed Index                                     
. V6.00.003 25/08/0091 BGA Add Help and Mod Indexes                          
. V6.00.004 13/09/0091 BGA Add Security                                      
. *----------------------------------------------------------------------
. * Include Name  :   SCRSLTFD.INC
. *
. * Function      :   File Def'n Include for Common                      
. *                   Screen Selections                  
. *
. * File Type     :   SQL
. *
. * File Name     :   scrsltaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SCRSLTA1   IFILE    SQL, FIXED=54, KEY="U1-8,9-10,11-13"                        
SCRSLTA2   IFILE    SQL, FIXED=54, KEY="U1-8,9-10,14-18,11-13"                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SCSLPID   DIM       8      8        1     Program                            
SCSLSID   DIM       2      2        9     Screen                             
SCSLSEL   DIM       3      3        11    Selection                          
SCSLITM   DIM       5      5        14    Item                               
SCSLROW   DIM       2      2        19    Row                                
SCSLCOL   DIM       3      3        21    Column                             
SCSLDES   DIM       25     25       24    Help Description                   
SCSLSEC   DIM       2      2        49    Security Level                     
SCSLSPA   DIM       3      3        51    Spare                              
.
.End of Record                      54   
.
