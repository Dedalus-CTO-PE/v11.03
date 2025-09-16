. 9.08 .001 27/09/2006 JH  Created                                           
. 9.08 .002 27/09/2006                                                       
. *----------------------------------------------------------------------
. * Include Name  :   MLTSECFD.INC
. *
. * Function      :   File Def'n Include for Multi Hospital                     
. *                   Multi Hospital Security Table      
. *
. * File Type     :   SQL
. *
. * File Name     :   mltsecaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MLTSECA1   IFILE    SQL, FIXED=64, KEY="U1-10,11-13"                            
MLTSECA2   IFILE    SQL, FIXED=64, KEY="U11-13,1-10"                            
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MLSCUSID  DIM       10     10       1     User ID                            
MLSCHOSP  DIM       3      3        11    Hospital ID (pathspaf)             
MLSCSPAR  DIM       50     50       14    Spare                              
.
.End of Record                      64   
.
