.
. WEBEEHIO    
. --------
. Filename     : webeehaf.dat
.
RSWBEEH1  RESET     KEY23                                                       
          READ      WEBEEHA1,KEY23;;                                            
          RETURN
.
RAWBEEH1  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      WEBEEHA1,KEY23;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBEEH1  RESET     KEY23                                                       
          MOVE      ZERO,OVRCD
          READ      WEBEEHA1,KEY23;WBEHARID,WBEHRPTC,WBEHCTID,WBEHBENL,WBEHCFAC:
                                   WBEHCPAM,WBEHCPDR,WBEHCPDI,WBEHCPFN,WBEHCPMN:
                                   WBEHCPRN,WBEHEXAM,WBEHEADI,WBEHEXBA,WBEHEXDI:
                                   WBEHFSTA,WBEHFRID,WBEHFSCD,WBEHMSCD,WBEHPEAI:
                                   WBEHPSCD,WBEHTNAM,WBEHTBDI,WBEHTBSC,WBEHVCID:
                                   WBEHCDTE,WBEHCTIM,WBEHCUID,WBEHUDTE,WBEHUTIM:
                                   WBEHUUID,WBEHMSID,WBEHSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBEEH1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBEEHA1;WBEHARID,WBEHRPTC,WBEHCTID,WBEHBENL,WBEHCFAC:      
                             WBEHCPAM,WBEHCPDR,WBEHCPDI,WBEHCPFN,WBEHCPMN:      
                             WBEHCPRN,WBEHEXAM,WBEHEADI,WBEHEXBA,WBEHEXDI:      
                             WBEHFSTA,WBEHFRID,WBEHFSCD,WBEHMSCD,WBEHPEAI:      
                             WBEHPSCD,WBEHTNAM,WBEHTBDI,WBEHTBSC,WBEHVCID:      
                             WBEHCDTE,WBEHCTIM,WBEHCUID,WBEHUDTE,WBEHUTIM:      
                             WBEHUUID,WBEHMSID,WBEHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBEEH1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBEEHA1;WBEHARID,WBEHRPTC,WBEHCTID,WBEHBENL,WBEHCFAC:      
                             WBEHCPAM,WBEHCPDR,WBEHCPDI,WBEHCPFN,WBEHCPMN:      
                             WBEHCPRN,WBEHEXAM,WBEHEADI,WBEHEXBA,WBEHEXDI:      
                             WBEHFSTA,WBEHFRID,WBEHFSCD,WBEHMSCD,WBEHPEAI:      
                             WBEHPSCD,WBEHTNAM,WBEHTBDI,WBEHTBSC,WBEHVCID:      
                             WBEHCDTE,WBEHCTIM,WBEHCUID,WBEHUDTE,WBEHUTIM:      
                             WBEHUUID,WBEHMSID,WBEHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBEEH1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBEEHA1;WBEHARID,WBEHRPTC,WBEHCTID,WBEHBENL,WBEHCFAC:      
                             WBEHCPAM,WBEHCPDR,WBEHCPDI,WBEHCPFN,WBEHCPMN:      
                             WBEHCPRN,WBEHEXAM,WBEHEADI,WBEHEXBA,WBEHEXDI:      
                             WBEHFSTA,WBEHFRID,WBEHFSCD,WBEHMSCD,WBEHPEAI:      
                             WBEHPSCD,WBEHTNAM,WBEHTBDI,WBEHTBSC,WBEHVCID:      
                             WBEHCDTE,WBEHCTIM,WBEHCUID,WBEHUDTE,WBEHUTIM:      
                             WBEHUUID,WBEHMSID,WBEHSPAR                         
          RETURN
.
WRWBEEH1  RESET     KEY23                                                       
          WRITE     WEBEEHA1,KEY23;WBEHARID,WBEHRPTC,WBEHCTID,WBEHBENL,WBEHCFAC:
                                   WBEHCPAM,WBEHCPDR,WBEHCPDI,WBEHCPFN,WBEHCPMN:
                                   WBEHCPRN,WBEHEXAM,WBEHEADI,WBEHEXBA,WBEHEXDI:
                                   WBEHFSTA,WBEHFRID,WBEHFSCD,WBEHMSCD,WBEHPEAI:
                                   WBEHPSCD,WBEHTNAM,WBEHTBDI,WBEHTBSC,WBEHVCID:
                                   WBEHCDTE,WBEHCTIM,WBEHCUID,WBEHUDTE,WBEHUTIM:
                                   WBEHUUID,WBEHMSID,WBEHSPAR                   
          RETURN
.
DEWBEEH1  RESET     KEY23                                                       
          DELETE    WEBEEHA1,KEY23                                              
          RETURN
