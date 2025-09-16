.
. WATEXTIO    
. --------
. Filename     : watextaf.dat
.
RSWTEXT1  RESET     KEY4                                                        
          READ      WATEXTA1,KEY4;;                                             
          RETURN
.
RAWTEXT1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      WATEXTA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTEXT1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      WATEXTA1,KEY4;WTEXCODE,WTEXDESC,WTEXFLDT,WTEXTLDT,WTEXFVDT: 
                        WTEXTVDT,WTEXFSDT,WTEXTSDT,WTEXFRDT,WTEXTRDT,WTEXUNT:   
                        WTEXPRI,WTEXNOT,WTEXPGP,WTEXRMR,WTEXRGP,WTEXCON:        
                        WTEXPRO,WTEXSRC,WTEXUD1,WTEXUD2,WTEXUD3,WTEXUD4:        
                        WTEXUD5,WTEXUD6,WTEXUD7,WTEXUD8,WTEXSTA,WTEXANL1:       
                        WTEXANL2,WTEXANL3,WTEXANL4,WTEXANM1,WTEXANM2,WTEXANM3:  
                        WTEXPOWD,WTEXIDYC,WTEXLLSC,WTEXCRTL,WTEXADMW,WTEXINCD:  
                        WTEXOVON,WTEXCTYP,WTEXLIST,WTEXFURN,WTEXTURN,WTEXFPRO:  
                        WTEXTPRO,WTEXFPRS,WTEXTPRS,WTEXFUNI,WTEXTUNI,WTEXFCON:  
                        WTEXTCON,WTEXFSES,WTEXTSES,WTEXADTY,WTEXRSTA,WTEXFPAD:  
                        WTEXTPAD,WTEXFSYD,WTEXTSYD,WTEXFSUD,WTEXTSUD,WTEXFOSD:  
                        WTEXTOSD,WTEXSPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTEXT1                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATEXTA1;WTEXCODE,WTEXDESC,WTEXFLDT,WTEXTLDT,WTEXFVDT:      
                        WTEXTVDT,WTEXFSDT,WTEXTSDT,WTEXFRDT,WTEXTRDT,WTEXUNT:   
                        WTEXPRI,WTEXNOT,WTEXPGP,WTEXRMR,WTEXRGP,WTEXCON:        
                        WTEXPRO,WTEXSRC,WTEXUD1,WTEXUD2,WTEXUD3,WTEXUD4:        
                        WTEXUD5,WTEXUD6,WTEXUD7,WTEXUD8,WTEXSTA,WTEXANL1:       
                        WTEXANL2,WTEXANL3,WTEXANL4,WTEXANM1,WTEXANM2,WTEXANM3:  
                        WTEXPOWD,WTEXIDYC,WTEXLLSC,WTEXCRTL,WTEXADMW,WTEXINCD:  
                        WTEXOVON,WTEXCTYP,WTEXLIST,WTEXFURN,WTEXTURN,WTEXFPRO:  
                        WTEXTPRO,WTEXFPRS,WTEXTPRS,WTEXFUNI,WTEXTUNI,WTEXFCON:  
                        WTEXTCON,WTEXFSES,WTEXTSES,WTEXADTY,WTEXRSTA,WTEXFPAD:  
                        WTEXTPAD,WTEXFSYD,WTEXTSYD,WTEXFSUD,WTEXTSUD,WTEXFOSD:  
                        WTEXTOSD,WTEXSPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTEXT1                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATEXTA1;WTEXCODE,WTEXDESC,WTEXFLDT,WTEXTLDT,WTEXFVDT:      
                        WTEXTVDT,WTEXFSDT,WTEXTSDT,WTEXFRDT,WTEXTRDT,WTEXUNT:   
                        WTEXPRI,WTEXNOT,WTEXPGP,WTEXRMR,WTEXRGP,WTEXCON:        
                        WTEXPRO,WTEXSRC,WTEXUD1,WTEXUD2,WTEXUD3,WTEXUD4:        
                        WTEXUD5,WTEXUD6,WTEXUD7,WTEXUD8,WTEXSTA,WTEXANL1:       
                        WTEXANL2,WTEXANL3,WTEXANL4,WTEXANM1,WTEXANM2,WTEXANM3:  
                        WTEXPOWD,WTEXIDYC,WTEXLLSC,WTEXCRTL,WTEXADMW,WTEXINCD:  
                        WTEXOVON,WTEXCTYP,WTEXLIST,WTEXFURN,WTEXTURN,WTEXFPRO:  
                        WTEXTPRO,WTEXFPRS,WTEXTPRS,WTEXFUNI,WTEXTUNI,WTEXFCON:  
                        WTEXTCON,WTEXFSES,WTEXTSES,WTEXADTY,WTEXRSTA,WTEXFPAD:  
                        WTEXTPAD,WTEXFSYD,WTEXTSYD,WTEXFSUD,WTEXTSUD,WTEXFOSD:  
                        WTEXTOSD,WTEXSPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTEXT1                                                                        
          UPDATE    WATEXTA1;WTEXCODE,WTEXDESC,WTEXFLDT,WTEXTLDT,WTEXFVDT:      
                        WTEXTVDT,WTEXFSDT,WTEXTSDT,WTEXFRDT,WTEXTRDT,WTEXUNT:   
                        WTEXPRI,WTEXNOT,WTEXPGP,WTEXRMR,WTEXRGP,WTEXCON:        
                        WTEXPRO,WTEXSRC,WTEXUD1,WTEXUD2,WTEXUD3,WTEXUD4:        
                        WTEXUD5,WTEXUD6,WTEXUD7,WTEXUD8,WTEXSTA,WTEXANL1:       
                        WTEXANL2,WTEXANL3,WTEXANL4,WTEXANM1,WTEXANM2,WTEXANM3:  
                        WTEXPOWD,WTEXIDYC,WTEXLLSC,WTEXCRTL,WTEXADMW,WTEXINCD:  
                        WTEXOVON,WTEXCTYP,WTEXLIST,WTEXFURN,WTEXTURN,WTEXFPRO:  
                        WTEXTPRO,WTEXFPRS,WTEXTPRS,WTEXFUNI,WTEXTUNI,WTEXFCON:  
                        WTEXTCON,WTEXFSES,WTEXTSES,WTEXADTY,WTEXRSTA,WTEXFPAD:  
                        WTEXTPAD,WTEXFSYD,WTEXTSYD,WTEXFSUD,WTEXTSUD,WTEXFOSD:  
                        WTEXTOSD,WTEXSPA                                        
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWTEXT1  RESET     KEY4                                                        
          WRITE     WATEXTA1,KEY4;WTEXCODE,WTEXDESC,WTEXFLDT,WTEXTLDT,WTEXFVDT: 
                        WTEXTVDT,WTEXFSDT,WTEXTSDT,WTEXFRDT,WTEXTRDT,WTEXUNT:   
                        WTEXPRI,WTEXNOT,WTEXPGP,WTEXRMR,WTEXRGP,WTEXCON:        
                        WTEXPRO,WTEXSRC,WTEXUD1,WTEXUD2,WTEXUD3,WTEXUD4:        
                        WTEXUD5,WTEXUD6,WTEXUD7,WTEXUD8,WTEXSTA,WTEXANL1:       
                        WTEXANL2,WTEXANL3,WTEXANL4,WTEXANM1,WTEXANM2,WTEXANM3:  
                        WTEXPOWD,WTEXIDYC,WTEXLLSC,WTEXCRTL,WTEXADMW,WTEXINCD:  
                        WTEXOVON,WTEXCTYP,WTEXLIST,WTEXFURN,WTEXTURN,WTEXFPRO:  
                        WTEXTPRO,WTEXFPRS,WTEXTPRS,WTEXFUNI,WTEXTUNI,WTEXFCON:  
                        WTEXTCON,WTEXFSES,WTEXTSES,WTEXADTY,WTEXRSTA,WTEXFPAD:  
                        WTEXTPAD,WTEXFSYD,WTEXTSYD,WTEXFSUD,WTEXTSUD,WTEXFOSD:  
                        WTEXTOSD,WTEXSPA                                        
          RETURN
