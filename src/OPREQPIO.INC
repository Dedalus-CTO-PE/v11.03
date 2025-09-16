.
. OPREQPIO    
. --------
. Filename     : opreqpaf.dat
.
RSOPEQP1  RESET     KEY18                                                       
          READ      OPREQPA1,KEY18;;                                            
          RETURN
.
RAOPEQP1  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      OPREQPA1,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPEQP1  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      OPREQPA1,KEY18;OPEQCODE,OPEQDESC,OPEQTYPE,OPEQUNIQ,OPEQTEAM:
                                   OPEQSTAT,OPEQDTSC,OPEQUSLO,OPEQCULO,OPEQDE1U:
                                   OPEQMNOU,OPEQEEDT,OPEQNOUR,OPEQLSDT,OPEQULST:
                                   OPEQLMDT,OPEQULMT,OPEQSRNO,OPEQSPNO,OPEQSPDT:
                                   OPEQNOTE,OPEQUDT1,OPEQUDT2,OPEQUDF1,OPEQUDF2:
                                   OPEQDTE1,OPEQDTE2,OPEQTME1,OPEQTME2,OPEQACTV:
                                   OPEQHOSP,OPEQSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPEQP1  MOVE      ZERO,OVRCD                                                  
          READKS    OPREQPA1;OPEQCODE,OPEQDESC,OPEQTYPE,OPEQUNIQ,OPEQTEAM:      
                             OPEQSTAT,OPEQDTSC,OPEQUSLO,OPEQCULO,OPEQDE1U:      
                             OPEQMNOU,OPEQEEDT,OPEQNOUR,OPEQLSDT,OPEQULST:      
                             OPEQLMDT,OPEQULMT,OPEQSRNO,OPEQSPNO,OPEQSPDT:      
                             OPEQNOTE,OPEQUDT1,OPEQUDT2,OPEQUDF1,OPEQUDF2:      
                             OPEQDTE1,OPEQDTE2,OPEQTME1,OPEQTME2,OPEQACTV:      
                             OPEQHOSP,OPEQSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPEQP1  MOVE      ZERO,OVRCD                                                  
          READKP    OPREQPA1;OPEQCODE,OPEQDESC,OPEQTYPE,OPEQUNIQ,OPEQTEAM:      
                             OPEQSTAT,OPEQDTSC,OPEQUSLO,OPEQCULO,OPEQDE1U:      
                             OPEQMNOU,OPEQEEDT,OPEQNOUR,OPEQLSDT,OPEQULST:      
                             OPEQLMDT,OPEQULMT,OPEQSRNO,OPEQSPNO,OPEQSPDT:      
                             OPEQNOTE,OPEQUDT1,OPEQUDT2,OPEQUDF1,OPEQUDF2:      
                             OPEQDTE1,OPEQDTE2,OPEQTME1,OPEQTME2,OPEQACTV:      
                             OPEQHOSP,OPEQSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPEQP1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OPREQPA1;OPEQCODE,OPEQDESC,OPEQTYPE,OPEQUNIQ,OPEQTEAM:      
                             OPEQSTAT,OPEQDTSC,OPEQUSLO,OPEQCULO,OPEQDE1U:      
                             OPEQMNOU,OPEQEEDT,OPEQNOUR,OPEQLSDT,OPEQULST:      
                             OPEQLMDT,OPEQULMT,OPEQSRNO,OPEQSPNO,OPEQSPDT:      
                             OPEQNOTE,OPEQUDT1,OPEQUDT2,OPEQUDF1,OPEQUDF2:      
                             OPEQDTE1,OPEQDTE2,OPEQTME1,OPEQTME2,OPEQACTV:      
                             OPEQHOSP,OPEQSPAR                                  
          RETURN
.
WROPEQP1  RESET     KEY18                                                       
          WRITE     OPREQPA1,KEY18;OPEQCODE,OPEQDESC,OPEQTYPE,OPEQUNIQ,OPEQTEAM:
                                   OPEQSTAT,OPEQDTSC,OPEQUSLO,OPEQCULO,OPEQDE1U:
                                   OPEQMNOU,OPEQEEDT,OPEQNOUR,OPEQLSDT,OPEQULST:
                                   OPEQLMDT,OPEQULMT,OPEQSRNO,OPEQSPNO,OPEQSPDT:
                                   OPEQNOTE,OPEQUDT1,OPEQUDT2,OPEQUDF1,OPEQUDF2:
                                   OPEQDTE1,OPEQDTE2,OPEQTME1,OPEQTME2,OPEQACTV:
                                   OPEQHOSP,OPEQSPAR                            
          RETURN
.
DEOPEQP1  RESET     KEY18                                                       
          DELETE    OPREQPA1,KEY18                                              
          RETURN
