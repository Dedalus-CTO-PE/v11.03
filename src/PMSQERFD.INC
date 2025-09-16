. V10.05.02 14/11/2014 JP C-308289 Fixed index 2 to have hospital code          
. V10.05.01 01/08/2014 JP C-304255 Added Hospital ID                            
. *----------------------------------------------------------------------
. * Include Name  :   PMSQERFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   QLD Extract Runs                   
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsqeraf.dat
. *
. * Index Values  :   KEY10   KEY18                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSQERA1   IFILE    SQL, FIXED=69, KEY="U1-3,4-7,8-10"                          
PMSQERA2   IFILE    SQL, FIXED=69, KEY="U1-3,11-18,4-7,8-10"                    
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMQEHOSP  DIM       3      3        1     Hospital (pathspaf)                
PMQEYEAR  DIM       4      4        4     Year                               
PMQERUNN  DIM       3      3        8     Run number                         
PMQEEDAT  DIM       8      8        11    End date (CCYYMMDD)                
PMQESPAR  DIM       50     50       19    Spare                              
.
.End of Record                      69   
.
