. V10.11.01 25/07/2017 SA C-0842740 Move fields OPABCOD5 to OPABUDT1            
. V                    from SPARE into FD                                       
. V10.10.02 29/05/2017 SA C-0837660 Added attributes 007-026                    
. V                     Also added new fields (OPABCOD5 to OPABUDT1) into SPARE 
. V10.10.01 15/03/2017 SA C-0824042 Created File Definition                     
. *----------------------------------------------------------------------
. * Include Name  :   OPRATRFD.INC
. *
. * Function      :   File Def'n Include for Theatre System                     
. *                   Theatre Attributes                 
. *
. * File Type     :   SQL
. *
. * File Name     :   opratraf.dat
. *
. * Index Values  :   KEY13                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OPRATRA1   IFILE    SQL, FIXED=523, KEY="U1-10,11-13"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPABUNIQ  DIM       10     10       1     Theatre Unique ID                  
OPABTYPE  DIM       3      3        11    Type of Attribute                  
.                                         001 - Irrigation to Site - Water     
.                                               (Y/N1, Y/N2, Value 1)          
.                                         002 - Irrigation to Site - Saline    
.                                               (Y/N1, Y/N2, Value 1)          
.                                         003 - Irrigation to Site - Hartmann's
.                                               (Y/N1, Y/N2, Value 1)          
.                                         004 - Irrigation to Site - Glycine   
.                                               (Y/N1, Y/N2, Value 1)          
.                                         005 - Irrigation to Site - Ringers   
.                                               (Y/N1, Y/N2, Value 1)          
.                                         006 - Irrigation to Site - Other     
.                                               (Y/N1, Y/N2, Value 1, Text 1)  
.                                         007 - Irrigation Solution 1          
.                                               (Text 1, Value1 1)             
.                                         008 - Irrigation Solution 2          
.                                               (Text 1, Value1 1)             
.                                         009 - Irrigation Solution 3          
.                                               (Text 1, Value1 1)             
.                                         010 - Irrigation Solution 4          
.                                               (Text 1, Value1 1)             
.                                         011 - Irrigation Solution 5          
.                                               (Text 1, Value1 1)             
.                                         012 - Dressing Type (Text 1)         
.                                         013 - Count Correct Details          
.                                               (Y/N 1, Y/N 2, Text 1, Y/N 3,  
.                                               Value 1 (hhmmss), Text 2)      
.                                         014 - Specimen Types                 
.                                         015 - Wound Closure                  
.                                         016 - Skin Integrity                 
.                                         017 - Patient Positioning            
.                                         018 - Positioning Devices            
.                                         019 - Armboards                      
.                                         020 - Pressure Relieving             
.                                         021 - Skin Prep                      
.                                         022 - Hair Removal in OR             
.                                         023 - Other Commments for Positioning
.                                         024 - Diathermy                      
.                                         025 - Drains                         
.                                         026 - ID Catheter                    
OPABVAL1  DIM       6      6        14    Value 1                            
OPABVAL2  DIM       6      6        20    Value 2                            
OPABVAL3  DIM       6      6        26    Value 3                            
OPABVAL4  DIM       6      6        32    Value 4                            
OPABCOD1  DIM       3      3        38    Coded Field 1                      
OPABCOD2  DIM       3      3        41    Coded Field 2                      
OPABCOD3  DIM       3      3        44    Coded Field 3                      
OPABCOD4  DIM       3      3        47    Coded Field 4                      
OPABTXT1  DIM       80     80       50    Text Field 1                       
OPABTXT2  DIM       80     80       130   Text Field 2                       
OPABTXT3  DIM       80     80       210   Text Field 3                       
OPABTXT4  DIM       80     80       290   Text Field 4                       
OPABYN01  DIM       1      1        370   Y/N Field 1                        
.                                         0 = No                               
.                                         1 = Yes                              
.                                         2 = N/A                              
OPABYN02  DIM       1      1        371   Y/N Field 2                        
.                                         0 = No                               
.                                         1 = Yes                              
.                                         2 = N/A                              
OPABYN03  DIM       1      1        372   Y/N Field 3                        
.                                         0 = No                               
.                                         1 = Yes                              
.                                         2 = N/A                              
OPABYN04  DIM       1      1        373   Y/N Field 4                        
.                                         0 = No                               
.                                         1 = Yes                              
.                                         2 = N/A                              
OPABDELT  DIM       1      1        374   Deleted Record                     
.                                         0 = No                               
.                                         1 = Strikethrough                    
OPABCUID  DIM       10     10       375   User ID who created record         
.                                         (websecaf)                           
OPABCDAT  DIM       8      8        385   Date Record Created (ccyymmdd)     
OPABCTIM  DIM       8      8        393   Time Record Created (hh:mm:ss)     
OPABUUID  DIM       10     10       401   User ID who last updated record    
.                                         (websecaf)                           
OPABUDAT  DIM       8      8        411   Date Record Updated (ccyymmdd)     
OPABUTIM  DIM       8      8        419   Time Record Updated (hh:mm:ss)     
OPABFUID  DIM       10     10       427   User ID who finished attribute     
.                                         (websecaf)                           
OPABFDAT  DIM       8      8        437   Date Attribute Finished (ccyymmdd) 
OPABFTIM  DIM       8      8        445   Time Attribute Finished (hh:mm:ss) 
OPABCOD5  DIM       3      3        453   Coded Field 5                      
OPABCOD6  DIM       3      3        456   Coded Field 6                      
OPABYN05  DIM       1      1        459   Y/N Field 5                        
OPABYN06  DIM       1      1        460   Y/N Field 6                        
OPABYN07  DIM       1      1        461   Y/N Field 7                        
OPABYN08  DIM       1      1        462   Y/N Field 8                        
OPABYN09  DIM       1      1        463   Y/N Field 9                        
OPABYN10  DIM       1      1        464   Y/N Field 10                       
OPABUDD1  DIM       8      8        465   User Defined Date Field 1 (ccyymmdd
OPABUDT1  DIM       8      8        473   User Defined Time Field 1 (hh:mm:ss
OPABSPAR  DIM       42     42       481   Spare Variable                     
.
.End of Record                      523  
.
