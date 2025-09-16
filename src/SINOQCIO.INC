.
. SINOQCIO    
. --------
. Filename     : sinoqcaf.dat
.
RSSIQC1   RESET     KEY13                                                       
          READ      SINOQCA1,KEY13;;                                            
          RETURN
.
RASIQC1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      SINOQCA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIQC1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      SINOQCA1,KEY13;SIQCCST,SIQCRID,SIQCCAT,SIQCUNT,SIQCPD:      
                        SIQCPN,SIQCQTY,SIQCSTA,SIQCUID,SIQCDAT,SIQCTIM:         
                        SIQCPOR,SIQCPDT,SIQCPTM,SIQCPID,SIQCPPO,SIQCORI:        
                        SIQCPTY,SIQCPQT,SIQCECT,SIQCGSTA,SIQCCAN,SIQCORD:       
                        SIQCREQ,SIQCEDT,SIQCSUP,SIQCSUT,SIQCPGP,SIQCGST:        
                        SIQCCON,SIQCCDT,SIQCSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIQC1                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINOQCA1;SIQCCST,SIQCRID,SIQCCAT,SIQCUNT,SIQCPD:            
                        SIQCPN,SIQCQTY,SIQCSTA,SIQCUID,SIQCDAT,SIQCTIM:         
                        SIQCPOR,SIQCPDT,SIQCPTM,SIQCPID,SIQCPPO,SIQCORI:        
                        SIQCPTY,SIQCPQT,SIQCECT,SIQCGSTA,SIQCCAN,SIQCORD:       
                        SIQCREQ,SIQCEDT,SIQCSUP,SIQCSUT,SIQCPGP,SIQCGST:        
                        SIQCCON,SIQCCDT,SIQCSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIQC1                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINOQCA1;SIQCCST,SIQCRID,SIQCCAT,SIQCUNT,SIQCPD:            
                        SIQCPN,SIQCQTY,SIQCSTA,SIQCUID,SIQCDAT,SIQCTIM:         
                        SIQCPOR,SIQCPDT,SIQCPTM,SIQCPID,SIQCPPO,SIQCORI:        
                        SIQCPTY,SIQCPQT,SIQCECT,SIQCGSTA,SIQCCAN,SIQCORD:       
                        SIQCREQ,SIQCEDT,SIQCSUP,SIQCSUT,SIQCPGP,SIQCGST:        
                        SIQCCON,SIQCCDT,SIQCSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIQC1                                                                         
          UPDATE    SINOQCA1;SIQCCST,SIQCRID,SIQCCAT,SIQCUNT,SIQCPD:            
                        SIQCPN,SIQCQTY,SIQCSTA,SIQCUID,SIQCDAT,SIQCTIM:         
                        SIQCPOR,SIQCPDT,SIQCPTM,SIQCPID,SIQCPPO,SIQCORI:        
                        SIQCPTY,SIQCPQT,SIQCECT,SIQCGSTA,SIQCCAN,SIQCORD:       
                        SIQCREQ,SIQCEDT,SIQCSUP,SIQCSUT,SIQCPGP,SIQCGST:        
                        SIQCCON,SIQCCDT,SIQCSPA                                 
          RETURN
.
WRSIQC1   RESET     KEY13                                                       
          WRITE     SINOQCA1,KEY13;SIQCCST,SIQCRID,SIQCCAT,SIQCUNT,SIQCPD:      
                        SIQCPN,SIQCQTY,SIQCSTA,SIQCUID,SIQCDAT,SIQCTIM:         
                        SIQCPOR,SIQCPDT,SIQCPTM,SIQCPID,SIQCPPO,SIQCORI:        
                        SIQCPTY,SIQCPQT,SIQCECT,SIQCGSTA,SIQCCAN,SIQCORD:       
                        SIQCREQ,SIQCEDT,SIQCSUP,SIQCSUT,SIQCPGP,SIQCGST:        
                        SIQCCON,SIQCCDT,SIQCSPA                                 
          RETURN
.
DESIQC1   RESET     KEY13                                                       
          DELETE    SINOQCA1,KEY13                                              
          RETURN
