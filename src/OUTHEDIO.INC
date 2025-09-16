.
. OUTHEDIO    
. --------
. Filename     : outhedaf.dat
.
RSOTHED1  RESET     KEY28                                                       
          READ      OUTHEDA1,KEY28;;                                            
          RETURN
.
RAOTHED1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      OUTHEDA1,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTHED1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      OUTHEDA1,KEY28;OTHESITE,OTHECLIN,OTHEWDAY,OTHESTRT,OTHESHNO:
                                   OTHESDAT,OTHEDTCC,OTHECOM1,OTHECOM2,OTHEINS1:
                                   OTHEINS2,OTHEINS3,OTHEDURN,OTHEBFIN,OTHESEND:
                                   OTHELTYP,OTHECLSE,OTHEHOSP,OTHELOCN,OTHECTYP:
                                   OTHECIND,OTHEGBOK,OTHEADEP,OTHECENC,OTHEKDOC:
                                   OTHEDEFD,OTHECCAR,OTHECTRN,OTHENDPS,OTHECPMI:
                                   OTHECPAG,OTHECTEL,OTHENMDS,OTHECART,OTHESRVD:
                                   OTHECLHR,OTHEMLTD,OTHEXPUL,OTHEMREF,OTHEHPIO:
                                   OTHETCOD,OTHETCED,OTHEHCLI,OTHEHCAI,OTHEAOPN:
                                   OTHEAOFR,OTHEAOWM,OTHEAAOW,OTHEDATE,OTHEHCP1:
                                   OTHEHCP2,OTHEHCP3,OTHEHCP4,OTHESPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTHED1  MOVE      ZERO,OVRCD                                                  
          READKS    OUTHEDA1;OTHESITE,OTHECLIN,OTHEWDAY,OTHESTRT,OTHESHNO:      
                             OTHESDAT,OTHEDTCC,OTHECOM1,OTHECOM2,OTHEINS1:      
                             OTHEINS2,OTHEINS3,OTHEDURN,OTHEBFIN,OTHESEND:      
                             OTHELTYP,OTHECLSE,OTHEHOSP,OTHELOCN,OTHECTYP:      
                             OTHECIND,OTHEGBOK,OTHEADEP,OTHECENC,OTHEKDOC:      
                             OTHEDEFD,OTHECCAR,OTHECTRN,OTHENDPS,OTHECPMI:      
                             OTHECPAG,OTHECTEL,OTHENMDS,OTHECART,OTHESRVD:      
                             OTHECLHR,OTHEMLTD,OTHEXPUL,OTHEMREF,OTHEHPIO:      
                             OTHETCOD,OTHETCED,OTHEHCLI,OTHEHCAI,OTHEAOPN:      
                             OTHEAOFR,OTHEAOWM,OTHEAAOW,OTHEDATE,OTHEHCP1:      
                             OTHEHCP2,OTHEHCP3,OTHEHCP4,OTHESPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTHED1  MOVE      ZERO,OVRCD                                                  
          READKP    OUTHEDA1;OTHESITE,OTHECLIN,OTHEWDAY,OTHESTRT,OTHESHNO:      
                             OTHESDAT,OTHEDTCC,OTHECOM1,OTHECOM2,OTHEINS1:      
                             OTHEINS2,OTHEINS3,OTHEDURN,OTHEBFIN,OTHESEND:      
                             OTHELTYP,OTHECLSE,OTHEHOSP,OTHELOCN,OTHECTYP:      
                             OTHECIND,OTHEGBOK,OTHEADEP,OTHECENC,OTHEKDOC:      
                             OTHEDEFD,OTHECCAR,OTHECTRN,OTHENDPS,OTHECPMI:      
                             OTHECPAG,OTHECTEL,OTHENMDS,OTHECART,OTHESRVD:      
                             OTHECLHR,OTHEMLTD,OTHEXPUL,OTHEMREF,OTHEHPIO:      
                             OTHETCOD,OTHETCED,OTHEHCLI,OTHEHCAI,OTHEAOPN:      
                             OTHEAOFR,OTHEAOWM,OTHEAAOW,OTHEDATE,OTHEHCP1:      
                             OTHEHCP2,OTHEHCP3,OTHEHCP4,OTHESPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTHED1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTHEDA1;OTHESITE,OTHECLIN,OTHEWDAY,OTHESTRT,OTHESHNO:      
                             OTHESDAT,OTHEDTCC,OTHECOM1,OTHECOM2,OTHEINS1:      
                             OTHEINS2,OTHEINS3,OTHEDURN,OTHEBFIN,OTHESEND:      
                             OTHELTYP,OTHECLSE,OTHEHOSP,OTHELOCN,OTHECTYP:      
                             OTHECIND,OTHEGBOK,OTHEADEP,OTHECENC,OTHEKDOC:      
                             OTHEDEFD,OTHECCAR,OTHECTRN,OTHENDPS,OTHECPMI:      
                             OTHECPAG,OTHECTEL,OTHENMDS,OTHECART,OTHESRVD:      
                             OTHECLHR,OTHEMLTD,OTHEXPUL,OTHEMREF,OTHEHPIO:      
                             OTHETCOD,OTHETCED,OTHEHCLI,OTHEHCAI,OTHEAOPN:      
                             OTHEAOFR,OTHEAOWM,OTHEAAOW,OTHEDATE,OTHEHCP1:      
                             OTHEHCP2,OTHEHCP3,OTHEHCP4,OTHESPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROTHED1  RESET     KEY28                                                       
          WRITE     OUTHEDA1,KEY28;OTHESITE,OTHECLIN,OTHEWDAY,OTHESTRT,OTHESHNO:
                                   OTHESDAT,OTHEDTCC,OTHECOM1,OTHECOM2,OTHEINS1:
                                   OTHEINS2,OTHEINS3,OTHEDURN,OTHEBFIN,OTHESEND:
                                   OTHELTYP,OTHECLSE,OTHEHOSP,OTHELOCN,OTHECTYP:
                                   OTHECIND,OTHEGBOK,OTHEADEP,OTHECENC,OTHEKDOC:
                                   OTHEDEFD,OTHECCAR,OTHECTRN,OTHENDPS,OTHECPMI:
                                   OTHECPAG,OTHECTEL,OTHENMDS,OTHECART,OTHESRVD:
                                   OTHECLHR,OTHEMLTD,OTHEXPUL,OTHEMREF,OTHEHPIO:
                                   OTHETCOD,OTHETCED,OTHEHCLI,OTHEHCAI,OTHEAOPN:
                                   OTHEAOFR,OTHEAOWM,OTHEAAOW,OTHEDATE,OTHEHCP1:
                                   OTHEHCP2,OTHEHCP3,OTHEHCP4,OTHESPAR          
          RETURN
