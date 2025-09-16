. V11.01.00 01/11/2021 JTA C-0880410 Created On Hold Invoice file
. *----------------------------------------------------------------------
. * Include Name  :   PATFHIFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Health Fund On Hold Invoice        
. *
. * File Type     :   SQL
. *
. * File Name     :   patfhiaf.dat
. *
. * Index Values  :   KEY11   KEY11   KEY11                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATFHIA1   IFILE    SQL, FIXED=255, KEY="U1-3,4-9,10-11"
PATFHIA2   IFILE    SQL, FIXED=255, KEY="U10-11,1-3,4-9"
PATFHIA3   IFILE    SQL, FIXED=255, KEY="U4-9,1-3,10-11"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTFHHOSP  DIM       3      3        1     Hospital ID (pathspaf)             
.                                         Blank - for Single Hospital   
PTFHHFND  DIM       6      6        4     Health Fund (patfn1af)             
PTFHSYST  DIM       2      2        10    System Indicator                   
.                                         1 - Emergency                        
.                                         2 - Outpatients                      
.                                         3 - Inpatients                       
.                                         4 - Private Practice                 
PTFHHDAT  DIM       8      8        12    Hold Invoice From date (ccyymmdd)  
PTFHHREA  DIM       3      3        20    On Hold Reason (Cat rh)            
PTFHDESC  DIM       80     80       23    Decription for On Hold             
PTFHCUID  DIM       10     10       103   Record Created By                  
PTFHCDAT  DIM       8      8        113   Date Record Created                
PTFHCTIM  DIM       8      8        121   Time Record Created                
PTFHUUID  DIM       10     10       129   Record Updated By                  
PTFHUDAT  DIM       8      8        139   Date Record Updated                
PTFHUTIM  DIM       8      8        147   Time Record Updated                
PTFHSPAR  DIM       100    100      155   Spare variable                     
.
.End of Record                      255  
.
