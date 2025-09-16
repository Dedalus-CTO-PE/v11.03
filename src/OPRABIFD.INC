. V10.10.01 29/05/2017 SA C-0837660 File Definition Created                     
. *----------------------------------------------------------------------
. * Include Name  :   OPRABIFD.INC
. *
. * Function      :   File Def'n Include for Theatre System                     
. *                   Antibiotics                        
. *
. * File Type     :   SQL
. *
. * File Name     :   oprabiaf.dat
. *
. * Index Values  :   KEY15   KEY31                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OPRABIA1   IFILE    SQL, FIXED=394, KEY="U1-10,11-13,14-15"
OPRABIA2   IFILE    SQL, FIXED=394, KEY="U1-10,233-240,241-248,11-13,14-15"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPAIUNIQ  DIM       10     10       1     Theatre Unique ID                  
OPAIANTB  DIM       3      3        11    Antibiotic Code (Cat ab)           
OPAICNTR  DIM       2      2        14    Counter (Right Justified)          
OPAIPANT  DIM       3      3        16    Prophylactic Antibiotic Code       
.                                         (Cat ab)                             
OPAITGIV  DIM       8      8        19    Time Given (hh:mm:ss)              
OPAITUNK  DIM       3      3        27    Time Unknown Code (Cat tu)         
OPAIACNT  DIM       3      3        30    Antibiotic Cont. > 24 Hrs Code     
.                                         (Cat aC)                             
OPAICOMM  DIM       200    200      33    Comments                           
OPAICDAT  DIM       8      8        233   Record Created Date (ccyymmdd)     
OPAICTIM  DIM       8      8        241   Record Created Time (hh:mm:ss)     
OPAICUID  DIM       10     10       249   Record Created by webPAS User ID   
.                                         (websecaf)                           
OPAIUDAT  DIM       8      8        259   Record Updated Date (ccyymmdd)     
OPAIUTIM  DIM       8      8        267   Record Updated Time (hh:mm:ss)     
OPAIUUID  DIM       8      8        275   Record Updated by webPAS User ID   
.                                         (websecaf)                           
OPAIDELT  DIM       1      1        283   Record Deleted Flag                
OPAIUDEL  DIM       10     10       284   Record Deleted by webPAS User ID   
.                                         (websecaf)                           
OPAISPAR  DIM       100    100      294   Spare Variable                     
.
.End of Record                      394  
.
