. V11.03.01 23/05/2023 JT C-0923703 Added Covid19 Adjustment type 028
. V11.00.01 14/07/2020 JT C-0892319 Added Adjustment type 026 and 027
. V10.14.01 27/03/2019 JT C-0857392 Created ABF Adjustment table                
. *----------------------------------------------------------------------
. * Include Name  :   PMSADJFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   ABF Adjustment Table               
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsadjaf.dat
. *
. * Index Values  :   KEY9                                                   
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSADJA1   IFILE    SQL, FIXED=120, KEY="U1-6,7-9"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMAJCNTR  DIM       6      6        1     Contract ID                        
PMAJADJT  DIM       3      3        7     Type of Adjustment                 
.
.         001 - Specialist Psychiatric Age<=17 w MDC=19 or 20 Adjustment %
.         002 - Specialist Psychiatric Age<=17 no MDC=19 or 20 Adjustment %
.         003 - Specialist Psychiatric Age>17 no MDC=19 or 20 Adjustment %
.         004 - Patient Remoteness Area Adjustment - Outer % (Admitted) - R2
.         005 - Patient Remoteness Area Adjustment - Remote % (Admitted Acute or
.               Sub Acute) - RA3
.         006 - Patient Remoteness Area Adjustment - Remote % (ED Service) - RA3
.         007 - Patient Remoteness Area Adjustment - Very Remote % (Admitted 
.               Acute or Sub Acute) - RA4                          
.         008 - Patient Remoteness Area Adjustment - Very Remote % (ED Service)-RA4
.         009 - Indigenous Adjustment %        
.         010 - Radiotherapy Adjustment %      
.         011 - Dialysis Adjustment %          
.         012 - ICU Adjustment                 
.         013 - Private Patient Accommodation Adjustment Per Diem Price Weight
.               Same Day                                 
.         014 - Private Patient Accommodation Adjustment Per Diem Price Weight
.               Overnight                                
.         015 - Private Patient Service  Adjustment % Admitted Sub-Acute
.               and Non-Acute-Palliative Care            
.         016 - Private Patient Service  Adjustment % Admitted Sub-Acute
.               and Non-Acute - Rehabilitation            
.         017 - Private Patient Service  Adjustment % Admitted Sub-Acute
.               and Non-Acute - Psychogeriatric Care               
.         018 - Private Patient Service  Adjustment % Admitted Sub-Acute
.               and Non-Acute-GEM                        
.         019 - Private Patient Service  % Admitted Sub-Acute and 
.               Non-Acute-Maintenance                              
.         020 - Multidisciplinary Clinic Adjustment %
.         021 - Emergency Care Age Adjustment % 65-79 years old
.         022 - Emergency Care Age Adjustment % Over 79 years old
.         023 - Hospital Remoteness Area Adjustment - Remote 
.               (Admitted Acute or Sub Acute or Mental Health Event) - RA3
.         024 - Hospital Remoteness Area Adjustment - Very Remote
.               (Admitted Acute or Sub Acute or Mental Health Event) - RA4
.         025 - National Efficient Price (NEP) A Cat CL Ind 22 = blank or A
.         026 - National Efficient Price (NEP) B Cat CL Ind 22 = B
.         027 - National Efficient Price (NEP) C Cat CL Ind 22 = C
.         028 - COVID 19 Treatment Adjustment %
.
PMAJADJV  FORM      10.4   8        10    Value of Adjustment                
PMAJCUID  DIM       10     10       18    Record created by                  
PMAJCDAT  DIM       8      8        28    Date record created                
PMAJCTIM  DIM       8      8        36    Time record created                
PMAJUUID  DIM       10     10       44    Record updated by                  
PMAJUDAT  DIM       8      8        54    Date record updated                
PMAJUTIM  DIM       8      8        62    Time record updated                
PMAJSPAR  DIM       50     50       70    Spare variable                     
.
.End of Record                      120  
.
