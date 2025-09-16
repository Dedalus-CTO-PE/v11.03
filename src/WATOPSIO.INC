.
. WATOPSIO    
. --------
. Filename     : watopsaf.dat
.
RSWTOPS1  RESET     KEY27                                                       
          READ      WATOPSA1,KEY27;;                                            
          RETURN
.
RAWTOPS1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      WATOPSA1,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTOPS1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      WATOPSA1,KEY27;WTOSURNO,WTOSCODE,WTOSCOUN,WTOSSITE,WTOSCLIN:
                        WTOSDATE,WTOSSTRT,WTOSSLOT,WTOSOUTN,WTOSOSTA,WTOSPDAT:  
                        WTOSPTIM,WTOSSTAT,WTOSCDAT,WTOSCTIM,WTOSCUID,WTOSUDAT:  
                        WTOSUTIM,WTOSUUID,WTOSSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTOPS1                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATOPSA1;WTOSURNO,WTOSCODE,WTOSCOUN,WTOSSITE,WTOSCLIN:      
                        WTOSDATE,WTOSSTRT,WTOSSLOT,WTOSOUTN,WTOSOSTA,WTOSPDAT:  
                        WTOSPTIM,WTOSSTAT,WTOSCDAT,WTOSCTIM,WTOSCUID,WTOSUDAT:  
                        WTOSUTIM,WTOSUUID,WTOSSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTOPS1                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATOPSA1;WTOSURNO,WTOSCODE,WTOSCOUN,WTOSSITE,WTOSCLIN:      
                        WTOSDATE,WTOSSTRT,WTOSSLOT,WTOSOUTN,WTOSOSTA,WTOSPDAT:  
                        WTOSPTIM,WTOSSTAT,WTOSCDAT,WTOSCTIM,WTOSCUID,WTOSUDAT:  
                        WTOSUTIM,WTOSUUID,WTOSSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTOPS1                                                                        
          UPDATE    WATOPSA1;WTOSURNO,WTOSCODE,WTOSCOUN,WTOSSITE,WTOSCLIN:      
                        WTOSDATE,WTOSSTRT,WTOSSLOT,WTOSOUTN,WTOSOSTA,WTOSPDAT:  
                        WTOSPTIM,WTOSSTAT,WTOSCDAT,WTOSCTIM,WTOSCUID,WTOSUDAT:  
                        WTOSUTIM,WTOSUUID,WTOSSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWTOPS1  RESET     KEY27                                                       
          WRITE     WATOPSA1,KEY27;WTOSURNO,WTOSCODE,WTOSCOUN,WTOSSITE,WTOSCLIN:
                        WTOSDATE,WTOSSTRT,WTOSSLOT,WTOSOUTN,WTOSOSTA,WTOSPDAT:  
                        WTOSPTIM,WTOSSTAT,WTOSCDAT,WTOSCTIM,WTOSCUID,WTOSUDAT:  
                        WTOSUTIM,WTOSUUID,WTOSSPAR                              
          RETURN
.
DEWTOPS1  RESET     KEY27                                                       
          DELETE    WATOPSA1,KEY27                                              
          RETURN
.
RLWTOPS1  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READL     WATOPSA1,KEY27;WTOSURNO,WTOSCODE,WTOSCOUN,WTOSSITE,WTOSCLIN:
                        WTOSDATE,WTOSSTRT,WTOSSLOT,WTOSOUTN,WTOSOSTA,WTOSPDAT:  
                        WTOSPTIM,WTOSSTAT,WTOSCDAT,WTOSCTIM,WTOSCUID,WTOSUDAT:  
                        WTOSUTIM,WTOSUUID,WTOSSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWTOPS1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WATOPSA1;WTOSURNO,WTOSCODE,WTOSCOUN,WTOSSITE,WTOSCLIN:      
                        WTOSDATE,WTOSSTRT,WTOSSLOT,WTOSOUTN,WTOSOSTA,WTOSPDAT:  
                        WTOSPTIM,WTOSSTAT,WTOSCDAT,WTOSCTIM,WTOSCUID,WTOSUDAT:  
                        WTOSUTIM,WTOSUUID,WTOSSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWTOPS1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WATOPSA1;WTOSURNO,WTOSCODE,WTOSCOUN,WTOSSITE,WTOSCLIN:      
                        WTOSDATE,WTOSSTRT,WTOSSLOT,WTOSOUTN,WTOSOSTA,WTOSPDAT:  
                        WTOSPTIM,WTOSSTAT,WTOSCDAT,WTOSCTIM,WTOSCUID,WTOSUDAT:  
                        WTOSUTIM,WTOSUUID,WTOSSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWTOPS1  RESET     KEY27                                                       
          UNLOCK    WATOPSA1                                                    
          RETURN
