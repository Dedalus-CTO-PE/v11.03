.
. OPRPIMIO    
. --------
. Filename     : oprpimaf.dat
.
RSOPPIM1  RESET     KEY13                                                       
          READ      OPRPIMA1,KEY13;;                                            
          RETURN
.
RAOPPIM1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      OPRPIMA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPPIM1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      OPRPIMA1,KEY13;OPPIUNID,OPPITMNO,DOPPICNT,OPPIICDE,OPPIIQTY:
                                   OPPILTSN,OPPICOST,OPPILOCA,OPPIUC01,OPPIUC02:
                                   OPPIUC03,OPPIUC04,OPPIUC05,OPPIUC06,OPPIUC07:
                                   OPPIUC08,OPPIUC09,OPPIUC10,OPPIUC11,OPPIUC12:
                                   OPPIUC13,OPPIUC14,OPPIUC15,OPPIUC16,OPPIUC17:
                                   OPPIUC18,OPPIUC19,OPPIUC20,OPPIUY01,OPPIUY02:
                                   OPPIUY03,OPPIUY04,OPPIUY05,OPPIUY06,OPPIUY07:
                                   OPPIUY08,OPPIUY09,OPPIUY10,OPPIUT01,OPPIUT02:
                                   OPPIUT03,OPPIUT04,OPPIUT05,OPPIUT06,OPPIUT07:
                                   OPPIUT08,OPPIUT09,OPPIUT10,OPPIUF01,OPPIUF02:
                                   OPPIUF03,OPPIUF04,OPPIUF05,OPPIUF06,OPPIUF07:
                                   OPPIUF08,OPPIUF09,OPPIUF10,OPPIDTRT,OPPIDUMM:
                                   OPPIONUM,OPPIICOS,OPPIRCNT,OPPICDAT,OPPICTIM:
                                   OPPICUID,OPPIBCOD,OPPIAIMP,OPPIUDAT,OPPIUTIM:
                                   OPPIUUID,OPPISPAR                            
          GOTO      OVERCOND IF OVER
          MOVE      DOPPICNT,OPPICNTR                                           
          RETURN
.
RKOPPIM1  MOVE      ZERO,OVRCD                                                  
          READKS    OPRPIMA1;OPPIUNID,OPPITMNO,DOPPICNT,OPPIICDE,OPPIIQTY:      
                             OPPILTSN,OPPICOST,OPPILOCA,OPPIUC01,OPPIUC02:      
                             OPPIUC03,OPPIUC04,OPPIUC05,OPPIUC06,OPPIUC07:      
                             OPPIUC08,OPPIUC09,OPPIUC10,OPPIUC11,OPPIUC12:      
                             OPPIUC13,OPPIUC14,OPPIUC15,OPPIUC16,OPPIUC17:      
                             OPPIUC18,OPPIUC19,OPPIUC20,OPPIUY01,OPPIUY02:      
                             OPPIUY03,OPPIUY04,OPPIUY05,OPPIUY06,OPPIUY07:      
                             OPPIUY08,OPPIUY09,OPPIUY10,OPPIUT01,OPPIUT02:      
                             OPPIUT03,OPPIUT04,OPPIUT05,OPPIUT06,OPPIUT07:      
                             OPPIUT08,OPPIUT09,OPPIUT10,OPPIUF01,OPPIUF02:      
                             OPPIUF03,OPPIUF04,OPPIUF05,OPPIUF06,OPPIUF07:      
                             OPPIUF08,OPPIUF09,OPPIUF10,OPPIDTRT,OPPIDUMM:      
                             OPPIONUM,OPPIICOS,OPPIRCNT,OPPICDAT,OPPICTIM:      
                             OPPICUID,OPPIBCOD,OPPIAIMP,OPPIUDAT,OPPIUTIM:      
                             OPPIUUID,OPPISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DOPPICNT,OPPICNTR                                           
          RETURN
.
RPOPPIM1  MOVE      ZERO,OVRCD                                                  
          READKP    OPRPIMA1;OPPIUNID,OPPITMNO,DOPPICNT,OPPIICDE,OPPIIQTY:      
                             OPPILTSN,OPPICOST,OPPILOCA,OPPIUC01,OPPIUC02:      
                             OPPIUC03,OPPIUC04,OPPIUC05,OPPIUC06,OPPIUC07:      
                             OPPIUC08,OPPIUC09,OPPIUC10,OPPIUC11,OPPIUC12:      
                             OPPIUC13,OPPIUC14,OPPIUC15,OPPIUC16,OPPIUC17:      
                             OPPIUC18,OPPIUC19,OPPIUC20,OPPIUY01,OPPIUY02:      
                             OPPIUY03,OPPIUY04,OPPIUY05,OPPIUY06,OPPIUY07:      
                             OPPIUY08,OPPIUY09,OPPIUY10,OPPIUT01,OPPIUT02:      
                             OPPIUT03,OPPIUT04,OPPIUT05,OPPIUT06,OPPIUT07:      
                             OPPIUT08,OPPIUT09,OPPIUT10,OPPIUF01,OPPIUF02:      
                             OPPIUF03,OPPIUF04,OPPIUF05,OPPIUF06,OPPIUF07:      
                             OPPIUF08,OPPIUF09,OPPIUF10,OPPIDTRT,OPPIDUMM:      
                             OPPIONUM,OPPIICOS,OPPIRCNT,OPPICDAT,OPPICTIM:      
                             OPPICUID,OPPIBCOD,OPPIAIMP,OPPIUDAT,OPPIUTIM:      
                             OPPIUUID,OPPISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DOPPICNT,OPPICNTR                                           
          RETURN
