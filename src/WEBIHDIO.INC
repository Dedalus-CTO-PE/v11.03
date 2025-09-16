.
. WEBIHDIO    
. --------
. Filename     : webihdaf.dat
.
RSWBIHD1  RESET     KEY41                                                       
          READ      WEBIHDA1,KEY41;;                                            
          RETURN
.
RAWBIHD1  RESET     KEY41                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHDA1,KEY41;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIHD1  RESET     KEY41                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHDA1,KEY41;WBIKFBID,WBIKARID,WBIKFRID,WBIKRPTC,WBIKSTAT:
                                   WBIKFSCD,WBIKFSTX,WBIKCFAC,WBIKCPAM,WBIKEXAM:
                                   WBIKFCID,WBIKTBAM,WBIKTCAM,WBIKRSTA,WBIKFTID:
                                   WBIKMSID,WBIKCUID,WBIKCDAT,WBIKCTIM,WBIKUUID:
                                   WBIKUDAT,WBIKUTIM,WBIKSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIHD1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIHDA1;WBIKFBID,WBIKARID,WBIKFRID,WBIKRPTC,WBIKSTAT:      
                             WBIKFSCD,WBIKFSTX,WBIKCFAC,WBIKCPAM,WBIKEXAM:      
                             WBIKFCID,WBIKTBAM,WBIKTCAM,WBIKRSTA,WBIKFTID:      
                             WBIKMSID,WBIKCUID,WBIKCDAT,WBIKCTIM,WBIKUUID:      
                             WBIKUDAT,WBIKUTIM,WBIKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIHD1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIHDA1;WBIKFBID,WBIKARID,WBIKFRID,WBIKRPTC,WBIKSTAT:      
                             WBIKFSCD,WBIKFSTX,WBIKCFAC,WBIKCPAM,WBIKEXAM:      
                             WBIKFCID,WBIKTBAM,WBIKTCAM,WBIKRSTA,WBIKFTID:      
                             WBIKMSID,WBIKCUID,WBIKCDAT,WBIKCTIM,WBIKUUID:      
                             WBIKUDAT,WBIKUTIM,WBIKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIHD1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIHDA1;WBIKFBID,WBIKARID,WBIKFRID,WBIKRPTC,WBIKSTAT:      
                             WBIKFSCD,WBIKFSTX,WBIKCFAC,WBIKCPAM,WBIKEXAM:      
                             WBIKFCID,WBIKTBAM,WBIKTCAM,WBIKRSTA,WBIKFTID:      
                             WBIKMSID,WBIKCUID,WBIKCDAT,WBIKCTIM,WBIKUUID:      
                             WBIKUDAT,WBIKUTIM,WBIKSPAR                         
          RETURN
.
WRWBIHD1  RESET     KEY41                                                       
          WRITE     WEBIHDA1,KEY41;WBIKFBID,WBIKARID,WBIKFRID,WBIKRPTC,WBIKSTAT:
                                   WBIKFSCD,WBIKFSTX,WBIKCFAC,WBIKCPAM,WBIKEXAM:
                                   WBIKFCID,WBIKTBAM,WBIKTCAM,WBIKRSTA,WBIKFTID:
                                   WBIKMSID,WBIKCUID,WBIKCDAT,WBIKCTIM,WBIKUUID:
                                   WBIKUDAT,WBIKUTIM,WBIKSPAR                   
          RETURN
.
DEWBIHD1  RESET     KEY41                                                       
          DELETE    WEBIHDA1,KEY41                                              
          RETURN
.
RSWBIHD2  RESET     KEY65                                                       
          READ      WEBIHDA2,KEY65;;                                            
          RETURN
.
RAWBIHD2  RESET     KEY65                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHDA2,KEY65;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIHD2  RESET     KEY65                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHDA2,KEY65;WBIKFBID,WBIKARID,WBIKFRID,WBIKRPTC,WBIKSTAT:
                                   WBIKFSCD,WBIKFSTX,WBIKCFAC,WBIKCPAM,WBIKEXAM:
                                   WBIKFCID,WBIKTBAM,WBIKTCAM,WBIKRSTA,WBIKFTID:
                                   WBIKMSID,WBIKCUID,WBIKCDAT,WBIKCTIM,WBIKUUID:
                                   WBIKUDAT,WBIKUTIM,WBIKSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIHD2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIHDA2;WBIKFBID,WBIKARID,WBIKFRID,WBIKRPTC,WBIKSTAT:      
                             WBIKFSCD,WBIKFSTX,WBIKCFAC,WBIKCPAM,WBIKEXAM:      
                             WBIKFCID,WBIKTBAM,WBIKTCAM,WBIKRSTA,WBIKFTID:      
                             WBIKMSID,WBIKCUID,WBIKCDAT,WBIKCTIM,WBIKUUID:      
                             WBIKUDAT,WBIKUTIM,WBIKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIHD2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIHDA2;WBIKFBID,WBIKARID,WBIKFRID,WBIKRPTC,WBIKSTAT:      
                             WBIKFSCD,WBIKFSTX,WBIKCFAC,WBIKCPAM,WBIKEXAM:      
                             WBIKFCID,WBIKTBAM,WBIKTCAM,WBIKRSTA,WBIKFTID:      
                             WBIKMSID,WBIKCUID,WBIKCDAT,WBIKCTIM,WBIKUUID:      
                             WBIKUDAT,WBIKUTIM,WBIKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIHD2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIHDA2;WBIKFBID,WBIKARID,WBIKFRID,WBIKRPTC,WBIKSTAT:      
                             WBIKFSCD,WBIKFSTX,WBIKCFAC,WBIKCPAM,WBIKEXAM:      
                             WBIKFCID,WBIKTBAM,WBIKTCAM,WBIKRSTA,WBIKFTID:      
                             WBIKMSID,WBIKCUID,WBIKCDAT,WBIKCTIM,WBIKUUID:      
                             WBIKUDAT,WBIKUTIM,WBIKSPAR                         
          RETURN
