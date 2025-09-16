.
. MRTAUCIO    
. --------
. Filename     : mrtaucaf.dat
.
RSMRAUC1  RESET     KEY10                                                       
          READ      MRTAUCA1,KEY10;;                                            
          RETURN
.
RAMRAUC1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      MRTAUCA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRAUC1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      MRTAUCA1,KEY10;MRACVISN,MRACEPSN,MRACADTE,MRACODRG,MRACOWIE:
                                   MRACNDRG,MRACNWIE,MRACDWIE,MRACCLNC,MRACTYPE:
                                   MRACRCHG,MRACNCHG,MRACCOMM,MRACCDTE,MRACCTIM:
                                   MRACCUSR,MRACCDSC,MRACUDTE,MRACUTIM,MRACUUSR:
                                   MRACUDSC,MRACODOL,MRACNDOL,MRACDIFD,MRACDDNR:
                                   MRACOHCP,MRACOCOF,MRACODAT,MRACSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRAUC1  MOVE      ZERO,OVRCD                                                  
          READKS    MRTAUCA1;MRACVISN,MRACEPSN,MRACADTE,MRACODRG,MRACOWIE:      
                             MRACNDRG,MRACNWIE,MRACDWIE,MRACCLNC,MRACTYPE:      
                             MRACRCHG,MRACNCHG,MRACCOMM,MRACCDTE,MRACCTIM:      
                             MRACCUSR,MRACCDSC,MRACUDTE,MRACUTIM,MRACUUSR:      
                             MRACUDSC,MRACODOL,MRACNDOL,MRACDIFD,MRACDDNR:      
                             MRACOHCP,MRACOCOF,MRACODAT,MRACSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRAUC1  MOVE      ZERO,OVRCD                                                  
          READKP    MRTAUCA1;MRACVISN,MRACEPSN,MRACADTE,MRACODRG,MRACOWIE:      
                             MRACNDRG,MRACNWIE,MRACDWIE,MRACCLNC,MRACTYPE:      
                             MRACRCHG,MRACNCHG,MRACCOMM,MRACCDTE,MRACCTIM:      
                             MRACCUSR,MRACCDSC,MRACUDTE,MRACUTIM,MRACUUSR:      
                             MRACUDSC,MRACODOL,MRACNDOL,MRACDIFD,MRACDDNR:      
                             MRACOHCP,MRACOCOF,MRACODAT,MRACSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRAUC1  MOVE      ZERO,OVRCD                                                  
          UPDATE    MRTAUCA1;MRACVISN,MRACEPSN,MRACADTE,MRACODRG,MRACOWIE:      
                             MRACNDRG,MRACNWIE,MRACDWIE,MRACCLNC,MRACTYPE:      
                             MRACRCHG,MRACNCHG,MRACCOMM,MRACCDTE,MRACCTIM:      
                             MRACCUSR,MRACCDSC,MRACUDTE,MRACUTIM,MRACUUSR:      
                             MRACUDSC,MRACODOL,MRACNDOL,MRACDIFD,MRACDDNR:      
                             MRACOHCP,MRACOCOF,MRACODAT,MRACSPAR                
          RETURN
.
WRMRAUC1  RESET     KEY10                                                       
          WRITE     MRTAUCA1,KEY10;MRACVISN,MRACEPSN,MRACADTE,MRACODRG,MRACOWIE:
                                   MRACNDRG,MRACNWIE,MRACDWIE,MRACCLNC,MRACTYPE:
                                   MRACRCHG,MRACNCHG,MRACCOMM,MRACCDTE,MRACCTIM:
                                   MRACCUSR,MRACCDSC,MRACUDTE,MRACUTIM,MRACUUSR:
                                   MRACUDSC,MRACODOL,MRACNDOL,MRACDIFD,MRACDDNR:
                                   MRACOHCP,MRACOCOF,MRACODAT,MRACSPAR          
          RETURN
.
DEMRAUC1  RESET     KEY10                                                       
          DELETE    MRTAUCA1,KEY10                                              
          RETURN