.
RSOPEQP2  RESET     KEY68                                                       
          READ      OPREQPA2,KEY68;;                                            
          RETURN
.
RAOPEQP2  RESET     KEY68                                                       
          MOVE      ZERO,OVRCD
          READ      OPREQPA2,KEY68;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPEQP2  RESET     KEY68                                                       
          MOVE      ZERO,OVRCD
          READ      OPREQPA2,KEY68;OPEQCODE,OPEQDESC,OPEQTYPE,OPEQUNIQ,OPEQTEAM:
                                   OPEQSTAT,OPEQDTSC,OPEQUSLO,OPEQCULO,OPEQDE1U:
                                   OPEQMNOU,OPEQEEDT,OPEQNOUR,OPEQLSDT,OPEQULST:
                                   OPEQLMDT,OPEQULMT,OPEQSRNO,OPEQSPNO,OPEQSPDT:
                                   OPEQNOTE,OPEQUDT1,OPEQUDT2,OPEQUDF1,OPEQUDF2:
                                   OPEQDTE1,OPEQDTE2,OPEQTME1,OPEQTME2,OPEQACTV:
                                   OPEQHOSP,OPEQSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPEQP2  MOVE      ZERO,OVRCD                                                  
          READKS    OPREQPA2;OPEQCODE,OPEQDESC,OPEQTYPE,OPEQUNIQ,OPEQTEAM:      
                             OPEQSTAT,OPEQDTSC,OPEQUSLO,OPEQCULO,OPEQDE1U:      
                             OPEQMNOU,OPEQEEDT,OPEQNOUR,OPEQLSDT,OPEQULST:      
                             OPEQLMDT,OPEQULMT,OPEQSRNO,OPEQSPNO,OPEQSPDT:      
                             OPEQNOTE,OPEQUDT1,OPEQUDT2,OPEQUDF1,OPEQUDF2:      
                             OPEQDTE1,OPEQDTE2,OPEQTME1,OPEQTME2,OPEQACTV:      
                             OPEQHOSP,OPEQSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPEQP2  MOVE      ZERO,OVRCD                                                  
          READKP    OPREQPA2;OPEQCODE,OPEQDESC,OPEQTYPE,OPEQUNIQ,OPEQTEAM:      
                             OPEQSTAT,OPEQDTSC,OPEQUSLO,OPEQCULO,OPEQDE1U:      
                             OPEQMNOU,OPEQEEDT,OPEQNOUR,OPEQLSDT,OPEQULST:      
                             OPEQLMDT,OPEQULMT,OPEQSRNO,OPEQSPNO,OPEQSPDT:      
                             OPEQNOTE,OPEQUDT1,OPEQUDT2,OPEQUDF1,OPEQUDF2:      
                             OPEQDTE1,OPEQDTE2,OPEQTME1,OPEQTME2,OPEQACTV:      
                             OPEQHOSP,OPEQSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPEQP2  MOVE      ZERO,OVRCD                                                  
          UPDATE    OPREQPA2;OPEQCODE,OPEQDESC,OPEQTYPE,OPEQUNIQ,OPEQTEAM:      
                             OPEQSTAT,OPEQDTSC,OPEQUSLO,OPEQCULO,OPEQDE1U:      
                             OPEQMNOU,OPEQEEDT,OPEQNOUR,OPEQLSDT,OPEQULST:      
                             OPEQLMDT,OPEQULMT,OPEQSRNO,OPEQSPNO,OPEQSPDT:      
                             OPEQNOTE,OPEQUDT1,OPEQUDT2,OPEQUDF1,OPEQUDF2:      
                             OPEQDTE1,OPEQDTE2,OPEQTME1,OPEQTME2,OPEQACTV:      
                             OPEQHOSP,OPEQSPAR                                  
          RETURN
.
WROPEQP2  RESET     KEY68                                                       
          WRITE     OPREQPA2,KEY68;OPEQCODE,OPEQDESC,OPEQTYPE,OPEQUNIQ,OPEQTEAM:
                                   OPEQSTAT,OPEQDTSC,OPEQUSLO,OPEQCULO,OPEQDE1U:
                                   OPEQMNOU,OPEQEEDT,OPEQNOUR,OPEQLSDT,OPEQULST:
                                   OPEQLMDT,OPEQULMT,OPEQSRNO,OPEQSPNO,OPEQSPDT:
                                   OPEQNOTE,OPEQUDT1,OPEQUDT2,OPEQUDF1,OPEQUDF2:
                                   OPEQDTE1,OPEQDTE2,OPEQTME1,OPEQTME2,OPEQACTV:
                                   OPEQHOSP,OPEQSPAR                            
          RETURN
