.
. SINSCMIO    
. --------
. Filename     : sinscmaf.dat
.
RSSISC1   RESET     KEY10                                                       
          READ      SINSCMA1,KEY10;;                                            
          RETURN
.
RASISC1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      SINSCMA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSISC1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      SINSCMA1,KEY10;SISCCON,SISCDES,SISCSDT,SISCFI2,SISCEDT:     
                        SISCUR1,SISCUR2,SISCUD1,SISCUD2,SISCUC1,SISCUC2:        
                        SISCUY1,SISCUY2,SISCSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSISC1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINSCMA1;SISCCON,SISCDES,SISCSDT,SISCFI2,SISCEDT:           
                        SISCUR1,SISCUR2,SISCUD1,SISCUD2,SISCUC1,SISCUC2:        
                        SISCUY1,SISCUY2,SISCSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSISC1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINSCMA1;SISCCON,SISCDES,SISCSDT,SISCFI2,SISCEDT:           
                        SISCUR1,SISCUR2,SISCUD1,SISCUD2,SISCUC1,SISCUC2:        
                        SISCUY1,SISCUY2,SISCSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSISC1                                                                         
          UPDATE    SINSCMA1;SISCCON,SISCDES,SISCSDT,SISCFI2,SISCEDT:           
                        SISCUR1,SISCUR2,SISCUD1,SISCUD2,SISCUC1,SISCUC2:        
                        SISCUY1,SISCUY2,SISCSPA                                 
          RETURN
.
WRSISC1   RESET     KEY10                                                       
          WRITE     SINSCMA1,KEY10;SISCCON,SISCDES,SISCSDT,SISCFI2,SISCEDT:     
                        SISCUR1,SISCUR2,SISCUD1,SISCUD2,SISCUC1,SISCUC2:        
                        SISCUY1,SISCUY2,SISCSPA                                 
          RETURN
.
DESISC1   RESET     KEY10                                                       
          DELETE    SINSCMA1,KEY10                                              
          RETURN
.
