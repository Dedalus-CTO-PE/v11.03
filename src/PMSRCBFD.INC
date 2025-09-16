. V10.02.01 03/05/2011 JP  Created for CAR 240712                               
. *----------------------------------------------------------------------
. * Include Name  :   PMSRCBFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Recurring Care Batch               
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsrcbaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSRCBA1   IFILE    SQL, FIXED=117, KEY="U1-8,9-16"                             
PMSRCBA2   IFILE    SQL, FIXED=117, KEY="U9-16,1-8"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMRCBATC  DIM       8      8        1     Batch Number                       
PMRCADMN  DIM       8      8        9     Admission Number                   
PMRCPREV  DIM       8      8        17    Previous Admission                 
PMRCSPAR  DIM       92     92       25    Spare                              
.
.End of Record                      117  
.
