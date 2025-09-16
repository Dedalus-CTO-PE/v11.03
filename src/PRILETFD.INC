.  ************************************************************************
.  *                                                                        *
.  *  Include Name      :   PRILETFD.INC                                    *
.  *                                                                        *
.  *  Function          :   File Definition include for Private Practice    *
.  *                        Letter                                          *
.  *                                                                        * 
.  *  File Type         :   SQL                                             *
.  *                                                                        *
.  *  File Name         :   priletaf.dat                                    *
.  *                                                                        *
.  *  Keys              :   KEY 6                                           *
.  *                                                                        *
.  *  Modifications     :                                                   *
.  *       V9.03.01        Tracey Nguyen CAR 44125                          *
.  *                       Renamed Spare variable from PRLESPAR to PRLETSPA *
.  *                       to fix duplication error with PRIFLTFD/IO        *
.  **************************************************************************
.Data File Definition 
.--------------------
PRILETR1   IFILE SQL, FIXED=96, KEY="U1-3,4-6"
PRILETR2   IFILE SQL, FIXED=96, KEY="U4-6,1-3" 
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
DPRLENUM  DIM       3      3        1     Letter Number
DPRLELIN  DIM       3      3        4     Line Number
.
PRLETEXT  DIM       70     70       7     Line of Text
PRLEVARB  FORM      1      2        77    Variable Present
PRLEMBOT  FORM      2      2        79    Bottom Margin of Letter
PRLEMTOP  FORM      2      2        81    Top Margin of Letter
PRLEPLEN  FORM      3      3        83    Physical Paper Length
PRLELEFT  FORM      2      2        86    Left Margin
.
PRLETSPA  DIM       8      8        88    Spare Variables
.
.End of Record                      96
.
.
. Redefine form fields from key
. -----------------------------
.
PRLENUMB  FORM      3
PRLELINE  FORM      3
