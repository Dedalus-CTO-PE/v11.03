. V11.00.01 11/01/2021 PVL C-0898361 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   WEBERHFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices ERAW Payment Header Tab
. *
. * File Type     :   SQL
. *
. * File Name     :   weberhaf.dat
. *
. * Index Values  :   KEY61   KEY69   KEY70   KEY61                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBERHA1   IFILE    SQL, FIXED=383, KEY="U1-3,4-27,28-57,58-61"
WEBERHA2   IFILE    SQL, FIXED=383, KEY="U1-3,66-73,4-27,28-57,58-61"
WEBERHA3   IFILE    SQL, FIXED=383, KEY="U1-3,206-206,66-73,4-27,28-57,58-61"
WEBERHA4   IFILE    SQL, FIXED=383, KEY="U4-27,28-57,58-61,1-3"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBEIHOSP  DIM       3      3        1     Hospital ID                        
WBEIFTID  DIM       24     24       4     Fund Transaction ID                
WBEIRADV  DIM       30     30       28    Remittance Advice ID               
WBEIPNUM  DIM       4      4        58    Part Number                        
WBEIPTOT  DIM       4      4        62    Part Total                         
WBEIDATE  DIM       8      8        66    Run Date                           
WBEINAME  DIM       40     40       74    Payer Name                         
WBEIPLID  DIM       8      8        114   Payee Location ID                  
WBEIBNUM  DIM       9      9        122   Bank Account Number                
WBEIBNAM  DIM       30     30       131   Bank Account Name                  
WBEIBBSB  DIM       6      6        161   Bank BSB Code                      
WBEIPREF  DIM       30     30       167   Payment Reference                  
WBEIDAMT  DIM       9      9        197   Deposit Amount                     
WBEISTAT  DIM       1      1        206   webPAS Status                      
.                                         0 = Received                         
.                                         1 = Partial                          
.                                         2 = Released                         
.                                         3 = Processing                       
WBEIMSID  DIM       36     36       207   Message ID                         
WBEIRSTA  DIM       40     40       243   Report Status                      
WBEISPAR  DIM       100    100      283   Spare Variable                     
.
.End of Record                      383  
.
