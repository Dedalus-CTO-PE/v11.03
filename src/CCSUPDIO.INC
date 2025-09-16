.
. CCSUPDIO    
. --------
. Filename     : ccsupdaf.dat
.
RSCCUP1   RESET     KEY12                                                       
          READ      CCSUPDA1,KEY12;;                                            
          RETURN
.
RACCUP1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      CCSUPDA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCUP1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      CCSUPDA1,KEY12;CCUPRUN,CCUPREC,CCUPHCD,CCUPDPT,CCUPPCD:     
                        CCUPENC,CCUPURN,CCUPDAT,CCUPTIM,CCUPQTY,CCUPCHG:        
                        CCUPCL1,CCUPCL2,CCUPCL3,CCUPCL4,CCUPCL5,CCUPSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCUP1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSUPDA1;CCUPRUN,CCUPREC,CCUPHCD,CCUPDPT,CCUPPCD:           
                        CCUPENC,CCUPURN,CCUPDAT,CCUPTIM,CCUPQTY,CCUPCHG:        
                        CCUPCL1,CCUPCL2,CCUPCL3,CCUPCL4,CCUPCL5,CCUPSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCUP1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSUPDA1;CCUPRUN,CCUPREC,CCUPHCD,CCUPDPT,CCUPPCD:           
                        CCUPENC,CCUPURN,CCUPDAT,CCUPTIM,CCUPQTY,CCUPCHG:        
                        CCUPCL1,CCUPCL2,CCUPCL3,CCUPCL4,CCUPCL5,CCUPSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCUP1                                                                         
          UPDATE    CCSUPDA1;CCUPRUN,CCUPREC,CCUPHCD,CCUPDPT,CCUPPCD:           
                        CCUPENC,CCUPURN,CCUPDAT,CCUPTIM,CCUPQTY,CCUPCHG:        
                        CCUPCL1,CCUPCL2,CCUPCL3,CCUPCL4,CCUPCL5,CCUPSPA         
          RETURN
.
WRCCUP1   RESET     KEY12                                                       
          WRITE     CCSUPDA1,KEY12;CCUPRUN,CCUPREC,CCUPHCD,CCUPDPT,CCUPPCD:     
                        CCUPENC,CCUPURN,CCUPDAT,CCUPTIM,CCUPQTY,CCUPCHG:        
                        CCUPCL1,CCUPCL2,CCUPCL3,CCUPCL4,CCUPCL5,CCUPSPA         
          RETURN
.
DECCUP1   RESET     KEY12                                                       
          DELETE    CCSUPDA1,KEY12                                              
          RETURN
.
RSCCUP2   RESET     KEY31                                                       
          READ      CCSUPDA2,KEY31;;                                            
          RETURN
.
RACCUP2   RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      CCSUPDA2,KEY31;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCUP2   RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      CCSUPDA2,KEY31;CCUPRUN,CCUPREC,CCUPHCD,CCUPDPT,CCUPPCD:     
                        CCUPENC,CCUPURN,CCUPDAT,CCUPTIM,CCUPQTY,CCUPCHG:        
                        CCUPCL1,CCUPCL2,CCUPCL3,CCUPCL4,CCUPCL5,CCUPSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCUP2                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSUPDA2;CCUPRUN,CCUPREC,CCUPHCD,CCUPDPT,CCUPPCD:           
                        CCUPENC,CCUPURN,CCUPDAT,CCUPTIM,CCUPQTY,CCUPCHG:        
                        CCUPCL1,CCUPCL2,CCUPCL3,CCUPCL4,CCUPCL5,CCUPSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCUP2                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSUPDA2;CCUPRUN,CCUPREC,CCUPHCD,CCUPDPT,CCUPPCD:           
                        CCUPENC,CCUPURN,CCUPDAT,CCUPTIM,CCUPQTY,CCUPCHG:        
                        CCUPCL1,CCUPCL2,CCUPCL3,CCUPCL4,CCUPCL5,CCUPSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCUP2                                                                         
          UPDATE    CCSUPDA2;CCUPRUN,CCUPREC,CCUPHCD,CCUPDPT,CCUPPCD:           
                        CCUPENC,CCUPURN,CCUPDAT,CCUPTIM,CCUPQTY,CCUPCHG:        
                        CCUPCL1,CCUPCL2,CCUPCL3,CCUPCL4,CCUPCL5,CCUPSPA         
          RETURN
.
WRCCUP2   RESET     KEY31                                                       
          WRITE     CCSUPDA2,KEY31;CCUPRUN,CCUPREC,CCUPHCD,CCUPDPT,CCUPPCD:     
                        CCUPENC,CCUPURN,CCUPDAT,CCUPTIM,CCUPQTY,CCUPCHG:        
                        CCUPCL1,CCUPCL2,CCUPCL3,CCUPCL4,CCUPCL5,CCUPSPA         
          RETURN
