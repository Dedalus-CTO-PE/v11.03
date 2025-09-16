. V10.06.02 30/11/2015 SJA C-316612 Changed index 1 and added index 2           
. V10.07.01 30/11/2015 DS C-316612 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   MRTCIEFD.INC
. *
. * Function      :   File Def'n Include for Medical Records                    
. *                   Coding Interface Errors            
. *
. * File Type     :   SQL
. *
. * File Name     :   mrtcieaf.dat
. *
. * Index Values  :   KEY24   KEY24                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MRTCIEA1   IFILE    SQL, FIXED=410, KEY="U1-8,9-16,25-32"                       
MRTCIEA2   IFILE    SQL, FIXED=410, KEY="U25-32,1-8,9-16"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MRCEDATE  DIM       8      8        1     Date File Received (ccyymmdd)      
MRCETIME  DIM       8      8        9     Time File Received (hh:mm:ss)      
MRCEURNO  DIM       8      8        17    UR Number                          
MRCEVISN  DIM       8      8        25    Visit Number                       
MRCEFNAM  DIM       100    100      33    Input File Name                    
MRCEERRM  DIM       200    200      133   Error Message                      
MRCEPROC  DIM       1      1        333   Validation Error Processed (1=yes) 
MRCEUFAP  DIM       10     10       334   User ID Flagged as Processed       
MRCEDFAP  DIM       8      8        344   Date Flagged as Processed          
MRCETFAP  DIM       8      8        352   Time Flagged as Processed          
MRCESPAR  DIM       50     50       360   Spare                              
.
.End of Record                      410  
.
