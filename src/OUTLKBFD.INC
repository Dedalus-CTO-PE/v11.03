. V9.03.009 08/08/2003                                                       
. V9.03.010 19/08/2003                                                       
. *----------------------------------------------------------------------
. * Include Name  :   OUTLKBFD.INC
. *
. * Function      :   File Def'n Include for Outpatients                        
. *                   Series booking link table          
. *
. * File Type     :   SQL
. *
. * File Name     :   outlkbaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OUTLKBA1   IFILE    SQL, FIXED=159, KEY="U1-8,9-16,17-24"                       
OUTLKBA2   IFILE    SQL, FIXED=159, KEY="U1-8,17-24,9-16"                       
FILLKBA1   INIT     "lkbaf"
FILLKBA2   INIT     "lkbaf"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OTLKURNO  DIM       8      8        1     U/R Number                         
OTLKOBOK  DIM       8      8        9     Original Booking Number            
OTLKLBOK  DIM       8      8        17    Linked Booking Number              
OTLKBSTA  DIM       1      1        25    Status of Booking                  
OTLKSSTA  DIM       1      1        26    Status of Series                   
OTLKLDAT  DIM       8      8        27    Date Link Made (CCYYMMDD)          
OTLKLTIM  DIM       8      8        35    Time Link Made (HH:MM:SS)          
OTLKLUID  DIM       10     10       43    Link Made By Id (websecaf)         
OTLKUDAT  DIM       8      8        53    Update Date (CCYYMMDD)             
OTLKUTIM  DIM       8      8        61    Update Time (HH:MM:SS)             
OTLKUUID  DIM       10     10       69    Update Id (websecaf)               
OTLKSPAR  DIM       80     80       79    Spare Variable                     
.
.End of Record                      159  
.
