.
. HICEFXIO    
. --------
. Filename     : hicefxaf.dat
.
RSHCEFX1  RESET     KEY44                                                       
          READ      HICEFXA1,KEY44;;                                            
          RETURN
.
RAHCEFX1  RESET     KEY44                                                       
          MOVE      ZERO,OVRCD
          READ      HICEFXA1,KEY44;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHCEFX1  RESET     KEY44                                                       
          MOVE      ZERO,OVRCD
          READ      HICEFXA1,KEY44;HCEXBTCH,HCEXTYPE,HCEXDATE,HCEXFNAM,HCEXSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHCEFX1                                                                        
          MOVE      ZERO,OVRCD
          READKS    HICEFXA1;HCEXBTCH,HCEXTYPE,HCEXDATE,HCEXFNAM,HCEXSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHCEFX1                                                                        
          MOVE      ZERO,OVRCD
          READKP    HICEFXA1;HCEXBTCH,HCEXTYPE,HCEXDATE,HCEXFNAM,HCEXSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHCEFX1                                                                        
          UPDATE    HICEFXA1;HCEXBTCH,HCEXTYPE,HCEXDATE,HCEXFNAM,HCEXSPAR       
          RETURN
.
WRHCEFX1  RESET     KEY44                                                       
          WRITE     HICEFXA1,KEY44;HCEXBTCH,HCEXTYPE,HCEXDATE,HCEXFNAM,HCEXSPAR 
          RETURN
.
DEHCEFX1  RESET     KEY44                                                       
          DELETE    HICEFXA1,KEY44                                              
          RETURN
.
