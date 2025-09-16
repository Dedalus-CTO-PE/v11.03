.
. PMSBTHIO    
. --------
. Filename     : pmsbthaf.dat
.
RSPMBTH1  RESET     KEY23                                                       
          READ      PMSBTHA1,KEY23;;                                            
          RETURN
.
RAPMBTH1  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBTHA1,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMBTH1  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBTHA1,KEY23;PMBTUNIQ,PMBTBUNQ,PMBTAUDC,PMBTADMN,PMBTADMM:
                        PMBTLURN,PMBTNBFR,PMBTPLUR,PMBTADOP,PMBTBBAR,PMBTBDAT:  
                        PMBTBTIM,PMBTESTG,PMBTGEND,PMBTBSTA,PMBTMDEL,PMBTAPG1:  
                        PMBTAPG2,PMBTTRES,PMBTDRUG,PMBTBWGH,PMBTLNGT,PMBTHEAD:  
                        PMBTMOUL,PMBTCAPU,PMBTCORB,PMBTMECO,PMBTURIN,PMBTPAED:  
                        PMBTNICU,PMBTVITK,PMBTHBDT,PMBTHBTM,PMBTBFAT,PMBTIFDD:  
                        PMBTBEBY,PMBTLBAT,PMBTLBCH,PMBTGDAT,PMBTGTIM,PMBTDWGH:  
                        PMBTBPRE,PMBTCANE,PMBTCABO,PMBTWEBC,PMBTDATC,PMBTTIMC:  
                        PMBTWEBU,PMBTDATU,PMBTTIMU,PMBTRECS,PMBTWEBD,PMBTDATD:  
                        PMBTTIMD,PMBTREAS,PMBTSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMBTH1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSBTHA1;PMBTUNIQ,PMBTBUNQ,PMBTAUDC,PMBTADMN,PMBTADMM:      
                        PMBTLURN,PMBTNBFR,PMBTPLUR,PMBTADOP,PMBTBBAR,PMBTBDAT:  
                        PMBTBTIM,PMBTESTG,PMBTGEND,PMBTBSTA,PMBTMDEL,PMBTAPG1:  
                        PMBTAPG2,PMBTTRES,PMBTDRUG,PMBTBWGH,PMBTLNGT,PMBTHEAD:  
                        PMBTMOUL,PMBTCAPU,PMBTCORB,PMBTMECO,PMBTURIN,PMBTPAED:  
                        PMBTNICU,PMBTVITK,PMBTHBDT,PMBTHBTM,PMBTBFAT,PMBTIFDD:  
                        PMBTBEBY,PMBTLBAT,PMBTLBCH,PMBTGDAT,PMBTGTIM,PMBTDWGH:  
                        PMBTBPRE,PMBTCANE,PMBTCABO,PMBTWEBC,PMBTDATC,PMBTTIMC:  
                        PMBTWEBU,PMBTDATU,PMBTTIMU,PMBTRECS,PMBTWEBD,PMBTDATD:  
                        PMBTTIMD,PMBTREAS,PMBTSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMBTH1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSBTHA1;PMBTUNIQ,PMBTBUNQ,PMBTAUDC,PMBTADMN,PMBTADMM:      
                        PMBTLURN,PMBTNBFR,PMBTPLUR,PMBTADOP,PMBTBBAR,PMBTBDAT:  
                        PMBTBTIM,PMBTESTG,PMBTGEND,PMBTBSTA,PMBTMDEL,PMBTAPG1:  
                        PMBTAPG2,PMBTTRES,PMBTDRUG,PMBTBWGH,PMBTLNGT,PMBTHEAD:  
                        PMBTMOUL,PMBTCAPU,PMBTCORB,PMBTMECO,PMBTURIN,PMBTPAED:  
                        PMBTNICU,PMBTVITK,PMBTHBDT,PMBTHBTM,PMBTBFAT,PMBTIFDD:  
                        PMBTBEBY,PMBTLBAT,PMBTLBCH,PMBTGDAT,PMBTGTIM,PMBTDWGH:  
                        PMBTBPRE,PMBTCANE,PMBTCABO,PMBTWEBC,PMBTDATC,PMBTTIMC:  
                        PMBTWEBU,PMBTDATU,PMBTTIMU,PMBTRECS,PMBTWEBD,PMBTDATD:  
                        PMBTTIMD,PMBTREAS,PMBTSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMBTH1                                                                        
          UPDATE    PMSBTHA1;PMBTUNIQ,PMBTBUNQ,PMBTAUDC,PMBTADMN,PMBTADMM:      
                        PMBTLURN,PMBTNBFR,PMBTPLUR,PMBTADOP,PMBTBBAR,PMBTBDAT:  
                        PMBTBTIM,PMBTESTG,PMBTGEND,PMBTBSTA,PMBTMDEL,PMBTAPG1:  
                        PMBTAPG2,PMBTTRES,PMBTDRUG,PMBTBWGH,PMBTLNGT,PMBTHEAD:  
                        PMBTMOUL,PMBTCAPU,PMBTCORB,PMBTMECO,PMBTURIN,PMBTPAED:  
                        PMBTNICU,PMBTVITK,PMBTHBDT,PMBTHBTM,PMBTBFAT,PMBTIFDD:  
                        PMBTBEBY,PMBTLBAT,PMBTLBCH,PMBTGDAT,PMBTGTIM,PMBTDWGH:  
                        PMBTBPRE,PMBTCANE,PMBTCABO,PMBTWEBC,PMBTDATC,PMBTTIMC:  
                        PMBTWEBU,PMBTDATU,PMBTTIMU,PMBTRECS,PMBTWEBD,PMBTDATD:  
                        PMBTTIMD,PMBTREAS,PMBTSPAR                              
          RETURN
