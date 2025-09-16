.
. PMSENCIO    
. --------
. Filename     : pmsencaf.dat
.
RSPMENC1  RESET     KEY16                                                       
          READ      PMSENCA1,KEY16;;                                            
          RETURN
.
RAPMENC1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSENCA1,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMENC1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      PMSENCA1,KEY16;PMENVISN,PMENENCT,PMENSDEP,PMENSHCP,PMENSDAT:
                                   PMENSTIM,PMENLOCA,PMENSERV,PMENSRVD,PMENDIUN:
                                   PMENDBUN,PMENINUN,PMENIBUN,PMENCOMP,PMENBULK:
                                   PMENPURC,PMENCONT,PMENTYPE,PMENRSTA,PMENUDT1:
                                   PMENUTM1,PMENUDT2,PMENUTM2,PMENUDT3,PMENUTM3:
                                   PMENUDT4,PMENUTM4,PMENAHC1,PMENAHC2,PMENAHC3:
                                   PMENAHC4,PMENUHC1,PMENUHC2,PMENUHC3,PMENUHC4:
                                   PMENUDI1,PMENUDI2,PMENUDI3,PMENFFD1,PMENFFD2:
                                   PMENFFD3,PMENUDP1,PMENUDP2,PMENUDP3,PMENUYN1:
                                   PMENUYN2,PMENUYN3,PMENUYN4,PMENUYN5,PMENUYN6:
                                   PMENUYN7,PMENUYN8,PMENUYN9,PMENUFF1,PMENUFF2:
                                   PMENUFF3,PMENUC01,PMENUC02,PMENUC03,PMENUC04:
                                   PMENUC05,PMENUC06,PMENUC07,PMENUC08,PMENUC09:
                                   PMENUC10,PMENUC11,PMENUC12,PMENUC13,PMENUC14:
                                   PMENUC15,PMENUC16,PMENUC17,PMENUC18,PMENUC19:
                                   PMENUC20,PMENUC21,PMENUC22,PMENUC23,PMENUC24:
                                   PMENUC25,PMENUC26,PMENUC27,PMENUC28,PMENUC29:
                                   PMENUC30,PMENUC31,PMENUC32,PMENUC33,PMENUC34:
                                   PMENUC35,PMENUC36,PMENUC37,PMENUC38,PMENUC39:
                                   PMENUC40,PMENUF01,PMENUF02,PMENUF03,PMENUF04:
                                   PMENUF05,PMENUF06,PMENUF07,PMENUF08,PMENUF09:
                                   PMENUF10,PMENUF11,PMENUF12,PMENUF13,PMENUF14:
                                   PMENUF15,PMENUF16,PMENUF17,PMENUF18,PMENUF19:
                                   PMENUF20,PMENCMT1,PMENCMT2,PMENCDAT,PMENCTIM:
                                   PMENCUID,PMENUDAT,PMENUTIM,PMENUUID,PMENSSAC:
                                   PMENMOHR,PMENOUTC,PMENACCN,PMENSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMENC1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSENCA1;PMENVISN,PMENENCT,PMENSDEP,PMENSHCP,PMENSDAT:      
                             PMENSTIM,PMENLOCA,PMENSERV,PMENSRVD,PMENDIUN:      
                             PMENDBUN,PMENINUN,PMENIBUN,PMENCOMP,PMENBULK:      
                             PMENPURC,PMENCONT,PMENTYPE,PMENRSTA,PMENUDT1:      
                             PMENUTM1,PMENUDT2,PMENUTM2,PMENUDT3,PMENUTM3:      
                             PMENUDT4,PMENUTM4,PMENAHC1,PMENAHC2,PMENAHC3:      
                             PMENAHC4,PMENUHC1,PMENUHC2,PMENUHC3,PMENUHC4:      
                             PMENUDI1,PMENUDI2,PMENUDI3,PMENFFD1,PMENFFD2:      
                             PMENFFD3,PMENUDP1,PMENUDP2,PMENUDP3,PMENUYN1:      
                             PMENUYN2,PMENUYN3,PMENUYN4,PMENUYN5,PMENUYN6:      
                             PMENUYN7,PMENUYN8,PMENUYN9,PMENUFF1,PMENUFF2:      
                             PMENUFF3,PMENUC01,PMENUC02,PMENUC03,PMENUC04:      
                             PMENUC05,PMENUC06,PMENUC07,PMENUC08,PMENUC09:      
                             PMENUC10,PMENUC11,PMENUC12,PMENUC13,PMENUC14:      
                             PMENUC15,PMENUC16,PMENUC17,PMENUC18,PMENUC19:      
                             PMENUC20,PMENUC21,PMENUC22,PMENUC23,PMENUC24:      
                             PMENUC25,PMENUC26,PMENUC27,PMENUC28,PMENUC29:      
                             PMENUC30,PMENUC31,PMENUC32,PMENUC33,PMENUC34:      
                             PMENUC35,PMENUC36,PMENUC37,PMENUC38,PMENUC39:      
                             PMENUC40,PMENUF01,PMENUF02,PMENUF03,PMENUF04:      
                             PMENUF05,PMENUF06,PMENUF07,PMENUF08,PMENUF09:      
                             PMENUF10,PMENUF11,PMENUF12,PMENUF13,PMENUF14:      
                             PMENUF15,PMENUF16,PMENUF17,PMENUF18,PMENUF19:      
                             PMENUF20,PMENCMT1,PMENCMT2,PMENCDAT,PMENCTIM:      
                             PMENCUID,PMENUDAT,PMENUTIM,PMENUUID,PMENSSAC:      
                             PMENMOHR,PMENOUTC,PMENACCN,PMENSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMENC1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSENCA1;PMENVISN,PMENENCT,PMENSDEP,PMENSHCP,PMENSDAT:      
                             PMENSTIM,PMENLOCA,PMENSERV,PMENSRVD,PMENDIUN:      
                             PMENDBUN,PMENINUN,PMENIBUN,PMENCOMP,PMENBULK:      
                             PMENPURC,PMENCONT,PMENTYPE,PMENRSTA,PMENUDT1:      
                             PMENUTM1,PMENUDT2,PMENUTM2,PMENUDT3,PMENUTM3:      
                             PMENUDT4,PMENUTM4,PMENAHC1,PMENAHC2,PMENAHC3:      
                             PMENAHC4,PMENUHC1,PMENUHC2,PMENUHC3,PMENUHC4:      
                             PMENUDI1,PMENUDI2,PMENUDI3,PMENFFD1,PMENFFD2:      
                             PMENFFD3,PMENUDP1,PMENUDP2,PMENUDP3,PMENUYN1:      
                             PMENUYN2,PMENUYN3,PMENUYN4,PMENUYN5,PMENUYN6:      
                             PMENUYN7,PMENUYN8,PMENUYN9,PMENUFF1,PMENUFF2:      
                             PMENUFF3,PMENUC01,PMENUC02,PMENUC03,PMENUC04:      
                             PMENUC05,PMENUC06,PMENUC07,PMENUC08,PMENUC09:      
                             PMENUC10,PMENUC11,PMENUC12,PMENUC13,PMENUC14:      
                             PMENUC15,PMENUC16,PMENUC17,PMENUC18,PMENUC19:      
                             PMENUC20,PMENUC21,PMENUC22,PMENUC23,PMENUC24:      
                             PMENUC25,PMENUC26,PMENUC27,PMENUC28,PMENUC29:      
                             PMENUC30,PMENUC31,PMENUC32,PMENUC33,PMENUC34:      
                             PMENUC35,PMENUC36,PMENUC37,PMENUC38,PMENUC39:      
                             PMENUC40,PMENUF01,PMENUF02,PMENUF03,PMENUF04:      
                             PMENUF05,PMENUF06,PMENUF07,PMENUF08,PMENUF09:      
                             PMENUF10,PMENUF11,PMENUF12,PMENUF13,PMENUF14:      
                             PMENUF15,PMENUF16,PMENUF17,PMENUF18,PMENUF19:      
                             PMENUF20,PMENCMT1,PMENCMT2,PMENCDAT,PMENCTIM:      
                             PMENCUID,PMENUDAT,PMENUTIM,PMENUUID,PMENSSAC:      
                             PMENMOHR,PMENOUTC,PMENACCN,PMENSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMENC1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSENCA1;PMENVISN,PMENENCT,PMENSDEP,PMENSHCP,PMENSDAT:      
                             PMENSTIM,PMENLOCA,PMENSERV,PMENSRVD,PMENDIUN:      
                             PMENDBUN,PMENINUN,PMENIBUN,PMENCOMP,PMENBULK:      
                             PMENPURC,PMENCONT,PMENTYPE,PMENRSTA,PMENUDT1:      
                             PMENUTM1,PMENUDT2,PMENUTM2,PMENUDT3,PMENUTM3:      
                             PMENUDT4,PMENUTM4,PMENAHC1,PMENAHC2,PMENAHC3:      
                             PMENAHC4,PMENUHC1,PMENUHC2,PMENUHC3,PMENUHC4:      
                             PMENUDI1,PMENUDI2,PMENUDI3,PMENFFD1,PMENFFD2:      
                             PMENFFD3,PMENUDP1,PMENUDP2,PMENUDP3,PMENUYN1:      
                             PMENUYN2,PMENUYN3,PMENUYN4,PMENUYN5,PMENUYN6:      
                             PMENUYN7,PMENUYN8,PMENUYN9,PMENUFF1,PMENUFF2:      
                             PMENUFF3,PMENUC01,PMENUC02,PMENUC03,PMENUC04:      
                             PMENUC05,PMENUC06,PMENUC07,PMENUC08,PMENUC09:      
                             PMENUC10,PMENUC11,PMENUC12,PMENUC13,PMENUC14:      
                             PMENUC15,PMENUC16,PMENUC17,PMENUC18,PMENUC19:      
                             PMENUC20,PMENUC21,PMENUC22,PMENUC23,PMENUC24:      
                             PMENUC25,PMENUC26,PMENUC27,PMENUC28,PMENUC29:      
                             PMENUC30,PMENUC31,PMENUC32,PMENUC33,PMENUC34:      
                             PMENUC35,PMENUC36,PMENUC37,PMENUC38,PMENUC39:      
                             PMENUC40,PMENUF01,PMENUF02,PMENUF03,PMENUF04:      
                             PMENUF05,PMENUF06,PMENUF07,PMENUF08,PMENUF09:      
                             PMENUF10,PMENUF11,PMENUF12,PMENUF13,PMENUF14:      
                             PMENUF15,PMENUF16,PMENUF17,PMENUF18,PMENUF19:      
                             PMENUF20,PMENCMT1,PMENCMT2,PMENCDAT,PMENCTIM:      
                             PMENCUID,PMENUDAT,PMENUTIM,PMENUUID,PMENSSAC:      
                             PMENMOHR,PMENOUTC,PMENACCN,PMENSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMENC1  RESET     KEY16                                                       
          WRITE     PMSENCA1,KEY16;PMENVISN,PMENENCT,PMENSDEP,PMENSHCP,PMENSDAT:
                                   PMENSTIM,PMENLOCA,PMENSERV,PMENSRVD,PMENDIUN:
                                   PMENDBUN,PMENINUN,PMENIBUN,PMENCOMP,PMENBULK:
                                   PMENPURC,PMENCONT,PMENTYPE,PMENRSTA,PMENUDT1:
                                   PMENUTM1,PMENUDT2,PMENUTM2,PMENUDT3,PMENUTM3:
                                   PMENUDT4,PMENUTM4,PMENAHC1,PMENAHC2,PMENAHC3:
                                   PMENAHC4,PMENUHC1,PMENUHC2,PMENUHC3,PMENUHC4:
                                   PMENUDI1,PMENUDI2,PMENUDI3,PMENFFD1,PMENFFD2:
                                   PMENFFD3,PMENUDP1,PMENUDP2,PMENUDP3,PMENUYN1:
                                   PMENUYN2,PMENUYN3,PMENUYN4,PMENUYN5,PMENUYN6:
                                   PMENUYN7,PMENUYN8,PMENUYN9,PMENUFF1,PMENUFF2:
                                   PMENUFF3,PMENUC01,PMENUC02,PMENUC03,PMENUC04:
                                   PMENUC05,PMENUC06,PMENUC07,PMENUC08,PMENUC09:
                                   PMENUC10,PMENUC11,PMENUC12,PMENUC13,PMENUC14:
                                   PMENUC15,PMENUC16,PMENUC17,PMENUC18,PMENUC19:
                                   PMENUC20,PMENUC21,PMENUC22,PMENUC23,PMENUC24:
                                   PMENUC25,PMENUC26,PMENUC27,PMENUC28,PMENUC29:
                                   PMENUC30,PMENUC31,PMENUC32,PMENUC33,PMENUC34:
                                   PMENUC35,PMENUC36,PMENUC37,PMENUC38,PMENUC39:
                                   PMENUC40,PMENUF01,PMENUF02,PMENUF03,PMENUF04:
                                   PMENUF05,PMENUF06,PMENUF07,PMENUF08,PMENUF09:
                                   PMENUF10,PMENUF11,PMENUF12,PMENUF13,PMENUF14:
                                   PMENUF15,PMENUF16,PMENUF17,PMENUF18,PMENUF19:
                                   PMENUF20,PMENCMT1,PMENCMT2,PMENCDAT,PMENCTIM:
                                   PMENCUID,PMENUDAT,PMENUTIM,PMENUUID,PMENSSAC:
                                   PMENMOHR,PMENOUTC,PMENACCN,PMENSPAR          
          RETURN
