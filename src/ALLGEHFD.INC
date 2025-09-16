. V9.09.001 13/07/2007 EC  Created FD CAR 135536                             
. *----------------------------------------------------------------------
. * Include Name  :   ALLGEHFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Group Contact HCP's                
. *
. * File Type     :   SQL
. *
. * File Name     :   allgehaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLGEHA1   IFILE    SQL, FIXED=127, KEY="U1-8,9-18,19-21"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALGCCONT  DIM       8      8        1     Contact Number                     
ALGCHCPC  DIM       10     10       9     HCP (pmshcpaf)                     
ALGCSPEC  DIM       3      3        19    HCP Specialty (Cat DT)             
ALGCHSTA  DIM       3      3        22    HCP Status (Cat GA)                
ALGCCDAT  DIM       8      8        25    Date Record Created (CCYYMMDD)     
ALGCCTIM  DIM       8      8        33    Time Record Created (HH:MM:SS)     
ALGCCUID  DIM       10     10       41    WEB User ID Created (websecaf)     
ALGCUDAT  DIM       8      8        51    Date Record Updated (CCYYMMDD)     
ALGCUTIM  DIM       8      8        59    Time Record Updated (HH:MM:SS)     
ALGCUUID  DIM       10     10       67    WEB User ID Updated (websecaf)     
ALGCSPAR  DIM       50     50       77    Spare                              
.
.End of Record                      127  
.