.
WRPMBTH1  RESET     KEY23                                                       
          WRITE     PMSBTHA1,KEY23;PMBTUNIQ,PMBTBUNQ,PMBTAUDC,PMBTADMN,PMBTADMM:
                        PMBTLURN,PMBTNBFR,PMBTPLUR,PMBTADOP,PMBTBBAR,PMBTBDAT:  
                        PMBTBTIM,PMBTESTG,PMBTGEND,PMBTBSTA,PMBTMDEL,PMBTAPG1:  
                        PMBTAPG2,PMBTTRES,PMBTDRUG,PMBTBWGH,PMBTLNGT,PMBTHEAD:  
                        PMBTMOUL,PMBTCAPU,PMBTCORB,PMBTMECO,PMBTURIN,PMBTPAED:  
                        PMBTNICU,PMBTVITK,PMBTHBDT,PMBTHBTM,PMBTBFAT,PMBTIFDD:  
                        PMBTBEBY,PMBTLBAT,PMBTLBCH,PMBTGDAT,PMBTGTIM,PMBTDWGH:  
                        PMBTBPRE,PMBTCANE,PMBTCABO,PMBTWEBC,PMBTDATC,PMBTTIMC:  
                        PMBTWEBU,PMBTDATU,PMBTTIMU,PMBTRECS,PMBTWEBD,PMBTDATD:  
                        PMBTTIMD,PMBTREAS,PMBTSPAR                              
          RETURN
.
DEPMBTH1  RESET     KEY23                                                       
          DELETE    PMSBTHA1,KEY23                                              
          RETURN
.
RSPMBTH2  RESET     KEY31                                                       
          READ      PMSBTHA2,KEY31;;                                            
          RETURN
