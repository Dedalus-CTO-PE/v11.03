.
. SINPOCIO    
. --------
. Filename     : sinpocaf.dat
.
RSSIPC1   RESET     KEY10                                                       
          READ      SINPOCA1,KEY10;;                                            
          RETURN
.
RASIPC1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      SINPOCA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIPC1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      SINPOCA1,KEY10;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:     
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIPC1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINPOCA1;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIPC1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINPOCA1;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIPC1                                                                         
          UPDATE    SINPOCA1;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIPC1   RESET     KEY10                                                       
          WRITE     SINPOCA1,KEY10;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:     
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          RETURN
.
DESIPC1   RESET     KEY10                                                       
          DELETE    SINPOCA1,KEY10                                              
          RETURN
.
RLSIPC1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     SINPOCA1,KEY10;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:     
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIPC1                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINPOCA1;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIPC1                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINPOCA1;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIPC1   RESET     KEY10                                                       
          UNLOCK    SINPOCA1                                                    
          RETURN
.
RSSIPC2   RESET     KEY21                                                       
          READ      SINPOCA2,KEY21;;                                            
          RETURN
.
RASIPC2   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      SINPOCA2,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIPC2   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      SINPOCA2,KEY21;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:     
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIPC2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINPOCA2;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIPC2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINPOCA2;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIPC2                                                                         
          UPDATE    SINPOCA2;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIPC2   RESET     KEY21                                                       
          WRITE     SINPOCA2,KEY21;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:     
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          RETURN
.
DESIPC2   RESET     KEY21                                                       
          DELETE    SINPOCA2,KEY21                                              
          RETURN
.
RLSIPC2   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READL     SINPOCA2,KEY21;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:     
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIPC2                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINPOCA2;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIPC2                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINPOCA2;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIPC2   RESET     KEY21                                                       
          UNLOCK    SINPOCA2                                                    
          RETURN
.
RSSIPC3   RESET     KEY23                                                       
          READ      SINPOCA3,KEY23;;                                            
          RETURN
.
RASIPC3   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      SINPOCA3,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIPC3   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      SINPOCA3,KEY23;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:     
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIPC3                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINPOCA3;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIPC3                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINPOCA3;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIPC3                                                                         
          UPDATE    SINPOCA3;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIPC3   RESET     KEY23                                                       
          WRITE     SINPOCA3,KEY23;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:     
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          RETURN
.
DESIPC3   RESET     KEY23                                                       
          DELETE    SINPOCA3,KEY23                                              
          RETURN
.
RLSIPC3   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READL     SINPOCA3,KEY23;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:     
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIPC3                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINPOCA3;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIPC3                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINPOCA3;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIPC3   RESET     KEY23                                                       
          UNLOCK    SINPOCA3                                                    
          RETURN
.
RSSIPC4   RESET     KEY21                                                       
          READ      SINPOCA4,KEY21;;                                            
          RETURN
.
RASIPC4   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      SINPOCA4,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIPC4   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      SINPOCA4,KEY21;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:     
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIPC4                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINPOCA4;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIPC4                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINPOCA4;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIPC4                                                                         
          UPDATE    SINPOCA4;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIPC4   RESET     KEY21                                                       
          WRITE     SINPOCA4,KEY21;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:     
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          RETURN
.
DESIPC4   RESET     KEY21                                                       
          DELETE    SINPOCA4,KEY21                                              
          RETURN
.
RLSIPC4   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READL     SINPOCA4,KEY21;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:     
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIPC4                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINPOCA4;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIPC4                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINPOCA4;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIPC4   RESET     KEY21                                                       
          UNLOCK    SINPOCA4                                                    
          RETURN
.
RSSIPC5   RESET     KEY23                                                       
          READ      SINPOCA5,KEY23;;                                            
          RETURN
.
RASIPC5   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      SINPOCA5,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIPC5   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      SINPOCA5,KEY23;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:     
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIPC5                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINPOCA5;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIPC5                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINPOCA5;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIPC5                                                                         
          UPDATE    SINPOCA5;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIPC5   RESET     KEY23                                                       
          WRITE     SINPOCA5,KEY23;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:     
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          RETURN
.
DESIPC5   RESET     KEY23                                                       
          DELETE    SINPOCA5,KEY23                                              
          RETURN
.
RLSIPC5   RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READL     SINPOCA5,KEY23;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:     
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIPC5                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINPOCA5;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIPC5                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINPOCA5;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIPC5   RESET     KEY23                                                       
          UNLOCK    SINPOCA5                                                    
          RETURN
.
RSSIPC6   RESET     KEY25                                                       
          READ      SINPOCA6,KEY25;;                                            
          RETURN
.
RASIPC6   RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      SINPOCA6,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIPC6   RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      SINPOCA6,KEY25;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:     
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIPC6                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINPOCA6;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIPC6                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINPOCA6;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIPC6                                                                         
          UPDATE    SINPOCA6;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIPC6   RESET     KEY25                                                       
          WRITE     SINPOCA6,KEY25;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:     
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          RETURN
.
DESIPC6   RESET     KEY25                                                       
          DELETE    SINPOCA6,KEY25                                              
          RETURN
