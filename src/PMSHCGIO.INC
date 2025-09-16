.
. PMSHCGIO    
. --------
. Filename     : pmshcgaf.dat
.
RSPMHCG1  RESET     KEY12                                                       
          READ      PMSHCGA1,KEY12;;                                            
          RETURN
.
RAPMHCG1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHCGA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMHCG1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHCGA1,KEY12;PMHGPRAC,PMHGCNTR,PMHGTYPE,PMHGSPCD,PMHGPNAM:
                                   PMHGADD1,PMHGADD2,PMHGADD3,PMHGADD4,PMHGADD5:
                                   PMHGADD6,PMHGPOST,PMHGSTAT,PMHGPEML,PMHGPTEL:
                                   PMHGPFAX,PMHGPSTT,PMHGPPCN,PMHGPPNO,PMHGFMDT:
                                   PMHGDSDT,PMHGGPFH,PMHGDTFA,PMHGDTFE,PMHGGPPI:
                                   PMHGUPFL,PMHGSTTS,PMHGPCGC,PMHGPRMK,PMHGCDTE:
                                   PMHGCTIM,PMHGWEBC,PMHGLUPD,PMHGLUPT,PMHGWEBU:
                                   PMHGHPIO,PMHGFXDS,PMHGELDS,PMHGPSCI,PMHGSMD1:
                                   PMHGSMD2,PMHGSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMHCG1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSHCGA1;PMHGPRAC,PMHGCNTR,PMHGTYPE,PMHGSPCD,PMHGPNAM:      
                             PMHGADD1,PMHGADD2,PMHGADD3,PMHGADD4,PMHGADD5:      
                             PMHGADD6,PMHGPOST,PMHGSTAT,PMHGPEML,PMHGPTEL:      
                             PMHGPFAX,PMHGPSTT,PMHGPPCN,PMHGPPNO,PMHGFMDT:      
                             PMHGDSDT,PMHGGPFH,PMHGDTFA,PMHGDTFE,PMHGGPPI:      
                             PMHGUPFL,PMHGSTTS,PMHGPCGC,PMHGPRMK,PMHGCDTE:      
                             PMHGCTIM,PMHGWEBC,PMHGLUPD,PMHGLUPT,PMHGWEBU:      
                             PMHGHPIO,PMHGFXDS,PMHGELDS,PMHGPSCI,PMHGSMD1:      
                             PMHGSMD2,PMHGSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMHCG1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSHCGA1;PMHGPRAC,PMHGCNTR,PMHGTYPE,PMHGSPCD,PMHGPNAM:      
                             PMHGADD1,PMHGADD2,PMHGADD3,PMHGADD4,PMHGADD5:      
                             PMHGADD6,PMHGPOST,PMHGSTAT,PMHGPEML,PMHGPTEL:      
                             PMHGPFAX,PMHGPSTT,PMHGPPCN,PMHGPPNO,PMHGFMDT:      
                             PMHGDSDT,PMHGGPFH,PMHGDTFA,PMHGDTFE,PMHGGPPI:      
                             PMHGUPFL,PMHGSTTS,PMHGPCGC,PMHGPRMK,PMHGCDTE:      
                             PMHGCTIM,PMHGWEBC,PMHGLUPD,PMHGLUPT,PMHGWEBU:      
                             PMHGHPIO,PMHGFXDS,PMHGELDS,PMHGPSCI,PMHGSMD1:      
                             PMHGSMD2,PMHGSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMHCG1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSHCGA1;PMHGPRAC,PMHGCNTR,PMHGTYPE,PMHGSPCD,PMHGPNAM:      
                             PMHGADD1,PMHGADD2,PMHGADD3,PMHGADD4,PMHGADD5:      
                             PMHGADD6,PMHGPOST,PMHGSTAT,PMHGPEML,PMHGPTEL:      
                             PMHGPFAX,PMHGPSTT,PMHGPPCN,PMHGPPNO,PMHGFMDT:      
                             PMHGDSDT,PMHGGPFH,PMHGDTFA,PMHGDTFE,PMHGGPPI:      
                             PMHGUPFL,PMHGSTTS,PMHGPCGC,PMHGPRMK,PMHGCDTE:      
                             PMHGCTIM,PMHGWEBC,PMHGLUPD,PMHGLUPT,PMHGWEBU:      
                             PMHGHPIO,PMHGFXDS,PMHGELDS,PMHGPSCI,PMHGSMD1:      
                             PMHGSMD2,PMHGSPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMHCG1  RESET     KEY12                                                       
          WRITE     PMSHCGA1,KEY12;PMHGPRAC,PMHGCNTR,PMHGTYPE,PMHGSPCD,PMHGPNAM:
                                   PMHGADD1,PMHGADD2,PMHGADD3,PMHGADD4,PMHGADD5:
                                   PMHGADD6,PMHGPOST,PMHGSTAT,PMHGPEML,PMHGPTEL:
                                   PMHGPFAX,PMHGPSTT,PMHGPPCN,PMHGPPNO,PMHGFMDT:
                                   PMHGDSDT,PMHGGPFH,PMHGDTFA,PMHGDTFE,PMHGGPPI:
                                   PMHGUPFL,PMHGSTTS,PMHGPCGC,PMHGPRMK,PMHGCDTE:
                                   PMHGCTIM,PMHGWEBC,PMHGLUPD,PMHGLUPT,PMHGWEBU:
                                   PMHGHPIO,PMHGFXDS,PMHGELDS,PMHGPSCI,PMHGSMD1:
                                   PMHGSMD2,PMHGSPAR                            
          RETURN
