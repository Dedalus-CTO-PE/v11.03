.
. **********************************************************
. *                                                        *
. *  Include Name :  PATDRGIO                              *
. *                                                        *
. *  Function     :  I/O for patdrgaf file                 *
. *                                                        *
. *  Keys         :  KEY6  KEY14  KEY6                     *
. *                                                        *
. *  Modifications:  V5.00 01/06/89 K.Peak                 *
. *                        Change include heading          *
. *                                                        *
. **********************************************************
.
RDADRGA1  MOVE      ZERO,OVRCD
          RESET     KEY6
          READ      PATDRGA1,KEY6;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDSDRGA1  RESET     KEY6
          READ      PATDRGA1,KEY6;;
          RETURN  
.
RDDRGA1   MOVE      ZERO,OVRCD
          RESET     KEY6
          READ      PATDRGA1,KEY6;DRGFDTE,DRGTDTE,DRGYR,DRGNUM:
                                  DRGCYR,DRGCNUM,DRGLDSC:
                                  DRGMDSC,DRGSDSC,DRGSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDKDRGA1  MOVE      ZERO,OVRCD
          READKS    PATDRGA1;DRGFDTE,DRGTDTE,DRGYR,DRGNUM:
                                  DRGCYR,DRGCNUM,DRGLDSC:
                                  DRGMDSC,DRGSDSC,DRGSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDPDRGA1  MOVE      ZERO,OVRCD
          READKP    PATDRGA1;DRGFDTE,DRGTDTE,DRGYR,DRGNUM:
                                  DRGCYR,DRGCNUM,DRGLDSC:
                                  DRGMDSC,DRGSDSC,DRGSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
UPDRGA1   UPDATE    PATDRGA1;DRGFDTE,DRGTDTE,DRGYR,DRGNUM:
                                  DRGCYR,DRGCNUM,DRGLDSC:
                                  DRGMDSC,DRGSDSC,DRGSPAR
          RETURN
.
WRDRGA1   RESET     KEY6
          WRITE     PATDRGA1,KEY6;DRGFDTE,DRGTDTE,KEY6:
                                  DRGCYR,DRGCNUM,DRGLDSC:
                                  DRGMDSC,DRGSDSC,DRGSPAR
          RETURN  
.
DEDRGA1   RESET     KEY6
          DELETE    PATDRGA1,KEY6
          RETURN
.
RDADRGA2  MOVE      ZERO,OVRCD
          RESET     KEY14
          READ      PATDRGA2,KEY14;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDSDRGA2  RESET     KEY14
          READ      PATDRGA2,KEY14;;
          RETURN  
.
RDDRGA2   MOVE      ZERO,OVRCD
          RESET     KEY14
          READ      PATDRGA2,KEY14;DRGFDTE,DRGTDTE,DRGYR,DRGNUM:
                                  DRGCYR,DRGCNUM,DRGLDSC:
                                  DRGMDSC,DRGSDSC,DRGSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDKDRGA2  MOVE      ZERO,OVRCD
          READKS    PATDRGA2;DRGFDTE,DRGTDTE,DRGYR,DRGNUM:
                                  DRGCYR,DRGCNUM,DRGLDSC:
                                  DRGMDSC,DRGSDSC,DRGSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDPDRGA2  MOVE      ZERO,OVRCD
          READKP    PATDRGA2;DRGFDTE,DRGTDTE,DRGYR,DRGNUM:
                                  DRGCYR,DRGCNUM,DRGLDSC:
                                  DRGMDSC,DRGSDSC,DRGSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDADRGA3  MOVE      ZERO,OVRCD
          RESET     KEY6
          READ      PATDRGA3,KEY6;ANS
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDSDRGA3  RESET     KEY6
          READ      PATDRGA3,KEY6;;
          RETURN  
.
RDDRGA3   MOVE      ZERO,OVRCD
          RESET     KEY6
          READ      PATDRGA3,KEY6;DRGFDTE,DRGTDTE,DRGYR,DRGNUM:
                                  DRGCYR,DRGCNUM,DRGLDSC:
                                  DRGMDSC,DRGSDSC,DRGSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDKDRGA3  MOVE      ZERO,OVRCD
          READKS    PATDRGA3;DRGFDTE,DRGTDTE,DRGYR,DRGNUM:
                                  DRGCYR,DRGCNUM,DRGLDSC:
                                  DRGMDSC,DRGSDSC,DRGSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDPDRGA3  MOVE      ZERO,OVRCD
          READKP    PATDRGA3;DRGFDTE,DRGTDTE,DRGYR,DRGNUM:
                                  DRGCYR,DRGCNUM,DRGLDSC:
                                  DRGMDSC,DRGSDSC,DRGSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
