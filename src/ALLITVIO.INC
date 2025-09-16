.
. ALLITVIO    
. --------
. Filename     : allitvaf.dat
.
RSALITV1  RESET     KEY24                                                       
          READ      ALLITVA1,KEY24;;                                            
          RETURN
.
RAALITV1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      ALLITVA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALITV1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      ALLITVA1,KEY24;ALIVVISN,ALIVENCT,ALIVICNT,ALIVCODE,ALIVDURA:
                        ALIVCDAT,ALIVCTIM,ALIVCUID,ALIVUDAT,ALIVUTIM,ALIVUUID:  
                        ALIVSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALITV1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLITVA1;ALIVVISN,ALIVENCT,ALIVICNT,ALIVCODE,ALIVDURA:      
                        ALIVCDAT,ALIVCTIM,ALIVCUID,ALIVUDAT,ALIVUTIM,ALIVUUID:  
                        ALIVSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALITV1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLITVA1;ALIVVISN,ALIVENCT,ALIVICNT,ALIVCODE,ALIVDURA:      
                        ALIVCDAT,ALIVCTIM,ALIVCUID,ALIVUDAT,ALIVUTIM,ALIVUUID:  
                        ALIVSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALITV1                                                                        
          UPDATE    ALLITVA1;ALIVVISN,ALIVENCT,ALIVICNT,ALIVCODE,ALIVDURA:      
                        ALIVCDAT,ALIVCTIM,ALIVCUID,ALIVUDAT,ALIVUTIM,ALIVUUID:  
                        ALIVSPAR                                                
          RETURN
.
WRALITV1  RESET     KEY24                                                       
          WRITE     ALLITVA1,KEY24;ALIVVISN,ALIVENCT,ALIVICNT,ALIVCODE,ALIVDURA:
                        ALIVCDAT,ALIVCTIM,ALIVCUID,ALIVUDAT,ALIVUTIM,ALIVUUID:  
                        ALIVSPAR                                                
          RETURN
.
DEALITV1  RESET     KEY24                                                       
          DELETE    ALLITVA1,KEY24                                              
          RETURN
.
