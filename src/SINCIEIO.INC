.
. SINCIEIO    
. --------
. Filename     : sincieaf.dat
.
RSSIIE1   RESET     KEY12                                                       
          READ      SINCIEA1,KEY12;;                                            
          RETURN
.
RASIIE1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      SINCIEA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIIE1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      SINCIEA1,KEY12;SIIECAT,SIIEWAR,SIIESID,SIIERAS,SIIESOH:     
                        SIIESOO,SIIEROQ,SIIEROL,SIIESTI,SIIESTD,SIIESIC:        
                        SIIESAB,SIIEABC,SIIESUS,SIIEUR1,SIIEUR2,SIIEUC1:        
                        SIIEUC2,SIIEUD1,SIIEUD2,SIIEUY1,SIIEUY2,SIIESPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIIE1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCIEA1;SIIECAT,SIIEWAR,SIIESID,SIIERAS,SIIESOH:           
                        SIIESOO,SIIEROQ,SIIEROL,SIIESTI,SIIESTD,SIIESIC:        
                        SIIESAB,SIIEABC,SIIESUS,SIIEUR1,SIIEUR2,SIIEUC1:        
                        SIIEUC2,SIIEUD1,SIIEUD2,SIIEUY1,SIIEUY2,SIIESPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIIE1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCIEA1;SIIECAT,SIIEWAR,SIIESID,SIIERAS,SIIESOH:           
                        SIIESOO,SIIEROQ,SIIEROL,SIIESTI,SIIESTD,SIIESIC:        
                        SIIESAB,SIIEABC,SIIESUS,SIIEUR1,SIIEUR2,SIIEUC1:        
                        SIIEUC2,SIIEUD1,SIIEUD2,SIIEUY1,SIIEUY2,SIIESPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIIE1                                                                         
          UPDATE    SINCIEA1;SIIECAT,SIIEWAR,SIIESID,SIIERAS,SIIESOH:           
                        SIIESOO,SIIEROQ,SIIEROL,SIIESTI,SIIESTD,SIIESIC:        
                        SIIESAB,SIIEABC,SIIESUS,SIIEUR1,SIIEUR2,SIIEUC1:        
                        SIIEUC2,SIIEUD1,SIIEUD2,SIIEUY1,SIIEUY2,SIIESPA         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIIE1   RESET     KEY12                                                       
          WRITE     SINCIEA1,KEY12;SIIECAT,SIIEWAR,SIIESID,SIIERAS,SIIESOH:     
                        SIIESOO,SIIEROQ,SIIEROL,SIIESTI,SIIESTD,SIIESIC:        
                        SIIESAB,SIIEABC,SIIESUS,SIIEUR1,SIIEUR2,SIIEUC1:        
                        SIIEUC2,SIIEUD1,SIIEUD2,SIIEUY1,SIIEUY2,SIIESPA         
          RETURN
.
DESIIE1   RESET     KEY12                                                       
          DELETE    SINCIEA1,KEY12                                              
          RETURN
.
RLSIIE1   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READL     SINCIEA1,KEY12;SIIECAT,SIIEWAR,SIIESID,SIIERAS,SIIESOH:     
                        SIIESOO,SIIEROQ,SIIEROL,SIIESTI,SIIESTD,SIIESIC:        
                        SIIESAB,SIIEABC,SIIESUS,SIIEUR1,SIIEUR2,SIIEUC1:        
                        SIIEUC2,SIIEUD1,SIIEUD2,SIIEUY1,SIIEUY2,SIIESPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIIE1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINCIEA1;SIIECAT,SIIEWAR,SIIESID,SIIERAS,SIIESOH:           
                        SIIESOO,SIIEROQ,SIIEROL,SIIESTI,SIIESTD,SIIESIC:        
                        SIIESAB,SIIEABC,SIIESUS,SIIEUR1,SIIEUR2,SIIEUC1:        
                        SIIEUC2,SIIEUD1,SIIEUD2,SIIEUY1,SIIEUY2,SIIESPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIIE1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINCIEA1;SIIECAT,SIIEWAR,SIIESID,SIIERAS,SIIESOH:           
                        SIIESOO,SIIEROQ,SIIEROL,SIIESTI,SIIESTD,SIIESIC:        
                        SIIESAB,SIIEABC,SIIESUS,SIIEUR1,SIIEUR2,SIIEUC1:        
                        SIIEUC2,SIIEUD1,SIIEUD2,SIIEUY1,SIIEUY2,SIIESPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIIE1   RESET     KEY12                                                       
          UNLOCK    SINCIEA1                                                    
          RETURN
.
RSSIIE2   RESET     KEY12                                                       
          READ      SINCIEA2,KEY12;;                                            
          RETURN
