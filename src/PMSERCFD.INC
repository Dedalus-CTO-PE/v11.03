. ************************************************************************
. *                                                                      *
. *  Include Name      :   PMSERCFD.INC                                  *
. *                                                                      *
. *  Function          :   Eclipse Eligibility Response Comments Table   *
. *                                                                      *
. *  File Type         :   SQL                                           *
. *                                                                      *
. *  File Name         :   pmsercaf.dat                                  *
. *                                                                      *
. *  Keys              :   KEY29                                         *
. *                                                                      *
. *  Modifications     :                                                 *
. *        V9.11.00  23/01/2009  Davin           CAR xxxxxx              *
. *                  Created FD                                          *
. *                                                                      *
. ************************************************************************
.
.Data File Definition 
.--------------------
PMSERCA1   IFILE    SQL, FIXED=176, KEY="U1-20,21-23,24-26,27-29"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMRCARID  DIM       20     20       1     Account Reference ID               
PMRCRPTC  DIM       3      3        21    Report counter (right just.)       
PMRCTYPE  DIM       3      3        24    Eclipse Eligibility Comment Type
.                                         001 - Benefit Limitations
.                                         002 - CoPayment Description
.                                         003 - Excess Amount Description
.                                         004 - Exclusion Description
.                                         005 - Table Description
PMRCLINE  DIM       3      3        27    Line No                            
PMRCDATA  DIM       100    100      30    Line                               
PMRCUDAT  DIM       8      8        130   Date Record Updated (ccyymmdd)
PMRCUTIM  DIM       8      8        138   Time Record Updated (hh:mm:ss)
PMRCSPAR  DIM       30     30       146   Spare Variable                     
.
.End of Record                      176  
.
