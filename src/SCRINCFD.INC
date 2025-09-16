. V6.00.001 20/08/0091 BGA Generated                                         
. V6.00.002 21/08/0091 BGA Add Generated Indicator                           
. *----------------------------------------------------------------------
. * Include Name  :   SCRINCFD.INC
. *
. * Function      :   File Def'n Include for Common                      
. *                   Screen Program Includes Table              
. *
. * File Type     :   SQL
. *
. * File Name     :   scrincaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SCRINCA1   IFILE    SQL, FIXED=44, KEY="U1-8,9-9,10-21"                         
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SCINPID   DIM       8      8        1     Program ID                         
SCINTYP   DIM       1      1        9     Type 0=Definition 1=Code           
SCININC   DIM       12     12       10    Include                            
SCINGEN   FORM      1      2        22    Generated Include 1=Yes            
SCINSPA   DIM       20     20       24    Spare                              
.
.End of Record                      44   
.