.
DEWTEXT1  RESET     KEY4                                                        
          DELETE    WATEXTA1,KEY4                                               
          RETURN
.
RLWTEXT1  RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READL     WATEXTA1,KEY4;WTEXCODE,WTEXDESC,WTEXFLDT,WTEXTLDT,WTEXFVDT: 
                        WTEXTVDT,WTEXFSDT,WTEXTSDT,WTEXFRDT,WTEXTRDT,WTEXUNT:   
                        WTEXPRI,WTEXNOT,WTEXPGP,WTEXRMR,WTEXRGP,WTEXCON:        
                        WTEXPRO,WTEXSRC,WTEXUD1,WTEXUD2,WTEXUD3,WTEXUD4:        
                        WTEXUD5,WTEXUD6,WTEXUD7,WTEXUD8,WTEXSTA,WTEXANL1:       
                        WTEXANL2,WTEXANL3,WTEXANL4,WTEXANM1,WTEXANM2,WTEXANM3:  
                        WTEXPOWD,WTEXIDYC,WTEXLLSC,WTEXCRTL,WTEXADMW,WTEXINCD:  
                        WTEXOVON,WTEXCTYP,WTEXLIST,WTEXFURN,WTEXTURN,WTEXFPRO:  
                        WTEXTPRO,WTEXFPRS,WTEXTPRS,WTEXFUNI,WTEXTUNI,WTEXFCON:  
                        WTEXTCON,WTEXFSES,WTEXTSES,WTEXADTY,WTEXRSTA,WTEXFPAD:  
                        WTEXTPAD,WTEXFSYD,WTEXTSYD,WTEXFSUD,WTEXTSUD,WTEXFOSD:  
                        WTEXTOSD,WTEXSPA                                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWTEXT1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WATEXTA1;WTEXCODE,WTEXDESC,WTEXFLDT,WTEXTLDT,WTEXFVDT:      
                        WTEXTVDT,WTEXFSDT,WTEXTSDT,WTEXFRDT,WTEXTRDT,WTEXUNT:   
                        WTEXPRI,WTEXNOT,WTEXPGP,WTEXRMR,WTEXRGP,WTEXCON:        
                        WTEXPRO,WTEXSRC,WTEXUD1,WTEXUD2,WTEXUD3,WTEXUD4:        
                        WTEXUD5,WTEXUD6,WTEXUD7,WTEXUD8,WTEXSTA,WTEXANL1:       
                        WTEXANL2,WTEXANL3,WTEXANL4,WTEXANM1,WTEXANM2,WTEXANM3:  
                        WTEXPOWD,WTEXIDYC,WTEXLLSC,WTEXCRTL,WTEXADMW,WTEXINCD:  
                        WTEXOVON,WTEXCTYP,WTEXLIST,WTEXFURN,WTEXTURN,WTEXFPRO:  
                        WTEXTPRO,WTEXFPRS,WTEXTPRS,WTEXFUNI,WTEXTUNI,WTEXFCON:  
                        WTEXTCON,WTEXFSES,WTEXTSES,WTEXADTY,WTEXRSTA,WTEXFPAD:  
                        WTEXTPAD,WTEXFSYD,WTEXTSYD,WTEXFSUD,WTEXTSUD,WTEXFOSD:  
                        WTEXTOSD,WTEXSPA                                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWTEXT1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WATEXTA1;WTEXCODE,WTEXDESC,WTEXFLDT,WTEXTLDT,WTEXFVDT:      
                        WTEXTVDT,WTEXFSDT,WTEXTSDT,WTEXFRDT,WTEXTRDT,WTEXUNT:   
                        WTEXPRI,WTEXNOT,WTEXPGP,WTEXRMR,WTEXRGP,WTEXCON:        
                        WTEXPRO,WTEXSRC,WTEXUD1,WTEXUD2,WTEXUD3,WTEXUD4:        
                        WTEXUD5,WTEXUD6,WTEXUD7,WTEXUD8,WTEXSTA,WTEXANL1:       
                        WTEXANL2,WTEXANL3,WTEXANL4,WTEXANM1,WTEXANM2,WTEXANM3:  
                        WTEXPOWD,WTEXIDYC,WTEXLLSC,WTEXCRTL,WTEXADMW,WTEXINCD:  
                        WTEXOVON,WTEXCTYP,WTEXLIST,WTEXFURN,WTEXTURN,WTEXFPRO:  
                        WTEXTPRO,WTEXFPRS,WTEXTPRS,WTEXFUNI,WTEXTUNI,WTEXFCON:  
                        WTEXTCON,WTEXFSES,WTEXTSES,WTEXADTY,WTEXRSTA,WTEXFPAD:  
                        WTEXTPAD,WTEXFSYD,WTEXTSYD,WTEXFSUD,WTEXTSUD,WTEXFOSD:  
                        WTEXTOSD,WTEXSPA                                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWTEXT1  RESET     KEY4                                                        
          UNLOCK    WATEXTA1                                                    
          RETURN