.
RSSIQC2   RESET     KEY21                                                       
          READ      SINOQCA2,KEY21;;                                            
          RETURN
.
RASIQC2   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      SINOQCA2,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIQC2   RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      SINOQCA2,KEY21;SIQCCST,SIQCRID,SIQCCAT,SIQCUNT,SIQCPD:      
                        SIQCPN,SIQCQTY,SIQCSTA,SIQCUID,SIQCDAT,SIQCTIM:         
                        SIQCPOR,SIQCPDT,SIQCPTM,SIQCPID,SIQCPPO,SIQCORI:        
                        SIQCPTY,SIQCPQT,SIQCECT,SIQCGSTA,SIQCCAN,SIQCORD:       
                        SIQCREQ,SIQCEDT,SIQCSUP,SIQCSUT,SIQCPGP,SIQCGST:        
                        SIQCCON,SIQCCDT,SIQCSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIQC2                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINOQCA2;SIQCCST,SIQCRID,SIQCCAT,SIQCUNT,SIQCPD:            
                        SIQCPN,SIQCQTY,SIQCSTA,SIQCUID,SIQCDAT,SIQCTIM:         
                        SIQCPOR,SIQCPDT,SIQCPTM,SIQCPID,SIQCPPO,SIQCORI:        
                        SIQCPTY,SIQCPQT,SIQCECT,SIQCGSTA,SIQCCAN,SIQCORD:       
                        SIQCREQ,SIQCEDT,SIQCSUP,SIQCSUT,SIQCPGP,SIQCGST:        
                        SIQCCON,SIQCCDT,SIQCSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIQC2                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINOQCA2;SIQCCST,SIQCRID,SIQCCAT,SIQCUNT,SIQCPD:            
                        SIQCPN,SIQCQTY,SIQCSTA,SIQCUID,SIQCDAT,SIQCTIM:         
                        SIQCPOR,SIQCPDT,SIQCPTM,SIQCPID,SIQCPPO,SIQCORI:        
                        SIQCPTY,SIQCPQT,SIQCECT,SIQCGSTA,SIQCCAN,SIQCORD:       
                        SIQCREQ,SIQCEDT,SIQCSUP,SIQCSUT,SIQCPGP,SIQCGST:        
                        SIQCCON,SIQCCDT,SIQCSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIQC2                                                                         
          UPDATE    SINOQCA2;SIQCCST,SIQCRID,SIQCCAT,SIQCUNT,SIQCPD:            
                        SIQCPN,SIQCQTY,SIQCSTA,SIQCUID,SIQCDAT,SIQCTIM:         
                        SIQCPOR,SIQCPDT,SIQCPTM,SIQCPID,SIQCPPO,SIQCORI:        
                        SIQCPTY,SIQCPQT,SIQCECT,SIQCGSTA,SIQCCAN,SIQCORD:       
                        SIQCREQ,SIQCEDT,SIQCSUP,SIQCSUT,SIQCPGP,SIQCGST:        
                        SIQCCON,SIQCCDT,SIQCSPA                                 
          RETURN
.
WRSIQC2   RESET     KEY21                                                       
          WRITE     SINOQCA2,KEY21;SIQCCST,SIQCRID,SIQCCAT,SIQCUNT,SIQCPD:      
                        SIQCPN,SIQCQTY,SIQCSTA,SIQCUID,SIQCDAT,SIQCTIM:         
                        SIQCPOR,SIQCPDT,SIQCPTM,SIQCPID,SIQCPPO,SIQCORI:        
                        SIQCPTY,SIQCPQT,SIQCECT,SIQCGSTA,SIQCCAN,SIQCORD:       
                        SIQCREQ,SIQCEDT,SIQCSUP,SIQCSUT,SIQCPGP,SIQCGST:        
                        SIQCCON,SIQCCDT,SIQCSPA                                 
          RETURN
.
DESIQC2   RESET     KEY21                                                       
          DELETE    SINOQCA2,KEY21                                              
          RETURN
.
RSSIQC3   RESET     KEY55                                                       
          READ      SINOQCA3,KEY55;;                                            
          RETURN