.
DEPMHCG1  RESET     KEY12                                                       
          DELETE    PMSHCGA1,KEY12                                              
          RETURN
.
RLPMHCG1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READL     PMSHCGA1,KEY12;PMHGPRAC,PMHGCNTR,PMHGTYPE,PMHGSPCD,PMHGPNAM:
                                   PMHGADD1,PMHGADD2,PMHGADD3,PMHGADD4,PMHGADD5:
                                   PMHGADD6,PMHGPOST,PMHGSTAT,PMHGPEML,PMHGPTEL:
                                   PMHGPFAX,PMHGPSTT,PMHGPPCN,PMHGPPNO,PMHGFMDT:
                                   PMHGDSDT,PMHGGPFH,PMHGDTFA,PMHGDTFE,PMHGGPPI:
                                   PMHGUPFL,PMHGSTTS,PMHGPCGC,PMHGPRMK,PMHGCDTE:
                                   PMHGCTIM,PMHGWEBC,PMHGLUPD,PMHGLUPT,PMHGWEBU:
                                   PMHGHPIO,PMHGFXDS,PMHGELDS,PMHGPSCI,PMHGSMD1:
                                   PMHGSMD2,PMHGSPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMHCG1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSHCGA1;PMHGPRAC,PMHGCNTR,PMHGTYPE,PMHGSPCD,PMHGPNAM:      
                             PMHGADD1,PMHGADD2,PMHGADD3,PMHGADD4,PMHGADD5:      
                             PMHGADD6,PMHGPOST,PMHGSTAT,PMHGPEML,PMHGPTEL:      
                             PMHGPFAX,PMHGPSTT,PMHGPPCN,PMHGPPNO,PMHGFMDT:      
                             PMHGDSDT,PMHGGPFH,PMHGDTFA,PMHGDTFE,PMHGGPPI:      
                             PMHGUPFL,PMHGSTTS,PMHGPCGC,PMHGPRMK,PMHGCDTE:      
                             PMHGCTIM,PMHGWEBC,PMHGLUPD,PMHGLUPT,PMHGWEBU:      
                             PMHGHPIO,PMHGFXDS,PMHGELDS,PMHGPSCI,PMHGSMD1:      
                             PMHGSMD2,PMHGSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMHCG1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSHCGA1;PMHGPRAC,PMHGCNTR,PMHGTYPE,PMHGSPCD,PMHGPNAM:      
                             PMHGADD1,PMHGADD2,PMHGADD3,PMHGADD4,PMHGADD5:      
                             PMHGADD6,PMHGPOST,PMHGSTAT,PMHGPEML,PMHGPTEL:      
                             PMHGPFAX,PMHGPSTT,PMHGPPCN,PMHGPPNO,PMHGFMDT:      
                             PMHGDSDT,PMHGGPFH,PMHGDTFA,PMHGDTFE,PMHGGPPI:      
                             PMHGUPFL,PMHGSTTS,PMHGPCGC,PMHGPRMK,PMHGCDTE:      
                             PMHGCTIM,PMHGWEBC,PMHGLUPD,PMHGLUPT,PMHGWEBU:      
                             PMHGHPIO,PMHGFXDS,PMHGELDS,PMHGPSCI,PMHGSMD1:      
                             PMHGSMD2,PMHGSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMHCG1  RESET     KEY12                                                       
          UNLOCK    PMSHCGA1                                                    
          RETURN