.
RSWTEXT2  RESET     KEY39                                                       
          READ      WATEXTA2,KEY39;;                                            
          RETURN
.
RAWTEXT2  RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      WATEXTA2,KEY39;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWTEXT2  RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      WATEXTA2,KEY39;WTEXCODE,WTEXDESC,WTEXFLDT,WTEXTLDT,WTEXFVDT:
                        WTEXTVDT,WTEXFSDT,WTEXTSDT,WTEXFRDT,WTEXTRDT,WTEXUNT:   
                        WTEXPRI,WTEXNOT,WTEXPGP,WTEXRMR,WTEXRGP,WTEXCON:        
                        WTEXPRO,WTEXSRC,WTEXUD1,WTEXUD2,WTEXUD3,WTEXUD4:        
                        WTEXUD5,WTEXUD6,WTEXUD7,WTEXUD8,WTEXSTA,WTEXANL1:       
                        WTEXANL2,WTEXANL3,WTEXANL4,WTEXANM1,WTEXANM2,WTEXANM3:  
                        WTEXPOWD,WTEXIDYC,WTEXLLSC,WTEXCRTL,WTEXADMW,WTEXINCD:  
                        WTEXOVON,WTEXCTYP,WTEXLIST,WTEXFURN,WTEXTURN,WTEXFPRO:  
                        WTEXTPRO,WTEXFPRS,WTEXTPRS,WTEXFUNI,WTEXTUNI,WTEXFCON:  
                        WTEXTCON,WTEXFSES,WTEXTSES,WTEXADTY,WTEXRSTA,WTEXFPAD:  
                        WTEXTPAD,WTEXFSYD,WTEXTSYD,WTEXFSUD,WTEXTSUD,WTEXFOSD:  
                        WTEXTOSD,WTEXSPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWTEXT2                                                                        
          MOVE      ZERO,OVRCD
          READKS    WATEXTA2;WTEXCODE,WTEXDESC,WTEXFLDT,WTEXTLDT,WTEXFVDT:      
                        WTEXTVDT,WTEXFSDT,WTEXTSDT,WTEXFRDT,WTEXTRDT,WTEXUNT:   
                        WTEXPRI,WTEXNOT,WTEXPGP,WTEXRMR,WTEXRGP,WTEXCON:        
                        WTEXPRO,WTEXSRC,WTEXUD1,WTEXUD2,WTEXUD3,WTEXUD4:        
                        WTEXUD5,WTEXUD6,WTEXUD7,WTEXUD8,WTEXSTA,WTEXANL1:       
                        WTEXANL2,WTEXANL3,WTEXANL4,WTEXANM1,WTEXANM2,WTEXANM3:  
                        WTEXPOWD,WTEXIDYC,WTEXLLSC,WTEXCRTL,WTEXADMW,WTEXINCD:  
                        WTEXOVON,WTEXCTYP,WTEXLIST,WTEXFURN,WTEXTURN,WTEXFPRO:  
                        WTEXTPRO,WTEXFPRS,WTEXTPRS,WTEXFUNI,WTEXTUNI,WTEXFCON:  
                        WTEXTCON,WTEXFSES,WTEXTSES,WTEXADTY,WTEXRSTA,WTEXFPAD:  
                        WTEXTPAD,WTEXFSYD,WTEXTSYD,WTEXFSUD,WTEXTSUD,WTEXFOSD:  
                        WTEXTOSD,WTEXSPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWTEXT2                                                                        
          MOVE      ZERO,OVRCD
          READKP    WATEXTA2;WTEXCODE,WTEXDESC,WTEXFLDT,WTEXTLDT,WTEXFVDT:      
                        WTEXTVDT,WTEXFSDT,WTEXTSDT,WTEXFRDT,WTEXTRDT,WTEXUNT:   
                        WTEXPRI,WTEXNOT,WTEXPGP,WTEXRMR,WTEXRGP,WTEXCON:        
                        WTEXPRO,WTEXSRC,WTEXUD1,WTEXUD2,WTEXUD3,WTEXUD4:        
                        WTEXUD5,WTEXUD6,WTEXUD7,WTEXUD8,WTEXSTA,WTEXANL1:       
                        WTEXANL2,WTEXANL3,WTEXANL4,WTEXANM1,WTEXANM2,WTEXANM3:  
                        WTEXPOWD,WTEXIDYC,WTEXLLSC,WTEXCRTL,WTEXADMW,WTEXINCD:  
                        WTEXOVON,WTEXCTYP,WTEXLIST,WTEXFURN,WTEXTURN,WTEXFPRO:  
                        WTEXTPRO,WTEXFPRS,WTEXTPRS,WTEXFUNI,WTEXTUNI,WTEXFCON:  
                        WTEXTCON,WTEXFSES,WTEXTSES,WTEXADTY,WTEXRSTA,WTEXFPAD:  
                        WTEXTPAD,WTEXFSYD,WTEXTSYD,WTEXFSUD,WTEXTSUD,WTEXFOSD:  
                        WTEXTOSD,WTEXSPA                                        
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWTEXT2                                                                        
          UPDATE    WATEXTA2;WTEXCODE,WTEXDESC,WTEXFLDT,WTEXTLDT,WTEXFVDT:      
                        WTEXTVDT,WTEXFSDT,WTEXTSDT,WTEXFRDT,WTEXTRDT,WTEXUNT:   
                        WTEXPRI,WTEXNOT,WTEXPGP,WTEXRMR,WTEXRGP,WTEXCON:        
                        WTEXPRO,WTEXSRC,WTEXUD1,WTEXUD2,WTEXUD3,WTEXUD4:        
                        WTEXUD5,WTEXUD6,WTEXUD7,WTEXUD8,WTEXSTA,WTEXANL1:       
                        WTEXANL2,WTEXANL3,WTEXANL4,WTEXANM1,WTEXANM2,WTEXANM3:  
                        WTEXPOWD,WTEXIDYC,WTEXLLSC,WTEXCRTL,WTEXADMW,WTEXINCD:  
                        WTEXOVON,WTEXCTYP,WTEXLIST,WTEXFURN,WTEXTURN,WTEXFPRO:  
                        WTEXTPRO,WTEXFPRS,WTEXTPRS,WTEXFUNI,WTEXTUNI,WTEXFCON:  
                        WTEXTCON,WTEXFSES,WTEXTSES,WTEXADTY,WTEXRSTA,WTEXFPAD:  
                        WTEXTPAD,WTEXFSYD,WTEXTSYD,WTEXFSUD,WTEXTSUD,WTEXFOSD:  
                        WTEXTOSD,WTEXSPA                                        
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRWTEXT2  RESET     KEY39                                                       
          WRITE     WATEXTA2,KEY39;WTEXCODE,WTEXDESC,WTEXFLDT,WTEXTLDT,WTEXFVDT:
                        WTEXTVDT,WTEXFSDT,WTEXTSDT,WTEXFRDT,WTEXTRDT,WTEXUNT:   
                        WTEXPRI,WTEXNOT,WTEXPGP,WTEXRMR,WTEXRGP,WTEXCON:        
                        WTEXPRO,WTEXSRC,WTEXUD1,WTEXUD2,WTEXUD3,WTEXUD4:        
                        WTEXUD5,WTEXUD6,WTEXUD7,WTEXUD8,WTEXSTA,WTEXANL1:       
                        WTEXANL2,WTEXANL3,WTEXANL4,WTEXANM1,WTEXANM2,WTEXANM3:  
                        WTEXPOWD,WTEXIDYC,WTEXLLSC,WTEXCRTL,WTEXADMW,WTEXINCD:  
                        WTEXOVON,WTEXCTYP,WTEXLIST,WTEXFURN,WTEXTURN,WTEXFPRO:  
                        WTEXTPRO,WTEXFPRS,WTEXTPRS,WTEXFUNI,WTEXTUNI,WTEXFCON:  
                        WTEXTCON,WTEXFSES,WTEXTSES,WTEXADTY,WTEXRSTA,WTEXFPAD:  
                        WTEXTPAD,WTEXFSYD,WTEXTSYD,WTEXFSUD,WTEXTSUD,WTEXFOSD:  
                        WTEXTOSD,WTEXSPA                                        
          RETURN
