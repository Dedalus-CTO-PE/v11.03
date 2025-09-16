.
. PMSRLDIO    
. --------
. Filename     : pmsrldaf.dat
.
RSPMRLD1  RESET     KEY16                                                       
          READ      PMSRLDA1,KEY16;;                                            
          RETURN
.
RAPMRLD1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSRLDA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMRLD1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSRLDA1,KEY16;PMRDDOCT,PMRDHOSP,PMRDROLE,PMRDACTV,PMRDCUID:
                        PMRDCDAT,PMRDCTIM,PMRDUUID,PMRDUDAT,PMRDUTIM,PMRDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMRLD1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSRLDA1;PMRDDOCT,PMRDHOSP,PMRDROLE,PMRDACTV,PMRDCUID:      
                        PMRDCDAT,PMRDCTIM,PMRDUUID,PMRDUDAT,PMRDUTIM,PMRDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMRLD1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSRLDA1;PMRDDOCT,PMRDHOSP,PMRDROLE,PMRDACTV,PMRDCUID:      
                        PMRDCDAT,PMRDCTIM,PMRDUUID,PMRDUDAT,PMRDUTIM,PMRDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMRLD1                                                                        
          UPDATE    PMSRLDA1;PMRDDOCT,PMRDHOSP,PMRDROLE,PMRDACTV,PMRDCUID:      
                        PMRDCDAT,PMRDCTIM,PMRDUUID,PMRDUDAT,PMRDUTIM,PMRDSPAR   
          RETURN
.
WRPMRLD1  RESET     KEY16                                                       
          WRITE     PMSRLDA1,KEY16;PMRDDOCT,PMRDHOSP,PMRDROLE,PMRDACTV,PMRDCUID:
                        PMRDCDAT,PMRDCTIM,PMRDUUID,PMRDUDAT,PMRDUTIM,PMRDSPAR   
          RETURN
.
DEPMRLD1  RESET     KEY16                                                       
          DELETE    PMSRLDA1,KEY16                                              
          RETURN
.
