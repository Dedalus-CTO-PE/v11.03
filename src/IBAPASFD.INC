. V6.00.001 26/08/0091 BGA Generated                                         
. V6.00.002 26/08/0091 BGA Bug                                               
. V6.00.003 26/08/0091 BGA Fix Spare Variable                                
. V6.00.004 26/08/0091 BGA Fix Index                                         
. V6.00.005 11.09.1994 BGA Add SECUALEV DIM 1                                 
. V6.00.006 11/12/1996 ROD Added SECTRUID  DIM 6                              
. *----------------------------------------------------------------------
. * Include Name  :   IHAPASFD.INC
. *
. * Function      :   File Def'n Include for Common                          
. *                   Passcode Details                   
. *
. * File Type     :   SQL
. *
. * File Name     :   ihapassf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
IHAPASS1   IFILE    SQL, FIXED=135, KEY="U1-4"                                  
IHAPASS2   IFILE    SQL, FIXED=135, KEY="U25-59,1-4"                            
IHAPASS3   IFILE    SQL, FIXED=135, KEY="U5-24,1-4"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SECODE    DIM       4      4        1     Security Code                      
SECNUMB   DIM       20     20       5     Unix Login ID                      
SECUSER   DIM       35     35       25    User Name                          
SECACCT   DIM       4      4        60    (Not Used)                         
SECNUMB1  DIM       10     10       64    (Not Used)
SECNUMB2  DIM       25     25       74    (Not Used)
SECDIRCT  FORM      2      2        99    (Not Used)
SECMENU   DIM       8      8        101   (Not Used)
SECPRINT  DIM       2      2        109   Printer Group                      
SECDEPT   DIM       3      3        111   Department Code                    
SECMNNUM  DIM       3      3        114   User's Master Menu Number          
SECMAIL   DIM       8      8        117   Mailing Id
SECUALEV  DIM       1      1        125   Alerts Security Level
SECTRUID  DIM       6      6        126   Medical Records Tracking User Id
SECSPARE  DIM       3      3        132   Spare                              
.
.End of Record                      135  
.