.
RASIQC3   RESET     KEY55                                                       
          MOVE      ZERO,OVRCD
          READ      SINOQCA3,KEY55;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIQC3   RESET     KEY55                                                       
          MOVE      ZERO,OVRCD
          READ      SINOQCA3,KEY55;SIQCCST,SIQCRID,SIQCCAT,SIQCUNT,SIQCPD:      
                        SIQCPN,SIQCQTY,SIQCSTA,SIQCUID,SIQCDAT,SIQCTIM:         
                        SIQCPOR,SIQCPDT,SIQCPTM,SIQCPID,SIQCPPO,SIQCORI:        
                        SIQCPTY,SIQCPQT,SIQCECT,SIQCGSTA,SIQCCAN,SIQCORD:       
                        SIQCREQ,SIQCEDT,SIQCSUP,SIQCSUT,SIQCPGP,SIQCGST:        
                        SIQCCON,SIQCCDT,SIQCSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIQC3                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINOQCA3;SIQCCST,SIQCRID,SIQCCAT,SIQCUNT,SIQCPD:            
                        SIQCPN,SIQCQTY,SIQCSTA,SIQCUID,SIQCDAT,SIQCTIM:         
                        SIQCPOR,SIQCPDT,SIQCPTM,SIQCPID,SIQCPPO,SIQCORI:        
                        SIQCPTY,SIQCPQT,SIQCECT,SIQCGSTA,SIQCCAN,SIQCORD:       
                        SIQCREQ,SIQCEDT,SIQCSUP,SIQCSUT,SIQCPGP,SIQCGST:        
                        SIQCCON,SIQCCDT,SIQCSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIQC3                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINOQCA3;SIQCCST,SIQCRID,SIQCCAT,SIQCUNT,SIQCPD:            
                        SIQCPN,SIQCQTY,SIQCSTA,SIQCUID,SIQCDAT,SIQCTIM:         
                        SIQCPOR,SIQCPDT,SIQCPTM,SIQCPID,SIQCPPO,SIQCORI:        
                        SIQCPTY,SIQCPQT,SIQCECT,SIQCGSTA,SIQCCAN,SIQCORD:       
                        SIQCREQ,SIQCEDT,SIQCSUP,SIQCSUT,SIQCPGP,SIQCGST:        
                        SIQCCON,SIQCCDT,SIQCSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIQC3                                                                         
          UPDATE    SINOQCA3;SIQCCST,SIQCRID,SIQCCAT,SIQCUNT,SIQCPD:            
                        SIQCPN,SIQCQTY,SIQCSTA,SIQCUID,SIQCDAT,SIQCTIM:         
                        SIQCPOR,SIQCPDT,SIQCPTM,SIQCPID,SIQCPPO,SIQCORI:        
                        SIQCPTY,SIQCPQT,SIQCECT,SIQCGSTA,SIQCCAN,SIQCORD:       
                        SIQCREQ,SIQCEDT,SIQCSUP,SIQCSUT,SIQCPGP,SIQCGST:        
                        SIQCCON,SIQCCDT,SIQCSPA                                 
          RETURN
.
WRSIQC3   RESET     KEY55                                                       
          WRITE     SINOQCA3,KEY55;SIQCCST,SIQCRID,SIQCCAT,SIQCUNT,SIQCPD:      
                        SIQCPN,SIQCQTY,SIQCSTA,SIQCUID,SIQCDAT,SIQCTIM:         
                        SIQCPOR,SIQCPDT,SIQCPTM,SIQCPID,SIQCPPO,SIQCORI:        
                        SIQCPTY,SIQCPQT,SIQCECT,SIQCGSTA,SIQCCAN,SIQCORD:       
                        SIQCREQ,SIQCEDT,SIQCSUP,SIQCSUT,SIQCPGP,SIQCGST:        
                        SIQCCON,SIQCCDT,SIQCSPA                                 
          RETURN
.
DESIQC3   RESET     KEY55                                                       
          DELETE    SINOQCA3,KEY55                                              
          RETURN
.
RSSIQC4   RESET     KEY55                                                       
          READ      SINOQCA4,KEY55;;                                            
          RETURN
