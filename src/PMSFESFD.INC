. V11.02.01 27/06/2022 JT C-0900069 Added record type 9 for Discount (Fees Est.)
. V10.15.01 15/11/2019 JT TSK 0826834 - Added record type 8 for SJOG IFC        
. V10.11.01 20/12/2017 JT C-0844301 Added Consumables Record type               
. V10.06.01 30/04/2015 JT C-314005 Changes to Healthscope IFC layout desc.      
. V10.05.01 25/08/2014 JT C-253233 Added Healthscope values 1-5 to PMFSRECT     
. V10.03.01 19/04/2012 JT  Added Record type 7 for Other Fees(LanDesk 500543)   
. V9.10.001 08/07/2008 EC  Added PMFSGSTP and PMFSGSTC  CAR 160213              
. V9.03.003 13/11/2007 JT  Added Quantity/Bedtype/GST Amount & 2nd index        
. V9.03.001 06/04/2004 LV  Added 9.03                                           
. V9.03.002 06/04/2004 LV  Fixed file                                           
. *----------------------------------------------------------------------
. * Include Name  :   PMSFESFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Fees Estimation Table              
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsfesaf.dat
. *
. * Index Values  :   KEY17   KEY18                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSFESA1   IFILE    SQL, FIXED=143, KEY="U1-12,13-17"
PMSFESA2   IFILE    SQL, FIXED=143, KEY="U1-12,26-26,13-17"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMFSQUOT  DIM       12     12       1     Quote Number (Fees Estimate)       
.                                         or Adm.No with leading 9s for IFC    
DPMFSUNI  DIM       5      5        13    Unique Counter                     
PMFSURNO  DIM       8      8        18    UR Number                          
PMFSRECT  DIM       1      1        26    Record Type                        
.                                             <Fees Estimate layout>           
.                                         1 - Lumpsum charge (Accomm)          
.                                         2 - Daily charge(Accomm)             
.                                         3 - Theatre Fees                     
.                                         4 - Additional charge (Accomm)       
.                                         5 - Overnight Costs                  
.                                         6 - Mis. Charge Costs                
.                                         7 - Other Fees                       
.                                         8 - Consumables                      
.                                         9 - Discount                         
.                                             <IFC layout>                     
.                                         0 - Daycase rate(shared room perdiem)
.                                             (for Overnight patient only)     
.                                         1 - Shared room rate                 
.                                         2 - Privare room rate                
.                                         3 - ICU/SCN room                     
.                                         4 - Other bed type                   
.                                         5 - Theatre/Procedure                
.                                         6 - IFC Other/Consumables            
.                                         7 - Prosthesis/Gap                   
.                                         8 - Mis.Charge                       
.                                         9 - Discount (HEA-Not implemented yet)
PMFSLUMH  FORM      12.2   8        27    Lumpsum Hospital Fee               
PMFSLUMF  FORM      12.2   8        35    Lumpsum Fund Rebate                
PMFSDAFR  FORM      5      4        43    Day from/LOS                       
PMFSDAYT  FORM      5      4        47    Day to                             
PMFSDAYH  FORM      12.2   8        51    Daily Charge Hospital Fee          
PMFSDAHF  FORM      12.2   8        59    Daily Charge Fund Rebate           
PMFSTHIT  DIM       9      9        67    Theatre/Misc.Charge Fee Item/      
.                                         Other Fee                            
PMFSTHEH  FORM      12.2   8        76    Theatre/Misc.Charge Fee Hosp/      
.                                         Other Fee                            
PMFSTHEF  FORM      12.2   8        84    Theatre/Misc.Charge Fee Fund Rebate
PMFSQUAN  FORM      3      3        92    Quantity (No of Items/Misc.Charges)
.                                           <Healthscope layout> = LOS (ASTAY) 
PMFSBTYP  DIM       3      3        95    Bed Type (Cat BT)                  
PMFSGSTA  FORM      12.2   8        98    GST Amount                         
PMFSGSTP  DIM       1      1        106   GST Payable (Record Type 3 & 6)    
PMFSGSTC  DIM       6      6        107   GST Payable Code (Record Type 3&6) 
PMFSSPAR  DIM       30     30       113   Spare                              
.
.End of Record                      143  
.
.Redefine Key Variables
.----------------------
PMFSUNIQ  FORM      5    
PMFSRTYP  FORM      1