.
RSPMHCG2  RESET     KEY72                                                       
          READ      PMSHCGA2,KEY72;;                                            
          RETURN
.
RAPMHCG2  RESET     KEY72                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHCGA2,KEY72;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMHCG2  RESET     KEY72                                                       
          MOVE      ZERO,OVRCD
          READ      PMSHCGA2,KEY72;PMHGPRAC,PMHGCNTR,PMHGTYPE,PMHGSPCD,PMHGPNAM:
                                   PMHGADD1,PMHGADD2,PMHGADD3,PMHGADD4,PMHGADD5:
                                   PMHGADD6,PMHGPOST,PMHGSTAT,PMHGPEML,PMHGPTEL:
                                   PMHGPFAX,PMHGPSTT,PMHGPPCN,PMHGPPNO,PMHGFMDT:
                                   PMHGDSDT,PMHGGPFH,PMHGDTFA,PMHGDTFE,PMHGGPPI:
                                   PMHGUPFL,PMHGSTTS,PMHGPCGC,PMHGPRMK,PMHGCDTE:
                                   PMHGCTIM,PMHGWEBC,PMHGLUPD,PMHGLUPT,PMHGWEBU:
                                   PMHGHPIO,PMHGFXDS,PMHGELDS,PMHGPSCI,PMHGSMD1:
                                   PMHGSMD2,PMHGSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMHCG2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSHCGA2;PMHGPRAC,PMHGCNTR,PMHGTYPE,PMHGSPCD,PMHGPNAM:      
                             PMHGADD1,PMHGADD2,PMHGADD3,PMHGADD4,PMHGADD5:      
                             PMHGADD6,PMHGPOST,PMHGSTAT,PMHGPEML,PMHGPTEL:      
                             PMHGPFAX,PMHGPSTT,PMHGPPCN,PMHGPPNO,PMHGFMDT:      
                             PMHGDSDT,PMHGGPFH,PMHGDTFA,PMHGDTFE,PMHGGPPI:      
                             PMHGUPFL,PMHGSTTS,PMHGPCGC,PMHGPRMK,PMHGCDTE:      
                             PMHGCTIM,PMHGWEBC,PMHGLUPD,PMHGLUPT,PMHGWEBU:      
                             PMHGHPIO,PMHGFXDS,PMHGELDS,PMHGPSCI,PMHGSMD1:      
                             PMHGSMD2,PMHGSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMHCG2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSHCGA2;PMHGPRAC,PMHGCNTR,PMHGTYPE,PMHGSPCD,PMHGPNAM:      
                             PMHGADD1,PMHGADD2,PMHGADD3,PMHGADD4,PMHGADD5:      
                             PMHGADD6,PMHGPOST,PMHGSTAT,PMHGPEML,PMHGPTEL:      
                             PMHGPFAX,PMHGPSTT,PMHGPPCN,PMHGPPNO,PMHGFMDT:      
                             PMHGDSDT,PMHGGPFH,PMHGDTFA,PMHGDTFE,PMHGGPPI:      
                             PMHGUPFL,PMHGSTTS,PMHGPCGC,PMHGPRMK,PMHGCDTE:      
                             PMHGCTIM,PMHGWEBC,PMHGLUPD,PMHGLUPT,PMHGWEBU:      
                             PMHGHPIO,PMHGFXDS,PMHGELDS,PMHGPSCI,PMHGSMD1:      
                             PMHGSMD2,PMHGSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMHCG2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSHCGA2;PMHGPRAC,PMHGCNTR,PMHGTYPE,PMHGSPCD,PMHGPNAM:      
                             PMHGADD1,PMHGADD2,PMHGADD3,PMHGADD4,PMHGADD5:      
                             PMHGADD6,PMHGPOST,PMHGSTAT,PMHGPEML,PMHGPTEL:      
                             PMHGPFAX,PMHGPSTT,PMHGPPCN,PMHGPPNO,PMHGFMDT:      
                             PMHGDSDT,PMHGGPFH,PMHGDTFA,PMHGDTFE,PMHGGPPI:      
                             PMHGUPFL,PMHGSTTS,PMHGPCGC,PMHGPRMK,PMHGCDTE:      
                             PMHGCTIM,PMHGWEBC,PMHGLUPD,PMHGLUPT,PMHGWEBU:      
                             PMHGHPIO,PMHGFXDS,PMHGELDS,PMHGPSCI,PMHGSMD1:      
                             PMHGSMD2,PMHGSPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMHCG2  RESET     KEY72                                                       
          WRITE     PMSHCGA2,KEY72;PMHGPRAC,PMHGCNTR,PMHGTYPE,PMHGSPCD,PMHGPNAM:
                                   PMHGADD1,PMHGADD2,PMHGADD3,PMHGADD4,PMHGADD5:
                                   PMHGADD6,PMHGPOST,PMHGSTAT,PMHGPEML,PMHGPTEL:
                                   PMHGPFAX,PMHGPSTT,PMHGPPCN,PMHGPPNO,PMHGFMDT:
                                   PMHGDSDT,PMHGGPFH,PMHGDTFA,PMHGDTFE,PMHGGPPI:
                                   PMHGUPFL,PMHGSTTS,PMHGPCGC,PMHGPRMK,PMHGCDTE:
                                   PMHGCTIM,PMHGWEBC,PMHGLUPD,PMHGLUPT,PMHGWEBU:
                                   PMHGHPIO,PMHGFXDS,PMHGELDS,PMHGPSCI,PMHGSMD1:
                                   PMHGSMD2,PMHGSPAR                            
          RETURN