.
UPOPPIM1  MOVE      ZERO,OVRCD                                                  
          MOVE      OPPICNTR,DOPPICNT                                           
          UPDATE    OPRPIMA1;OPPIUNID,OPPITMNO,DOPPICNT,OPPIICDE,OPPIIQTY:      
                             OPPILTSN,OPPICOST,OPPILOCA,OPPIUC01,OPPIUC02:      
                             OPPIUC03,OPPIUC04,OPPIUC05,OPPIUC06,OPPIUC07:      
                             OPPIUC08,OPPIUC09,OPPIUC10,OPPIUC11,OPPIUC12:      
                             OPPIUC13,OPPIUC14,OPPIUC15,OPPIUC16,OPPIUC17:      
                             OPPIUC18,OPPIUC19,OPPIUC20,OPPIUY01,OPPIUY02:      
                             OPPIUY03,OPPIUY04,OPPIUY05,OPPIUY06,OPPIUY07:      
                             OPPIUY08,OPPIUY09,OPPIUY10,OPPIUT01,OPPIUT02:      
                             OPPIUT03,OPPIUT04,OPPIUT05,OPPIUT06,OPPIUT07:      
                             OPPIUT08,OPPIUT09,OPPIUT10,OPPIUF01,OPPIUF02:      
                             OPPIUF03,OPPIUF04,OPPIUF05,OPPIUF06,OPPIUF07:      
                             OPPIUF08,OPPIUF09,OPPIUF10,OPPIDTRT,OPPIDUMM:      
                             OPPIONUM,OPPIICOS,OPPIRCNT,OPPICDAT,OPPICTIM:      
                             OPPICUID,OPPIBCOD,OPPIAIMP,OPPIUDAT,OPPIUTIM:      
                             OPPIUUID,OPPISPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROPPIM1  RESET     KEY13                                                       
          MOVE      OPPICNTR,DOPPICNT                                           
          WRITE     OPRPIMA1,KEY13;OPPIUNID,OPPITMNO,DOPPICNT,OPPIICDE,OPPIIQTY:
                                   OPPILTSN,OPPICOST,OPPILOCA,OPPIUC01,OPPIUC02:
                                   OPPIUC03,OPPIUC04,OPPIUC05,OPPIUC06,OPPIUC07:
                                   OPPIUC08,OPPIUC09,OPPIUC10,OPPIUC11,OPPIUC12:
                                   OPPIUC13,OPPIUC14,OPPIUC15,OPPIUC16,OPPIUC17:
                                   OPPIUC18,OPPIUC19,OPPIUC20,OPPIUY01,OPPIUY02:
                                   OPPIUY03,OPPIUY04,OPPIUY05,OPPIUY06,OPPIUY07:
                                   OPPIUY08,OPPIUY09,OPPIUY10,OPPIUT01,OPPIUT02:
                                   OPPIUT03,OPPIUT04,OPPIUT05,OPPIUT06,OPPIUT07:
                                   OPPIUT08,OPPIUT09,OPPIUT10,OPPIUF01,OPPIUF02:
                                   OPPIUF03,OPPIUF04,OPPIUF05,OPPIUF06,OPPIUF07:
                                   OPPIUF08,OPPIUF09,OPPIUF10,OPPIDTRT,OPPIDUMM:
                                   OPPIONUM,OPPIICOS,OPPIRCNT,OPPICDAT,OPPICTIM:
                                   OPPICUID,OPPIBCOD,OPPIAIMP,OPPIUDAT,OPPIUTIM:
                                   OPPIUUID,OPPISPAR                            
          RETURN
.
DEOPPIM1  RESET     KEY13                                                       
          DELETE    OPRPIMA1,KEY13                                              
          RETURN
.
RLOPPIM1  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READL     OPRPIMA1,KEY13;OPPIUNID,OPPITMNO,DOPPICNT,OPPIICDE,OPPIIQTY:
                                   OPPILTSN,OPPICOST,OPPILOCA,OPPIUC01,OPPIUC02:
                                   OPPIUC03,OPPIUC04,OPPIUC05,OPPIUC06,OPPIUC07:
                                   OPPIUC08,OPPIUC09,OPPIUC10,OPPIUC11,OPPIUC12:
                                   OPPIUC13,OPPIUC14,OPPIUC15,OPPIUC16,OPPIUC17:
                                   OPPIUC18,OPPIUC19,OPPIUC20,OPPIUY01,OPPIUY02:
                                   OPPIUY03,OPPIUY04,OPPIUY05,OPPIUY06,OPPIUY07:
                                   OPPIUY08,OPPIUY09,OPPIUY10,OPPIUT01,OPPIUT02:
                                   OPPIUT03,OPPIUT04,OPPIUT05,OPPIUT06,OPPIUT07:
                                   OPPIUT08,OPPIUT09,OPPIUT10,OPPIUF01,OPPIUF02:
                                   OPPIUF03,OPPIUF04,OPPIUF05,OPPIUF06,OPPIUF07:
                                   OPPIUF08,OPPIUF09,OPPIUF10,OPPIDTRT,OPPIDUMM:
                                   OPPIONUM,OPPIICOS,OPPIRCNT,OPPICDAT,OPPICTIM:
                                   OPPICUID,OPPIBCOD,OPPIAIMP,OPPIUDAT,OPPIUTIM:
                                   OPPIUUID,OPPISPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DOPPICNT,OPPICNTR                                           
          RETURN
