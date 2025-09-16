. v9.00.001 19/06/2001 dc  created                                           
. *----------------------------------------------------------------------
. * Include Name  :   EMRISMFD.INC
. *
. * Function      :   File Def'n Include for Emergency System                   
. *                   Incomplete Visit Summary Table     
. *
. * File Type     :   SQL
. *
. * File Name     :   emrismaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
EMRISMA1   IFILE    SQL, FIXED=98, KEY="U1-1,2-11"                              
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
EMISTYPE  DIM       1      1        1     Incomplete Type                    
.                                         1 = Doctor
.                                         2 = Nurse
EMISCODE  DIM       10     10       2     Doctor or Nurse Code               
EMISNOIN  FORM      10     6        12    Number Incomplete                  
EMISSPAR  DIM       80     80       18    Spare Variable                     
.
.End of Record                      98   
.
