. v9.03.001 22/03/2004 DS  Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   IBACCSFD.INC
. *
. * Function      :   File Def'n Include for IBA Software                       
. *                   Category Security Categories       
. *
. * File Type     :   SQL
. *
. * File Name     :   ibaccsaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
IBACCSA1   IFILE    SQL, FIXED=62, KEY="U1-3,4-5"                               
IBACCSA2   IFILE    SQL, FIXED=62, KEY="U4-5,1-3"                               
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
IBCCSGRP  DIM       3      3        1     Security Group                     
IBCCCATG  DIM       2      2        4     Category                           
IBCCCDAT  DIM       8      8        6     Date Record Created (CCYYMMDD)     
IBCCCTIM  DIM       8      8        14    Time Record Created (HH:MM:SS)     
IBCCCUID  DIM       10     10       22    WEB User ID Created (websecaf)     
IBCCSPAR  DIM       30     30       32    Spare Variable                     
.
.End of Record                      62   
.
