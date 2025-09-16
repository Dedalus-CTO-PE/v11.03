. V10.12.01 04/04/2018 TNG C-0841644 FD Created                                 
. *----------------------------------------------------------------------
. * Include Name  :   PMSIGRFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Impairment Groups                  
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsigraf.dat
. *
. * Index Values  :   KEY3                                                   
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSIGRA1   IFILE    SQL, FIXED=192, KEY="U1-3"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMIGCODE  DIM       3      3        1     Impairment Group Code              
PMIGDESC  DIM       80     80       4     Impairment Group Description       
PMIGEATI  FORM      5.3    6        84    FIM Eating                         
PMIGROOM  FORM      5.3    6        90    FIM Grooming                       
PMIGBATH  FORM      5.3    6        96    FIM Bathing                        
PMIGUPBD  FORM      5.3    6        102   FIM Dressing Upper Body            
PMIGLWBD  FORM      5.3    6        108   FIM Dressing Lower Body            
PMIGTOIL  FORM      5.3    6        114   FIM Toilet                         
PMIGBLAD  FORM      5.3    6        120   FIM Bladder                        
PMIGBOWE  FORM      5.3    6        126   FIM Bowel                          
PMIGTBED  FORM      5.3    6        132   FIM Transfer Bed/Chair             
PMIGTTOI  FORM      5.3    6        138   FIM Transfer Toilet                
PMIGTTUB  FORM      5.3    6        144   FIM Transfer Tub/Shower            
PMIGWALK  FORM      5.3    6        150   FIM Walk/Locomotion                
PMIGSTAI  FORM      5.3    6        156   FIM Stairs                         
PMIGSPAR  DIM       30     30       162   Spare Variable                     
.
.End of Record                      192  
.