.
KLOPPIM1  MOVE      ZERO,OVRCD                                                  
          READLKS   OPRPIMA1;OPPIUNID,OPPITMNO,DOPPICNT,OPPIICDE,OPPIIQTY:      
                             OPPILTSN,OPPICOST,OPPILOCA,OPPIUC01,OPPIUC02:      
                             OPPIUC03,OPPIUC04,OPPIUC05,OPPIUC06,OPPIUC07:      
                             OPPIUC08,OPPIUC09,OPPIUC10,OPPIUC11,OPPIUC12:      
                             OPPIUC13,OPPIUC14,OPPIUC15,OPPIUC16,OPPIUC17:      
                             OPPIUC18,OPPIUC19,OPPIUC20,OPPIUY01,OPPIUY02:      
                             OPPIUY03,OPPIUY04,OPPIUY05,OPPIUY06,OPPIUY07:      
                             OPPIUY08,OPPIUY09,OPPIUY10,OPPIUT01,OPPIUT02:      
                             OPPIUT03,OPPIUT04,OPPIUT05,OPPIUT06,OPPIUT07:      
                             OPPIUT08,OPPIUT09,OPPIUT10,OPPIUF01,OPPIUF02:      
                             OPPIUF03,OPPIUF04,OPPIUF05,OPPIUF06,OPPIUF07:      
                             OPPIUF08,OPPIUF09,OPPIUF10,OPPIDTRT,OPPIDUMM:      
                             OPPIONUM,OPPIICOS,OPPIRCNT,OPPICDAT,OPPICTIM:      
                             OPPICUID,OPPIBCOD,OPPIAIMP,OPPIUDAT,OPPIUTIM:      
                             OPPIUUID,OPPISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DOPPICNT,OPPICNTR                                           
          RETURN
.
PLOPPIM1  MOVE      ZERO,OVRCD                                                  
          READLKP   OPRPIMA1;OPPIUNID,OPPITMNO,DOPPICNT,OPPIICDE,OPPIIQTY:      
                             OPPILTSN,OPPICOST,OPPILOCA,OPPIUC01,OPPIUC02:      
                             OPPIUC03,OPPIUC04,OPPIUC05,OPPIUC06,OPPIUC07:      
                             OPPIUC08,OPPIUC09,OPPIUC10,OPPIUC11,OPPIUC12:      
                             OPPIUC13,OPPIUC14,OPPIUC15,OPPIUC16,OPPIUC17:      
                             OPPIUC18,OPPIUC19,OPPIUC20,OPPIUY01,OPPIUY02:      
                             OPPIUY03,OPPIUY04,OPPIUY05,OPPIUY06,OPPIUY07:      
                             OPPIUY08,OPPIUY09,OPPIUY10,OPPIUT01,OPPIUT02:      
                             OPPIUT03,OPPIUT04,OPPIUT05,OPPIUT06,OPPIUT07:      
                             OPPIUT08,OPPIUT09,OPPIUT10,OPPIUF01,OPPIUF02:      
                             OPPIUF03,OPPIUF04,OPPIUF05,OPPIUF06,OPPIUF07:      
                             OPPIUF08,OPPIUF09,OPPIUF10,OPPIDTRT,OPPIDUMM:      
                             OPPIONUM,OPPIICOS,OPPIRCNT,OPPICDAT,OPPICTIM:      
                             OPPICUID,OPPIBCOD,OPPIAIMP,OPPIUDAT,OPPIUTIM:      
                             OPPIUUID,OPPISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DOPPICNT,OPPICNTR                                           
          RETURN
.
UUOPPIM1  RESET     KEY13                                                       
          UNLOCK    OPRPIMA1                                                    
          RETURN
.
RSOPPIM2  RESET     KEY28                                                       
          READ      OPRPIMA2,KEY28;;                                            
          RETURN
.
RAOPPIM2  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      OPRPIMA2,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPPIM2  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      OPRPIMA2,KEY28;OPPIUNID,OPPITMNO,DOPPICNT,OPPIICDE,OPPIIQTY:
                                   OPPILTSN,OPPICOST,OPPILOCA,OPPIUC01,OPPIUC02:
                                   OPPIUC03,OPPIUC04,OPPIUC05,OPPIUC06,OPPIUC07:
                                   OPPIUC08,OPPIUC09,OPPIUC10,OPPIUC11,OPPIUC12:
                                   OPPIUC13,OPPIUC14,OPPIUC15,OPPIUC16,OPPIUC17:
                                   OPPIUC18,OPPIUC19,OPPIUC20,OPPIUY01,OPPIUY02:
                                   OPPIUY03,OPPIUY04,OPPIUY05,OPPIUY06,OPPIUY07:
                                   OPPIUY08,OPPIUY09,OPPIUY10,OPPIUT01,OPPIUT02:
                                   OPPIUT03,OPPIUT04,OPPIUT05,OPPIUT06,OPPIUT07:
                                   OPPIUT08,OPPIUT09,OPPIUT10,OPPIUF01,OPPIUF02:
                                   OPPIUF03,OPPIUF04,OPPIUF05,OPPIUF06,OPPIUF07:
                                   OPPIUF08,OPPIUF09,OPPIUF10,OPPIDTRT,OPPIDUMM:
                                   OPPIONUM,OPPIICOS,OPPIRCNT,OPPICDAT,OPPICTIM:
                                   OPPICUID,OPPIBCOD,OPPIAIMP,OPPIUDAT,OPPIUTIM:
                                   OPPIUUID,OPPISPAR                            
          GOTO      OVERCOND IF OVER
          MOVE      DOPPICNT,OPPICNTR                                           
          RETURN
