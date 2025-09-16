.
. PMSIMPIO    
. --------
. Filename     : pmsimpaf.dat
.
RSPMIMP1  RESET     KEY7                                                        
          READ      PMSIMPA1,KEY7;;                                             
          RETURN
.
RAPMIMP1  RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      PMSIMPA1,KEY7;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMIMP1  RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      PMSIMPA1,KEY7;PMIMCODE,PMIMDESC,PMIMACTV,PMIMDACT,PMIMDIAC: 
                                  PMIMCUID,PMIMCDAT,PMIMCTIM,PMIMUUID,PMIMUDAT: 
                                  PMIMUTIM,PMIMHDPE,PMIMGCDE,PMIMSPAR           
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMIMP1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSIMPA1;PMIMCODE,PMIMDESC,PMIMACTV,PMIMDACT,PMIMDIAC:      
                             PMIMCUID,PMIMCDAT,PMIMCTIM,PMIMUUID,PMIMUDAT:      
                             PMIMUTIM,PMIMHDPE,PMIMGCDE,PMIMSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMIMP1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSIMPA1;PMIMCODE,PMIMDESC,PMIMACTV,PMIMDACT,PMIMDIAC:      
                             PMIMCUID,PMIMCDAT,PMIMCTIM,PMIMUUID,PMIMUDAT:      
                             PMIMUTIM,PMIMHDPE,PMIMGCDE,PMIMSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMIMP1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSIMPA1;PMIMCODE,PMIMDESC,PMIMACTV,PMIMDACT,PMIMDIAC:      
                             PMIMCUID,PMIMCDAT,PMIMCTIM,PMIMUUID,PMIMUDAT:      
                             PMIMUTIM,PMIMHDPE,PMIMGCDE,PMIMSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMIMP1  RESET     KEY7                                                        
          WRITE     PMSIMPA1,KEY7;PMIMCODE,PMIMDESC,PMIMACTV,PMIMDACT,PMIMDIAC: 
                                  PMIMCUID,PMIMCDAT,PMIMCTIM,PMIMUUID,PMIMUDAT: 
                                  PMIMUTIM,PMIMHDPE,PMIMGCDE,PMIMSPAR           
          RETURN
.
DEPMIMP1  RESET     KEY7                                                        
          DELETE    PMSIMPA1,KEY7                                               
          RETURN
.
RLPMIMP1  RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READL     PMSIMPA1,KEY7;PMIMCODE,PMIMDESC,PMIMACTV,PMIMDACT,PMIMDIAC: 
                                  PMIMCUID,PMIMCDAT,PMIMCTIM,PMIMUUID,PMIMUDAT: 
                                  PMIMUTIM,PMIMHDPE,PMIMGCDE,PMIMSPAR           
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMIMP1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSIMPA1;PMIMCODE,PMIMDESC,PMIMACTV,PMIMDACT,PMIMDIAC:      
                             PMIMCUID,PMIMCDAT,PMIMCTIM,PMIMUUID,PMIMUDAT:      
                             PMIMUTIM,PMIMHDPE,PMIMGCDE,PMIMSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMIMP1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSIMPA1;PMIMCODE,PMIMDESC,PMIMACTV,PMIMDACT,PMIMDIAC:      
                             PMIMCUID,PMIMCDAT,PMIMCTIM,PMIMUUID,PMIMUDAT:      
                             PMIMUTIM,PMIMHDPE,PMIMGCDE,PMIMSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMIMP1  RESET     KEY7                                                        
          UNLOCK    PMSIMPA1                                                    
          RETURN
.
