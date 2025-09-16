.
. OPRARDIO    
. --------
. Filename     : oprardaf.dat
.
RSOPARD1  RESET     KEY10                                                       
          READ      OPRARDA1,KEY10;;                                            
          RETURN
.
RAOPARD1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      OPRARDA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPARD1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      OPRARDA1,KEY10;OPARUNID,OPARATIM,OPARANUR,OPARRLAT,OPARPCLC:
                                   OPARCSFS,OPARMDRE,OPARXRAY,OPARBLEM,OPARMUPJ:
                                   OPARPMED,OPARALCK,OPARPROT,OPARUC01,OPARUC02:
                                   OPARUC03,OPARUC04,OPARUC05,OPARUC06,OPARUC07:
                                   OPARUC08,OPARUC09,OPARUC10,OPARUY01,OPARUY02:
                                   OPARUY03,OPARUY04,OPARUY05,OPARUT01,OPARUT02:
                                   OPARUT03,OPARUT04,OPARUT05,OPARUF01,OPARUF02:
                                   OPARUF03,OPARUF04,OPARUF05,OPARTCAL,OPARUIAR:
                                   OPARANAP,OPARANAS,OPARANAE,OPARITYP,OPARUC11:
                                   OPARUC12,OPARUC13,OPARUC14,OPARUC15,OPARUC16:
                                   OPARUC17,OPARUC18,OPARUC19,OPARUC20,OPARUY06:
                                   OPARUY07,OPARUY08,OPARUY09,OPARUY10,OPARUT06:
                                   OPARUT07,OPARUT08,OPARUT09,OPARUT10,OPARUF06:
                                   OPARUF07,OPARUF08,OPARUF09,OPARUF10,OPARUANA:
                                   OPARTIRF,OPARNUF1,OPARNUF2,OPARTIRB,OPARNUB1:
                                   OPARNUB2,OPARTIRD,OPARNUD1,OPARNUD2,OPARTETC:
                                   OPARUREC,OPARTEXP,OPARTICU,OPARRDCD,OPARTIDP:
                                   OPARUC21,OPARUC22,OPARUC23,OPARUC24,OPARUC25:
                                   OPARUC26,OPARUC27,OPARUC28,OPARUC29,OPARUC30:
                                   OPARUY11,OPARUY12,OPARUY13,OPARUY14,OPARUY15:
                                   OPARUT11,OPARUT12,OPARUT13,OPARUT14,OPARUT15:
                                   OPARUF11,OPARUF12,OPARUF13,OPARUF14,OPARUF15:
                                   OPARUYN1,OPARUYN2,OPARADST,OPARADET,OPARUT16:
                                   OPARUT17,OPARUT18,OPARUT19,OPARSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPARD1  MOVE      ZERO,OVRCD                                                  
          READKS    OPRARDA1;OPARUNID,OPARATIM,OPARANUR,OPARRLAT,OPARPCLC:      
                             OPARCSFS,OPARMDRE,OPARXRAY,OPARBLEM,OPARMUPJ:      
                             OPARPMED,OPARALCK,OPARPROT,OPARUC01,OPARUC02:      
                             OPARUC03,OPARUC04,OPARUC05,OPARUC06,OPARUC07:      
                             OPARUC08,OPARUC09,OPARUC10,OPARUY01,OPARUY02:      
                             OPARUY03,OPARUY04,OPARUY05,OPARUT01,OPARUT02:      
                             OPARUT03,OPARUT04,OPARUT05,OPARUF01,OPARUF02:      
                             OPARUF03,OPARUF04,OPARUF05,OPARTCAL,OPARUIAR:      
                             OPARANAP,OPARANAS,OPARANAE,OPARITYP,OPARUC11:      
                             OPARUC12,OPARUC13,OPARUC14,OPARUC15,OPARUC16:      
                             OPARUC17,OPARUC18,OPARUC19,OPARUC20,OPARUY06:      
                             OPARUY07,OPARUY08,OPARUY09,OPARUY10,OPARUT06:      
                             OPARUT07,OPARUT08,OPARUT09,OPARUT10,OPARUF06:      
                             OPARUF07,OPARUF08,OPARUF09,OPARUF10,OPARUANA:      
                             OPARTIRF,OPARNUF1,OPARNUF2,OPARTIRB,OPARNUB1:      
                             OPARNUB2,OPARTIRD,OPARNUD1,OPARNUD2,OPARTETC:      
                             OPARUREC,OPARTEXP,OPARTICU,OPARRDCD,OPARTIDP:      
                             OPARUC21,OPARUC22,OPARUC23,OPARUC24,OPARUC25:      
                             OPARUC26,OPARUC27,OPARUC28,OPARUC29,OPARUC30:      
                             OPARUY11,OPARUY12,OPARUY13,OPARUY14,OPARUY15:      
                             OPARUT11,OPARUT12,OPARUT13,OPARUT14,OPARUT15:      
                             OPARUF11,OPARUF12,OPARUF13,OPARUF14,OPARUF15:      
                             OPARUYN1,OPARUYN2,OPARADST,OPARADET,OPARUT16:      
                             OPARUT17,OPARUT18,OPARUT19,OPARSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPARD1  MOVE      ZERO,OVRCD                                                  
          READKP    OPRARDA1;OPARUNID,OPARATIM,OPARANUR,OPARRLAT,OPARPCLC:      
                             OPARCSFS,OPARMDRE,OPARXRAY,OPARBLEM,OPARMUPJ:      
                             OPARPMED,OPARALCK,OPARPROT,OPARUC01,OPARUC02:      
                             OPARUC03,OPARUC04,OPARUC05,OPARUC06,OPARUC07:      
                             OPARUC08,OPARUC09,OPARUC10,OPARUY01,OPARUY02:      
                             OPARUY03,OPARUY04,OPARUY05,OPARUT01,OPARUT02:      
                             OPARUT03,OPARUT04,OPARUT05,OPARUF01,OPARUF02:      
                             OPARUF03,OPARUF04,OPARUF05,OPARTCAL,OPARUIAR:      
                             OPARANAP,OPARANAS,OPARANAE,OPARITYP,OPARUC11:      
                             OPARUC12,OPARUC13,OPARUC14,OPARUC15,OPARUC16:      
                             OPARUC17,OPARUC18,OPARUC19,OPARUC20,OPARUY06:      
                             OPARUY07,OPARUY08,OPARUY09,OPARUY10,OPARUT06:      
                             OPARUT07,OPARUT08,OPARUT09,OPARUT10,OPARUF06:      
                             OPARUF07,OPARUF08,OPARUF09,OPARUF10,OPARUANA:      
                             OPARTIRF,OPARNUF1,OPARNUF2,OPARTIRB,OPARNUB1:      
                             OPARNUB2,OPARTIRD,OPARNUD1,OPARNUD2,OPARTETC:      
                             OPARUREC,OPARTEXP,OPARTICU,OPARRDCD,OPARTIDP:      
                             OPARUC21,OPARUC22,OPARUC23,OPARUC24,OPARUC25:      
                             OPARUC26,OPARUC27,OPARUC28,OPARUC29,OPARUC30:      
                             OPARUY11,OPARUY12,OPARUY13,OPARUY14,OPARUY15:      
                             OPARUT11,OPARUT12,OPARUT13,OPARUT14,OPARUT15:      
                             OPARUF11,OPARUF12,OPARUF13,OPARUF14,OPARUF15:      
                             OPARUYN1,OPARUYN2,OPARADST,OPARADET,OPARUT16:      
                             OPARUT17,OPARUT18,OPARUT19,OPARSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPARD1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OPRARDA1;OPARUNID,OPARATIM,OPARANUR,OPARRLAT,OPARPCLC:      
                             OPARCSFS,OPARMDRE,OPARXRAY,OPARBLEM,OPARMUPJ:      
                             OPARPMED,OPARALCK,OPARPROT,OPARUC01,OPARUC02:      
                             OPARUC03,OPARUC04,OPARUC05,OPARUC06,OPARUC07:      
                             OPARUC08,OPARUC09,OPARUC10,OPARUY01,OPARUY02:      
                             OPARUY03,OPARUY04,OPARUY05,OPARUT01,OPARUT02:      
                             OPARUT03,OPARUT04,OPARUT05,OPARUF01,OPARUF02:      
                             OPARUF03,OPARUF04,OPARUF05,OPARTCAL,OPARUIAR:      
                             OPARANAP,OPARANAS,OPARANAE,OPARITYP,OPARUC11:      
                             OPARUC12,OPARUC13,OPARUC14,OPARUC15,OPARUC16:      
                             OPARUC17,OPARUC18,OPARUC19,OPARUC20,OPARUY06:      
                             OPARUY07,OPARUY08,OPARUY09,OPARUY10,OPARUT06:      
                             OPARUT07,OPARUT08,OPARUT09,OPARUT10,OPARUF06:      
                             OPARUF07,OPARUF08,OPARUF09,OPARUF10,OPARUANA:      
                             OPARTIRF,OPARNUF1,OPARNUF2,OPARTIRB,OPARNUB1:      
                             OPARNUB2,OPARTIRD,OPARNUD1,OPARNUD2,OPARTETC:      
                             OPARUREC,OPARTEXP,OPARTICU,OPARRDCD,OPARTIDP:      
                             OPARUC21,OPARUC22,OPARUC23,OPARUC24,OPARUC25:      
                             OPARUC26,OPARUC27,OPARUC28,OPARUC29,OPARUC30:      
                             OPARUY11,OPARUY12,OPARUY13,OPARUY14,OPARUY15:      
                             OPARUT11,OPARUT12,OPARUT13,OPARUT14,OPARUT15:      
                             OPARUF11,OPARUF12,OPARUF13,OPARUF14,OPARUF15:      
                             OPARUYN1,OPARUYN2,OPARADST,OPARADET,OPARUT16:      
                             OPARUT17,OPARUT18,OPARUT19,OPARSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROPARD1  RESET     KEY10                                                       
          WRITE     OPRARDA1,KEY10;OPARUNID,OPARATIM,OPARANUR,OPARRLAT,OPARPCLC:
                                   OPARCSFS,OPARMDRE,OPARXRAY,OPARBLEM,OPARMUPJ:
                                   OPARPMED,OPARALCK,OPARPROT,OPARUC01,OPARUC02:
                                   OPARUC03,OPARUC04,OPARUC05,OPARUC06,OPARUC07:
                                   OPARUC08,OPARUC09,OPARUC10,OPARUY01,OPARUY02:
                                   OPARUY03,OPARUY04,OPARUY05,OPARUT01,OPARUT02:
                                   OPARUT03,OPARUT04,OPARUT05,OPARUF01,OPARUF02:
                                   OPARUF03,OPARUF04,OPARUF05,OPARTCAL,OPARUIAR:
                                   OPARANAP,OPARANAS,OPARANAE,OPARITYP,OPARUC11:
                                   OPARUC12,OPARUC13,OPARUC14,OPARUC15,OPARUC16:
                                   OPARUC17,OPARUC18,OPARUC19,OPARUC20,OPARUY06:
                                   OPARUY07,OPARUY08,OPARUY09,OPARUY10,OPARUT06:
                                   OPARUT07,OPARUT08,OPARUT09,OPARUT10,OPARUF06:
                                   OPARUF07,OPARUF08,OPARUF09,OPARUF10,OPARUANA:
                                   OPARTIRF,OPARNUF1,OPARNUF2,OPARTIRB,OPARNUB1:
                                   OPARNUB2,OPARTIRD,OPARNUD1,OPARNUD2,OPARTETC:
                                   OPARUREC,OPARTEXP,OPARTICU,OPARRDCD,OPARTIDP:
                                   OPARUC21,OPARUC22,OPARUC23,OPARUC24,OPARUC25:
                                   OPARUC26,OPARUC27,OPARUC28,OPARUC29,OPARUC30:
                                   OPARUY11,OPARUY12,OPARUY13,OPARUY14,OPARUY15:
                                   OPARUT11,OPARUT12,OPARUT13,OPARUT14,OPARUT15:
                                   OPARUF11,OPARUF12,OPARUF13,OPARUF14,OPARUF15:
                                   OPARUYN1,OPARUYN2,OPARADST,OPARADET,OPARUT16:
                                   OPARUT17,OPARUT18,OPARUT19,OPARSPAR          
          RETURN
