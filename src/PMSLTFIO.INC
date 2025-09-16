.
. PMSLTFIO    
. --------
. Filename     : pmsltfaf.dat
.
RSPMLTF1  RESET     KEY4                                                        
          READ      PMSLTFA1,KEY4;;                                             
          RETURN
.
RAPMLTF1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      PMSLTFA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMLTF1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      PMSLTFA1,KEY4;PMLTSEID,PMLTSEDC,PMLTVDFR,PMLTVDTO,PMLTDDFR: 
                        PMLTDDTO,PMLTSNFR,PMLTSNTO,PMLTLLFR,PMLTLLTO,PMLTLDFR:  
                        PMLTLDTO,PMLTFCFR,PMLTFCTO,PMLTFDFR,PMLTFDTO,PMLTCCFR:  
                        PMLTCCTO,PMLTATFR,PMLTATTO,PMLTOAMT,PMLTIIIN,PMLTPDFR:  
                        PMLTPDTO,PMLTDSTT,PMLTSYST,PMLTLCOD,PMLTLDAT,PMLTRCNT:  
                        PMLTMHOS,PMLTHFUN,PMLTINSR,PMLTPPLN,PMLTMISC,PMLTUDAT:  
                        PMLTUTIM,PMLTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMLTF1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSLTFA1;PMLTSEID,PMLTSEDC,PMLTVDFR,PMLTVDTO,PMLTDDFR:      
                        PMLTDDTO,PMLTSNFR,PMLTSNTO,PMLTLLFR,PMLTLLTO,PMLTLDFR:  
                        PMLTLDTO,PMLTFCFR,PMLTFCTO,PMLTFDFR,PMLTFDTO,PMLTCCFR:  
                        PMLTCCTO,PMLTATFR,PMLTATTO,PMLTOAMT,PMLTIIIN,PMLTPDFR:  
                        PMLTPDTO,PMLTDSTT,PMLTSYST,PMLTLCOD,PMLTLDAT,PMLTRCNT:  
                        PMLTMHOS,PMLTHFUN,PMLTINSR,PMLTPPLN,PMLTMISC,PMLTUDAT:  
                        PMLTUTIM,PMLTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMLTF1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSLTFA1;PMLTSEID,PMLTSEDC,PMLTVDFR,PMLTVDTO,PMLTDDFR:      
                        PMLTDDTO,PMLTSNFR,PMLTSNTO,PMLTLLFR,PMLTLLTO,PMLTLDFR:  
                        PMLTLDTO,PMLTFCFR,PMLTFCTO,PMLTFDFR,PMLTFDTO,PMLTCCFR:  
                        PMLTCCTO,PMLTATFR,PMLTATTO,PMLTOAMT,PMLTIIIN,PMLTPDFR:  
                        PMLTPDTO,PMLTDSTT,PMLTSYST,PMLTLCOD,PMLTLDAT,PMLTRCNT:  
                        PMLTMHOS,PMLTHFUN,PMLTINSR,PMLTPPLN,PMLTMISC,PMLTUDAT:  
                        PMLTUTIM,PMLTSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMLTF1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSLTFA1;PMLTSEID,PMLTSEDC,PMLTVDFR,PMLTVDTO,PMLTDDFR:      
                        PMLTDDTO,PMLTSNFR,PMLTSNTO,PMLTLLFR,PMLTLLTO,PMLTLDFR:  
                        PMLTLDTO,PMLTFCFR,PMLTFCTO,PMLTFDFR,PMLTFDTO,PMLTCCFR:  
                        PMLTCCTO,PMLTATFR,PMLTATTO,PMLTOAMT,PMLTIIIN,PMLTPDFR:  
                        PMLTPDTO,PMLTDSTT,PMLTSYST,PMLTLCOD,PMLTLDAT,PMLTRCNT:  
                        PMLTMHOS,PMLTHFUN,PMLTINSR,PMLTPPLN,PMLTMISC,PMLTUDAT:  
                        PMLTUTIM,PMLTSPAR                                       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMLTF1  RESET     KEY4                                                        
          WRITE     PMSLTFA1,KEY4;PMLTSEID,PMLTSEDC,PMLTVDFR,PMLTVDTO,PMLTDDFR: 
                        PMLTDDTO,PMLTSNFR,PMLTSNTO,PMLTLLFR,PMLTLLTO,PMLTLDFR:  
                        PMLTLDTO,PMLTFCFR,PMLTFCTO,PMLTFDFR,PMLTFDTO,PMLTCCFR:  
                        PMLTCCTO,PMLTATFR,PMLTATTO,PMLTOAMT,PMLTIIIN,PMLTPDFR:  
                        PMLTPDTO,PMLTDSTT,PMLTSYST,PMLTLCOD,PMLTLDAT,PMLTRCNT:  
                        PMLTMHOS,PMLTHFUN,PMLTINSR,PMLTPPLN,PMLTMISC,PMLTUDAT:  
                        PMLTUTIM,PMLTSPAR                                       
          RETURN
