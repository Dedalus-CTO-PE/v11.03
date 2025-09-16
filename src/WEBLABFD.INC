. V9.04.001 10/03/2005 JH  Created                                           
. V9.04.002 10/03/2005                                                       
. V9.04.003 08/07/2005 Added MRT system CAR 62220                            
. V9.04.004 07/11/2005 Added Emergency Pathology Labels CAR 81899
. *----------------------------------------------------------------------
. * Include Name  :   WEBLABFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   Web label selection list table     
. *
. * File Type     :   SQL
. *
. * File Name     :   weblabaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBLABA1   IFILE    SQL, FIXED=36, KEY="U1-1,2-4"                               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBLBSYST  DIM       1      1        1     System                             
.                                         1=Emergency
.                                         2=Outpatients
.                                         3=Inpatients
.                                         4=Medical Records
.                                         5=Emergency Pathology Labels
WBLBNUML  DIM       3      3        2     Number of Labels                   
WBLBDEFT  DIM       1      1        5     Default (1=Yes)                    
WBLBSPAR  DIM       30     30       6     Spare                              
.
.End of Record                      36   
.
