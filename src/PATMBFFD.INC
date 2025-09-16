. V10.01.02 08/12/2010 PV  Added USER ID / Allocation Indicator  CAR 233034
. V10.01.01 03/12/2010 JT
. *----------------------------------------------------------------------
. * Include Name  :   PATMBFFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   Mapping Bed Fees                   
. *
. * File Type     :   SQL
. *
. * File Name     :   patmbfaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATMBFA1   IFILE    SQL, FIXED=69, KEY="U1-3,4-9,10-12"                         
PATMBFA2   IFILE    SQL, FIXED=69, KEY="U4-9,1-3,10-12"                         
PATMBFA3   IFILE    SQL, FIXED=69, KEY="U10-12,1-3,4-9"                         
PATMBFA4   IFILE    SQL, FIXED=69, KEY="U13-18,1-3,4-9,10-12"                   
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTMBCLAM  DIM       3      3        1     Claim code                         
PTMBHFND  DIM       6      6        4     Health Fund                        
PTMBATYP  DIM       3      3        10    Admission Type                     
PTMBCNTR  DIM       6      6        13    Contract ID                        
PTMBUSID  DIM       10     10       19    User ID / Allocation Indicator     
PTMBSPAR  DIM       40     40       29    Spare variable                     
.
.End of Record                      69   
.