.
RSWBEEH2  RESET     KEY47                                                       
          READ      WEBEEHA2,KEY47;;                                            
          RETURN
.
RAWBEEH2  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      WEBEEHA2,KEY47;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBEEH2  RESET     KEY47                                                       
          MOVE      ZERO,OVRCD
          READ      WEBEEHA2,KEY47;WBEHARID,WBEHRPTC,WBEHCTID,WBEHBENL,WBEHCFAC:
                                   WBEHCPAM,WBEHCPDR,WBEHCPDI,WBEHCPFN,WBEHCPMN:
                                   WBEHCPRN,WBEHEXAM,WBEHEADI,WBEHEXBA,WBEHEXDI:
                                   WBEHFSTA,WBEHFRID,WBEHFSCD,WBEHMSCD,WBEHPEAI:
                                   WBEHPSCD,WBEHTNAM,WBEHTBDI,WBEHTBSC,WBEHVCID:
                                   WBEHCDTE,WBEHCTIM,WBEHCUID,WBEHUDTE,WBEHUTIM:
                                   WBEHUUID,WBEHMSID,WBEHSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBEEH2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBEEHA2;WBEHARID,WBEHRPTC,WBEHCTID,WBEHBENL,WBEHCFAC:      
                             WBEHCPAM,WBEHCPDR,WBEHCPDI,WBEHCPFN,WBEHCPMN:      
                             WBEHCPRN,WBEHEXAM,WBEHEADI,WBEHEXBA,WBEHEXDI:      
                             WBEHFSTA,WBEHFRID,WBEHFSCD,WBEHMSCD,WBEHPEAI:      
                             WBEHPSCD,WBEHTNAM,WBEHTBDI,WBEHTBSC,WBEHVCID:      
                             WBEHCDTE,WBEHCTIM,WBEHCUID,WBEHUDTE,WBEHUTIM:      
                             WBEHUUID,WBEHMSID,WBEHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBEEH2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBEEHA2;WBEHARID,WBEHRPTC,WBEHCTID,WBEHBENL,WBEHCFAC:      
                             WBEHCPAM,WBEHCPDR,WBEHCPDI,WBEHCPFN,WBEHCPMN:      
                             WBEHCPRN,WBEHEXAM,WBEHEADI,WBEHEXBA,WBEHEXDI:      
                             WBEHFSTA,WBEHFRID,WBEHFSCD,WBEHMSCD,WBEHPEAI:      
                             WBEHPSCD,WBEHTNAM,WBEHTBDI,WBEHTBSC,WBEHVCID:      
                             WBEHCDTE,WBEHCTIM,WBEHCUID,WBEHUDTE,WBEHUTIM:      
                             WBEHUUID,WBEHMSID,WBEHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBEEH2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBEEHA2;WBEHARID,WBEHRPTC,WBEHCTID,WBEHBENL,WBEHCFAC:      
                             WBEHCPAM,WBEHCPDR,WBEHCPDI,WBEHCPFN,WBEHCPMN:      
                             WBEHCPRN,WBEHEXAM,WBEHEADI,WBEHEXBA,WBEHEXDI:      
                             WBEHFSTA,WBEHFRID,WBEHFSCD,WBEHMSCD,WBEHPEAI:      
                             WBEHPSCD,WBEHTNAM,WBEHTBDI,WBEHTBSC,WBEHVCID:      
                             WBEHCDTE,WBEHCTIM,WBEHCUID,WBEHUDTE,WBEHUTIM:      
                             WBEHUUID,WBEHMSID,WBEHSPAR                         
          RETURN
.
WRWBEEH2  RESET     KEY47                                                       
          WRITE     WEBEEHA2,KEY47;WBEHARID,WBEHRPTC,WBEHCTID,WBEHBENL,WBEHCFAC:
                                   WBEHCPAM,WBEHCPDR,WBEHCPDI,WBEHCPFN,WBEHCPMN:
                                   WBEHCPRN,WBEHEXAM,WBEHEADI,WBEHEXBA,WBEHEXDI:
                                   WBEHFSTA,WBEHFRID,WBEHFSCD,WBEHMSCD,WBEHPEAI:
                                   WBEHPSCD,WBEHTNAM,WBEHTBDI,WBEHTBSC,WBEHVCID:
                                   WBEHCDTE,WBEHCTIM,WBEHCUID,WBEHUDTE,WBEHUTIM:
                                   WBEHUUID,WBEHMSID,WBEHSPAR                   
          RETURN
.
DEWBEEH2  RESET     KEY47                                                       
          DELETE    WEBEEHA2,KEY47                                              
          RETURN
