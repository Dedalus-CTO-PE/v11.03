. 10.01.01  23/12/2010 Saroeun Soeur CAR 235856
.                       added OBCDTYP 
. 6.05 .005 03/02/1999                                                       
. 6.05 .006 24/02/1999 kcn changed security level to dim 2                   
. 6.05 .007 24/02/1999 kcn increased size of highlight level                 
. *----------------------------------------------------------------------
. * Include Name  :   OBSCNCFD.INC
. *
. * Function      :   File Def'n Include for WEB
. *                   Observation Clinical Note Type                 
. *
. * File Type     :   SQL
. *
. * File Name     :   obscncaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
OBSCNCA1   IFILE    SQL, FIXED=77, KEY="U1-3"                                   
OBSCNCA2   IFILE    SQL, FIXED=77, KEY="U4-38,1-3"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
OBCCTYP   DIM       3      3        1     Type of Note                       
OBCCDES   DIM       35     35       4     Description                        
OBCCTMI   DIM       3      3        39    Input Template ID                  
OBCCTMO   DIM       3      3        42    Output Template ID                 
OBCCSLV   DIM       2      2        45    Security Level                     
OBCCDHL   DIM       3      3        47    Default Highlight Level            
OBCDTYP   DIM       2      2        50    Discharge Note Type (Y/N/NA)
OBCCSPA   DIM       25     25       52    Spare                              
.
.End of Record                      77   
.
