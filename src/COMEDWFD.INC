. V10.12.01 19/01/2018 JP C-0846167 Created                                     
. *----------------------------------------------------------------------
. * Include Name  :   COMEDWFD.INC
. *
. * Function      :   File Def'n Include for Common                             
. *                   EDW Container Information          
. *
. * File Type     :   SQL
. *
. * File Name     :   comedwaf.dat
. *
. * Index Values  :   KEY11   KEY19   KEY19                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
COMEDWA1   IFILE    SQL, FIXED=232, KEY="U1-3,4-11"
COMEDWA2   IFILE    SQL, FIXED=232, KEY="U1-3,12-19,4-11"
COMEDWA3   IFILE    SQL, FIXED=232, KEY="U28-35,1-3,4-11"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
CMEDDSTR  DIM       3      3        1     Data Stream Identifier             
.                                         1=Client                             
.                                         3=Individual Service Provider        
.                                         5=Non-Admitted Service               
.                                         6=Service Scheduling                 
.                                         17=Admitted Patient                  
.                                         18=Emergency Department              
CMEDCNTN  DIM       8      8        4     Container Number                   
CMEDSDAT  DIM       8      8        12    Start Date of Container CCYYMMDD   
CMEDEDAT  DIM       8      8        20    End Date of Container CCYYMMDD     
CMEDCDAT  DIM       8      8        28    Date Created CCYYMMDD              
CMEDCTIM  DIM       8      8        36    Time Created hh:mm:ss              
CMEDCUID  DIM       10     10       44    Created by (websecaf)              
CMEDRDAT  DIM       8      8        54    Date re-extracted CCYYMMDD         
CMEDRTIM  DIM       8      8        62    Time re-extracted hh:mm:ss         
CMEDRUID  DIM       10     10       70    Re-extracted by (websecaf)         
CMEDSNTD  DIM       8      8        80    Sent Date CCYYMMDD                 
CMEDSNTT  DIM       8      8        88    Sent Time hh:mm:ss                 
CMEDSUID  DIM       10     10       96    Sent by (websecaf)                 
CMEDRSND  DIM       8      8        106   Re-sent Date CCYYMMDD              
CMEDRSNT  DIM       8      8        114   Re-sent Time hh:mm:ss              
CMEDRSUI  DIM       10     10       122   Re-sent user id (websecaf)         
CMEDSPAR  DIM       100    100      132   Spare                              
.
.End of Record                      232  
.
