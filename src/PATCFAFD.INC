. V11.03.01 20/03/2023 PVL C-0911166 Added PTCFOHDT, PTCFOHTM, PTCFOHUI         
. V10.04.01 19/12/2013 AP C-294342 Moved PTCFHDAT,PTCFHFGC out of SPARE
. V10.03.02 17/08/2012 DN  Added PTCFHFGC                       CAR 263828
. V10.03.01 14/05/2012 JT  Added PTCFHDAT                       CAR 255708
. V10.01.01 11/11/2010 EC  Added PTCFCEFR to PTCFRHFT           CAR 233038
. V9.12.002 04/11/2009 JT  Added Occupational Group
. V9.12.001 01/10/2009 JP  Created for                          CAR 174079
. *----------------------------------------------------------------------
. * Include Name  :   PATCFAFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Claim Code Future Actions          
. *
. * File Type     :   SQL
. *
. * File Name     :   patcfaaf.dat
. *
. * Index Values  :   KEY3                                                   
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATCFAA1   IFILE    SQL, FIXED=199, KEY="U1-3"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTCFCLAI  DIM       3      3        1     Claim Code (Cat CL)                
PTCFFACD  DIM       3      3        4     Future Action Code (Cat FA)        
PTCFNDFP  DIM       3      3        7     No days for payment                
PTCFOCGR  DIM       3      3        10    Occupational Group (Cat w0)        
PTCFCEFR  DIM       1      1        13    Contracts Effective From           
.                                         "0" - As at the effective date       
.                                         "1" - For admissions from            
.                                         "2" - For discharges from            
.                                         "3" - Not in use                     
PTCFMCPS  DIM       1      1        14    Make CP and Search Matrix          
.                                         "0" = No "1"=Yes                     
PTCFHINV  DIM       1      1        15    Hold Invoice Until Coding Complete 
.                                         "0" = No "1" = Yes                   
PTCFRHCD  DIM       3      3        16    Reason for Hold (Cat rh)           
PTCFRHFT  DIM       80     80       19    Reason for Hold Free Text          
PTCFHDAT  DIM       8      8        99    Hold Invoices From date            
PTCFHFGC  DIM       6      6        107   Health Fund Group Code             
PTCFOHDT  DIM       8      8        113   On Hold Last Update Date           
PTCFOHTM  DIM       8      8        121   On Hold Last Update Time           
PTCFOHUI  DIM       10     10       129   On Hold Last Update User ID        
PTCFSPAR  DIM       60     60       139   Spare                              
.
.End of Record                      199  
.
