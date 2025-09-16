. *----------------------------------------------------------------------
. * Include Name  :   OPRPOCFD.INC
. *
. * Function      :   File Def'n Include for Theatre System                     
. *                   Ward Pre-Operative/Arrival Check List      
. *
. * File Type     :   SQL
. *
. * File Name     :   oprpocaf.dat
. *
. * Modifications :  
. *      V10.10.02    30/06/2017 J.Tan           TSK 0837660
. *                   Added descriptions for the following user defined fields:
. *                   - OPPOUC01 to OPPOUC11
. *                   - OPPOUY01 to OPPOUY06
. *                   - OPPOUT01
. *      V10.10.01    30/05/2017 J.Tan           TSK 0837660
. *                   Added values "7" and "8" to DOPPORTY
. *      V10.08.01    31/03/2016 Steve Armstrong TSK 0321157
. *                   Added values "3","4","5" and "6" to DOPPORTY
. *                   Added new fields OPPOUDR1 to OPPOUD10
. *       v9.03.01    06/06/2003 Sylvek Litewka  CAR 39213  
. *                   Added 'Record Type' field (11-11) to the first index.
. *       v9.00.01    25/05/2001 dc  
. *                   created fd
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OPRPOCA1   IFILE    SQL, FIXED=484, KEY="U1-10,11-11" 
OPRPOCA2   IFILE    SQL, FIXED=484, KEY="U11-11,1-10"                           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPPOUNID  DIM       10     10       1     Unique ID.                         
DOPPORTY  DIM       1      1        11    Record Type                        
.                                         1 = Pre-Operative Check List
.                                         2 = Arrival Check List 
.                                         3 = Pre-Induction of Anaesthesia
.                                         4 = Pre Skin Incision Timeout
.                                             Safety Checklist
.                                         5 = OR Sign Out Safety Checklist
.                                         6 = Recovery Room Handover Checklist
.                                         7 = Time Out List 1
.                                         8 = Surgeon Consent
.
.         Pre-Operative Check List
.
OPPOPIDB  DIM       1      1        12    Patient ID Bracelet                
.                                         1 = No
.                                         2 = Yes
.
.         Consent Forms
. 
OPPOSATF  DIM       1      1        13    Surgical Agreement to Treat Signed 
.                                         1 = No
.                                         2 = Yes
OPPOAATF  DIM       1      1        14    Anaesthetic Agreement to Treat Sign
.                                         1 = No
.                                         2 = Yes
OPPOBATF  DIM       1      1        15    Blood/Product Agree to Treat Signed
.                                         1 = No
.                                         2 = Yes
OPPOTBPF  DIM       1      1        16    Request Tissue/Body Part Signed    
.                                         1 = No
.                                         2 = Yes
.
.         Clinical Details
.
OPPOTNBM  DIM       8      8        17    Time Nil by Mouth Food (HH:MM:SS)  
OPPOTNBF  DIM       8      8        25    Time Nil by Fluid (HH:MM:SS)       
OPPONBMC  DIM       1      1        33    Nil by Mouth Food Checked          
.                                         1 = No
.                                         2 = Yes
OPPONBFC  DIM       1      1        34    Nil by Fluid Checked               
.                                         1 = No
.                                         2 = Yes
OPPOALLN  DIM       1      1        35    Allergies Noted                    
.                                         1 = No
.                                         2 = Yes
OPPOECGR  DIM       1      1        36    ECG Results                        
.                                         1 = No
.                                         2 = Yes
OPPOLABR  DIM       1      1        37    Laboratory Results                 
.                                         1 = No
.                                         2 = Yes
OPPOCOMB  DIM       1      1        38    Complete Blood Form                
.                                         1 = No
.                                         2 = Yes
OPPOMEDC  DIM       1      1        39    Medication Chart                   
.                                         1 = No
.                                         2 = Yes
OPPODRIN  DIM       1      1        40    Drug Infusion Chart                
.                                         1 = No
.                                         2 = Yes
OPPOFLUB  DIM       1      1        41    Fluid Balance Chart                
.                                         1 = No
.                                         2 = Yes
OPPOXRAY  DIM       1      1        42    X-Ray/Cat Scans                    
.                                         1 = No
.                                         2 = Yes
OPPODIAC  DIM       1      1        43    Diabetic Chart                     
.                                         1 = No
.                                         2 = Yes
.
.         Physical Details
.
OPPODENT  DIM       3      3        44    Dentures            (Category Oy)     
.                                                   1 = Labeled Carton
.                                                   2 = Top
.                                                   3 = Bottom
.                                                   4 = Top/Bottom
.                                                   5 = Partial Plate           
OPPOVALS  DIM       3      3        47    Valuables           (Category Oz)     
.                                                   1 = Rings Taped
.                                                   2 = Rings Removed
.                                                   3 = Property with Patient
.                                                   4 = Property on Ward
.                                                   5 = Property with Family 
OPPOSHAV  DIM       1      1        50    Shave Checked                      
.                                         1 = No
.                                         2 = Yes
OPPOURVD  DIM       8      8        51    Time Urine Voided (HH:MM:SS)       
OPPOINTR  DIM       3      3        59    Interpreter Required(Category OQ)
OPPOLABN  FORM      2      2        62    Labels Number Required             
OPPOUC01  DIM       3      3        64    User Defined Code 1 (Category oY)
.                                         (Glasses/Contact Lenses - MHACCQ)
OPPOUC02  DIM       3      3        67    User Defined Code 2 (Category oZ)  
.                                         (Jewellery/Body Piercing - MHACCQ)
OPPOUC03  DIM       3      3        70    User Defined Code 3 (Category Oa)  
.                                         (Correct X-Rays JMPH)
OPPOUC04  DIM       3      3        73    User Defined Code 4 (Category Ob)  
OPPOUC05  DIM       3      3        76    User Defined Code 5 (Category Oc)  
.                                         (Implants Present prior - JMPH)
OPPOUC06  DIM       3      3        79    User Defined Code 6 (Category Od)  
.                                         (T.E.D.S. - JMPH)
OPPOUC07  DIM       3      3        82    User Defined Code 7 (Category Oe)  
.                                         (Seq Compression Device - JMPH)
OPPOUC08  DIM       3      3        85    User Defined Code 8 (Category Of)  
.                                         (Chemical Prophylaxis - JMPH)
OPPOUC09  DIM       3      3        88    User Defined Code 9 (Category Og)  
.                                         (Surgeon Signed Form - JMPH)
OPPOUC10  DIM       3      3        91    User Defined Code 10(Category Oh)  
.                                         (Antibiotics Considered - JMPH)
OPPOUC11  DIM       3      3        94    User Defined Code 11(Category Oi)  
.                                         (Thromboprophylaxis Considered- JMPH)
OPPOUC12  DIM       3      3        97    User Defined Code 12(Category Oj)  
OPPOUC13  DIM       3      3        100   User Defined Code 13(Category Ok)  
OPPOUC14  DIM       3      3        103   User Defined Code 14(Category Ol)  
OPPOUC15  DIM       3      3        106   User Defined Code 15(Category Om)  
OPPOUC16  DIM       3      3        109   User Defined Code 16(Category On)  
OPPOUC17  DIM       3      3        112   User Defined Code 17(Category Oo)  
OPPOUC18  DIM       3      3        115   User Defined Code 18(Category Op)   
OPPOUC19  DIM       3      3        118   User Defined Code 19(Category Oq)  
OPPOUC20  DIM       3      3        121   User Defined Code 20(Category Or)  
OPPOUY01  DIM       1      1        124   User Defined Y/N 1                 
.                                         1 = No
.                                         2 = Yes
.                                         (Pre Op Brief - JMPH)
OPPOUY02  DIM       1      1        125   User Defined Y/N 2                 
.                                         1 = No
.                                         2 = Yes
.                                         (Full Name - JMPH)
OPPOUY03  DIM       1      1        126   User Defined Y/N 3                 
.                                         1 = No
.                                         2 = Yes
.                                         (Patient ID (U/R) - JMPH)
OPPOUY04  DIM       1      1        127   User Defined Y/N 4                 
.                                         1 = No
.                                         2 = Yes
.                                         (Correct Site Marked - JMPH)
OPPOUY05  DIM       1      1        128   User Defined Y/N 5                 
.                                         1 = No
.                                         2 = Yes
.                                         (Procedure Identified - JMPH)
OPPOUY06  DIM       1      1        129   User Defined Y/N 6                 
.                                         1 = No
.                                         2 = Yes
.                                         (Side and Site identified - JMPH)
OPPOUY07  DIM       1      1        130   User Defined Y/N 7                 
.                                         1 = No
.                                         2 = Yes
OPPOUY08  DIM       1      1        131   User Defined Y/N 8                 
.                                         1 = No
.                                         2 = Yes
OPPOUY09  DIM       1      1        132   User Defined Y/N 9                 
.                                         1 = No
.                                         2 = Yes
OPPOUY10  DIM       1      1        133   User Defined Y/N 10                
.                                         1 = No
.                                         2 = Yes
OPPOUT01  DIM       8      8        134   User Defined Time Field 1          
.                                         (Anaesthetic Time Out - JMPH)
OPPOUT02  DIM       8      8        142   User Defined Time Field 2          
OPPOUT03  DIM       8      8        150   User Defined Time Field 3          
OPPOUT04  DIM       8      8        158   User Defined Time Field 4          
OPPOUT05  DIM       8      8        166   User Defined Time Field 5          
OPPOUT06  DIM       8      8        174   User Defined Time Field 6          
OPPOUT07  DIM       8      8        182   User Defined Time Field 7          
OPPOUT08  DIM       8      8        190   User Defined Time Field 8          
OPPOUT09  DIM       8      8        198   User Defined Time Field 9          
OPPOUT10  DIM       8      8        206   User Defined Time Field 10         
OPPOUF01  FORM      6      4        214   User Defined Form Field 1          
OPPOUF02  FORM      6      4        218   User Defined Form Field 2          
OPPOUF03  FORM      6      4        222   User Defined Form Field 3          
OPPOUF04  FORM      6      4        226   User Defined Form Field 4          
OPPOUF05  FORM      6      4        230   User Defined Form Field 5          
OPPOUF06  FORM      6      4        234   User Defined Form Field 6          
OPPOUF07  FORM      6      4        238   User Defined Form Field 7          
OPPOUF08  FORM      6      4        242   User Defined Form Field 8          
OPPOUF09  FORM      6      4        246   User Defined Form Field 9          
OPPOUF10  FORM      6      4        250   User Defined Form Field 10         
OPPOUDR1  DIM       10     10       254   User Defined Doctor Field 1
OPPOUDR2  DIM       10     10       264   User Defined Doctor Field 2
OPPOUDR3  DIM       10     10       274   User Defined Doctor Field 3
OPPOUDR4  DIM       10     10       284   User Defined Doctor Field 4
OPPOUDR5  DIM       10     10       294   User Defined Doctor Field 5
OPPOUNR1  DIM       10     10       304   User Defined Nurse Field 1
OPPOUNR2  DIM       10     10       314   User Defined Nurse Field 2
OPPOUNR3  DIM       10     10       324   User Defined Nurse Field 3
OPPOUNR4  DIM       10     10       334   User Defined Nurse Field 4
OPPOUNR5  DIM       10     10       344   User Defined Nurse Field 5
OPPOUD01  DIM       8      8        354   User Defined Date Field 1
OPPOUD02  DIM       8      8        362   User Defined Date Field 2
OPPOUD03  DIM       8      8        370   User Defined Date Field 3
OPPOUD04  DIM       8      8        378   User Defined Date Field 4
OPPOUD05  DIM       8      8        386   User Defined Date Field 5
OPPOUD06  DIM       8      8        394   User Defined Date Field 6
OPPOUD07  DIM       8      8        402   User Defined Date Field 7
OPPOUD08  DIM       8      8        410   User Defined Date Field 8
OPPOUD09  DIM       8      8        418   User Defined Date Field 9
OPPOUD10  DIM       8      8        426   User Defined Date Field 10
OPPOSPAR  DIM       50     50       434   Spare Variable                     
.
.End of Record                      484  
.
.Redefine Key Variables
.----------------------
OPPORTYP  FORM      1    
