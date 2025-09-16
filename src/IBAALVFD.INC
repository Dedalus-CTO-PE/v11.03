. V11.00.01 30/09/2020 DS C-0890602 Added record type for MOSAIQ                
. V10.04.01 03/01/2014 DN  Moved IBAVTYPE out of spare variable  CAR 295312     
. V10.03.01 07/10/2013 SA  Added IBAVTYPE as part of SPARE  CAR 286923          
. V10.02.00 07/04/2011 SA  FD Created   CAR 240689                              
. *----------------------------------------------------------------------
. * Include Name  :   IBAALVFD.INC
. *
. * Function      :   File Def'n Include for IBA Software                       
. *                   Alternate Visit ID                 
. *
. * File Type     :   SQL
. *
. * File Name     :   ibaalvaf.dat
. *
. * Index Values  :   KEY8    KEY28                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
IBAALVA1   IFILE    SQL, FIXED=49, KEY="U1-8"
IBAALVA2   IFILE    SQL, FIXED=49, KEY="U9-28,1-8"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
IBAVVISN  DIM       8      8        1     Visit Number                       
IBAVAVIS  DIM       20     20       9     Alternate Visit ID                 
IBAVTYPE  DIM       2      2        29    Record Type                        
.                                         "  " or " 0" = Legacy                
.                                         " 1" = eReferral                     
.                                         " M" = MOSAIQ                        
IBAVSPAR  DIM       18     18       31    Spare Variable                     
.
.End of Record                      49   
.
