.
. ALLRSAIO    
. --------
. Filename     : allrsaaf.dat
.
RSALRSA1  RESET     KEY16                                                       
          READ      ALLRSAA1,KEY16;;                                            
          RETURN
.
RAALRSA1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ALLRSAA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALRSA1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ALLRSAA1,KEY16;ALRAVISN,ALRALADM,ALRACDAT,ALRACTIM,ALRACUID:
                                   ALRAUDAT,ALRAUTIM,ALRAUUID,ALRASPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALRSA1  MOVE      ZERO,OVRCD                                                  
          READKS    ALLRSAA1;ALRAVISN,ALRALADM,ALRACDAT,ALRACTIM,ALRACUID:      
                             ALRAUDAT,ALRAUTIM,ALRAUUID,ALRASPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALRSA1  MOVE      ZERO,OVRCD                                                  
          READKP    ALLRSAA1;ALRAVISN,ALRALADM,ALRACDAT,ALRACTIM,ALRACUID:      
                             ALRAUDAT,ALRAUTIM,ALRAUUID,ALRASPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALRSA1  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLRSAA1;ALRAVISN,ALRALADM,ALRACDAT,ALRACTIM,ALRACUID:      
                             ALRAUDAT,ALRAUTIM,ALRAUUID,ALRASPAR                
          RETURN
.
WRALRSA1  RESET     KEY16                                                       
          WRITE     ALLRSAA1,KEY16;ALRAVISN,ALRALADM,ALRACDAT,ALRACTIM,ALRACUID:
                                   ALRAUDAT,ALRAUTIM,ALRAUUID,ALRASPAR          
          RETURN
.
DEALRSA1  RESET     KEY16                                                       
          DELETE    ALLRSAA1,KEY16                                              
          RETURN
.
RSALRSA2  RESET     KEY16                                                       
          READ      ALLRSAA2,KEY16;;                                            
          RETURN
.
RAALRSA2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ALLRSAA2,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALRSA2  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      ALLRSAA2,KEY16;ALRAVISN,ALRALADM,ALRACDAT,ALRACTIM,ALRACUID:
                                   ALRAUDAT,ALRAUTIM,ALRAUUID,ALRASPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALRSA2  MOVE      ZERO,OVRCD                                                  
          READKS    ALLRSAA2;ALRAVISN,ALRALADM,ALRACDAT,ALRACTIM,ALRACUID:      
                             ALRAUDAT,ALRAUTIM,ALRAUUID,ALRASPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALRSA2  MOVE      ZERO,OVRCD                                                  
          READKP    ALLRSAA2;ALRAVISN,ALRALADM,ALRACDAT,ALRACTIM,ALRACUID:      
                             ALRAUDAT,ALRAUTIM,ALRAUUID,ALRASPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALRSA2  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLRSAA2;ALRAVISN,ALRALADM,ALRACDAT,ALRACTIM,ALRACUID:      
                             ALRAUDAT,ALRAUTIM,ALRAUUID,ALRASPAR                
          RETURN
.
WRALRSA2  RESET     KEY16                                                       
          WRITE     ALLRSAA2,KEY16;ALRAVISN,ALRALADM,ALRACDAT,ALRACTIM,ALRACUID:
                                   ALRAUDAT,ALRAUTIM,ALRAUUID,ALRASPAR          
          RETURN
.
DEALRSA2  RESET     KEY16                                                       
          DELETE    ALLRSAA2,KEY16                                              
          RETURN
.
