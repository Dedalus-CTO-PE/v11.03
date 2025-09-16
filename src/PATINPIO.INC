.
. PATINPIO    
. --------
. Filename     : patinpaf.dat
.
RSPTINP1  RESET     KEY16                                                       
          READ      PATINPA1,KEY16;;                                            
          RETURN
.
RAPTINP1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PATINPA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTINP1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PATINPA1,KEY16;DPTIPADM,PTIPURNO,PTIPRTYP,PTIPCLAM,PTIPHFND:
                        PTIPFTBL,PTIPATYP,PTIPWARD,PTIPWBED,PTIPBTYP,PTIPBDAY:  
                        PTIPEDAY,PTIPLDAY,PTIPCURI,PTIPADAT,PTIPDDAT,PTIPACCF:  
                        PTIPACCT,PTIPADOC,PTIPFNAM,PTIPDTYP,PTIPDDOC,PTIPRDOC:  
                        PTIPROOM,PTIPITEM,PTIPMHDP,PTIPBAND,DPTIPTRN,PTIPTTYP:  
                        PTIPAREV,PTIPTREV,PTIPPREV,PTIPHREV,PTIPIREV,PTIPLREV:  
                        PTIPMREV,PTIPGREV,PTIPPMBS,PTIPGPOR,PTIPORAT,PTIPDRAT:  
                        PTIPADDT,PTIPFREB,PTIPPPOR,PTIPRPOR,PTIPCTYP,PTIPPDRG:  
                        PTIPNDRG,PTIPSDRG,PTIPNMDC,PTIPSMDC,PTIPGRP1,PTIPGRP2:  
                        PTIPGRP3,PTIPCDAT,PTIPCTIM,PTIPOPER,PTIPGSTU,PTIPSPAR            
          GOTO      OVERCOND IF OVER
          MOVE      DPTIPADM,PTIPADMN                                           
          MOVE      DPTIPTRN,PTIPTRNN                                           
          RETURN
.
RKPTINP1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATINPA1;DPTIPADM,PTIPURNO,PTIPRTYP,PTIPCLAM,PTIPHFND:      
                        PTIPFTBL,PTIPATYP,PTIPWARD,PTIPWBED,PTIPBTYP,PTIPBDAY:  
                        PTIPEDAY,PTIPLDAY,PTIPCURI,PTIPADAT,PTIPDDAT,PTIPACCF:  
                        PTIPACCT,PTIPADOC,PTIPFNAM,PTIPDTYP,PTIPDDOC,PTIPRDOC:  
                        PTIPROOM,PTIPITEM,PTIPMHDP,PTIPBAND,DPTIPTRN,PTIPTTYP:  
                        PTIPAREV,PTIPTREV,PTIPPREV,PTIPHREV,PTIPIREV,PTIPLREV:  
                        PTIPMREV,PTIPGREV,PTIPPMBS,PTIPGPOR,PTIPORAT,PTIPDRAT:  
                        PTIPADDT,PTIPFREB,PTIPPPOR,PTIPRPOR,PTIPCTYP,PTIPPDRG:  
                        PTIPNDRG,PTIPSDRG,PTIPNMDC,PTIPSMDC,PTIPGRP1,PTIPGRP2:  
                        PTIPGRP3,PTIPCDAT,PTIPCTIM,PTIPOPER,PTIPGSTU,PTIPSPAR            
          GOTO      OVERCOND IF OVER
          MOVE      DPTIPADM,PTIPADMN                                           
          MOVE      DPTIPTRN,PTIPTRNN                                           
          RETURN
.
RPPTINP1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATINPA1;DPTIPADM,PTIPURNO,PTIPRTYP,PTIPCLAM,PTIPHFND:      
                        PTIPFTBL,PTIPATYP,PTIPWARD,PTIPWBED,PTIPBTYP,PTIPBDAY:  
                        PTIPEDAY,PTIPLDAY,PTIPCURI,PTIPADAT,PTIPDDAT,PTIPACCF:  
                        PTIPACCT,PTIPADOC,PTIPFNAM,PTIPDTYP,PTIPDDOC,PTIPRDOC:  
                        PTIPROOM,PTIPITEM,PTIPMHDP,PTIPBAND,DPTIPTRN,PTIPTTYP:  
                        PTIPAREV,PTIPTREV,PTIPPREV,PTIPHREV,PTIPIREV,PTIPLREV:  
                        PTIPMREV,PTIPGREV,PTIPPMBS,PTIPGPOR,PTIPORAT,PTIPDRAT:  
                        PTIPADDT,PTIPFREB,PTIPPPOR,PTIPRPOR,PTIPCTYP,PTIPPDRG:  
                        PTIPNDRG,PTIPSDRG,PTIPNMDC,PTIPSMDC,PTIPGRP1,PTIPGRP2:  
                        PTIPGRP3,PTIPCDAT,PTIPCTIM,PTIPOPER,PTIPGSTU,PTIPSPAR            
          GOTO      OVERCOND IF OVER
          MOVE      DPTIPADM,PTIPADMN                                           
          MOVE      DPTIPTRN,PTIPTRNN                                           
          RETURN
