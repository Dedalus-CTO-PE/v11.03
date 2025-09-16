. 9.07 .001 02/08/2006 JH  Created                                           
. *----------------------------------------------------------------------
. * Include Name  :   OBSPINFD.INC
. *
. * Function      :   File Def'n Include for Clinical Observations              
. *                   Observations Principal Details     
. *
. * File Type     :   SQL
. *
. * File Name     :   obspinaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OBSPINA1   IFILE    SQL, FIXED=80, KEY="U1-8"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OBPNVISN  DIM       8      8        1     Visit Number                       
OBPNPDIA  DIM       9      9        9     Principal Diagnosis                
OBPNPPRO  DIM       9      9        18    Principal Procedure                
OBPNREAA  DIM       3      3        27    Reason for Admission (Cat RU)      
OBPNSPAR  DIM       50     50       30    Spare                              
.
.End of Record                      80   
.
