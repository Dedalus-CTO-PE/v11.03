. V10.05.01 24/07/2014 PA C-298078 NPF Referral Letter Changes Reqd for Triage O
. V9.08 .001 16/03/2007 JH  Created                                             
. *----------------------------------------------------------------------
. * Include Name  :   ALLDLLFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Default Letters and Labels         
. *
. * File Type     :   SQL
. *
. * File Name     :   alldllaf.dat
. *
. * Index Values  :   KEY3                                                   
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLDLLA1   IFILE    SQL, FIXED=94, KEY="U1-3"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALDLDEPT  DIM       3      3        1     Department                         
ALDLRACP  DIM       3      3        4     New referral ack to patient        
ALDLRACR  DIM       3      3        7     New referral ack to referrer       
ALDLURAP  DIM       3      3        10    Update Referral Ack letter patient 
ALDLURAR  DIM       3      3        13    Update Referral Ack letter referrer
ALDLRPAT  DIM       3      3        16    Referral rejection to patient      
ALDLRREF  DIM       3      3        19    Referral rejection to referrer     
ALDLPLAB  DIM       2      2        22    AH Patient Label                   
ALDLRACG  DIM       3      3        24    New Refrl ack to reg GP if not Refr
ALDLURAG  DIM       3      3        27    Upd Refrl ack to Reg GP if not Refr
ALDLRRJG  DIM       3      3        30    Refr Rej to Reg GP if not Referrer 
ALDLSPAR  DIM       61     61       33    Spare                              
.
.End of Record                      94   
.
