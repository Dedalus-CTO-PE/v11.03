.
. OPRSRGIO    
. --------
. Filename     : oprsrgaf.dat
.
RSOPSRG1  RESET     KEY11                                                       
          READ      OPRSRGA1,KEY11;;                                            
          RETURN
.
RAOPSRG1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      OPRSRGA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPSRG1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      OPRSRGA1,KEY11;OPSGUNID,OPSGTMNO,OPSGTIPS,OPSGTIDR,OPSGTISS:
                                   OPSGTISE,OPSGSGDL,OPSGCCNT,OPSGCNTO,OPSGBLOS:
                                   OPSGWCON,OPSGWCM1,OPSGWCM2,OPSGWCM3,OPSGICD1:
                                   OPSGICD2,OPSGICD3,OPSGDST1,OPSGDCD1,OPSGDNM1:
                                   OPSGDPS1,OPSGDCK1,OPSGDPR1,OPSGDST2,OPSGDCD2:
                                   OPSGDNM2,OPSGDPS2,OPSGDCK2,OPSGDPR2,OPSGCAT1:
                                   OPSGCAT2,OPSGDRT1,OPSGDRT2,OPSGPACK,OPSGDRS1:
                                   OPSGDRS2,OPSGDRS3,OPSGWDV1,OPSGWDV2,OPSGWDV3:
                                   OPSGIRIG,OPSGIRGS,OPSGIRAI,OPSGIRAO,OPSGCLFS:
                                   OPSGINFC,OPSGSPMI,OPSGSPAP,OPSGOTHR,OPSGUC01:
                                   OPSGUC02,OPSGUC03,OPSGUC04,OPSGUC05,OPSGUC06:
                                   OPSGUC07,OPSGUC08,OPSGUC09,OPSGUC10,OPSGUC11:
                                   OPSGUC12,OPSGUC13,OPSGUC14,OPSGUC15,OPSGUC16:
                                   OPSGUC17,OPSGUC18,OPSGUC19,OPSGUC20,OPSGUY01:
                                   OPSGUY02,OPSGUY03,OPSGUY04,OPSGUY05,OPSGUY06:
                                   OPSGUY07,OPSGUY08,OPSGUY09,OPSGUY10,OPSGUT01:
                                   OPSGUT02,OPSGUT03,OPSGUT04,OPSGUT05,OPSGUT06:
                                   OPSGUT07,OPSGUT08,OPSGUT09,OPSGUT10,OPSGUF01:
                                   OPSGUF02,OPSGUF03,OPSGUF04,OPSGUF05,OPSGUF06:
                                   OPSGUF07,OPSGUF08,OPSGUF09,OPSGUF10,OPSGUTHR:
                                   OPSGIDES,OPSGNOOP,OPSGDT3U,OPSGDT3C,OPSGSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKOPSRG1  MOVE      ZERO,OVRCD                                                  
          READKS    OPRSRGA1;OPSGUNID,OPSGTMNO,OPSGTIPS,OPSGTIDR,OPSGTISS:      
                             OPSGTISE,OPSGSGDL,OPSGCCNT,OPSGCNTO,OPSGBLOS:      
                             OPSGWCON,OPSGWCM1,OPSGWCM2,OPSGWCM3,OPSGICD1:      
                             OPSGICD2,OPSGICD3,OPSGDST1,OPSGDCD1,OPSGDNM1:      
                             OPSGDPS1,OPSGDCK1,OPSGDPR1,OPSGDST2,OPSGDCD2:      
                             OPSGDNM2,OPSGDPS2,OPSGDCK2,OPSGDPR2,OPSGCAT1:      
                             OPSGCAT2,OPSGDRT1,OPSGDRT2,OPSGPACK,OPSGDRS1:      
                             OPSGDRS2,OPSGDRS3,OPSGWDV1,OPSGWDV2,OPSGWDV3:      
                             OPSGIRIG,OPSGIRGS,OPSGIRAI,OPSGIRAO,OPSGCLFS:      
                             OPSGINFC,OPSGSPMI,OPSGSPAP,OPSGOTHR,OPSGUC01:      
                             OPSGUC02,OPSGUC03,OPSGUC04,OPSGUC05,OPSGUC06:      
                             OPSGUC07,OPSGUC08,OPSGUC09,OPSGUC10,OPSGUC11:      
                             OPSGUC12,OPSGUC13,OPSGUC14,OPSGUC15,OPSGUC16:      
                             OPSGUC17,OPSGUC18,OPSGUC19,OPSGUC20,OPSGUY01:      
                             OPSGUY02,OPSGUY03,OPSGUY04,OPSGUY05,OPSGUY06:      
                             OPSGUY07,OPSGUY08,OPSGUY09,OPSGUY10,OPSGUT01:      
                             OPSGUT02,OPSGUT03,OPSGUT04,OPSGUT05,OPSGUT06:      
                             OPSGUT07,OPSGUT08,OPSGUT09,OPSGUT10,OPSGUF01:      
                             OPSGUF02,OPSGUF03,OPSGUF04,OPSGUF05,OPSGUF06:      
                             OPSGUF07,OPSGUF08,OPSGUF09,OPSGUF10,OPSGUTHR:      
                             OPSGIDES,OPSGNOOP,OPSGDT3U,OPSGDT3C,OPSGSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPOPSRG1  MOVE      ZERO,OVRCD                                                  
          READKP    OPRSRGA1;OPSGUNID,OPSGTMNO,OPSGTIPS,OPSGTIDR,OPSGTISS:      
                             OPSGTISE,OPSGSGDL,OPSGCCNT,OPSGCNTO,OPSGBLOS:      
                             OPSGWCON,OPSGWCM1,OPSGWCM2,OPSGWCM3,OPSGICD1:      
                             OPSGICD2,OPSGICD3,OPSGDST1,OPSGDCD1,OPSGDNM1:      
                             OPSGDPS1,OPSGDCK1,OPSGDPR1,OPSGDST2,OPSGDCD2:      
                             OPSGDNM2,OPSGDPS2,OPSGDCK2,OPSGDPR2,OPSGCAT1:      
                             OPSGCAT2,OPSGDRT1,OPSGDRT2,OPSGPACK,OPSGDRS1:      
                             OPSGDRS2,OPSGDRS3,OPSGWDV1,OPSGWDV2,OPSGWDV3:      
                             OPSGIRIG,OPSGIRGS,OPSGIRAI,OPSGIRAO,OPSGCLFS:      
                             OPSGINFC,OPSGSPMI,OPSGSPAP,OPSGOTHR,OPSGUC01:      
                             OPSGUC02,OPSGUC03,OPSGUC04,OPSGUC05,OPSGUC06:      
                             OPSGUC07,OPSGUC08,OPSGUC09,OPSGUC10,OPSGUC11:      
                             OPSGUC12,OPSGUC13,OPSGUC14,OPSGUC15,OPSGUC16:      
                             OPSGUC17,OPSGUC18,OPSGUC19,OPSGUC20,OPSGUY01:      
                             OPSGUY02,OPSGUY03,OPSGUY04,OPSGUY05,OPSGUY06:      
                             OPSGUY07,OPSGUY08,OPSGUY09,OPSGUY10,OPSGUT01:      
                             OPSGUT02,OPSGUT03,OPSGUT04,OPSGUT05,OPSGUT06:      
                             OPSGUT07,OPSGUT08,OPSGUT09,OPSGUT10,OPSGUF01:      
                             OPSGUF02,OPSGUF03,OPSGUF04,OPSGUF05,OPSGUF06:      
                             OPSGUF07,OPSGUF08,OPSGUF09,OPSGUF10,OPSGUTHR:      
                             OPSGIDES,OPSGNOOP,OPSGDT3U,OPSGDT3C,OPSGSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPOPSRG1  MOVE      ZERO,OVRCD                                                  
          UPDATE    OPRSRGA1;OPSGUNID,OPSGTMNO,OPSGTIPS,OPSGTIDR,OPSGTISS:      
                             OPSGTISE,OPSGSGDL,OPSGCCNT,OPSGCNTO,OPSGBLOS:      
                             OPSGWCON,OPSGWCM1,OPSGWCM2,OPSGWCM3,OPSGICD1:      
                             OPSGICD2,OPSGICD3,OPSGDST1,OPSGDCD1,OPSGDNM1:      
                             OPSGDPS1,OPSGDCK1,OPSGDPR1,OPSGDST2,OPSGDCD2:      
                             OPSGDNM2,OPSGDPS2,OPSGDCK2,OPSGDPR2,OPSGCAT1:      
                             OPSGCAT2,OPSGDRT1,OPSGDRT2,OPSGPACK,OPSGDRS1:      
                             OPSGDRS2,OPSGDRS3,OPSGWDV1,OPSGWDV2,OPSGWDV3:      
                             OPSGIRIG,OPSGIRGS,OPSGIRAI,OPSGIRAO,OPSGCLFS:      
                             OPSGINFC,OPSGSPMI,OPSGSPAP,OPSGOTHR,OPSGUC01:      
                             OPSGUC02,OPSGUC03,OPSGUC04,OPSGUC05,OPSGUC06:      
                             OPSGUC07,OPSGUC08,OPSGUC09,OPSGUC10,OPSGUC11:      
                             OPSGUC12,OPSGUC13,OPSGUC14,OPSGUC15,OPSGUC16:      
                             OPSGUC17,OPSGUC18,OPSGUC19,OPSGUC20,OPSGUY01:      
                             OPSGUY02,OPSGUY03,OPSGUY04,OPSGUY05,OPSGUY06:      
                             OPSGUY07,OPSGUY08,OPSGUY09,OPSGUY10,OPSGUT01:      
                             OPSGUT02,OPSGUT03,OPSGUT04,OPSGUT05,OPSGUT06:      
                             OPSGUT07,OPSGUT08,OPSGUT09,OPSGUT10,OPSGUF01:      
                             OPSGUF02,OPSGUF03,OPSGUF04,OPSGUF05,OPSGUF06:      
                             OPSGUF07,OPSGUF08,OPSGUF09,OPSGUF10,OPSGUTHR:      
                             OPSGIDES,OPSGNOOP,OPSGDT3U,OPSGDT3C,OPSGSPAR       
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROPSRG1  RESET     KEY11                                                       
          WRITE     OPRSRGA1,KEY11;OPSGUNID,OPSGTMNO,OPSGTIPS,OPSGTIDR,OPSGTISS:
                                   OPSGTISE,OPSGSGDL,OPSGCCNT,OPSGCNTO,OPSGBLOS:
                                   OPSGWCON,OPSGWCM1,OPSGWCM2,OPSGWCM3,OPSGICD1:
                                   OPSGICD2,OPSGICD3,OPSGDST1,OPSGDCD1,OPSGDNM1:
                                   OPSGDPS1,OPSGDCK1,OPSGDPR1,OPSGDST2,OPSGDCD2:
                                   OPSGDNM2,OPSGDPS2,OPSGDCK2,OPSGDPR2,OPSGCAT1:
                                   OPSGCAT2,OPSGDRT1,OPSGDRT2,OPSGPACK,OPSGDRS1:
                                   OPSGDRS2,OPSGDRS3,OPSGWDV1,OPSGWDV2,OPSGWDV3:
                                   OPSGIRIG,OPSGIRGS,OPSGIRAI,OPSGIRAO,OPSGCLFS:
                                   OPSGINFC,OPSGSPMI,OPSGSPAP,OPSGOTHR,OPSGUC01:
                                   OPSGUC02,OPSGUC03,OPSGUC04,OPSGUC05,OPSGUC06:
                                   OPSGUC07,OPSGUC08,OPSGUC09,OPSGUC10,OPSGUC11:
                                   OPSGUC12,OPSGUC13,OPSGUC14,OPSGUC15,OPSGUC16:
                                   OPSGUC17,OPSGUC18,OPSGUC19,OPSGUC20,OPSGUY01:
                                   OPSGUY02,OPSGUY03,OPSGUY04,OPSGUY05,OPSGUY06:
                                   OPSGUY07,OPSGUY08,OPSGUY09,OPSGUY10,OPSGUT01:
                                   OPSGUT02,OPSGUT03,OPSGUT04,OPSGUT05,OPSGUT06:
                                   OPSGUT07,OPSGUT08,OPSGUT09,OPSGUT10,OPSGUF01:
                                   OPSGUF02,OPSGUF03,OPSGUF04,OPSGUF05,OPSGUF06:
                                   OPSGUF07,OPSGUF08,OPSGUF09,OPSGUF10,OPSGUTHR:
                                   OPSGIDES,OPSGNOOP,OPSGDT3U,OPSGDT3C,OPSGSPAR 
          RETURN