.
DEOPARD1  RESET     KEY10                                                       
          DELETE    OPRARDA1,KEY10                                              
          RETURN
.
RLOPARD1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READL     OPRARDA1,KEY10;OPARUNID,OPARATIM,OPARANUR,OPARRLAT,OPARPCLC:
                                   OPARCSFS,OPARMDRE,OPARXRAY,OPARBLEM,OPARMUPJ:
                                   OPARPMED,OPARALCK,OPARPROT,OPARUC01,OPARUC02:
                                   OPARUC03,OPARUC04,OPARUC05,OPARUC06,OPARUC07:
                                   OPARUC08,OPARUC09,OPARUC10,OPARUY01,OPARUY02:
                                   OPARUY03,OPARUY04,OPARUY05,OPARUT01,OPARUT02:
                                   OPARUT03,OPARUT04,OPARUT05,OPARUF01,OPARUF02:
                                   OPARUF03,OPARUF04,OPARUF05,OPARTCAL,OPARUIAR:
                                   OPARANAP,OPARANAS,OPARANAE,OPARITYP,OPARUC11:
                                   OPARUC12,OPARUC13,OPARUC14,OPARUC15,OPARUC16:
                                   OPARUC17,OPARUC18,OPARUC19,OPARUC20,OPARUY06:
                                   OPARUY07,OPARUY08,OPARUY09,OPARUY10,OPARUT06:
                                   OPARUT07,OPARUT08,OPARUT09,OPARUT10,OPARUF06:
                                   OPARUF07,OPARUF08,OPARUF09,OPARUF10,OPARUANA:
                                   OPARTIRF,OPARNUF1,OPARNUF2,OPARTIRB,OPARNUB1:
                                   OPARNUB2,OPARTIRD,OPARNUD1,OPARNUD2,OPARTETC:
                                   OPARUREC,OPARTEXP,OPARTICU,OPARRDCD,OPARTIDP:
                                   OPARUC21,OPARUC22,OPARUC23,OPARUC24,OPARUC25:
                                   OPARUC26,OPARUC27,OPARUC28,OPARUC29,OPARUC30:
                                   OPARUY11,OPARUY12,OPARUY13,OPARUY14,OPARUY15:
                                   OPARUT11,OPARUT12,OPARUT13,OPARUT14,OPARUT15:
                                   OPARUF11,OPARUF12,OPARUF13,OPARUF14,OPARUF15:
                                   OPARUYN1,OPARUYN2,OPARADST,OPARADET,OPARUT16:
                                   OPARUT17,OPARUT18,OPARUT19,OPARSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOPARD1  MOVE      ZERO,OVRCD                                                  
          READLKS   OPRARDA1;OPARUNID,OPARATIM,OPARANUR,OPARRLAT,OPARPCLC:      
                             OPARCSFS,OPARMDRE,OPARXRAY,OPARBLEM,OPARMUPJ:      
                             OPARPMED,OPARALCK,OPARPROT,OPARUC01,OPARUC02:      
                             OPARUC03,OPARUC04,OPARUC05,OPARUC06,OPARUC07:      
                             OPARUC08,OPARUC09,OPARUC10,OPARUY01,OPARUY02:      
                             OPARUY03,OPARUY04,OPARUY05,OPARUT01,OPARUT02:      
                             OPARUT03,OPARUT04,OPARUT05,OPARUF01,OPARUF02:      
                             OPARUF03,OPARUF04,OPARUF05,OPARTCAL,OPARUIAR:      
                             OPARANAP,OPARANAS,OPARANAE,OPARITYP,OPARUC11:      
                             OPARUC12,OPARUC13,OPARUC14,OPARUC15,OPARUC16:      
                             OPARUC17,OPARUC18,OPARUC19,OPARUC20,OPARUY06:      
                             OPARUY07,OPARUY08,OPARUY09,OPARUY10,OPARUT06:      
                             OPARUT07,OPARUT08,OPARUT09,OPARUT10,OPARUF06:      
                             OPARUF07,OPARUF08,OPARUF09,OPARUF10,OPARUANA:      
                             OPARTIRF,OPARNUF1,OPARNUF2,OPARTIRB,OPARNUB1:      
                             OPARNUB2,OPARTIRD,OPARNUD1,OPARNUD2,OPARTETC:      
                             OPARUREC,OPARTEXP,OPARTICU,OPARRDCD,OPARTIDP:      
                             OPARUC21,OPARUC22,OPARUC23,OPARUC24,OPARUC25:      
                             OPARUC26,OPARUC27,OPARUC28,OPARUC29,OPARUC30:      
                             OPARUY11,OPARUY12,OPARUY13,OPARUY14,OPARUY15:      
                             OPARUT11,OPARUT12,OPARUT13,OPARUT14,OPARUT15:      
                             OPARUF11,OPARUF12,OPARUF13,OPARUF14,OPARUF15:      
                             OPARUYN1,OPARUYN2,OPARADST,OPARADET,OPARUT16:      
                             OPARUT17,OPARUT18,OPARUT19,OPARSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOPARD1  MOVE      ZERO,OVRCD                                                  
          READLKP   OPRARDA1;OPARUNID,OPARATIM,OPARANUR,OPARRLAT,OPARPCLC:      
                             OPARCSFS,OPARMDRE,OPARXRAY,OPARBLEM,OPARMUPJ:      
                             OPARPMED,OPARALCK,OPARPROT,OPARUC01,OPARUC02:      
                             OPARUC03,OPARUC04,OPARUC05,OPARUC06,OPARUC07:      
                             OPARUC08,OPARUC09,OPARUC10,OPARUY01,OPARUY02:      
                             OPARUY03,OPARUY04,OPARUY05,OPARUT01,OPARUT02:      
                             OPARUT03,OPARUT04,OPARUT05,OPARUF01,OPARUF02:      
                             OPARUF03,OPARUF04,OPARUF05,OPARTCAL,OPARUIAR:      
                             OPARANAP,OPARANAS,OPARANAE,OPARITYP,OPARUC11:      
                             OPARUC12,OPARUC13,OPARUC14,OPARUC15,OPARUC16:      
                             OPARUC17,OPARUC18,OPARUC19,OPARUC20,OPARUY06:      
                             OPARUY07,OPARUY08,OPARUY09,OPARUY10,OPARUT06:      
                             OPARUT07,OPARUT08,OPARUT09,OPARUT10,OPARUF06:      
                             OPARUF07,OPARUF08,OPARUF09,OPARUF10,OPARUANA:      
                             OPARTIRF,OPARNUF1,OPARNUF2,OPARTIRB,OPARNUB1:      
                             OPARNUB2,OPARTIRD,OPARNUD1,OPARNUD2,OPARTETC:      
                             OPARUREC,OPARTEXP,OPARTICU,OPARRDCD,OPARTIDP:      
                             OPARUC21,OPARUC22,OPARUC23,OPARUC24,OPARUC25:      
                             OPARUC26,OPARUC27,OPARUC28,OPARUC29,OPARUC30:      
                             OPARUY11,OPARUY12,OPARUY13,OPARUY14,OPARUY15:      
                             OPARUT11,OPARUT12,OPARUT13,OPARUT14,OPARUT15:      
                             OPARUF11,OPARUF12,OPARUF13,OPARUF14,OPARUF15:      
                             OPARUYN1,OPARUYN2,OPARADST,OPARADET,OPARUT16:      
                             OPARUT17,OPARUT18,OPARUT19,OPARSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOPARD1  RESET     KEY10                                                       
          UNLOCK    OPRARDA1                                                    
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WAOPAR00
          MOVE      "   68",AUDTSECT
          MOVE      "238",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WAOPAR99 IF NOT EQUAL