.
RKOPPIM2  MOVE      ZERO,OVRCD                                                  
          READKS    OPRPIMA2;OPPIUNID,OPPITMNO,DOPPICNT,OPPIICDE,OPPIIQTY:      
                             OPPILTSN,OPPICOST,OPPILOCA,OPPIUC01,OPPIUC02:      
                             OPPIUC03,OPPIUC04,OPPIUC05,OPPIUC06,OPPIUC07:      
                             OPPIUC08,OPPIUC09,OPPIUC10,OPPIUC11,OPPIUC12:      
                             OPPIUC13,OPPIUC14,OPPIUC15,OPPIUC16,OPPIUC17:      
                             OPPIUC18,OPPIUC19,OPPIUC20,OPPIUY01,OPPIUY02:      
                             OPPIUY03,OPPIUY04,OPPIUY05,OPPIUY06,OPPIUY07:      
                             OPPIUY08,OPPIUY09,OPPIUY10,OPPIUT01,OPPIUT02:      
                             OPPIUT03,OPPIUT04,OPPIUT05,OPPIUT06,OPPIUT07:      
                             OPPIUT08,OPPIUT09,OPPIUT10,OPPIUF01,OPPIUF02:      
                             OPPIUF03,OPPIUF04,OPPIUF05,OPPIUF06,OPPIUF07:      
                             OPPIUF08,OPPIUF09,OPPIUF10,OPPIDTRT,OPPIDUMM:      
                             OPPIONUM,OPPIICOS,OPPIRCNT,OPPICDAT,OPPICTIM:      
                             OPPICUID,OPPIBCOD,OPPIAIMP,OPPIUDAT,OPPIUTIM:      
                             OPPIUUID,OPPISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DOPPICNT,OPPICNTR                                           
          RETURN
.
RPOPPIM2  MOVE      ZERO,OVRCD                                                  
          READKP    OPRPIMA2;OPPIUNID,OPPITMNO,DOPPICNT,OPPIICDE,OPPIIQTY:      
                             OPPILTSN,OPPICOST,OPPILOCA,OPPIUC01,OPPIUC02:      
                             OPPIUC03,OPPIUC04,OPPIUC05,OPPIUC06,OPPIUC07:      
                             OPPIUC08,OPPIUC09,OPPIUC10,OPPIUC11,OPPIUC12:      
                             OPPIUC13,OPPIUC14,OPPIUC15,OPPIUC16,OPPIUC17:      
                             OPPIUC18,OPPIUC19,OPPIUC20,OPPIUY01,OPPIUY02:      
                             OPPIUY03,OPPIUY04,OPPIUY05,OPPIUY06,OPPIUY07:      
                             OPPIUY08,OPPIUY09,OPPIUY10,OPPIUT01,OPPIUT02:      
                             OPPIUT03,OPPIUT04,OPPIUT05,OPPIUT06,OPPIUT07:      
                             OPPIUT08,OPPIUT09,OPPIUT10,OPPIUF01,OPPIUF02:      
                             OPPIUF03,OPPIUF04,OPPIUF05,OPPIUF06,OPPIUF07:      
                             OPPIUF08,OPPIUF09,OPPIUF10,OPPIDTRT,OPPIDUMM:      
                             OPPIONUM,OPPIICOS,OPPIRCNT,OPPICDAT,OPPICTIM:      
                             OPPICUID,OPPIBCOD,OPPIAIMP,OPPIUDAT,OPPIUTIM:      
                             OPPIUUID,OPPISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DOPPICNT,OPPICNTR                                           
          RETURN
.
UPOPPIM2  MOVE      ZERO,OVRCD                                                  
          MOVE      OPPICNTR,DOPPICNT                                           
          UPDATE    OPRPIMA2;OPPIUNID,OPPITMNO,DOPPICNT,OPPIICDE,OPPIIQTY:      
                             OPPILTSN,OPPICOST,OPPILOCA,OPPIUC01,OPPIUC02:      
                             OPPIUC03,OPPIUC04,OPPIUC05,OPPIUC06,OPPIUC07:      
                             OPPIUC08,OPPIUC09,OPPIUC10,OPPIUC11,OPPIUC12:      
                             OPPIUC13,OPPIUC14,OPPIUC15,OPPIUC16,OPPIUC17:      
                             OPPIUC18,OPPIUC19,OPPIUC20,OPPIUY01,OPPIUY02:      
                             OPPIUY03,OPPIUY04,OPPIUY05,OPPIUY06,OPPIUY07:      
                             OPPIUY08,OPPIUY09,OPPIUY10,OPPIUT01,OPPIUT02:      
                             OPPIUT03,OPPIUT04,OPPIUT05,OPPIUT06,OPPIUT07:      
                             OPPIUT08,OPPIUT09,OPPIUT10,OPPIUF01,OPPIUF02:      
                             OPPIUF03,OPPIUF04,OPPIUF05,OPPIUF06,OPPIUF07:      
                             OPPIUF08,OPPIUF09,OPPIUF10,OPPIDTRT,OPPIDUMM:      
                             OPPIONUM,OPPIICOS,OPPIRCNT,OPPICDAT,OPPICTIM:      
                             OPPICUID,OPPIBCOD,OPPIAIMP,OPPIUDAT,OPPIUTIM:      
                             OPPIUUID,OPPISPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROPPIM2  RESET     KEY28                                                       
          MOVE      OPPICNTR,DOPPICNT                                           
          WRITE     OPRPIMA2,KEY28;OPPIUNID,OPPITMNO,DOPPICNT,OPPIICDE,OPPIIQTY:
                                   OPPILTSN,OPPICOST,OPPILOCA,OPPIUC01,OPPIUC02:
                                   OPPIUC03,OPPIUC04,OPPIUC05,OPPIUC06,OPPIUC07:
                                   OPPIUC08,OPPIUC09,OPPIUC10,OPPIUC11,OPPIUC12:
                                   OPPIUC13,OPPIUC14,OPPIUC15,OPPIUC16,OPPIUC17:
                                   OPPIUC18,OPPIUC19,OPPIUC20,OPPIUY01,OPPIUY02:
                                   OPPIUY03,OPPIUY04,OPPIUY05,OPPIUY06,OPPIUY07:
                                   OPPIUY08,OPPIUY09,OPPIUY10,OPPIUT01,OPPIUT02:
                                   OPPIUT03,OPPIUT04,OPPIUT05,OPPIUT06,OPPIUT07:
                                   OPPIUT08,OPPIUT09,OPPIUT10,OPPIUF01,OPPIUF02:
                                   OPPIUF03,OPPIUF04,OPPIUF05,OPPIUF06,OPPIUF07:
                                   OPPIUF08,OPPIUF09,OPPIUF10,OPPIDTRT,OPPIDUMM:
                                   OPPIONUM,OPPIICOS,OPPIRCNT,OPPICDAT,OPPICTIM:
                                   OPPICUID,OPPIBCOD,OPPIAIMP,OPPIUDAT,OPPIUTIM:
                                   OPPIUUID,OPPISPAR                            
          RETURN
