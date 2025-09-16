. V9.12.001 09/02/2010 EC  Created FD                                           
. *----------------------------------------------------------------------
. * Include Name  :   PMSHPGFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Health Fund Program Details        
. *
. * File Type     :   SQL
. *
. * File Name     :   pmshpgaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSHPGA1   IFILE    SQL, FIXED=139, KEY="U1-3,4-6,7-12,13-15,16-23"             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMHPATYP  DIM       3      3        1     Admission Type (Cat A)             
PMHPCLAM  DIM       3      3        4     Claim Code (Cat CL)                
PMHPFUND  DIM       6      6        7     Health Fund                        
PMHPTABT  DIM       3      3        13    Health Fund Table Type (Cat HT)    
PMHPEDAT  DIM       8      8        16    Effective Date (CCYYMMDD)          
PMHPMAXI  DIM       3      3        24    Maximum Number of IP Visits        
PMHPWARI  DIM       3      3        27    Warn at X Number of IP Visits      
PMHPMAXO  DIM       3      3        30    Maximum Number of OP Visits        
PMHPWARO  DIM       3      3        33    Warn at X Number of OP Visits      
PMHPBRKO  DIM       1      1        36    Breakdown of OP Visits             
.                                         0=No, 1=Yes (pmshpoaf)        
PMHPCDAT  DIM       8      8        37    Date Record Created (CCYYMMDD)     
PMHPCTIM  DIM       8      8        45    Time Record Created (HH:MM:SS)     
PMHPCUID  DIM       10     10       53    WEB User ID Created (websecaf)     
PMHPUDAT  DIM       8      8        63    Update Date (CCYYMMDD)             
PMHPUTIM  DIM       8      8        71    Update Time (HH:MM:SS)             
PMHPUUID  DIM       10     10       79    WEB User ID Updated (websecaf)     
PMHPSPAR  DIM       50     50       89    Spare                              
.
.End of Record                      139  
.