.
RASIIE2   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      SINCIEA2,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIIE2   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      SINCIEA2,KEY12;SIIECAT,SIIEWAR,SIIESID,SIIERAS,SIIESOH:     
                        SIIESOO,SIIEROQ,SIIEROL,SIIESTI,SIIESTD,SIIESIC:        
                        SIIESAB,SIIEABC,SIIESUS,SIIEUR1,SIIEUR2,SIIEUC1:        
                        SIIEUC2,SIIEUD1,SIIEUD2,SIIEUY1,SIIEUY2,SIIESPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIIE2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCIEA2;SIIECAT,SIIEWAR,SIIESID,SIIERAS,SIIESOH:           
                        SIIESOO,SIIEROQ,SIIEROL,SIIESTI,SIIESTD,SIIESIC:        
                        SIIESAB,SIIEABC,SIIESUS,SIIEUR1,SIIEUR2,SIIEUC1:        
                        SIIEUC2,SIIEUD1,SIIEUD2,SIIEUY1,SIIEUY2,SIIESPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIIE2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCIEA2;SIIECAT,SIIEWAR,SIIESID,SIIERAS,SIIESOH:           
                        SIIESOO,SIIEROQ,SIIEROL,SIIESTI,SIIESTD,SIIESIC:        
                        SIIESAB,SIIEABC,SIIESUS,SIIEUR1,SIIEUR2,SIIEUC1:        
                        SIIEUC2,SIIEUD1,SIIEUD2,SIIEUY1,SIIEUY2,SIIESPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIIE2                                                                         
          UPDATE    SINCIEA2;SIIECAT,SIIEWAR,SIIESID,SIIERAS,SIIESOH:           
                        SIIESOO,SIIEROQ,SIIEROL,SIIESTI,SIIESTD,SIIESIC:        
                        SIIESAB,SIIEABC,SIIESUS,SIIEUR1,SIIEUR2,SIIEUC1:        
                        SIIEUC2,SIIEUD1,SIIEUD2,SIIEUY1,SIIEUY2,SIIESPA         
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIIE2   RESET     KEY12                                                       
          WRITE     SINCIEA2,KEY12;SIIECAT,SIIEWAR,SIIESID,SIIERAS,SIIESOH:     
                        SIIESOO,SIIEROQ,SIIEROL,SIIESTI,SIIESTD,SIIESIC:        
                        SIIESAB,SIIEABC,SIIESUS,SIIEUR1,SIIEUR2,SIIEUC1:        
                        SIIEUC2,SIIEUD1,SIIEUD2,SIIEUY1,SIIEUY2,SIIESPA         
          RETURN
.
DESIIE2   RESET     KEY12                                                       
          DELETE    SINCIEA2,KEY12                                              
          RETURN
.
RLSIIE2   RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READL     SINCIEA2,KEY12;SIIECAT,SIIEWAR,SIIESID,SIIERAS,SIIESOH:     
                        SIIESOO,SIIEROQ,SIIEROL,SIIESTI,SIIESTD,SIIESIC:        
                        SIIESAB,SIIEABC,SIIESUS,SIIEUR1,SIIEUR2,SIIEUC1:        
                        SIIEUC2,SIIEUD1,SIIEUD2,SIIEUY1,SIIEUY2,SIIESPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIIE2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINCIEA2;SIIECAT,SIIEWAR,SIIESID,SIIERAS,SIIESOH:           
                        SIIESOO,SIIEROQ,SIIEROL,SIIESTI,SIIESTD,SIIESIC:        
                        SIIESAB,SIIEABC,SIIESUS,SIIEUR1,SIIEUR2,SIIEUC1:        
                        SIIEUC2,SIIEUD1,SIIEUD2,SIIEUY1,SIIEUY2,SIIESPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIIE2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINCIEA2;SIIECAT,SIIEWAR,SIIESID,SIIERAS,SIIESOH:           
                        SIIESOO,SIIEROQ,SIIEROL,SIIESTI,SIIESTD,SIIESIC:        
                        SIIESAB,SIIEABC,SIIESUS,SIIEUR1,SIIEUR2,SIIEUC1:        
                        SIIEUC2,SIIEUD1,SIIEUD2,SIIEUY1,SIIEUY2,SIIESPA         
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIIE2   RESET     KEY12                                                       
          UNLOCK    SINCIEA2                                                    
          RETURN
.
RSSIIE3   RESET     KEY15                                                       
          READ      SINCIEA3,KEY15;;                                            
          RETURN
