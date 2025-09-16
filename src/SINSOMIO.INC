.
. SINSOMIO    
. --------
. Filename     : sinsomaf.dat
.
RSSIOM1   RESET     KEY3                                                        
          READ      SINSOMA1,KEY3;;                                             
          RETURN
.
RASIOM1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      SINSOMA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIOM1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      SINSOMA1,KEY3;SIOMSID,SIOMDES,SIOMORG,SIOMDEL,SIOMMES:      
                        SIOMPER,SIOMWAR,SIOMINC,SIOMFCO,SIOMTCO,SIOMFPG:        
                        SIOMTPG,SIOMFSU,SIOMTSU,SIOMUID,SIOMPOR,SIOMTIM:        
                        SIOMDAT,SIOMSOQ,SIOMFIA,SIOMTIA,SIOMMDP,SIOMSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIOM1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINSOMA1;SIOMSID,SIOMDES,SIOMORG,SIOMDEL,SIOMMES:           
                        SIOMPER,SIOMWAR,SIOMINC,SIOMFCO,SIOMTCO,SIOMFPG:        
                        SIOMTPG,SIOMFSU,SIOMTSU,SIOMUID,SIOMPOR,SIOMTIM:        
                        SIOMDAT,SIOMSOQ,SIOMFIA,SIOMTIA,SIOMMDP,SIOMSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIOM1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINSOMA1;SIOMSID,SIOMDES,SIOMORG,SIOMDEL,SIOMMES:           
                        SIOMPER,SIOMWAR,SIOMINC,SIOMFCO,SIOMTCO,SIOMFPG:        
                        SIOMTPG,SIOMFSU,SIOMTSU,SIOMUID,SIOMPOR,SIOMTIM:        
                        SIOMDAT,SIOMSOQ,SIOMFIA,SIOMTIA,SIOMMDP,SIOMSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIOM1                                                                         
          UPDATE    SINSOMA1;SIOMSID,SIOMDES,SIOMORG,SIOMDEL,SIOMMES:           
                        SIOMPER,SIOMWAR,SIOMINC,SIOMFCO,SIOMTCO,SIOMFPG:        
                        SIOMTPG,SIOMFSU,SIOMTSU,SIOMUID,SIOMPOR,SIOMTIM:        
                        SIOMDAT,SIOMSOQ,SIOMFIA,SIOMTIA,SIOMMDP,SIOMSPA         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIOM1   RESET     KEY3                                                        
          WRITE     SINSOMA1,KEY3;SIOMSID,SIOMDES,SIOMORG,SIOMDEL,SIOMMES:      
                        SIOMPER,SIOMWAR,SIOMINC,SIOMFCO,SIOMTCO,SIOMFPG:        
                        SIOMTPG,SIOMFSU,SIOMTSU,SIOMUID,SIOMPOR,SIOMTIM:        
                        SIOMDAT,SIOMSOQ,SIOMFIA,SIOMTIA,SIOMMDP,SIOMSPA         
          RETURN
.
DESIOM1   RESET     KEY3                                                        
          DELETE    SINSOMA1,KEY3                                               
          RETURN
.
RLSIOM1   RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READL     SINSOMA1,KEY3;SIOMSID,SIOMDES,SIOMORG,SIOMDEL,SIOMMES:      
                        SIOMPER,SIOMWAR,SIOMINC,SIOMFCO,SIOMTCO,SIOMFPG:        
                        SIOMTPG,SIOMFSU,SIOMTSU,SIOMUID,SIOMPOR,SIOMTIM:        
                        SIOMDAT,SIOMSOQ,SIOMFIA,SIOMTIA,SIOMMDP,SIOMSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIOM1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINSOMA1;SIOMSID,SIOMDES,SIOMORG,SIOMDEL,SIOMMES:           
                        SIOMPER,SIOMWAR,SIOMINC,SIOMFCO,SIOMTCO,SIOMFPG:        
                        SIOMTPG,SIOMFSU,SIOMTSU,SIOMUID,SIOMPOR,SIOMTIM:        
                        SIOMDAT,SIOMSOQ,SIOMFIA,SIOMTIA,SIOMMDP,SIOMSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIOM1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINSOMA1;SIOMSID,SIOMDES,SIOMORG,SIOMDEL,SIOMMES:           
                        SIOMPER,SIOMWAR,SIOMINC,SIOMFCO,SIOMTCO,SIOMFPG:        
                        SIOMTPG,SIOMFSU,SIOMTSU,SIOMUID,SIOMPOR,SIOMTIM:        
                        SIOMDAT,SIOMSOQ,SIOMFIA,SIOMTIA,SIOMMDP,SIOMSPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIOM1   RESET     KEY3                                                        
          UNLOCK    SINSOMA1                                                    
          RETURN
.
