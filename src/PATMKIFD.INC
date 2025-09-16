. V9.02.001 15/11/2002 EC  Created FD                                        
. V9.04.001 29/09/2004 LV  Added Claim Code for quick Multi Hospital Search  
. *----------------------------------------------------------------------
. * Include Name  :   PATMKIFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   MISCELLANEOUS CHARGES FILE KEYWORDS
. *
. * File Type     :   SQL
. *
. * File Name     :   patmkiaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATMKIA1   IFILE    SQL, FIXED=87, KEY="U1-26,27-56"                            
PATMKIA2   IFILE    SQL, FIXED=87, KEY="U27-56,1-26"                            
PATMKIA3   IFILE    SQL, FIXED=87, KEY="U57-59,27-56,1-26"                      
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTMKCODE  DIM       26     26       1     Miscellaneous charge code key      
PTMKKKWD  DIM       30     30       27    Key word                           
PTMKDCLM  DIM       3      3        57    Claim Code                         
PTMKSPAR  DIM       27     27       60    Spare Variable                     
.
.End of Record                      87   
.
