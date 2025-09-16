. V10.13.01 25/07/2018 TNG C-0848506 Extended PRFLSDFR/PRFLSDTO from 6 to 10 cha
. V9.03.001 10/02/2004 LV  Changed Debtor number to be DIM 8                    
. V9.02 .001 16/10/2001 dc  created                                             
. V9.02 .002 19/11/2001 dc  additions                                           
. *----------------------------------------------------------------------
. * Include Name  :   PRIFLSFD.INC
. *
. * Function      :   File Def'n Include for Private Practice                   
. *                   Financial Letter Selection Criteria
. *
. * File Type     :   SQL
. *
. * File Name     :   priflsaf.dat
. *
. * Index Values  :   KEY4                                                   
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PRIFLSA1   IFILE    SQL, FIXED=242, KEY="U1-4"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRFLSEID  DIM       4      4        1     Selection ID.                      
PRFLSEDC  DIM       35     35       5     Selection Description              
PRFLDBFR  DIM       8      8        40    UR or Debtor Number From           
PRFLDBTO  DIM       8      8        48    UR or Debtor Number To             
PRFLSNFR  DIM       20     20       56    Surname From                       
PRFLSNTO  DIM       20     20       76    Surname To                         
PRFLVDFR  DIM       8      8        96    Visit Date From (ccyymmdd)         
PRFLVDTO  DIM       8      8        104   Visit Date To (ccyymmdd)           
PRFLPPFR  DIM       6      6        112   Practice From                      
PRFLPPTO  DIM       6      6        118   Practice To                        
PRFLSDFR  DIM       10     10       124   Service Doctor From                
PRFLSDTO  DIM       10     10       134   Service Doctor To                  
PRFLCCFR  DIM       3      3        144   Claim Code From (category CL)      
PRFLCCTO  DIM       3      3        147   Claim Code To (category CL)        
PRFLLLFR  DIM       3      3        150   Last Letter Sent From              
PRFLLLTO  DIM       3      3        153   Last Letter Sent To                
PRFLDLFR  DIM       8      8        156   Date Last Letter Sent From         
PRFLDLTO  DIM       8      8        164   Date Last Letter Sent To           
PRFLFCFR  DIM       3      3        172   Future Action Code From (cat. FA)  
PRFLFCTO  DIM       3      3        175   Future Action Code To (category FA)
PRFLFDFR  DIM       8      8        178   Future Action Date From (ccyymmdd) 
PRFLFDTO  DIM       8      8        186   Future Action Date To (ccyymmdd)   
PRFLMBAL  FORM      7.2    6        194   Minimum Balance Owing for Report   
PRFLIDFR  DIM       8      8        200   Invoice Date From (ccyymmdd)       
PRFLIDTO  DIM       8      8        208   Invoice Date To (ccyymmdd)         
PRFLLTYP  DIM       3      3        216   Letter Type                        
PRFLSCAN  DIM       1      1        219   Scan Flag                          
PRFLSPAR  DIM       22     22       220   Spare                              
.
.End of Record                      242  
.
