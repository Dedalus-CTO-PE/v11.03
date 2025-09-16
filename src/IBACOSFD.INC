. V9.07.001 13/07/2006 EC  Created FD CAR 103365                             
. *----------------------------------------------------------------------
. * Include Name  :   IBACOSFD.INC
. *
. * Function      :   File Def'n Include for IBA Software                       
. *                   Category Security Codes            
. *
. * File Type     :   SQL
. *
. * File Name     :   ibacosaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
IBACOSA1   IFILE    SQL, FIXED=85, KEY="U1-3,4-5,6-8"                           
IBACOSA2   IFILE    SQL, FIXED=85, KEY="U4-5,6-8,1-3"                           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
IBCOSGRP  DIM       3      3        1     Security Group                     
IBCOCATG  DIM       2      2        4     Category                           
IBCOCATC  DIM       3      3        6     Category Code                      
IBCOCDAT  DIM       8      8        9     Date Record Created (CCYYMMDD)     
IBCOCTIM  DIM       8      8        17    Time Record Created (HH:MM:SS)     
IBCOCUID  DIM       10     10       25    WEB User ID Created (websecaf)     
IBCOSPAR  DIM       50     50       35    Spare                              
.
.End of Record                      85   
.
