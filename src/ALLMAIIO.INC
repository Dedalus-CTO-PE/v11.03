.
. ALLMAIIO    
. --------
. Filename     : allmaiaf.dat
.
RSALMAI1  RESET     KEY18                                                       
          READ      ALLMAIA1,KEY18;;                                            
          RETURN
.
RAALMAI1  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      ALLMAIA1,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALMAI1  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      ALLMAIA1,KEY18;ALMAEQUI,ALMAMNUM,ALMAMDAT,ALMAMTIM,ALMACOND:
                        ALMAHDAT,ALMAHNUM,ALMACDAT,ALMACTIM,ALMACUSR,ALMAUDAT:  
                        ALMAUTIM,ALMAUUSR,ALMASPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALMAI1                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLMAIA1;ALMAEQUI,ALMAMNUM,ALMAMDAT,ALMAMTIM,ALMACOND:      
                        ALMAHDAT,ALMAHNUM,ALMACDAT,ALMACTIM,ALMACUSR,ALMAUDAT:  
                        ALMAUTIM,ALMAUUSR,ALMASPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALMAI1                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLMAIA1;ALMAEQUI,ALMAMNUM,ALMAMDAT,ALMAMTIM,ALMACOND:      
                        ALMAHDAT,ALMAHNUM,ALMACDAT,ALMACTIM,ALMACUSR,ALMAUDAT:  
                        ALMAUTIM,ALMAUUSR,ALMASPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALMAI1                                                                        
          UPDATE    ALLMAIA1;ALMAEQUI,ALMAMNUM,ALMAMDAT,ALMAMTIM,ALMACOND:      
                        ALMAHDAT,ALMAHNUM,ALMACDAT,ALMACTIM,ALMACUSR,ALMAUDAT:  
                        ALMAUTIM,ALMAUUSR,ALMASPAR                              
          RETURN
.
WRALMAI1  RESET     KEY18                                                       
          WRITE     ALLMAIA1,KEY18;ALMAEQUI,ALMAMNUM,ALMAMDAT,ALMAMTIM,ALMACOND:
                        ALMAHDAT,ALMAHNUM,ALMACDAT,ALMACTIM,ALMACUSR,ALMAUDAT:  
                        ALMAUTIM,ALMAUUSR,ALMASPAR                              
          RETURN
.
DEALMAI1  RESET     KEY18                                                       
          DELETE    ALLMAIA1,KEY18                                              
          RETURN
.
RSALMAI2  RESET     KEY26                                                       
          READ      ALLMAIA2,KEY26;;                                            
          RETURN
.
RAALMAI2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      ALLMAIA2,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALMAI2  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      ALLMAIA2,KEY26;ALMAEQUI,ALMAMNUM,ALMAMDAT,ALMAMTIM,ALMACOND:
                        ALMAHDAT,ALMAHNUM,ALMACDAT,ALMACTIM,ALMACUSR,ALMAUDAT:  
                        ALMAUTIM,ALMAUUSR,ALMASPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALMAI2                                                                        
          MOVE      ZERO,OVRCD
          READKS    ALLMAIA2;ALMAEQUI,ALMAMNUM,ALMAMDAT,ALMAMTIM,ALMACOND:      
                        ALMAHDAT,ALMAHNUM,ALMACDAT,ALMACTIM,ALMACUSR,ALMAUDAT:  
                        ALMAUTIM,ALMAUUSR,ALMASPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALMAI2                                                                        
          MOVE      ZERO,OVRCD
          READKP    ALLMAIA2;ALMAEQUI,ALMAMNUM,ALMAMDAT,ALMAMTIM,ALMACOND:      
                        ALMAHDAT,ALMAHNUM,ALMACDAT,ALMACTIM,ALMACUSR,ALMAUDAT:  
                        ALMAUTIM,ALMAUUSR,ALMASPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALMAI2                                                                        
          UPDATE    ALLMAIA2;ALMAEQUI,ALMAMNUM,ALMAMDAT,ALMAMTIM,ALMACOND:      
                        ALMAHDAT,ALMAHNUM,ALMACDAT,ALMACTIM,ALMACUSR,ALMAUDAT:  
                        ALMAUTIM,ALMAUUSR,ALMASPAR                              
          RETURN
.
WRALMAI2  RESET     KEY26                                                       
          WRITE     ALLMAIA2,KEY26;ALMAEQUI,ALMAMNUM,ALMAMDAT,ALMAMTIM,ALMACOND:
                        ALMAHDAT,ALMAHNUM,ALMACDAT,ALMACTIM,ALMACUSR,ALMAUDAT:  
                        ALMAUTIM,ALMAUUSR,ALMASPAR                              
          RETURN
.
DEALMAI2  RESET     KEY26                                                       
          DELETE    ALLMAIA2,KEY26                                              
          RETURN
.
