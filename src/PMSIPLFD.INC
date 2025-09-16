. V10.04.01 13/02/2014 EC C-291879 Created FD                                   
. *----------------------------------------------------------------------
. * Include Name  :   PMSIPLFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Polling table for DHS Medicare     
. *
. * File Type     :   SQL
. *
. * File Name     :   pmsiplaf.dat
. *
. * Index Values  :   KEY10                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSIPLA1   IFILE    SQL, FIXED=163, KEY="U1-10"                                 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMILUNIQ  DIM       10     10       1     Unique Id                          
PMILRTYP  DIM       2      2        11    Request Type                       
.                                         "01" - IHI lookup
.                                         "02" - HPI-I lookup - HCP
.                                         "03" - HPI-O lookup - Hospital
.                                         "04" - HPI-O lookup - Practice
.                                         "05" - HPI-O lookup - Hospital Unit
.                                         "06" - HPI-O lookup - OP Site, clinic
.                                                date, start, schedule number 
.                                                and schedule date
PMILCODE  DIM       50     50       13    Request Code                       
.                                         "01" - U/R  
.                                         "02" - HCP
.                                         "03" - Hospital
.                                         "04" - Practice
.                                         "05" - Hospital ,Unit and HPIO
.                                         "06" - OP Site, clinic
.                                                date, start, schedule number 
.                                                and schedule date
PMILUSID  DIM       10     10       63    Web User Id (websecaf)             
PMILSPAR  DIM       90     90       73    Spare                              
.
.End of Record                      163  
.
