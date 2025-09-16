. V9.09.001 05/09/2007 PV  Created FD/IO Cabrini Health Spec. CAR 148954     
. *----------------------------------------------------------------------
. * Include Name  :   PATRGMFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Multiple Regimes Table             
. *
. * File Type     :   SQL
. *
. * File Name     :   patrgmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATRGMA1   IFILE    SQL, FIXED=99, KEY="U1-8,19-20"                            
PATRGMA2   IFILE    SQL, FIXED=99, KEY="U1-8,9-18,19-20"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTRGADMN  DIM       8      8        1     Admission Number                   
PTRGREGM  DIM       10     10       9     Regime Table                       
PTRGCNTR  DIM       2      2        19    Count                              
PTRGCUID  DIM       10     10       21    Web User Id Created                
PTRGCDAT  DIM       10     10       31    Date Record Created                
PTRGCTIM  DIM       8      8        41    Time Record Created                
PTRGSPAR  DIM       50     50       49    Spare                              
.
.End of Record                      99   
.
