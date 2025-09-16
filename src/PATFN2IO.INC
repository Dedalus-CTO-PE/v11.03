.
. PATFN2IO    
. --------
. Filename     : patfn2af.dat
.
RSPTFN21  RESET     KEY17                                                       
          READ      PATFN2A1,KEY17;;                                            
          RETURN
.
RAPTFN21  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      PATFN2A1,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTFN21  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      PATFN2A1,KEY17;PTFNHFND,PTFNBMVH,PTFNMVRT,PTFNHRMV,PTFNMVBC:
                                   PTFNHOSP,PTFNEDAT,PTFNSPRE                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTFN21  MOVE      ZERO,OVRCD                                                  
          READKS    PATFN2A1;PTFNHFND,PTFNBMVH,PTFNMVRT,PTFNHRMV,PTFNMVBC:      
                             PTFNHOSP,PTFNEDAT,PTFNSPRE                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTFN21  MOVE      ZERO,OVRCD                                                  
          READKP    PATFN2A1;PTFNHFND,PTFNBMVH,PTFNMVRT,PTFNHRMV,PTFNMVBC:      
                             PTFNHOSP,PTFNEDAT,PTFNSPRE                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTFN21  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATFN2A1;PTFNHFND,PTFNBMVH,PTFNMVRT,PTFNHRMV,PTFNMVBC:      
                             PTFNHOSP,PTFNEDAT,PTFNSPRE                         
          RETURN
.
WRPTFN21  RESET     KEY17                                                       
          WRITE     PATFN2A1,KEY17;PTFNHFND,PTFNBMVH,PTFNMVRT,PTFNHRMV,PTFNMVBC:
                                   PTFNHOSP,PTFNEDAT,PTFNSPRE                   
          RETURN
.
DEPTFN21  RESET     KEY17                                                       
          DELETE    PATFN2A1,KEY17                                              
          RETURN
.
RSPTFN22  RESET     KEY17                                                       
          READ      PATFN2A2,KEY17;;                                            
          RETURN
.
RAPTFN22  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      PATFN2A2,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTFN22  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      PATFN2A2,KEY17;PTFNHFND,PTFNBMVH,PTFNMVRT,PTFNHRMV,PTFNMVBC:
                                   PTFNHOSP,PTFNEDAT,PTFNSPRE                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTFN22  MOVE      ZERO,OVRCD                                                  
          READKS    PATFN2A2;PTFNHFND,PTFNBMVH,PTFNMVRT,PTFNHRMV,PTFNMVBC:      
                             PTFNHOSP,PTFNEDAT,PTFNSPRE                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTFN22  MOVE      ZERO,OVRCD                                                  
          READKP    PATFN2A2;PTFNHFND,PTFNBMVH,PTFNMVRT,PTFNHRMV,PTFNMVBC:      
                             PTFNHOSP,PTFNEDAT,PTFNSPRE                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTFN22  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATFN2A2;PTFNHFND,PTFNBMVH,PTFNMVRT,PTFNHRMV,PTFNMVBC:      
                             PTFNHOSP,PTFNEDAT,PTFNSPRE                         
          RETURN
.
WRPTFN22  RESET     KEY17                                                       
          WRITE     PATFN2A2,KEY17;PTFNHFND,PTFNBMVH,PTFNMVRT,PTFNHRMV,PTFNMVBC:
                                   PTFNHOSP,PTFNEDAT,PTFNSPRE                   
          RETURN
.
DEPTFN22  RESET     KEY17                                                       
          DELETE    PATFN2A2,KEY17                                              
          RETURN
.
