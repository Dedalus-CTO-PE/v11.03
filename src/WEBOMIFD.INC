. V11.02.01 23/02/2022 PVL C-0914306 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBOMIFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices OECW ECM Services      
. *
. * File Type     :   SQL
. *
. * File Name     :   webomiaf.dat
. *
. * Index Values  :   KEY29   KEY53   KEY65                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBOMIA1   IFILE    SQL, FIXED=238, KEY="U1-20,21-23,24-25,26-29"
WEBOMIA2   IFILE    SQL, FIXED=238, KEY="U78-101,1-20,21-23,24-25,26-29"
WEBOMIA3   IFILE    SQL, FIXED=238, KEY="U102-137,1-20,21-23,24-25,26-29"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBOIARID  DIM       20     20       1     Account Reference ID               
WBOIRPTC  DIM       3      3        21    Report counter (right just.)       
WBOIMECT  DIM       2      2        24    Medical Event Counter (right just.)
WBOISVCT  DIM       4      4        26    Service Counter (right just.)      
WBOISVID  DIM       4      4        30    Service ID                         
WBOISVBE  DIM       9      9        34    Service Benefit                    
WBOISVCH  DIM       9      9        43    Service Charge Amount              
WBOISVDS  DIM       8      8        52    Service Date of Service            
WBOISVEC  DIM       4      4        60    Service Explanation Code           
WBOISVIT  DIM       5      5        64    Service Item Number                
WBOISVSC  DIM       9      9        69    Service Schedule Fee               
WBOICTID  DIM       24     24       78    Claim Transaction ID               
WBOIMSID  DIM       36     36       102   Message ID                         
WBOISPAR  DIM       100    100      138   Spare Variable                     
.
.End of Record                      238  
.