.
RAPMBTH2  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBTHA2,KEY31;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMBTH2  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBTHA2,KEY31;PMBTUNIQ,PMBTBUNQ,PMBTAUDC,PMBTADMN,PMBTADMM:
                        PMBTLURN,PMBTNBFR,PMBTPLUR,PMBTADOP,PMBTBBAR,PMBTBDAT:  
                        PMBTBTIM,PMBTESTG,PMBTGEND,PMBTBSTA,PMBTMDEL,PMBTAPG1:  
                        PMBTAPG2,PMBTTRES,PMBTDRUG,PMBTBWGH,PMBTLNGT,PMBTHEAD:  
                        PMBTMOUL,PMBTCAPU,PMBTCORB,PMBTMECO,PMBTURIN,PMBTPAED:  
                        PMBTNICU,PMBTVITK,PMBTHBDT,PMBTHBTM,PMBTBFAT,PMBTIFDD:  
                        PMBTBEBY,PMBTLBAT,PMBTLBCH,PMBTGDAT,PMBTGTIM,PMBTDWGH:  
                        PMBTBPRE,PMBTCANE,PMBTCABO,PMBTWEBC,PMBTDATC,PMBTTIMC:  
                        PMBTWEBU,PMBTDATU,PMBTTIMU,PMBTRECS,PMBTWEBD,PMBTDATD:  
                        PMBTTIMD,PMBTREAS,PMBTSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMBTH2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSBTHA2;PMBTUNIQ,PMBTBUNQ,PMBTAUDC,PMBTADMN,PMBTADMM:      
                        PMBTLURN,PMBTNBFR,PMBTPLUR,PMBTADOP,PMBTBBAR,PMBTBDAT:  
                        PMBTBTIM,PMBTESTG,PMBTGEND,PMBTBSTA,PMBTMDEL,PMBTAPG1:  
                        PMBTAPG2,PMBTTRES,PMBTDRUG,PMBTBWGH,PMBTLNGT,PMBTHEAD:  
                        PMBTMOUL,PMBTCAPU,PMBTCORB,PMBTMECO,PMBTURIN,PMBTPAED:  
                        PMBTNICU,PMBTVITK,PMBTHBDT,PMBTHBTM,PMBTBFAT,PMBTIFDD:  
                        PMBTBEBY,PMBTLBAT,PMBTLBCH,PMBTGDAT,PMBTGTIM,PMBTDWGH:  
                        PMBTBPRE,PMBTCANE,PMBTCABO,PMBTWEBC,PMBTDATC,PMBTTIMC:  
                        PMBTWEBU,PMBTDATU,PMBTTIMU,PMBTRECS,PMBTWEBD,PMBTDATD:  
                        PMBTTIMD,PMBTREAS,PMBTSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMBTH2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSBTHA2;PMBTUNIQ,PMBTBUNQ,PMBTAUDC,PMBTADMN,PMBTADMM:      
                        PMBTLURN,PMBTNBFR,PMBTPLUR,PMBTADOP,PMBTBBAR,PMBTBDAT:  
                        PMBTBTIM,PMBTESTG,PMBTGEND,PMBTBSTA,PMBTMDEL,PMBTAPG1:  
                        PMBTAPG2,PMBTTRES,PMBTDRUG,PMBTBWGH,PMBTLNGT,PMBTHEAD:  
                        PMBTMOUL,PMBTCAPU,PMBTCORB,PMBTMECO,PMBTURIN,PMBTPAED:  
                        PMBTNICU,PMBTVITK,PMBTHBDT,PMBTHBTM,PMBTBFAT,PMBTIFDD:  
                        PMBTBEBY,PMBTLBAT,PMBTLBCH,PMBTGDAT,PMBTGTIM,PMBTDWGH:  
                        PMBTBPRE,PMBTCANE,PMBTCABO,PMBTWEBC,PMBTDATC,PMBTTIMC:  
                        PMBTWEBU,PMBTDATU,PMBTTIMU,PMBTRECS,PMBTWEBD,PMBTDATD:  
                        PMBTTIMD,PMBTREAS,PMBTSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMBTH2                                                                        
          UPDATE    PMSBTHA2;PMBTUNIQ,PMBTBUNQ,PMBTAUDC,PMBTADMN,PMBTADMM:      
                        PMBTLURN,PMBTNBFR,PMBTPLUR,PMBTADOP,PMBTBBAR,PMBTBDAT:  
                        PMBTBTIM,PMBTESTG,PMBTGEND,PMBTBSTA,PMBTMDEL,PMBTAPG1:  
                        PMBTAPG2,PMBTTRES,PMBTDRUG,PMBTBWGH,PMBTLNGT,PMBTHEAD:  
                        PMBTMOUL,PMBTCAPU,PMBTCORB,PMBTMECO,PMBTURIN,PMBTPAED:  
                        PMBTNICU,PMBTVITK,PMBTHBDT,PMBTHBTM,PMBTBFAT,PMBTIFDD:  
                        PMBTBEBY,PMBTLBAT,PMBTLBCH,PMBTGDAT,PMBTGTIM,PMBTDWGH:  
                        PMBTBPRE,PMBTCANE,PMBTCABO,PMBTWEBC,PMBTDATC,PMBTTIMC:  
                        PMBTWEBU,PMBTDATU,PMBTTIMU,PMBTRECS,PMBTWEBD,PMBTDATD:  
                        PMBTTIMD,PMBTREAS,PMBTSPAR                              
          RETURN