.
RSMRAUC2  RESET     KEY18                                                       
          READ      MRTAUCA2,KEY18;;                                            
          RETURN
.
RAMRAUC2  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      MRTAUCA2,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDMRAUC2  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      MRTAUCA2,KEY18;MRACVISN,MRACEPSN,MRACADTE,MRACODRG,MRACOWIE:
                                   MRACNDRG,MRACNWIE,MRACDWIE,MRACCLNC,MRACTYPE:
                                   MRACRCHG,MRACNCHG,MRACCOMM,MRACCDTE,MRACCTIM:
                                   MRACCUSR,MRACCDSC,MRACUDTE,MRACUTIM,MRACUUSR:
                                   MRACUDSC,MRACODOL,MRACNDOL,MRACDIFD,MRACDDNR:
                                   MRACOHCP,MRACOCOF,MRACODAT,MRACSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKMRAUC2  MOVE      ZERO,OVRCD                                                  
          READKS    MRTAUCA2;MRACVISN,MRACEPSN,MRACADTE,MRACODRG,MRACOWIE:      
                             MRACNDRG,MRACNWIE,MRACDWIE,MRACCLNC,MRACTYPE:      
                             MRACRCHG,MRACNCHG,MRACCOMM,MRACCDTE,MRACCTIM:      
                             MRACCUSR,MRACCDSC,MRACUDTE,MRACUTIM,MRACUUSR:      
                             MRACUDSC,MRACODOL,MRACNDOL,MRACDIFD,MRACDDNR:      
                             MRACOHCP,MRACOCOF,MRACODAT,MRACSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPMRAUC2  MOVE      ZERO,OVRCD                                                  
          READKP    MRTAUCA2;MRACVISN,MRACEPSN,MRACADTE,MRACODRG,MRACOWIE:      
                             MRACNDRG,MRACNWIE,MRACDWIE,MRACCLNC,MRACTYPE:      
                             MRACRCHG,MRACNCHG,MRACCOMM,MRACCDTE,MRACCTIM:      
                             MRACCUSR,MRACCDSC,MRACUDTE,MRACUTIM,MRACUUSR:      
                             MRACUDSC,MRACODOL,MRACNDOL,MRACDIFD,MRACDDNR:      
                             MRACOHCP,MRACOCOF,MRACODAT,MRACSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPMRAUC2  MOVE      ZERO,OVRCD                                                  
          UPDATE    MRTAUCA2;MRACVISN,MRACEPSN,MRACADTE,MRACODRG,MRACOWIE:      
                             MRACNDRG,MRACNWIE,MRACDWIE,MRACCLNC,MRACTYPE:      
                             MRACRCHG,MRACNCHG,MRACCOMM,MRACCDTE,MRACCTIM:      
                             MRACCUSR,MRACCDSC,MRACUDTE,MRACUTIM,MRACUUSR:      
                             MRACUDSC,MRACODOL,MRACNDOL,MRACDIFD,MRACDDNR:      
                             MRACOHCP,MRACOCOF,MRACODAT,MRACSPAR                
          RETURN
.
WRMRAUC2  RESET     KEY18                                                       
          WRITE     MRTAUCA2,KEY18;MRACVISN,MRACEPSN,MRACADTE,MRACODRG,MRACOWIE:
                                   MRACNDRG,MRACNWIE,MRACDWIE,MRACCLNC,MRACTYPE:
                                   MRACRCHG,MRACNCHG,MRACCOMM,MRACCDTE,MRACCTIM:
                                   MRACCUSR,MRACCDSC,MRACUDTE,MRACUTIM,MRACUUSR:
                                   MRACUDSC,MRACODOL,MRACNDOL,MRACDIFD,MRACDDNR:
                                   MRACOHCP,MRACOCOF,MRACODAT,MRACSPAR          
          RETURN
.
DEMRAUC2  RESET     KEY18                                                       
          DELETE    MRTAUCA2,KEY18                                              
          RETURN
.
