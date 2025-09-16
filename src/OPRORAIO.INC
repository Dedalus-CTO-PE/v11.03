.******************************************************************************
.  Include Name  : OPRORAIO.INC                                               *
.  Function      : IO ROUTINES for                                            *
.  File Name     : oproraaf.dat     SQL                                       *
.                  opraudra.dat                                               *
.  Author        : J.Ceniza        09/10/90                                   *
.  Keys          : KEY14,KEY19                                                *
.******************************************************************************
.
RAOPORA1  MOVE      ZERO,OVRCD
          RESET     KEY14
          READ      OPRORAA1,KEY14;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSOPORA1  MOVE      ZERO,OVRCD
          RESET     KEY14
          READ      OPRORAA1,KEY14;;
          RETURN  
.
RDOPORA1  MOVE      ZERO,OVRCD
          RESET     KEY14
          READ      OPRORAA1,KEY14;OPRADATE,OPRAROOM,OPRAVAIL,OPRASPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RKOPORA1  MOVE      ZERO,OVRCD
          READKS    OPRORAA1;OPRADATE,OPRAROOM,OPRAVAIL,OPRASPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RPOPORA1  MOVE      ZERO,OVRCD
          READKP    OPRORAA1;OPRADATE,OPRAROOM,OPRAVAIL,OPRASPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
UPOPORA1  UPDATE    OPRORAA1;OPRADATE,OPRAROOM,OPRAVAIL,OPRASPAR
          RETURN
.
WROPORA1  RESET     KEY14
          WRITE     OPRORAA1,KEY14;KEY14,OPRAVAIL,OPRASPAR
          RETURN  
.
DEOPORA1  RESET     KEY14
          DELETE    OPRORAA1,KEY14
          RETURN
.
.  2nd index
.
RAOPORA2  MOVE      ZERO,OVRCD
          RESET     KEY14
          READ      OPRORAA2,KEY14;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RSOPORA2  MOVE      ZERO,OVRCD
          RESET     KEY14
          READ      OPRORAA2,KEY14;;
          RETURN  
.
RDOPORA2  MOVE      ZERO,OVRCD
          RESET     KEY14
          READ      OPRORAA2,KEY14;OPRADATE,OPRAROOM,OPRAVAIL,OPRASPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RKOPORA2  MOVE      ZERO,OVRCD
          READKS    OPRORAA2;OPRADATE,OPRAROOM,OPRAVAIL,OPRASPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RPOPORA2  MOVE      ZERO,OVRCD
          READKP    OPRORAA2;OPRADATE,OPRAROOM,OPRAVAIL,OPRASPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
.******************************************************************************
.
.    Audit IO routines
.
ASOPORA   MOVE      ZERO,OVRCD
          RESET     KEY19
          READ      OPRAUDRA,KEY19;;
          RETURN  
.
AKOPORA   MOVE      ZERO,OVRCD
          READKS    OPRAUDRA;OPRAAUDD,OPRAAUDT,OPRAAUDP,OPRAAUDR,OPRAAUDS:
                    OPRAAUDO,OPRADATE,OPRAROOM,OPRAVAIL,OPRASPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
AWOPORA   RESET     KEY19
          WRITE     OPRAUDRA,KEY19;KEY19,OPRAAUDS,OPRAAUDO,OPRADATE:
                    OPRAROOM,OPRAVAIL,OPRASPAR
          RETURN  
.
AUOPORA   UPDATE    OPRAUDRA;OPRAAUDD,OPRAAUDT,OPRAAUDP,OPRAAUDR:
                    OPRAAUDS,OPRAAUDO,OPRADATE:
                    OPRAROOM,OPRAVAIL,OPRASPAR
          RETURN  
.
ADOPORA   RESET     KEY19
          DELETE    OPRAUDRA,KEY19
          RETURN
.******************************************************************************
