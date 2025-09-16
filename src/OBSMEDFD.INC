. V10.06.01 18/03/2015 AP C-306161 Extended Dosage/Instructions Added SCDT/DRBR 
. V10.00.01 07/04/2010 JP  Added Reason for medication
. *----------------------------------------------------------------------
. * Include Name  :   OBSMEDFD.INC
. *
. * Function      :   File Def'n Include for Clinical Observations              
. *                   Medications and Instructions       
. *
. * File Type     :   SQL
. *
. * File Name     :   obsmedaf.dat
. *
. * Index Values  :   KEY11                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OBSMEDA1   IFILE    SQL, FIXED=630, KEY="U1-8,9-11"                             
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OBMEVISN  DIM       8      8        1     Visit Number                       
OBMECNTR  DIM       3      3        9     Counter                            
OBMEDRUG  DIM       70     70       12    Drug name                          
OBMEDOSF  DIM       3      3        82    Dose Form (Cat DU)                 
OBMEDOSE  DIM       40     40       85    Dosage                             
OBMEFREQ  DIM       3      3        125   Frequency (Cat DW)                 
OBMEDURA  DIM       20     20       128   Duration                           
OBMEQUAN  DIM       6      6        148   Quantity                           
OBMEINST  DIM       200    200      154   Instructions                       
OBMEMCOD  DIM       9      9        354   Medication Code                    
OBMEREAS  DIM       3      3        363   Reason for medication (Cat MB)     
OBMESTAT  DIM       3      3        366   Medication Status (Cat MC)         
OBMECHGD  DIM       80     80       369   Change Description                 
OBMECHGR  DIM       3      3        449   Change Reason (Cat MN)             
OBMENOTE  DIM       80     80       452   Medication Note                    
OBMESCDT  DIM       8      8        532   Script Date                        
OBMEDRBR  DIM       40     40       540   Drug Brand                         
OBMESPAR  DIM       50     50       580   Spare                              
.
.End of Record                      630  
.