.
DEOPSRG1  RESET     KEY11                                                       
          DELETE    OPRSRGA1,KEY11                                              
          RETURN
.
RLOPSRG1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READL     OPRSRGA1,KEY11;OPSGUNID,OPSGTMNO,OPSGTIPS,OPSGTIDR,OPSGTISS:
                                   OPSGTISE,OPSGSGDL,OPSGCCNT,OPSGCNTO,OPSGBLOS:
                                   OPSGWCON,OPSGWCM1,OPSGWCM2,OPSGWCM3,OPSGICD1:
                                   OPSGICD2,OPSGICD3,OPSGDST1,OPSGDCD1,OPSGDNM1:
                                   OPSGDPS1,OPSGDCK1,OPSGDPR1,OPSGDST2,OPSGDCD2:
                                   OPSGDNM2,OPSGDPS2,OPSGDCK2,OPSGDPR2,OPSGCAT1:
                                   OPSGCAT2,OPSGDRT1,OPSGDRT2,OPSGPACK,OPSGDRS1:
                                   OPSGDRS2,OPSGDRS3,OPSGWDV1,OPSGWDV2,OPSGWDV3:
                                   OPSGIRIG,OPSGIRGS,OPSGIRAI,OPSGIRAO,OPSGCLFS:
                                   OPSGINFC,OPSGSPMI,OPSGSPAP,OPSGOTHR,OPSGUC01:
                                   OPSGUC02,OPSGUC03,OPSGUC04,OPSGUC05,OPSGUC06:
                                   OPSGUC07,OPSGUC08,OPSGUC09,OPSGUC10,OPSGUC11:
                                   OPSGUC12,OPSGUC13,OPSGUC14,OPSGUC15,OPSGUC16:
                                   OPSGUC17,OPSGUC18,OPSGUC19,OPSGUC20,OPSGUY01:
                                   OPSGUY02,OPSGUY03,OPSGUY04,OPSGUY05,OPSGUY06:
                                   OPSGUY07,OPSGUY08,OPSGUY09,OPSGUY10,OPSGUT01:
                                   OPSGUT02,OPSGUT03,OPSGUT04,OPSGUT05,OPSGUT06:
                                   OPSGUT07,OPSGUT08,OPSGUT09,OPSGUT10,OPSGUF01:
                                   OPSGUF02,OPSGUF03,OPSGUF04,OPSGUF05,OPSGUF06:
                                   OPSGUF07,OPSGUF08,OPSGUF09,OPSGUF10,OPSGUTHR:
                                   OPSGIDES,OPSGNOOP,OPSGDT3U,OPSGDT3C,OPSGSPAR 
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLOPSRG1  MOVE      ZERO,OVRCD                                                  
          READLKS   OPRSRGA1;OPSGUNID,OPSGTMNO,OPSGTIPS,OPSGTIDR,OPSGTISS:      
                             OPSGTISE,OPSGSGDL,OPSGCCNT,OPSGCNTO,OPSGBLOS:      
                             OPSGWCON,OPSGWCM1,OPSGWCM2,OPSGWCM3,OPSGICD1:      
                             OPSGICD2,OPSGICD3,OPSGDST1,OPSGDCD1,OPSGDNM1:      
                             OPSGDPS1,OPSGDCK1,OPSGDPR1,OPSGDST2,OPSGDCD2:      
                             OPSGDNM2,OPSGDPS2,OPSGDCK2,OPSGDPR2,OPSGCAT1:      
                             OPSGCAT2,OPSGDRT1,OPSGDRT2,OPSGPACK,OPSGDRS1:      
                             OPSGDRS2,OPSGDRS3,OPSGWDV1,OPSGWDV2,OPSGWDV3:      
                             OPSGIRIG,OPSGIRGS,OPSGIRAI,OPSGIRAO,OPSGCLFS:      
                             OPSGINFC,OPSGSPMI,OPSGSPAP,OPSGOTHR,OPSGUC01:      
                             OPSGUC02,OPSGUC03,OPSGUC04,OPSGUC05,OPSGUC06:      
                             OPSGUC07,OPSGUC08,OPSGUC09,OPSGUC10,OPSGUC11:      
                             OPSGUC12,OPSGUC13,OPSGUC14,OPSGUC15,OPSGUC16:      
                             OPSGUC17,OPSGUC18,OPSGUC19,OPSGUC20,OPSGUY01:      
                             OPSGUY02,OPSGUY03,OPSGUY04,OPSGUY05,OPSGUY06:      
                             OPSGUY07,OPSGUY08,OPSGUY09,OPSGUY10,OPSGUT01:      
                             OPSGUT02,OPSGUT03,OPSGUT04,OPSGUT05,OPSGUT06:      
                             OPSGUT07,OPSGUT08,OPSGUT09,OPSGUT10,OPSGUF01:      
                             OPSGUF02,OPSGUF03,OPSGUF04,OPSGUF05,OPSGUF06:      
                             OPSGUF07,OPSGUF08,OPSGUF09,OPSGUF10,OPSGUTHR:      
                             OPSGIDES,OPSGNOOP,OPSGDT3U,OPSGDT3C,OPSGSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLOPSRG1  MOVE      ZERO,OVRCD                                                  
          READLKP   OPRSRGA1;OPSGUNID,OPSGTMNO,OPSGTIPS,OPSGTIDR,OPSGTISS:      
                             OPSGTISE,OPSGSGDL,OPSGCCNT,OPSGCNTO,OPSGBLOS:      
                             OPSGWCON,OPSGWCM1,OPSGWCM2,OPSGWCM3,OPSGICD1:      
                             OPSGICD2,OPSGICD3,OPSGDST1,OPSGDCD1,OPSGDNM1:      
                             OPSGDPS1,OPSGDCK1,OPSGDPR1,OPSGDST2,OPSGDCD2:      
                             OPSGDNM2,OPSGDPS2,OPSGDCK2,OPSGDPR2,OPSGCAT1:      
                             OPSGCAT2,OPSGDRT1,OPSGDRT2,OPSGPACK,OPSGDRS1:      
                             OPSGDRS2,OPSGDRS3,OPSGWDV1,OPSGWDV2,OPSGWDV3:      
                             OPSGIRIG,OPSGIRGS,OPSGIRAI,OPSGIRAO,OPSGCLFS:      
                             OPSGINFC,OPSGSPMI,OPSGSPAP,OPSGOTHR,OPSGUC01:      
                             OPSGUC02,OPSGUC03,OPSGUC04,OPSGUC05,OPSGUC06:      
                             OPSGUC07,OPSGUC08,OPSGUC09,OPSGUC10,OPSGUC11:      
                             OPSGUC12,OPSGUC13,OPSGUC14,OPSGUC15,OPSGUC16:      
                             OPSGUC17,OPSGUC18,OPSGUC19,OPSGUC20,OPSGUY01:      
                             OPSGUY02,OPSGUY03,OPSGUY04,OPSGUY05,OPSGUY06:      
                             OPSGUY07,OPSGUY08,OPSGUY09,OPSGUY10,OPSGUT01:      
                             OPSGUT02,OPSGUT03,OPSGUT04,OPSGUT05,OPSGUT06:      
                             OPSGUT07,OPSGUT08,OPSGUT09,OPSGUT10,OPSGUF01:      
                             OPSGUF02,OPSGUF03,OPSGUF04,OPSGUF05,OPSGUF06:      
                             OPSGUF07,OPSGUF08,OPSGUF09,OPSGUF10,OPSGUTHR:      
                             OPSGIDES,OPSGNOOP,OPSGDT3U,OPSGDT3C,OPSGSPAR       
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUOPSRG1  RESET     KEY11                                                       
          UNLOCK    OPRSRGA1                                                    
          RETURN
