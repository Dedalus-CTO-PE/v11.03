. V10.11.01 04/08/2017 SA C-0837479 Created File Definition                     
. *----------------------------------------------------------------------
. * Include Name  :   OPRCTYFD.INC
. *
. * Function      :   File Def'n Include for Theatre System                     
. *                   Theatre Consumption Type Items     
. *
. * File Type     :   SQL
. *
. * File Name     :   oprctyaf.dat
. *
. * Index Values  :   KEY13   KEY22                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OPRCTYA1   IFILE    SQL, FIXED=109, KEY="U1-10,11-11,12-13"
OPRCTYA2   IFILE    SQL, FIXED=109, KEY="U1-10,11-11,14-22,12-13"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPCYUNIQ  DIM       10     10       1     Theatre Unique ID                  
OPCYTEAM  DIM       1      1        11    Team Number                        
OPCYCNTR  DIM       2      2        12    Counter                            
OPCYITEM  DIM       9      9        14    Item Code                          
OPCYCTYP  DIM       1      1        23    Consumption Type                   
.                                         0/Blank = Used,1=Not Use,2=Expired   
OPCYQUAN  FORM      4      3        24    Quantity                           
OPCYCDAT  DIM       8      8        27    Date Record Created (ccyymmdd)     
OPCYCTIM  DIM       8      8        35    Time Record Created (hh:mm:ss)     
OPCYCUID  DIM       10     10       43    Created by WEB User ID (websecaf)  
OPCYUDAT  DIM       8      8        53    Date Record Updated (ccyymmdd)     
OPCYUTIM  DIM       8      8        61    Time Record Updated (hh:mm:ss)     
OPCYUUID  DIM       10     10       69    Updated by WEB User ID (websecaf)  
OPCYSPAR  DIM       30     30       79    Spare Variable                     
.
.End of Record                      109  
.
