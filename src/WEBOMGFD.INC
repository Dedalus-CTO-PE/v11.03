. V11.02.01 23/02/2022 PVL C-0914306 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBOMGFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices OECW-ECM Header Resp   
. *
. * File Type     :   SQL
. *
. * File Name     :   webomgaf.dat
. *
. * Index Values  :   KEY23   KEY47   KEY59                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBOMGA1   IFILE    SQL, FIXED=857, KEY="U1-20,21-23"
WEBOMGA2   IFILE    SQL, FIXED=857, KEY="U24-47,1-20,21-23"
WEBOMGA3   IFILE    SQL, FIXED=857, KEY="U721-756,1-20,21-23"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBOGARID  DIM       20     20       1     Account Reference ID               
WBOGRPTC  DIM       3      3        21    Report counter (right just.)       
WBOGCTID  DIM       24     24       24    Claim Transaction ID               
WBOGSTAT  DIM       50     50       48    OECW-ECM Status                    
WBOGMECD  DIM       4      4        98    Medicare Status Code               
WBOGMETX  DIM       500    500      102   Medicare Status Text               
WBOGMEMN  DIM       10     10       602   Medicare Status currentMem Mem Num 
WBOGMEMR  DIM       1      1        612   Medicare Status currentMem Mem Ref 
WBOGMEGN  DIM       40     40       613   Medicare Status currentMem Giv Name
WBOGFLID  DIM       8      8        653   Medicare Claim Estim Fund Loc Id   
WBOGLDDT  DIM       8      8        661   Medicare Claim Estim Lodgement Date
WBOGCDTE  DIM       8      8        669   Date Created (ccyymmdd)            
WBOGCTIM  DIM       8      8        677   Time Created (hh:mm:ss)            
WBOGCUID  DIM       10     10       685   Created By                         
WBOGUDTE  DIM       8      8        695   Date Updated (ccyymmdd)            
WBOGUTIM  DIM       8      8        703   Time Updated (hh:mm:ss)            
WBOGUUID  DIM       10     10       711   Updated By                         
WBOGMSID  DIM       36     36       721   Message Id                         
WBOGSPAR  DIM       100    100      757   Spare Variable                     
.
.End of Record                      857  
.