.
DEOPPIM2  RESET     KEY28                                                       
          DELETE    OPRPIMA2,KEY28                                              
          RETURN
.
RLOPPIM2  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READL     OPRPIMA2,KEY28;OPPIUNID,OPPITMNO,DOPPICNT,OPPIICDE,OPPIIQTY:
                                   OPPILTSN,OPPICOST,OPPILOCA,OPPIUC01,OPPIUC02:
                                   OPPIUC03,OPPIUC04,OPPIUC05,OPPIUC06,OPPIUC07:
                                   OPPIUC08,OPPIUC09,OPPIUC10,OPPIUC11,OPPIUC12:
                                   OPPIUC13,OPPIUC14,OPPIUC15,OPPIUC16,OPPIUC17:
                                   OPPIUC18,OPPIUC19,OPPIUC20,OPPIUY01,OPPIUY02:
                                   OPPIUY03,OPPIUY04,OPPIUY05,OPPIUY06,OPPIUY07:
                                   OPPIUY08,OPPIUY09,OPPIUY10,OPPIUT01,OPPIUT02:
                                   OPPIUT03,OPPIUT04,OPPIUT05,OPPIUT06,OPPIUT07:
                                   OPPIUT08,OPPIUT09,OPPIUT10,OPPIUF01,OPPIUF02:
                                   OPPIUF03,OPPIUF04,OPPIUF05,OPPIUF06,OPPIUF07:
                                   OPPIUF08,OPPIUF09,OPPIUF10,OPPIDTRT,OPPIDUMM:
                                   OPPIONUM,OPPIICOS,OPPIRCNT,OPPICDAT,OPPICTIM:
                                   OPPICUID,OPPIBCOD,OPPIAIMP,OPPIUDAT,OPPIUTIM:
                                   OPPIUUID,OPPISPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DOPPICNT,OPPICNTR                                           
          RETURN
.
KLOPPIM2  MOVE      ZERO,OVRCD                                                  
          READLKS   OPRPIMA2;OPPIUNID,OPPITMNO,DOPPICNT,OPPIICDE,OPPIIQTY:      
                             OPPILTSN,OPPICOST,OPPILOCA,OPPIUC01,OPPIUC02:      
                             OPPIUC03,OPPIUC04,OPPIUC05,OPPIUC06,OPPIUC07:      
                             OPPIUC08,OPPIUC09,OPPIUC10,OPPIUC11,OPPIUC12:      
                             OPPIUC13,OPPIUC14,OPPIUC15,OPPIUC16,OPPIUC17:      
                             OPPIUC18,OPPIUC19,OPPIUC20,OPPIUY01,OPPIUY02:      
                             OPPIUY03,OPPIUY04,OPPIUY05,OPPIUY06,OPPIUY07:      
                             OPPIUY08,OPPIUY09,OPPIUY10,OPPIUT01,OPPIUT02:      
                             OPPIUT03,OPPIUT04,OPPIUT05,OPPIUT06,OPPIUT07:      
                             OPPIUT08,OPPIUT09,OPPIUT10,OPPIUF01,OPPIUF02:      
                             OPPIUF03,OPPIUF04,OPPIUF05,OPPIUF06,OPPIUF07:      
                             OPPIUF08,OPPIUF09,OPPIUF10,OPPIDTRT,OPPIDUMM:      
                             OPPIONUM,OPPIICOS,OPPIRCNT,OPPICDAT,OPPICTIM:      
                             OPPICUID,OPPIBCOD,OPPIAIMP,OPPIUDAT,OPPIUTIM:      
                             OPPIUUID,OPPISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DOPPICNT,OPPICNTR                                           
          RETURN