.
DEPMLTF1  RESET     KEY4                                                        
          DELETE    PMSLTFA1,KEY4                                               
          RETURN
.
RLPMLTF1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READL     PMSLTFA1,KEY4;PMLTSEID,PMLTSEDC,PMLTVDFR,PMLTVDTO,PMLTDDFR: 
                        PMLTDDTO,PMLTSNFR,PMLTSNTO,PMLTLLFR,PMLTLLTO,PMLTLDFR:  
                        PMLTLDTO,PMLTFCFR,PMLTFCTO,PMLTFDFR,PMLTFDTO,PMLTCCFR:  
                        PMLTCCTO,PMLTATFR,PMLTATTO,PMLTOAMT,PMLTIIIN,PMLTPDFR:  
                        PMLTPDTO,PMLTDSTT,PMLTSYST,PMLTLCOD,PMLTLDAT,PMLTRCNT:  
                        PMLTMHOS,PMLTHFUN,PMLTINSR,PMLTPPLN,PMLTMISC,PMLTUDAT:  
                        PMLTUTIM,PMLTSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMLTF1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSLTFA1;PMLTSEID,PMLTSEDC,PMLTVDFR,PMLTVDTO,PMLTDDFR:      
                        PMLTDDTO,PMLTSNFR,PMLTSNTO,PMLTLLFR,PMLTLLTO,PMLTLDFR:  
                        PMLTLDTO,PMLTFCFR,PMLTFCTO,PMLTFDFR,PMLTFDTO,PMLTCCFR:  
                        PMLTCCTO,PMLTATFR,PMLTATTO,PMLTOAMT,PMLTIIIN,PMLTPDFR:  
                        PMLTPDTO,PMLTDSTT,PMLTSYST,PMLTLCOD,PMLTLDAT,PMLTRCNT:  
                        PMLTMHOS,PMLTHFUN,PMLTINSR,PMLTPPLN,PMLTMISC,PMLTUDAT:  
                        PMLTUTIM,PMLTSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMLTF1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSLTFA1;PMLTSEID,PMLTSEDC,PMLTVDFR,PMLTVDTO,PMLTDDFR:      
                        PMLTDDTO,PMLTSNFR,PMLTSNTO,PMLTLLFR,PMLTLLTO,PMLTLDFR:  
                        PMLTLDTO,PMLTFCFR,PMLTFCTO,PMLTFDFR,PMLTFDTO,PMLTCCFR:  
                        PMLTCCTO,PMLTATFR,PMLTATTO,PMLTOAMT,PMLTIIIN,PMLTPDFR:  
                        PMLTPDTO,PMLTDSTT,PMLTSYST,PMLTLCOD,PMLTLDAT,PMLTRCNT:  
                        PMLTMHOS,PMLTHFUN,PMLTINSR,PMLTPPLN,PMLTMISC,PMLTUDAT:  
                        PMLTUTIM,PMLTSPAR                                       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMLTF1  RESET     KEY4                                                        
          UNLOCK    PMSLTFA1                                                    
          RETURN
.
