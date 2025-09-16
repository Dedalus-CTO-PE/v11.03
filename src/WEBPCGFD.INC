. V11.01.01 21/05/2021 PVL C-0906538 Created FD.                                
. *----------------------------------------------------------------------
. * Include Name  :   WEBPCGFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices PCIW Services Tabl     
. *
. * File Type     :   SQL
. *
. * File Name     :   webpcgaf.dat
. *
. * Index Values  :   KEY51   KEY51   KEY63                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBPCGA1   IFILE    SQL, FIXED=767, KEY="U1-22,23-46,47-49,50-51"
WEBPCGA2   IFILE    SQL, FIXED=767, KEY="U23-46,1-22,47-49,50-51"
WEBPCGA3   IFILE    SQL, FIXED=767, KEY="U631-666,1-22,47-49,50-51"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBPGCLID  DIM       22     22       1     Claim ID                           
WBPGTRID  DIM       24     24       23    Transaction ID                     
WBPGCNTR  DIM       3      3        47    Medical Event Counter              
WBPGSCNT  DIM       2      2        50    Service Counter                    
WBPGSVID  DIM       4      4        52    Service ID                         
WBPGASCD  DIM       50     50       56    Assessment Code                    
WBPGBENP  DIM       7      7        106   Benefit Paid                       
WBPGCHGA  DIM       7      7        113   Charge Amount                      
WBPGITMN  DIM       5      5        120   Item Number                        
WBPGNMPT  DIM       2      2        125   Number of Patients Seen            
WBPGCODE  DIM       4      4        127   Error Code                         
WBPGTEXT  DIM       500    500      131   Error Text                         
WBPGMSID  DIM       36     36       631   Message ID                         
WBPGSPAR  DIM       100    100      667   Spare                              
.
.End of Record                      767  
.
