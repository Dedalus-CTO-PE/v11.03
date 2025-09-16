. V10.03.00 19/12/2012 PMc C-274932 Created FD                                  
. *----------------------------------------------------------------------
. * Include Name  :   FMSEPTFD.INC
. *
. * Function      :   File Def'n Include for Financial Management System        
. *                   EFTPOS Terminals                   
. *
. * File Type     :   SQL
. *
. * File Name     :   fmseptaf.dat
. *
. * Index Values  :   KEY18                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
FMSEPTA1   IFILE    SQL, FIXED=256, KEY="U1-15,16-18"                           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
FMEPCHQA  DIM       15     15       1     Cheque Account (fmchqaf.FMCHCHQ)    
FMEPPPID  DIM       3      3        16    Id of an EFTPOS terminal for acct. 
FMEPACTV  DIM       1      1        19    1 = active, 0 = not in use         
FMEPADDR  DIM       40     40       20    URL/ipv4/ipv6 addr of EFTPOS term. 
FMEPPORT  DIM       5      5        60    Port number for the EFTPOS terminal
FMEPDESC  DIM       30     30       65    Description of EFTPOS terminal     
FMEPCDAT  DIM       8      8        95    Date Record Created (CCYYMMDD)     
FMEPCTIM  DIM       8      8        103   Time Record created HH:MM:SS       
FMEPCUID  DIM       10     10       111   WEB User ID Created (websecaf)     
FMEPUDAT  DIM       8      8        121   Date Record Updated (CCYYMMDD)     
FMEPUTIM  DIM       8      8        129   Time Record Updated (HH:MM:SS)     
FMEPUUID  DIM       10     10       137   WEB User ID Updated (websecaf)     
FMEPSPAR  DIM       109    109      147   Spare                              
.
.End of Record                      256  
.