.
PLOPPIM2  MOVE      ZERO,OVRCD                                                  
          READLKP   OPRPIMA2;OPPIUNID,OPPITMNO,DOPPICNT,OPPIICDE,OPPIIQTY:      
                             OPPILTSN,OPPICOST,OPPILOCA,OPPIUC01,OPPIUC02:      
                             OPPIUC03,OPPIUC04,OPPIUC05,OPPIUC06,OPPIUC07:      
                             OPPIUC08,OPPIUC09,OPPIUC10,OPPIUC11,OPPIUC12:      
                             OPPIUC13,OPPIUC14,OPPIUC15,OPPIUC16,OPPIUC17:      
                             OPPIUC18,OPPIUC19,OPPIUC20,OPPIUY01,OPPIUY02:      
                             OPPIUY03,OPPIUY04,OPPIUY05,OPPIUY06,OPPIUY07:      
                             OPPIUY08,OPPIUY09,OPPIUY10,OPPIUT01,OPPIUT02:      
                             OPPIUT03,OPPIUT04,OPPIUT05,OPPIUT06,OPPIUT07:      
                             OPPIUT08,OPPIUT09,OPPIUT10,OPPIUF01,OPPIUF02:      
                             OPPIUF03,OPPIUF04,OPPIUF05,OPPIUF06,OPPIUF07:      
                             OPPIUF08,OPPIUF09,OPPIUF10,OPPIDTRT,OPPIDUMM:      
                             OPPIONUM,OPPIICOS,OPPIRCNT,OPPICDAT,OPPICTIM:      
                             OPPICUID,OPPIBCOD,OPPIAIMP,OPPIUDAT,OPPIUTIM:      
                             OPPIUUID,OPPISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DOPPICNT,OPPICNTR                                           
          RETURN
.
UUOPPIM2  RESET     KEY28                                                       
          UNLOCK    OPRPIMA2                                                    
          RETURN
.
RSOPPIM3  RESET     KEY73                                                       
          READ      OPRPIMA3,KEY73;;                                            
          RETURN
.
RAOPPIM3  RESET     KEY73                                                       
          MOVE      ZERO,OVRCD
          READ      OPRPIMA3,KEY73;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOPPIM3  RESET     KEY73                                                       
          MOVE      ZERO,OVRCD
          READ      OPRPIMA3,KEY73;OPPIUNID,OPPITMNO,DOPPICNT,OPPIICDE,OPPIIQTY:
                                   OPPILTSN,OPPICOST,OPPILOCA,OPPIUC01,OPPIUC02:
                                   OPPIUC03,OPPIUC04,OPPIUC05,OPPIUC06,OPPIUC07:
                                   OPPIUC08,OPPIUC09,OPPIUC10,OPPIUC11,OPPIUC12:
                                   OPPIUC13,OPPIUC14,OPPIUC15,OPPIUC16,OPPIUC17:
                                   OPPIUC18,OPPIUC19,OPPIUC20,OPPIUY01,OPPIUY02:
                                   OPPIUY03,OPPIUY04,OPPIUY05,OPPIUY06,OPPIUY07:
                                   OPPIUY08,OPPIUY09,OPPIUY10,OPPIUT01,OPPIUT02:
                                   OPPIUT03,OPPIUT04,OPPIUT05,OPPIUT06,OPPIUT07:
                                   OPPIUT08,OPPIUT09,OPPIUT10,OPPIUF01,OPPIUF02:
                                   OPPIUF03,OPPIUF04,OPPIUF05,OPPIUF06,OPPIUF07:
                                   OPPIUF08,OPPIUF09,OPPIUF10,OPPIDTRT,OPPIDUMM:
                                   OPPIONUM,OPPIICOS,OPPIRCNT,OPPICDAT,OPPICTIM:
                                   OPPICUID,OPPIBCOD,OPPIAIMP,OPPIUDAT,OPPIUTIM:
                                   OPPIUUID,OPPISPAR                            
          GOTO      OVERCOND IF OVER
          MOVE      DOPPICNT,OPPICNTR                                           
          RETURN
.
RKOPPIM3  MOVE      ZERO,OVRCD                                                  
          READKS    OPRPIMA3;OPPIUNID,OPPITMNO,DOPPICNT,OPPIICDE,OPPIIQTY:      
                             OPPILTSN,OPPICOST,OPPILOCA,OPPIUC01,OPPIUC02:      
                             OPPIUC03,OPPIUC04,OPPIUC05,OPPIUC06,OPPIUC07:      
                             OPPIUC08,OPPIUC09,OPPIUC10,OPPIUC11,OPPIUC12:      
                             OPPIUC13,OPPIUC14,OPPIUC15,OPPIUC16,OPPIUC17:      
                             OPPIUC18,OPPIUC19,OPPIUC20,OPPIUY01,OPPIUY02:      
                             OPPIUY03,OPPIUY04,OPPIUY05,OPPIUY06,OPPIUY07:      
                             OPPIUY08,OPPIUY09,OPPIUY10,OPPIUT01,OPPIUT02:      
                             OPPIUT03,OPPIUT04,OPPIUT05,OPPIUT06,OPPIUT07:      
                             OPPIUT08,OPPIUT09,OPPIUT10,OPPIUF01,OPPIUF02:      
                             OPPIUF03,OPPIUF04,OPPIUF05,OPPIUF06,OPPIUF07:      
                             OPPIUF08,OPPIUF09,OPPIUF10,OPPIDTRT,OPPIDUMM:      
                             OPPIONUM,OPPIICOS,OPPIRCNT,OPPICDAT,OPPICTIM:      
                             OPPICUID,OPPIBCOD,OPPIAIMP,OPPIUDAT,OPPIUTIM:      
                             OPPIUUID,OPPISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DOPPICNT,OPPICNTR                                           
          RETURN
