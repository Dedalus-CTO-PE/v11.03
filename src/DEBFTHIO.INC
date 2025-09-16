.
. DEBFTHIO    
. --------
. Filename     : debfthaf.dat
.
RSDBFH1   RESET     KEY21                                                       
          READ      DEBFTHA1,KEY21;;                                            
          RETURN
.
RADBFH1   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFTHA1,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBFH1   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFTHA1,KEY21;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:    
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBFH1                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBFTHA1;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBFH1                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBFTHA1;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBFH1                                                                         
          UPDATE    DEBFTHA1;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRDBFH1   RESET     KEY21                                                       
          WRITE     DEBFTHA1,KEY21;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:    
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          RETURN
.
DEDBFH1   RESET     KEY21                                                       
          DELETE    DEBFTHA1,KEY21                                              
          RETURN
.
RLDBFH1   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READL     DEBFTHA1,KEY21;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:    
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLDBFH1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   DEBFTHA1;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLDBFH1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   DEBFTHA1;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUDBFH1   RESET     KEY21                                                       
          UNLOCK    DEBFTHA1                                                    
          RETURN
.
RSDBFH2   RESET     KEY29                                                       
          READ      DEBFTHA2,KEY29;;                                            
          RETURN
.
RADBFH2   RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFTHA2,KEY29;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBFH2   RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFTHA2,KEY29;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:    
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBFH2                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBFTHA2;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBFH2                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBFTHA2;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBFH2                                                                         
          UPDATE    DEBFTHA2;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRDBFH2   RESET     KEY29                                                       
          WRITE     DEBFTHA2,KEY29;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:    
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          RETURN
.
DEDBFH2   RESET     KEY29                                                       
          DELETE    DEBFTHA2,KEY29                                              
          RETURN
.
RLDBFH2   RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READL     DEBFTHA2,KEY29;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:    
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLDBFH2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   DEBFTHA2;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLDBFH2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   DEBFTHA2;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUDBFH2   RESET     KEY29                                                       
          UNLOCK    DEBFTHA2                                                    
          RETURN
.
RSDBFH3   RESET     KEY21                                                       
          READ      DEBFTHA3,KEY21;;                                            
          RETURN
.
RADBFH3   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFTHA3,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBFH3   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFTHA3,KEY21;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:    
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBFH3                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBFTHA3;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBFH3                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBFTHA3;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBFH3                                                                         
          UPDATE    DEBFTHA3;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRDBFH3   RESET     KEY21                                                       
          WRITE     DEBFTHA3,KEY21;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:    
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          RETURN
.
DEDBFH3   RESET     KEY21                                                       
          DELETE    DEBFTHA3,KEY21                                              
          RETURN
.
RLDBFH3   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READL     DEBFTHA3,KEY21;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:    
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLDBFH3                                                                         
          MOVE      ZERO,OVRCD
          READLKS   DEBFTHA3;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLDBFH3                                                                         
          MOVE      ZERO,OVRCD
          READLKP   DEBFTHA3;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUDBFH3   RESET     KEY21                                                       
          UNLOCK    DEBFTHA3                                                    
          RETURN
.
RSDBFH4   RESET     KEY29                                                       
          READ      DEBFTHA4,KEY29;;                                            
          RETURN
.
RADBFH4   RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFTHA4,KEY29;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBFH4   RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFTHA4,KEY29;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:    
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBFH4                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBFTHA4;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBFH4                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBFTHA4;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBFH4                                                                         
          UPDATE    DEBFTHA4;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRDBFH4   RESET     KEY29                                                       
          WRITE     DEBFTHA4,KEY29;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:    
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          RETURN
.
DEDBFH4   RESET     KEY29                                                       
          DELETE    DEBFTHA4,KEY29                                              
          RETURN
.
RLDBFH4   RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READL     DEBFTHA4,KEY29;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:    
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLDBFH4                                                                         
          MOVE      ZERO,OVRCD
          READLKS   DEBFTHA4;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLDBFH4                                                                         
          MOVE      ZERO,OVRCD
          READLKP   DEBFTHA4;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUDBFH4   RESET     KEY29                                                       
          UNLOCK    DEBFTHA4                                                    
          RETURN
