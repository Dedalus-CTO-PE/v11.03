.
. SINCODIO    
. --------
. Filename     : sincodaf.dat
.
RSSICD1   RESET     KEY6                                                        
          READ      SINCODA1,KEY6;;                                             
          RETURN
.
RASICD1   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      SINCODA1,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSICD1   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      SINCODA1,KEY6;SICDCATA,SICDCODE,SICDDESC,SICDOTHR,SICDCANC: 
                        SICDFILL                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSICD1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCODA1;SICDCATA,SICDCODE,SICDDESC,SICDOTHR,SICDCANC:      
                        SICDFILL                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSICD1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCODA1;SICDCATA,SICDCODE,SICDDESC,SICDOTHR,SICDCANC:      
                        SICDFILL                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSICD1                                                                         
          UPDATE    SINCODA1;SICDCATA,SICDCODE,SICDDESC,SICDOTHR,SICDCANC:      
                        SICDFILL                                                
          RETURN
.
WRSICD1   RESET     KEY6                                                        
          WRITE     SINCODA1,KEY6;SICDCATA,SICDCODE,SICDDESC,SICDOTHR,SICDCANC: 
                        SICDFILL                                                
          RETURN
.
DESICD1   RESET     KEY6                                                        
          DELETE    SINCODA1,KEY6                                               
          RETURN
.
RSSICD2   RESET     KEY6                                                        
          READ      SINCODA2,KEY6;;                                             
          RETURN
.
RASICD2   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      SINCODA2,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSICD2   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      SINCODA2,KEY6;SICDCATA,SICDCODE,SICDDESC,SICDOTHR,SICDCANC: 
                        SICDFILL                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSICD2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCODA2;SICDCATA,SICDCODE,SICDDESC,SICDOTHR,SICDCANC:      
                        SICDFILL                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSICD2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCODA2;SICDCATA,SICDCODE,SICDDESC,SICDOTHR,SICDCANC:      
                        SICDFILL                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSICD2                                                                         
          UPDATE    SINCODA2;SICDCATA,SICDCODE,SICDDESC,SICDOTHR,SICDCANC:      
                        SICDFILL                                                
          RETURN
.
WRSICD2   RESET     KEY6                                                        
          WRITE     SINCODA2,KEY6;SICDCATA,SICDCODE,SICDDESC,SICDOTHR,SICDCANC: 
                        SICDFILL                                                
          RETURN
.
DESICD2   RESET     KEY6                                                        
          DELETE    SINCODA2,KEY6                                               
          RETURN
.
