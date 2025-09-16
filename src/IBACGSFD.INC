. v9.03.001 18/03/2004 DS  Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   IBACGSFD.INC
. *
. * Function      :   File Def'n Include for IBA Software                       
. *                   Category Security Groups           
. *
. * File Type     :   SQL
. *
. * File Name     :   ibacgsaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
IBACGSA1   IFILE    SQL, FIXED=107, KEY="U1-3"                                  
IBACGSA2   IFILE    SQL, FIXED=107, KEY="U4-23,1-3"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
IBCGSGRP  DIM       3      3        1     Security Group                     
IBCGDESC  DIM       20     20       4     Description                        
IBCGACTV  DIM       1      1        24    Active (0=No,1=Yes)                
IBCGCDAT  DIM       8      8        25    Date Record Created (CCYYMMDD)     
IBCGCTIM  DIM       8      8        33    Time Record Created (HH:MM:SS)     
IBCGCUID  DIM       10     10       41    WEB User ID Created (websecaf)     
IBCGUDAT  DIM       8      8        51    Date Record Updated (CCYYMMDD)     
IBCGUTIM  DIM       8      8        59    Time Record Updated (HH:MM:SS)     
IBCGUUID  DIM       10     10       67    WEB User ID Updated (websecaf)     
IBCGSPAR  DIM       30     30       77    Spare Variable                     
.
.End of Record                      107  
.
