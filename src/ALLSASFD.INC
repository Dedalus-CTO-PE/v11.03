. V10.06.02 06/08/2015 PV C-320050 Added 9 = Blank to score fields              
. V10.06.01 14/04/2015 PHA C-271541 Added Reason for Delete
. V10.00.01 06/05/2010 SA  Created FD CAR 220289
. *----------------------------------------------------------------------
. * Include Name  :   ALLSASFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Pall. Care Severity Assessment     
. *
. * File Type     :   SQL
. *
. * File Name     :   allsasaf.dat
. *
. * Index Values  :   KEY24                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLSASA1   IFILE    SQL, FIXED=132, KEY="U1-8,9-16,17-24"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALSAVISN  DIM       8      8        1     Visit Number                       
ALSADATE  DIM       8      8        9     Assessment Date (ccyymmdd)         
ALSATIME  DIM       8      8        17    Assessment Time (hh:mm:ss)         
ALSAPAIN  FORM      2      2        25    Pain Sub-Scale                     
.                                             0 = Absent                       
.                                             1 = Mild                         
.                                             2 = Moderate                     
.                                             3 = Severe                       
.                                             9 = Blank                        
ALSASYMP  FORM      2      2        27    Other Symptoms Sub-Scale           
.                                             0 = Absent                       
.                                             1 = Mild                         
.                                             2 = Moderate                     
.                                             3 = Severe                       
.                                             9 = Blank                        
ALSAPSYC  FORM      2      2        29    Psychosocial Sub-Scale             
.                                             0=Absent                         
.                                             1=Mild                           
.                                             2=Moderate                       
.                                             3=Severe                         
.                                             9=Blank                          
ALSAFMLY  FORM      2      2        31    Family/Carer Sub-Scale             
.                                             0 = Absent                       
.                                             1 = Mild                         
.                                             2 = Moderate                     
.                                             3 = Severe                       
.                                             9 = Blank                        
ALSADELF  DIM       1      1        33    Deleted Flag                       
.                                             0 or Blank = Not Deleted         
.                                             1 = Deleted                      
ALSACUID  DIM       10     10       34    WEB User Id Created (websecaf)     
ALSACDAT  DIM       8      8        44    Date Record Created (ccyymmdd)     
ALSACTIM  DIM       8      8        52    Time Record Created (hh:mm:ss)     
ALSAUUID  DIM       10     10       60    WEB Userd Id Updated (websecaf)    
ALSAUDAT  DIM       8      8        70    Date Record Updated (ccyymmdd)     
ALSAUTIM  DIM       8      8        78    Time Record Updated (hh:mm:ss)     
ALSADUID  DIM       10     10       86    WEB User Id Deleted (websecaf)     
ALSADDAT  DIM       8      8        96    Date Record Deleted (ccyymmdd)     
ALSADTIM  DIM       8      8        104   Time Record Deleted (hh:mm:ss)     
ALSADRES  DIM       3      3        112   Reason for Delete                  
ALSASPAR  DIM       17     17       115   Spare Variable                     
.
.End of Record                      132  
.
