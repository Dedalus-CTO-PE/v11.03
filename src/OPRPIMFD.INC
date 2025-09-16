. V10.09.02 14/02/2017 JT C-0829089 Added Index 3 and User/Date/Time Rec.Updated
. V10.09.01 18/01/2017 SA C-0829089 Added OPPIBCOD & OPPIAIMP                   
. V10.02.01 21/06/2011 EC Added created by fields CAR 244975                    
. V9.04.001 10/11/2005 JH  Added Order number and item cost                     
. V9.04.002 10/11/2005 JH                                                       
. V9.04.003 10/11/2005 JH                                                       
. V9.04.004 10/11/2005 JH                                                       
. V9.09.001 29/11/2007 EC Added OPPIRCNT CAR 150315                             
. *----------------------------------------------------------------------
. * Include Name  :   OPRPIMFD.INC
. *
. * Function      :   File Def'n Include for Theatre System                     
. *                   Patient Implant Table              
. *
. * File Type     :   SQL
. *
. * File Name     :   oprpimaf.dat
. *
. * Index Values  :   KEY13   KEY28   KEY73                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OPRPIMA1   IFILE    SQL, FIXED=423, KEY="U1-10,11-11,12-13"
OPRPIMA2   IFILE    SQL, FIXED=423, KEY="U14-28,1-10,11-11,12-13"
OPRPIMA3   IFILE    SQL, FIXED=423, KEY="U312-371,1-10,11-11,12-13"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPPIUNID  DIM       10     10       1     Unique ID.                         
OPPITMNO  DIM       1      1        11    Team Number                        
DOPPICNT  DIM       2      2        12    Counter                            
OPPIICDE  DIM       15     15       14    EAN Number/Implant Code            
OPPIIQTY  FORM      3      3        29    Implant Quantity (from oprdecaf)   
OPPILTSN  DIM       20     20       32    Lot/Serial Number                  
OPPICOST  DIM       10     10       52    Cost Code                          
OPPILOCA  DIM       3      3        62    Location  (category Ow)            
OPPIUC01  DIM       3      3        65    Spacer Type (category oE)          
OPPIUC02  DIM       3      3        68    Anatomical Side (category oF)      
OPPIUC03  DIM       3      3        71    Computer Assisted System (cat oG)  
OPPIUC04  DIM       3      3        74    User Defined Code 4  (category oH) 
OPPIUC05  DIM       3      3        77    User Defined Code 5  (category oI) 
OPPIUC06  DIM       3      3        80    User Defined Code 6  (category oJ) 
OPPIUC07  DIM       3      3        83    User Defined Code 7  (category oK) 
OPPIUC08  DIM       3      3        86    User Defined Code 8  (category oL) 
OPPIUC09  DIM       3      3        89    User Defined Code 9  (category oM) 
OPPIUC10  DIM       3      3        92    User Defined Code 10 (category oN) 
OPPIUC11  DIM       3      3        95    User Defined Code 11 (category oO) 
OPPIUC12  DIM       3      3        98    User Defined Code 12 (category oP) 
OPPIUC13  DIM       3      3        101   User Defined Code 13 (category oQ) 
OPPIUC14  DIM       3      3        104   User Defined Code 14 (category oR) 
OPPIUC15  DIM       3      3        107   User Defined Code 15 (category oS) 
OPPIUC16  DIM       3      3        110   User Defined Code 16 (category oT) 
OPPIUC17  DIM       3      3        113   User Defined Code 17 (category oU) 
OPPIUC18  DIM       3      3        116   User Defined Code 18 (category oV) 
OPPIUC19  DIM       3      3        119   User Defined Code 19 (category oW) 
OPPIUC20  DIM       3      3        122   User Defined Code 20 (category oX) 
OPPIUY01  DIM       1      1        125   Spacer Used Y/N 1                  
OPPIUY02  DIM       1      1        126   Computer Assisted Y/N 2            
OPPIUY03  DIM       1      1        127   User Defined Y/N 3                 
OPPIUY04  DIM       1      1        128   User Defined Y/N 4                 
OPPIUY05  DIM       1      1        129   User Defined Y/N 5                 
OPPIUY06  DIM       1      1        130   User Defined Y/N 6                 
OPPIUY07  DIM       1      1        131   User Defined Y/N 7                 
OPPIUY08  DIM       1      1        132   User Defined Y/N 8                 
OPPIUY09  DIM       1      1        133   User Defined Y/N 9                 
OPPIUY10  DIM       1      1        134   User Defined Y/N 10                
OPPIUT01  DIM       8      8        135   User Defined Time Field 1          
OPPIUT02  DIM       8      8        143   User Defined Time Field 2          
OPPIUT03  DIM       8      8        151   User Defined Time Field 3          
OPPIUT04  DIM       8      8        159   User Defined Time Field 4          
OPPIUT05  DIM       8      8        167   User Defined Time Field 5          
OPPIUT06  DIM       8      8        175   User Defined Time Field 6          
OPPIUT07  DIM       8      8        183   User Defined Time Field 7          
OPPIUT08  DIM       8      8        191   User Defined Time Field 8          
OPPIUT09  DIM       8      8        199   User Defined Time Field 9          
OPPIUT10  DIM       8      8        207   User Defined Time Field 10         
OPPIUF01  FORM      6      4        215   User Defined Form Field 1          
OPPIUF02  FORM      6      4        219   User Defined Form Field 2          
OPPIUF03  FORM      6      4        223   User Defined Form Field 3          
OPPIUF04  FORM      6      4        227   User Defined Form Field 4          
OPPIUF05  FORM      6      4        231   User Defined Form Field 5          
OPPIUF06  FORM      6      4        235   User Defined Form Field 6          
OPPIUF07  FORM      6      4        239   User Defined Form Field 7          
OPPIUF08  FORM      6      4        243   User Defined Form Field 8          
OPPIUF09  FORM      6      4        247   User Defined Form Field 9          
OPPIUF10  FORM      6      4        251   User Defined Form Field 10         
OPPIDTRT  DIM       6      6        255   DTR Transaction Number             
OPPIDUMM  DIM       1      1        261   No longer used                     
OPPIONUM  DIM       7      7        262   Order Number                       
OPPIICOS  DIM       15     15       269   Item Cost                          
OPPIRCNT  DIM       2      2        284   Replacement Registry Form Counter  
OPPICDAT  DIM       8      8        286   Date Record Created (CCYYMMDD)     
OPPICTIM  DIM       8      8        294   Time Record Created (HH:MM:SS)     
OPPICUID  DIM       10     10       302   WEB User ID Created (websecaf)     
OPPIBCOD  DIM       60     60       312   Barcode                            
OPPIAIMP  DIM       1      1        372   Ad-Hoc Implant                     
.                                         Blank or 0 = No                      
.                                         1 = Yes                              
OPPIUDAT  DIM       8      8        373   Date Record Updated (CCYYMMDD)     
OPPIUTIM  DIM       8      8        381   Time Record Updated (HH:MM:SS)     
OPPIUUID  DIM       10     10       389   WEB User ID Updated (websecaf)     
OPPISPAR  DIM       24     24       399   Spare                              
.
.End of Record                      423  
.
.Redefine Key Variables
.----------------------
OPPICNTR  FORM      2    