.
DEPMENC1  RESET     KEY16                                                       
          DELETE    PMSENCA1,KEY16                                              
          RETURN
.
RLPMENC1  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     PMSENCA1,KEY16;PMENVISN,PMENENCT,PMENSDEP,PMENSHCP,PMENSDAT:
                                   PMENSTIM,PMENLOCA,PMENSERV,PMENSRVD,PMENDIUN:
                                   PMENDBUN,PMENINUN,PMENIBUN,PMENCOMP,PMENBULK:
                                   PMENPURC,PMENCONT,PMENTYPE,PMENRSTA,PMENUDT1:
                                   PMENUTM1,PMENUDT2,PMENUTM2,PMENUDT3,PMENUTM3:
                                   PMENUDT4,PMENUTM4,PMENAHC1,PMENAHC2,PMENAHC3:
                                   PMENAHC4,PMENUHC1,PMENUHC2,PMENUHC3,PMENUHC4:
                                   PMENUDI1,PMENUDI2,PMENUDI3,PMENFFD1,PMENFFD2:
                                   PMENFFD3,PMENUDP1,PMENUDP2,PMENUDP3,PMENUYN1:
                                   PMENUYN2,PMENUYN3,PMENUYN4,PMENUYN5,PMENUYN6:
                                   PMENUYN7,PMENUYN8,PMENUYN9,PMENUFF1,PMENUFF2:
                                   PMENUFF3,PMENUC01,PMENUC02,PMENUC03,PMENUC04:
                                   PMENUC05,PMENUC06,PMENUC07,PMENUC08,PMENUC09:
                                   PMENUC10,PMENUC11,PMENUC12,PMENUC13,PMENUC14:
                                   PMENUC15,PMENUC16,PMENUC17,PMENUC18,PMENUC19:
                                   PMENUC20,PMENUC21,PMENUC22,PMENUC23,PMENUC24:
                                   PMENUC25,PMENUC26,PMENUC27,PMENUC28,PMENUC29:
                                   PMENUC30,PMENUC31,PMENUC32,PMENUC33,PMENUC34:
                                   PMENUC35,PMENUC36,PMENUC37,PMENUC38,PMENUC39:
                                   PMENUC40,PMENUF01,PMENUF02,PMENUF03,PMENUF04:
                                   PMENUF05,PMENUF06,PMENUF07,PMENUF08,PMENUF09:
                                   PMENUF10,PMENUF11,PMENUF12,PMENUF13,PMENUF14:
                                   PMENUF15,PMENUF16,PMENUF17,PMENUF18,PMENUF19:
                                   PMENUF20,PMENCMT1,PMENCMT2,PMENCDAT,PMENCTIM:
                                   PMENCUID,PMENUDAT,PMENUTIM,PMENUUID,PMENSSAC:
                                   PMENMOHR,PMENOUTC,PMENACCN,PMENSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMENC1  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSENCA1;PMENVISN,PMENENCT,PMENSDEP,PMENSHCP,PMENSDAT:      
                             PMENSTIM,PMENLOCA,PMENSERV,PMENSRVD,PMENDIUN:      
                             PMENDBUN,PMENINUN,PMENIBUN,PMENCOMP,PMENBULK:      
                             PMENPURC,PMENCONT,PMENTYPE,PMENRSTA,PMENUDT1:      
                             PMENUTM1,PMENUDT2,PMENUTM2,PMENUDT3,PMENUTM3:      
                             PMENUDT4,PMENUTM4,PMENAHC1,PMENAHC2,PMENAHC3:      
                             PMENAHC4,PMENUHC1,PMENUHC2,PMENUHC3,PMENUHC4:      
                             PMENUDI1,PMENUDI2,PMENUDI3,PMENFFD1,PMENFFD2:      
                             PMENFFD3,PMENUDP1,PMENUDP2,PMENUDP3,PMENUYN1:      
                             PMENUYN2,PMENUYN3,PMENUYN4,PMENUYN5,PMENUYN6:      
                             PMENUYN7,PMENUYN8,PMENUYN9,PMENUFF1,PMENUFF2:      
                             PMENUFF3,PMENUC01,PMENUC02,PMENUC03,PMENUC04:      
                             PMENUC05,PMENUC06,PMENUC07,PMENUC08,PMENUC09:      
                             PMENUC10,PMENUC11,PMENUC12,PMENUC13,PMENUC14:      
                             PMENUC15,PMENUC16,PMENUC17,PMENUC18,PMENUC19:      
                             PMENUC20,PMENUC21,PMENUC22,PMENUC23,PMENUC24:      
                             PMENUC25,PMENUC26,PMENUC27,PMENUC28,PMENUC29:      
                             PMENUC30,PMENUC31,PMENUC32,PMENUC33,PMENUC34:      
                             PMENUC35,PMENUC36,PMENUC37,PMENUC38,PMENUC39:      
                             PMENUC40,PMENUF01,PMENUF02,PMENUF03,PMENUF04:      
                             PMENUF05,PMENUF06,PMENUF07,PMENUF08,PMENUF09:      
                             PMENUF10,PMENUF11,PMENUF12,PMENUF13,PMENUF14:      
                             PMENUF15,PMENUF16,PMENUF17,PMENUF18,PMENUF19:      
                             PMENUF20,PMENCMT1,PMENCMT2,PMENCDAT,PMENCTIM:      
                             PMENCUID,PMENUDAT,PMENUTIM,PMENUUID,PMENSSAC:      
                             PMENMOHR,PMENOUTC,PMENACCN,PMENSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMENC1  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSENCA1;PMENVISN,PMENENCT,PMENSDEP,PMENSHCP,PMENSDAT:      
                             PMENSTIM,PMENLOCA,PMENSERV,PMENSRVD,PMENDIUN:      
                             PMENDBUN,PMENINUN,PMENIBUN,PMENCOMP,PMENBULK:      
                             PMENPURC,PMENCONT,PMENTYPE,PMENRSTA,PMENUDT1:      
                             PMENUTM1,PMENUDT2,PMENUTM2,PMENUDT3,PMENUTM3:      
                             PMENUDT4,PMENUTM4,PMENAHC1,PMENAHC2,PMENAHC3:      
                             PMENAHC4,PMENUHC1,PMENUHC2,PMENUHC3,PMENUHC4:      
                             PMENUDI1,PMENUDI2,PMENUDI3,PMENFFD1,PMENFFD2:      
                             PMENFFD3,PMENUDP1,PMENUDP2,PMENUDP3,PMENUYN1:      
                             PMENUYN2,PMENUYN3,PMENUYN4,PMENUYN5,PMENUYN6:      
                             PMENUYN7,PMENUYN8,PMENUYN9,PMENUFF1,PMENUFF2:      
                             PMENUFF3,PMENUC01,PMENUC02,PMENUC03,PMENUC04:      
                             PMENUC05,PMENUC06,PMENUC07,PMENUC08,PMENUC09:      
                             PMENUC10,PMENUC11,PMENUC12,PMENUC13,PMENUC14:      
                             PMENUC15,PMENUC16,PMENUC17,PMENUC18,PMENUC19:      
                             PMENUC20,PMENUC21,PMENUC22,PMENUC23,PMENUC24:      
                             PMENUC25,PMENUC26,PMENUC27,PMENUC28,PMENUC29:      
                             PMENUC30,PMENUC31,PMENUC32,PMENUC33,PMENUC34:      
                             PMENUC35,PMENUC36,PMENUC37,PMENUC38,PMENUC39:      
                             PMENUC40,PMENUF01,PMENUF02,PMENUF03,PMENUF04:      
                             PMENUF05,PMENUF06,PMENUF07,PMENUF08,PMENUF09:      
                             PMENUF10,PMENUF11,PMENUF12,PMENUF13,PMENUF14:      
                             PMENUF15,PMENUF16,PMENUF17,PMENUF18,PMENUF19:      
                             PMENUF20,PMENCMT1,PMENCMT2,PMENCDAT,PMENCTIM:      
                             PMENCUID,PMENUDAT,PMENUTIM,PMENUUID,PMENSSAC:      
                             PMENMOHR,PMENOUTC,PMENACCN,PMENSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMENC1  RESET     KEY16                                                       
          UNLOCK    PMSENCA1                                                    
          RETURN
