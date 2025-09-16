. V5.09.002 03/01/2001                                                       
. *----------------------------------------------------------------------
. * Include Name  :   MRTVISFD.INC
. *
. * Function      :   File Def'n Include for Medical Records                    
. *                   Medical Record Visit Links         
. *
. * File Type     :   SQL
. *
. * File Name     :   mrtvisaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MRTVISA1   IFILE    SQL, FIXED=59, KEY="U1-8"                                   
MRTVISA2   IFILE    SQL, FIXED=59, KEY="U9-18,1-8"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MRVSVSNO  DIM       8      8        1     Visit Number                       
MRVSMKEY  DIM       10     10       9     Medical Record Unique Key          
MRVSSPAR  DIM       40     40       19    Spare                              
.
.End of Record                      59   
.
