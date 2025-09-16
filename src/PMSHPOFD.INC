. V9.12.001 09/02/2010 EC  Created FD                                           
. *----------------------------------------------------------------------
. * Include Name  :   PMSHPOFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Health Fund Program OP Details     
. *
. * File Type     :   SQL
. *
. * File Name     :   pmshpoaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSHPOA1   IFILE    SQL, FIXED=135, KEY="U1-3,4-6,7-12,13-15,16-23,24-26"       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMHOATYP  DIM       3      3        1     Admission Type (Cat A)             
PMHOCLAM  DIM       3      3        4     Claim Code (Cat CL)                
PMHOFUND  DIM       6      6        7     Health Fund                        
PMHOTABT  DIM       3      3        13    Health Fund Table Type (Cat HT)    
PMHOEDAT  DIM       8      8        16    Effective Date (CCYYMMDD)          
PMHOVTYP  DIM       3      3        24    Visit Type (Cat CV)                
PMHOMAXO  DIM       3      3        27    Maximum Number of OP Visits        
PMHOWARO  DIM       3      3        30    Warn at X Number of OP Visits      
PMHOCDAT  DIM       8      8        33    Date Record Created (CCYYMMDD)     
PMHOCTIM  DIM       8      8        41    Time Record Created (HH:MM:SS)     
PMHOCUID  DIM       10     10       49    WEB User ID Created (websecaf)     
PMHOUDAT  DIM       8      8        59    Update Date (CCYYMMDD)             
PMHOUTIM  DIM       8      8        67    Update Time (HH:MM:SS)             
PMHOUUID  DIM       10     10       75    WEB User ID Updated (websecaf)     
PMHOSPAR  DIM       50     50       85    Spare                              
.
.End of Record                      135  
.
