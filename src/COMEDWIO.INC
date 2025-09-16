.
. COMEDWIO    
. --------
. Filename     : comedwaf.dat
.
RSCMEDW1  RESET     KEY11                                                       
          READ      COMEDWA1,KEY11;;                                            
          RETURN
.
RACMEDW1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      COMEDWA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMEDW1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      COMEDWA1,KEY11;CMEDDSTR,CMEDCNTN,CMEDSDAT,CMEDEDAT,CMEDCDAT:
                                   CMEDCTIM,CMEDCUID,CMEDRDAT,CMEDRTIM,CMEDRUID:
                                   CMEDSNTD,CMEDSNTT,CMEDSUID,CMEDRSND,CMEDRSNT:
                                   CMEDRSUI,CMEDSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMEDW1  MOVE      ZERO,OVRCD                                                  
          READKS    COMEDWA1;CMEDDSTR,CMEDCNTN,CMEDSDAT,CMEDEDAT,CMEDCDAT:      
                             CMEDCTIM,CMEDCUID,CMEDRDAT,CMEDRTIM,CMEDRUID:      
                             CMEDSNTD,CMEDSNTT,CMEDSUID,CMEDRSND,CMEDRSNT:      
                             CMEDRSUI,CMEDSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMEDW1  MOVE      ZERO,OVRCD                                                  
          READKP    COMEDWA1;CMEDDSTR,CMEDCNTN,CMEDSDAT,CMEDEDAT,CMEDCDAT:      
                             CMEDCTIM,CMEDCUID,CMEDRDAT,CMEDRTIM,CMEDRUID:      
                             CMEDSNTD,CMEDSNTT,CMEDSUID,CMEDRSND,CMEDRSNT:      
                             CMEDRSUI,CMEDSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMEDW1  MOVE      ZERO,OVRCD                                                  
          UPDATE    COMEDWA1;CMEDDSTR,CMEDCNTN,CMEDSDAT,CMEDEDAT,CMEDCDAT:      
                             CMEDCTIM,CMEDCUID,CMEDRDAT,CMEDRTIM,CMEDRUID:      
                             CMEDSNTD,CMEDSNTT,CMEDSUID,CMEDRSND,CMEDRSNT:      
                             CMEDRSUI,CMEDSPAR                                  
          RETURN
.
WRCMEDW1  RESET     KEY11                                                       
          WRITE     COMEDWA1,KEY11;CMEDDSTR,CMEDCNTN,CMEDSDAT,CMEDEDAT,CMEDCDAT:
                                   CMEDCTIM,CMEDCUID,CMEDRDAT,CMEDRTIM,CMEDRUID:
                                   CMEDSNTD,CMEDSNTT,CMEDSUID,CMEDRSND,CMEDRSNT:
                                   CMEDRSUI,CMEDSPAR                            
          RETURN
.
DECMEDW1  RESET     KEY11                                                       
          DELETE    COMEDWA1,KEY11                                              
          RETURN
.
RSCMEDW2  RESET     KEY19                                                       
          READ      COMEDWA2,KEY19;;                                            
          RETURN
.
RACMEDW2  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      COMEDWA2,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMEDW2  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      COMEDWA2,KEY19;CMEDDSTR,CMEDCNTN,CMEDSDAT,CMEDEDAT,CMEDCDAT:
                                   CMEDCTIM,CMEDCUID,CMEDRDAT,CMEDRTIM,CMEDRUID:
                                   CMEDSNTD,CMEDSNTT,CMEDSUID,CMEDRSND,CMEDRSNT:
                                   CMEDRSUI,CMEDSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMEDW2  MOVE      ZERO,OVRCD                                                  
          READKS    COMEDWA2;CMEDDSTR,CMEDCNTN,CMEDSDAT,CMEDEDAT,CMEDCDAT:      
                             CMEDCTIM,CMEDCUID,CMEDRDAT,CMEDRTIM,CMEDRUID:      
                             CMEDSNTD,CMEDSNTT,CMEDSUID,CMEDRSND,CMEDRSNT:      
                             CMEDRSUI,CMEDSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMEDW2  MOVE      ZERO,OVRCD                                                  
          READKP    COMEDWA2;CMEDDSTR,CMEDCNTN,CMEDSDAT,CMEDEDAT,CMEDCDAT:      
                             CMEDCTIM,CMEDCUID,CMEDRDAT,CMEDRTIM,CMEDRUID:      
                             CMEDSNTD,CMEDSNTT,CMEDSUID,CMEDRSND,CMEDRSNT:      
                             CMEDRSUI,CMEDSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMEDW2  MOVE      ZERO,OVRCD                                                  
          UPDATE    COMEDWA2;CMEDDSTR,CMEDCNTN,CMEDSDAT,CMEDEDAT,CMEDCDAT:      
                             CMEDCTIM,CMEDCUID,CMEDRDAT,CMEDRTIM,CMEDRUID:      
                             CMEDSNTD,CMEDSNTT,CMEDSUID,CMEDRSND,CMEDRSNT:      
                             CMEDRSUI,CMEDSPAR                                  
          RETURN