.
          PACK     OPARAUDD,CCC,CYY,CMM,CDD
          REP       " 0",OPARAUDD
          CLOCK     TIME,OPARAUDT
          MOVE      PORT,OPARAUDP
          LOAD      OPARAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,OPARAUDS
          MOVE      PASSCODE,OPARAUDO
          PACK      KEY19,OPARAUDD,OPARAUDT,OPARAUDP,OPARAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWOPAR
WAOPAR99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DAOPAR00
          MOVE      "   68",AUDTSECT
          MOVE      "238",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DAOPAR99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADOPAR
DAOPAR99  RETURN
ASOPARD   RESET     KEY19                                                       
          READ      OPRAUDAR,KEY19;;                                            
          RETURN
.
AKOPARD                                                                         
          MOVE      ZERO,OVRCD
          READKS    OPRAUDAR;OPARAUDD,OPARAUDT,OPARAUDP,OPARAUDR,OPARAUDS:      
                    OPARAUDO,OPARUNID,OPARATIM,OPARANUR,OPARRLAT,OPARPCLC:      
                             OPARCSFS,OPARMDRE,OPARXRAY,OPARBLEM,OPARMUPJ:      
                             OPARPMED,OPARALCK,OPARPROT,OPARUC01,OPARUC02:      
                             OPARUC03,OPARUC04,OPARUC05,OPARUC06,OPARUC07:      
                             OPARUC08,OPARUC09,OPARUC10,OPARUY01,OPARUY02:      
                             OPARUY03,OPARUY04,OPARUY05,OPARUT01,OPARUT02:      
                             OPARUT03,OPARUT04,OPARUT05,OPARUF01,OPARUF02:      
                             OPARUF03,OPARUF04,OPARUF05,OPARTCAL,OPARUIAR:      
                             OPARANAP,OPARANAS,OPARANAE,OPARITYP,OPARUC11:      
                             OPARUC12,OPARUC13,OPARUC14,OPARUC15,OPARUC16:      
                             OPARUC17,OPARUC18,OPARUC19,OPARUC20,OPARUY06:      
                             OPARUY07,OPARUY08,OPARUY09,OPARUY10,OPARUT06:      
                             OPARUT07,OPARUT08,OPARUT09,OPARUT10,OPARUF06:      
                             OPARUF07,OPARUF08,OPARUF09,OPARUF10,OPARUANA:      
                             OPARTIRF,OPARNUF1,OPARNUF2,OPARTIRB,OPARNUB1:      
                             OPARNUB2,OPARTIRD,OPARNUD1,OPARNUD2,OPARTETC:      
                             OPARUREC,OPARTEXP,OPARTICU,OPARRDCD,OPARTIDP:      
                             OPARUC21,OPARUC22,OPARUC23,OPARUC24,OPARUC25:      
                             OPARUC26,OPARUC27,OPARUC28,OPARUC29,OPARUC30:      
                             OPARUY11,OPARUY12,OPARUY13,OPARUY14,OPARUY15:      
                             OPARUT11,OPARUT12,OPARUT13,OPARUT14,OPARUT15:      
                             OPARUF11,OPARUF12,OPARUF13,OPARUF14,OPARUF15:      
                             OPARUYN1,OPARUYN2,OPARADST,OPARADET,OPARUT16:      
                             OPARUT17,OPARUT18,OPARUT19,OPARSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
