. V10.04.01 19/12/2013 AP C-294352 VSIALNG1-3,VSIANOTF,VSIACONF out of SPARE    
. V10.03.02 11/12/2013 EC C-293902 Added notified and confirmed in spare
. V10.03.01 23/01/2013 EC C-262292 Added language fields in spare
. V9.00.002 17/11/2001 dc  Changed Index 2
. *----------------------------------------------------------------------
. * Include Name  :   VISIAUFD.INC
. *
. * Function      :   File Def'n Include for Visit System                       
. *                   Interpreter Visit Audit            
. *
. * File Type     :   SQL
. *
. * File Name     :   visiauaf.dat
. *
. * Index Values  :   KEY25   KEY25                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
VISIAUA1   IFILE    SQL, FIXED=154, KEY="U1-8,9-16,17-17,18-25"                 
VISIAUA2   IFILE    SQL, FIXED=154, KEY="U18-25,1-8,9-16,17-17"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
VSIACDAT  DIM       8      8        1     Date of Change (CCYYMMDD)          
VSIACTIM  DIM       8      8        9     Time of Change (HH:MM:SS)          
VSIARTYP  DIM       1      1        17    Record Type                        
VSIAVISN  DIM       8      8        18    Visit/Booking Number               
VSIADATE  DIM       8      8        26    Date Required (CCYYMMDD)           
VSIATIME  DIM       8      8        34    Time Required (CCYYMMDD)           
VSIATYPE  FORM      2      2        42    Visit Type                         
VSIASUBK  DIM       50     50       44    Sub-System Key                     
VSIAWUID  DIM       10     10       94    WEB User ID                        
VSIALNG1  DIM       3      3        104   Preferred Language 1 (Cat LA)      
VSIALNG2  DIM       3      3        107   Preferred Language 2 (Cat LA)      
VSIALNG3  DIM       3      3        110   Preferred Language 3 (Cat LA)      
VSIANOTF  DIM       1      1        113   Notified Indicator (0=No,1=Yes)    
VSIACONF  DIM       1      1        114   Interpreter Confirmed (0=No,1=Yes) 
VSIASPAR  DIM       39     39       115   Spare Variable                     
.
.End of Record                      154  
.
