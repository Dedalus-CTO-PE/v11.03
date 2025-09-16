. V9.09.001 05/10/2007 JH  Created                                           
. V9.09.002 08/10/2007                                                       
. *----------------------------------------------------------------------
. * Include Name  :   PMSRFLFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Patient Referral Table             
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsrflaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSRFLA1   IFILE    SQL, FIXED=139, KEY="U1-8,9-18,19-26"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMRFURNO  DIM       8      8        1     UR Number                          
PMRFCONS  DIM       10     10       9     Consultant (pmshcpaf)              
PMRFEXPD  DIM       8      8        19    Expiry Date (ccyymmdd)             
PMRFRFGP  DIM       10     10       27    Referring GP (pmshcpaf)            
PMRFCDAT  DIM       8      8        37    Date Record Created (ccyymmdd)     
PMRFCTIM  DIM       8      8        45    Time Record Created (hh:mm:ss)     
PMRFCUID  DIM       10     10       53    WEB User ID Created (websecaf)     
PMRFUDAT  DIM       8      8        63    Date Record Updated (ccyymmdd)     
PMRFUTIM  DIM       8      8        71    Time Record Updated (hh:mm:ss)     
PMRFUUID  DIM       10     10       79    WEB User ID Updated (websecaf)     
PMRFSPAR  DIM       50     50       89    Spare variable                     
.
.End of Record                      139  
.
