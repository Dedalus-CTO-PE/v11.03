.*****************************************************************************
.*                                ACCMAPIO.INC                               *
.*     Common Temporary Mapping File I/O Routines for ACC data               *
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
.         Category-Codes (patcodes)
.
RDTEMP1   MOVE      ZERO,OVRCD
          RESET     KEY5
          READ      TEMP1,KEY5;OLDCTCAT,OLDCTCOD,NEWCTCAT,NEWCTCOD
          GOTO      OVERCOND IF OVER
          RETURN
.
.         Insurer (patin1af)
.
RDTEMP2   MOVE      ZERO,OVRCD
          RESET     KEY6
          READ      TEMP2,KEY6;OLDINSUR,NEWINSUR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         Employer (pateoraf)
.
RDTEMP3   MOVE      ZERO,OVRCD
          RESET     KEY10
          READ      TEMP3,KEY6;OLDEMPLY,NEWEMPLY
          GOTO      OVERCOND IF OVER
          RETURN
.
.         HCP (pmshcpaf)
.
RDTEMP4   MOVE      ZERO,OVRCD
          RESET     KEY10
          READ      TEMP4,KEY10;OLDHCPCD,NEWHCPCD
          GOTO      OVERCOND IF OVER
          RETURN
.
.         Title (pmstleaf)
.
RDTEMP5   MOVE      ZERO,OVRCD
          RESET     KEY4
          READ      TEMP5,KEY4;OLDTITLE,NEWTITLE
          GOTO      OVERCOND IF OVER
          RETURN
.
.         Relationship (pmsrelaf)
.
RDTEMP6   MOVE      ZERO,OVRCD
          RESET     KEY10
          READ      TEMP6,KEY10;OLDRELNS,NEWRELNS
          GOTO      OVERCOND IF OVER
          RETURN
+
