. V11.02.01 27/06/2022 JT C-0900069 Mod Comments Line 5 - Reason for Admission f
. V10.08.01 11/04/2016 JT C-313842 Added a new field 'Use Basic Cover Ratee'
. V10.04.01 30/12/2013 PA C-295000 Moved PMFDACHR out of Spare variable
. V10.03.01 25/09/2013 JT  Added Use keyed in Adm.typ for Accom.chrg CAR 251004
. V10.00.01 16/04/2010 JT  Added Doctor Code CAR 188189
. V9.10.001 30/06/2008 EC  Added PMFDXCSS to PMFDCUID CAR 160213
. V9.09.006 28/11/2007 JT  Added Comments
. *----------------------------------------------------------------------
. * Include Name  :   PMSFEDFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Fees Estimation Details Table      
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsfedaf.dat
. *
. * Index Values  :   KEY12   KEY20                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSFEDA1   IFILE    SQL, FIXED=518, KEY="U1-12"
PMSFEDA2   IFILE    SQL, FIXED=518, KEY="U13-20,1-12"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMFDQUOT  DIM       12     12       1     Quote Number                       
PMFDURNO  DIM       8      8        13    UR Number                          
PMFDNONS  FORM      5      4        21    No.of Days Stay 1                  
PMFDADAT  DIM       8      8        25    Admission Date                     
PMFDHFUN  DIM       6      6        33    Health Fund                        
PMFDHFTB  DIM       8      8        39    Health Fund Table                  
PMFDCMCD  DIM       9      9        47    Casemix Code                       
PMFDCLTY  DIM       3      3        56    Claim Type (Cat CL)                
PMFDBDTY  DIM       3      3        59    Bed Type 1 (Cat BT)                
PMFDATYP  DIM       3      3        62    Admission Type (Cat A)             
PMFDAGST  FORM      1      2        65    Accomodation GST 0=No 1=Yes        
PMFDBDT2  DIM       3      3        67    Bed Type 2 (Cat BT)                
PMFDBDT3  DIM       3      3        70    Bed Type 3 (Cat BT)                
PMFDBDT4  DIM       3      3        73    Bed Type 4 (Cat BT)                
PMFDBDT5  DIM       3      3        76    Bed Type 5 (Cat BT)                
PMFDNDS2  FORM      5      4        79    No.of Days Stay 2                  
PMFDNDS3  FORM      5      4        83    No.of Days Stay 3                  
PMFDNDS4  FORM      5      4        87    No.of Days Stay 4                  
PMFDNDS5  FORM      5      4        91    No.of Days Stay 5                  
PMFDCMN1  DIM       70     70       95    Comments Line 1                    
PMFDCMN2  DIM       70     70       165   Comments Line 2                    
PMFDCMN3  DIM       70     70       235   Comments Line 3                    
PMFDCMN4  DIM       70     70       305   Comments Line 4                    
PMFDCMN5  DIM       70     70       375   Comments Line 5                    
.                                         HEA = Reason for Admission           
PMFDXCSS  FORM      12.2   8        445   Excess                             
PMFDEXPD  DIM       8      8        453   Expiry Date (CCYYMMDD)             
PMFDCDAT  DIM       8      8        461   Date Created (CCYYMMDD)            
PMFDCTIM  DIM       8      8        469   Time Created (HH:MM:SS)            
PMFDCUID  DIM       10     10       477   Created By (websecaf)              
PMFDDOCT  DIM       10     10       487   Doctor Code                        
PMFDACHR  DIM       1      1        497   Use Keyed in Adm.type for Accom.Chr
.                                         0,Blank - Use Suggested Class        
PMFDUBAS  DIM       1      1        498   Use Basic Cover rate 1=Yes,0=No    
PMFDSPAR  DIM       19     19       499   Spare variable                     
.
.End of Record                      518  
.
