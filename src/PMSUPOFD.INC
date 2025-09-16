. V9.12.001 16/02/2010 EC  Created FD CAR 207040                                
. *----------------------------------------------------------------------
. * Include Name  :   PMSUPOFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Patient H/Fund Program OP Details  
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsupoaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSUPOA1   IFILE    SQL, FIXED=146, KEY="U1-8,9-11,12-14,15-20,21-23,24-31,32-34"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMUOURNO  DIM       8      8        1     U/R Number                         
PMUOATYP  DIM       3      3        9     Admission Type (Cat A)             
PMUOCLAM  DIM       3      3        12    Claim Code (Cat CL)                
PMUOFUND  DIM       6      6        15    Health Fund                        
PMUOTABT  DIM       3      3        21    Health Fund Table Type (Cat HT)    
PMUOEDAT  DIM       8      8        24    Expiry Date (CCYYMMDD)             
PMUOVTYP  DIM       3      3        32    Visit Type (Cat CV)                
PMUOMAXO  DIM       3      3        35    Maximum Number of OP Visits        
PMUOWARO  DIM       3      3        38    Warn at X Number of OP Visits      
PMUOMANO  DIM       3      3        41    Manual OP Visit Count              
PMUOCDAT  DIM       8      8        44    Date Record Created (CCYYMMDD)     
PMUOCTIM  DIM       8      8        52    Time Record Created (HH:MM:SS)     
PMUOCUID  DIM       10     10       60    WEB User ID Created (websecaf)     
PMUOUDAT  DIM       8      8        70    Update Date (CCYYMMDD)             
PMUOUTIM  DIM       8      8        78    Time Updated (HH:MM:SS)            
PMUOUUID  DIM       10     10       86    WEB User ID Updated (websecaf)     
PMUOSPAR  DIM       50     50       96    Spare                              
.
.End of Record                      146  
.