.
DEOTHED1  RESET     KEY28                                                       
          DELETE    OUTHEDA1,KEY28                                              
          RETURN
.
RLOTHED1  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READL     OUTHEDA1,KEY28;OTHESITE,OTHECLIN,OTHEWDAY,OTHESTRT,OTHESHNO:
                                   OTHESDAT,OTHEDTCC,OTHECOM1,OTHECOM2,OTHEINS1:
                                   OTHEINS2,OTHEINS3,OTHEDURN,OTHEBFIN,OTHESEND:
                                   OTHELTYP,OTHECLSE,OTHEHOSP,OTHELOCN,OTHECTYP:
                                   OTHECIND,OTHEGBOK,OTHEADEP,OTHECENC,OTHEKDOC:
                                   OTHEDEFD,OTHECCAR,OTHECTRN,OTHENDPS,OTHECPMI:
                                   OTHECPAG,OTHECTEL,OTHENMDS,OTHECART,OTHESRVD:
                                   OTHECLHR,OTHEMLTD,OTHEXPUL,OTHEMREF,OTHEHPIO:
                                   OTHETCOD,OTHETCED,OTHEHCLI,OTHEHCAI,OTHEAOPN:
                                   OTHEAOFR,OTHEAOWM,OTHEAAOW,OTHEDATE,OTHEHCP1:
                                   OTHEHCP2,OTHEHCP3,OTHEHCP4,OTHESPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOTHED1  MOVE      ZERO,OVRCD                                                  
          READLKS   OUTHEDA1;OTHESITE,OTHECLIN,OTHEWDAY,OTHESTRT,OTHESHNO:      
                             OTHESDAT,OTHEDTCC,OTHECOM1,OTHECOM2,OTHEINS1:      
                             OTHEINS2,OTHEINS3,OTHEDURN,OTHEBFIN,OTHESEND:      
                             OTHELTYP,OTHECLSE,OTHEHOSP,OTHELOCN,OTHECTYP:      
                             OTHECIND,OTHEGBOK,OTHEADEP,OTHECENC,OTHEKDOC:      
                             OTHEDEFD,OTHECCAR,OTHECTRN,OTHENDPS,OTHECPMI:      
                             OTHECPAG,OTHECTEL,OTHENMDS,OTHECART,OTHESRVD:      
                             OTHECLHR,OTHEMLTD,OTHEXPUL,OTHEMREF,OTHEHPIO:      
                             OTHETCOD,OTHETCED,OTHEHCLI,OTHEHCAI,OTHEAOPN:      
                             OTHEAOFR,OTHEAOWM,OTHEAAOW,OTHEDATE,OTHEHCP1:      
                             OTHEHCP2,OTHEHCP3,OTHEHCP4,OTHESPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOTHED1  MOVE      ZERO,OVRCD                                                  
          READLKP   OUTHEDA1;OTHESITE,OTHECLIN,OTHEWDAY,OTHESTRT,OTHESHNO:      
                             OTHESDAT,OTHEDTCC,OTHECOM1,OTHECOM2,OTHEINS1:      
                             OTHEINS2,OTHEINS3,OTHEDURN,OTHEBFIN,OTHESEND:      
                             OTHELTYP,OTHECLSE,OTHEHOSP,OTHELOCN,OTHECTYP:      
                             OTHECIND,OTHEGBOK,OTHEADEP,OTHECENC,OTHEKDOC:      
                             OTHEDEFD,OTHECCAR,OTHECTRN,OTHENDPS,OTHECPMI:      
                             OTHECPAG,OTHECTEL,OTHENMDS,OTHECART,OTHESRVD:      
                             OTHECLHR,OTHEMLTD,OTHEXPUL,OTHEMREF,OTHEHPIO:      
                             OTHETCOD,OTHETCED,OTHEHCLI,OTHEHCAI,OTHEAOPN:      
                             OTHEAOFR,OTHEAOWM,OTHEAAOW,OTHEDATE,OTHEHCP1:      
                             OTHEHCP2,OTHEHCP3,OTHEHCP4,OTHESPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOTHED1  RESET     KEY28                                                       
          UNLOCK    OUTHEDA1                                                    
          RETURN
