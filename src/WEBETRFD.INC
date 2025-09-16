. V11.01.02 05/10/2021 PVL C-0898361 Added date range types for WBETTYPE
. V11.01.01 04/10/2021 PVL C-0898361 Added comments/types for WBETTYPE
. V11.00.01 02/12/2020 PVL C-0898361 Added WBETASSN to WBETRTTY                 
. V11.00.01 24/11/2020 PVL C-0898361 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBETRFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices Claim Transaction Req  
. *
. * File Type     :   SQL
. *
. * File Name     :   webetraf.dat
. *
. * Index Values  :   KEY51   KEY51   KEY51   KEY51   KEY75   KEY87   KEY87  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBETRA1   IFILE    SQL, FIXED=598, KEY="U1-1,2-3,76-83,28-35,36-43,4-27"
WEBETRA2   IFILE    SQL, FIXED=598, KEY="U28-35,36-43,1-1,2-3,76-83,4-27"
WEBETRA3   IFILE    SQL, FIXED=598, KEY="U1-1,28-35,36-43,2-3,76-83,4-27"
WEBETRA4   IFILE    SQL, FIXED=598, KEY="U4-27,1-1,2-3,76-83,28-35,36-43"
WEBETRA5   IFILE    SQL, FIXED=598, KEY="U213-236,1-1,2-3,76-83,28-35,36-43,4-27"
WEBETRA6   IFILE    SQL, FIXED=598, KEY="U177-212,1-1,2-3,76-83,28-35,36-43,4-27"
WEBETRA7   IFILE    SQL, FIXED=598, KEY="U237-272,1-1,2-3,76-83,28-35,36-43,4-27"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBETSTAT  DIM       1      1        1     Status                             
.                                         ' ' = Waiting to be processed        
.                                         '0' = Processing                     
.                                         '1' = Processed                      
.                                         'E' = Processing Error               
WBETTYPE  DIM       2      2        2     Type of Request (right justified)  
.                                         0 = Not Applicable                   
.                                         1 = IHCW Status Request               
.                                         2 = GPRW Request          
.                                         3 = IHCW Report Request               
.                                         4 = ERAW Status Request               
.                                         5 = ERAW Report Request               
.                                         6 = Location/Certificate Request     
.                                         7 = OEC Status Request               
.                                         8 = OEC Report Request               
.                                         9 = IMCW Status Request               
.                                         10 = IMCW Report Request              
.                                         11 = BBSW BPRW Report Request
.                                         12 = BBSW BPYW Report Request
.                                         13 = IMCW Multiple Status Requests
.                                         14 = IMCW Multiple Report Requests
.                                         15 = IHCW Multiple Status Requests
.                                         16 = IHCW Multiple Report Requests
.                                         17 = ERAW Multiple Status Requests
.                                         18 = IMCW Date Range Status Requests
.                                         19 = IHCW Multiple Status Requests
WBETTRID  DIM       24     24       4     Claim Transaction Id               
.                                         (blank for ERA Status Request)       
WBETCDTE  DIM       8      8        28    Date Created (ccyymmdd)            
WBETCTIM  DIM       8      8        36    Time Created (hh:mm:ss)            
WBETBATN  DIM       8      8        44    Batch Number                       
.                                         (blank for ERA Request)              
WBETINVN  DIM       8      8        52    Invoice No                         
.                                         (blank for ERA Request)              
WBETUDTE  DIM       8      8        60    Date Updated (ccyymmdd)            
WBETUTIM  DIM       8      8        68    Time Updated (hh:mm:ss)            
WBETLOCN  DIM       8      8        76    Location Id                        
WBETSNID  DIM       60     60       84    Sender Id (email)                  
WBETFDTM  DIM       14     14       144   From DateTime (ccyymmddhhmmss)     
.                                         (ERA Status Request Only)            
WBETTDTM  DIM       14     14       158   To DateTime (ccyymmddhhmmss)       
.                                         (ERA Status Request Only)            
WBETEROR  DIM       4      4        172   Hub Error Code                     
WBETMODL  DIM       1      1        176   webPAS Module                      
.                                         1 = Emergency                        
.                                         2 = Private Practice                 
.                                         3 = Outpatient                       
WBETMSID  DIM       36     36       177   Claim Message Id                   
WBETSTRD  DIM       24     24       213   STSW Transaction Id                
WBETSMID  DIM       36     36       237   STSW Message Id                    
WBETASSN  DIM       40     40       273   Associate Name                     
WBETLODT  DIM       25     25       313   Lodgement Date / Time              
WBETPSTA  DIM       30     30       338   Process Status                     
WBETREFR  DIM       10     10       368   Reference                          
WBETREPS  DIM       20     20       378   Report Status                      
WBETRTTY  DIM       100    100      398   Request Transmission Type          
WBETSPAR  DIM       100    100      498   Spare Variable                     
.
.End of Record                      598  
.