.
RASIQC4   RESET     KEY55                                                       
          MOVE      ZERO,OVRCD
          READ      SINOQCA4,KEY55;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSIQC4   RESET     KEY55                                                       
          MOVE      ZERO,OVRCD
          READ      SINOQCA4,KEY55;SIQCCST,SIQCRID,SIQCCAT,SIQCUNT,SIQCPD:      
                        SIQCPN,SIQCQTY,SIQCSTA,SIQCUID,SIQCDAT,SIQCTIM:         
                        SIQCPOR,SIQCPDT,SIQCPTM,SIQCPID,SIQCPPO,SIQCORI:        
                        SIQCPTY,SIQCPQT,SIQCECT,SIQCGSTA,SIQCCAN,SIQCORD:       
                        SIQCREQ,SIQCEDT,SIQCSUP,SIQCSUT,SIQCPGP,SIQCGST:        
                        SIQCCON,SIQCCDT,SIQCSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKSIQC4                                                                         
          MOVE      ZERO,OVRCD
          READKS    SINOQCA4;SIQCCST,SIQCRID,SIQCCAT,SIQCUNT,SIQCPD:            
                        SIQCPN,SIQCQTY,SIQCSTA,SIQCUID,SIQCDAT,SIQCTIM:         
                        SIQCPOR,SIQCPDT,SIQCPTM,SIQCPID,SIQCPPO,SIQCORI:        
                        SIQCPTY,SIQCPQT,SIQCECT,SIQCGSTA,SIQCCAN,SIQCORD:       
                        SIQCREQ,SIQCEDT,SIQCSUP,SIQCSUT,SIQCPGP,SIQCGST:        
                        SIQCCON,SIQCCDT,SIQCSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPSIQC4                                                                         
          MOVE      ZERO,OVRCD
          READKP    SINOQCA4;SIQCCST,SIQCRID,SIQCCAT,SIQCUNT,SIQCPD:            
                        SIQCPN,SIQCQTY,SIQCSTA,SIQCUID,SIQCDAT,SIQCTIM:         
                        SIQCPOR,SIQCPDT,SIQCPTM,SIQCPID,SIQCPPO,SIQCORI:        
                        SIQCPTY,SIQCPQT,SIQCECT,SIQCGSTA,SIQCCAN,SIQCORD:       
                        SIQCREQ,SIQCEDT,SIQCSUP,SIQCSUT,SIQCPGP,SIQCGST:        
                        SIQCCON,SIQCCDT,SIQCSPA                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPSIQC4                                                                         
          UPDATE    SINOQCA4;SIQCCST,SIQCRID,SIQCCAT,SIQCUNT,SIQCPD:            
                        SIQCPN,SIQCQTY,SIQCSTA,SIQCUID,SIQCDAT,SIQCTIM:         
                        SIQCPOR,SIQCPDT,SIQCPTM,SIQCPID,SIQCPPO,SIQCORI:        
                        SIQCPTY,SIQCPQT,SIQCECT,SIQCGSTA,SIQCCAN,SIQCORD:       
                        SIQCREQ,SIQCEDT,SIQCSUP,SIQCSUT,SIQCPGP,SIQCGST:        
                        SIQCCON,SIQCCDT,SIQCSPA                                 
          RETURN
.
WRSIQC4   RESET     KEY55                                                       
          WRITE     SINOQCA4,KEY55;SIQCCST,SIQCRID,SIQCCAT,SIQCUNT,SIQCPD:      
                        SIQCPN,SIQCQTY,SIQCSTA,SIQCUID,SIQCDAT,SIQCTIM:         
                        SIQCPOR,SIQCPDT,SIQCPTM,SIQCPID,SIQCPPO,SIQCORI:        
                        SIQCPTY,SIQCPQT,SIQCECT,SIQCGSTA,SIQCCAN,SIQCORD:       
                        SIQCREQ,SIQCEDT,SIQCSUP,SIQCSUT,SIQCPGP,SIQCGST:        
                        SIQCCON,SIQCCDT,SIQCSPA                                 
          RETURN
.
DESIQC4   RESET     KEY55                                                       
          DELETE    SINOQCA4,KEY55                                              
          RETURN
.