.
UPPTINP1                                                                        
          MOVE      PTIPADMN,DPTIPADM                                           
          MOVE      PTIPTRNN,DPTIPTRN                                           
          UPDATE    PATINPA1;DPTIPADM,PTIPURNO,PTIPRTYP,PTIPCLAM,PTIPHFND:      
                        PTIPFTBL,PTIPATYP,PTIPWARD,PTIPWBED,PTIPBTYP,PTIPBDAY:  
                        PTIPEDAY,PTIPLDAY,PTIPCURI,PTIPADAT,PTIPDDAT,PTIPACCF:  
                        PTIPACCT,PTIPADOC,PTIPFNAM,PTIPDTYP,PTIPDDOC,PTIPRDOC:  
                        PTIPROOM,PTIPITEM,PTIPMHDP,PTIPBAND,DPTIPTRN,PTIPTTYP:  
                        PTIPAREV,PTIPTREV,PTIPPREV,PTIPHREV,PTIPIREV,PTIPLREV:  
                        PTIPMREV,PTIPGREV,PTIPPMBS,PTIPGPOR,PTIPORAT,PTIPDRAT:  
                        PTIPADDT,PTIPFREB,PTIPPPOR,PTIPRPOR,PTIPCTYP,PTIPPDRG:  
                        PTIPNDRG,PTIPSDRG,PTIPNMDC,PTIPSMDC,PTIPGRP1,PTIPGRP2:  
                        PTIPGRP3,PTIPCDAT,PTIPCTIM,PTIPOPER,PTIPGSTU,PTIPSPAR            
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPTINP1  RESET     KEY16                                                       
          MOVE      PTIPADMN,DPTIPADM                                           
          MOVE      PTIPTRNN,DPTIPTRN                                           
          WRITE     PATINPA1,KEY16;DPTIPADM,PTIPURNO,PTIPRTYP,PTIPCLAM,PTIPHFND:
                        PTIPFTBL,PTIPATYP,PTIPWARD,PTIPWBED,PTIPBTYP,PTIPBDAY:  
                        PTIPEDAY,PTIPLDAY,PTIPCURI,PTIPADAT,PTIPDDAT,PTIPACCF:  
                        PTIPACCT,PTIPADOC,PTIPFNAM,PTIPDTYP,PTIPDDOC,PTIPRDOC:  
                        PTIPROOM,PTIPITEM,PTIPMHDP,PTIPBAND,DPTIPTRN,PTIPTTYP:  
                        PTIPAREV,PTIPTREV,PTIPPREV,PTIPHREV,PTIPIREV,PTIPLREV:  
                        PTIPMREV,PTIPGREV,PTIPPMBS,PTIPGPOR,PTIPORAT,PTIPDRAT:  
                        PTIPADDT,PTIPFREB,PTIPPPOR,PTIPRPOR,PTIPCTYP,PTIPPDRG:  
                        PTIPNDRG,PTIPSDRG,PTIPNMDC,PTIPSMDC,PTIPGRP1,PTIPGRP2:  
                        PTIPGRP3,PTIPCDAT,PTIPCTIM,PTIPOPER,PTIPGSTU,PTIPSPAR            
          RETURN
.
DEPTINP1  RESET     KEY16                                                       
          DELETE    PATINPA1,KEY16                                              
          RETURN
