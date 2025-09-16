.
. PATCHXIO    
. --------
. Filename     : patchxaf.dat
.
RSPTCHX1  RESET     KEY24                                                       
          READ      PATCHXA1,KEY24;;                                            
          RETURN
.
RAPTCHX1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATCHXA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTCHX1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATCHXA1,KEY24;DPTCHADM,PTCHDATE,PTCHTIME,PTCHCODE,PTCHSPAR 
          GOTO      OVERCOND IF OVER
          MOVE      DPTCHADM,PTCHADMN                                           
          RETURN
.
RKPTCHX1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATCHXA1;DPTCHADM,PTCHDATE,PTCHTIME,PTCHCODE,PTCHSPAR       
          GOTO      OVERCOND IF OVER
          MOVE      DPTCHADM,PTCHADMN                                           
          RETURN
.
RPPTCHX1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATCHXA1;DPTCHADM,PTCHDATE,PTCHTIME,PTCHCODE,PTCHSPAR       
          GOTO      OVERCOND IF OVER
          MOVE      DPTCHADM,PTCHADMN                                           
          RETURN
.
UPPTCHX1                                                                        
          MOVE      PTCHADMN,DPTCHADM                                           
          UPDATE    PATCHXA1;DPTCHADM,PTCHDATE,PTCHTIME,PTCHCODE,PTCHSPAR       
          RETURN
.
WRPTCHX1  RESET     KEY24                                                       
          MOVE      PTCHADMN,DPTCHADM                                           
          WRITE     PATCHXA1,KEY24;DPTCHADM,PTCHDATE,PTCHTIME,PTCHCODE,PTCHSPAR 
          RETURN
.
DEPTCHX1  RESET     KEY24                                                       
          DELETE    PATCHXA1,KEY24                                              
          RETURN
.
