.
. PMSDCAIO    
. --------
. Filename     : pmsdcaaf.dat
.
RSPMDCA1  RESET     KEY27                                                       
          READ      PMSDCAA1,KEY27;;                                            
          RETURN
.
RAPMDCA1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PMSDCAA1,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMDCA1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      PMSDCAA1,KEY27;PMDCFILE,PMDCUNIQ,PMDCCONT,PMDCRKEY,PMDCDUID:
                        PMDCDDAT,PMDCDTIM,PMDCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMDCA1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSDCAA1;PMDCFILE,PMDCUNIQ,PMDCCONT,PMDCRKEY,PMDCDUID:      
                        PMDCDDAT,PMDCDTIM,PMDCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMDCA1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSDCAA1;PMDCFILE,PMDCUNIQ,PMDCCONT,PMDCRKEY,PMDCDUID:      
                        PMDCDDAT,PMDCDTIM,PMDCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMDCA1                                                                        
          UPDATE    PMSDCAA1;PMDCFILE,PMDCUNIQ,PMDCCONT,PMDCRKEY,PMDCDUID:      
                        PMDCDDAT,PMDCDTIM,PMDCSPAR                              
          RETURN
.
WRPMDCA1  RESET     KEY27                                                       
          WRITE     PMSDCAA1,KEY27;PMDCFILE,PMDCUNIQ,PMDCCONT,PMDCRKEY,PMDCDUID:
                        PMDCDDAT,PMDCDTIM,PMDCSPAR                              
          RETURN
.
DEPMDCA1  RESET     KEY27                                                       
          DELETE    PMSDCAA1,KEY27                                              
          RETURN
.
RSPMDCA2  RESET     KEY33                                                       
          READ      PMSDCAA2,KEY33;;                                            
          RETURN
.
RAPMDCA2  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      PMSDCAA2,KEY33;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMDCA2  RESET     KEY33                                                       
          MOVE      ZERO,OVRCD
          READ      PMSDCAA2,KEY33;PMDCFILE,PMDCUNIQ,PMDCCONT,PMDCRKEY,PMDCDUID:
                        PMDCDDAT,PMDCDTIM,PMDCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMDCA2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSDCAA2;PMDCFILE,PMDCUNIQ,PMDCCONT,PMDCRKEY,PMDCDUID:      
                        PMDCDDAT,PMDCDTIM,PMDCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMDCA2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSDCAA2;PMDCFILE,PMDCUNIQ,PMDCCONT,PMDCRKEY,PMDCDUID:      
                        PMDCDDAT,PMDCDTIM,PMDCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMDCA2                                                                        
          UPDATE    PMSDCAA2;PMDCFILE,PMDCUNIQ,PMDCCONT,PMDCRKEY,PMDCDUID:      
                        PMDCDDAT,PMDCDTIM,PMDCSPAR                              
          RETURN
.
WRPMDCA2  RESET     KEY33                                                       
          WRITE     PMSDCAA2,KEY33;PMDCFILE,PMDCUNIQ,PMDCCONT,PMDCRKEY,PMDCDUID:
                        PMDCDDAT,PMDCDTIM,PMDCSPAR                              
          RETURN
.
DEPMDCA2  RESET     KEY33                                                       
          DELETE    PMSDCAA2,KEY33                                              
          RETURN
.
RSPMDCA3  RESET     KEY37                                                       
          READ      PMSDCAA3,KEY37;;                                            
          RETURN
.
RAPMDCA3  RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      PMSDCAA3,KEY37;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMDCA3  RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      PMSDCAA3,KEY37;PMDCFILE,PMDCUNIQ,PMDCCONT,PMDCRKEY,PMDCDUID:
                        PMDCDDAT,PMDCDTIM,PMDCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMDCA3                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSDCAA3;PMDCFILE,PMDCUNIQ,PMDCCONT,PMDCRKEY,PMDCDUID:      
                        PMDCDDAT,PMDCDTIM,PMDCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMDCA3                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSDCAA3;PMDCFILE,PMDCUNIQ,PMDCCONT,PMDCRKEY,PMDCDUID:      
                        PMDCDDAT,PMDCDTIM,PMDCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMDCA3                                                                        
          UPDATE    PMSDCAA3;PMDCFILE,PMDCUNIQ,PMDCCONT,PMDCRKEY,PMDCDUID:      
                        PMDCDDAT,PMDCDTIM,PMDCSPAR                              
          RETURN
.
WRPMDCA3  RESET     KEY37                                                       
          WRITE     PMSDCAA3,KEY37;PMDCFILE,PMDCUNIQ,PMDCCONT,PMDCRKEY,PMDCDUID:
                        PMDCDDAT,PMDCDTIM,PMDCSPAR                              
          RETURN
.
DEPMDCA3  RESET     KEY37                                                       
          DELETE    PMSDCAA3,KEY37                                              
          RETURN
.
RSPMDCA4  RESET     KEY43                                                       
          READ      PMSDCAA4,KEY43;;                                            
          RETURN
.
RAPMDCA4  RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READ      PMSDCAA4,KEY43;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMDCA4  RESET     KEY43                                                       
          MOVE      ZERO,OVRCD
          READ      PMSDCAA4,KEY43;PMDCFILE,PMDCUNIQ,PMDCCONT,PMDCRKEY,PMDCDUID:
                        PMDCDDAT,PMDCDTIM,PMDCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMDCA4                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSDCAA4;PMDCFILE,PMDCUNIQ,PMDCCONT,PMDCRKEY,PMDCDUID:      
                        PMDCDDAT,PMDCDTIM,PMDCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMDCA4                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSDCAA4;PMDCFILE,PMDCUNIQ,PMDCCONT,PMDCRKEY,PMDCDUID:      
                        PMDCDDAT,PMDCDTIM,PMDCSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMDCA4                                                                        
          UPDATE    PMSDCAA4;PMDCFILE,PMDCUNIQ,PMDCCONT,PMDCRKEY,PMDCDUID:      
                        PMDCDDAT,PMDCDTIM,PMDCSPAR                              
          RETURN
.
WRPMDCA4  RESET     KEY43                                                       
          WRITE     PMSDCAA4,KEY43;PMDCFILE,PMDCUNIQ,PMDCCONT,PMDCRKEY,PMDCDUID:
                        PMDCDDAT,PMDCDTIM,PMDCSPAR                              
          RETURN
.
DEPMDCA4  RESET     KEY43                                                       
          DELETE    PMSDCAA4,KEY43                                              
          RETURN
.
