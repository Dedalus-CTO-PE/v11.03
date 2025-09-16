. 5.04 .001 01/10/1996                                                       
. *----------------------------------------------------------------------
. * Include Name  :   EOCLNKFD.INC
. *
. * Function      :   File Def'n Include for Episodes of Care                   
. *                   Linked Events Table         
. *
. * File Type     :   SQL
. *
. * File Name     :   eoclnkaf.dat
. * 
. * Modifications:                                                 
. * V9.00.00  11/10/02  L.Vo                                     
. *           Added EOCLNKA3 index
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EOCLNKA1   IFILE    SQL, FIXED=54, KEY="U1-8,9-13,14-15,16-23"                  
EOCLNKA2   IFILE    SQL, FIXED=54, KEY="U14-15,16-23"                           
EOCLNKA3   IFILE    SQL, FIXED=54, KEY="U16-23,1-8,9-13,14-15"                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ECLNURNO  DIM       8      8        1     U/R Number                         
DECLNEPN  DIM       5      5        9     Episode of Care                    
DECLNHOS  DIM       2      2        14    Hospital                           
DECLNVIS  DIM       8      8        16    Event Number                       
ECLNSPAR  DIM       30     30       24    Spare                              
.
.End of Record                      54   
.
.Redefine Key Variables
.----------------------
ECLNEPNO  FORM      5    
ECLNHOSP  FORM      2    
ECLNVISI  FORM      8    
