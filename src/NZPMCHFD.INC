. V10.04.01 03/01/2014 PA C-294393 Moved NZMCACFL & NZMCEEDT out of Spare       
. V10.03.01 09/03/2012 JT  C-259879 Added NZMCACFL and NZMCEEDT on spare        
. V9.08.003 14/02/2007 DS  Added index 3                                        
. V9.08.004 16/02/2007 JT  Changed second index                                 
. V9.08.001 09/11/2006 EC  Created FD CAR 120007                                
. *----------------------------------------------------------------------
. * Include Name  :   NZPMCHFD.INC
. *
. * Function      :   File Def'n Include for New Zealand Private                
. *                   NZ Private Misc.Charge File        
. *
. * File Type     :   SQL
. *
. * File Name     :   nzpmchaf.dat
. *
. * Index Values  :   KEY37   KEY40   KEY37                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
NZPMCHA1  IFILE    SQL, FIXED=332, KEY="U1-3,4-6,7-12,13-20,21-29,30-37"       
NZPMCHA2  IFILE    SQL, FIXED=332, KEY="U130-132,1-3,4-6,7-12,13-20,30-37,21-29"
NZPMCHA3  IFILE    SQL, FIXED=332, KEY="U21-29,4-6,1-3,7-12,13-20,30-37"       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
NZMCHOSP  DIM       3      3        1     Hospital Code (pathspaf)           
NZMCCLMC  DIM       3      3        4     Claim Code (Cat CL)                
NZMCCNTR  DIM       6      6        7     Contract (Health Fund)             
NZMCFTAB  DIM       8      8        13    Fund Table                         
NZMCMCHG  DIM       9      9        21    Charge Code                        
NZMCEFDT  DIM       8      8        30    Effective Date                     
NZMCDESC  DIM       90     90       38    Description                        
NZMCCHGT  FORM      1      2        128   Charge Type                        
.                                         1 = Exploding Misc Item              
.                                         2 = Theatre Fee                      
.                                         3 = Misc Item                        
NZMCCGRP  DIM       3      3        130   Charge Group (Cat FI)              
NZMCPATP  FORM      12.2   8        133   Patient Portion (NZ Price)         
NZMCREBP  FORM      12.2   8        141   Rebate Portion                     
NZMCINDC  FORM      1      2        149   Indicator for changing description 
NZMCGSTA  FORM      1      2        151   GST Applicable                     
.                                         0 = GST Free                         
.                                         1 = GST Payable                      
.                                         2 = Either                           
NZMCGSTC  DIM       6      6        153   GST payable code (GST rates table) 
NZMCEDIE  DIM       10     10       159   EDI Equivalent                     
NZMCKPRI  DIM       1      1        169   Keyin Price 1=Yes otherwise no     
NZMCSHWD  DIM       1      1        170   Show detail on invoice             
.                                         0=No 1=Yes                           
NZMCCDAT  DIM       8      8        171   Date record created (ccyymmdd)     
NZMCCTIM  DIM       8      8        179   Time record created (hh:mm:ss)     
NZMCCUID  DIM       10     10       187   WEB user id created (websecaf)     
NZMCUDAT  DIM       8      8        197   Date record updated (ccyymmdd)     
NZMCUTIM  DIM       8      8        205   Time record updated (hh:mm:ss)     
NZMCUUID  DIM       10     10       213   Web user id updated (websecaf)     
NZMCACFL  DIM       1      1        223   Active/Inactive Flag               
.                                         Blank = Active, 1 = Inactive         
NZMCEEDT  DIM       8      8        224   Effective End Date (CCYYMMDD)      
NZMCSPAR  DIM       100    100      232   Spare                              
.
.End of Record                      332  
.