.
WRCMEDW2  RESET     KEY19                                                       
          WRITE     COMEDWA2,KEY19;CMEDDSTR,CMEDCNTN,CMEDSDAT,CMEDEDAT,CMEDCDAT:
                                   CMEDCTIM,CMEDCUID,CMEDRDAT,CMEDRTIM,CMEDRUID:
                                   CMEDSNTD,CMEDSNTT,CMEDSUID,CMEDRSND,CMEDRSNT:
                                   CMEDRSUI,CMEDSPAR                            
          RETURN
.
DECMEDW2  RESET     KEY19                                                       
          DELETE    COMEDWA2,KEY19                                              
          RETURN
.
RSCMEDW3  RESET     KEY19                                                       
          READ      COMEDWA3,KEY19;;                                            
          RETURN
.
RACMEDW3  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      COMEDWA3,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCMEDW3  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      COMEDWA3,KEY19;CMEDDSTR,CMEDCNTN,CMEDSDAT,CMEDEDAT,CMEDCDAT:
                                   CMEDCTIM,CMEDCUID,CMEDRDAT,CMEDRTIM,CMEDRUID:
                                   CMEDSNTD,CMEDSNTT,CMEDSUID,CMEDRSND,CMEDRSNT:
                                   CMEDRSUI,CMEDSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCMEDW3  MOVE      ZERO,OVRCD                                                  
          READKS    COMEDWA3;CMEDDSTR,CMEDCNTN,CMEDSDAT,CMEDEDAT,CMEDCDAT:      
                             CMEDCTIM,CMEDCUID,CMEDRDAT,CMEDRTIM,CMEDRUID:      
                             CMEDSNTD,CMEDSNTT,CMEDSUID,CMEDRSND,CMEDRSNT:      
                             CMEDRSUI,CMEDSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCMEDW3  MOVE      ZERO,OVRCD                                                  
          READKP    COMEDWA3;CMEDDSTR,CMEDCNTN,CMEDSDAT,CMEDEDAT,CMEDCDAT:      
                             CMEDCTIM,CMEDCUID,CMEDRDAT,CMEDRTIM,CMEDRUID:      
                             CMEDSNTD,CMEDSNTT,CMEDSUID,CMEDRSND,CMEDRSNT:      
                             CMEDRSUI,CMEDSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCMEDW3  MOVE      ZERO,OVRCD                                                  
          UPDATE    COMEDWA3;CMEDDSTR,CMEDCNTN,CMEDSDAT,CMEDEDAT,CMEDCDAT:      
                             CMEDCTIM,CMEDCUID,CMEDRDAT,CMEDRTIM,CMEDRUID:      
                             CMEDSNTD,CMEDSNTT,CMEDSUID,CMEDRSND,CMEDRSNT:      
                             CMEDRSUI,CMEDSPAR                                  
          RETURN
.
WRCMEDW3  RESET     KEY19                                                       
          WRITE     COMEDWA3,KEY19;CMEDDSTR,CMEDCNTN,CMEDSDAT,CMEDEDAT,CMEDCDAT:
                                   CMEDCTIM,CMEDCUID,CMEDRDAT,CMEDRTIM,CMEDRUID:
                                   CMEDSNTD,CMEDSNTT,CMEDSUID,CMEDRSND,CMEDRSNT:
                                   CMEDRSUI,CMEDSPAR                            
          RETURN
.
DECMEDW3  RESET     KEY19                                                       
          DELETE    COMEDWA3,KEY19                                              
          RETURN
.
