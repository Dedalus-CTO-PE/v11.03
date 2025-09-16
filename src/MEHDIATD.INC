.--------------------------------------------------------------------------
.MEHDIATD.INC
.
.  V11.00.01 30/03/2020  Jill Parkinson Task  TSK 0890087
.            Increased ICD 10 diagnosis text to 200 characters
.  V10.14.01 04/06/2019  Tracey Nguyen        TSK 0856503
.            Added ICD10 Diagnosis type 1 to 6 - MEHDI059 to MEHDI064
.  V10.10.02 12/08/2010  Mike Laming  CAR 228152
.            Added MHDICHNG "data changed" flag
.  V10.10.01 26/03/2010  Mike Laming  CAR 217575
.            Added HCP & CaseTeam Code fields MEHDI057 & MEHDI058
.   V9.12.01 20/11/2009  Mike Laming  CAR 195158
.            Added Diagnosis 4 to 6 - MEHDI035 to MEHDI050
.            Added Axis I & II Primary flag against each code. MEHDI051 - 056
.   V9.09.02 07/03/2008 J.Tan        CAR 156964
.            Added Axis III
.   V9.04.01 19/11/2004 Davin        CAR 44068
.            Increased axis code (I and II) descriptions from 30 to 70
.   V9.02.00 14/10/2002 Katie Nelson - Created
. 
.---------------------------------------------------------------------------
MHDICHNG  FORM      1    Data changed flag
.  Mental Health Diagnosis History Details
MEHDI001  DIM       8    Admission Number
MEHDI002  DIM       8    Date of diagnosis change ccyymmdd
MEHDI003  DIM       9    1st ICD10 Code                                
MEHDI004  DIM       200  Ist ICD10 Description
MEHDI005  FORM      1    Suppress 1st ICD10 Code?        
.                          1 = Yes ; 2 = No
MEHDI006  DIM       8    Date of Last change to 1st ICD10 Code
MEHDI007  DIM       9    2nd ICD10 Code                      
MEHDI008  DIM       200  2nd ICD10 Description          
MEHDI009  FORM      1    Suppress 2nd ICD10 Code?
.                          1 = Yes ; 2 = No
MEHDI010  DIM       8    Date of last change to 2nd ICD10 Code
MEHDI011  DIM       9    Acis I Code A                   
MEHDI012  DIM       9    Acis I Code B                   
MEHDI013  DIM       9    Acis I Code C                   
MEHDI014  DIM       70   Axis I description A 
MEHDI015  DIM       70   Axis I description B 
MEHDI016  DIM       70   Axis I description C 
MEHDI017  DIM       9    Acis II Code A                   
MEHDI018  DIM       9    Acis II Code B                   
MEHDI019  DIM       9    Acis II Code C                   
MEHDI020  DIM       70   Axis II description A 
MEHDI021  DIM       70   Axis II description B 
MEHDI022  DIM       70   Axis II description C 
MEHDI023  DIM       50   Axis III description C 
MEHDI024  DIM       3    Axis IV Code (Cat XA)
MEHDI025  DIM       3    Axis V Code (Cat XB)
MEHDI026  DIM       8    Date of last change to DSMIIIR diag.
MEHDI027  DIM       4    Operator id who made change           
MEHDI028  DIM       20   Axis Description  
MEHDI029  DIM       9    Axis III Code A
MEHDI030  DIM       9    Axis III Code B
MEHDI031  DIM       9    Axis III Code C
MEHDI032  DIM       70   Axis III Description A
MEHDI033  DIM       70   Axis III Description B
MEHDI034  DIM       70   Axis III Description C
.                                           *               start     *I-195158
MEHDI035  DIM       9    3rd ICD10 Code                      
MEHDI036  DIM       200  3rd ICD10 Description          
MEHDI037  FORM      1    Suppress 3rd ICD10 Code?  - 1 = Yes ; 2 = No
MEHDI038  DIM       8    Date of last change to 3rd ICD10 Code
MEHDI039  DIM       9    4th ICD10 Code                      
MEHDI040  DIM       200  4th ICD10 Description          
MEHDI041  FORM      1    Suppress 4th ICD10 Code?  - 1 = Yes ; 2 = No
MEHDI042  DIM       8    Date of last change to 4th ICD10 Code
MEHDI043  DIM       9    5th ICD10 Code                      
MEHDI044  DIM       200  5th ICD10 Description          
MEHDI045  FORM      1    Suppress 5th ICD10 Code?  - 1 = Yes ; 2 = No
MEHDI046  DIM       8    Date of last change to 5th ICD10 Code
MEHDI047  DIM       9    6th ICD10 Code                      
MEHDI048  DIM       200  6th ICD10 Description          
MEHDI049  FORM      1    Suppress 6th ICD10 Code?  - 1 = Yes ; 2 = No
MEHDI050  DIM       8    Date of last change to 6th ICD10 Code
.
MEHDI051  DIM       1    Axis I  Code A is Primary - 0=no 1=yes 
MEHDI052  DIM       1    Axis I  Code B is Primary - 0=no 1=yes 
MEHDI053  DIM       1    Axis I  Code C is Primary - 0=no 1=yes 
MEHDI054  DIM       1    Axis II Code A is Primary - 0=no 1=yes 
MEHDI055  DIM       1    Axis II Code B is Primary - 0=no 1=yes 
MEHDI056  DIM       1    Axis II Code C is Primary - 0=no 1=yes 
.
MEHDI057  DIM       10   HCP Code
MEHDI058  DIM       10   Case Team code
MEHDI059  DIM       1    1st ICD10 diagnosis type
.                          A = Principal
.                          B = Other Relevant
.                          P = Provisional
MEHDI060  DIM       1    2nd ICD10 diagnosis type
.                          A = Principal
.                          B = Other Relevant
.                          P = Provisional
MEHDI061  DIM       1    3rd ICD10 diagnosis type
.                          A = Principal
.                          B = Other Relevant
.                          P = Provisional
MEHDI062  DIM       1    4th ICD10 diagnosis type
.                          A = Principal
.                          B = Other Relevant
.                          P = Provisional
MEHDI063  DIM       1    5th ICD10 diagnosis type
.                          A = Principal
.                          B = Other Relevant
.                          P = Provisional
MEHDI064  DIM       1    6th ICD10 diagnosis type
.                          A = Principal
.                          B = Other Relevant
.                          P = Provisional
