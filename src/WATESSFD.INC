. 9.04 .002 15/05/2007 JH  Added year                                        
. 9.08 .003 15/05/2007                                                       
. *----------------------------------------------------------------------
. * Include Name  :   WATESSFD.INC
. *
. * Function      :   File Def'n Include for Waiting List                       
. *                   ESIS Sent Table                    
. *
. * File Type     :   SQL
. *
. * File Name     :   watessaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WATESSA1   IFILE    SQL, FIXED=42, KEY="U1-4,5-7"                               
WATESSA2   IFILE    SQL, FIXED=42, KEY="U8-15,1-4,5-7"                          
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WTSSYEAR  DIM       4      4        1     Year                               
WTSSRUNN  DIM       3      3        5     Run Number                         
WTSSDATE  DIM       8      8        8     Date Sent (CCYYMMDD)               
WTSSSPAR  DIM       26     26       16    Spare                              
.
.End of Record                      42   
.