.
RLSIPC6   RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READL     SINPOCA6,KEY25;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:     
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIPC6                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINPOCA6;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIPC6                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINPOCA6;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIPC6   RESET     KEY25                                                       
          UNLOCK    SINPOCA6                                                    
          RETURN
.
RSSIPC7   RESET     KEY6                                                        
          READ      SINPOCA7,KEY6;;                                             
          RETURN
.
RASIPC7   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      SINPOCA7,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIPC7   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      SINPOCA7,KEY6;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:      
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIPC7                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINPOCA7;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIPC7                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINPOCA7;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIPC7                                                                         
          UPDATE    SINPOCA7;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIPC7   RESET     KEY6                                                        
          WRITE     SINPOCA7,KEY6;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:      
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          RETURN
.
DESIPC7   RESET     KEY6                                                        
          DELETE    SINPOCA7,KEY6                                               
          RETURN
.
RLSIPC7   RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READL     SINPOCA7,KEY6;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:      
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIPC7                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINPOCA7;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIPC7                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINPOCA7;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIPC7   RESET     KEY6                                                        
          UNLOCK    SINPOCA7                                                    
          RETURN
.
RSSIPC8   RESET     KEY37                                                       
          READ      SINPOCA8,KEY37;;                                            
          RETURN
.
RASIPC8   RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      SINPOCA8,KEY37;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIPC8   RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      SINPOCA8,KEY37;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:     
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIPC8                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINPOCA8;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIPC8                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINPOCA8;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIPC8                                                                         
          UPDATE    SINPOCA8;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRSIPC8   RESET     KEY37                                                       
          WRITE     SINPOCA8,KEY37;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:     
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          RETURN
.
DESIPC8   RESET     KEY37                                                       
          DELETE    SINPOCA8,KEY37                                              
          RETURN
.
RLSIPC8   RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READL     SINPOCA8,KEY37;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:     
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLSIPC8                                                                         
          MOVE      ZERO,OVRCD
          READLKS   SINPOCA8;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLSIPC8                                                                         
          MOVE      ZERO,OVRCD
          READLKP   SINPOCA8;SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUSIPC8   RESET     KEY37                                                       
          UNLOCK    SINPOCA8                                                    
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WASIPC00
          MOVE      "   24",AUDTSECT
          MOVE      "210",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WASIPC99 IF NOT EQUAL
.
          PACK     SIPCAUDD,CCC,CYY,CMM,CDD
          REP       " 0",SIPCAUDD
          CLOCK     TIME,SIPCAUDT
          MOVE      PORT,SIPCAUDP
          LOAD      SIPCAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,SIPCAUDS
          MOVE      PASSCODE,SIPCAUDO
          PACK      KEY19,SIPCAUDD,SIPCAUDT,SIPCAUDP,SIPCAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWSIPC
WASIPC99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DASIPC00
          MOVE      "   24",AUDTSECT
          MOVE      "210",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DASIPC99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADSIPC
DASIPC99  RETURN
ASSIPC    RESET     KEY19                                                       
          READ      SINAUDPC,KEY19;;                                            
          RETURN
.
AKSIPC                                                                          
          MOVE      ZERO,OVRCD
          READKS    SINAUDPC;SIPCAUDD,SIPCAUDT,SIPCAUDP,SIPCAUDR,SIPCAUDS:      
                    SIPCAUDO,SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
AUSIPC                                                                          
          UPDATE    SINAUDPC;SIPCAUDD,SIPCAUDT,SIPCAUDP,SIPCAUDR,SIPCAUDS:      
                    SIPCAUDO,SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          RETURN
.
AWSIPC    RESET     KEY19                                                       
          WRITE     SINAUDPC,KEY19;SIPCAUDD,SIPCAUDT,SIPCAUDP,SIPCAUDR,SIPCAUDS:
                    SIPCAUDO,SIPCPON,SIPCITM,SIPCCST,SIPCPRD,SIPCDAT:           
                        SIPCWAR,SIPCCAT,SIPCPN,SIPCPD,SIPCCON,SIPCCDT:          
                        SIPCSUT,SIPCEDD,SIPCFDD,SIPCOQT,SIPCIQT,SIPCRQT:        
                        SIPCECT,SIPCGSTA,SIPCTCR,SIPCTGS,SIPCTIN,SIPCIGS:       
                        SIPCOQO,SIPCOOP,SIPCOGS,SIPCGST,SIPCUR1,SIPCUR2:        
                        SIPCUD1,SIPCUD2,SIPCUY1,SIPCUY2,SIPCSPA                 
          RETURN
.
ADSIPC    RESET     KEY19                                                       
          DELETE    SINAUDPC,KEY19;                                             
          RETURN
.