.
DEOPEQP2  RESET     KEY68                                                       
          DELETE    OPREQPA2,KEY68                                              
          RETURN
.
RSOPEQP3  RESET     KEY29                                                       
          READ      OPREQPA3,KEY29;;                                            
          RETURN
.
RAOPEQP3  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      OPREQPA3,KEY29;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPEQP3  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      OPREQPA3,KEY29;OPEQCODE,OPEQDESC,OPEQTYPE,OPEQUNIQ,OPEQTEAM:
                                   OPEQSTAT,OPEQDTSC,OPEQUSLO,OPEQCULO,OPEQDE1U:
                                   OPEQMNOU,OPEQEEDT,OPEQNOUR,OPEQLSDT,OPEQULST:
                                   OPEQLMDT,OPEQULMT,OPEQSRNO,OPEQSPNO,OPEQSPDT:
                                   OPEQNOTE,OPEQUDT1,OPEQUDT2,OPEQUDF1,OPEQUDF2:
                                   OPEQDTE1,OPEQDTE2,OPEQTME1,OPEQTME2,OPEQACTV:
                                   OPEQHOSP,OPEQSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPEQP3  MOVE      ZERO,OVRCD                                                  
          READKS    OPREQPA3;OPEQCODE,OPEQDESC,OPEQTYPE,OPEQUNIQ,OPEQTEAM:      
                             OPEQSTAT,OPEQDTSC,OPEQUSLO,OPEQCULO,OPEQDE1U:      
                             OPEQMNOU,OPEQEEDT,OPEQNOUR,OPEQLSDT,OPEQULST:      
                             OPEQLMDT,OPEQULMT,OPEQSRNO,OPEQSPNO,OPEQSPDT:      
                             OPEQNOTE,OPEQUDT1,OPEQUDT2,OPEQUDF1,OPEQUDF2:      
                             OPEQDTE1,OPEQDTE2,OPEQTME1,OPEQTME2,OPEQACTV:      
                             OPEQHOSP,OPEQSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPEQP3  MOVE      ZERO,OVRCD                                                  
          READKP    OPREQPA3;OPEQCODE,OPEQDESC,OPEQTYPE,OPEQUNIQ,OPEQTEAM:      
                             OPEQSTAT,OPEQDTSC,OPEQUSLO,OPEQCULO,OPEQDE1U:      
                             OPEQMNOU,OPEQEEDT,OPEQNOUR,OPEQLSDT,OPEQULST:      
                             OPEQLMDT,OPEQULMT,OPEQSRNO,OPEQSPNO,OPEQSPDT:      
                             OPEQNOTE,OPEQUDT1,OPEQUDT2,OPEQUDF1,OPEQUDF2:      
                             OPEQDTE1,OPEQDTE2,OPEQTME1,OPEQTME2,OPEQACTV:      
                             OPEQHOSP,OPEQSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPEQP3  MOVE      ZERO,OVRCD                                                  
          UPDATE    OPREQPA3;OPEQCODE,OPEQDESC,OPEQTYPE,OPEQUNIQ,OPEQTEAM:      
                             OPEQSTAT,OPEQDTSC,OPEQUSLO,OPEQCULO,OPEQDE1U:      
                             OPEQMNOU,OPEQEEDT,OPEQNOUR,OPEQLSDT,OPEQULST:      
                             OPEQLMDT,OPEQULMT,OPEQSRNO,OPEQSPNO,OPEQSPDT:      
                             OPEQNOTE,OPEQUDT1,OPEQUDT2,OPEQUDF1,OPEQUDF2:      
                             OPEQDTE1,OPEQDTE2,OPEQTME1,OPEQTME2,OPEQACTV:      
                             OPEQHOSP,OPEQSPAR                                  
          RETURN
.
WROPEQP3  RESET     KEY29                                                       
          WRITE     OPREQPA3,KEY29;OPEQCODE,OPEQDESC,OPEQTYPE,OPEQUNIQ,OPEQTEAM:
                                   OPEQSTAT,OPEQDTSC,OPEQUSLO,OPEQCULO,OPEQDE1U:
                                   OPEQMNOU,OPEQEEDT,OPEQNOUR,OPEQLSDT,OPEQULST:
                                   OPEQLMDT,OPEQULMT,OPEQSRNO,OPEQSPNO,OPEQSPDT:
                                   OPEQNOTE,OPEQUDT1,OPEQUDT2,OPEQUDF1,OPEQUDF2:
                                   OPEQDTE1,OPEQDTE2,OPEQTME1,OPEQTME2,OPEQACTV:
                                   OPEQHOSP,OPEQSPAR                            
          RETURN
