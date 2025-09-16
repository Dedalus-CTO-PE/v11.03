. V9.08.000 13/12/2006 PV  Created table CAR 128097                          
. V9.08.001 23/01/2007 PV  Added 2nd index CAR 128097                        
. *----------------------------------------------------------------------
. * Include Name  :   PMSAELFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Admission/Fee Estimation Link Table
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsaelaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSAELA1   IFILE    SQL, FIXED=51, KEY="U1-8,9-20"                             
PMSAELA2   IFILE    SQL, FIXED=51, KEY="U9-20,1-8"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMAEVISN  DIM       8      8        1     Visit Number                       
PMAEQUOT  DIM       12     12       9     Quote Number                       
PMAESPAR  DIM       30     30       21    Spare variable                     
.
.End of Record                      51   
.
