.
. OBSCOMIO    
. --------
. Filename     : obscomaf.dat
.
RSOBCOM1  RESET     KEY8                                                        
          READ      OBSCOMA1,KEY8;;                                             
          RETURN
.
RAOBCOM1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      OBSCOMA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOBCOM1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      OBSCOMA1,KEY8;OBCOVISN,OBCOLTAC,OBCODIAB,OBCOCCAL,OBCOASTH: 
                        OBCOCIHD,OBCOCCCF,OBCOHYPR,OBCOWOUN,OBCOHAEM,OBCOCMPE:  
                        OBCOCUTI,OBCOCHIN,OBCOCDVT,OBCOPRUL,OBCOOTHE,OBCODESC:  
                        OBCOFVMO,OBCOVMON,OBCOVDAT,OBCOVTIM,OBCOFLMO,OBCOLMON:  
                        OBCOLDAT,OBCOLTIM,OBCOFOTH,OBCOOTHN,OBCOODAT,OBCOOTIM:  
                        OBCOWEBC,OBCODATC,OBCOTIMC,OBCOWEBU,OBCODATU,OBCOTIMU:  
                        OBCOSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOBCOM1                                                                        
          MOVE      ZERO,OVRCD
          READKS    OBSCOMA1;OBCOVISN,OBCOLTAC,OBCODIAB,OBCOCCAL,OBCOASTH:      
                        OBCOCIHD,OBCOCCCF,OBCOHYPR,OBCOWOUN,OBCOHAEM,OBCOCMPE:  
                        OBCOCUTI,OBCOCHIN,OBCOCDVT,OBCOPRUL,OBCOOTHE,OBCODESC:  
                        OBCOFVMO,OBCOVMON,OBCOVDAT,OBCOVTIM,OBCOFLMO,OBCOLMON:  
                        OBCOLDAT,OBCOLTIM,OBCOFOTH,OBCOOTHN,OBCOODAT,OBCOOTIM:  
                        OBCOWEBC,OBCODATC,OBCOTIMC,OBCOWEBU,OBCODATU,OBCOTIMU:  
                        OBCOSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOBCOM1                                                                        
          MOVE      ZERO,OVRCD
          READKP    OBSCOMA1;OBCOVISN,OBCOLTAC,OBCODIAB,OBCOCCAL,OBCOASTH:      
                        OBCOCIHD,OBCOCCCF,OBCOHYPR,OBCOWOUN,OBCOHAEM,OBCOCMPE:  
                        OBCOCUTI,OBCOCHIN,OBCOCDVT,OBCOPRUL,OBCOOTHE,OBCODESC:  
                        OBCOFVMO,OBCOVMON,OBCOVDAT,OBCOVTIM,OBCOFLMO,OBCOLMON:  
                        OBCOLDAT,OBCOLTIM,OBCOFOTH,OBCOOTHN,OBCOODAT,OBCOOTIM:  
                        OBCOWEBC,OBCODATC,OBCOTIMC,OBCOWEBU,OBCODATU,OBCOTIMU:  
                        OBCOSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOBCOM1                                                                        
          UPDATE    OBSCOMA1;OBCOVISN,OBCOLTAC,OBCODIAB,OBCOCCAL,OBCOASTH:      
                        OBCOCIHD,OBCOCCCF,OBCOHYPR,OBCOWOUN,OBCOHAEM,OBCOCMPE:  
                        OBCOCUTI,OBCOCHIN,OBCOCDVT,OBCOPRUL,OBCOOTHE,OBCODESC:  
                        OBCOFVMO,OBCOVMON,OBCOVDAT,OBCOVTIM,OBCOFLMO,OBCOLMON:  
                        OBCOLDAT,OBCOLTIM,OBCOFOTH,OBCOOTHN,OBCOODAT,OBCOOTIM:  
                        OBCOWEBC,OBCODATC,OBCOTIMC,OBCOWEBU,OBCODATU,OBCOTIMU:  
                        OBCOSPAR                                                
          RETURN
.
WROBCOM1  RESET     KEY8                                                        
          WRITE     OBSCOMA1,KEY8;OBCOVISN,OBCOLTAC,OBCODIAB,OBCOCCAL,OBCOASTH: 
                        OBCOCIHD,OBCOCCCF,OBCOHYPR,OBCOWOUN,OBCOHAEM,OBCOCMPE:  
                        OBCOCUTI,OBCOCHIN,OBCOCDVT,OBCOPRUL,OBCOOTHE,OBCODESC:  
                        OBCOFVMO,OBCOVMON,OBCOVDAT,OBCOVTIM,OBCOFLMO,OBCOLMON:  
                        OBCOLDAT,OBCOLTIM,OBCOFOTH,OBCOOTHN,OBCOODAT,OBCOOTIM:  
                        OBCOWEBC,OBCODATC,OBCOTIMC,OBCOWEBU,OBCODATU,OBCOTIMU:  
                        OBCOSPAR                                                
          RETURN
.
DEOBCOM1  RESET     KEY8                                                        
          DELETE    OBSCOMA1,KEY8                                               
          RETURN
.
