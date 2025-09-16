. V10.03.01 17/10/2012 AP C-270328 Created O/P Site Security Table              
. *----------------------------------------------------------------------
. * Include Name  :   MLTSITFD.INC
. *
. * Function      :   File Def'n Include for Multi Hospital                     
. *                   Multi O/P Site Security Table      
. *
. * File Type     :   SQL
. *
. * File Name     :   mltsitaf.dat
. *
. * Index Values  :   KEY16                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MLTSITA1   IFILE    SQL, FIXED=67, KEY="U1-10,11-16"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MLSTUSID  DIM       10     10       1     User ID
MLSTSITE  DIM       6      6        11    Site ID  (outsitaf)
MLSTSPAR  DIM       50     50       17    Spare
.
.End of Record                      67
.
