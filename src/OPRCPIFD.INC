. V10.10.01 29/05/2017 SA C-0837660 Created File Definition                     
. *----------------------------------------------------------------------
. * Include Name  :   OPRCPIFD.INC
. *
. * Function      :   File Def'n Include for Theatre System                     
. *                   Complications                      
. *
. * File Type     :   SQL
. *
. * File Name     :   oprcpiaf.dat
. *
. * Index Values  :   KEY15   KEY31                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OPRCPIA1   IFILE    SQL, FIXED=379, KEY="U1-10,11-13,14-15"
OPRCPIA2   IFILE    SQL, FIXED=379, KEY="U1-10,216-223,224-231,11-13,14-15"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OPCIUNIQ  DIM       10     10       1     Theatre Unique ID                  
OPCICOMP  DIM       3      3        11    Complication (Cat cM)              
OPCICNTR  DIM       2      2        14    Counter                            
OPCICOMM  DIM       200    200      16    Comments                           
OPCICDAT  DIM       8      8        216   Record Created Date (ccyymmdd)     
OPCICTIM  DIM       8      8        224   Record Created Time (hh:mm:ss)     
OPCICUID  DIM       10     10       232   Record Created by webPAS User ID   
.                                         (websecaf)                           
OPCIUDAT  DIM       8      8        242   Record Updated Date (ccyymmdd)     
OPCIUTIM  DIM       8      8        250   Record Updated Time (hh:mm:ss)     
OPCIUUID  DIM       10     10       258   Record Updated by webPAS User ID   
.                                         (websecaf)                           
OPCIDELT  DIM       1      1        268   Record Deleted Flag                
.                                         0 or blank = not deleted             
.                                         1 = deleted                          
OPCIUDEL  DIM       10     10       269   Record Deleted by webPAS User ID   
.                                         (websecaf)                           
OPCISPAR  DIM       100    100      279   Spare Variable                     
.
.End of Record                      379  
.