.
WRPMBTH2  RESET     KEY31                                                       
          WRITE     PMSBTHA2,KEY31;PMBTUNIQ,PMBTBUNQ,PMBTAUDC,PMBTADMN,PMBTADMM:
                        PMBTLURN,PMBTNBFR,PMBTPLUR,PMBTADOP,PMBTBBAR,PMBTBDAT:  
                        PMBTBTIM,PMBTESTG,PMBTGEND,PMBTBSTA,PMBTMDEL,PMBTAPG1:  
                        PMBTAPG2,PMBTTRES,PMBTDRUG,PMBTBWGH,PMBTLNGT,PMBTHEAD:  
                        PMBTMOUL,PMBTCAPU,PMBTCORB,PMBTMECO,PMBTURIN,PMBTPAED:  
                        PMBTNICU,PMBTVITK,PMBTHBDT,PMBTHBTM,PMBTBFAT,PMBTIFDD:  
                        PMBTBEBY,PMBTLBAT,PMBTLBCH,PMBTGDAT,PMBTGTIM,PMBTDWGH:  
                        PMBTBPRE,PMBTCANE,PMBTCABO,PMBTWEBC,PMBTDATC,PMBTTIMC:  
                        PMBTWEBU,PMBTDATU,PMBTTIMU,PMBTRECS,PMBTWEBD,PMBTDATD:  
                        PMBTTIMD,PMBTREAS,PMBTSPAR                              
          RETURN
.
DEPMBTH2  RESET     KEY31                                                       
          DELETE    PMSBTHA2,KEY31                                              
          RETURN
.
RSPMBTH3  RESET     KEY31                                                       
          READ      PMSBTHA3,KEY31;;                                            
          RETURN
