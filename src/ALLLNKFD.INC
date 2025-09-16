. V10.05.01 11/08/2014 SA C-292656 Added ALLNSTAT
. V10.04.01 27/02/2014 SA C-270080 Added Index 3
. V9.09.004 04/02/2008 JT  Added Audit
. V9.09.002 10/10/2007 JT  Added Record sent to MHINC and Rec status CAR 135498
. V9.04.001 22/02/2005 EC  Created FD
. *----------------------------------------------------------------------
. * Include Name  :   ALLLNKFD.INC
. *
. * Function      :   File Def'n Include for Allied Health
. *                   Referral Links                     
. *
. * File Type     :   SQL
. *
. * File Name     :   alllnkaf.dat
. * Audit Name    :   allaudln.dat
. *
. * Index Values  :   KEY16   KEY16   KEY24                                  
. *
. *----------------------------------------------------------------------
.
.Audit File Definition
.--------------------
ALLAUDLN   IFILE    SQL, FIXED=112, KEY="D26-33,34-41,1-8,9-16"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALLNAUDD  DIM       8      8        1     Date of Change
ALLNAUDT  DIM       8      8        9     Time of Change
ALLNAUDP  DIM       2      2        17    Port
ALLNAUDR  DIM       1      1        19    Record Type
.                                         A=Added Record
.                                         B=Before Change
.                                         C=After Change
.                                         D=Deleted Record
ALLNAUDS  FORM      1      2        20    Record Status
.                                         1=Not Printed
.                                         2=Printed
ALLNAUDO  DIM       4      4        22    Operator ID
.
.ALLNVISN DIM       8      8        26    Referral/Visit Number
.ALLNLNKV DIM       8      8        34    Linked Visit Number
.
.Data File Definition
.--------------------
ALLLNKA1   IFILE    SQL, FIXED=87, KEY="U1-8,9-16"
ALLLNKA2   IFILE    SQL, FIXED=87, KEY="U9-16,1-8"
ALLLNKA3   IFILE    SQL, FIXED=87, KEY="U1-8,29-36,9-16"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALLNVISN  DIM       8      8        1     Referral/Visit Number              
ALLNLNKV  DIM       8      8        9     Linked Visit Number                
ALLNSITE  DIM       6      6        17    Site ID                            
ALLNCLIN  DIM       6      6        23    Clinic ID                          
ALLNDATE  DIM       8      8        29    Date (CCYYMMDD)                    
ALLNSTRT  DIM       5      5        37    Start Time (HH:MM)                 
ALLNSLOT  DIM       3      3        42    Slot Number                        
ALLNMOHR  DIM       1      1        45    MOH Indicator record sent to MHINC 
.                                         Blank=Not for MHINC                  
.                                         0=Unsent                             
.                                         1=Sent                               
.                                         2=Send Delete required               
ALLNRCST  DIM       1      1        46    <Not used - use Audit file>        
ALLNSTAT  DIM       1      1        47    Status                             
.                                         0 or Blank = Active                  
.                                         1 = Cancelled                        
ALLNSPAR  DIM       39     39       48    Spare Variable                     
.
.End of Record                      87   
.