.
RSOTHED2  RESET     KEY31                                                       
          READ      OUTHEDA2,KEY31;;                                            
          RETURN
.
RAOTHED2  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      OUTHEDA2,KEY31;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTHED2  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READ      OUTHEDA2,KEY31;OTHESITE,OTHECLIN,OTHEWDAY,OTHESTRT,OTHESHNO:
                                   OTHESDAT,OTHEDTCC,OTHECOM1,OTHECOM2,OTHEINS1:
                                   OTHEINS2,OTHEINS3,OTHEDURN,OTHEBFIN,OTHESEND:
                                   OTHELTYP,OTHECLSE,OTHEHOSP,OTHELOCN,OTHECTYP:
                                   OTHECIND,OTHEGBOK,OTHEADEP,OTHECENC,OTHEKDOC:
                                   OTHEDEFD,OTHECCAR,OTHECTRN,OTHENDPS,OTHECPMI:
                                   OTHECPAG,OTHECTEL,OTHENMDS,OTHECART,OTHESRVD:
                                   OTHECLHR,OTHEMLTD,OTHEXPUL,OTHEMREF,OTHEHPIO:
                                   OTHETCOD,OTHETCED,OTHEHCLI,OTHEHCAI,OTHEAOPN:
                                   OTHEAOFR,OTHEAOWM,OTHEAAOW,OTHEDATE,OTHEHCP1:
                                   OTHEHCP2,OTHEHCP3,OTHEHCP4,OTHESPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOTHED2  MOVE      ZERO,OVRCD                                                  
          READKS    OUTHEDA2;OTHESITE,OTHECLIN,OTHEWDAY,OTHESTRT,OTHESHNO:      
                             OTHESDAT,OTHEDTCC,OTHECOM1,OTHECOM2,OTHEINS1:      
                             OTHEINS2,OTHEINS3,OTHEDURN,OTHEBFIN,OTHESEND:      
                             OTHELTYP,OTHECLSE,OTHEHOSP,OTHELOCN,OTHECTYP:      
                             OTHECIND,OTHEGBOK,OTHEADEP,OTHECENC,OTHEKDOC:      
                             OTHEDEFD,OTHECCAR,OTHECTRN,OTHENDPS,OTHECPMI:      
                             OTHECPAG,OTHECTEL,OTHENMDS,OTHECART,OTHESRVD:      
                             OTHECLHR,OTHEMLTD,OTHEXPUL,OTHEMREF,OTHEHPIO:      
                             OTHETCOD,OTHETCED,OTHEHCLI,OTHEHCAI,OTHEAOPN:      
                             OTHEAOFR,OTHEAOWM,OTHEAAOW,OTHEDATE,OTHEHCP1:      
                             OTHEHCP2,OTHEHCP3,OTHEHCP4,OTHESPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOTHED2  MOVE      ZERO,OVRCD                                                  
          READKP    OUTHEDA2;OTHESITE,OTHECLIN,OTHEWDAY,OTHESTRT,OTHESHNO:      
                             OTHESDAT,OTHEDTCC,OTHECOM1,OTHECOM2,OTHEINS1:      
                             OTHEINS2,OTHEINS3,OTHEDURN,OTHEBFIN,OTHESEND:      
                             OTHELTYP,OTHECLSE,OTHEHOSP,OTHELOCN,OTHECTYP:      
                             OTHECIND,OTHEGBOK,OTHEADEP,OTHECENC,OTHEKDOC:      
                             OTHEDEFD,OTHECCAR,OTHECTRN,OTHENDPS,OTHECPMI:      
                             OTHECPAG,OTHECTEL,OTHENMDS,OTHECART,OTHESRVD:      
                             OTHECLHR,OTHEMLTD,OTHEXPUL,OTHEMREF,OTHEHPIO:      
                             OTHETCOD,OTHETCED,OTHEHCLI,OTHEHCAI,OTHEAOPN:      
                             OTHEAOFR,OTHEAOWM,OTHEAAOW,OTHEDATE,OTHEHCP1:      
                             OTHEHCP2,OTHEHCP3,OTHEHCP4,OTHESPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOTHED2  MOVE      ZERO,OVRCD                                                  
          UPDATE    OUTHEDA2;OTHESITE,OTHECLIN,OTHEWDAY,OTHESTRT,OTHESHNO:      
                             OTHESDAT,OTHEDTCC,OTHECOM1,OTHECOM2,OTHEINS1:      
                             OTHEINS2,OTHEINS3,OTHEDURN,OTHEBFIN,OTHESEND:      
                             OTHELTYP,OTHECLSE,OTHEHOSP,OTHELOCN,OTHECTYP:      
                             OTHECIND,OTHEGBOK,OTHEADEP,OTHECENC,OTHEKDOC:      
                             OTHEDEFD,OTHECCAR,OTHECTRN,OTHENDPS,OTHECPMI:      
                             OTHECPAG,OTHECTEL,OTHENMDS,OTHECART,OTHESRVD:      
                             OTHECLHR,OTHEMLTD,OTHEXPUL,OTHEMREF,OTHEHPIO:      
                             OTHETCOD,OTHETCED,OTHEHCLI,OTHEHCAI,OTHEAOPN:      
                             OTHEAOFR,OTHEAOWM,OTHEAAOW,OTHEDATE,OTHEHCP1:      
                             OTHEHCP2,OTHEHCP3,OTHEHCP4,OTHESPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROTHED2  RESET     KEY31                                                       
          WRITE     OUTHEDA2,KEY31;OTHESITE,OTHECLIN,OTHEWDAY,OTHESTRT,OTHESHNO:
                                   OTHESDAT,OTHEDTCC,OTHECOM1,OTHECOM2,OTHEINS1:
                                   OTHEINS2,OTHEINS3,OTHEDURN,OTHEBFIN,OTHESEND:
                                   OTHELTYP,OTHECLSE,OTHEHOSP,OTHELOCN,OTHECTYP:
                                   OTHECIND,OTHEGBOK,OTHEADEP,OTHECENC,OTHEKDOC:
                                   OTHEDEFD,OTHECCAR,OTHECTRN,OTHENDPS,OTHECPMI:
                                   OTHECPAG,OTHECTEL,OTHENMDS,OTHECART,OTHESRVD:
                                   OTHECLHR,OTHEMLTD,OTHEXPUL,OTHEMREF,OTHEHPIO:
                                   OTHETCOD,OTHETCED,OTHEHCLI,OTHEHCAI,OTHEAOPN:
                                   OTHEAOFR,OTHEAOWM,OTHEAAOW,OTHEDATE,OTHEHCP1:
                                   OTHEHCP2,OTHEHCP3,OTHEHCP4,OTHESPAR          
          RETURN
