.
. PMSIRSIO    
. --------
. Filename     : pmsirsaf.dat
.
RSPMIRS1  RESET     KEY68                                                       
          READ      PMSIRSA1,KEY68;;                                            
          RETURN
.
RAPMIRS1  RESET     KEY68                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIRSA1,KEY68;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMIRS1  RESET     KEY68                                                       
          MOVE      ZERO,OVRCD
          READ      PMSIRSA1,KEY68;PMISRTYP,PMISCODE,PMISRDAT,PMISRTIM,PMISRUID:
                                   PMISSURN,PMISFNAM,PMISSNAM,PMISBDAT,PMISPSEX:
                                   PMISMEDI,PMISMCCD,PMISMEDV,PMISDVAN,PMISIHIN:
                                   PMISADD1,PMISADD2,PMISADD3,PMISADD4,PMISPOST:
                                   PMISSAD1,PMISSAD2,PMISSAD3,PMISSAD4,PMISSPST:
                                   PMISHPII,PMISPTYP,PMISNAME,PMISHPIO,PMISSTYP:
                                   PMISUNIT,PMISVSTA,PMISASTA,PMISRSCD,PMISRSDE:
                                   PMISRVER,PMISSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMIRS1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSIRSA1;PMISRTYP,PMISCODE,PMISRDAT,PMISRTIM,PMISRUID:      
                             PMISSURN,PMISFNAM,PMISSNAM,PMISBDAT,PMISPSEX:      
                             PMISMEDI,PMISMCCD,PMISMEDV,PMISDVAN,PMISIHIN:      
                             PMISADD1,PMISADD2,PMISADD3,PMISADD4,PMISPOST:      
                             PMISSAD1,PMISSAD2,PMISSAD3,PMISSAD4,PMISSPST:      
                             PMISHPII,PMISPTYP,PMISNAME,PMISHPIO,PMISSTYP:      
                             PMISUNIT,PMISVSTA,PMISASTA,PMISRSCD,PMISRSDE:      
                             PMISRVER,PMISSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMIRS1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSIRSA1;PMISRTYP,PMISCODE,PMISRDAT,PMISRTIM,PMISRUID:      
                             PMISSURN,PMISFNAM,PMISSNAM,PMISBDAT,PMISPSEX:      
                             PMISMEDI,PMISMCCD,PMISMEDV,PMISDVAN,PMISIHIN:      
                             PMISADD1,PMISADD2,PMISADD3,PMISADD4,PMISPOST:      
                             PMISSAD1,PMISSAD2,PMISSAD3,PMISSAD4,PMISSPST:      
                             PMISHPII,PMISPTYP,PMISNAME,PMISHPIO,PMISSTYP:      
                             PMISUNIT,PMISVSTA,PMISASTA,PMISRSCD,PMISRSDE:      
                             PMISRVER,PMISSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMIRS1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSIRSA1;PMISRTYP,PMISCODE,PMISRDAT,PMISRTIM,PMISRUID:      
                             PMISSURN,PMISFNAM,PMISSNAM,PMISBDAT,PMISPSEX:      
                             PMISMEDI,PMISMCCD,PMISMEDV,PMISDVAN,PMISIHIN:      
                             PMISADD1,PMISADD2,PMISADD3,PMISADD4,PMISPOST:      
                             PMISSAD1,PMISSAD2,PMISSAD3,PMISSAD4,PMISSPST:      
                             PMISHPII,PMISPTYP,PMISNAME,PMISHPIO,PMISSTYP:      
                             PMISUNIT,PMISVSTA,PMISASTA,PMISRSCD,PMISRSDE:      
                             PMISRVER,PMISSPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMIRS1  RESET     KEY68                                                       
          WRITE     PMSIRSA1,KEY68;PMISRTYP,PMISCODE,PMISRDAT,PMISRTIM,PMISRUID:
                                   PMISSURN,PMISFNAM,PMISSNAM,PMISBDAT,PMISPSEX:
                                   PMISMEDI,PMISMCCD,PMISMEDV,PMISDVAN,PMISIHIN:
                                   PMISADD1,PMISADD2,PMISADD3,PMISADD4,PMISPOST:
                                   PMISSAD1,PMISSAD2,PMISSAD3,PMISSAD4,PMISSPST:
                                   PMISHPII,PMISPTYP,PMISNAME,PMISHPIO,PMISSTYP:
                                   PMISUNIT,PMISVSTA,PMISASTA,PMISRSCD,PMISRSDE:
                                   PMISRVER,PMISSPAR                            
          RETURN
.
DEPMIRS1  RESET     KEY68                                                       
          DELETE    PMSIRSA1,KEY68                                              
          RETURN
.
RLPMIRS1  RESET     KEY68                                                       
          MOVE      ZERO,OVRCD
          READL     PMSIRSA1,KEY68;PMISRTYP,PMISCODE,PMISRDAT,PMISRTIM,PMISRUID:
                                   PMISSURN,PMISFNAM,PMISSNAM,PMISBDAT,PMISPSEX:
                                   PMISMEDI,PMISMCCD,PMISMEDV,PMISDVAN,PMISIHIN:
                                   PMISADD1,PMISADD2,PMISADD3,PMISADD4,PMISPOST:
                                   PMISSAD1,PMISSAD2,PMISSAD3,PMISSAD4,PMISSPST:
                                   PMISHPII,PMISPTYP,PMISNAME,PMISHPIO,PMISSTYP:
                                   PMISUNIT,PMISVSTA,PMISASTA,PMISRSCD,PMISRSDE:
                                   PMISRVER,PMISSPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMIRS1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSIRSA1;PMISRTYP,PMISCODE,PMISRDAT,PMISRTIM,PMISRUID:      
                             PMISSURN,PMISFNAM,PMISSNAM,PMISBDAT,PMISPSEX:      
                             PMISMEDI,PMISMCCD,PMISMEDV,PMISDVAN,PMISIHIN:      
                             PMISADD1,PMISADD2,PMISADD3,PMISADD4,PMISPOST:      
                             PMISSAD1,PMISSAD2,PMISSAD3,PMISSAD4,PMISSPST:      
                             PMISHPII,PMISPTYP,PMISNAME,PMISHPIO,PMISSTYP:      
                             PMISUNIT,PMISVSTA,PMISASTA,PMISRSCD,PMISRSDE:      
                             PMISRVER,PMISSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMIRS1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSIRSA1;PMISRTYP,PMISCODE,PMISRDAT,PMISRTIM,PMISRUID:      
                             PMISSURN,PMISFNAM,PMISSNAM,PMISBDAT,PMISPSEX:      
                             PMISMEDI,PMISMCCD,PMISMEDV,PMISDVAN,PMISIHIN:      
                             PMISADD1,PMISADD2,PMISADD3,PMISADD4,PMISPOST:      
                             PMISSAD1,PMISSAD2,PMISSAD3,PMISSAD4,PMISSPST:      
                             PMISHPII,PMISPTYP,PMISNAME,PMISHPIO,PMISSTYP:      
                             PMISUNIT,PMISVSTA,PMISASTA,PMISRSCD,PMISRSDE:      
                             PMISRVER,PMISSPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMIRS1  RESET     KEY68                                                       
          UNLOCK    PMSIRSA1                                                    
          RETURN
.