.
RAPMBTH3  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBTHA3,KEY31;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMBTH3  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBTHA3,KEY31;PMBTUNIQ,PMBTBUNQ,PMBTAUDC,PMBTADMN,PMBTADMM:
                        PMBTLURN,PMBTNBFR,PMBTPLUR,PMBTADOP,PMBTBBAR,PMBTBDAT:  
                        PMBTBTIM,PMBTESTG,PMBTGEND,PMBTBSTA,PMBTMDEL,PMBTAPG1:  
                        PMBTAPG2,PMBTTRES,PMBTDRUG,PMBTBWGH,PMBTLNGT,PMBTHEAD:  
                        PMBTMOUL,PMBTCAPU,PMBTCORB,PMBTMECO,PMBTURIN,PMBTPAED:  
                        PMBTNICU,PMBTVITK,PMBTHBDT,PMBTHBTM,PMBTBFAT,PMBTIFDD:  
                        PMBTBEBY,PMBTLBAT,PMBTLBCH,PMBTGDAT,PMBTGTIM,PMBTDWGH:  
                        PMBTBPRE,PMBTCANE,PMBTCABO,PMBTWEBC,PMBTDATC,PMBTTIMC:  
                        PMBTWEBU,PMBTDATU,PMBTTIMU,PMBTRECS,PMBTWEBD,PMBTDATD:  
                        PMBTTIMD,PMBTREAS,PMBTSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMBTH3                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSBTHA3;PMBTUNIQ,PMBTBUNQ,PMBTAUDC,PMBTADMN,PMBTADMM:      
                        PMBTLURN,PMBTNBFR,PMBTPLUR,PMBTADOP,PMBTBBAR,PMBTBDAT:  
                        PMBTBTIM,PMBTESTG,PMBTGEND,PMBTBSTA,PMBTMDEL,PMBTAPG1:  
                        PMBTAPG2,PMBTTRES,PMBTDRUG,PMBTBWGH,PMBTLNGT,PMBTHEAD:  
                        PMBTMOUL,PMBTCAPU,PMBTCORB,PMBTMECO,PMBTURIN,PMBTPAED:  
                        PMBTNICU,PMBTVITK,PMBTHBDT,PMBTHBTM,PMBTBFAT,PMBTIFDD:  
                        PMBTBEBY,PMBTLBAT,PMBTLBCH,PMBTGDAT,PMBTGTIM,PMBTDWGH:  
                        PMBTBPRE,PMBTCANE,PMBTCABO,PMBTWEBC,PMBTDATC,PMBTTIMC:  
                        PMBTWEBU,PMBTDATU,PMBTTIMU,PMBTRECS,PMBTWEBD,PMBTDATD:  
                        PMBTTIMD,PMBTREAS,PMBTSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMBTH3                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSBTHA3;PMBTUNIQ,PMBTBUNQ,PMBTAUDC,PMBTADMN,PMBTADMM:      
                        PMBTLURN,PMBTNBFR,PMBTPLUR,PMBTADOP,PMBTBBAR,PMBTBDAT:  
                        PMBTBTIM,PMBTESTG,PMBTGEND,PMBTBSTA,PMBTMDEL,PMBTAPG1:  
                        PMBTAPG2,PMBTTRES,PMBTDRUG,PMBTBWGH,PMBTLNGT,PMBTHEAD:  
                        PMBTMOUL,PMBTCAPU,PMBTCORB,PMBTMECO,PMBTURIN,PMBTPAED:  
                        PMBTNICU,PMBTVITK,PMBTHBDT,PMBTHBTM,PMBTBFAT,PMBTIFDD:  
                        PMBTBEBY,PMBTLBAT,PMBTLBCH,PMBTGDAT,PMBTGTIM,PMBTDWGH:  
                        PMBTBPRE,PMBTCANE,PMBTCABO,PMBTWEBC,PMBTDATC,PMBTTIMC:  
                        PMBTWEBU,PMBTDATU,PMBTTIMU,PMBTRECS,PMBTWEBD,PMBTDATD:  
                        PMBTTIMD,PMBTREAS,PMBTSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMBTH3                                                                        
          UPDATE    PMSBTHA3;PMBTUNIQ,PMBTBUNQ,PMBTAUDC,PMBTADMN,PMBTADMM:      
                        PMBTLURN,PMBTNBFR,PMBTPLUR,PMBTADOP,PMBTBBAR,PMBTBDAT:  
                        PMBTBTIM,PMBTESTG,PMBTGEND,PMBTBSTA,PMBTMDEL,PMBTAPG1:  
                        PMBTAPG2,PMBTTRES,PMBTDRUG,PMBTBWGH,PMBTLNGT,PMBTHEAD:  
                        PMBTMOUL,PMBTCAPU,PMBTCORB,PMBTMECO,PMBTURIN,PMBTPAED:  
                        PMBTNICU,PMBTVITK,PMBTHBDT,PMBTHBTM,PMBTBFAT,PMBTIFDD:  
                        PMBTBEBY,PMBTLBAT,PMBTLBCH,PMBTGDAT,PMBTGTIM,PMBTDWGH:  
                        PMBTBPRE,PMBTCANE,PMBTCABO,PMBTWEBC,PMBTDATC,PMBTTIMC:  
                        PMBTWEBU,PMBTDATU,PMBTTIMU,PMBTRECS,PMBTWEBD,PMBTDATD:  
                        PMBTTIMD,PMBTREAS,PMBTSPAR                              
          RETURN
