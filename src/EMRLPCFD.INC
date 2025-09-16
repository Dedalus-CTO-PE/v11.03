. V10.01.01 28/03/2011 JP  Increased printer fields CAR 239574                  
. *----------------------------------------------------------------------
. * Include Name  :   EMRLPCFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   Emergency Label & Forms Print Contr
. *
. * File Type     :   SQL
. *
. * File Name     :   emrlpcaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRLPCA1   IFILE    SQL, FIXED=82, KEY="U1-5"                                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMLPUNI   DIM       5      5        1     Unique Counter                     
EMLPADM   DIM       8      8        6     Admission No                       
EMLPURN   DIM       8      8        14    U/R Number                         
EMLPLPN   DIM       6      6        22    Label Printer Selected             
EMLPCNO   FORM      3      3        28    Number to Print                    
EMLPSTC   DIM       6      6        31    Stationary Code                    
EMLPREP   FORM      2      2        37    Report 1=Label, 2=ID Sheets        
EMLPLTY   DIM       10     10       39    Label Type                         
EMLPFPN   DIM       6      6        49    Form Printer Selected              
EMLPPSC   DIM       4      4        55    Passcode                           
EMLPSPA   DIM       23     23       59    Spare                              
.
.End of Record                      82   
.
