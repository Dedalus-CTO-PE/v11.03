. V11.02.01 24/03/2022 JT C-0814566 Added Hospital id & Effective End date      
. V9.03.001 21/05/2004 P.D Created FD                                           
. *----------------------------------------------------------------------
. * Include Name  :   PATFN2FD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Health Fund Extension File         
. *
. * File Type     :   SQL
. *
. * File Name     :   patfn2af.dat
. *
. * Index Values  :   KEY17   KEY17                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATFN2A1   IFILE    SQL, FIXED=86, KEY="U1-6,25-27,28-35"
PATFN2A2   IFILE    SQL, FIXED=86, KEY="U25-27,1-6,28-35"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTFNHFND  DIM       6      6        1     Health Fund Code                   
PTFNBMVH  FORM      1      2        7     Billing Mech. Ventilation Hrs      
.                                         0=No, 1=Yes                          
PTFNMVRT  FORM      6.2    5        9     Mech. Ventilation Daily Rate       
PTFNHRMV  FORM      2      2        14    Hours for MV Additional Day        
PTFNMVBC  DIM       9      9        16    Misc. charge code for Mech vent    
PTFNHOSP  DIM       3      3        25    Hospital Code (blank for All Hosp.)
PTFNEDAT  DIM       8      8        28    Effective End/To date (ccyymmdd)   
.                                         (blank for Current)
PTFNSPRE  DIM       50     50       36    Spare                              
.
.End of Record                      86   
.
. Other field definitions
. -----------------------
.
. Fields used in PATFN2RD.PBL
.---------------------------
WKFNAFND   DIM         6                   Health Fund
WKFNDATE   DIM         8                   Date
WKFNHOSP   DIM         3                   Hospital Id

