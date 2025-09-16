.
. **********************************************************
. *                                                        *
. *  Include Name :  PATLG1IO                              *
. *                                                        *
. *  Function     :  I/O for patlg1af file                 *
. *                                                        *
. *  Keys         :  KEY8                                  *
. *                                                        *
. *  Modifications:  V5.00 13/02/92 Peter Eddey            *
. *                  V5.01 12/01/94 I.Rutt                 *
. *                        Removed SFORMAT of address vars * 
. *                        from PATLG1FD                   *
. *                                                        *
. **********************************************************
.
RDPTLGP1  MOVE      ZERO,OVRCD
          RESET     KEY12
          READ      PATLG1A1,KEY12;PTLGPOST,PTLGLGAC,PTLGSPRE
          GOTO      OVERCOND IF OVER
          RETURN  
.
RKPTLGP1  MOVE      ZERO,OVRCD
          READKS    PATLG1A1;PTLGPOST,PTLGLGAC,PTLGSPRE
          GOTO      OVERCOND IF OVER
          RETURN  
.
RPPTLGP1  MOVE      ZERO,OVRCD
          READKP    PATLG1A1;PTLGPOST,PTLGLGAC,PTLGSPRE
          GOTO      OVERCOND IF OVER
          RETURN  
.
WRPTLGP1  RESET     KEY12
          WRITE     PATLG1A1,KEY12;PTLGPOST,PTLGLGAC,PTLGSPRE
          RETURN  
.
UPPTLGP1  UPDATE    PATLG1A1;PTLGPOST,PTLGLGAC,PTLGSPRE
          RETURN  
.
DEPTLGP1  RESET     KEY12
          DELETE    PATLG1A1,KEY12
          RETURN
.
RSPTLGP1  RESET     KEY12
          READ      PATLG1A1,KEY12;;
          RETURN  
+
.