.
RSPMENC2  RESET     KEY32                                                       
          READ      PMSENCA2,KEY32;;                                            
          RETURN
.
RAPMENC2  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      PMSENCA2,KEY32;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMENC2  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READ      PMSENCA2,KEY32;PMENVISN,PMENENCT,PMENSDEP,PMENSHCP,PMENSDAT:
                                   PMENSTIM,PMENLOCA,PMENSERV,PMENSRVD,PMENDIUN:
                                   PMENDBUN,PMENINUN,PMENIBUN,PMENCOMP,PMENBULK:
                                   PMENPURC,PMENCONT,PMENTYPE,PMENRSTA,PMENUDT1:
                                   PMENUTM1,PMENUDT2,PMENUTM2,PMENUDT3,PMENUTM3:
                                   PMENUDT4,PMENUTM4,PMENAHC1,PMENAHC2,PMENAHC3:
                                   PMENAHC4,PMENUHC1,PMENUHC2,PMENUHC3,PMENUHC4:
                                   PMENUDI1,PMENUDI2,PMENUDI3,PMENFFD1,PMENFFD2:
                                   PMENFFD3,PMENUDP1,PMENUDP2,PMENUDP3,PMENUYN1:
                                   PMENUYN2,PMENUYN3,PMENUYN4,PMENUYN5,PMENUYN6:
                                   PMENUYN7,PMENUYN8,PMENUYN9,PMENUFF1,PMENUFF2:
                                   PMENUFF3,PMENUC01,PMENUC02,PMENUC03,PMENUC04:
                                   PMENUC05,PMENUC06,PMENUC07,PMENUC08,PMENUC09:
                                   PMENUC10,PMENUC11,PMENUC12,PMENUC13,PMENUC14:
                                   PMENUC15,PMENUC16,PMENUC17,PMENUC18,PMENUC19:
                                   PMENUC20,PMENUC21,PMENUC22,PMENUC23,PMENUC24:
                                   PMENUC25,PMENUC26,PMENUC27,PMENUC28,PMENUC29:
                                   PMENUC30,PMENUC31,PMENUC32,PMENUC33,PMENUC34:
                                   PMENUC35,PMENUC36,PMENUC37,PMENUC38,PMENUC39:
                                   PMENUC40,PMENUF01,PMENUF02,PMENUF03,PMENUF04:
                                   PMENUF05,PMENUF06,PMENUF07,PMENUF08,PMENUF09:
                                   PMENUF10,PMENUF11,PMENUF12,PMENUF13,PMENUF14:
                                   PMENUF15,PMENUF16,PMENUF17,PMENUF18,PMENUF19:
                                   PMENUF20,PMENCMT1,PMENCMT2,PMENCDAT,PMENCTIM:
                                   PMENCUID,PMENUDAT,PMENUTIM,PMENUUID,PMENSSAC:
                                   PMENMOHR,PMENOUTC,PMENACCN,PMENSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMENC2  MOVE      ZERO,OVRCD                                                  
          READKS    PMSENCA2;PMENVISN,PMENENCT,PMENSDEP,PMENSHCP,PMENSDAT:      
                             PMENSTIM,PMENLOCA,PMENSERV,PMENSRVD,PMENDIUN:      
                             PMENDBUN,PMENINUN,PMENIBUN,PMENCOMP,PMENBULK:      
                             PMENPURC,PMENCONT,PMENTYPE,PMENRSTA,PMENUDT1:      
                             PMENUTM1,PMENUDT2,PMENUTM2,PMENUDT3,PMENUTM3:      
                             PMENUDT4,PMENUTM4,PMENAHC1,PMENAHC2,PMENAHC3:      
                             PMENAHC4,PMENUHC1,PMENUHC2,PMENUHC3,PMENUHC4:      
                             PMENUDI1,PMENUDI2,PMENUDI3,PMENFFD1,PMENFFD2:      
                             PMENFFD3,PMENUDP1,PMENUDP2,PMENUDP3,PMENUYN1:      
                             PMENUYN2,PMENUYN3,PMENUYN4,PMENUYN5,PMENUYN6:      
                             PMENUYN7,PMENUYN8,PMENUYN9,PMENUFF1,PMENUFF2:      
                             PMENUFF3,PMENUC01,PMENUC02,PMENUC03,PMENUC04:      
                             PMENUC05,PMENUC06,PMENUC07,PMENUC08,PMENUC09:      
                             PMENUC10,PMENUC11,PMENUC12,PMENUC13,PMENUC14:      
                             PMENUC15,PMENUC16,PMENUC17,PMENUC18,PMENUC19:      
                             PMENUC20,PMENUC21,PMENUC22,PMENUC23,PMENUC24:      
                             PMENUC25,PMENUC26,PMENUC27,PMENUC28,PMENUC29:      
                             PMENUC30,PMENUC31,PMENUC32,PMENUC33,PMENUC34:      
                             PMENUC35,PMENUC36,PMENUC37,PMENUC38,PMENUC39:      
                             PMENUC40,PMENUF01,PMENUF02,PMENUF03,PMENUF04:      
                             PMENUF05,PMENUF06,PMENUF07,PMENUF08,PMENUF09:      
                             PMENUF10,PMENUF11,PMENUF12,PMENUF13,PMENUF14:      
                             PMENUF15,PMENUF16,PMENUF17,PMENUF18,PMENUF19:      
                             PMENUF20,PMENCMT1,PMENCMT2,PMENCDAT,PMENCTIM:      
                             PMENCUID,PMENUDAT,PMENUTIM,PMENUUID,PMENSSAC:      
                             PMENMOHR,PMENOUTC,PMENACCN,PMENSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMENC2  MOVE      ZERO,OVRCD                                                  
          READKP    PMSENCA2;PMENVISN,PMENENCT,PMENSDEP,PMENSHCP,PMENSDAT:      
                             PMENSTIM,PMENLOCA,PMENSERV,PMENSRVD,PMENDIUN:      
                             PMENDBUN,PMENINUN,PMENIBUN,PMENCOMP,PMENBULK:      
                             PMENPURC,PMENCONT,PMENTYPE,PMENRSTA,PMENUDT1:      
                             PMENUTM1,PMENUDT2,PMENUTM2,PMENUDT3,PMENUTM3:      
                             PMENUDT4,PMENUTM4,PMENAHC1,PMENAHC2,PMENAHC3:      
                             PMENAHC4,PMENUHC1,PMENUHC2,PMENUHC3,PMENUHC4:      
                             PMENUDI1,PMENUDI2,PMENUDI3,PMENFFD1,PMENFFD2:      
                             PMENFFD3,PMENUDP1,PMENUDP2,PMENUDP3,PMENUYN1:      
                             PMENUYN2,PMENUYN3,PMENUYN4,PMENUYN5,PMENUYN6:      
                             PMENUYN7,PMENUYN8,PMENUYN9,PMENUFF1,PMENUFF2:      
                             PMENUFF3,PMENUC01,PMENUC02,PMENUC03,PMENUC04:      
                             PMENUC05,PMENUC06,PMENUC07,PMENUC08,PMENUC09:      
                             PMENUC10,PMENUC11,PMENUC12,PMENUC13,PMENUC14:      
                             PMENUC15,PMENUC16,PMENUC17,PMENUC18,PMENUC19:      
                             PMENUC20,PMENUC21,PMENUC22,PMENUC23,PMENUC24:      
                             PMENUC25,PMENUC26,PMENUC27,PMENUC28,PMENUC29:      
                             PMENUC30,PMENUC31,PMENUC32,PMENUC33,PMENUC34:      
                             PMENUC35,PMENUC36,PMENUC37,PMENUC38,PMENUC39:      
                             PMENUC40,PMENUF01,PMENUF02,PMENUF03,PMENUF04:      
                             PMENUF05,PMENUF06,PMENUF07,PMENUF08,PMENUF09:      
                             PMENUF10,PMENUF11,PMENUF12,PMENUF13,PMENUF14:      
                             PMENUF15,PMENUF16,PMENUF17,PMENUF18,PMENUF19:      
                             PMENUF20,PMENCMT1,PMENCMT2,PMENCDAT,PMENCTIM:      
                             PMENCUID,PMENUDAT,PMENUTIM,PMENUUID,PMENSSAC:      
                             PMENMOHR,PMENOUTC,PMENACCN,PMENSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMENC2  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSENCA2;PMENVISN,PMENENCT,PMENSDEP,PMENSHCP,PMENSDAT:      
                             PMENSTIM,PMENLOCA,PMENSERV,PMENSRVD,PMENDIUN:      
                             PMENDBUN,PMENINUN,PMENIBUN,PMENCOMP,PMENBULK:      
                             PMENPURC,PMENCONT,PMENTYPE,PMENRSTA,PMENUDT1:      
                             PMENUTM1,PMENUDT2,PMENUTM2,PMENUDT3,PMENUTM3:      
                             PMENUDT4,PMENUTM4,PMENAHC1,PMENAHC2,PMENAHC3:      
                             PMENAHC4,PMENUHC1,PMENUHC2,PMENUHC3,PMENUHC4:      
                             PMENUDI1,PMENUDI2,PMENUDI3,PMENFFD1,PMENFFD2:      
                             PMENFFD3,PMENUDP1,PMENUDP2,PMENUDP3,PMENUYN1:      
                             PMENUYN2,PMENUYN3,PMENUYN4,PMENUYN5,PMENUYN6:      
                             PMENUYN7,PMENUYN8,PMENUYN9,PMENUFF1,PMENUFF2:      
                             PMENUFF3,PMENUC01,PMENUC02,PMENUC03,PMENUC04:      
                             PMENUC05,PMENUC06,PMENUC07,PMENUC08,PMENUC09:      
                             PMENUC10,PMENUC11,PMENUC12,PMENUC13,PMENUC14:      
                             PMENUC15,PMENUC16,PMENUC17,PMENUC18,PMENUC19:      
                             PMENUC20,PMENUC21,PMENUC22,PMENUC23,PMENUC24:      
                             PMENUC25,PMENUC26,PMENUC27,PMENUC28,PMENUC29:      
                             PMENUC30,PMENUC31,PMENUC32,PMENUC33,PMENUC34:      
                             PMENUC35,PMENUC36,PMENUC37,PMENUC38,PMENUC39:      
                             PMENUC40,PMENUF01,PMENUF02,PMENUF03,PMENUF04:      
                             PMENUF05,PMENUF06,PMENUF07,PMENUF08,PMENUF09:      
                             PMENUF10,PMENUF11,PMENUF12,PMENUF13,PMENUF14:      
                             PMENUF15,PMENUF16,PMENUF17,PMENUF18,PMENUF19:      
                             PMENUF20,PMENCMT1,PMENCMT2,PMENCDAT,PMENCTIM:      
                             PMENCUID,PMENUDAT,PMENUTIM,PMENUUID,PMENSSAC:      
                             PMENMOHR,PMENOUTC,PMENACCN,PMENSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMENC2  RESET     KEY32                                                       
          WRITE     PMSENCA2,KEY32;PMENVISN,PMENENCT,PMENSDEP,PMENSHCP,PMENSDAT:
                                   PMENSTIM,PMENLOCA,PMENSERV,PMENSRVD,PMENDIUN:
                                   PMENDBUN,PMENINUN,PMENIBUN,PMENCOMP,PMENBULK:
                                   PMENPURC,PMENCONT,PMENTYPE,PMENRSTA,PMENUDT1:
                                   PMENUTM1,PMENUDT2,PMENUTM2,PMENUDT3,PMENUTM3:
                                   PMENUDT4,PMENUTM4,PMENAHC1,PMENAHC2,PMENAHC3:
                                   PMENAHC4,PMENUHC1,PMENUHC2,PMENUHC3,PMENUHC4:
                                   PMENUDI1,PMENUDI2,PMENUDI3,PMENFFD1,PMENFFD2:
                                   PMENFFD3,PMENUDP1,PMENUDP2,PMENUDP3,PMENUYN1:
                                   PMENUYN2,PMENUYN3,PMENUYN4,PMENUYN5,PMENUYN6:
                                   PMENUYN7,PMENUYN8,PMENUYN9,PMENUFF1,PMENUFF2:
                                   PMENUFF3,PMENUC01,PMENUC02,PMENUC03,PMENUC04:
                                   PMENUC05,PMENUC06,PMENUC07,PMENUC08,PMENUC09:
                                   PMENUC10,PMENUC11,PMENUC12,PMENUC13,PMENUC14:
                                   PMENUC15,PMENUC16,PMENUC17,PMENUC18,PMENUC19:
                                   PMENUC20,PMENUC21,PMENUC22,PMENUC23,PMENUC24:
                                   PMENUC25,PMENUC26,PMENUC27,PMENUC28,PMENUC29:
                                   PMENUC30,PMENUC31,PMENUC32,PMENUC33,PMENUC34:
                                   PMENUC35,PMENUC36,PMENUC37,PMENUC38,PMENUC39:
                                   PMENUC40,PMENUF01,PMENUF02,PMENUF03,PMENUF04:
                                   PMENUF05,PMENUF06,PMENUF07,PMENUF08,PMENUF09:
                                   PMENUF10,PMENUF11,PMENUF12,PMENUF13,PMENUF14:
                                   PMENUF15,PMENUF16,PMENUF17,PMENUF18,PMENUF19:
                                   PMENUF20,PMENCMT1,PMENCMT2,PMENCDAT,PMENCTIM:
                                   PMENCUID,PMENUDAT,PMENUTIM,PMENUUID,PMENSSAC:
                                   PMENMOHR,PMENOUTC,PMENACCN,PMENSPAR          
          RETURN
