. V11.03.01 16/02/2023 TT C-0914049 Added PTARTYPE 026 & PTARTYPE 027          
. V11.02.01 30/05/2022 TT C-0893159 Added PTARTYPE 025                          
. V11.01.01 22/09/2021 TT C-0903847 Added PTARTYPE 023 & PTARTYPE 024           
. V11.00.03 09/11/2020 TT C-0878747 Added PTARTYPE 022                          
. V11.00.02 27/08/2020 TT C-0881752 Added PTARTYPE 109                          
. V11.00.01 24/03/2020 TN C-0887397 Added PTARTYPE 021                          
. V10.15.01 18/12/2019 EC C-0879283 Added PTARTYPE 020                          
. V10.14.02 02/06/2019 jp C-0873054 Added index 4 and MH type                   
. V10.14.01 03/04/2019 TN C-0871443 Added PTARTYPE values 017 and 018           
. V10.10.01 15/03/2017 TN C-0833454 Added values 014 to 016 for PTARTYPE        
. V10.08.03 18/04/2016 DN C-0316489 Added Index 3                               
. V10.08.02 31/03/2016 SA C-0321157 Added PTARTYPE values 011, 012 & 013        
. V10.08.01 30/03/2016 SA C-0316489 Added values 002 to 010 for PTARTYPE        
. V10.07.01 05/11/2015 SA C-323325 Added PTARFDTE, PTARFTME & PTARFUSR          
. V10.04.02 24/01/2014 PV C-286158 Added TYPE to both index                     
. V10.04.01 24/01/2014 PV C-286158 Changed 1st index and Added 2nd index        
. V10.03.01 03/12/2013 PV C-286158 Created FD Patient Attributes Table          
. *----------------------------------------------------------------------
. * Include Name  :   PATATRFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Patient Attributes Table           
. *
. * File Type     :   SQL
. *
. * File Name     :   patatraf.dat
. *
. * Index Values  :   KEY35   KEY35   KEY35   KEY51                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATATRA1   IFILE    SQL, FIXED=545, KEY="U1-8,17-24,25-32,33-35,9-16"
PATATRA2   IFILE    SQL, FIXED=545, KEY="U1-8,9-16,17-24,25-32,33-35"
PATATRA3   IFILE    SQL, FIXED=545, KEY="U1-8,9-16,33-35,17-24,25-32"
PATATRA4   IFILE    SQL, FIXED=545, KEY="U429-436,437-444,33-35,1-8,9-16,17-24,25-32"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTARURNO  DIM       8      8        1     U/R Number                         
PTARVISN  DIM       8      8        9     Visit Number                       
.                                         Blank for Type 020 - NDIS Details    
PTARDATE  DIM       8      8        17    Date of Attribute                  
PTARTIME  DIM       8      8        25    Time of Attribute                  
PTARTYPE  DIM       3      3        33    Type of Attribute                  
.                                         001 - Hght/Wght                      
.                                         002 - Stored Working Diagnosis using 
.                                               PTARTXT1-3                     
.                                         003 - Relevant Medical History       
.                                               applicable to this visit using 
.                                               PTARTXT1-3                     
.                                         004 - Barriers to Discharge using    
.                                               PTARTXT1-3                     
.                                         005 - Falls Risk using PTARCOD1      
.                                               (Cat 1A)                       
.                                         006 - Pressure Injury Risk using     
.                                               PTARCOD1 (Cat 1a)              
.                                         007 - Abscond Risk using PTARCOD1    
.                                               (Cat 1B)                       
.                                         008 - Malnutrition Risk using        
.                                               PTARCOD 1 (Cat 1b)             
.                                         009 - Expected Discharge Destination 
.                                               (Free Text) using PTARTXT1     
.                                         010 - Non Weight Bearing using       
.                                               PTARCOD1 (Cat 1C)              
.                                         011 - Pregnant using PTARVAL1        
.                                         012 - Implants In-situ using PTARCOD1
.                                               (Cat 1c)                       
.                                         013 - Hearing Aids using PTARCOD1    
.                                               (Cat 1D)                       
.                                         014 - Palliative Pain                
.                                         015 - Palliative Pain Extra          
.                                         016 - Palliative Pain Extra 2        
.                                         017 - Palliative Breathlessness      
.                                         018 - Palliative Breathlessness Extra
.                                         019 - Mental Health (edward)         
.                                         020 - NDIS Details (edward)          
.                                               PTARCOD1 (cat 1d)              
.                                               PTARCOD2 (cat 1E)              
.                                               PTARCOD3 (cat 1e)              
.                                               PTARCOD4 (cat 1F)              
.                                         021 - Triage Score on Admission      
.                                         022 - Multiple Birth Type            
.                                         023 - Discharge Management           
.                                         024 - Discharge Management 1         
.                                         025 - Recurring Care Specified Adm   
.                                         026 - Patient Follow Up Details      
.                                         027 - Follow Up Details Comments     
.                                         109 - Clinical Notes - Nursing Diag  
PTARVAL1  DIM       6      6        36    Value 1                            
PTARVAL2  DIM       6      6        42    Value 2                            
PTARVAL3  DIM       6      6        48    Value 3                            
PTARVAL4  DIM       6      6        54    Value 4                            
PTARCOD1  DIM       3      3        60    Coded Field 1                      
PTARCOD2  DIM       3      3        63    Coded Field 2                      
PTARCOD3  DIM       3      3        66    Coded Field 3                      
PTARCOD4  DIM       3      3        69    Coded Field 4                      
PTARTXT1  DIM       80     80       72    Text 1                             
PTARTXT2  DIM       80     80       152   Text 2                             
PTARTXT3  DIM       80     80       232   Text 3                             
PTARTXT4  DIM       80     80       312   Text 4                             
PTARDELR  DIM       1      1        392   Deleted Rec 0=No 1=Strikethrough   
PTARCUSR  DIM       10     10       393   User who created record            
PTARCDTE  DIM       8      8        403   Date record created                
PTARCTME  DIM       8      8        411   Time record created                
PTARUUSR  DIM       10     10       419   User who updated record            
PTARUDTE  DIM       8      8        429   Date record updated                
PTARUTME  DIM       8      8        437   Time record updated                
PTARFDTE  DIM       8      8        445   Date Attribute Finished (ccyymmdd) 
PTARFTME  DIM       8      8        453   Time Attribute Finished (hh:mm:ss) 
PTARFUSR  DIM       10     10       461   User Who Finished Attribute        
PTARSPAR  DIM       74     74       471   Spare                              
.
.End of Record                      545  
.
