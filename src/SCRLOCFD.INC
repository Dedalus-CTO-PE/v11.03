. V6.00.001 16/01/1992                                                       
. *----------------------------------------------------------------------
. * Include Name  :   SCRLOCFD.INC
. *
. * Function      :   File Def'n Include for Common                      
. *                   Screen Program User Lock Table             
. *
. * File Type     :   SQL
. *
. * File Name     :   scrlocaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
SCRLOCA1   IFILE    SQL, FIXED=29, KEY="U1-8"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
SCLOPID   DIM       8      8        1     Program ID                         
SCLOUID   DIM       10     10       9     User ID                            
SCLOSPA   DIM       10     10       19    Spare                              
.
.End of Record                      29   
.
