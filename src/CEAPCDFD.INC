. VF.01.001 08/05/2000 SB                                                    
. *----------------------------------------------------------------------
. * Include Name  :   CEAPCDFD.INC
. *
. * Function      :   File Def'n Include for Casemix Expense Analysis           
. *                   DRG Payment Model Cost Table       
. *
. * File Type     :   SQL
. *
. * File Name     :   ceapcdaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
CEAPCDA1   IFILE    SQL, FIXED=132, KEY="U1-4"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CEPCDRGC  DIM       4      4        1     DRG Code                           
CEPCNUR   FORM      10.2   7        5     Nursing                            
CEPCTHE   FORM      10.2   7        12    Theatre                            
CEPCPHA   FORM      10.2   7        19    Pharmacy                           
CEPCICU   FORM      10.2   7        26    Critical Care                      
CEPCALL   FORM      10.2   7        33    Allied Health                      
CEPCMSS   FORM      10.2   7        40    Medical & Surgical Supplies        
CEPCTAX   FORM      10.2   7        47    Taxes                              
CEPCOVH   FORM      10.2   7        54    Overheads                          
CEPCCAT   FORM      10.2   7        61    Catering                           
CEPCDEP   FORM      10.2   7        68    Depreciation                       
CEPCOTH   FORM      10.2   7        75    Other                              
CEPCALOS  FORM      6.2    5        82    Average Length of Stay             
CEPCNWG   FORM      6.4    6        87    National Weight                    
CEPCSPA   DIM       39     39       93    Spare                              
.
.End of Record                      132  
.