AUOPARD                                                                         
          UPDATE    OPRAUDAR;OPARAUDD,OPARAUDT,OPARAUDP,OPARAUDR,OPARAUDS:      
                    OPARAUDO,OPARUNID,OPARATIM,OPARANUR,OPARRLAT,OPARPCLC:      
                             OPARCSFS,OPARMDRE,OPARXRAY,OPARBLEM,OPARMUPJ:      
                             OPARPMED,OPARALCK,OPARPROT,OPARUC01,OPARUC02:      
                             OPARUC03,OPARUC04,OPARUC05,OPARUC06,OPARUC07:      
                             OPARUC08,OPARUC09,OPARUC10,OPARUY01,OPARUY02:      
                             OPARUY03,OPARUY04,OPARUY05,OPARUT01,OPARUT02:      
                             OPARUT03,OPARUT04,OPARUT05,OPARUF01,OPARUF02:      
                             OPARUF03,OPARUF04,OPARUF05,OPARTCAL,OPARUIAR:      
                             OPARANAP,OPARANAS,OPARANAE,OPARITYP,OPARUC11:      
                             OPARUC12,OPARUC13,OPARUC14,OPARUC15,OPARUC16:      
                             OPARUC17,OPARUC18,OPARUC19,OPARUC20,OPARUY06:      
                             OPARUY07,OPARUY08,OPARUY09,OPARUY10,OPARUT06:      
                             OPARUT07,OPARUT08,OPARUT09,OPARUT10,OPARUF06:      
                             OPARUF07,OPARUF08,OPARUF09,OPARUF10,OPARUANA:      
                             OPARTIRF,OPARNUF1,OPARNUF2,OPARTIRB,OPARNUB1:      
                             OPARNUB2,OPARTIRD,OPARNUD1,OPARNUD2,OPARTETC:      
                             OPARUREC,OPARTEXP,OPARTICU,OPARRDCD,OPARTIDP:      
                             OPARUC21,OPARUC22,OPARUC23,OPARUC24,OPARUC25:      
                             OPARUC26,OPARUC27,OPARUC28,OPARUC29,OPARUC30:      
                             OPARUY11,OPARUY12,OPARUY13,OPARUY14,OPARUY15:      
                             OPARUT11,OPARUT12,OPARUT13,OPARUT14,OPARUT15:      
                             OPARUF11,OPARUF12,OPARUF13,OPARUF14,OPARUF15:      
                             OPARUYN1,OPARUYN2,OPARADST,OPARADET,OPARUT16:      
                             OPARUT17,OPARUT18,OPARUT19,OPARSPAR                
          RETURN