.
RSDBFH5   RESET     KEY35                                                       
          READ      DEBFTHA5,KEY35;;                                            
          RETURN
.
RADBFH5   RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFTHA5,KEY35;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBFH5   RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFTHA5,KEY35;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:    
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBFH5                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBFTHA5;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBFH5                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBFTHA5;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBFH5                                                                         
          UPDATE    DEBFTHA5;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRDBFH5   RESET     KEY35                                                       
          WRITE     DEBFTHA5,KEY35;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:    
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          RETURN
.
DEDBFH5   RESET     KEY35                                                       
          DELETE    DEBFTHA5,KEY35                                              
          RETURN
.
RLDBFH5   RESET     KEY35                                                       
          MOVE      ZERO,OVRCD
          READL     DEBFTHA5,KEY35;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:    
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLDBFH5                                                                         
          MOVE      ZERO,OVRCD
          READLKS   DEBFTHA5;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLDBFH5                                                                         
          MOVE      ZERO,OVRCD
          READLKP   DEBFTHA5;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUDBFH5   RESET     KEY35                                                       
          UNLOCK    DEBFTHA5                                                    
          RETURN
.
RSDBFH6   RESET     KEY21                                                       
          READ      DEBFTHA6,KEY21;;                                            
          RETURN
.
RADBFH6   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFTHA6,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBFH6   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFTHA6,KEY21;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:    
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBFH6                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBFTHA6;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBFH6                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBFTHA6;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBFH6                                                                         
          UPDATE    DEBFTHA6;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRDBFH6   RESET     KEY21                                                       
          WRITE     DEBFTHA6,KEY21;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:    
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          RETURN
.
DEDBFH6   RESET     KEY21                                                       
          DELETE    DEBFTHA6,KEY21                                              
          RETURN
.
RLDBFH6   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READL     DEBFTHA6,KEY21;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:    
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLDBFH6                                                                         
          MOVE      ZERO,OVRCD
          READLKS   DEBFTHA6;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLDBFH6                                                                         
          MOVE      ZERO,OVRCD
          READLKP   DEBFTHA6;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUDBFH6   RESET     KEY21                                                       
          UNLOCK    DEBFTHA6                                                    
          RETURN
.
RSDBFH7   RESET     KEY46                                                       
          READ      DEBFTHA7,KEY46;;                                            
          RETURN
.
RADBFH7   RESET     KEY46                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFTHA7,KEY46;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBFH7   RESET     KEY46                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFTHA7,KEY46;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:    
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBFH7                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBFTHA7;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBFH7                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBFTHA7;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBFH7                                                                         
          UPDATE    DEBFTHA7;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRDBFH7   RESET     KEY46                                                       
          WRITE     DEBFTHA7,KEY46;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:    
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          RETURN
.
DEDBFH7   RESET     KEY46                                                       
          DELETE    DEBFTHA7,KEY46                                              
          RETURN
.
RLDBFH7   RESET     KEY46                                                       
          MOVE      ZERO,OVRCD
          READL     DEBFTHA7,KEY46;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:    
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLDBFH7                                                                         
          MOVE      ZERO,OVRCD
          READLKS   DEBFTHA7;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLDBFH7                                                                         
          MOVE      ZERO,OVRCD
          READLKP   DEBFTHA7;DBFHDEB,DBFHDTY,DBFHDOC,DBFHDDAT,DBFHTER:          
                        DBFHTOT,DBFHTAX,DBFHDPRT,DBFHDSTA,DBFHCDAT,DBFHCTIM:    
                        DBFHCUSR,DBFHUR1,DBFHUR2,DBFHUD1,DBFHUD2,DBFHUY1:       
                        DBFHUY2,DBFHUC1,DBFHUC2,DBFHSTAN,DBFHSPA                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUDBFH7   RESET     KEY46                                                       
          UNLOCK    DEBFTHA7                                                    
          RETURN
.
