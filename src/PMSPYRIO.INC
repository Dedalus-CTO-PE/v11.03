.
. PMSPYRIO    
. --------
. Filename     : pmspyraf.dat
.
RSPMPYR1  RESET     KEY19                                                       
          READ      PMSPYRA1,KEY19;;                                            
          RETURN
.
RAPMPYR1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPYRA1,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMPYR1  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPYRA1,KEY19;PMPYURNO,PMPYCLTY,PMPYEFDT,PMPYDEFT,PMPYETDT:
                        PMPYTITL,PMPYSNAM,PMPYGNAM,PMPYSGNM,PMPYADD1,PMPYADD2:  
                        PMPYADD3,PMPYADD4,PMPYPOST,PMPYRELP,PMPYTELP,PMPYTELB:  
                        PMPYTELM,PMPYEMAI,PMPYCUID,PMPYCDAT,PMPYCTIM,PMPYUUID:  
                        PMPYUDAT,PMPYUTIM,PMPYSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMPYR1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSPYRA1;PMPYURNO,PMPYCLTY,PMPYEFDT,PMPYDEFT,PMPYETDT:      
                        PMPYTITL,PMPYSNAM,PMPYGNAM,PMPYSGNM,PMPYADD1,PMPYADD2:  
                        PMPYADD3,PMPYADD4,PMPYPOST,PMPYRELP,PMPYTELP,PMPYTELB:  
                        PMPYTELM,PMPYEMAI,PMPYCUID,PMPYCDAT,PMPYCTIM,PMPYUUID:  
                        PMPYUDAT,PMPYUTIM,PMPYSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMPYR1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSPYRA1;PMPYURNO,PMPYCLTY,PMPYEFDT,PMPYDEFT,PMPYETDT:      
                        PMPYTITL,PMPYSNAM,PMPYGNAM,PMPYSGNM,PMPYADD1,PMPYADD2:  
                        PMPYADD3,PMPYADD4,PMPYPOST,PMPYRELP,PMPYTELP,PMPYTELB:  
                        PMPYTELM,PMPYEMAI,PMPYCUID,PMPYCDAT,PMPYCTIM,PMPYUUID:  
                        PMPYUDAT,PMPYUTIM,PMPYSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMPYR1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSPYRA1;PMPYURNO,PMPYCLTY,PMPYEFDT,PMPYDEFT,PMPYETDT:      
                        PMPYTITL,PMPYSNAM,PMPYGNAM,PMPYSGNM,PMPYADD1,PMPYADD2:  
                        PMPYADD3,PMPYADD4,PMPYPOST,PMPYRELP,PMPYTELP,PMPYTELB:  
                        PMPYTELM,PMPYEMAI,PMPYCUID,PMPYCDAT,PMPYCTIM,PMPYUUID:  
                        PMPYUDAT,PMPYUTIM,PMPYSPAR                              
          RETURN
.
WRPMPYR1  RESET     KEY19                                                       
          WRITE     PMSPYRA1,KEY19;PMPYURNO,PMPYCLTY,PMPYEFDT,PMPYDEFT,PMPYETDT:
                        PMPYTITL,PMPYSNAM,PMPYGNAM,PMPYSGNM,PMPYADD1,PMPYADD2:  
                        PMPYADD3,PMPYADD4,PMPYPOST,PMPYRELP,PMPYTELP,PMPYTELB:  
                        PMPYTELM,PMPYEMAI,PMPYCUID,PMPYCDAT,PMPYCTIM,PMPYUUID:  
                        PMPYUDAT,PMPYUTIM,PMPYSPAR                              
          RETURN
.
DEPMPYR1  RESET     KEY19                                                       
          DELETE    PMSPYRA1,KEY19                                              
          RETURN
.
RSPMPYR2  RESET     KEY19                                                       
          READ      PMSPYRA2,KEY19;;                                            
          RETURN
.
RAPMPYR2  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPYRA2,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMPYR2  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      PMSPYRA2,KEY19;PMPYURNO,PMPYCLTY,PMPYEFDT,PMPYDEFT,PMPYETDT:
                        PMPYTITL,PMPYSNAM,PMPYGNAM,PMPYSGNM,PMPYADD1,PMPYADD2:  
                        PMPYADD3,PMPYADD4,PMPYPOST,PMPYRELP,PMPYTELP,PMPYTELB:  
                        PMPYTELM,PMPYEMAI,PMPYCUID,PMPYCDAT,PMPYCTIM,PMPYUUID:  
                        PMPYUDAT,PMPYUTIM,PMPYSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMPYR2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSPYRA2;PMPYURNO,PMPYCLTY,PMPYEFDT,PMPYDEFT,PMPYETDT:      
                        PMPYTITL,PMPYSNAM,PMPYGNAM,PMPYSGNM,PMPYADD1,PMPYADD2:  
                        PMPYADD3,PMPYADD4,PMPYPOST,PMPYRELP,PMPYTELP,PMPYTELB:  
                        PMPYTELM,PMPYEMAI,PMPYCUID,PMPYCDAT,PMPYCTIM,PMPYUUID:  
                        PMPYUDAT,PMPYUTIM,PMPYSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMPYR2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSPYRA2;PMPYURNO,PMPYCLTY,PMPYEFDT,PMPYDEFT,PMPYETDT:      
                        PMPYTITL,PMPYSNAM,PMPYGNAM,PMPYSGNM,PMPYADD1,PMPYADD2:  
                        PMPYADD3,PMPYADD4,PMPYPOST,PMPYRELP,PMPYTELP,PMPYTELB:  
                        PMPYTELM,PMPYEMAI,PMPYCUID,PMPYCDAT,PMPYCTIM,PMPYUUID:  
                        PMPYUDAT,PMPYUTIM,PMPYSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMPYR2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSPYRA2;PMPYURNO,PMPYCLTY,PMPYEFDT,PMPYDEFT,PMPYETDT:      
                        PMPYTITL,PMPYSNAM,PMPYGNAM,PMPYSGNM,PMPYADD1,PMPYADD2:  
                        PMPYADD3,PMPYADD4,PMPYPOST,PMPYRELP,PMPYTELP,PMPYTELB:  
                        PMPYTELM,PMPYEMAI,PMPYCUID,PMPYCDAT,PMPYCTIM,PMPYUUID:  
                        PMPYUDAT,PMPYUTIM,PMPYSPAR                              
          RETURN
.
WRPMPYR2  RESET     KEY19                                                       
          WRITE     PMSPYRA2,KEY19;PMPYURNO,PMPYCLTY,PMPYEFDT,PMPYDEFT,PMPYETDT:
                        PMPYTITL,PMPYSNAM,PMPYGNAM,PMPYSGNM,PMPYADD1,PMPYADD2:  
                        PMPYADD3,PMPYADD4,PMPYPOST,PMPYRELP,PMPYTELP,PMPYTELB:  
                        PMPYTELM,PMPYEMAI,PMPYCUID,PMPYCDAT,PMPYCTIM,PMPYUUID:  
                        PMPYUDAT,PMPYUTIM,PMPYSPAR                              
          RETURN
.
DEPMPYR2  RESET     KEY19                                                       
          DELETE    PMSPYRA2,KEY19                                              
          RETURN
.
