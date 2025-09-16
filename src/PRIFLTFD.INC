.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   PRIFLTFD.INC                                  *
.  *                                                                      *
.  *  Function          :   File Definition include for Private Practice  *
.  *                        Financial Letter                              *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   prifltrf.dat                                  *
.  *                                                                      *
.  *  Keys              :   KEY 6                                         *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *                                                                      *
.  ************************************************************************
.Data File Definition 
.--------------------
PRIFLTR1   IFILE SQL, FIXED=96, KEY="U1-3,4-6"
PRIFLTR2   IFILE SQL, FIXED=96, KEY="U4-6,1-3" 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DPRFLNUM  DIM       3      3        1     Letter Number
DPRFLLIN  DIM       3      3        4     Line Number
.
PRFLTEXT  DIM       70     70       7     Line of Text
PRFLVARB  FORM      1      2        77    Variable Present
.                                            1 = Yes
.                                            2 = No
PRFLMBOT  FORM      2      2        79    Bottom Margin of Letter
PRFLMTOP  FORM      2      2        81    Top Margin of Letter
PRFLPLEN  FORM      3      3        83    Physical Paper Length
PRFLLEFT  FORM      2      2        86    Left Margin
.
PRLESPAR  DIM       8      8        88    Spare Variables
.
.End of Record                      96
.
.
. Redefine form fields from key
. -----------------------------
.
PRFLNUMB  FORM      3
PRFLLINE  FORM      3