.
DECCUP2   RESET     KEY31                                                       
          DELETE    CCSUPDA2,KEY31                                              
          RETURN
.
RSCCUP3   RESET     KEY31                                                       
          READ      CCSUPDA3,KEY31;;                                            
          RETURN
.
RACCUP3   RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      CCSUPDA3,KEY31;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCUP3   RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      CCSUPDA3,KEY31;CCUPRUN,CCUPREC,CCUPHCD,CCUPDPT,CCUPPCD:     
                        CCUPENC,CCUPURN,CCUPDAT,CCUPTIM,CCUPQTY,CCUPCHG:        
                        CCUPCL1,CCUPCL2,CCUPCL3,CCUPCL4,CCUPCL5,CCUPSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCUP3                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSUPDA3;CCUPRUN,CCUPREC,CCUPHCD,CCUPDPT,CCUPPCD:           
                        CCUPENC,CCUPURN,CCUPDAT,CCUPTIM,CCUPQTY,CCUPCHG:        
                        CCUPCL1,CCUPCL2,CCUPCL3,CCUPCL4,CCUPCL5,CCUPSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCUP3                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSUPDA3;CCUPRUN,CCUPREC,CCUPHCD,CCUPDPT,CCUPPCD:           
                        CCUPENC,CCUPURN,CCUPDAT,CCUPTIM,CCUPQTY,CCUPCHG:        
                        CCUPCL1,CCUPCL2,CCUPCL3,CCUPCL4,CCUPCL5,CCUPSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCUP3                                                                         
          UPDATE    CCSUPDA3;CCUPRUN,CCUPREC,CCUPHCD,CCUPDPT,CCUPPCD:           
                        CCUPENC,CCUPURN,CCUPDAT,CCUPTIM,CCUPQTY,CCUPCHG:        
                        CCUPCL1,CCUPCL2,CCUPCL3,CCUPCL4,CCUPCL5,CCUPSPA         
          RETURN
.
WRCCUP3   RESET     KEY31                                                       
          WRITE     CCSUPDA3,KEY31;CCUPRUN,CCUPREC,CCUPHCD,CCUPDPT,CCUPPCD:     
                        CCUPENC,CCUPURN,CCUPDAT,CCUPTIM,CCUPQTY,CCUPCHG:        
                        CCUPCL1,CCUPCL2,CCUPCL3,CCUPCL4,CCUPCL5,CCUPSPA         
          RETURN
.
DECCUP3   RESET     KEY31                                                       
          DELETE    CCSUPDA3,KEY31                                              
          RETURN
.
RSCCUP4   RESET     KEY23                                                       
          READ      CCSUPDA4,KEY23;;                                            
          RETURN
.
RACCUP4   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      CCSUPDA4,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCUP4   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      CCSUPDA4,KEY23;CCUPRUN,CCUPREC,CCUPHCD,CCUPDPT,CCUPPCD:     
                        CCUPENC,CCUPURN,CCUPDAT,CCUPTIM,CCUPQTY,CCUPCHG:        
                        CCUPCL1,CCUPCL2,CCUPCL3,CCUPCL4,CCUPCL5,CCUPSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCUP4                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSUPDA4;CCUPRUN,CCUPREC,CCUPHCD,CCUPDPT,CCUPPCD:           
                        CCUPENC,CCUPURN,CCUPDAT,CCUPTIM,CCUPQTY,CCUPCHG:        
                        CCUPCL1,CCUPCL2,CCUPCL3,CCUPCL4,CCUPCL5,CCUPSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCUP4                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSUPDA4;CCUPRUN,CCUPREC,CCUPHCD,CCUPDPT,CCUPPCD:           
                        CCUPENC,CCUPURN,CCUPDAT,CCUPTIM,CCUPQTY,CCUPCHG:        
                        CCUPCL1,CCUPCL2,CCUPCL3,CCUPCL4,CCUPCL5,CCUPSPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCUP4                                                                         
          UPDATE    CCSUPDA4;CCUPRUN,CCUPREC,CCUPHCD,CCUPDPT,CCUPPCD:           
                        CCUPENC,CCUPURN,CCUPDAT,CCUPTIM,CCUPQTY,CCUPCHG:        
                        CCUPCL1,CCUPCL2,CCUPCL3,CCUPCL4,CCUPCL5,CCUPSPA         
          RETURN
.
WRCCUP4   RESET     KEY23                                                       
          WRITE     CCSUPDA4,KEY23;CCUPRUN,CCUPREC,CCUPHCD,CCUPDPT,CCUPPCD:     
                        CCUPENC,CCUPURN,CCUPDAT,CCUPTIM,CCUPQTY,CCUPCHG:        
                        CCUPCL1,CCUPCL2,CCUPCL3,CCUPCL4,CCUPCL5,CCUPSPA         
          RETURN
.
DECCUP4   RESET     KEY23                                                       
          DELETE    CCSUPDA4,KEY23                                              
          RETURN
.
