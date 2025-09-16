. V11.01.01 17/01/2022 ABI C-0907384 Updated PTBECPAY desc                      
. V11.00.01 12/10/2020 TNG C-0888079 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   PATBDEFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Billing Default Details            
. *
. * File Type     :   SQL
. *
. * File Name     :   patbdeaf.dat
. *
. * Index Values  :   KEY58                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATBDEA1   IFILE    SQL, FIXED=250, KEY="U1-3,50-52,53-58,59-66,20-49,4-11"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTBEHOSP  DIM       3      3        1     Hospital (pathspaf)                
PTBESDTE  DIM       8      8        4     Effective Start Date (CCYYMMDD)    
PTBEEDTE  DIM       8      8        12    Effective End Date (CCYYMMDD)      
PTBEVSID  DIM       30     30       20    Billing Reason for Admission       
.                                         Value Set ID (pmsvscaf.pmvccode where
.                                         pmvcsid=BRA)                         
PTBECLMC  DIM       3      3        50    Claim Type (Cat CL)                
PTBEHFND  DIM       6      6        53    Health Fund (patfn1af.hcode)       
PTBEHFTB  DIM       8      8        59    Health Fund Level (patfn1af.hftabl)
PTBEILOS  DIM       3      3        67    Intended Length of Stay (Cat VI)   
PTBETLOS  FORM      3      3        70    Target Length of Stay (TLOS)       
PTBECSMX  DIM       9      9        73    Casemix Code (patcmcaf.ptcacode)   
PTBECPAY  DIM       1      1        82    Casemix Payment (Blank/1=Yes/0=No) 
PTBEDRGC  DIM       4      4        83    Provisional DRG (patdgwaf.ptdwdrgc)
PTBEDRGV  DIM       3      3        87    Provisional DRG Version            
.                                         (patdgwaf.ptdwdrgv)                  
PTBEADMN  DIM       3      3        90    Admission Type (Cat A )            
PTBECARE  DIM       3      3        93    Care Type (Cat CC)                 
PTBEPRGM  DIM       8      8        96    Program Code (pmsprgaf.pmpgcode)   
PTBEPILL  DIM       3      3        104   OEC Presenting Illness (Cat il)    
PTBEMBSI  DIM       9      9        107   OEC MBS Item (patitemn.itemno)     
PTBEALER  DIM       3      3        116   Billing Default Alerts (Cat az)    
PTBECDAT  DIM       8      8        119   Date record created (CCYYMMDD)     
PTBECTIM  DIM       8      8        127   Time record created (hh:mm:ss)     
PTBECUID  DIM       10     10       135   Record created by (websecaf)       
PTBEUDAT  DIM       8      8        145   Date record updated (CCYYMMDD)     
PTBEUTIM  DIM       8      8        153   Time record updated (hh:mm:ss)     
PTBEUUID  DIM       10     10       161   Record updated by (websecaf)       
PTBESPAR  DIM       79     79       171   Spare variable                     
.
.End of Record                      250  
.
