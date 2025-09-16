. V9.09.001 13/07/2007 EC  Created FD CAR 135536                             
. *----------------------------------------------------------------------
. * Include Name  :   ALLGREFD.INC
. *
. * Function      :   File Def'n Include for Allied Health                      
. *                   Group Contacts                     
. *
. * File Type     :   SQL
. *
. * File Name     :   allgreaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
ALLGREA1   IFILE    SQL, FIXED=141, KEY="U1-8"                                  
ALLGREA2   IFILE    SQL, FIXED=141, KEY="U9-16,1-8"                             
ALLGREA3   IFILE    SQL, FIXED=141, KEY="U20-27,9-16,1-8"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALGECONT  DIM       8      8        1     Contact Number                     
ALGESESN  DIM       8      8        9     Session Number (allgroaf)          
ALGELOCN  DIM       3      3        17    Location (Cat PO)                  
ALGEGDTE  DIM       8      8        20    Group Contact Date (CCYYMMDD)      
ALGEGTIM  DIM       8      8        28    Group Contact Time (HH:MM:SS)      
ALGEDURN  DIM       3      3        36    Duration (minutes)                 
ALGECDAT  DIM       8      8        39    Date Record Created (CCYYMMDD)     
ALGECTIM  DIM       8      8        47    Time Record Created (HH:MM:SS)     
ALGECUID  DIM       10     10       55    WEB User ID Created (websecaf)     
ALGEUDAT  DIM       8      8        65    Date Record Updated (CCYYMMDD)     
ALGEUTIM  DIM       8      8        73    Time Record Updated (HH:MM:SS)     
ALGEUUID  DIM       10     10       81    WEB User ID Updated (websecaf)     
ALGESPAR  DIM       50     50       91    Spare                              
.
.End of Record                      141  
.
