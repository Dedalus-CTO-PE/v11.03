. V9.07.001 03/11/2006 JT                                                    
. *----------------------------------------------------------------------
. * Include Name  :   PMSFMSFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   System Based Interface for Billing 
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsfmsaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSFMSA1   IFILE    SQL, FIXED=184, KEY="U1-3,4-4,5-5,6-18"                     
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMFMHOSP  DIM       3      3        1     Hospital ID (pathspaf)             
PMFMSYST  DIM       1      1        4     System                             
.                                          1 - Emergency
.                                          2 - Outpatient
.                                          3 - Inpatient
PMFMRSUB  DIM       1      1        5     Report Sub Section                 
.                                          1 - Accommodation
.                                          3 - Misc Items
.                                          5 - Journals
PMFMCODE  DIM       13     13       6     Report Sub Section Code            
.                                         All Sub Sections
.                                           Spaces = Default for sub section
.                                         Sub Section 1
.                                         Accommodation for Non-casemix
.                                         -----------------------------
.                                         AXXX        , XXX  = Adm Type
.                                          or
.                                         AXXXYYY     , XXX  = Ward
.                                                     , YYY  = Claim Type
.                                          or
.                                         AXXXYYY     , XXX  = Ward
.                                                     , YYY  = Admission Type
.
.                                         Accommodation for Casemix
.                                         -----------------------------
.                                         CXYYY   - Lumpsum
.                                                       X    = 1 -Daycase
.                                                              0 -MSO/Overnight
.                                                       YYY  = Adm Type
.                                         DXXX    - Daily Charge
.                                                       XXX  = Ward
.
.                                         G           ,      = Govt Subs
.
.                                         Sub Section 3
.                                         Miscellaneous for Non-casemix
.                                         -----------------------------
.                                         MXXXYYYY    , XXX  = Misc Grp
.                                                     , YYYY = Item Code
.
.                                         Miscellaneous for Casemix
.                                         -----------------------------
.                                         TXYYYZZZ    , X    = 1 -Daycase
.                                                              0 -MSO/Overnight
.                                                     , YYY  = Misc Grp
.                                                     , ZZZ  = Item Code
.
.                                         Sub Section 5
.                                         XX          , XX   = Journal Code
.                                         or
.
.                                         YYYXX       , YYY  = Claim Code
.                                                     , XX   = Journal Code
.
.                                         Fees Invoiced
PMFMFDIS  DIM       5      5        19    Dissection                         
PMFMFRES  DIM       4      4        24    Responsibility                     
PMFMFLED  DIM       2      2        28    Ledger                             
PMFMFCRD  DIM       12     12       30    Credit Account/Income Account      
PMFMFDEB  DIM       12     12       42    Debit Account/Debtors Control Acc. 
PMFMGSTA  DIM       12     12       54    GST Control Account                
.
.                                         Fees to be Invoiced
PMFMTDIS  DIM       5      5        66    Dissection                         
PMFMTRES  DIM       4      4        71    Responsibility                     
PMFMTLED  DIM       2      2        75    Ledger                             
PMFMTCRD  DIM       12     12       77    Credit Account                     
PMFMTDEB  DIM       12     12       89    Debit Account                      
PMFMBASC  DIM       3      3        101   Bas Code                           
PMFMSPAR  DIM       80     80       104   Spare Variable                     
.
.End of Record                      184  
.
