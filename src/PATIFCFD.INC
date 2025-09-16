. V10.11.01 25/07/2017 JT C-0825674 Adding Index 2,3 and 4                      
. V10.05.01 14/08/2014 JT C-253233 New FD for Informed Financial Consent Charge 
. *----------------------------------------------------------------------
. * Include Name  :   PATIFCFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   IFC Other/Consumables/Prosthetic   
. *
. * File Type     :   SQL
. *
. * File Name     :   patifcaf.dat
. *
. * Index Values  :   KEY25   KEY25   KEY25   KEY25                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATIFCA1   IFILE    SQL, FIXED=142, KEY="U1-3,4-9,10-12,13-13,14-22,23-25"
PATIFCA2   IFILE    SQL, FIXED=142, KEY="U4-9,10-12,1-3,13-13,14-22,23-25"
PATIFCA3   IFILE    SQL, FIXED=142, KEY="U13-13,14-22,1-3,4-9,10-12,23-25"
PATIFCA4   IFILE    SQL, FIXED=142, KEY="U13-13,14-22,4-9,10-12,1-3,23-25"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTFCCLTY  DIM       3      3        1     Claim code (Cat CL)                
PTFCFUND  DIM       6      6        4     Health Fund                        
PTFCHTAB  DIM       3      3        10    Health Fund Table Type (Cat HT)    
PTFCRTYP  DIM       1      1        13    Record type                        
.                                         1=Casemix code                       
.                                         2=MBS Code                           
.                                         3=Adm.Type                           
PTFCCMAT  DIM       9      9        14    Casemix Code, MBS Code or Adm.Type 
PTFCCTYP  DIM       3      3        23    Charge Type (Cat ce)               
PTFCRAMT  FORM      12.2   8        26    Rebate Amount                      
PTFCPAMT  FORM      12.2   8        34    Patient Amount                     
PTFCSPRE  DIM       100    100      42    Spare variable                     
.
.End of Record                      142  
.