.
WRPMBTH3  RESET     KEY31                                                       
          WRITE     PMSBTHA3,KEY31;PMBTUNIQ,PMBTBUNQ,PMBTAUDC,PMBTADMN,PMBTADMM:
                        PMBTLURN,PMBTNBFR,PMBTPLUR,PMBTADOP,PMBTBBAR,PMBTBDAT:  
                        PMBTBTIM,PMBTESTG,PMBTGEND,PMBTBSTA,PMBTMDEL,PMBTAPG1:  
                        PMBTAPG2,PMBTTRES,PMBTDRUG,PMBTBWGH,PMBTLNGT,PMBTHEAD:  
                        PMBTMOUL,PMBTCAPU,PMBTCORB,PMBTMECO,PMBTURIN,PMBTPAED:  
                        PMBTNICU,PMBTVITK,PMBTHBDT,PMBTHBTM,PMBTBFAT,PMBTIFDD:  
                        PMBTBEBY,PMBTLBAT,PMBTLBCH,PMBTGDAT,PMBTGTIM,PMBTDWGH:  
                        PMBTBPRE,PMBTCANE,PMBTCABO,PMBTWEBC,PMBTDATC,PMBTTIMC:  
                        PMBTWEBU,PMBTDATU,PMBTTIMU,PMBTRECS,PMBTWEBD,PMBTDATD:  
                        PMBTTIMD,PMBTREAS,PMBTSPAR                              
          RETURN
.
DEPMBTH3  RESET     KEY31                                                       
          DELETE    PMSBTHA3,KEY31                                              
          RETURN
.
RSPMBTH4  RESET     KEY31                                                       
          READ      PMSBTHA4,KEY31;;                                            
          RETURN
.
RAPMBTH4  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBTHA4,KEY31;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMBTH4  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSBTHA4,KEY31;PMBTUNIQ,PMBTBUNQ,PMBTAUDC,PMBTADMN,PMBTADMM:
                        PMBTLURN,PMBTNBFR,PMBTPLUR,PMBTADOP,PMBTBBAR,PMBTBDAT:  
                        PMBTBTIM,PMBTESTG,PMBTGEND,PMBTBSTA,PMBTMDEL,PMBTAPG1:  
                        PMBTAPG2,PMBTTRES,PMBTDRUG,PMBTBWGH,PMBTLNGT,PMBTHEAD:  
                        PMBTMOUL,PMBTCAPU,PMBTCORB,PMBTMECO,PMBTURIN,PMBTPAED:  
                        PMBTNICU,PMBTVITK,PMBTHBDT,PMBTHBTM,PMBTBFAT,PMBTIFDD:  
                        PMBTBEBY,PMBTLBAT,PMBTLBCH,PMBTGDAT,PMBTGTIM,PMBTDWGH:  
                        PMBTBPRE,PMBTCANE,PMBTCABO,PMBTWEBC,PMBTDATC,PMBTTIMC:  
                        PMBTWEBU,PMBTDATU,PMBTTIMU,PMBTRECS,PMBTWEBD,PMBTDATD:  
                        PMBTTIMD,PMBTREAS,PMBTSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMBTH4                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSBTHA4;PMBTUNIQ,PMBTBUNQ,PMBTAUDC,PMBTADMN,PMBTADMM:      
                        PMBTLURN,PMBTNBFR,PMBTPLUR,PMBTADOP,PMBTBBAR,PMBTBDAT:  
                        PMBTBTIM,PMBTESTG,PMBTGEND,PMBTBSTA,PMBTMDEL,PMBTAPG1:  
                        PMBTAPG2,PMBTTRES,PMBTDRUG,PMBTBWGH,PMBTLNGT,PMBTHEAD:  
                        PMBTMOUL,PMBTCAPU,PMBTCORB,PMBTMECO,PMBTURIN,PMBTPAED:  
                        PMBTNICU,PMBTVITK,PMBTHBDT,PMBTHBTM,PMBTBFAT,PMBTIFDD:  
                        PMBTBEBY,PMBTLBAT,PMBTLBCH,PMBTGDAT,PMBTGTIM,PMBTDWGH:  
                        PMBTBPRE,PMBTCANE,PMBTCABO,PMBTWEBC,PMBTDATC,PMBTTIMC:  
                        PMBTWEBU,PMBTDATU,PMBTTIMU,PMBTRECS,PMBTWEBD,PMBTDATD:  
                        PMBTTIMD,PMBTREAS,PMBTSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMBTH4                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSBTHA4;PMBTUNIQ,PMBTBUNQ,PMBTAUDC,PMBTADMN,PMBTADMM:      
                        PMBTLURN,PMBTNBFR,PMBTPLUR,PMBTADOP,PMBTBBAR,PMBTBDAT:  
                        PMBTBTIM,PMBTESTG,PMBTGEND,PMBTBSTA,PMBTMDEL,PMBTAPG1:  
                        PMBTAPG2,PMBTTRES,PMBTDRUG,PMBTBWGH,PMBTLNGT,PMBTHEAD:  
                        PMBTMOUL,PMBTCAPU,PMBTCORB,PMBTMECO,PMBTURIN,PMBTPAED:  
                        PMBTNICU,PMBTVITK,PMBTHBDT,PMBTHBTM,PMBTBFAT,PMBTIFDD:  
                        PMBTBEBY,PMBTLBAT,PMBTLBCH,PMBTGDAT,PMBTGTIM,PMBTDWGH:  
                        PMBTBPRE,PMBTCANE,PMBTCABO,PMBTWEBC,PMBTDATC,PMBTTIMC:  
                        PMBTWEBU,PMBTDATU,PMBTTIMU,PMBTRECS,PMBTWEBD,PMBTDATD:  
                        PMBTTIMD,PMBTREAS,PMBTSPAR                              
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMBTH4                                                                        
          UPDATE    PMSBTHA4;PMBTUNIQ,PMBTBUNQ,PMBTAUDC,PMBTADMN,PMBTADMM:      
                        PMBTLURN,PMBTNBFR,PMBTPLUR,PMBTADOP,PMBTBBAR,PMBTBDAT:  
                        PMBTBTIM,PMBTESTG,PMBTGEND,PMBTBSTA,PMBTMDEL,PMBTAPG1:  
                        PMBTAPG2,PMBTTRES,PMBTDRUG,PMBTBWGH,PMBTLNGT,PMBTHEAD:  
                        PMBTMOUL,PMBTCAPU,PMBTCORB,PMBTMECO,PMBTURIN,PMBTPAED:  
                        PMBTNICU,PMBTVITK,PMBTHBDT,PMBTHBTM,PMBTBFAT,PMBTIFDD:  
                        PMBTBEBY,PMBTLBAT,PMBTLBCH,PMBTGDAT,PMBTGTIM,PMBTDWGH:  
                        PMBTBPRE,PMBTCANE,PMBTCABO,PMBTWEBC,PMBTDATC,PMBTTIMC:  
                        PMBTWEBU,PMBTDATU,PMBTTIMU,PMBTRECS,PMBTWEBD,PMBTDATD:  
                        PMBTTIMD,PMBTREAS,PMBTSPAR                              
          RETURN
