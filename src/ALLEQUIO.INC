.
. ALLEQUIO    
. --------
. Filename     : allequaf.dat
.
RSALEQU1  RESET     KEY10                                                       
          READ      ALLEQUA1,KEY10;;                                            
          RETURN
.
RAALEQU1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      ALLEQUA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALEQU1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      ALLEQUA1,KEY10;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:
                                   ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:
                                   ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:
                                   ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:
                                   ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:
                                   ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:
                                   ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALEQU1  MOVE      ZERO,OVRCD                                                  
          READKS    ALLEQUA1;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALEQU1  MOVE      ZERO,OVRCD                                                  
          READKP    ALLEQUA1;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALEQU1  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLEQUA1;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALEQU1  RESET     KEY10                                                       
          WRITE     ALLEQUA1,KEY10;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:
                                   ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:
                                   ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:
                                   ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:
                                   ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:
                                   ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:
                                   ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR 
          RETURN
.
DEALEQU1  RESET     KEY10                                                       
          DELETE    ALLEQUA1,KEY10                                              
          RETURN
.
RLALEQU1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     ALLEQUA1,KEY10;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:
                                   ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:
                                   ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:
                                   ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:
                                   ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:
                                   ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:
                                   ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALEQU1  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLEQUA1;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALEQU1  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLEQUA1;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALEQU1  RESET     KEY10                                                       
          UNLOCK    ALLEQUA1                                                    
          RETURN
.
RSALEQU2  RESET     KEY13                                                       
          READ      ALLEQUA2,KEY13;;                                            
          RETURN
.
RAALEQU2  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      ALLEQUA2,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALEQU2  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      ALLEQUA2,KEY13;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:
                                   ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:
                                   ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:
                                   ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:
                                   ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:
                                   ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:
                                   ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALEQU2  MOVE      ZERO,OVRCD                                                  
          READKS    ALLEQUA2;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALEQU2  MOVE      ZERO,OVRCD                                                  
          READKP    ALLEQUA2;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALEQU2  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLEQUA2;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALEQU2  RESET     KEY13                                                       
          WRITE     ALLEQUA2,KEY13;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:
                                   ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:
                                   ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:
                                   ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:
                                   ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:
                                   ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:
                                   ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR 
          RETURN
.
DEALEQU2  RESET     KEY13                                                       
          DELETE    ALLEQUA2,KEY13                                              
          RETURN
.
RLALEQU2  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READL     ALLEQUA2,KEY13;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:
                                   ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:
                                   ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:
                                   ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:
                                   ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:
                                   ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:
                                   ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALEQU2  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLEQUA2;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALEQU2  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLEQUA2;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALEQU2  RESET     KEY13                                                       
          UNLOCK    ALLEQUA2                                                    
          RETURN
.
RSALEQU3  RESET     KEY13                                                       
          READ      ALLEQUA3,KEY13;;                                            
          RETURN
.
RAALEQU3  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      ALLEQUA3,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALEQU3  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      ALLEQUA3,KEY13;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:
                                   ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:
                                   ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:
                                   ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:
                                   ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:
                                   ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:
                                   ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALEQU3  MOVE      ZERO,OVRCD                                                  
          READKS    ALLEQUA3;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALEQU3  MOVE      ZERO,OVRCD                                                  
          READKP    ALLEQUA3;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALEQU3  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLEQUA3;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALEQU3  RESET     KEY13                                                       
          WRITE     ALLEQUA3,KEY13;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:
                                   ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:
                                   ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:
                                   ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:
                                   ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:
                                   ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:
                                   ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR 
          RETURN
.
DEALEQU3  RESET     KEY13                                                       
          DELETE    ALLEQUA3,KEY13                                              
          RETURN
.
RLALEQU3  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READL     ALLEQUA3,KEY13;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:
                                   ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:
                                   ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:
                                   ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:
                                   ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:
                                   ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:
                                   ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALEQU3  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLEQUA3;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALEQU3  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLEQUA3;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALEQU3  RESET     KEY13                                                       
          UNLOCK    ALLEQUA3                                                    
          RETURN
.
RSALEQU4  RESET     KEY53                                                       
          READ      ALLEQUA4,KEY53;;                                            
          RETURN
.
RAALEQU4  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      ALLEQUA4,KEY53;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALEQU4  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      ALLEQUA4,KEY53;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:
                                   ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:
                                   ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:
                                   ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:
                                   ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:
                                   ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:
                                   ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALEQU4  MOVE      ZERO,OVRCD                                                  
          READKS    ALLEQUA4;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALEQU4  MOVE      ZERO,OVRCD                                                  
          READKP    ALLEQUA4;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALEQU4  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLEQUA4;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALEQU4  RESET     KEY53                                                       
          WRITE     ALLEQUA4,KEY53;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:
                                   ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:
                                   ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:
                                   ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:
                                   ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:
                                   ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:
                                   ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR 
          RETURN
.
DEALEQU4  RESET     KEY53                                                       
          DELETE    ALLEQUA4,KEY53                                              
          RETURN
