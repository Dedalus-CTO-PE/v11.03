. V5.08.001 02/06/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CCSPROFD.INC
. *
. * Function      :   File Def'n Include for Clinical Costing System            
. *                   Profile Code Master
. *
. * File Type     :   SQL
. *
. * File Name     :   ccsproaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CCSPROA1   IFILE    SQL, FIXED=125, KEY="U1-4"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CCPRPRO   DIM       4      4        1     Profile Code                       
CCPRDES   DIM       35     35       5     Description                        
CCPRP01   FORM      6.2    5        40    Profile Period 01                  
CCPRP02   FORM      6.2    5        45    Profile Period 02                  
CCPRP03   FORM      6.2    5        50    Profile Period 03                  
CCPRP04   FORM      6.2    5        55    Profile Period 04                  
CCPRP05   FORM      6.2    5        60    Profile Period 05                  
CCPRP06   FORM      6.2    5        65    Profile Period 06                  
CCPRP07   FORM      6.2    5        70    Profile Period 07                  
CCPRP08   FORM      6.2    5        75    Profile Period 08                  
CCPRP09   FORM      6.2    5        80    Profile Period 09                  
CCPRP10   FORM      6.2    5        85    Profile Period 10                  
CCPRP11   FORM      6.2    5        90    Profile Period 11                  
CCPRP12   FORM      6.2    5        95    Profile Period 12                  
CCPRP13   FORM      6.2    5        100   Profile Period 13                  
CCPRSPA   DIM       20     20       105   Spare                              
.
.End of Record                      125  
.