.
WRPMBTH4  RESET     KEY31                                                       
          WRITE     PMSBTHA4,KEY31;PMBTUNIQ,PMBTBUNQ,PMBTAUDC,PMBTADMN,PMBTADMM:
                        PMBTLURN,PMBTNBFR,PMBTPLUR,PMBTADOP,PMBTBBAR,PMBTBDAT:  
                        PMBTBTIM,PMBTESTG,PMBTGEND,PMBTBSTA,PMBTMDEL,PMBTAPG1:  
                        PMBTAPG2,PMBTTRES,PMBTDRUG,PMBTBWGH,PMBTLNGT,PMBTHEAD:  
                        PMBTMOUL,PMBTCAPU,PMBTCORB,PMBTMECO,PMBTURIN,PMBTPAED:  
                        PMBTNICU,PMBTVITK,PMBTHBDT,PMBTHBTM,PMBTBFAT,PMBTIFDD:  
                        PMBTBEBY,PMBTLBAT,PMBTLBCH,PMBTGDAT,PMBTGTIM,PMBTDWGH:  
                        PMBTBPRE,PMBTCANE,PMBTCABO,PMBTWEBC,PMBTDATC,PMBTTIMC:  
                        PMBTWEBU,PMBTDATU,PMBTTIMU,PMBTRECS,PMBTWEBD,PMBTDATD:  
                        PMBTTIMD,PMBTREAS,PMBTSPAR                              
          RETURN
.
DEPMBTH4  RESET     KEY31                                                       
          DELETE    PMSBTHA4,KEY31                                              
          RETURN
.
