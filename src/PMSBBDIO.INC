.
. PMSBBDIO    
. --------
. Filename     : pmsbbdaf.dat
.
RSPMBBD1  RESET     KEY20                                                       
          READ      PMSBBDA1,KEY20;;                                            
          RETURN
.
RAPMBBD1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBBDA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMBBD1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBBDA1,KEY20;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMBBD1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSBBDA1;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:      
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMBBD1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSBBDA1;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:      
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMBBD1                                                                        
          UPDATE    PMSBBDA1;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:      
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          RETURN
.
WRPMBBD1  RESET     KEY20                                                       
          WRITE     PMSBBDA1,KEY20;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          RETURN
.
DEPMBBD1  RESET     KEY20                                                       
          DELETE    PMSBBDA1,KEY20                                              
          RETURN
.
RSPMBBD2  RESET     KEY28                                                       
          READ      PMSBBDA2,KEY28;;                                            
          RETURN
.
RAPMBBD2  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBBDA2,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMBBD2  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBBDA2,KEY28;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMBBD2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSBBDA2;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:      
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMBBD2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSBBDA2;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:      
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMBBD2                                                                        
          UPDATE    PMSBBDA2;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:      
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          RETURN
.
WRPMBBD2  RESET     KEY28                                                       
          WRITE     PMSBBDA2,KEY28;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          RETURN
.
DEPMBBD2  RESET     KEY28                                                       
          DELETE    PMSBBDA2,KEY28                                              
          RETURN
.
RSPMBBD3  RESET     KEY22                                                       
          READ      PMSBBDA3,KEY22;;                                            
          RETURN
.
RAPMBBD3  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBBDA3,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMBBD3  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBBDA3,KEY22;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMBBD3                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSBBDA3;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:      
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMBBD3                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSBBDA3;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:      
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMBBD3                                                                        
          UPDATE    PMSBBDA3;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:      
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          RETURN
.
WRPMBBD3  RESET     KEY22                                                       
          WRITE     PMSBBDA3,KEY22;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          RETURN
.
DEPMBBD3  RESET     KEY22                                                       
          DELETE    PMSBBDA3,KEY22                                              
          RETURN
.
RSPMBBD4  RESET     KEY22                                                       
          READ      PMSBBDA4,KEY22;;                                            
          RETURN
.
RAPMBBD4  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBBDA4,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMBBD4  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBBDA4,KEY22;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMBBD4                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSBBDA4;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:      
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMBBD4                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSBBDA4;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:      
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMBBD4                                                                        
          UPDATE    PMSBBDA4;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:      
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          RETURN
.
WRPMBBD4  RESET     KEY22                                                       
          WRITE     PMSBBDA4,KEY22;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          RETURN
.
DEPMBBD4  RESET     KEY22                                                       
          DELETE    PMSBBDA4,KEY22                                              
          RETURN
.
RSPMBBD5  RESET     KEY22                                                       
          READ      PMSBBDA5,KEY22;;                                            
          RETURN
.
RAPMBBD5  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBBDA5,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMBBD5  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBBDA5,KEY22;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMBBD5                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSBBDA5;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:      
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMBBD5                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSBBDA5;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:      
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMBBD5                                                                        
          UPDATE    PMSBBDA5;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:      
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          RETURN
.
WRPMBBD5  RESET     KEY22                                                       
          WRITE     PMSBBDA5,KEY22;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          RETURN
.
DEPMBBD5  RESET     KEY22                                                       
          DELETE    PMSBBDA5,KEY22                                              
          RETURN
.
RSPMBBD6  RESET     KEY22                                                       
          READ      PMSBBDA6,KEY22;;                                            
          RETURN
.
RAPMBBD6  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBBDA6,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMBBD6  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBBDA6,KEY22;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMBBD6                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSBBDA6;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:      
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMBBD6                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSBBDA6;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:      
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMBBD6                                                                        
          UPDATE    PMSBBDA6;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:      
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          RETURN
.
WRPMBBD6  RESET     KEY22                                                       
          WRITE     PMSBBDA6,KEY22;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          RETURN
.
DEPMBBD6  RESET     KEY22                                                       
          DELETE    PMSBBDA6,KEY22                                              
          RETURN
.
RSPMBBD7  RESET     KEY22                                                       
          READ      PMSBBDA7,KEY22;;                                            
          RETURN
.
RAPMBBD7  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBBDA7,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMBBD7  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBBDA7,KEY22;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMBBD7                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSBBDA7;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:      
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMBBD7                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSBBDA7;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:      
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMBBD7                                                                        
          UPDATE    PMSBBDA7;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:      
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          RETURN
.
WRPMBBD7  RESET     KEY22                                                       
          WRITE     PMSBBDA7,KEY22;PMBDHOSP,PMBDWARD,PMBDROOM,PMBDBEDD,PMBDSEQ1:
                        PMBDSEQ2,PMBDSEQ3,PMBDSEQ4,PMBDSEQ5,PMBDCADM,PMBDTBDT:  
                        PMBDTBTM,PMBDPOWD,PMBDPOBD,PMBDSURN,PMBDGIVN,PMBDGEND:  
                        PMBDHFST,PMBDCEAS,PMBDURNO,PMBDEWRD,PMBDEBED,PMBDWEBC:  
                        PMBDDATC,PMBDTIMC,PMBDWEBU,PMBDDATU,PMBDTIMU,PMBDSPAR   
          RETURN
.
DEPMBBD7  RESET     KEY22                                                       
          DELETE    PMSBBDA7,KEY22                                              
          RETURN
.
