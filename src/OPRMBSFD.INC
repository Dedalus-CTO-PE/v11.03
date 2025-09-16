. V10.05.01 30/07/2014 JP C-299980 Created file                                 
. *----------------------------------------------------------------------
. * Include Name  :   OPRMBSFD.INC
. *
. * Function      :   File Def'n Include for Theatre System                     
. *                   Theatre Provisional MBS Items      
. *
. * File Type     :   SQL
. *
. * File Name     :   oprmbsaf.dat
. *
. * Index Values  :   KEY13                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OPRMBSA1   IFILE    SQL, FIXED=149, KEY="U1-10,11-13"                           
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPMBUNIQ  DIM       10     10       1     Theatre Unique ID                  
OPMBCNTR  DIM       3      3        11    Counter                            
OPMBMBSI  DIM       9      9        14    MBS Item                           
OPMBCUID  DIM       10     10       23    WEB User ID Created (websecaf)     
OPMBCDAT  DIM       8      8        33    Date Record Created (CCYYMMDD)     
OPMBCTIM  DIM       8      8        41    Time Record Created (hh:mm:ss)     
OPMBSPAR  DIM       100    100      49    Spare                              
.
.End of Record                      149  
.