.
RPOPPIM3  MOVE      ZERO,OVRCD                                                  
          READKP    OPRPIMA3;OPPIUNID,OPPITMNO,DOPPICNT,OPPIICDE,OPPIIQTY:      
                             OPPILTSN,OPPICOST,OPPILOCA,OPPIUC01,OPPIUC02:      
                             OPPIUC03,OPPIUC04,OPPIUC05,OPPIUC06,OPPIUC07:      
                             OPPIUC08,OPPIUC09,OPPIUC10,OPPIUC11,OPPIUC12:      
                             OPPIUC13,OPPIUC14,OPPIUC15,OPPIUC16,OPPIUC17:      
                             OPPIUC18,OPPIUC19,OPPIUC20,OPPIUY01,OPPIUY02:      
                             OPPIUY03,OPPIUY04,OPPIUY05,OPPIUY06,OPPIUY07:      
                             OPPIUY08,OPPIUY09,OPPIUY10,OPPIUT01,OPPIUT02:      
                             OPPIUT03,OPPIUT04,OPPIUT05,OPPIUT06,OPPIUT07:      
                             OPPIUT08,OPPIUT09,OPPIUT10,OPPIUF01,OPPIUF02:      
                             OPPIUF03,OPPIUF04,OPPIUF05,OPPIUF06,OPPIUF07:      
                             OPPIUF08,OPPIUF09,OPPIUF10,OPPIDTRT,OPPIDUMM:      
                             OPPIONUM,OPPIICOS,OPPIRCNT,OPPICDAT,OPPICTIM:      
                             OPPICUID,OPPIBCOD,OPPIAIMP,OPPIUDAT,OPPIUTIM:      
                             OPPIUUID,OPPISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DOPPICNT,OPPICNTR                                           
          RETURN
.
UPOPPIM3  MOVE      ZERO,OVRCD                                                  
          MOVE      OPPICNTR,DOPPICNT                                           
          UPDATE    OPRPIMA3;OPPIUNID,OPPITMNO,DOPPICNT,OPPIICDE,OPPIIQTY:      
                             OPPILTSN,OPPICOST,OPPILOCA,OPPIUC01,OPPIUC02:      
                             OPPIUC03,OPPIUC04,OPPIUC05,OPPIUC06,OPPIUC07:      
                             OPPIUC08,OPPIUC09,OPPIUC10,OPPIUC11,OPPIUC12:      
                             OPPIUC13,OPPIUC14,OPPIUC15,OPPIUC16,OPPIUC17:      
                             OPPIUC18,OPPIUC19,OPPIUC20,OPPIUY01,OPPIUY02:      
                             OPPIUY03,OPPIUY04,OPPIUY05,OPPIUY06,OPPIUY07:      
                             OPPIUY08,OPPIUY09,OPPIUY10,OPPIUT01,OPPIUT02:      
                             OPPIUT03,OPPIUT04,OPPIUT05,OPPIUT06,OPPIUT07:      
                             OPPIUT08,OPPIUT09,OPPIUT10,OPPIUF01,OPPIUF02:      
                             OPPIUF03,OPPIUF04,OPPIUF05,OPPIUF06,OPPIUF07:      
                             OPPIUF08,OPPIUF09,OPPIUF10,OPPIDTRT,OPPIDUMM:      
                             OPPIONUM,OPPIICOS,OPPIRCNT,OPPICDAT,OPPICTIM:      
                             OPPICUID,OPPIBCOD,OPPIAIMP,OPPIUDAT,OPPIUTIM:      
                             OPPIUUID,OPPISPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WROPPIM3  RESET     KEY73                                                       
          MOVE      OPPICNTR,DOPPICNT                                           
          WRITE     OPRPIMA3,KEY73;OPPIUNID,OPPITMNO,DOPPICNT,OPPIICDE,OPPIIQTY:
                                   OPPILTSN,OPPICOST,OPPILOCA,OPPIUC01,OPPIUC02:
                                   OPPIUC03,OPPIUC04,OPPIUC05,OPPIUC06,OPPIUC07:
                                   OPPIUC08,OPPIUC09,OPPIUC10,OPPIUC11,OPPIUC12:
                                   OPPIUC13,OPPIUC14,OPPIUC15,OPPIUC16,OPPIUC17:
                                   OPPIUC18,OPPIUC19,OPPIUC20,OPPIUY01,OPPIUY02:
                                   OPPIUY03,OPPIUY04,OPPIUY05,OPPIUY06,OPPIUY07:
                                   OPPIUY08,OPPIUY09,OPPIUY10,OPPIUT01,OPPIUT02:
                                   OPPIUT03,OPPIUT04,OPPIUT05,OPPIUT06,OPPIUT07:
                                   OPPIUT08,OPPIUT09,OPPIUT10,OPPIUF01,OPPIUF02:
                                   OPPIUF03,OPPIUF04,OPPIUF05,OPPIUF06,OPPIUF07:
                                   OPPIUF08,OPPIUF09,OPPIUF10,OPPIDTRT,OPPIDUMM:
                                   OPPIONUM,OPPIICOS,OPPIRCNT,OPPICDAT,OPPICTIM:
                                   OPPICUID,OPPIBCOD,OPPIAIMP,OPPIUDAT,OPPIUTIM:
                                   OPPIUUID,OPPISPAR                            
          RETURN
.
DEOPPIM3  RESET     KEY73                                                       
          DELETE    OPRPIMA3,KEY73                                              
          RETURN