.
RLALEQU4  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READL     ALLEQUA4,KEY53;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:
                                   ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:
                                   ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:
                                   ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:
                                   ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:
                                   ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:
                                   ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALEQU4  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLEQUA4;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALEQU4  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLEQUA4;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALEQU4  RESET     KEY53                                                       
          UNLOCK    ALLEQUA4                                                    
          RETURN
.
RSALEQU5  RESET     KEY16                                                       
          READ      ALLEQUA5,KEY16;;                                            
          RETURN
.
RAALEQU5  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ALLEQUA5,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALEQU5  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ALLEQUA5,KEY16;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:
                                   ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:
                                   ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:
                                   ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:
                                   ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:
                                   ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:
                                   ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALEQU5  MOVE      ZERO,OVRCD                                                  
          READKS    ALLEQUA5;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALEQU5  MOVE      ZERO,OVRCD                                                  
          READKP    ALLEQUA5;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALEQU5  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLEQUA5;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALEQU5  RESET     KEY16                                                       
          WRITE     ALLEQUA5,KEY16;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:
                                   ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:
                                   ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:
                                   ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:
                                   ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:
                                   ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:
                                   ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR 
          RETURN
.
DEALEQU5  RESET     KEY16                                                       
          DELETE    ALLEQUA5,KEY16                                              
          RETURN
.
RLALEQU5  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     ALLEQUA5,KEY16;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:
                                   ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:
                                   ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:
                                   ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:
                                   ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:
                                   ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:
                                   ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALEQU5  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLEQUA5;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALEQU5  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLEQUA5;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALEQU5  RESET     KEY16                                                       
          UNLOCK    ALLEQUA5                                                    
          RETURN
.
RSALEQU6  RESET     KEY53                                                       
          READ      ALLEQUA6,KEY53;;                                            
          RETURN
.
RAALEQU6  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      ALLEQUA6,KEY53;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALEQU6  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      ALLEQUA6,KEY53;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:
                                   ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:
                                   ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:
                                   ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:
                                   ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:
                                   ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:
                                   ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALEQU6  MOVE      ZERO,OVRCD                                                  
          READKS    ALLEQUA6;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALEQU6  MOVE      ZERO,OVRCD                                                  
          READKP    ALLEQUA6;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALEQU6  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLEQUA6;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALEQU6  RESET     KEY53                                                       
          WRITE     ALLEQUA6,KEY53;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:
                                   ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:
                                   ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:
                                   ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:
                                   ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:
                                   ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:
                                   ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR 
          RETURN
.
DEALEQU6  RESET     KEY53                                                       
          DELETE    ALLEQUA6,KEY53                                              
          RETURN
.
RLALEQU6  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READL     ALLEQUA6,KEY53;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:
                                   ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:
                                   ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:
                                   ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:
                                   ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:
                                   ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:
                                   ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALEQU6  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLEQUA6;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALEQU6  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLEQUA6;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALEQU6  RESET     KEY53                                                       
          UNLOCK    ALLEQUA6                                                    
          RETURN
.
RSALEQU7  RESET     KEY16                                                       
          READ      ALLEQUA7,KEY16;;                                            
          RETURN
.
RAALEQU7  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ALLEQUA7,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALEQU7  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ALLEQUA7,KEY16;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:
                                   ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:
                                   ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:
                                   ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:
                                   ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:
                                   ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:
                                   ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALEQU7  MOVE      ZERO,OVRCD                                                  
          READKS    ALLEQUA7;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALEQU7  MOVE      ZERO,OVRCD                                                  
          READKP    ALLEQUA7;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALEQU7  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLEQUA7;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALEQU7  RESET     KEY16                                                       
          WRITE     ALLEQUA7,KEY16;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:
                                   ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:
                                   ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:
                                   ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:
                                   ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:
                                   ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:
                                   ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR 
          RETURN
.
DEALEQU7  RESET     KEY16                                                       
          DELETE    ALLEQUA7,KEY16                                              
          RETURN
.
RLALEQU7  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     ALLEQUA7,KEY16;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:
                                   ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:
                                   ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:
                                   ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:
                                   ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:
                                   ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:
                                   ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALEQU7  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLEQUA7;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALEQU7  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLEQUA7;ALEQEQUI,ALEQDESC,ALEQLOAN,ALEQTYPE,ALEQSUBT:      
                             ALEQHOME,ALEQDEPT,ALEQITEM,ALEQSUPP,ALEQPROD:      
                             ALEQSERI,ALEQSTAT,ALEQSDAT,ALEQPDAT,ALEQMAIN:      
                             ALEQUNIT,ALEQDEPO,ALEQSPEC,ALEQLOAU,ALEQRDAT:      
                             ALEQCONS,ALEQCBAL,ALEQREOR,ALEQREQT,ALEQREGN:      
                             ALEQASSN,ALEQCDAT,ALEQCTIM,ALEQCUID,ALEQUDAT:      
                             ALEQUTIM,ALEQUUID,ALEQACTV,ALEQPFEE,ALEQSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALEQU7  RESET     KEY16                                                       
          UNLOCK    ALLEQUA7                                                    
          RETURN
.
