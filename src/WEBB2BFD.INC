. V11.00.01 22/06/2020 PVL C-0892408 Created Table                              
. *----------------------------------------------------------------------
. * Include Name  :   WEBB2BFD.INC
. *
. * Function      :   File Def'n Include for Web System Table                   
. *                   WebServices PRODA B2B Device Table 
. *
. * File Type     :   SQL
. *
. * File Name     :   webb2baf.dat
. *
. * Index Values  :   KEY71   KEY71   KEY71                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WEBB2BA1   IFILE    SQL, FIXED=2412, KEY="U1-50,51-60,61-68,69-71"
WEBB2BA2   IFILE    SQL, FIXED=2412, KEY="U61-68,1-50,51-60,69-71"
WEBB2BA3   IFILE    SQL, FIXED=2412, KEY="U69-71,1-50,51-60,61-68"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WBB2DNAM  DIM       50     50       1     B2B Device Name                    
WBB2ORGR  DIM       10     10       51    PRODA Org ID / RA Number           
WBB2LOCN  DIM       8      8        61    Location ID / Client ID            
WBB2HOSP  DIM       3      3        69    Hospital ID                        
WBB2ORGN  DIM       200    200      72    Organisation Name                  
WBB2DDES  DIM       100    100      272   B2B Device Description             
WBB2DSTA  DIM       30     30       372   B2B Device Status                  
WBB2DGDT  DIM       19     19       402   B2B Device Code Generation Date    
WBB2DEDT  DIM       19     19       421   B2B Device Expiry Date             
WBB2ADKS  DIM       30     30       440   Current ActivateDevice keystatus   
WBB2ADKE  DIM       19     19       470   Current ActivateDevice keyExpiry   
WBB2ADDE  DIM       19     19       489   Current ActivateDevice deviceExpiry
WBB2GTTK  DIM       1500   1500     508   Current GetAccessToken access_token
WBB2GTDE  DIM       19     19       2008  Current GetAccessToken device_expir
WBB2GTKE  DIM       19     19       2027  Current GetAccessToken key_expiry  
WBB2GTBR  DIM       10     10       2046  Current GetAccessToken token_type  
WBB2GTEX  DIM       4      4        2056  Current GetAccessToken expires_in  
WBB2DPTH  DIM       200    200      2060  B2B Device directory path          
WBB2CUID  DIM       10     10       2260  Created By User ID                 
WBB2CDAT  DIM       8      8        2270  Created By Date                    
WBB2CTIM  DIM       8      8        2278  Created By Time                    
WBB2UUID  DIM       10     10       2286  Updated By User ID                 
WBB2UDAT  DIM       8      8        2296  Updated By Date                    
WBB2UTIM  DIM       8      8        2304  Updated By Time                    
WBB2SPAR  DIM       100    100      2312  Spare Variable                     
.
.End of Record                      2412 
.
