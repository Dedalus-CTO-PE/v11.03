. V11.01.01 02/12/2021 PVL C-0914306 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBEMCFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices OECW-ECM Med Ev Servs  
. *
. * File Type     :   SQL
. *
. * File Name     :   webemcaf.dat
. *
. * Index Values  :   KEY27   KEY51   KEY63                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBEMCA1   IFILE    SQL, FIXED=238, KEY="U1-20,21-23,24-25,26-27"
WEBEMCA2   IFILE    SQL, FIXED=238, KEY="U78-101,1-20,21-23,24-25,26-27"
WEBEMCA3   IFILE    SQL, FIXED=238, KEY="U102-137,1-20,21-23,24-25,26-27"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBEWARID  DIM       20     20       1     Account Reference ID               
WBEWRPTC  DIM       3      3        21    Report counter (right just.)       
WBEWMEVC  DIM       2      2        24    Medical Event counter (right just.)
WBEWSRVC  DIM       2      2        26    Service Counter (right just.)      
WBEWSVID  DIM       4      4        28    Service Id                         
WBEWSVBE  DIM       9      9        32    Service Benefit                    
WBEWSVCH  DIM       9      9        41    Service Charge Amount              
WBEWSVDT  DIM       10     10       50    Date of Service                    
WBEWSVEX  DIM       4      4        60    Service Explanation Code           
WBEWSVIT  DIM       5      5        64    Service Item Number                
WBEWSVSC  DIM       9      9        69    Service Schedule Fee               
WBEWTRID  DIM       24     24       78    Transaction Id                     
WBEWMSID  DIM       36     36       102   Message Id                         
WBEWSPAR  DIM       100    100      138   Spare Variable                     
.
.End of Record                      238  
.
