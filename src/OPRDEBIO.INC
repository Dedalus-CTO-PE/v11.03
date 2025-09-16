.
. OPRDEBIO.INC
. ------------
. Filename       :  oprdetbf.dat
. Description    :  Operation Team Detail - File I/O Subroutines
. Variables      :  OVRCD     FORM      1
.                   KEY11     DIM      11
.                   KEY19     DIM      19   - for audits
. Modifications  :  V5.01.01  20/12/89  E.Phan
.                   Added OPDBREQN & OPDBOPER.
.
.                   08/10/90  J.Ceniza according to new specs.
.
RAOPDEB1  MOVE      ZERO,OVRCD
          RESET     KEY11
          READ      OPRDETB1,KEY11;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSOPDEB1  MOVE      ZERO,OVRCD
          RESET     KEY11
          READ      OPRDETB1,KEY11;;
          RETURN  
.
RDOPDEB1  MOVE      ZERO,OVRCD
          RESET     KEY31
          READ      OPRDETB1,KEY11;OPDBUNIQ,OPDBTEAM,OPDBTYD1,OPDBTYD2:
                                   OPDBTYD3,OPDBTYD4,OPDBTYD5,OPDBTYD6:
                                   OPDBTYD7,OPDBTYD8,OPDBDCC1,OPDBDCC2:
                                   OPDBDCC3,OPDBDCC4,OPDBDCC5,OPDBDCC6:
                                   OPDBDCC7,OPDBDCC8,OPDBLVD1,OPDBLVD2:
                                   OPDBLVD3,OPDBLVD4,OPDBLVD5,OPDBLVD6:
                                   OPDBLVD7,OPDBLVD8,OPDBTYN1,OPDBTYN2:
                                   OPDBTYN3,OPDBTYN4,OPDBTYN5,OPDBTYN6:
                                   OPDBNUC1,OPDBNUC2,OPDBNUC3,OPDBNUC4:
                                   OPDBNUC5,OPDBNUC6,OPDBUSR1,OPDBUSR2:
                                   OPDBUSR3,OPDBUSR4,OPDBSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RKOPDEB1  MOVE      ZERO,OVRCD
          READKS    OPRDETB1;OPDBUNIQ,OPDBTEAM,OPDBTYD1,OPDBTYD2:
                                   OPDBTYD3,OPDBTYD4,OPDBTYD5,OPDBTYD6:
                                   OPDBTYD7,OPDBTYD8,OPDBDCC1,OPDBDCC2:
                                   OPDBDCC3,OPDBDCC4,OPDBDCC5,OPDBDCC6:
                                   OPDBDCC7,OPDBDCC8,OPDBLVD1,OPDBLVD2:
                                   OPDBLVD3,OPDBLVD4,OPDBLVD5,OPDBLVD6:
                                   OPDBLVD7,OPDBLVD8,OPDBTYN1,OPDBTYN2:
                                   OPDBTYN3,OPDBTYN4,OPDBTYN5,OPDBTYN6:
                                   OPDBNUC1,OPDBNUC2,OPDBNUC3,OPDBNUC4:
                                   OPDBNUC5,OPDBNUC6,OPDBUSR1,OPDBUSR2:
                                   OPDBUSR3,OPDBUSR4,OPDBSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RPOPDEB1  MOVE      ZERO,OVRCD
          READKP    OPRDETB1;OPDBUNIQ,OPDBTEAM,OPDBTYD1,OPDBTYD2:
                                   OPDBTYD3,OPDBTYD4,OPDBTYD5,OPDBTYD6:
                                   OPDBTYD7,OPDBTYD8,OPDBDCC1,OPDBDCC2:
                                   OPDBDCC3,OPDBDCC4,OPDBDCC5,OPDBDCC6:
                                   OPDBDCC7,OPDBDCC8,OPDBLVD1,OPDBLVD2:
                                   OPDBLVD3,OPDBLVD4,OPDBLVD5,OPDBLVD6:
                                   OPDBLVD7,OPDBLVD8,OPDBTYN1,OPDBTYN2:
                                   OPDBTYN3,OPDBTYN4,OPDBTYN5,OPDBTYN6:
                                   OPDBNUC1,OPDBNUC2,OPDBNUC3,OPDBNUC4:
                                   OPDBNUC5,OPDBNUC6,OPDBUSR1,OPDBUSR2:
                                   OPDBUSR3,OPDBUSR4,OPDBSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
.
UPOPDEB1  UPDATE    OPRDETB1;OPDBUNIQ,OPDBTEAM,OPDBTYD1,OPDBTYD2:
                                   OPDBTYD3,OPDBTYD4,OPDBTYD5,OPDBTYD6:
                                   OPDBTYD7,OPDBTYD8,OPDBDCC1,OPDBDCC2:
                                   OPDBDCC3,OPDBDCC4,OPDBDCC5,OPDBDCC6:
                                   OPDBDCC7,OPDBDCC8,OPDBLVD1,OPDBLVD2:
                                   OPDBLVD3,OPDBLVD4,OPDBLVD5,OPDBLVD6:
                                   OPDBLVD7,OPDBLVD8,OPDBTYN1,OPDBTYN2:
                                   OPDBTYN3,OPDBTYN4,OPDBTYN5,OPDBTYN6:
                                   OPDBNUC1,OPDBNUC2,OPDBNUC3,OPDBNUC4:
                                   OPDBNUC5,OPDBNUC6,OPDBUSR1,OPDBUSR2:
                                   OPDBUSR3,OPDBUSR4,OPDBSPAR
          RETURN
