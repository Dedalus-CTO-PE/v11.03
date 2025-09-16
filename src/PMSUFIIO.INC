.
. PMSUFIIO    
. --------
. Filename     : pmsufiaf.dat
.
RSPMUFI1  RESET     KEY31                                                       
          READ      PMSUFIA1,KEY31;;                                            
          RETURN
.
RAPMUFI1  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSUFIA1,KEY31;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMUFI1  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSUFIA1,KEY31;PMUFUOGR,PMUFUSER,PMUFHOSP,PMUFFAVG,PMUFFAVD:
                                   PMUFGHED,PMUFCODE,PMUFQUAN,PMUFCDAT,PMUFCTIM:
                                   PMUFCUSR,PMUFDESC,PMUFSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMUFI1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSUFIA1;PMUFUOGR,PMUFUSER,PMUFHOSP,PMUFFAVG,PMUFFAVD:      
                             PMUFGHED,PMUFCODE,PMUFQUAN,PMUFCDAT,PMUFCTIM:      
                             PMUFCUSR,PMUFDESC,PMUFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMUFI1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSUFIA1;PMUFUOGR,PMUFUSER,PMUFHOSP,PMUFFAVG,PMUFFAVD:      
                             PMUFGHED,PMUFCODE,PMUFQUAN,PMUFCDAT,PMUFCTIM:      
                             PMUFCUSR,PMUFDESC,PMUFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMUFI1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSUFIA1;PMUFUOGR,PMUFUSER,PMUFHOSP,PMUFFAVG,PMUFFAVD:      
                             PMUFGHED,PMUFCODE,PMUFQUAN,PMUFCDAT,PMUFCTIM:      
                             PMUFCUSR,PMUFDESC,PMUFSPAR                         
          RETURN
.
WRPMUFI1  RESET     KEY31                                                       
          WRITE     PMSUFIA1,KEY31;PMUFUOGR,PMUFUSER,PMUFHOSP,PMUFFAVG,PMUFFAVD:
                                   PMUFGHED,PMUFCODE,PMUFQUAN,PMUFCDAT,PMUFCTIM:
                                   PMUFCUSR,PMUFDESC,PMUFSPAR                   
          RETURN
.
DEPMUFI1  RESET     KEY31                                                       
          DELETE    PMSUFIA1,KEY31                                              
          RETURN
.
RSPMUFI2  RESET     KEY31                                                       
          READ      PMSUFIA2,KEY31;;                                            
          RETURN
.
RAPMUFI2  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSUFIA2,KEY31;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMUFI2  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSUFIA2,KEY31;PMUFUOGR,PMUFUSER,PMUFHOSP,PMUFFAVG,PMUFFAVD:
                                   PMUFGHED,PMUFCODE,PMUFQUAN,PMUFCDAT,PMUFCTIM:
                                   PMUFCUSR,PMUFDESC,PMUFSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMUFI2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSUFIA2;PMUFUOGR,PMUFUSER,PMUFHOSP,PMUFFAVG,PMUFFAVD:      
                             PMUFGHED,PMUFCODE,PMUFQUAN,PMUFCDAT,PMUFCTIM:      
                             PMUFCUSR,PMUFDESC,PMUFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMUFI2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSUFIA2;PMUFUOGR,PMUFUSER,PMUFHOSP,PMUFFAVG,PMUFFAVD:      
                             PMUFGHED,PMUFCODE,PMUFQUAN,PMUFCDAT,PMUFCTIM:      
                             PMUFCUSR,PMUFDESC,PMUFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMUFI2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSUFIA2;PMUFUOGR,PMUFUSER,PMUFHOSP,PMUFFAVG,PMUFFAVD:      
                             PMUFGHED,PMUFCODE,PMUFQUAN,PMUFCDAT,PMUFCTIM:      
                             PMUFCUSR,PMUFDESC,PMUFSPAR                         
          RETURN
.
WRPMUFI2  RESET     KEY31                                                       
          WRITE     PMSUFIA2,KEY31;PMUFUOGR,PMUFUSER,PMUFHOSP,PMUFFAVG,PMUFFAVD:
                                   PMUFGHED,PMUFCODE,PMUFQUAN,PMUFCDAT,PMUFCTIM:
                                   PMUFCUSR,PMUFDESC,PMUFSPAR                   
          RETURN
.
DEPMUFI2  RESET     KEY31                                                       
          DELETE    PMSUFIA2,KEY31                                              
          RETURN
.
RSPMUFI3  RESET     KEY31                                                       
          READ      PMSUFIA3,KEY31;;                                            
          RETURN
.
RAPMUFI3  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSUFIA3,KEY31;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMUFI3  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      PMSUFIA3,KEY31;PMUFUOGR,PMUFUSER,PMUFHOSP,PMUFFAVG,PMUFFAVD:
                                   PMUFGHED,PMUFCODE,PMUFQUAN,PMUFCDAT,PMUFCTIM:
                                   PMUFCUSR,PMUFDESC,PMUFSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMUFI3  MOVE      ZERO,OVRCD                                                  
          READKS    PMSUFIA3;PMUFUOGR,PMUFUSER,PMUFHOSP,PMUFFAVG,PMUFFAVD:      
                             PMUFGHED,PMUFCODE,PMUFQUAN,PMUFCDAT,PMUFCTIM:      
                             PMUFCUSR,PMUFDESC,PMUFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMUFI3  MOVE      ZERO,OVRCD                                                  
          READKP    PMSUFIA3;PMUFUOGR,PMUFUSER,PMUFHOSP,PMUFFAVG,PMUFFAVD:      
                             PMUFGHED,PMUFCODE,PMUFQUAN,PMUFCDAT,PMUFCTIM:      
                             PMUFCUSR,PMUFDESC,PMUFSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMUFI3  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSUFIA3;PMUFUOGR,PMUFUSER,PMUFHOSP,PMUFFAVG,PMUFFAVD:      
                             PMUFGHED,PMUFCODE,PMUFQUAN,PMUFCDAT,PMUFCTIM:      
                             PMUFCUSR,PMUFDESC,PMUFSPAR                         
          RETURN
.
WRPMUFI3  RESET     KEY31                                                       
          WRITE     PMSUFIA3,KEY31;PMUFUOGR,PMUFUSER,PMUFHOSP,PMUFFAVG,PMUFFAVD:
                                   PMUFGHED,PMUFCODE,PMUFQUAN,PMUFCDAT,PMUFCTIM:
                                   PMUFCUSR,PMUFDESC,PMUFSPAR                   
          RETURN
.
DEPMUFI3  RESET     KEY31                                                       
          DELETE    PMSUFIA3,KEY31                                              
          RETURN
.
