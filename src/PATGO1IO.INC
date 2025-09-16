.
. **********************************************************
. *                                                        *
. *  Include Name :  PATIOGOV                              *
. *                                                        *
. *  Function     :  I/O for patgo1af file                  *
. *                                                        *
. *  Keys         :  KEY6, KEY36                           *
. *                                                        *
. **********************************************************
.
RDSGOVR1  RESET     KEY6
          READ      PATGO1A1,KEY6;;
          RETURN  
.
RDGOVR1   MOVE      ZERO,OVRCD
          RESET     KEY6
          READ      PATGO1A1,KEY6;GCODE,GNAME,GADD1,GADD2,GADD3,GADD4,GCONT:
                                  GPOST,GTELEB,GVBILL,GVAOUT,GSORT
          GOTO      OVERCOND IF OVER
          MOVE      GCODE,SGCODE
          MOVE      GVBILL,GBILL
          MOVE      GVAOUT,GAOUT
          RETURN  
.
RLGOVR1   MOVE      ZERO,OVRCD
          RESET     KEY6
          READL     PATGO1A1,KEY6;GCODE,GNAME,GADD1,GADD2,GADD3,GADD4,GCONT:
                                  GPOST,GTELEB,GVBILL,GVAOUT,GSORT
          GOTO      OVERLOCK IF LOCKED
          GOTO      OVERCOND IF OVER
          MOVE      GCODE,SGCODE
          MOVE      GVBILL,GBILL
          MOVE      GVAOUT,GAOUT
          RETURN  
.
RDKGOVR1  MOVE      ZERO,OVRCD
          READKS    PATGO1A1;GCODE,GNAME,GADD1,GADD2,GADD3,GADD4,GCONT:
                             GPOST,GTELEB,GVBILL,GVAOUT,GSORT
          GOTO      OVERCOND IF OVER
          MOVE      GCODE,SGCODE
          MOVE      GVBILL,GBILL
          MOVE      GVAOUT,GAOUT
          RETURN  
.
WRGOVR1   MOVE      ZERO,OVRCD
          MOVE      GBILL,GVBILL
          MOVE      GAOUT,GVAOUT
          RESET     KEY6
          TRAP      OVERLOCK IF IO
          WRITE     PATGO1A1,KEY6;KEY6,GNAME,GADD1,GADD2,GADD3,GADD4,GCONT:
                                  GPOST,GTELEB,GVBILL,GVAOUT,GSORT
          TRAPCLR   IO
          RETURN  
.
ULGOVR1   UNLOCK    PATGO1A1
          RETURN
.
UPGOVR1   MOVE      GBILL,GVBILL
          MOVE      GAOUT,GVAOUT
          UPDATE    PATGO1A1;GCODE,GNAME,GADD1,GADD2,GADD3,GADD4,GCONT:
                             GPOST,GTELEB,GVBILL,GVAOUT,GSORT
          RETURN  
.
DEGOVR1   RESET     KEY6
          DELETE    PATGO1A1,KEY6
          RETURN
.
.
RDSGOVR2  RESET     KEY12
          READ      PATGO1A2,KEY12;;
          RETURN
.
RDGOVR2   MOVE      ZERO,OVRCD
          RESET     KEY12
          READ      PATGO1A2,KEY12;GCODE,GNAME,GADD1,GADD2,GADD3,GADD4,GCONT:
                                   GPOST,GTELEB,GVBILL,GVAOUT,GSORT
          GOTO      OVERCOND IF OVER
          MOVE      GCODE,SGCODE
          MOVE      GVBILL,GBILL
          MOVE      GVAOUT,GAOUT
          RETURN  
.
RDKGOVR2  MOVE      ZERO,OVRCD
          READKS    PATGO1A2;GCODE,GNAME,GADD1,GADD2,GADD3,GADD4,GCONT:
                             GPOST,GTELEB,GVBILL,GVAOUT,GSORT
          GOTO      OVERCOND IF OVER
          MOVE      GCODE,SGCODE
          MOVE      GVBILL,GBILL
          MOVE      GVAOUT,GAOUT
          RETURN  
.
WRGOVR2   RESET     KEY12
          MOVE      GBILL,GVBILL
          MOVE      GAOUT,GVAOUT
          WRITE     PATGO1A2,KEY12;GCODE,GNAME,GADD1,GADD2,GADD3,GADD4,GCONT:
                                   GPOST,GTELEB,GVBILL,GVAOUT,GSORT
          RETURN  
.
DEGOVR2   RESET     KEY12
          DELETE    PATGO1A2,KEY12
          RETURN
.
.
RDSGOVR3  RESET     KEY36
          READ      PATGO1A3,KEY36;;
          RETURN
.
RDGOVR3   MOVE      ZERO,OVRCD
          RESET     KEY36
          READ      PATGO1A3,KEY36;GCODE,GNAME,GADD1,GADD2,GADD3,GADD4,GCONT:
                                   GPOST,GTELEB,GVBILL,GVAOUT,GSORT
          GOTO      OVERCOND IF OVER
          MOVE      GCODE,SGCODE
          MOVE      GVBILL,GBILL
          MOVE      GVAOUT,GAOUT
          RETURN  
.
RDKGOVR3  MOVE      ZERO,OVRCD
          READKS    PATGO1A3;GCODE,GNAME,GADD1,GADD2,GADD3,GADD4,GCONT:
                             GPOST,GTELEB,GVBILL,GVAOUT,GSORT
          GOTO      OVERCOND IF OVER
          MOVE      GCODE,SGCODE
          MOVE      GVBILL,GBILL
          MOVE      GVAOUT,GAOUT
         RETURN  
.
RDPGOVR3  MOVE      ZERO,OVRCD
          READKP    PATGO1A3;GCODE,GNAME,GADD1,GADD2,GADD3,GADD4,GCONT:
                             GPOST,GTELEB,GVBILL,GVAOUT,GSORT
          GOTO      OVERCOND IF OVER
          MOVE      GCODE,SGCODE
          MOVE      GVBILL,GBILL
          MOVE      GVAOUT,GAOUT
          RETURN 
.
WRGOVR3   RESET     KEY12
          MOVE      GBILL,GVBILL
          MOVE      GAOUT,GVAOUT
          WRITE     PATGO1A3,KEY36;GCODE,GNAME,GADD1,GADD2,GADD3,GADD4,GCONT:
                                   GPOST,GTELEB,GVBILL,GVAOUT,GSORT
          RETURN  
.
DEGOVR3   RESET     KEY36
          DELETE    PATGO1A3,KEY3
          RETURN
+
.

