. **********************************************************
. *                                                        *
. *  Include Name :  PATCOMIO                              *
. *                                                        *
. *  Function     :  I/O for patcomaf file                 *
. *                                                        *
. *  Keys         :  KEY11                                 *
. *                                                        *
. *  Modifications:                                        *
. *                                                        *
. **********************************************************
.
RSPTCOM1  RESET     KEY11
          READ      PATCOMA1,KEY11;;
          RETURN  
.
RAPTCOM1  RESET     KEY11
          MOVE      ZERO,OVRCD
          READ      PATCOMA1,KEY11;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTCOM1  MOVE      ZERO,OVRCD
          RESET     KEY11
          READ      PATCOMA1,KEY11;PTCOURNO,DPTCOCLN,PTCOLINE,PTCOOPER,PTCOSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTCOCLN,PTCOCLNO
          RETURN  
.
RKPTCOM1  MOVE      ZERO,OVRCD
          READKS    PATCOMA1;PTCOURNO,DPTCOCLN,PTCOLINE,PTCOOPER,PTCOSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTCOCLN,PTCOCLNO
          RETURN  
.
RPPTCOM1  MOVE      ZERO,OVRCD
          READKP    PATCOMA1;PTCOURNO,DPTCOCLN,PTCOLINE,PTCOOPER,PTCOSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DPTCOCLN,PTCOCLNO
          RETURN  
.
WRPTCOM1  RESET     KEY11
          MOVE      PTCOCLNO,DPTCOCLN
          WRITE     PATCOMA1,KEY11;PTCOURNO,DPTCOCLN,PTCOLINE,PTCOOPER,PTCOSPAR
          RETURN  
.
UPPTCOM1  MOVE      PTCOCLNO,DPTCOCLN
          UPDATE    PATCOMA1;PTCOURNO,DPTCOCLN,PTCOLINE,PTCOOPER,PTCOSPAR
          RETURN  
.
DEPTCOM1  RESET     KEY11
          DELETE    PATCOMA1,KEY11
          RETURN
.
