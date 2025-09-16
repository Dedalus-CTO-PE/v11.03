. V9.04.001 04/04/2005 EC  Created FD CAR 55594                              
. *----------------------------------------------------------------------
. * Include Name  :   WATOPSFD.INC
. *
. * Function      :   File Def'n Include for Waiting List                       
. *                   Waiting list Outpatient Link PAS   
. *
. * File Type     :   SQL
. *
. * File Name     :   watopsaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WATOPSA1   IFILE    SQL, FIXED=178, KEY="U1-8,9-17,18-19,48-55"                 
WATOPSA2   IFILE    SQL, FIXED=178, KEY="U48-55"                                
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WTOSURNO  DIM       8      8        1     U/R Number                         
WTOSCODE  DIM       9      9        9     Procedure Code                     
WTOSCOUN  DIM       2      2        18    Procedure Count                    
WTOSSITE  DIM       6      6        20    Site ID                            
WTOSCLIN  DIM       6      6        26    Clinic ID                          
WTOSDATE  DIM       8      8        32    Date (CCYYMMDD)                    
WTOSSTRT  DIM       5      5        40    Start Time (HH:MM)                 
WTOSSLOT  DIM       3      3        45    Slot Number                        
WTOSOUTN  DIM       8      8        48    Outpatient Number                  
WTOSOSTA  DIM       3      3        56    Original Status (CAT XG)           
WTOSPDAT  DIM       8      8        59    Pre-Anaesthetic Date (CCYYMMDD)    
WTOSPTIM  DIM       8      8        67    Pre-Anaesthetic Time (hh:mm:ss)    
WTOSSTAT  DIM       1      1        75    Status 0=Booked 1=Cancelled        
WTOSCDAT  DIM       8      8        76    Date Record Created (CCYYMMDD)     
WTOSCTIM  DIM       8      8        84    Time Record Created (hh:mm:ss)     
WTOSCUID  DIM       10     10       92    Web User Id Created (websecaf)     
WTOSUDAT  DIM       8      8        102   Date Record Updated (CCYYMMDD)     
WTOSUTIM  DIM       8      8        110   Time Record Updated (hh:mm:ss)     
WTOSUUID  DIM       10     10       118   Web User Id Updated (websecaf)     
WTOSSPAR  DIM       50     50       128   Spare                              
.
.End of Record                      178  
.
