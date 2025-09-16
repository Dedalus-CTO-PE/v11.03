. V10.13.01 25/07/2018 RPH C-0848506 Extended PRCDDOCT from 6 to 10 chars       
. V10.06.01 25/03/2015 JT C-284113 New FD for Referral Comment Header           
. *----------------------------------------------------------------------
. * Include Name  :   PRICDTFD.INC
. *
. * Function      :   File Def'n Include for Private Practice                   
. *                   Referral Comment Header detail     
. *
. * File Type     :   SQL
. *
. * File Name     :   pricdtaf.dat
. *
. * Index Values  :   KEY36                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PRICDTA1   IFILE    SQL, FIXED=223, KEY="U1-8,9-14,15-24,25-27,28-30,31-36"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PRCDUNIQ  DIM       8      8        1     Unique Identifier                  
PRCDPRAC  DIM       6      6        9     Medical Practice Code              
PRCDDOCT  DIM       10     10       15    Service Doctor                     
PRCDPIND  DIM       3      3        25    Patient Indicator (Cat GI)         
PRCDCTYP  DIM       3      3        28    Comment Type                       
.                                         001 - PRI Referral Comment           
PRCDNOTE  DIM       6      6        31    Note Number                        
PRCDIDAT  DIM       8      8        37    Input Date (CCYYMMDD)              
PRCDITIM  DIM       8      8        45    Input Time (HH:MM:SS)              
PRCDIUSR  DIM       10     10       53    Input by WEB User ID (websecaf)    
PRCDIOCG  DIM       3      3        63    Occupational Group User ID (Input) 
PRCDDIND  DIM       1      1        66    Delete Indicator (0=No,1=Yes)      
PRCDDDAT  DIM       8      8        67    Delete Date (CCYYMMDD)             
PRCDDTIM  DIM       8      8        75    Delete Time (HH:MM:SS)             
PRCDDUSR  DIM       10     10       83    Delete by WEB User ID (websecaf)   
PRCDDOCG  DIM       3      3        93    Occupational Group User ID (Delete)
PRCDSPAR  DIM       127    127      96    Spare Variable                     
.
.End of Record                      223  
.
