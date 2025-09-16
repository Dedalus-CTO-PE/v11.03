. ************************************************************************
. *                                                                      *
. *  Include Name      :   ACCCMTFD.INC                                  *
. *                                                                      *
. *  Function          :   File Def'n Include for ACC Claim Comments     *
. *                        table                                         *
. *                                                                      *
. *  File Type         :   SQL                                           *
. *                                                                      *
. *  File Name         :   acccmtaf.dat                                  *
. *                                                                      *
. *  Keys              :   KEY26                                         *
. *                                                                      *
. *  Modifications     :                                                 *
. *                                                                      *
. *      07/06/2007  Janet George  CAR 142467                            *
. *                  FD created.                                         *
. ************************************************************************
.
.Data File Definition
.--------------------
ACCCMTA1   IFILE    SQL, FIXED=157, KEY="U1-20,21-23,24-26"                     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ACCMACCN  DIM       20     20       1     ACC Number
ACCMTYPE  DIM       3      3        21    Comment Type                       
.                                         001 - Cause of Injury
.                                         002 - Injury Comments
.                                         003 - Alternative work restriction
DACCMLIN  DIM       3      3        24    Line No                            
ACCMDATA  DIM       100    100      27    Line
ACCMSPAR  DIM       30     30       127   Spare Variable                     
.
.End of Record                      157  
.
.  Redefine form fields from key
. ------------------------------
ACCMLINE  FORM      3
.