.
.**************************************
. WAssff - Write Audit Record           
. Requires - AUDTTYPE 1=write 
.                     2=before change
.                     3=after change
.                     4=delete
.**************************************
WAOPSG00
          MOVE      "   68",AUDTSECT
          MOVE      "239",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      WAOPSG99 IF NOT EQUAL
.
          PACK     OPSGAUDD,CCC,CYY,CMM,CDD
          REP       " 0",OPSGAUDD
          CLOCK     TIME,OPSGAUDT
          MOVE      PORT,OPSGAUDP
          LOAD      OPSGAUDR,AUDTTYPE,ANSA,ANSB,ANSC,ANSD
          MOVE      ONE,OPSGAUDS
          MOVE      PASSCODE,OPSGAUDO
          PACK      KEY19,OPSGAUDD,OPSGAUDT,OPSGAUDP,OPSGAUDR
          MOVE      KEY19,AUDTSKEY
          CALL      AWOPSG
WAOPSG99  RETURN
.**************************************
. DAssff - Delete Before Change Audit 
.**************************************
DAOPSG00
          MOVE      "   68",AUDTSECT
          MOVE      "239",AUDTPOST
          READ      CONTROLF,AUDTSECT;*AUDTPOST,AUDTFLAG
          COMPARE   ONE,AUDTFLAG
          GOTO      DAOPSG99 IF NOT EQUAL