.
WROPDEB1  RESET     KEY11
          WRITE     OPRDETB1,KEY11;KEY11,OPDBTYD1,OPDBTYD2:
                                   OPDBTYD3,OPDBTYD4,OPDBTYD5,OPDBTYD6:
                                   OPDBTYD7,OPDBTYD8,OPDBDCC1,OPDBDCC2:
                                   OPDBDCC3,OPDBDCC4,OPDBDCC5,OPDBDCC6:
                                   OPDBDCC7,OPDBDCC8,OPDBLVD1,OPDBLVD2:
                                   OPDBLVD3,OPDBLVD4,OPDBLVD5,OPDBLVD6:
                                   OPDBLVD7,OPDBLVD8,OPDBTYN1,OPDBTYN2:
                                   OPDBTYN3,OPDBTYN4,OPDBTYN5,OPDBTYN6:
                                   OPDBNUC1,OPDBNUC2,OPDBNUC3,OPDBNUC4:
                                   OPDBNUC5,OPDBNUC6,OPDBUSR1,OPDBUSR2:
                                   OPDBUSR3,OPDBUSR4,OPDBSPAR
          RETURN  
.
DEOPDEB1  RESET     KEY11
          DELETE    OPRDETB1,KEY11
          RETURN
.
.      Audits
.
ASOPDEB   MOVE      ZERO,OVRCD
          RESET     KEY19
          READ      OPRAUDDB,KEY19;;
          RETURN  
.
AKOPDEB   MOVE      ZERO,OVRCD
          READKS    OPRAUDDB;OPDBAUDD,OPDBAUDT,OPDBAUDP,OPDBAUDR,OPDBAUDS:
                             OPDBAUDO,OPDBUNIQ,OPDBTEAM,OPDBTYD1,OPDBTYD2:
                             OPDBTYD3,OPDBTYD4,OPDBTYD5,OPDBTYD6:
                             OPDBTYD7,OPDBTYD8,OPDBDCC1,OPDBDCC2:
                             OPDBDCC3,OPDBDCC4,OPDBDCC5,OPDBDCC6:
                             OPDBDCC7,OPDBDCC8,OPDBLVD1,OPDBLVD2:
                             OPDBLVD3,OPDBLVD4,OPDBLVD5,OPDBLVD6:
                             OPDBLVD7,OPDBLVD8,OPDBTYN1,OPDBTYN2:
                             OPDBTYN3,OPDBTYN4,OPDBTYN5,OPDBTYN6:
                             OPDBNUC1,OPDBNUC2,OPDBNUC3,OPDBNUC4:
                             OPDBNUC5,OPDBNUC6,OPDBUSR1,OPDBUSR2:
                             OPDBUSR3,OPDBUSR4,OPDBSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
AWOPDEB   RESET     KEY19
          WRITE     OPRAUDDB,KEY19;KEY19,OPDBAUDS,OPDBAUDO:
                             OPDBUNIQ,OPDBTEAM,OPDBTYD1,OPDBTYD2:
                             OPDBTYD3,OPDBTYD4,OPDBTYD5,OPDBTYD6:
                             OPDBTYD7,OPDBTYD8,OPDBDCC1,OPDBDCC2:
                             OPDBDCC3,OPDBDCC4,OPDBDCC5,OPDBDCC6:
                             OPDBDCC7,OPDBDCC8,OPDBLVD1,OPDBLVD2:
                             OPDBLVD3,OPDBLVD4,OPDBLVD5,OPDBLVD6:
                             OPDBLVD7,OPDBLVD8,OPDBTYN1,OPDBTYN2:
                             OPDBTYN3,OPDBTYN4,OPDBTYN5,OPDBTYN6:
                             OPDBNUC1,OPDBNUC2,OPDBNUC3,OPDBNUC4:
                             OPDBNUC5,OPDBNUC6,OPDBUSR1,OPDBUSR2:
                             OPDBUSR3,OPDBUSR4,OPDBSPAR
          RETURN  
.
AUOPDEB   UPDATE    OPRAUDDB;OPDBAUDD,OPDBAUDT,OPDBAUDP,OPDBAUDR,OPDBAUDS:
                             OPDBAUDO:
                             OPDBUNIQ,OPDBTEAM,OPDBTYD1,OPDBTYD2:
                             OPDBTYD3,OPDBTYD4,OPDBTYD5,OPDBTYD6:
                             OPDBTYD7,OPDBTYD8,OPDBDCC1,OPDBDCC2:
                             OPDBDCC3,OPDBDCC4,OPDBDCC5,OPDBDCC6:
                             OPDBDCC7,OPDBDCC8,OPDBLVD1,OPDBLVD2:
                             OPDBLVD3,OPDBLVD4,OPDBLVD5,OPDBLVD6:
                             OPDBLVD7,OPDBLVD8,OPDBTYN1,OPDBTYN2:
                             OPDBTYN3,OPDBTYN4,OPDBTYN5,OPDBTYN6:
                             OPDBNUC1,OPDBNUC2,OPDBNUC3,OPDBNUC4:
                             OPDBNUC5,OPDBNUC6,OPDBUSR1,OPDBUSR2:
                             OPDBUSR3,OPDBUSR4,OPDBSPAR
          RETURN  
.
ADOPDEB   RESET     KEY19
          DELETE    OPRAUDDB,KEY19
          RETURN
.
