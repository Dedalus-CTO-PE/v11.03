.
. PATFHIIO    
. --------
. Filename     : patfhiaf.dat
.
RSPTFHI1  RESET     KEY11                                                       
          READ      PATFHIA1,KEY11;;                                            
          RETURN
.
RAPTFHI1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      PATFHIA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTFHI1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      PATFHIA1,KEY11;PTFHHOSP,PTFHHFND,PTFHSYST,PTFHHDAT,PTFHHREA:
                                   PTFHDESC,PTFHCUID,PTFHCDAT,PTFHCTIM,PTFHUUID:
                                   PTFHUDAT,PTFHUTIM,PTFHSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTFHI1  MOVE      ZERO,OVRCD                                                  
          READKS    PATFHIA1;PTFHHOSP,PTFHHFND,PTFHSYST,PTFHHDAT,PTFHHREA:      
                             PTFHDESC,PTFHCUID,PTFHCDAT,PTFHCTIM,PTFHUUID:      
                             PTFHUDAT,PTFHUTIM,PTFHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTFHI1  MOVE      ZERO,OVRCD                                                  
          READKP    PATFHIA1;PTFHHOSP,PTFHHFND,PTFHSYST,PTFHHDAT,PTFHHREA:      
                             PTFHDESC,PTFHCUID,PTFHCDAT,PTFHCTIM,PTFHUUID:      
                             PTFHUDAT,PTFHUTIM,PTFHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTFHI1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATFHIA1;PTFHHOSP,PTFHHFND,PTFHSYST,PTFHHDAT,PTFHHREA:      
                             PTFHDESC,PTFHCUID,PTFHCDAT,PTFHCTIM,PTFHUUID:      
                             PTFHUDAT,PTFHUTIM,PTFHSPAR                         
          RETURN
.
WRPTFHI1  RESET     KEY11                                                       
          WRITE     PATFHIA1,KEY11;PTFHHOSP,PTFHHFND,PTFHSYST,PTFHHDAT,PTFHHREA:
                                   PTFHDESC,PTFHCUID,PTFHCDAT,PTFHCTIM,PTFHUUID:
                                   PTFHUDAT,PTFHUTIM,PTFHSPAR                   
          RETURN
.
DEPTFHI1  RESET     KEY11                                                       
          DELETE    PATFHIA1,KEY11                                              
          RETURN
.
RSPTFHI2  RESET     KEY11                                                       
          READ      PATFHIA2,KEY11;;                                            
          RETURN
.
RAPTFHI2  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      PATFHIA2,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTFHI2  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      PATFHIA2,KEY11;PTFHHOSP,PTFHHFND,PTFHSYST,PTFHHDAT,PTFHHREA:
                                   PTFHDESC,PTFHCUID,PTFHCDAT,PTFHCTIM,PTFHUUID:
                                   PTFHUDAT,PTFHUTIM,PTFHSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTFHI2  MOVE      ZERO,OVRCD                                                  
          READKS    PATFHIA2;PTFHHOSP,PTFHHFND,PTFHSYST,PTFHHDAT,PTFHHREA:      
                             PTFHDESC,PTFHCUID,PTFHCDAT,PTFHCTIM,PTFHUUID:      
                             PTFHUDAT,PTFHUTIM,PTFHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTFHI2  MOVE      ZERO,OVRCD                                                  
          READKP    PATFHIA2;PTFHHOSP,PTFHHFND,PTFHSYST,PTFHHDAT,PTFHHREA:      
                             PTFHDESC,PTFHCUID,PTFHCDAT,PTFHCTIM,PTFHUUID:      
                             PTFHUDAT,PTFHUTIM,PTFHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTFHI2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATFHIA2;PTFHHOSP,PTFHHFND,PTFHSYST,PTFHHDAT,PTFHHREA:      
                             PTFHDESC,PTFHCUID,PTFHCDAT,PTFHCTIM,PTFHUUID:      
                             PTFHUDAT,PTFHUTIM,PTFHSPAR                         
          RETURN
.
WRPTFHI2  RESET     KEY11                                                       
          WRITE     PATFHIA2,KEY11;PTFHHOSP,PTFHHFND,PTFHSYST,PTFHHDAT,PTFHHREA:
                                   PTFHDESC,PTFHCUID,PTFHCDAT,PTFHCTIM,PTFHUUID:
                                   PTFHUDAT,PTFHUTIM,PTFHSPAR                   
          RETURN
.
DEPTFHI2  RESET     KEY11                                                       
          DELETE    PATFHIA2,KEY11                                              
          RETURN
.
RSPTFHI3  RESET     KEY11                                                       
          READ      PATFHIA3,KEY11;;                                            
          RETURN
.
RAPTFHI3  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      PATFHIA3,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTFHI3  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      PATFHIA3,KEY11;PTFHHOSP,PTFHHFND,PTFHSYST,PTFHHDAT,PTFHHREA:
                                   PTFHDESC,PTFHCUID,PTFHCDAT,PTFHCTIM,PTFHUUID:
                                   PTFHUDAT,PTFHUTIM,PTFHSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTFHI3  MOVE      ZERO,OVRCD                                                  
          READKS    PATFHIA3;PTFHHOSP,PTFHHFND,PTFHSYST,PTFHHDAT,PTFHHREA:      
                             PTFHDESC,PTFHCUID,PTFHCDAT,PTFHCTIM,PTFHUUID:      
                             PTFHUDAT,PTFHUTIM,PTFHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTFHI3  MOVE      ZERO,OVRCD                                                  
          READKP    PATFHIA3;PTFHHOSP,PTFHHFND,PTFHSYST,PTFHHDAT,PTFHHREA:      
                             PTFHDESC,PTFHCUID,PTFHCDAT,PTFHCTIM,PTFHUUID:      
                             PTFHUDAT,PTFHUTIM,PTFHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTFHI3  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATFHIA3;PTFHHOSP,PTFHHFND,PTFHSYST,PTFHHDAT,PTFHHREA:      
                             PTFHDESC,PTFHCUID,PTFHCDAT,PTFHCTIM,PTFHUUID:      
                             PTFHUDAT,PTFHUTIM,PTFHSPAR                         
          RETURN
.
WRPTFHI3  RESET     KEY11                                                       
          WRITE     PATFHIA3,KEY11;PTFHHOSP,PTFHHFND,PTFHSYST,PTFHHDAT,PTFHHREA:
                                   PTFHDESC,PTFHCUID,PTFHCDAT,PTFHCTIM,PTFHUUID:
                                   PTFHUDAT,PTFHUTIM,PTFHSPAR                   
          RETURN
.
DEPTFHI3  RESET     KEY11                                                       
          DELETE    PATFHIA3,KEY11                                              
          RETURN
.