.
RSWTOPS2  RESET     KEY8                                                        
          READ      WATOPSA2,KEY8;;                                             
          RETURN
.
RAWTOPS2  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      WATOPSA2,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTOPS2  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      WATOPSA2,KEY8;WTOSURNO,WTOSCODE,WTOSCOUN,WTOSSITE,WTOSCLIN: 
                        WTOSDATE,WTOSSTRT,WTOSSLOT,WTOSOUTN,WTOSOSTA,WTOSPDAT:  
                        WTOSPTIM,WTOSSTAT,WTOSCDAT,WTOSCTIM,WTOSCUID,WTOSUDAT:  
                        WTOSUTIM,WTOSUUID,WTOSSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTOPS2                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATOPSA2;WTOSURNO,WTOSCODE,WTOSCOUN,WTOSSITE,WTOSCLIN:      
                        WTOSDATE,WTOSSTRT,WTOSSLOT,WTOSOUTN,WTOSOSTA,WTOSPDAT:  
                        WTOSPTIM,WTOSSTAT,WTOSCDAT,WTOSCTIM,WTOSCUID,WTOSUDAT:  
                        WTOSUTIM,WTOSUUID,WTOSSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTOPS2                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATOPSA2;WTOSURNO,WTOSCODE,WTOSCOUN,WTOSSITE,WTOSCLIN:      
                        WTOSDATE,WTOSSTRT,WTOSSLOT,WTOSOUTN,WTOSOSTA,WTOSPDAT:  
                        WTOSPTIM,WTOSSTAT,WTOSCDAT,WTOSCTIM,WTOSCUID,WTOSUDAT:  
                        WTOSUTIM,WTOSUUID,WTOSSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTOPS2                                                                        
          UPDATE    WATOPSA2;WTOSURNO,WTOSCODE,WTOSCOUN,WTOSSITE,WTOSCLIN:      
                        WTOSDATE,WTOSSTRT,WTOSSLOT,WTOSOUTN,WTOSOSTA,WTOSPDAT:  
                        WTOSPTIM,WTOSSTAT,WTOSCDAT,WTOSCTIM,WTOSCUID,WTOSUDAT:  
                        WTOSUTIM,WTOSUUID,WTOSSPAR                              
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWTOPS2  RESET     KEY8                                                        
          WRITE     WATOPSA2,KEY8;WTOSURNO,WTOSCODE,WTOSCOUN,WTOSSITE,WTOSCLIN: 
                        WTOSDATE,WTOSSTRT,WTOSSLOT,WTOSOUTN,WTOSOSTA,WTOSPDAT:  
                        WTOSPTIM,WTOSSTAT,WTOSCDAT,WTOSCTIM,WTOSCUID,WTOSUDAT:  
                        WTOSUTIM,WTOSUUID,WTOSSPAR                              
          RETURN
.
DEWTOPS2  RESET     KEY8                                                        
          DELETE    WATOPSA2,KEY8                                               
          RETURN
.
RLWTOPS2  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     WATOPSA2,KEY8;WTOSURNO,WTOSCODE,WTOSCOUN,WTOSSITE,WTOSCLIN: 
                        WTOSDATE,WTOSSTRT,WTOSSLOT,WTOSOUTN,WTOSOSTA,WTOSPDAT:  
                        WTOSPTIM,WTOSSTAT,WTOSCDAT,WTOSCTIM,WTOSCUID,WTOSUDAT:  
                        WTOSUTIM,WTOSUUID,WTOSSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWTOPS2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WATOPSA2;WTOSURNO,WTOSCODE,WTOSCOUN,WTOSSITE,WTOSCLIN:      
                        WTOSDATE,WTOSSTRT,WTOSSLOT,WTOSOUTN,WTOSOSTA,WTOSPDAT:  
                        WTOSPTIM,WTOSSTAT,WTOSCDAT,WTOSCTIM,WTOSCUID,WTOSUDAT:  
                        WTOSUTIM,WTOSUUID,WTOSSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWTOPS2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WATOPSA2;WTOSURNO,WTOSCODE,WTOSCOUN,WTOSSITE,WTOSCLIN:      
                        WTOSDATE,WTOSSTRT,WTOSSLOT,WTOSOUTN,WTOSOSTA,WTOSPDAT:  
                        WTOSPTIM,WTOSSTAT,WTOSCDAT,WTOSCTIM,WTOSCUID,WTOSUDAT:  
                        WTOSUTIM,WTOSUUID,WTOSSPAR                              
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWTOPS2  RESET     KEY8                                                        
          UNLOCK    WATOPSA2                                                    
          RETURN
.