.
DEOTHED2  RESET     KEY31                                                       
          DELETE    OUTHEDA2,KEY31                                              
          RETURN
.
RLOTHED2  RESET     KEY31                                                       
          MOVE      ZERO,OVRCD
          READL     OUTHEDA2,KEY31;OTHESITE,OTHECLIN,OTHEWDAY,OTHESTRT,OTHESHNO:
                                   OTHESDAT,OTHEDTCC,OTHECOM1,OTHECOM2,OTHEINS1:
                                   OTHEINS2,OTHEINS3,OTHEDURN,OTHEBFIN,OTHESEND:
                                   OTHELTYP,OTHECLSE,OTHEHOSP,OTHELOCN,OTHECTYP:
                                   OTHECIND,OTHEGBOK,OTHEADEP,OTHECENC,OTHEKDOC:
                                   OTHEDEFD,OTHECCAR,OTHECTRN,OTHENDPS,OTHECPMI:
                                   OTHECPAG,OTHECTEL,OTHENMDS,OTHECART,OTHESRVD:
                                   OTHECLHR,OTHEMLTD,OTHEXPUL,OTHEMREF,OTHEHPIO:
                                   OTHETCOD,OTHETCED,OTHEHCLI,OTHEHCAI,OTHEAOPN:
                                   OTHEAOFR,OTHEAOWM,OTHEAAOW,OTHEDATE,OTHEHCP1:
                                   OTHEHCP2,OTHEHCP3,OTHEHCP4,OTHESPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOTHED2  MOVE      ZERO,OVRCD                                                  
          READLKS   OUTHEDA2;OTHESITE,OTHECLIN,OTHEWDAY,OTHESTRT,OTHESHNO:      
                             OTHESDAT,OTHEDTCC,OTHECOM1,OTHECOM2,OTHEINS1:      
                             OTHEINS2,OTHEINS3,OTHEDURN,OTHEBFIN,OTHESEND:      
                             OTHELTYP,OTHECLSE,OTHEHOSP,OTHELOCN,OTHECTYP:      
                             OTHECIND,OTHEGBOK,OTHEADEP,OTHECENC,OTHEKDOC:      
                             OTHEDEFD,OTHECCAR,OTHECTRN,OTHENDPS,OTHECPMI:      
                             OTHECPAG,OTHECTEL,OTHENMDS,OTHECART,OTHESRVD:      
                             OTHECLHR,OTHEMLTD,OTHEXPUL,OTHEMREF,OTHEHPIO:      
                             OTHETCOD,OTHETCED,OTHEHCLI,OTHEHCAI,OTHEAOPN:      
                             OTHEAOFR,OTHEAOWM,OTHEAAOW,OTHEDATE,OTHEHCP1:      
                             OTHEHCP2,OTHEHCP3,OTHEHCP4,OTHESPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOTHED2  MOVE      ZERO,OVRCD                                                  
          READLKP   OUTHEDA2;OTHESITE,OTHECLIN,OTHEWDAY,OTHESTRT,OTHESHNO:      
                             OTHESDAT,OTHEDTCC,OTHECOM1,OTHECOM2,OTHEINS1:      
                             OTHEINS2,OTHEINS3,OTHEDURN,OTHEBFIN,OTHESEND:      
                             OTHELTYP,OTHECLSE,OTHEHOSP,OTHELOCN,OTHECTYP:      
                             OTHECIND,OTHEGBOK,OTHEADEP,OTHECENC,OTHEKDOC:      
                             OTHEDEFD,OTHECCAR,OTHECTRN,OTHENDPS,OTHECPMI:      
                             OTHECPAG,OTHECTEL,OTHENMDS,OTHECART,OTHESRVD:      
                             OTHECLHR,OTHEMLTD,OTHEXPUL,OTHEMREF,OTHEHPIO:      
                             OTHETCOD,OTHETCED,OTHEHCLI,OTHEHCAI,OTHEAOPN:      
                             OTHEAOFR,OTHEAOWM,OTHEAAOW,OTHEDATE,OTHEHCP1:      
                             OTHEHCP2,OTHEHCP3,OTHEHCP4,OTHESPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOTHED2  RESET     KEY31                                                       
          UNLOCK    OUTHEDA2                                                    
          RETURN
.