.
          MOVE      AUDTSKEY,KEY19
          CALL      ADOPSG
DAOPSG99  RETURN
ASOPSRG   RESET     KEY19                                                       
          READ      OPRAUDSG,KEY19;;                                            
          RETURN
.
AKOPSRG                                                                         
          MOVE      ZERO,OVRCD
          READKS    OPRAUDSG;OPSGAUDD,OPSGAUDT,OPSGAUDP,OPSGAUDR,OPSGAUDS:      
                    OPSGAUDO,OPSGUNID,OPSGTMNO,OPSGTIPS,OPSGTIDR,OPSGTISS:      
                             OPSGTISE,OPSGSGDL,OPSGCCNT,OPSGCNTO,OPSGBLOS:      
                             OPSGWCON,OPSGWCM1,OPSGWCM2,OPSGWCM3,OPSGICD1:      
                             OPSGICD2,OPSGICD3,OPSGDST1,OPSGDCD1,OPSGDNM1:      
                             OPSGDPS1,OPSGDCK1,OPSGDPR1,OPSGDST2,OPSGDCD2:      
                             OPSGDNM2,OPSGDPS2,OPSGDCK2,OPSGDPR2,OPSGCAT1:      
                             OPSGCAT2,OPSGDRT1,OPSGDRT2,OPSGPACK,OPSGDRS1:      
                             OPSGDRS2,OPSGDRS3,OPSGWDV1,OPSGWDV2,OPSGWDV3:      
                             OPSGIRIG,OPSGIRGS,OPSGIRAI,OPSGIRAO,OPSGCLFS:      
                             OPSGINFC,OPSGSPMI,OPSGSPAP,OPSGOTHR,OPSGUC01:      
                             OPSGUC02,OPSGUC03,OPSGUC04,OPSGUC05,OPSGUC06:      
                             OPSGUC07,OPSGUC08,OPSGUC09,OPSGUC10,OPSGUC11:      
                             OPSGUC12,OPSGUC13,OPSGUC14,OPSGUC15,OPSGUC16:      
                             OPSGUC17,OPSGUC18,OPSGUC19,OPSGUC20,OPSGUY01:      
                             OPSGUY02,OPSGUY03,OPSGUY04,OPSGUY05,OPSGUY06:      
                             OPSGUY07,OPSGUY08,OPSGUY09,OPSGUY10,OPSGUT01:      
                             OPSGUT02,OPSGUT03,OPSGUT04,OPSGUT05,OPSGUT06:      
                             OPSGUT07,OPSGUT08,OPSGUT09,OPSGUT10,OPSGUF01:      
                             OPSGUF02,OPSGUF03,OPSGUF04,OPSGUF05,OPSGUF06:      
                             OPSGUF07,OPSGUF08,OPSGUF09,OPSGUF10,OPSGUTHR:      
                             OPSGIDES,OPSGNOOP,OPSGDT3U,OPSGDT3C,OPSGSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
