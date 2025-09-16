. V5.02.001 02/10/1994                                                       
. *----------------------------------------------------------------------
. * Include Name  :   NHIDNRFD.INC
. *
. * Function      :   File Def'n Include for NZ Health Interface
. *                   NHI/MWS Donor Details              
. *
. * File Type     :   SQL
. *
. * File Name     :   nhidnraf.dat
. * Audit Name    :   nhiauddn.dat
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
NHIAUDDN   IFILE    SQL, FIXED=383, KEY="D1-8,9-16,17-18,19-19"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
NHDNAUDD  DIM       8      8        1     Date of Change
NHDNAUDT  DIM       8      8        9     Time of Change
NHDNAUDP  DIM       2      2        17    Port
NHDNAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
NHDNAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
NHDNAUDO  DIM       4      4        22    Operator ID
.
.
.Data File Definition
.--------------------
NHIDNRA1   IFILE    SQL, FIXED=357, KEY="U1-7"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
NHDNNMPI  DIM       7      7        1     National HCU ID                    
NHDNDONR  DIM       10     10       8     Donor Details Summary              
NHDNCNSU  DIM       25     25       18    Contact - Surname                  
NHDNCNG1  DIM       20     20       43    Contact - Given Name 1             
NHDNCNG2  DIM       20     20       63    Contact - Given Name 2             
NHDNCNG3  DIM       20     20       83    Contact - Given Name 3             
NHDNCNPI  DIM       1      1        103   Contact - Preferred Name Indic (1-3
NHDNCNA1  DIM       35     35       104   Contact - Address Line 1           
NHDNCNA2  DIM       30     30       139   Contact - Address Line 2           
NHDNCNA3  DIM       30     30       169   Contact - Suburb                   
NHDNCNA4  DIM       30     30       199   Contact - City/Town                
NHDNCNA5  DIM       30     30       229   Contact - Country                  
NHDNCREL  DIM       2      2        259   Contact - Relationship             
NHDNCWPH  DIM       25     25       261   Contact - Work Phone               
NHDNCAPH  DIM       25     25       286   Contact - After Hours Phone        
NHDNDAT   DIM       8      8        311   Date Last Updated                  
NHDNTIM   DIM       8      8        319   Time Last Updated                  
NHDNSPA   DIM       30     30       327   Spare                              
.
.End of Record                      357  
.
