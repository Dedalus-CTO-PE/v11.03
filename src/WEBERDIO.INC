.
. WEBERDIO    
. --------
. Filename     : weberdaf.dat
.
RSWBERD1  RESET     KEY82                                                       
          READ      WEBERDA1,KEY82;;                                            
          RETURN
.
RAWBERD1  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      WEBERDA1,KEY82;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBERD1  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      WEBERDA1,KEY82;WBEJFTID,WBEJRADV,WBEJPNUM,WBEJTRID,WBEJARID:
                                   WBEJBAMT,WBEJCCOD,WBEJLDAT,WBEJPARI,WBEJPTID:
                                   WBEJSTAT,WBEJLTYP,WBEJCLID,WBEJMSID,WBEJSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBERD1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBERDA1;WBEJFTID,WBEJRADV,WBEJPNUM,WBEJTRID,WBEJARID:      
                             WBEJBAMT,WBEJCCOD,WBEJLDAT,WBEJPARI,WBEJPTID:      
                             WBEJSTAT,WBEJLTYP,WBEJCLID,WBEJMSID,WBEJSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBERD1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBERDA1;WBEJFTID,WBEJRADV,WBEJPNUM,WBEJTRID,WBEJARID:      
                             WBEJBAMT,WBEJCCOD,WBEJLDAT,WBEJPARI,WBEJPTID:      
                             WBEJSTAT,WBEJLTYP,WBEJCLID,WBEJMSID,WBEJSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBERD1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBERDA1;WBEJFTID,WBEJRADV,WBEJPNUM,WBEJTRID,WBEJARID:      
                             WBEJBAMT,WBEJCCOD,WBEJLDAT,WBEJPARI,WBEJPTID:      
                             WBEJSTAT,WBEJLTYP,WBEJCLID,WBEJMSID,WBEJSPAR       
          RETURN
.
WRWBERD1  RESET     KEY82                                                       
          WRITE     WEBERDA1,KEY82;WBEJFTID,WBEJRADV,WBEJPNUM,WBEJTRID,WBEJARID:
                                   WBEJBAMT,WBEJCCOD,WBEJLDAT,WBEJPARI,WBEJPTID:
                                   WBEJSTAT,WBEJLTYP,WBEJCLID,WBEJMSID,WBEJSPAR 
          RETURN
.
DEWBERD1  RESET     KEY82                                                       
          DELETE    WEBERDA1,KEY82                                              
          RETURN
.
RSWBERD2  RESET     KEY82                                                       
          READ      WEBERDA2,KEY82;;                                            
          RETURN
.
RAWBERD2  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      WEBERDA2,KEY82;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBERD2  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      WEBERDA2,KEY82;WBEJFTID,WBEJRADV,WBEJPNUM,WBEJTRID,WBEJARID:
                                   WBEJBAMT,WBEJCCOD,WBEJLDAT,WBEJPARI,WBEJPTID:
                                   WBEJSTAT,WBEJLTYP,WBEJCLID,WBEJMSID,WBEJSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBERD2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBERDA2;WBEJFTID,WBEJRADV,WBEJPNUM,WBEJTRID,WBEJARID:      
                             WBEJBAMT,WBEJCCOD,WBEJLDAT,WBEJPARI,WBEJPTID:      
                             WBEJSTAT,WBEJLTYP,WBEJCLID,WBEJMSID,WBEJSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBERD2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBERDA2;WBEJFTID,WBEJRADV,WBEJPNUM,WBEJTRID,WBEJARID:      
                             WBEJBAMT,WBEJCCOD,WBEJLDAT,WBEJPARI,WBEJPTID:      
                             WBEJSTAT,WBEJLTYP,WBEJCLID,WBEJMSID,WBEJSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBERD2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBERDA2;WBEJFTID,WBEJRADV,WBEJPNUM,WBEJTRID,WBEJARID:      
                             WBEJBAMT,WBEJCCOD,WBEJLDAT,WBEJPARI,WBEJPTID:      
                             WBEJSTAT,WBEJLTYP,WBEJCLID,WBEJMSID,WBEJSPAR       
          RETURN
.
WRWBERD2  RESET     KEY82                                                       
          WRITE     WEBERDA2,KEY82;WBEJFTID,WBEJRADV,WBEJPNUM,WBEJTRID,WBEJARID:
                                   WBEJBAMT,WBEJCCOD,WBEJLDAT,WBEJPARI,WBEJPTID:
                                   WBEJSTAT,WBEJLTYP,WBEJCLID,WBEJMSID,WBEJSPAR 
          RETURN
.
DEWBERD2  RESET     KEY82                                                       
          DELETE    WEBERDA2,KEY82                                              
          RETURN
.
RSWBERD3  RESET     KEY102                                                      
          READ      WEBERDA3,KEY102;;                                           
          RETURN
.
RAWBERD3  RESET     KEY102                                                      
          MOVE      ZERO,OVRCD
          READ      WEBERDA3,KEY102;ANS                                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBERD3  RESET     KEY102                                                      
          MOVE      ZERO,OVRCD
          READ      WEBERDA3,KEY102;WBEJFTID,WBEJRADV,WBEJPNUM,WBEJTRID:        
                                    WBEJARID,WBEJBAMT,WBEJCCOD,WBEJLDAT:        
                                    WBEJPARI,WBEJPTID,WBEJSTAT,WBEJLTYP:        
                                    WBEJCLID,WBEJMSID,WBEJSPAR                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBERD3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBERDA3;WBEJFTID,WBEJRADV,WBEJPNUM,WBEJTRID,WBEJARID:      
                             WBEJBAMT,WBEJCCOD,WBEJLDAT,WBEJPARI,WBEJPTID:      
                             WBEJSTAT,WBEJLTYP,WBEJCLID,WBEJMSID,WBEJSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBERD3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBERDA3;WBEJFTID,WBEJRADV,WBEJPNUM,WBEJTRID,WBEJARID:      
                             WBEJBAMT,WBEJCCOD,WBEJLDAT,WBEJPARI,WBEJPTID:      
                             WBEJSTAT,WBEJLTYP,WBEJCLID,WBEJMSID,WBEJSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBERD3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBERDA3;WBEJFTID,WBEJRADV,WBEJPNUM,WBEJTRID,WBEJARID:      
                             WBEJBAMT,WBEJCCOD,WBEJLDAT,WBEJPARI,WBEJPTID:      
                             WBEJSTAT,WBEJLTYP,WBEJCLID,WBEJMSID,WBEJSPAR       
          RETURN
.
WRWBERD3  RESET     KEY102                                                      
          WRITE     WEBERDA3,KEY102;WBEJFTID,WBEJRADV,WBEJPNUM,WBEJTRID:        
                                    WBEJARID,WBEJBAMT,WBEJCCOD,WBEJLDAT:        
                                    WBEJPARI,WBEJPTID,WBEJSTAT,WBEJLTYP:        
                                    WBEJCLID,WBEJMSID,WBEJSPAR                  
          RETURN
.
DEWBERD3  RESET     KEY102                                                      
          DELETE    WEBERDA3,KEY102                                             
          RETURN
.
