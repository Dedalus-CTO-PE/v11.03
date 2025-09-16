.*****************************************************************************
.*                            ACCMAPFL.INC                                   *
.*     Common Temporary Mapping File Definitions for ACC data                *
.*          Used by:                                                         *
.* CONVWAIT - W/L Upload program                                             *
.* CONVREFL - Active O/P Referral Upload program                             *
.* CONVBOOK - Future O/P Bookings Upload program                             *
.* CONVPADM - Pre-admissions Upload program                                  *
.*                                                                           *
.* Mods:                                                                     *
.* V10.06.00 18/06/2015  Steve Armstrong  CAR 313849/313856/313857/313858    *
.*           Created include                                                 *
.*****************************************************************************
.
          INC       PATEORFD/INC
          INC       PATIN1FD/INC
          INC       PMSRELFD/INC
          INC       PMSTLEFD/INC
.
.         Category-Codes File - catcodes.dat
.
CATCDFLG  FORM      1                            * Cat-Code mapping flag
TEMP1     IFILE     SQL, FIXED=11, KEY="U1-2,3-5"
.
.Name     Type      Length   Physical   Start   Description
.----     ----      ------   --------   -----   -----------
OLDCTCAT  DIM       2        2          1       Old category
OLDCTCOD  DIM       3        3          3       Old code
NEWCTCAT  DIM       2        2          6       New category
NEWCTCOD  DIM       3        3          8       New code
.End of Record                         11
.
.
.         Insurance File - insuranc.dat
.
INSRFLAG  FORM      1                       * insurance file flag
TEMP2     IFILE     SQL, FIXED=13, KEY="U1-6"
.
.Name     Type      Length   Physical   Start   Description
.----     ----      ------   --------   -----   -----------
OLDINSUR  DIM       6        6          1       Old insurance code
NEWINSUR  DIM       6        6          7       New insurance code
.End of Record                          13
.
.
.         Employer File - employer.dat
.
EMPLFLAG  FORM      1                       * employer file flag
TEMP3     IFILE     SQL, FIXED=13, KEY="U1-6"
.
.Name     Type      Length   Physical   Start   Description
.----     ----      ------   --------   -----   -----------
OLDEMPLY  DIM       6        6          1       Old employer code
NEWEMPLY  DIM       6        6          7       New employer code
.End of Record                          13
.
.         HCP Code File - hcpcode.dat (pmshcpaf)
.
HCPCDFLG  FORM      1                            * HCP Code mapping flag
TEMP4     IFILE     SQL, FIXED=21, KEY="U1-10"
.
.Name     Type      Length   Physical   Start   Description
.----     ----      ------   --------   -----   -----------
OLDHCPCD  DIM       10       10         1       Old HCP code
NEWHCPCD  DIM       10       10        11       New HCP code
.End of Record                         21
.
.         Title File - titlecod.dat
.
TITLECOD  FORM      1                       * Title Code file flag
TEMP5     IFILE     SQL, FIXED=9, KEY="U1-4"
.
.Name     Type      Length   Physical   Start   Description
.----     ----      ------   --------   -----   -----------
OLDTITLE  DIM       4        4          1       Old Title Code
NEWTITLE  DIM       4        4          5       New Title Code
.End of Record                          9
.
.         Relationship File - relation.dat
.
RELATION  FORM      1                       * NOK Relationship file flag
TEMP6     IFILE     SQL, FIXED=21, KEY="U1-10"
.
.Name     Type      Length   Physical   Start   Description
.----     ----      ------   --------   -----   -----------
OLDRELNS  DIM       10       10         1       Old Relationship
NEWRELNS  DIM       10       10         11      New Relationship
.End of Record                          21
+
