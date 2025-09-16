. V11.03.01 13/07/2023 ITU C-0901388 Created FD                                 
. *----------------------------------------------------------------------
. * Include Name  :   MRTCAHFD.INC
. *
. * Function      :   File Def'n Include for Medical Records                    
. *                   Coding Audit Header                
. *
. * File Type     :   SQL
. *
. * File Name     :   mrtcahaf.dat
. *
. * Index Values  :   KEY24                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MRTCAHA1   IFILE    SQL, FIXED=189, KEY="U1-8,9-16,17-24"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MRCHADMN  DIM       8      8        1     Admission Number                   
MRCHADAT  DIM       8      8        9     Audit Date (ccyymmdd)              
MRCHATIM  DIM       8      8        17    Audit Time (hh:mm:ss)              
MRCHWEBU  DIM       10     10       25    WEB user ID (websecaf)             
MRCHNDRG  DIM       4      4        35    National DRG                       
MRCHDRGV  DIM       3      3        39    National DRG Version               
MRCHHDRG  DIM       4      4        42    Health Fund DRG                    
MRCHHDGV  DIM       3      3        46    Health Fund DRG Version            
MRCHNWAU  DIM       17     17       49    NWAU                               
MRCHICDV  DIM       5      5        66    ICD Version                        
MRCHPDCD  DIM       9      9        71    Primary Diagnosis Code             
MRCHPPCD  DIM       9      9        80    Primary Procedure Code             
MRCHSPAR  DIM       100    100      89    Spare Variable                     
.
.End of Record                      189  
.
