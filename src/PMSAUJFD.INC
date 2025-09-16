. V10.14.01 05/04/2019 PV C-0857392 Created ABF Adjustment table                
. *----------------------------------------------------------------------
. * Include Name  :   PMSAUJFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   ABF Adjustment Audit Table         
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsaujaf.dat
. *
. * Index Values  :   KEY26   KEY26                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSAUJA1   IFILE    SQL, FIXED=119, KEY="U1-8,9-16,17-17,18-23,24-26"
PMSAUJA2   IFILE    SQL, FIXED=119, KEY="U18-23,24-26,1-8,9-16,17-17"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMAUADAT  DIM       8      8        1     Audit Date (Date of change)        
PMAUATIM  DIM       8      8        9     Audit Time (Time of change)        
PMAUATYP  DIM       1      1        17    Audit Type A-Add C-Change D-Delete 
PMAUCNTR  DIM       6      6        18    Contract ID                        
PMAUADJT  DIM       3      3        24    Type of Adjustment                 
.
.         001 - Specialist Psychiatric Age<=17 w MDC=19 or 20 Adjustment %
.         002 - Specialist Psychiatric Age<=17 no MDC=19 or 20 Adjustment %
.         003 - Specialist Psychiatric Age>17 no MDC=19 or 20 Adjustment %
.         004 - Patient Remoteness Area Adjustment - Outer %
.         005 - Patient Remoteness Area Adjustment - Remote % (Admitted Acue or
.               Sub Acute)
.         006 - Patient Remoteness Area Adjustment - Remote % (ED Service)
.         007 - Patient Remoteness Area Adjustment - Very Remote % (Admitted
.               Acute or Sub Acute)
.         008 - Patient Remoteness Area Adjustment - Very Remote % (ED Service)
.         009 - Indigenous Adjustment %
.         010 - Radiotherapy Adjustment %
.         011 - Dialysis Adjustment %
.         012 - ICU Adjustment
.         013 - Private Patient Accommodation Adjustment Per Diem Price Weight
.               Same Day
.         014 - Private Patient Accommodation Adjustment Per Diem Price Weight
.               Overnight
.         015 - Private Patient Accommodation Adjustment % Admitted Sub-Acute
.               and Non-Acute-Palliative Care
.         016 - Private Patient Accommodation Adjustment % Admitted Sub-Acute
.               and Non-Acute - Rehabilitation
.         017 - Private Patient Accommodation Adjustment % Admitted Sub-Acute
.               and Non-Acute - Psychogeriatric Care
.         018 - Private Patient Accommodation Adjustment % Admitted Sub-Acute
.               and Non-Acute-GEM
.         019 - Private Patient Accommodation % Admitted Sub-Acute and
.               Non-Acute-Maintenance
.         020 - Multidisciplinary Clinic Adjustment %
.         021 - Emergency Care Age Adjustment % 65-79 years old
.         022 - Emergency Care Age Adjustment % Over 79 years old
.         023 - Hospital Remoteness Area Adjustment - Remote
.               (Admitted Acute or Sub Acute)
.         024 - Hospital Remoteness Area Adjustment - Very Remote
.               (Admitted Acute or Sub Acute)
.         025 - National Efficient Price (NEP)
.
PMAUPVAL  FORM      10.4   8        27    Previous Value                     
PMAUCVAL  FORM      10.4   8        35    Current Value                      
PMAUCUID  DIM       10     10       43    Record created by                  
PMAUCDAT  DIM       8      8        53    Date record created                
PMAUCTIM  DIM       8      8        61    Time record created                
PMAUSPAR  DIM       50     50       69    Spare variable                     
.
.End of Record                      119  
.
