. V9.04.001 04/04/2005 EC  Added PAC to description CAR 55594
. V9.03.001 27/02/2004 EC  Created FD                                        
. *----------------------------------------------------------------------
. * Include Name  :   WATOPAFD.INC
. *
. * Function      :   File Def'n Include for Waiting List                       
. *                   Waiting list Outpatient Link PAC   
. *
. * File Type     :   SQL
. *
. * File Name     :   watopaaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
WATOPAA1   IFILE    SQL, FIXED=178, KEY="U1-8,9-17,18-19,48-55"                 
WATOPAA2   IFILE    SQL, FIXED=178, KEY="U48-55"                                
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
WTOPURNO  DIM       8      8        1     U/R Number                         
WTOPCODE  DIM       9      9        9     Procedure Code                     
WTOPCOUN  DIM       2      2        18    Procedure Count                    
WTOPSITE  DIM       6      6        20    Site ID                            
WTOPCLIN  DIM       6      6        26    Clinic ID                          
WTOPDATE  DIM       8      8        32    Date (CCYYMMDD)                    
WTOPSTRT  DIM       5      5        40    Start Time (HH:MM)                 
WTOPSLOT  DIM       3      3        45    Slot Number                        
WTOPOUTN  DIM       8      8        48    Outpatient Number                  
WTOPOSTA  DIM       3      3        56    Original Status (CAT XG)           
WTOPPDAT  DIM       8      8        59    Pre Admission Date (CCYYMMDD)      
WTOPPTIM  DIM       8      8        67    Pre Admission Time (hh:mm:ss)      
WTOPSTAT  DIM       1      1        75    Status 0=Booked 1=Cancelled        
WTOPCDAT  DIM       8      8        76    Date Record Created (CCYYMMDD)     
WTOPCTIM  DIM       8      8        84    Time Record Created (hh:mm:ss)     
WTOPCUID  DIM       10     10       92    Web User Id Created (websecaf)     
WTOPUDAT  DIM       8      8        102   Date Record Updated (CCYYMMDD)     
WTOPUTIM  DIM       8      8        110   Time Record Updated (hh:mm:ss)     
WTOPUUID  DIM       10     10       118   Web User Id Updated (websecaf)     
WTOPSPAR  DIM       50     50       128   Spare                              
.
.End of Record                      178  
.
