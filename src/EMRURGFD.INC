. V10.14.01 28/03/2019 JTA C-0857392 Created FD
. *----------------------------------------------------------------------
. * Include Name  :   EMRURGFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   ABF EMR URG Classification tab     
. *
. * File Type     :   SQL
. *
. * File Name     :   emrurgaf.dat
. *
. * Index Values  :   KEY47   KEY47   KEY47   KEY47   KEY47                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRURGA1   IFILE    SQL, FIXED=236, KEY="U1-8,9-11,12-14,15-17,18-47"
EMRURGA2   IFILE    SQL, FIXED=236, KEY="U9-11,12-14,15-17,18-47,1-8"
EMRURGA3   IFILE    SQL, FIXED=236, KEY="U12-14,15-17,18-47,1-8,9-11"
EMRURGA4   IFILE    SQL, FIXED=236, KEY="U15-17,18-47,1-8,9-11,12-14"
EMRURGA5   IFILE    SQL, FIXED=236, KEY="U18-47,1-8,9-11,12-14,15-17"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMUREDAT  DIM       8      8        1     Effective End Date (ccyymmdd)      
EMURESTA  DIM       3      3        9     Episode End Status Cat ED          
EMURTRIA  DIM       3      3        12    Triage Code Cat AA                 
EMURVTYP  DIM       3      3        15    Type of Visit Cat ee               
EMURMDBC  DIM       30     30       18    MDB Code                           
EMURURGV  DIM       6      6        48    URG Value                          
EMURURGD  DIM       80     80       54    URG Description                    
EMURCDAT  DIM       8      8        134   Date record created                
EMURCTIM  DIM       8      8        142   Time record created                
EMURCUID  DIM       10     10       150   Record created by                  
EMURUDAT  DIM       8      8        160   Date record updated                
EMURUTIM  DIM       8      8        168   Time record updated                
EMURUUID  DIM       10     10       176   Record updated by                  
EMURSPAR  DIM       50     50       186   Spare variable                     
.
.End of Record                      236  
.
