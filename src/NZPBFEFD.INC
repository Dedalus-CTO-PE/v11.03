. V9.08.00 02/10/2006 JT CAR 119985
. *----------------------------------------------------------------------
. * Include Name  :   NZPBFEFD.INC
. *
. * Function      :   File Def'n Include for New Zealand Private                
. *                   NZ Private Bed Fee file            
. *
. * File Type     :   SQL
. *
. * File Name     :   nzpbfeaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
NZPBFEA1   IFILE    SQL, FIXED=198, KEY="U1-3,4-6,7-12,13-20,21-23,24-26,27-34,35-37"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
NZBFHOSP  DIM       3      3        1     Hospital Code (pathspaf)           
NZBFCLMC  DIM       3      3        4     Claim Code (Catg CL)               
NZBFCNTR  DIM       6      6        7     Contract (Health Fund)             
NZBFFTAB  DIM       8      8        13    Fund Table                         
NZBFATYP  DIM       3      3        21    Admission Type (Catg A)            
NZBFBTYP  DIM       3      3        24    Bed Type (Catg BT)                 
NZBFEFDT  DIM       8      8        27    Effective Date (CCYYMMDD)          
NZBFEDAY  DIM       3      3        35    Highest Day in Period              
NZBFRATE  FORM      14.2   9        38    Rate (Price per day)               
NZBFREBA  FORM      14.2   9        47    Rebate Protion                     
NZBFDESC  DIM       30     30       56    Description                        
NZBFCDAT  DIM       8      8        86    Date Record Created (ccyymmdd)     
NZBFCTIM  DIM       8      8        94    Time Record Created (hh:mm:ss)     
NZBFCUID  DIM       10     10       102   WEB User ID Created (websecaf)     
NZBFUDAT  DIM       8      8        112   Date Record Updated (ccyymmdd)     
NZBFUTIM  DIM       8      8        120   Time Record Updated (hh:mm:ss)     
NZBFUUID  DIM       10     10       128   WEB User ID Updated (websecaf)     
NZBFSPAR  DIM       60     60       138   Spare Variable                     
.
.End of Record                      198  
.