AUOPSRG                                                                         
          UPDATE    OPRAUDSG;OPSGAUDD,OPSGAUDT,OPSGAUDP,OPSGAUDR,OPSGAUDS:      
                    OPSGAUDO,OPSGUNID,OPSGTMNO,OPSGTIPS,OPSGTIDR,OPSGTISS:      
                             OPSGTISE,OPSGSGDL,OPSGCCNT,OPSGCNTO,OPSGBLOS:      
                             OPSGWCON,OPSGWCM1,OPSGWCM2,OPSGWCM3,OPSGICD1:      
                             OPSGICD2,OPSGICD3,OPSGDST1,OPSGDCD1,OPSGDNM1:      
                             OPSGDPS1,OPSGDCK1,OPSGDPR1,OPSGDST2,OPSGDCD2:      
                             OPSGDNM2,OPSGDPS2,OPSGDCK2,OPSGDPR2,OPSGCAT1:      
                             OPSGCAT2,OPSGDRT1,OPSGDRT2,OPSGPACK,OPSGDRS1:      
                             OPSGDRS2,OPSGDRS3,OPSGWDV1,OPSGWDV2,OPSGWDV3:      
                             OPSGIRIG,OPSGIRGS,OPSGIRAI,OPSGIRAO,OPSGCLFS:      
                             OPSGINFC,OPSGSPMI,OPSGSPAP,OPSGOTHR,OPSGUC01:      
                             OPSGUC02,OPSGUC03,OPSGUC04,OPSGUC05,OPSGUC06:      
                             OPSGUC07,OPSGUC08,OPSGUC09,OPSGUC10,OPSGUC11:      
                             OPSGUC12,OPSGUC13,OPSGUC14,OPSGUC15,OPSGUC16:      
                             OPSGUC17,OPSGUC18,OPSGUC19,OPSGUC20,OPSGUY01:      
                             OPSGUY02,OPSGUY03,OPSGUY04,OPSGUY05,OPSGUY06:      
                             OPSGUY07,OPSGUY08,OPSGUY09,OPSGUY10,OPSGUT01:      
                             OPSGUT02,OPSGUT03,OPSGUT04,OPSGUT05,OPSGUT06:      
                             OPSGUT07,OPSGUT08,OPSGUT09,OPSGUT10,OPSGUF01:      
                             OPSGUF02,OPSGUF03,OPSGUF04,OPSGUF05,OPSGUF06:      
                             OPSGUF07,OPSGUF08,OPSGUF09,OPSGUF10,OPSGUTHR:      
                             OPSGIDES,OPSGNOOP,OPSGDT3U,OPSGDT3C,OPSGSPAR       
          RETURN