.
DEOPEQP3  RESET     KEY29                                                       
          DELETE    OPREQPA3,KEY29                                              
          RETURN
.
RSOPEQP4  RESET     KEY26                                                       
          READ      OPREQPA4,KEY26;;                                            
          RETURN
.
RAOPEQP4  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      OPREQPA4,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPEQP4  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      OPREQPA4,KEY26;OPEQCODE,OPEQDESC,OPEQTYPE,OPEQUNIQ,OPEQTEAM:
                                   OPEQSTAT,OPEQDTSC,OPEQUSLO,OPEQCULO,OPEQDE1U:
                                   OPEQMNOU,OPEQEEDT,OPEQNOUR,OPEQLSDT,OPEQULST:
                                   OPEQLMDT,OPEQULMT,OPEQSRNO,OPEQSPNO,OPEQSPDT:
                                   OPEQNOTE,OPEQUDT1,OPEQUDT2,OPEQUDF1,OPEQUDF2:
                                   OPEQDTE1,OPEQDTE2,OPEQTME1,OPEQTME2,OPEQACTV:
                                   OPEQHOSP,OPEQSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPEQP4  MOVE      ZERO,OVRCD                                                  
          READKS    OPREQPA4;OPEQCODE,OPEQDESC,OPEQTYPE,OPEQUNIQ,OPEQTEAM:      
                             OPEQSTAT,OPEQDTSC,OPEQUSLO,OPEQCULO,OPEQDE1U:      
                             OPEQMNOU,OPEQEEDT,OPEQNOUR,OPEQLSDT,OPEQULST:      
                             OPEQLMDT,OPEQULMT,OPEQSRNO,OPEQSPNO,OPEQSPDT:      
                             OPEQNOTE,OPEQUDT1,OPEQUDT2,OPEQUDF1,OPEQUDF2:      
                             OPEQDTE1,OPEQDTE2,OPEQTME1,OPEQTME2,OPEQACTV:      
                             OPEQHOSP,OPEQSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPEQP4  MOVE      ZERO,OVRCD                                                  
          READKP    OPREQPA4;OPEQCODE,OPEQDESC,OPEQTYPE,OPEQUNIQ,OPEQTEAM:      
                             OPEQSTAT,OPEQDTSC,OPEQUSLO,OPEQCULO,OPEQDE1U:      
                             OPEQMNOU,OPEQEEDT,OPEQNOUR,OPEQLSDT,OPEQULST:      
                             OPEQLMDT,OPEQULMT,OPEQSRNO,OPEQSPNO,OPEQSPDT:      
                             OPEQNOTE,OPEQUDT1,OPEQUDT2,OPEQUDF1,OPEQUDF2:      
                             OPEQDTE1,OPEQDTE2,OPEQTME1,OPEQTME2,OPEQACTV:      
                             OPEQHOSP,OPEQSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPEQP4  MOVE      ZERO,OVRCD                                                  
          UPDATE    OPREQPA4;OPEQCODE,OPEQDESC,OPEQTYPE,OPEQUNIQ,OPEQTEAM:      
                             OPEQSTAT,OPEQDTSC,OPEQUSLO,OPEQCULO,OPEQDE1U:      
                             OPEQMNOU,OPEQEEDT,OPEQNOUR,OPEQLSDT,OPEQULST:      
                             OPEQLMDT,OPEQULMT,OPEQSRNO,OPEQSPNO,OPEQSPDT:      
                             OPEQNOTE,OPEQUDT1,OPEQUDT2,OPEQUDF1,OPEQUDF2:      
                             OPEQDTE1,OPEQDTE2,OPEQTME1,OPEQTME2,OPEQACTV:      
                             OPEQHOSP,OPEQSPAR                                  
          RETURN
.
WROPEQP4  RESET     KEY26                                                       
          WRITE     OPREQPA4,KEY26;OPEQCODE,OPEQDESC,OPEQTYPE,OPEQUNIQ,OPEQTEAM:
                                   OPEQSTAT,OPEQDTSC,OPEQUSLO,OPEQCULO,OPEQDE1U:
                                   OPEQMNOU,OPEQEEDT,OPEQNOUR,OPEQLSDT,OPEQULST:
                                   OPEQLMDT,OPEQULMT,OPEQSRNO,OPEQSPNO,OPEQSPDT:
                                   OPEQNOTE,OPEQUDT1,OPEQUDT2,OPEQUDF1,OPEQUDF2:
                                   OPEQDTE1,OPEQDTE2,OPEQTME1,OPEQTME2,OPEQACTV:
                                   OPEQHOSP,OPEQSPAR                            
          RETURN
.
DEOPEQP4  RESET     KEY26                                                       
          DELETE    OPREQPA4,KEY26                                              
          RETURN
.
