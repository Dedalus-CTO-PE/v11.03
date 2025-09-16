. v9.02.001 27/09/2001 dc  created                                           
. *----------------------------------------------------------------------
. * Include Name  :   OUTVACFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   VACS file                          
. *
. * File Type     :   SQL
. *
. * File Name     :   outvacaf.dat
. *
. * Modifications :
. *      V9.03.01  17/10/2003 Ebon Clements CAR 43674
. *                Removed site prefix
. *      V9.02.02  25/11/2002 Lina Vo
. *                Added site specific variable FILVACA1 & FILVACA2
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTVACA1   IFILE    SQL, FIXED=75, KEY="U1-3,4-11"                              
OUTVACA2   IFILE    SQL, FIXED=75, KEY="U4-11,1-3"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTVACODE  DIM       3      3        1     VACS Code                          
OTVADATE  DIM       8      8        4     Effective Date (CCYYMMDD)          
OTVAWGHT  FORM      4.4    5        12    VACS Weight                        
OTVAAMNT  FORM      12.2   8        17    Amount                             
OTVASPAR  DIM       50     50       25    Spare Variable                     
.
.End of Record                      75   
.
