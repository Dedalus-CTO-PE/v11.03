. v9.03.001 31/03/2004 DS  Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   IBACUSFD.INC
. *
. * Function      :   File Def'n Include for IBA Software                       
. *                   Category Security User IDs         
. *
. * File Type     :   SQL
. *
. * File Name     :   ibacusaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
IBACUSA1   IFILE    SQL, FIXED=70, KEY="U1-3,4-13"                              
IBACUSA2   IFILE    SQL, FIXED=70, KEY="U4-13,1-3"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
IBCUSGRP  DIM       3      3        1     Security Group                     
IBCUUSER  DIM       10     10       4     User ID                            
IBCUCDAT  DIM       8      8        14    Date Record Created (CCYYMMDD)     
IBCUCTIM  DIM       8      8        22    Time Record Created (HH:MM:SS)     
IBCUCUID  DIM       10     10       30    WEB User ID Created (websecaf)     
IBCUSPAR  DIM       30     30       40    Spare Variable                     
.
.End of Record                      70   
.