.
DEWTEXT2  RESET     KEY39                                                       
          DELETE    WATEXTA2,KEY39                                              
          RETURN
.
RLWTEXT2  RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READL     WATEXTA2,KEY39;WTEXCODE,WTEXDESC,WTEXFLDT,WTEXTLDT,WTEXFVDT:
                        WTEXTVDT,WTEXFSDT,WTEXTSDT,WTEXFRDT,WTEXTRDT,WTEXUNT:   
                        WTEXPRI,WTEXNOT,WTEXPGP,WTEXRMR,WTEXRGP,WTEXCON:        
                        WTEXPRO,WTEXSRC,WTEXUD1,WTEXUD2,WTEXUD3,WTEXUD4:        
                        WTEXUD5,WTEXUD6,WTEXUD7,WTEXUD8,WTEXSTA,WTEXANL1:       
                        WTEXANL2,WTEXANL3,WTEXANL4,WTEXANM1,WTEXANM2,WTEXANM3:  
                        WTEXPOWD,WTEXIDYC,WTEXLLSC,WTEXCRTL,WTEXADMW,WTEXINCD:  
                        WTEXOVON,WTEXCTYP,WTEXLIST,WTEXFURN,WTEXTURN,WTEXFPRO:  
                        WTEXTPRO,WTEXFPRS,WTEXTPRS,WTEXFUNI,WTEXTUNI,WTEXFCON:  
                        WTEXTCON,WTEXFSES,WTEXTSES,WTEXADTY,WTEXRSTA,WTEXFPAD:  
                        WTEXTPAD,WTEXFSYD,WTEXTSYD,WTEXFSUD,WTEXTSUD,WTEXFOSD:  
                        WTEXTOSD,WTEXSPA                                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLWTEXT2                                                                        
          MOVE      ZERO,OVRCD
          READLKS   WATEXTA2;WTEXCODE,WTEXDESC,WTEXFLDT,WTEXTLDT,WTEXFVDT:      
                        WTEXTVDT,WTEXFSDT,WTEXTSDT,WTEXFRDT,WTEXTRDT,WTEXUNT:   
                        WTEXPRI,WTEXNOT,WTEXPGP,WTEXRMR,WTEXRGP,WTEXCON:        
                        WTEXPRO,WTEXSRC,WTEXUD1,WTEXUD2,WTEXUD3,WTEXUD4:        
                        WTEXUD5,WTEXUD6,WTEXUD7,WTEXUD8,WTEXSTA,WTEXANL1:       
                        WTEXANL2,WTEXANL3,WTEXANL4,WTEXANM1,WTEXANM2,WTEXANM3:  
                        WTEXPOWD,WTEXIDYC,WTEXLLSC,WTEXCRTL,WTEXADMW,WTEXINCD:  
                        WTEXOVON,WTEXCTYP,WTEXLIST,WTEXFURN,WTEXTURN,WTEXFPRO:  
                        WTEXTPRO,WTEXFPRS,WTEXTPRS,WTEXFUNI,WTEXTUNI,WTEXFCON:  
                        WTEXTCON,WTEXFSES,WTEXTSES,WTEXADTY,WTEXRSTA,WTEXFPAD:  
                        WTEXTPAD,WTEXFSYD,WTEXTSYD,WTEXFSUD,WTEXTSUD,WTEXFOSD:  
                        WTEXTOSD,WTEXSPA                                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLWTEXT2                                                                        
          MOVE      ZERO,OVRCD
          READLKP   WATEXTA2;WTEXCODE,WTEXDESC,WTEXFLDT,WTEXTLDT,WTEXFVDT:      
                        WTEXTVDT,WTEXFSDT,WTEXTSDT,WTEXFRDT,WTEXTRDT,WTEXUNT:   
                        WTEXPRI,WTEXNOT,WTEXPGP,WTEXRMR,WTEXRGP,WTEXCON:        
                        WTEXPRO,WTEXSRC,WTEXUD1,WTEXUD2,WTEXUD3,WTEXUD4:        
                        WTEXUD5,WTEXUD6,WTEXUD7,WTEXUD8,WTEXSTA,WTEXANL1:       
                        WTEXANL2,WTEXANL3,WTEXANL4,WTEXANM1,WTEXANM2,WTEXANM3:  
                        WTEXPOWD,WTEXIDYC,WTEXLLSC,WTEXCRTL,WTEXADMW,WTEXINCD:  
                        WTEXOVON,WTEXCTYP,WTEXLIST,WTEXFURN,WTEXTURN,WTEXFPRO:  
                        WTEXTPRO,WTEXFPRS,WTEXTPRS,WTEXFUNI,WTEXTUNI,WTEXFCON:  
                        WTEXTCON,WTEXFSES,WTEXTSES,WTEXADTY,WTEXRSTA,WTEXFPAD:  
                        WTEXTPAD,WTEXFSYD,WTEXTSYD,WTEXFSUD,WTEXTSUD,WTEXFOSD:  
                        WTEXTOSD,WTEXSPA                                        
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUWTEXT2  RESET     KEY39                                                       
          UNLOCK    WATEXTA2                                                    
          RETURN
.
