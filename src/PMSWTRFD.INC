. V10.03.02 14/03/2012 JP C-261919 Changed indexes                              
. V10.03.01 17/01/2012 JP C-253987 Created for CAR 253987                       
. *----------------------------------------------------------------------
. * Include Name  :   PMSWTRFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   WA Extract Triggers                
. *
. * File Type     :   SQL
. *
. * File Name     :   pmswtraf.dat
. *
. * Index Values  :   KEY19   KEY19                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSWTRA1   IFILE    SQL, FIXED=154, KEY="U1-3,4-11,12-19"                       
PMSWTRA2   IFILE    SQL, FIXED=154, KEY="U1-3,12-19,4-11"                       
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMWTHOSP  DIM       3      3        1     Hospital ID (pathspaf)             
PMWTVISN  DIM       8      8        4     Visit Number                       
PMWTSDAT  DIM       8      8        12    INP Extract start date (CCYYMMDD)  
PMWTMDAT  DIM       8      8        20    MH Extract start date (CCYYMMDD)   
PMWTCDAT  DIM       8      8        28    Created Date (CCYYMMDD)            
PMWTCTIM  DIM       8      8        36    Created Time (hh:mm:ss)            
PMWTWEBC  DIM       10     10       44    Created by                         
PMWTSPAR  DIM       100    100      54    Spare                              
.
.End of Record                      154  
.
