. V9.04.000 19/11/2004 EC  Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   ALLCTMFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   HCP Case Team Member Details       
. *
. * File Type     :   SQL
. *
. * File Name     :   allctmaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLCTMA1   IFILE    SQL, FIXED=139, KEY="U1-10,11-20"                           
ALLCTMA2   IFILE    SQL, FIXED=139, KEY="U11-20,1-10"                           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALCTTEAM  DIM       10     10       1     Team Number                        
ALCTHCPC  DIM       10     10       11    HCP Code (pmshcpaf)                
ALCTSDAT  DIM       8      8        21    Start Date (CCYYMMDD)              
ALCTEDAT  DIM       8      8        29    End Date (CCYYMMDD)                
ALCTCDAT  DIM       8      8        37    Date Record Created (CCYYMMDD)     
ALCTCTIM  DIM       8      8        45    Time Record Created (HH:MM:SS)     
ALCTCUID  DIM       10     10       53    WEB User ID Created (websecaf)     
ALCTUDAT  DIM       8      8        63    Update Date (CCYYMMDD)             
ALCTUTIM  DIM       8      8        71    Update Time (HH:MM:SS)             
ALCTUUID  DIM       10     10       79    WEB User ID Updated (websecaf)     
ALCTSPAR  DIM       50     50       89    Spare                              
.
.End of Record                      139  
.