.
RLPTINP1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     PATINPA1,KEY16;DPTIPADM,PTIPURNO,PTIPRTYP,PTIPCLAM,PTIPHFND:
                        PTIPFTBL,PTIPATYP,PTIPWARD,PTIPWBED,PTIPBTYP,PTIPBDAY:  
                        PTIPEDAY,PTIPLDAY,PTIPCURI,PTIPADAT,PTIPDDAT,PTIPACCF:  
                        PTIPACCT,PTIPADOC,PTIPFNAM,PTIPDTYP,PTIPDDOC,PTIPRDOC:  
                        PTIPROOM,PTIPITEM,PTIPMHDP,PTIPBAND,DPTIPTRN,PTIPTTYP:  
                        PTIPAREV,PTIPTREV,PTIPPREV,PTIPHREV,PTIPIREV,PTIPLREV:  
                        PTIPMREV,PTIPGREV,PTIPPMBS,PTIPGPOR,PTIPORAT,PTIPDRAT:  
                        PTIPADDT,PTIPFREB,PTIPPPOR,PTIPRPOR,PTIPCTYP,PTIPPDRG:  
                        PTIPNDRG,PTIPSDRG,PTIPNMDC,PTIPSMDC,PTIPGRP1,PTIPGRP2:  
                        PTIPGRP3,PTIPCDAT,PTIPCTIM,PTIPOPER,PTIPGSTU,PTIPSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DPTIPADM,PTIPADMN                                           
          MOVE      DPTIPTRN,PTIPTRNN                                           
          RETURN
.
KLPTINP1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PATINPA1;DPTIPADM,PTIPURNO,PTIPRTYP,PTIPCLAM,PTIPHFND:      
                        PTIPFTBL,PTIPATYP,PTIPWARD,PTIPWBED,PTIPBTYP,PTIPBDAY:  
                        PTIPEDAY,PTIPLDAY,PTIPCURI,PTIPADAT,PTIPDDAT,PTIPACCF:  
                        PTIPACCT,PTIPADOC,PTIPFNAM,PTIPDTYP,PTIPDDOC,PTIPRDOC:  
                        PTIPROOM,PTIPITEM,PTIPMHDP,PTIPBAND,DPTIPTRN,PTIPTTYP:  
                        PTIPAREV,PTIPTREV,PTIPPREV,PTIPHREV,PTIPIREV,PTIPLREV:  
                        PTIPMREV,PTIPGREV,PTIPPMBS,PTIPGPOR,PTIPORAT,PTIPDRAT:  
                        PTIPADDT,PTIPFREB,PTIPPPOR,PTIPRPOR,PTIPCTYP,PTIPPDRG:  
                        PTIPNDRG,PTIPSDRG,PTIPNMDC,PTIPSMDC,PTIPGRP1,PTIPGRP2:  
                        PTIPGRP3,PTIPCDAT,PTIPCTIM,PTIPOPER,PTIPGSTU,PTIPSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DPTIPADM,PTIPADMN                                           
          MOVE      DPTIPTRN,PTIPTRNN                                           
          RETURN
.
PLPTINP1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PATINPA1;DPTIPADM,PTIPURNO,PTIPRTYP,PTIPCLAM,PTIPHFND:      
                        PTIPFTBL,PTIPATYP,PTIPWARD,PTIPWBED,PTIPBTYP,PTIPBDAY:  
                        PTIPEDAY,PTIPLDAY,PTIPCURI,PTIPADAT,PTIPDDAT,PTIPACCF:  
                        PTIPACCT,PTIPADOC,PTIPFNAM,PTIPDTYP,PTIPDDOC,PTIPRDOC:  
                        PTIPROOM,PTIPITEM,PTIPMHDP,PTIPBAND,DPTIPTRN,PTIPTTYP:  
                        PTIPAREV,PTIPTREV,PTIPPREV,PTIPHREV,PTIPIREV,PTIPLREV:  
                        PTIPMREV,PTIPGREV,PTIPPMBS,PTIPGPOR,PTIPORAT,PTIPDRAT:  
                        PTIPADDT,PTIPFREB,PTIPPPOR,PTIPRPOR,PTIPCTYP,PTIPPDRG:  
                        PTIPNDRG,PTIPSDRG,PTIPNMDC,PTIPSMDC,PTIPGRP1,PTIPGRP2:  
                        PTIPGRP3,PTIPCDAT,PTIPCTIM,PTIPOPER,PTIPGSTU,PTIPSPAR            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DPTIPADM,PTIPADMN                                           
          MOVE      DPTIPTRN,PTIPTRNN                                           
          RETURN
.
UUPTINP1  RESET     KEY16                                                       
          UNLOCK    PATINPA1                                                    
          RETURN
.
