.  ************************************************************************
.  *                                                                      *
.  *  Include Name      :   ALLSEDFD.INC                                  *
.  *                                                                      *
.  *  Function          :   Allied Health VINAH Extract Error Detail File *
.  *                                                                      *
.  *  File Type         :   SQL                                           *
.  *                                                                      *
.  *  File Name         :   allsedaf.dat                                  * 
.  *                                                                      * 
.  *  Keys              :   KEY54                                         *
.  *                                                                      *
.  *  Modifications     :                                                 *
.  *     V10.10.01  Steve Armstrong    TSK 0842571                        *
.  *                Added Index 2                                         *
.  ************************************************************************
.  *     V10.03.01  Steve Armstrong    CAR 272756                         *
.  *                Extended length of error description from 70 to 100   *
.  ************************************************************************
.  *      V9.12.01  Steve Armstrong    CAR 207550                         *
.  *                Added counter (ALSEECNT) and included this in index 1 *
.  ************************************************************************
.  *      V9.08.00  Steve Armstrong    CAR 153776                         *
.  *                Created FD.                                           *
.  *                                                                      *
.  ************************************************************************
.
.Data File Definition
.--------------------
ALLSEDA1   IFILE SQL, FIXED=178, KEY="U1-8,9-16,17-24,25-38,39-45,46-54,55-57"
ALLSEDA2   IFILE SQL, FIXED=178, KEY="U46-54,1-8,9-16,17-24,25-38,39-45,55-57"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
ALSEURNO  DIM       8         8       1   U/R Number
ALSEVISN  DIM       8         8       9   Visit Number
ALSEENCT  DIM       8         8      17   Encounter Number
ALSEDTTM  DIM       14        14     25   Message DateTime (ccyymmddhhmmss)
ALSEMTYP  DIM       7         7      39   HL7 Message Type (eg ADT-A04)
ALSEERID  DIM       9         9      46   Error Id (eg PID-10.01)
DALSECNT  DIM       3         3      55   Error Counter
ALSEDESC  DIM       100       100    58   Error Description
ALSESPAR  DIM       20        20    158   Spare Variable
.
.End of Record                      178
.
. Redefine FORM fields from key
. -----------------------------
ALSEECNT  FORM      3
