.
. PATVENIO    
. --------
. Filename     : patvenaf.dat
.
RSPTVEN1  RESET     KEY27                                                       
          READ      PATVENA1,KEY27;;                                            
          RETURN
.
RAPTVEN1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PATVENA1,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTVEN1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PATVENA1,KEY27;PTVEVISN,PTVEVTYP,PTVESDAT,PTVESTIM,PTVEEDAT:
                        PTVEETIM,PTVEHOUR,PTVEICUS,PTVEISIT,PTVESPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTVEN1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATVENA1;PTVEVISN,PTVEVTYP,PTVESDAT,PTVESTIM,PTVEEDAT:      
                        PTVEETIM,PTVEHOUR,PTVEICUS,PTVEISIT,PTVESPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTVEN1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATVENA1;PTVEVISN,PTVEVTYP,PTVESDAT,PTVESTIM,PTVEEDAT:      
                        PTVEETIM,PTVEHOUR,PTVEICUS,PTVEISIT,PTVESPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTVEN1                                                                        
          UPDATE    PATVENA1;PTVEVISN,PTVEVTYP,PTVESDAT,PTVESTIM,PTVEEDAT:      
                        PTVEETIM,PTVEHOUR,PTVEICUS,PTVEISIT,PTVESPAR            
          RETURN
.
WRPTVEN1  RESET     KEY27                                                       
          WRITE     PATVENA1,KEY27;PTVEVISN,PTVEVTYP,PTVESDAT,PTVESTIM,PTVEEDAT:
                        PTVEETIM,PTVEHOUR,PTVEICUS,PTVEISIT,PTVESPAR            
          RETURN
.
DEPTVEN1  RESET     KEY27                                                       
          DELETE    PATVENA1,KEY27                                              
          RETURN
.
