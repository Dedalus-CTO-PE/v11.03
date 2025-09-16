.
. ALLRNWIO    
. --------
. Filename     : allrnwaf.dat
.
RSALRNW1  RESET     KEY24                                                       
          READ      ALLRNWA1,KEY24;;                                            
          RETURN
.
RAALRNW1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      ALLRNWA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALRNW1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      ALLRNWA1,KEY24;ALRNVISN,ALRNRDAT,ALRNRTIM,ALRNRUID,ALRNORTY:
                        ALRNOXDT,ALRNORDT,ALRNNRTY,ALRNNXDT,ALRNNRDT,ALRNSTAT:  
                        ALRNRRDT,ALRNRRTM,ALRNRRID,ALRNDDAT,ALRNDTIM,ALRNDUID:  
                        ALRNCDAT,ALRNCTIM,ALRNCUID,ALRNUDAT,ALRNUTIM,ALRNUUID:  
                        ALRNORES,ALRNNRES,ALRNORHC,ALRNORHP,ALRNNRHC,ALRNNRHP:  
                        ALRNSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALRNW1  MOVE      ZERO,OVRCD                                                  
          READKS    ALLRNWA1;ALRNVISN,ALRNRDAT,ALRNRTIM,ALRNRUID,ALRNORTY:      
                        ALRNOXDT,ALRNORDT,ALRNNRTY,ALRNNXDT,ALRNNRDT,ALRNSTAT:  
                        ALRNRRDT,ALRNRRTM,ALRNRRID,ALRNDDAT,ALRNDTIM,ALRNDUID:  
                        ALRNCDAT,ALRNCTIM,ALRNCUID,ALRNUDAT,ALRNUTIM,ALRNUUID:  
                        ALRNORES,ALRNNRES,ALRNORHC,ALRNORHP,ALRNNRHC,ALRNNRHP:  
                        ALRNSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALRNW1  MOVE      ZERO,OVRCD                                                  
          READKP    ALLRNWA1;ALRNVISN,ALRNRDAT,ALRNRTIM,ALRNRUID,ALRNORTY:      
                        ALRNOXDT,ALRNORDT,ALRNNRTY,ALRNNXDT,ALRNNRDT,ALRNSTAT:  
                        ALRNRRDT,ALRNRRTM,ALRNRRID,ALRNDDAT,ALRNDTIM,ALRNDUID:  
                        ALRNCDAT,ALRNCTIM,ALRNCUID,ALRNUDAT,ALRNUTIM,ALRNUUID:  
                        ALRNORES,ALRNNRES,ALRNORHC,ALRNORHP,ALRNNRHC,ALRNNRHP:  
                        ALRNSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALRNW1  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLRNWA1;ALRNVISN,ALRNRDAT,ALRNRTIM,ALRNRUID,ALRNORTY:      
                        ALRNOXDT,ALRNORDT,ALRNNRTY,ALRNNXDT,ALRNNRDT,ALRNSTAT:  
                        ALRNRRDT,ALRNRRTM,ALRNRRID,ALRNDDAT,ALRNDTIM,ALRNDUID:  
                        ALRNCDAT,ALRNCTIM,ALRNCUID,ALRNUDAT,ALRNUTIM,ALRNUUID:  
                        ALRNORES,ALRNNRES,ALRNORHC,ALRNORHP,ALRNNRHC,ALRNNRHP:  
                        ALRNSPAR                                                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALRNW1  RESET     KEY24                                                       
          WRITE     ALLRNWA1,KEY24;ALRNVISN,ALRNRDAT,ALRNRTIM,ALRNRUID,ALRNORTY:
                        ALRNOXDT,ALRNORDT,ALRNNRTY,ALRNNXDT,ALRNNRDT,ALRNSTAT:  
                        ALRNRRDT,ALRNRRTM,ALRNRRID,ALRNDDAT,ALRNDTIM,ALRNDUID:  
                        ALRNCDAT,ALRNCTIM,ALRNCUID,ALRNUDAT,ALRNUTIM,ALRNUUID:  
                        ALRNORES,ALRNNRES,ALRNORHC,ALRNORHP,ALRNNRHC,ALRNNRHP:  
                        ALRNSPAR                                                
          RETURN
.
DEALRNW1  RESET     KEY24                                                       
          DELETE    ALLRNWA1,KEY24                                              
          RETURN
.
RLALRNW1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     ALLRNWA1,KEY24;ALRNVISN,ALRNRDAT,ALRNRTIM,ALRNRUID,ALRNORTY:
                        ALRNOXDT,ALRNORDT,ALRNNRTY,ALRNNXDT,ALRNNRDT,ALRNSTAT:  
                        ALRNRRDT,ALRNRRTM,ALRNRRID,ALRNDDAT,ALRNDTIM,ALRNDUID:  
                        ALRNCDAT,ALRNCTIM,ALRNCUID,ALRNUDAT,ALRNUTIM,ALRNUUID:  
                        ALRNORES,ALRNNRES,ALRNORHC,ALRNORHP,ALRNNRHC,ALRNNRHP:  
                        ALRNSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALRNW1  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLRNWA1;ALRNVISN,ALRNRDAT,ALRNRTIM,ALRNRUID,ALRNORTY:      
                        ALRNOXDT,ALRNORDT,ALRNNRTY,ALRNNXDT,ALRNNRDT,ALRNSTAT:  
                        ALRNRRDT,ALRNRRTM,ALRNRRID,ALRNDDAT,ALRNDTIM,ALRNDUID:  
                        ALRNCDAT,ALRNCTIM,ALRNCUID,ALRNUDAT,ALRNUTIM,ALRNUUID:  
                        ALRNORES,ALRNNRES,ALRNORHC,ALRNORHP,ALRNNRHC,ALRNNRHP:  
                        ALRNSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALRNW1  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLRNWA1;ALRNVISN,ALRNRDAT,ALRNRTIM,ALRNRUID,ALRNORTY:      
                        ALRNOXDT,ALRNORDT,ALRNNRTY,ALRNNXDT,ALRNNRDT,ALRNSTAT:  
                        ALRNRRDT,ALRNRRTM,ALRNRRID,ALRNDDAT,ALRNDTIM,ALRNDUID:  
                        ALRNCDAT,ALRNCTIM,ALRNCUID,ALRNUDAT,ALRNUTIM,ALRNUUID:  
                        ALRNORES,ALRNNRES,ALRNORHC,ALRNORHP,ALRNNRHC,ALRNNRHP:  
                        ALRNSPAR                                                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALRNW1  RESET     KEY24                                                       
          UNLOCK    ALLRNWA1                                                    
          RETURN
.
