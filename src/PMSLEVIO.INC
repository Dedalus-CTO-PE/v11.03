.
. PMSLEVIO    
. --------
. Filename     : pmslevaf.dat
.
RSPMLEV1  RESET     KEY39                                                       
          READ      PMSLEVA1,KEY39;;                                            
          RETURN
.
RAPMLEV1  RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      PMSLEVA1,KEY39;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMLEV1  RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      PMSLEVA1,KEY39;PMLVUNIQ,PMLVADMN,PMLVDATE,PMLVTIME,PMLVTYPE:
                        PMLVETYP,PMLVSTAT,PMLVDES1,PMLVDES2,PMLVSPAR,PMLVWEBC:  
                        PMLVDATC,PMLVTIMC,PMLVWEBU,PMLVDATU,PMLVTIMU            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMLEV1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSLEVA1;PMLVUNIQ,PMLVADMN,PMLVDATE,PMLVTIME,PMLVTYPE:      
                        PMLVETYP,PMLVSTAT,PMLVDES1,PMLVDES2,PMLVSPAR,PMLVWEBC:  
                        PMLVDATC,PMLVTIMC,PMLVWEBU,PMLVDATU,PMLVTIMU            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMLEV1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSLEVA1;PMLVUNIQ,PMLVADMN,PMLVDATE,PMLVTIME,PMLVTYPE:      
                        PMLVETYP,PMLVSTAT,PMLVDES1,PMLVDES2,PMLVSPAR,PMLVWEBC:  
                        PMLVDATC,PMLVTIMC,PMLVWEBU,PMLVDATU,PMLVTIMU            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMLEV1                                                                        
          UPDATE    PMSLEVA1;PMLVUNIQ,PMLVADMN,PMLVDATE,PMLVTIME,PMLVTYPE:      
                        PMLVETYP,PMLVSTAT,PMLVDES1,PMLVDES2,PMLVSPAR,PMLVWEBC:  
                        PMLVDATC,PMLVTIMC,PMLVWEBU,PMLVDATU,PMLVTIMU            
          RETURN
.
WRPMLEV1  RESET     KEY39                                                       
          WRITE     PMSLEVA1,KEY39;PMLVUNIQ,PMLVADMN,PMLVDATE,PMLVTIME,PMLVTYPE:
                        PMLVETYP,PMLVSTAT,PMLVDES1,PMLVDES2,PMLVSPAR,PMLVWEBC:  
                        PMLVDATC,PMLVTIMC,PMLVWEBU,PMLVDATU,PMLVTIMU            
          RETURN
.
DEPMLEV1  RESET     KEY39                                                       
          DELETE    PMSLEVA1,KEY39                                              
          RETURN
.
