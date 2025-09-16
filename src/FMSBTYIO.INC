.
. FMSBTYIO    
. --------
. Filename     : fmsbtyaf.dat
.
RSFMBT1   RESET     KEY4                                                        
          READ      FMSBTYA1,KEY4;;                                             
          RETURN
.
RAFMBT1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      FMSBTYA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMBT1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      FMSBTYA1,KEY4;FMBTCODE,FMBTDESC,FMBTYEAR,FMBTSTAT,FMBTSPAR  
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMBT1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSBTYA1;FMBTCODE,FMBTDESC,FMBTYEAR,FMBTSTAT,FMBTSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMBT1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSBTYA1;FMBTCODE,FMBTDESC,FMBTYEAR,FMBTSTAT,FMBTSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMBT1                                                                         
          UPDATE    FMSBTYA1;FMBTCODE,FMBTDESC,FMBTYEAR,FMBTSTAT,FMBTSPAR       
          RETURN
.
WRFMBT1   RESET     KEY4                                                        
          WRITE     FMSBTYA1,KEY4;FMBTCODE,FMBTDESC,FMBTYEAR,FMBTSTAT,FMBTSPAR  
          RETURN
.
DEFMBT1   RESET     KEY4                                                        
          DELETE    FMSBTYA1,KEY4                                               
          RETURN
.
