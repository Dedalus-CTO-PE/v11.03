. V9.11.002 17/03/2009 ML  Change Unique No. to Dim 3 (was Dim 2)            
. V9.11.001 07/01/2009 ML  Ported from V9.10                                    
. *----------------------------------------------------------------------
. * Include Name  :   MEHPCNFD.INC
. *
. * Function      :   File Def'n Include for Mental Health                      
. *                   PRIMHD Transmission CN Record      
. *
. * File Type     :   SQL
. *
. * File Name     :   mehpcnaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MEHPCNA1   IFILE    SQL, FIXED=140, KEY="U1-8,9-11,12-19,20-27,28-30"           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MHPNXDAT  DIM       8      8        1     Extract Date                       
MHPNXNUM  DIM       3      3        9     Extract No. for this Date          
MHPNVISN  DIM       8      8        12    Referral Id./Visit No.             
MHPNURNO  DIM       8      8        20    UR No./Event HCU Id.               
.                                         *                             
MHPNOCUR  DIM       3      3        28    Multi Occurrence within RD Record   
.                                                                       
MHPNERID  DIM       9      9        31    Error/Warning Reference Code       
.                                         * ---- start of CN Record ----
MHPNCSCD  DIM       20     20       40    Classification Code Id             
MHPNCSYS  DIM       2      2        60    Clinical Coding System Id          
MHPNDTYP  DIM       1      1        62    Diagnosis Type                     
MHPNCCOD  DIM       8      8        63    Clinical Code Value                
MHPNICID  DIM       2      2        71    Issue Coding System Id             
MHPNITYP  DIM       1      1        73    Issue Type                         
MHPNIVAL  DIM       8      8        74    Issue Code Value                   
MHPNSDAT  DIM       19     19       82    Start Date Time                    
MHPNEDAT  DIM       19     19       101   End Date Time                      
MHPNSPAR  DIM       20     20       120   Spare                              
.
.End of Record                      140  
.
