. V10.03.01 11/01/2012 JP C-253987 Created                                      
. *----------------------------------------------------------------------
. * Include Name  :   PMSWAEFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   WA Extract Ranges                  
. *
. * File Type     :   SQL
. *
. * File Name     :   pmswaeaf.dat
. *
. * Index Values  :   KEY27                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSWAEA1   IFILE    SQL, FIXED=154, KEY="U1-3,4-11,12-19,20-27"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMWAHOSP  DIM       3      3        1     Hospital                           
PMWAPROG  DIM       8      8        4     Program                            
PMWASDAT  DIM       8      8        12    Start Date                         
PMWAEDAT  DIM       8      8        20    End Date                           
PMWACDAT  DIM       8      8        28    Date Created (CCYYMMDD)            
PMWACTIM  DIM       8      8        36    Time Created (hh:mm:ss)            
PMWAWEBC  DIM       10     10       44    Web User Created (websecaf)        
PMWASPAR  DIM       100    100      54    Spare                              
.
.End of Record                      154  
.
