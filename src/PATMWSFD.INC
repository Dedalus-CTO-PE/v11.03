. *----------------------------------------------------------------------
. * Include Name  :   PATMWSFD.INC
. *
. * Function      :   File Def'n Include for Patient        
. *                   Medical Warnings                                
. *
. * File Type     :   SQL
. * Keys          :   KEY14
. *
. * File Name     :   patmwsaf.dat
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PATMWSA1   IFILE    SQL, FIXED=175, KEY="U1-8,9-11,12-14"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PTMWURNO  DIM       8      8        1     U/R Number
PTMWCLSS  DIM       3      3        9     Severity of Warning (Cat VS)
.                                         1st Indicator "D"=Danger
DPTMWCNT  DIM       3      3        12    Unique counter
PTMWDATE  DIM       8      8        15    Date of onset
PTMWTEXT  DIM       70     70       23    Text description
PTMWMARC  DIM       8      8        93    MARC approval date (Danger only)
PTMWHOSP  DIM       20     20       101   Facility who reported warning
PTMWDOCT  DIM       5      5        121   National Doctor code (Doctor only)
PTMWSYS   FORM      2      2        126   Coding system being used (Danger only)
.                                                0 = No coding system
.                                                1 = ICD-9
.                                                2 = ICD-9-CM
.                                                3 = RCC5 (READ)
.                                                4 = ICPC
.                                                5 = PAXUS AMR codes
PTMWCODE  DIM       9      9        128   Code for warning (danger only)
PTMWLUPD  DIM       14     14       137   Date/Time last updated CCYYMMDDHHMMSS
PTMWSPAR  DIM       24     24       151   Spare
.End of Record                      175  
.
.Redefine for form field keys
PTMWCNT   FORM      3
.
