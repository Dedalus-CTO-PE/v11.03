. *****************************************************************************
. *                                                                           *
. * Include Name  : MEHDIAFD.INC                                              *
. *                                                                           *
. * Function      : File Def'n Include for Mental Health                      *
. *                 Diagnosis History Details                                 *
. *                                                                           *
. * File Type     : SQL                                                       *
. *                                                                           *
. * File Name     : mehdiaaf.dat                                              *
. *                                                                           *
. * Keys          : KEY16 KEY24                                               *
. *                                                                           *
. * I/O Include   : MEHDIAIO.INC                                              *
. *                                                                           *
. * Author        : Justin Coates 12/08/1991                                  *
. *                                                                           *
. * Modifications :                                                           *
. *****************************************************************************
. *      V11.01.01  13/04/2021  Thanh T          TSK 0858604                  *
. *                 Added new field MHDIURNO and created new index MEHDIAA2   *
. *                 on mehdiaaf                                               *
. *****************************************************************************
. *      V10.14.01  28/03/2019  Steve Armstrong  TSK 0856503                  *
. *                 Added new fields MHDIDTY1 to MHDIDTY6                     *
. *****************************************************************************
. *      V10.04.01  10/02/2014  Patrick Adair  CAR 230859                     *
. *                 Increased ICD10 descriptions from 30 to 200 as per        *
. *                 CAR 273419 - spec required 100 chars only                 *
. *****************************************************************************
. *      V10.00.01  26/03/2010  Mike Laming    CAR 217575                     *
. *                 Added "NZ Mental Health" changes - 25 new fields          *
. *****************************************************************************
. *       V9.09.02  19/02/2007 JT              CAR 156964                     *
. *                 Added AXIS III Code and Description
. *       V9.09.01  10/10/2007 JT              CAR 135498                     *
. *                 Added Indicator record sent to MHINC                      *
. *****************************************************************************
. *       V9.04.01  18/11/2004  Davin          CAR 44068                      *
. *                 Increased axis code (I and II) descriptions from 30 to 70 *
. *                 Added spare variable and increased file length            *
. *                 19/09/1997  Steve Armstrong                               *
. *                 Added MHDIAXIV                                            *
. *****************************************************************************
.
.Data File Definition
.--------------------
MEHDIAA1  IFILE     SQL, FIXED=2269, KEY="U1-8,9-16"
MEHDIAA2  IFILE     SQL, FIXED=2269, KEY="U2215-2222,1-8,9-16"
.
. Name    Type      Length  Phys.  Start  Description
. ----    ----      ------  -----  -----  -----------
DMHDIADM  DIM       8           8      1  Admission Number
MHDIDATE  DIM       8           8      9  Date of diagnosis change ccyymmdd
MHDIICD1  DIM       9           9     17  1st ICD10  code
MHDIDES1  DIM       200       200     26  1st ICD10  description
MHDISUP1  FORM      1           2    226  Suppress 1st ICD9 code ?
.                                           1 = Yes ; 2 = No
MHDIDAT1  DIM       8           8    228  Date of Last change to 1st ICD9 code
MHDIICD2  DIM       9           9    236  2nd ICD10  code
MHDIDES2  DIM       200       200    245  2nd ICD10  description
MHDISUP2  FORM      1           2    445  Suppress 2nd ICD9 code ?
.                                           1 = Yes ; 2 = No
MHDIDAT2  DIM       8           8    447  Date of Last change to 2nd ICD9 code
MHDIX1CA  DIM       9           9    455  Axis I Code A
MHDIX1CB  DIM       9           9    464  Axis I Code B
MHDIX1CC  DIM       9           9    473  Axis I Code C
MHDIX1DA  DIM       70         70    482  Axis I description A
MHDIX1DB  DIM       70         70    552  Axis I description B
MHDIX1DC  DIM       70         70    622  Axis I description C
MHDIX2CA  DIM       9           9    692  Axis II Code A
MHDIX2CB  DIM       9           9    701  Axis II Code B
MHDIX2CC  DIM       9           9    711  Axis II Code C
MHDIX2DA  DIM       70         70    719  Axis II description A
MHDIX2DB  DIM       70         70    789  Axis II description B
MHDIX2DC  DIM       70         70    859  Axis II description C
MHDIX3DS  DIM       50         50    929  Axis III description
MHDIX4CD  DIM       3           3    979  Axis IV code  (Cat xa)
MHDIX5CD  DIM       3           3    982  Axis V code   (Cat xb)
MHDIXDAT  DIM       8           8    985  Date of last change to DSMIIIR diag.
MHDIOPER  DIM       4           4    993  Operator id who made change
MHDIAXIV  DIM       20         20    997  Axis IV Description
MHDIMOHR  DIM       1           1   1017  MOH Indicator Record sent to MHINC
.                                         Blank=Not for MHINC
.                                         0=Unsent
.                                         1=Sent
.                                         2=Send Delete required
.                                         3=Send Discharge required
.                                         4=Send RF and Discharge required
.                                         5=Send Delete Discharge required
MHDIX3CA  DIM       9           9   1018  Axis III Code A
MHDIX3CB  DIM       9           9   1027  Axis III Code B
MHDIX3CC  DIM       9           9   1036  Axis III Code C
MHDIX3DA  DIM       70         70   1045  Axis III description A
MHDIX3DB  DIM       70         70   1115  Axis III description B
MHDIX3DC  DIM       70         70   1185  Axis III description C
MHDICDAT  DIM       8           8   1255  Date Record Created (ccyymmdd)
MHDICTIM  DIM       8           8   1263  Time Record Created (hh:mm:ss)
MHDICUID  DIM       10         10   1271  WEB User ID Created (websecaf)
MHDIUDAT  DIM       8           8   1281  Date Record Updated (ccyymmdd)
MHDIUTIM  DIM       8           8   1289  Time Record Updated (hh:mm:ss)
MHDIUUID  DIM       10         10   1297  WEB User ID Updated (websecaf)
MHDIICD3  DIM       9           9   1307  3rd ICD10 Code
MHDIDES3  DIM       200       200   1316  3rd ICD10 Description
MHDISUP3  FORM      1           2   1516  Suppress 3rd ICD10 Code? - 1=Yes 2=No
MHDIDAT3  DIM       8           8   1518  Date of last change to 3rd ICD10 Code
MHDIICD4  DIM       9           9   1526  4th ICD10 Code
MHDIDES4  DIM       200       200   1535  4th ICD10 Description
MHDISUP4  FORM      1           2   1735  Suppress 4th ICD10 Code? - 1=Yes 2=No
MHDIDAT4  DIM       8           8   1737  Date of last change to 4th ICD10 Code
MHDIICD5  DIM       9           9   1745  5th ICD10 Code
MHDIDES5  DIM       200       200   1754  5th ICD10 Description
MHDISUP5  FORM      1           2   1954  Suppress 5th ICD10 Code? - 1=Yes 2=No
MHDIDAT5  DIM       8           8   1956  Date of last change to 5th ICD10 Code
MHDIICD6  DIM       9           9   1964  6th ICD10 Code
MHDIDES6  DIM       200       200   1973  6th ICD10 Description
MHDISUP6  FORM      1           2   2173  Suppress 6th ICD10 Code? - 1=Yes 2=No
MHDIDAT6  DIM       8           8   2175  Date of last change to 6th ICD10 Code
MHDIP1CA  DIM       1           1   2183  Axis I  Code A is Primary - 0=no 1=yes
MHDIP1CB  DIM       1           1   2184  Axis I  Code B is Primary - 0=no 1=yes
MHDIP1CC  DIM       1           1   2185  Axis I  Code C is Primary - 0=no 1=yes
MHDIP2CA  DIM       1           1   2186  Axis II Code A is Primary - 0=no 1=yes
MHDIP2CB  DIM       1           1   2187  Axis II Code B is Primary - 0=no 1=yes
MHDIP2CC  DIM       1           1   2188  Axis II Code C is Primary - 0=no 1=yes
MHDIHCPC  DIM       10         10   2189  HCP Code
MHDICAST  DIM       10         10   2199  Case Team Code
MHDIDTY1  DIM       1           1   2209  1st ICD10 diagnosis type
.                                           A = Principal
.                                           B = Other Relevant
.                                           P = Provisional
MHDIDTY2  DIM       1           1   2210  2nd ICD10 diagnosis type
.                                           A = Principal
.                                           B = Other Relevant
.                                           P = Provisional
MHDIDTY3  DIM       1           1   2211  3rd ICD10 diagnosis type
.                                           A = Principal
.                                           B = Other Relevant
.                                           P = Provisional
MHDIDTY4  DIM       1           1   2212  4th ICD10 diagnosis type
.                                           A = Principal
.                                           B = Other Relevant
.                                           P = Provisional
MHDIDTY5  DIM       1           1   2213  5th ICD10 diagnosis type
.                                           A = Principal
.                                           B = Other Relevant
.                                           P = Provisional
MHDIDTY6  DIM       1           1   2214  6th ICD10 diagnosis type
.                                           A = Principal
.                                           B = Other Relevant
.                                           P = Provisional
MHDIURNO  DIM       8           8   2215  U/R Number
MHDISPAR  DIM       46         46   2223  Spare variable
.
.End of Record                      2269
.
.
.Redefine FORM fields from key
.-----------------------------
MHDIADMN  FORM      8
.