.
DEPMENC2  RESET     KEY32                                                       
          DELETE    PMSENCA2,KEY32                                              
          RETURN
.
RLPMENC2  RESET     KEY32                                                       
          MOVE      ZERO,OVRCD
          READL     PMSENCA2,KEY32;PMENVISN,PMENENCT,PMENSDEP,PMENSHCP,PMENSDAT:
                                   PMENSTIM,PMENLOCA,PMENSERV,PMENSRVD,PMENDIUN:
                                   PMENDBUN,PMENINUN,PMENIBUN,PMENCOMP,PMENBULK:
                                   PMENPURC,PMENCONT,PMENTYPE,PMENRSTA,PMENUDT1:
                                   PMENUTM1,PMENUDT2,PMENUTM2,PMENUDT3,PMENUTM3:
                                   PMENUDT4,PMENUTM4,PMENAHC1,PMENAHC2,PMENAHC3:
                                   PMENAHC4,PMENUHC1,PMENUHC2,PMENUHC3,PMENUHC4:
                                   PMENUDI1,PMENUDI2,PMENUDI3,PMENFFD1,PMENFFD2:
                                   PMENFFD3,PMENUDP1,PMENUDP2,PMENUDP3,PMENUYN1:
                                   PMENUYN2,PMENUYN3,PMENUYN4,PMENUYN5,PMENUYN6:
                                   PMENUYN7,PMENUYN8,PMENUYN9,PMENUFF1,PMENUFF2:
                                   PMENUFF3,PMENUC01,PMENUC02,PMENUC03,PMENUC04:
                                   PMENUC05,PMENUC06,PMENUC07,PMENUC08,PMENUC09:
                                   PMENUC10,PMENUC11,PMENUC12,PMENUC13,PMENUC14:
                                   PMENUC15,PMENUC16,PMENUC17,PMENUC18,PMENUC19:
                                   PMENUC20,PMENUC21,PMENUC22,PMENUC23,PMENUC24:
                                   PMENUC25,PMENUC26,PMENUC27,PMENUC28,PMENUC29:
                                   PMENUC30,PMENUC31,PMENUC32,PMENUC33,PMENUC34:
                                   PMENUC35,PMENUC36,PMENUC37,PMENUC38,PMENUC39:
                                   PMENUC40,PMENUF01,PMENUF02,PMENUF03,PMENUF04:
                                   PMENUF05,PMENUF06,PMENUF07,PMENUF08,PMENUF09:
                                   PMENUF10,PMENUF11,PMENUF12,PMENUF13,PMENUF14:
                                   PMENUF15,PMENUF16,PMENUF17,PMENUF18,PMENUF19:
                                   PMENUF20,PMENCMT1,PMENCMT2,PMENCDAT,PMENCTIM:
                                   PMENCUID,PMENUDAT,PMENUTIM,PMENUUID,PMENSSAC:
                                   PMENMOHR,PMENOUTC,PMENACCN,PMENSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMENC2  MOVE      ZERO,OVRCD                                                  
          READLKS   PMSENCA2;PMENVISN,PMENENCT,PMENSDEP,PMENSHCP,PMENSDAT:      
                             PMENSTIM,PMENLOCA,PMENSERV,PMENSRVD,PMENDIUN:      
                             PMENDBUN,PMENINUN,PMENIBUN,PMENCOMP,PMENBULK:      
                             PMENPURC,PMENCONT,PMENTYPE,PMENRSTA,PMENUDT1:      
                             PMENUTM1,PMENUDT2,PMENUTM2,PMENUDT3,PMENUTM3:      
                             PMENUDT4,PMENUTM4,PMENAHC1,PMENAHC2,PMENAHC3:      
                             PMENAHC4,PMENUHC1,PMENUHC2,PMENUHC3,PMENUHC4:      
                             PMENUDI1,PMENUDI2,PMENUDI3,PMENFFD1,PMENFFD2:      
                             PMENFFD3,PMENUDP1,PMENUDP2,PMENUDP3,PMENUYN1:      
                             PMENUYN2,PMENUYN3,PMENUYN4,PMENUYN5,PMENUYN6:      
                             PMENUYN7,PMENUYN8,PMENUYN9,PMENUFF1,PMENUFF2:      
                             PMENUFF3,PMENUC01,PMENUC02,PMENUC03,PMENUC04:      
                             PMENUC05,PMENUC06,PMENUC07,PMENUC08,PMENUC09:      
                             PMENUC10,PMENUC11,PMENUC12,PMENUC13,PMENUC14:      
                             PMENUC15,PMENUC16,PMENUC17,PMENUC18,PMENUC19:      
                             PMENUC20,PMENUC21,PMENUC22,PMENUC23,PMENUC24:      
                             PMENUC25,PMENUC26,PMENUC27,PMENUC28,PMENUC29:      
                             PMENUC30,PMENUC31,PMENUC32,PMENUC33,PMENUC34:      
                             PMENUC35,PMENUC36,PMENUC37,PMENUC38,PMENUC39:      
                             PMENUC40,PMENUF01,PMENUF02,PMENUF03,PMENUF04:      
                             PMENUF05,PMENUF06,PMENUF07,PMENUF08,PMENUF09:      
                             PMENUF10,PMENUF11,PMENUF12,PMENUF13,PMENUF14:      
                             PMENUF15,PMENUF16,PMENUF17,PMENUF18,PMENUF19:      
                             PMENUF20,PMENCMT1,PMENCMT2,PMENCDAT,PMENCTIM:      
                             PMENCUID,PMENUDAT,PMENUTIM,PMENUUID,PMENSSAC:      
                             PMENMOHR,PMENOUTC,PMENACCN,PMENSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMENC2  MOVE      ZERO,OVRCD                                                  
          READLKP   PMSENCA2;PMENVISN,PMENENCT,PMENSDEP,PMENSHCP,PMENSDAT:      
                             PMENSTIM,PMENLOCA,PMENSERV,PMENSRVD,PMENDIUN:      
                             PMENDBUN,PMENINUN,PMENIBUN,PMENCOMP,PMENBULK:      
                             PMENPURC,PMENCONT,PMENTYPE,PMENRSTA,PMENUDT1:      
                             PMENUTM1,PMENUDT2,PMENUTM2,PMENUDT3,PMENUTM3:      
                             PMENUDT4,PMENUTM4,PMENAHC1,PMENAHC2,PMENAHC3:      
                             PMENAHC4,PMENUHC1,PMENUHC2,PMENUHC3,PMENUHC4:      
                             PMENUDI1,PMENUDI2,PMENUDI3,PMENFFD1,PMENFFD2:      
                             PMENFFD3,PMENUDP1,PMENUDP2,PMENUDP3,PMENUYN1:      
                             PMENUYN2,PMENUYN3,PMENUYN4,PMENUYN5,PMENUYN6:      
                             PMENUYN7,PMENUYN8,PMENUYN9,PMENUFF1,PMENUFF2:      
                             PMENUFF3,PMENUC01,PMENUC02,PMENUC03,PMENUC04:      
                             PMENUC05,PMENUC06,PMENUC07,PMENUC08,PMENUC09:      
                             PMENUC10,PMENUC11,PMENUC12,PMENUC13,PMENUC14:      
                             PMENUC15,PMENUC16,PMENUC17,PMENUC18,PMENUC19:      
                             PMENUC20,PMENUC21,PMENUC22,PMENUC23,PMENUC24:      
                             PMENUC25,PMENUC26,PMENUC27,PMENUC28,PMENUC29:      
                             PMENUC30,PMENUC31,PMENUC32,PMENUC33,PMENUC34:      
                             PMENUC35,PMENUC36,PMENUC37,PMENUC38,PMENUC39:      
                             PMENUC40,PMENUF01,PMENUF02,PMENUF03,PMENUF04:      
                             PMENUF05,PMENUF06,PMENUF07,PMENUF08,PMENUF09:      
                             PMENUF10,PMENUF11,PMENUF12,PMENUF13,PMENUF14:      
                             PMENUF15,PMENUF16,PMENUF17,PMENUF18,PMENUF19:      
                             PMENUF20,PMENCMT1,PMENCMT2,PMENCDAT,PMENCTIM:      
                             PMENCUID,PMENUDAT,PMENUTIM,PMENUUID,PMENSSAC:      
                             PMENMOHR,PMENOUTC,PMENACCN,PMENSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMENC2  RESET     KEY32                                                       
          UNLOCK    PMSENCA2                                                    
          RETURN
.