.
DEPMHCG2  RESET     KEY72                                                       
          DELETE    PMSHCGA2,KEY72                                              
          RETURN
.
RLPMHCG2  RESET     KEY72                                                       
          MOVE      ZERO,OVRCD
          READL     PMSHCGA2,KEY72;PMHGPRAC,PMHGCNTR,PMHGTYPE,PMHGSPCD,PMHGPNAM:
                                   PMHGADD1,PMHGADD2,PMHGADD3,PMHGADD4,PMHGADD5:
                                   PMHGADD6,PMHGPOST,PMHGSTAT,PMHGPEML,PMHGPTEL:
                                   PMHGPFAX,PMHGPSTT,PMHGPPCN,PMHGPPNO,PMHGFMDT:
                                   PMHGDSDT,PMHGGPFH,PMHGDTFA,PMHGDTFE,PMHGGPPI:
                                   PMHGUPFL,PMHGSTTS,PMHGPCGC,PMHGPRMK,PMHGCDTE:
                                   PMHGCTIM,PMHGWEBC,PMHGLUPD,PMHGLUPT,PMHGWEBU:
                                   PMHGHPIO,PMHGFXDS,PMHGELDS,PMHGPSCI,PMHGSMD1:
                                   PMHGSMD2,PMHGSPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMHCG2  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSHCGA2;PMHGPRAC,PMHGCNTR,PMHGTYPE,PMHGSPCD,PMHGPNAM:      
                             PMHGADD1,PMHGADD2,PMHGADD3,PMHGADD4,PMHGADD5:      
                             PMHGADD6,PMHGPOST,PMHGSTAT,PMHGPEML,PMHGPTEL:      
                             PMHGPFAX,PMHGPSTT,PMHGPPCN,PMHGPPNO,PMHGFMDT:      
                             PMHGDSDT,PMHGGPFH,PMHGDTFA,PMHGDTFE,PMHGGPPI:      
                             PMHGUPFL,PMHGSTTS,PMHGPCGC,PMHGPRMK,PMHGCDTE:      
                             PMHGCTIM,PMHGWEBC,PMHGLUPD,PMHGLUPT,PMHGWEBU:      
                             PMHGHPIO,PMHGFXDS,PMHGELDS,PMHGPSCI,PMHGSMD1:      
                             PMHGSMD2,PMHGSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMHCG2  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSHCGA2;PMHGPRAC,PMHGCNTR,PMHGTYPE,PMHGSPCD,PMHGPNAM:      
                             PMHGADD1,PMHGADD2,PMHGADD3,PMHGADD4,PMHGADD5:      
                             PMHGADD6,PMHGPOST,PMHGSTAT,PMHGPEML,PMHGPTEL:      
                             PMHGPFAX,PMHGPSTT,PMHGPPCN,PMHGPPNO,PMHGFMDT:      
                             PMHGDSDT,PMHGGPFH,PMHGDTFA,PMHGDTFE,PMHGGPPI:      
                             PMHGUPFL,PMHGSTTS,PMHGPCGC,PMHGPRMK,PMHGCDTE:      
                             PMHGCTIM,PMHGWEBC,PMHGLUPD,PMHGLUPT,PMHGWEBU:      
                             PMHGHPIO,PMHGFXDS,PMHGELDS,PMHGPSCI,PMHGSMD1:      
                             PMHGSMD2,PMHGSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMHCG2  RESET     KEY72                                                       
          UNLOCK    PMSHCGA2                                                    
          RETURN
.