.
RSWBEEH3  RESET     KEY59                                                       
          READ      WEBEEHA3,KEY59;;                                            
          RETURN
.
RAWBEEH3  RESET     KEY59                                                       
          MOVE      ZERO,OVRCD
          READ      WEBEEHA3,KEY59;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBEEH3  RESET     KEY59                                                       
          MOVE      ZERO,OVRCD
          READ      WEBEEHA3,KEY59;WBEHARID,WBEHRPTC,WBEHCTID,WBEHBENL,WBEHCFAC:
                                   WBEHCPAM,WBEHCPDR,WBEHCPDI,WBEHCPFN,WBEHCPMN:
                                   WBEHCPRN,WBEHEXAM,WBEHEADI,WBEHEXBA,WBEHEXDI:
                                   WBEHFSTA,WBEHFRID,WBEHFSCD,WBEHMSCD,WBEHPEAI:
                                   WBEHPSCD,WBEHTNAM,WBEHTBDI,WBEHTBSC,WBEHVCID:
                                   WBEHCDTE,WBEHCTIM,WBEHCUID,WBEHUDTE,WBEHUTIM:
                                   WBEHUUID,WBEHMSID,WBEHSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBEEH3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBEEHA3;WBEHARID,WBEHRPTC,WBEHCTID,WBEHBENL,WBEHCFAC:      
                             WBEHCPAM,WBEHCPDR,WBEHCPDI,WBEHCPFN,WBEHCPMN:      
                             WBEHCPRN,WBEHEXAM,WBEHEADI,WBEHEXBA,WBEHEXDI:      
                             WBEHFSTA,WBEHFRID,WBEHFSCD,WBEHMSCD,WBEHPEAI:      
                             WBEHPSCD,WBEHTNAM,WBEHTBDI,WBEHTBSC,WBEHVCID:      
                             WBEHCDTE,WBEHCTIM,WBEHCUID,WBEHUDTE,WBEHUTIM:      
                             WBEHUUID,WBEHMSID,WBEHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBEEH3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBEEHA3;WBEHARID,WBEHRPTC,WBEHCTID,WBEHBENL,WBEHCFAC:      
                             WBEHCPAM,WBEHCPDR,WBEHCPDI,WBEHCPFN,WBEHCPMN:      
                             WBEHCPRN,WBEHEXAM,WBEHEADI,WBEHEXBA,WBEHEXDI:      
                             WBEHFSTA,WBEHFRID,WBEHFSCD,WBEHMSCD,WBEHPEAI:      
                             WBEHPSCD,WBEHTNAM,WBEHTBDI,WBEHTBSC,WBEHVCID:      
                             WBEHCDTE,WBEHCTIM,WBEHCUID,WBEHUDTE,WBEHUTIM:      
                             WBEHUUID,WBEHMSID,WBEHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBEEH3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBEEHA3;WBEHARID,WBEHRPTC,WBEHCTID,WBEHBENL,WBEHCFAC:      
                             WBEHCPAM,WBEHCPDR,WBEHCPDI,WBEHCPFN,WBEHCPMN:      
                             WBEHCPRN,WBEHEXAM,WBEHEADI,WBEHEXBA,WBEHEXDI:      
                             WBEHFSTA,WBEHFRID,WBEHFSCD,WBEHMSCD,WBEHPEAI:      
                             WBEHPSCD,WBEHTNAM,WBEHTBDI,WBEHTBSC,WBEHVCID:      
                             WBEHCDTE,WBEHCTIM,WBEHCUID,WBEHUDTE,WBEHUTIM:      
                             WBEHUUID,WBEHMSID,WBEHSPAR                         
          RETURN
.
WRWBEEH3  RESET     KEY59                                                       
          WRITE     WEBEEHA3,KEY59;WBEHARID,WBEHRPTC,WBEHCTID,WBEHBENL,WBEHCFAC:
                                   WBEHCPAM,WBEHCPDR,WBEHCPDI,WBEHCPFN,WBEHCPMN:
                                   WBEHCPRN,WBEHEXAM,WBEHEADI,WBEHEXBA,WBEHEXDI:
                                   WBEHFSTA,WBEHFRID,WBEHFSCD,WBEHMSCD,WBEHPEAI:
                                   WBEHPSCD,WBEHTNAM,WBEHTBDI,WBEHTBSC,WBEHVCID:
                                   WBEHCDTE,WBEHCTIM,WBEHCUID,WBEHUDTE,WBEHUTIM:
                                   WBEHUUID,WBEHMSID,WBEHSPAR                   
          RETURN
.
DEWBEEH3  RESET     KEY59                                                       
          DELETE    WEBEEHA3,KEY59                                              
          RETURN
.