.
AWOPARD   RESET     KEY19                                                       
          WRITE     OPRAUDAR,KEY19;OPARAUDD,OPARAUDT,OPARAUDP,OPARAUDR,OPARAUDS:
                    OPARAUDO,OPARUNID,OPARATIM,OPARANUR,OPARRLAT,OPARPCLC:      
                             OPARCSFS,OPARMDRE,OPARXRAY,OPARBLEM,OPARMUPJ:      
                             OPARPMED,OPARALCK,OPARPROT,OPARUC01,OPARUC02:      
                             OPARUC03,OPARUC04,OPARUC05,OPARUC06,OPARUC07:      
                             OPARUC08,OPARUC09,OPARUC10,OPARUY01,OPARUY02:      
                             OPARUY03,OPARUY04,OPARUY05,OPARUT01,OPARUT02:      
                             OPARUT03,OPARUT04,OPARUT05,OPARUF01,OPARUF02:      
                             OPARUF03,OPARUF04,OPARUF05,OPARTCAL,OPARUIAR:      
                             OPARANAP,OPARANAS,OPARANAE,OPARITYP,OPARUC11:      
                             OPARUC12,OPARUC13,OPARUC14,OPARUC15,OPARUC16:      
                             OPARUC17,OPARUC18,OPARUC19,OPARUC20,OPARUY06:      
                             OPARUY07,OPARUY08,OPARUY09,OPARUY10,OPARUT06:      
                             OPARUT07,OPARUT08,OPARUT09,OPARUT10,OPARUF06:      
                             OPARUF07,OPARUF08,OPARUF09,OPARUF10,OPARUANA:      
                             OPARTIRF,OPARNUF1,OPARNUF2,OPARTIRB,OPARNUB1:      
                             OPARNUB2,OPARTIRD,OPARNUD1,OPARNUD2,OPARTETC:      
                             OPARUREC,OPARTEXP,OPARTICU,OPARRDCD,OPARTIDP:      
                             OPARUC21,OPARUC22,OPARUC23,OPARUC24,OPARUC25:      
                             OPARUC26,OPARUC27,OPARUC28,OPARUC29,OPARUC30:      
                             OPARUY11,OPARUY12,OPARUY13,OPARUY14,OPARUY15:      
                             OPARUT11,OPARUT12,OPARUT13,OPARUT14,OPARUT15:      
                             OPARUF11,OPARUF12,OPARUF13,OPARUF14,OPARUF15:      
                             OPARUYN1,OPARUYN2,OPARADST,OPARADET,OPARUT16:      
                             OPARUT17,OPARUT18,OPARUT19,OPARSPAR                
          RETURN
.
ADOPARD   RESET     KEY19                                                       
          DELETE    OPRAUDAR,KEY19;                                             
          RETURN
.