.
WRWBIHD2  RESET     KEY65                                                       
          WRITE     WEBIHDA2,KEY65;WBIKFBID,WBIKARID,WBIKFRID,WBIKRPTC,WBIKSTAT:
                                   WBIKFSCD,WBIKFSTX,WBIKCFAC,WBIKCPAM,WBIKEXAM:
                                   WBIKFCID,WBIKTBAM,WBIKTCAM,WBIKRSTA,WBIKFTID:
                                   WBIKMSID,WBIKCUID,WBIKCDAT,WBIKCTIM,WBIKUUID:
                                   WBIKUDAT,WBIKUTIM,WBIKSPAR                   
          RETURN
.
DEWBIHD2  RESET     KEY65                                                       
          DELETE    WEBIHDA2,KEY65                                              
          RETURN
.
RSWBIHD3  RESET     KEY77                                                       
          READ      WEBIHDA3,KEY77;;                                            
          RETURN
.
RAWBIHD3  RESET     KEY77                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHDA3,KEY77;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBIHD3  RESET     KEY77                                                       
          MOVE      ZERO,OVRCD
          READ      WEBIHDA3,KEY77;WBIKFBID,WBIKARID,WBIKFRID,WBIKRPTC,WBIKSTAT:
                                   WBIKFSCD,WBIKFSTX,WBIKCFAC,WBIKCPAM,WBIKEXAM:
                                   WBIKFCID,WBIKTBAM,WBIKTCAM,WBIKRSTA,WBIKFTID:
                                   WBIKMSID,WBIKCUID,WBIKCDAT,WBIKCTIM,WBIKUUID:
                                   WBIKUDAT,WBIKUTIM,WBIKSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBIHD3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBIHDA3;WBIKFBID,WBIKARID,WBIKFRID,WBIKRPTC,WBIKSTAT:      
                             WBIKFSCD,WBIKFSTX,WBIKCFAC,WBIKCPAM,WBIKEXAM:      
                             WBIKFCID,WBIKTBAM,WBIKTCAM,WBIKRSTA,WBIKFTID:      
                             WBIKMSID,WBIKCUID,WBIKCDAT,WBIKCTIM,WBIKUUID:      
                             WBIKUDAT,WBIKUTIM,WBIKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBIHD3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBIHDA3;WBIKFBID,WBIKARID,WBIKFRID,WBIKRPTC,WBIKSTAT:      
                             WBIKFSCD,WBIKFSTX,WBIKCFAC,WBIKCPAM,WBIKEXAM:      
                             WBIKFCID,WBIKTBAM,WBIKTCAM,WBIKRSTA,WBIKFTID:      
                             WBIKMSID,WBIKCUID,WBIKCDAT,WBIKCTIM,WBIKUUID:      
                             WBIKUDAT,WBIKUTIM,WBIKSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBIHD3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBIHDA3;WBIKFBID,WBIKARID,WBIKFRID,WBIKRPTC,WBIKSTAT:      
                             WBIKFSCD,WBIKFSTX,WBIKCFAC,WBIKCPAM,WBIKEXAM:      
                             WBIKFCID,WBIKTBAM,WBIKTCAM,WBIKRSTA,WBIKFTID:      
                             WBIKMSID,WBIKCUID,WBIKCDAT,WBIKCTIM,WBIKUUID:      
                             WBIKUDAT,WBIKUTIM,WBIKSPAR                         
          RETURN
.
WRWBIHD3  RESET     KEY77                                                       
          WRITE     WEBIHDA3,KEY77;WBIKFBID,WBIKARID,WBIKFRID,WBIKRPTC,WBIKSTAT:
                                   WBIKFSCD,WBIKFSTX,WBIKCFAC,WBIKCPAM,WBIKEXAM:
                                   WBIKFCID,WBIKTBAM,WBIKTCAM,WBIKRSTA,WBIKFTID:
                                   WBIKMSID,WBIKCUID,WBIKCDAT,WBIKCTIM,WBIKUUID:
                                   WBIKUDAT,WBIKUTIM,WBIKSPAR                   
          RETURN
.
DEWBIHD3  RESET     KEY77                                                       
          DELETE    WEBIHDA3,KEY77                                              
          RETURN
.
