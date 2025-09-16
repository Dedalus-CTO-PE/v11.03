. V10.13.01 12/11/2018 EC  Added save variables   TSK 0865864
. V10.01.01 16/03/2011 JP  Increased printer size CAR 239574                    
. *----------------------------------------------------------------------
. * Include Name  :   OUTLPCFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   Scheduling Table                   
. *
. * File Type     :   SQL
. *
. * File Name     :   outlpcaf.dat
. *
. * NOTE: Any file changes made need to be reflected in the save variables
. *       below and the save and restore routines in the IO
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTLPCA1   IFILE    SQL, FIXED=119, KEY="U1-5"                                  
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTLPSCHE  DIM       5      5        1     Schedule No. (Allocated Unique ID) 
OTLPURNO  DIM       8      8        6     U/R Number                         
OTLPBOOK  DIM       8      8        14    Booking Number                     
OTLPSITE  DIM       6      6        22    Site Code                          
OTLPCLIN  DIM       6      6        28    Clinic ID                          
OTLPSDAT  DIM       8      8        34    Start Date (CCYYMMDD)              
OTLPSTIM  DIM       8      8        42    Start Time (HH:MM:SS)              
OTLPSLOT  DIM       3      3        50    Slot Number                        
OTLPPRNT  DIM       6      6        53    Printer                            
OTLPCOPY  FORM      3      3        59    Number of Copies                   
OTLPSTAT  DIM       6      6        62    Stationery Code                    
OTLPLETT  DIM       3      3        68    Letter Number                      
OTLPPTYP  DIM       1      1        71    Print Type (1=Form,2=Letter,3=Invoi
OTLPWEBU  DIM       10     10       72    WEB User ID (websecaf)             
OTLPRDAT  DIM       8      8        82    Request Date (CCYYMMDD)            
OTLPRTIM  DIM       8      8        90    Request Time (HH:MM:SS)            
OTLPSERS  DIM       1      1        98    Series Booking Flag 0=No,1=Yes     
OTLPSPAR  DIM       20     20       99    Spare Variable                     
.
.End of Record                      119  
.
. Save variables used by save and restore routines SOTL0000 and ROTL0000
.
SOVVSCHE  DIM       5      * Schedule No. (Allocated Unique ID)
SOVVURNO  DIM       8      * U/R Number
SOVVBOOK  DIM       8      * Booking Number
SOVVSITE  DIM       6      * Site Code
SOVVCLIN  DIM       6      * Clinic ID
SOVVSDAT  DIM       8      * Start Date (CCYYMMDD)
SOVVSTIM  DIM       8      * Start Time (HH:MM:SS)
SOVVSLOT  DIM       3      * Slot Number
SOVVPRNT  DIM       6      * Printer
SOVVCOPY  FORM      3      * Number of Copies
SOVVSTAT  DIM       6      * Stationery Code
SOVVLETT  DIM       3      * Letter Number
SOVVPTYP  DIM       1      * Print Type (1=Form,2=Letter,3=Invoi
SOVVWEBU  DIM       10     * WEB User ID (websecaf)
SOVVRDAT  DIM       8      * Request Date (CCYYMMDD)
SOVVRTIM  DIM       8      * Request Time (HH:MM:SS)
SOVVSERS  DIM       1      * Series Booking Flag 0=No,1=Yes
