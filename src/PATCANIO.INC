.
. NSMRODIO    
. --------
. Filename     : patcanaf.dat
. Keys         : KEY9
.
RSPTCAN1  RESET     KEY9                                                       
          READ      PATCANA1,KEY9;;                                            
          RETURN
.
RAPTCAN1  RESET     KEY9                                                       
          MOVE      ZERO,OVRCD
          READ      PATCANA1,KEY9;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTCAN1  RESET     KEY9                                                       
          MOVE      ZERO,OVRCD
          READ      PATCANA1,KEY9;PTCCCODE,PTCCLATR,PTCCSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTCAN1  MOVE      ZERO,OVRCD
          READKS    PATCANA1;PTCCCODE,PTCCLATR,PTCCSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTCAN1  MOVE      ZERO,OVRCD
          READKP    PATCANA1;PTCCCODE,PTCCLATR,PTCCSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTCAN1  UPDATE    PATCANA1;PTCCCODE,PTCCLATR,PTCCSPAR
          RETURN
.
WRPTCAN1  RESET     KEY9                                                       
          WRITE     PATCANA1,KEY9;PTCCCODE,PTCCLATR,PTCCSPAR
          RETURN
.
DEPTCAN1  RESET     KEY9                                                       
          DELETE    PATCANA1,KEY9                                              
          RETURN
.