.
RLOPPIM3  RESET     KEY73                                                       
          MOVE      ZERO,OVRCD
          READL     OPRPIMA3,KEY73;OPPIUNID,OPPITMNO,DOPPICNT,OPPIICDE,OPPIIQTY:
                                   OPPILTSN,OPPICOST,OPPILOCA,OPPIUC01,OPPIUC02:
                                   OPPIUC03,OPPIUC04,OPPIUC05,OPPIUC06,OPPIUC07:
                                   OPPIUC08,OPPIUC09,OPPIUC10,OPPIUC11,OPPIUC12:
                                   OPPIUC13,OPPIUC14,OPPIUC15,OPPIUC16,OPPIUC17:
                                   OPPIUC18,OPPIUC19,OPPIUC20,OPPIUY01,OPPIUY02:
                                   OPPIUY03,OPPIUY04,OPPIUY05,OPPIUY06,OPPIUY07:
                                   OPPIUY08,OPPIUY09,OPPIUY10,OPPIUT01,OPPIUT02:
                                   OPPIUT03,OPPIUT04,OPPIUT05,OPPIUT06,OPPIUT07:
                                   OPPIUT08,OPPIUT09,OPPIUT10,OPPIUF01,OPPIUF02:
                                   OPPIUF03,OPPIUF04,OPPIUF05,OPPIUF06,OPPIUF07:
                                   OPPIUF08,OPPIUF09,OPPIUF10,OPPIDTRT,OPPIDUMM:
                                   OPPIONUM,OPPIICOS,OPPIRCNT,OPPICDAT,OPPICTIM:
                                   OPPICUID,OPPIBCOD,OPPIAIMP,OPPIUDAT,OPPIUTIM:
                                   OPPIUUID,OPPISPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DOPPICNT,OPPICNTR                                           
          RETURN
.
KLOPPIM3  MOVE      ZERO,OVRCD                                                  
          READLKS   OPRPIMA3;OPPIUNID,OPPITMNO,DOPPICNT,OPPIICDE,OPPIIQTY:      
                             OPPILTSN,OPPICOST,OPPILOCA,OPPIUC01,OPPIUC02:      
                             OPPIUC03,OPPIUC04,OPPIUC05,OPPIUC06,OPPIUC07:      
                             OPPIUC08,OPPIUC09,OPPIUC10,OPPIUC11,OPPIUC12:      
                             OPPIUC13,OPPIUC14,OPPIUC15,OPPIUC16,OPPIUC17:      
                             OPPIUC18,OPPIUC19,OPPIUC20,OPPIUY01,OPPIUY02:      
                             OPPIUY03,OPPIUY04,OPPIUY05,OPPIUY06,OPPIUY07:      
                             OPPIUY08,OPPIUY09,OPPIUY10,OPPIUT01,OPPIUT02:      
                             OPPIUT03,OPPIUT04,OPPIUT05,OPPIUT06,OPPIUT07:      
                             OPPIUT08,OPPIUT09,OPPIUT10,OPPIUF01,OPPIUF02:      
                             OPPIUF03,OPPIUF04,OPPIUF05,OPPIUF06,OPPIUF07:      
                             OPPIUF08,OPPIUF09,OPPIUF10,OPPIDTRT,OPPIDUMM:      
                             OPPIONUM,OPPIICOS,OPPIRCNT,OPPICDAT,OPPICTIM:      
                             OPPICUID,OPPIBCOD,OPPIAIMP,OPPIUDAT,OPPIUTIM:      
                             OPPIUUID,OPPISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DOPPICNT,OPPICNTR                                           
          RETURN
.
PLOPPIM3  MOVE      ZERO,OVRCD                                                  
          READLKP   OPRPIMA3;OPPIUNID,OPPITMNO,DOPPICNT,OPPIICDE,OPPIIQTY:      
                             OPPILTSN,OPPICOST,OPPILOCA,OPPIUC01,OPPIUC02:      
                             OPPIUC03,OPPIUC04,OPPIUC05,OPPIUC06,OPPIUC07:      
                             OPPIUC08,OPPIUC09,OPPIUC10,OPPIUC11,OPPIUC12:      
                             OPPIUC13,OPPIUC14,OPPIUC15,OPPIUC16,OPPIUC17:      
                             OPPIUC18,OPPIUC19,OPPIUC20,OPPIUY01,OPPIUY02:      
                             OPPIUY03,OPPIUY04,OPPIUY05,OPPIUY06,OPPIUY07:      
                             OPPIUY08,OPPIUY09,OPPIUY10,OPPIUT01,OPPIUT02:      
                             OPPIUT03,OPPIUT04,OPPIUT05,OPPIUT06,OPPIUT07:      
                             OPPIUT08,OPPIUT09,OPPIUT10,OPPIUF01,OPPIUF02:      
                             OPPIUF03,OPPIUF04,OPPIUF05,OPPIUF06,OPPIUF07:      
                             OPPIUF08,OPPIUF09,OPPIUF10,OPPIDTRT,OPPIDUMM:      
                             OPPIONUM,OPPIICOS,OPPIRCNT,OPPICDAT,OPPICTIM:      
                             OPPICUID,OPPIBCOD,OPPIAIMP,OPPIUDAT,OPPIUTIM:      
                             OPPIUUID,OPPISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DOPPICNT,OPPICNTR                                           
          RETURN
.
UUOPPIM3  RESET     KEY73                                                       
          UNLOCK    OPRPIMA3                                                    
          RETURN
.