.
RASIIE3   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      SINCIEA3,KEY15;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIIE3   RESET     KEY15                                                       
          MOVE      ZERO,OVRCD
          READ      SINCIEA3,KEY15;SIIECAT,SIIEWAR,SIIESID,SIIERAS,SIIESOH:     
                        SIIESOO,SIIEROQ,SIIEROL,SIIESTI,SIIESTD,SIIESIC:        
                        SIIESAB,SIIEABC,SIIESUS,SIIEUR1,SIIEUR2,SIIEUC1:        
                        SIIEUC2,SIIEUD1,SIIEUD2,SIIEUY1,SIIEUY2,SIIESPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIIE3                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINCIEA3;SIIECAT,SIIEWAR,SIIESID,SIIERAS,SIIESOH:           
                        SIIESOO,SIIEROQ,SIIEROL,SIIESTI,SIIESTD,SIIESIC:        
                        SIIESAB,SIIEABC,SIIESUS,SIIEUR1,SIIEUR2,SIIEUC1:        
                        SIIEUC2,SIIEUD1,SIIEUD2,SIIEUY1,SIIEUY2,SIIESPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIIE3                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINCIEA3;SIIECAT,SIIEWAR,SIIESID,SIIERAS,SIIESOH:           
                        SIIESOO,SIIEROQ,SIIEROL,SIIESTI,SIIESTD,SIIESIC:        
                        SIIESAB,SIIEABC,SIIESUS,SIIEUR1,SIIEUR2,SIIEUC1:        
                        SIIEUC2,SIIEUD1,SIIEUD2,SIIEUY1,SIIEUY2,SIIESPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WASIIE00
          MOVE      "   24",AUDTSECT
          MOVE      "208",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WASIIE99 IF NOT EQUAL
.
          PACK     SIIEAUDD,CCC,CYY,CMM,CDD
          REP       " 0",SIIEAUDD
          CLOCK     TIME,SIIEAUDT
          MOVE      PORT,SIIEAUDP
          LOAD      SIIEAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,SIIEAUDS
          MOVE      PASSCODE,SIIEAUDO
          PACK      KEY19,SIIEAUDD,SIIEAUDT,SIIEAUDP,SIIEAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWSIIE
WASIIE99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DASIIE00
          MOVE      "   24",AUDTSECT
          MOVE      "208",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DASIIE99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADSIIE
DASIIE99  RETURN
ASSIIE    RESET     KEY19                                                       
          READ      SINAUDIE,KEY19;;                                            
          RETURN
.
AKSIIE                                                                          
          MOVE      ZERO,OVRCD
          READKS    SINAUDIE;SIIEAUDD,SIIEAUDT,SIIEAUDP,SIIEAUDR,SIIEAUDS:      
                    SIIEAUDO,SIIECAT,SIIEWAR,SIIESID,SIIERAS,SIIESOH:           
                        SIIESOO,SIIEROQ,SIIEROL,SIIESTI,SIIESTD,SIIESIC:        
                        SIIESAB,SIIEABC,SIIESUS,SIIEUR1,SIIEUR2,SIIEUC1:        
                        SIIEUC2,SIIEUD1,SIIEUD2,SIIEUY1,SIIEUY2,SIIESPA         
          GOTO      OVERCOND IF OVER
          RETURN
.
AUSIIE                                                                          
          UPDATE    SINAUDIE;SIIEAUDD,SIIEAUDT,SIIEAUDP,SIIEAUDR,SIIEAUDS:      
                    SIIEAUDO,SIIECAT,SIIEWAR,SIIESID,SIIERAS,SIIESOH:           
                        SIIESOO,SIIEROQ,SIIEROL,SIIESTI,SIIESTD,SIIESIC:        
                        SIIESAB,SIIEABC,SIIESUS,SIIEUR1,SIIEUR2,SIIEUC1:        
                        SIIEUC2,SIIEUD1,SIIEUD2,SIIEUY1,SIIEUY2,SIIESPA         
          RETURN
.
AWSIIE    RESET     KEY19                                                       
          WRITE     SINAUDIE,KEY19;SIIEAUDD,SIIEAUDT,SIIEAUDP,SIIEAUDR,SIIEAUDS:
                    SIIEAUDO,SIIECAT,SIIEWAR,SIIESID,SIIERAS,SIIESOH:           
                        SIIESOO,SIIEROQ,SIIEROL,SIIESTI,SIIESTD,SIIESIC:        
                        SIIESAB,SIIEABC,SIIESUS,SIIEUR1,SIIEUR2,SIIEUC1:        
                        SIIEUC2,SIIEUD1,SIIEUD2,SIIEUY1,SIIEUY2,SIIESPA         
          RETURN
.
ADSIIE    RESET     KEY19                                                       
          DELETE    SINAUDIE,KEY19;                                             
          RETURN
.