.
AWOPSRG   RESET     KEY19                                                       
          WRITE     OPRAUDSG,KEY19;OPSGAUDD,OPSGAUDT,OPSGAUDP,OPSGAUDR,OPSGAUDS:
                    OPSGAUDO,OPSGUNID,OPSGTMNO,OPSGTIPS,OPSGTIDR,OPSGTISS:      
                             OPSGTISE,OPSGSGDL,OPSGCCNT,OPSGCNTO,OPSGBLOS:      
                             OPSGWCON,OPSGWCM1,OPSGWCM2,OPSGWCM3,OPSGICD1:      
                             OPSGICD2,OPSGICD3,OPSGDST1,OPSGDCD1,OPSGDNM1:      
                             OPSGDPS1,OPSGDCK1,OPSGDPR1,OPSGDST2,OPSGDCD2:      
                             OPSGDNM2,OPSGDPS2,OPSGDCK2,OPSGDPR2,OPSGCAT1:      
                             OPSGCAT2,OPSGDRT1,OPSGDRT2,OPSGPACK,OPSGDRS1:      
                             OPSGDRS2,OPSGDRS3,OPSGWDV1,OPSGWDV2,OPSGWDV3:      
                             OPSGIRIG,OPSGIRGS,OPSGIRAI,OPSGIRAO,OPSGCLFS:      
                             OPSGINFC,OPSGSPMI,OPSGSPAP,OPSGOTHR,OPSGUC01:      
                             OPSGUC02,OPSGUC03,OPSGUC04,OPSGUC05,OPSGUC06:      
                             OPSGUC07,OPSGUC08,OPSGUC09,OPSGUC10,OPSGUC11:      
                             OPSGUC12,OPSGUC13,OPSGUC14,OPSGUC15,OPSGUC16:      
                             OPSGUC17,OPSGUC18,OPSGUC19,OPSGUC20,OPSGUY01:      
                             OPSGUY02,OPSGUY03,OPSGUY04,OPSGUY05,OPSGUY06:      
                             OPSGUY07,OPSGUY08,OPSGUY09,OPSGUY10,OPSGUT01:      
                             OPSGUT02,OPSGUT03,OPSGUT04,OPSGUT05,OPSGUT06:      
                             OPSGUT07,OPSGUT08,OPSGUT09,OPSGUT10,OPSGUF01:      
                             OPSGUF02,OPSGUF03,OPSGUF04,OPSGUF05,OPSGUF06:      
                             OPSGUF07,OPSGUF08,OPSGUF09,OPSGUF10,OPSGUTHR:      
                             OPSGIDES,OPSGNOOP,OPSGDT3U,OPSGDT3C,OPSGSPAR       
          RETURN
.
ADOPSRG   RESET     KEY19                                                       
          DELETE    OPRAUDSG,KEY19;                                             
          RETURN
.
