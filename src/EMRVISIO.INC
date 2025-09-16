.
. EMRVISIO    
. --------
. Filename     : emrvisaf.dat
.
RSEMVIS1  RESET     KEY8                                                        
          READ      EMRVISA1,KEY8;;                                             
          RETURN
.
RAEMVIS1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      EMRVISA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMVIS1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      EMRVISA1,KEY8;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME: 
                                  EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT: 
                                  EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN: 
                                  EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT: 
                                  EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD: 
                                  EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM: 
                                  EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02: 
                                  EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07: 
                                  EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12: 
                                  EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17: 
                                  EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22: 
                                  EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27: 
                                  EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02: 
                                  EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07: 
                                  EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02: 
                                  EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07: 
                                  EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02: 
                                  EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07: 
                                  EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2: 
                                  EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02: 
                                  EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT: 
                                  EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC: 
                                  EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01: 
                                  EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM: 
                                  EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS: 
                                  EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS: 
                                  EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3: 
                                  EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2: 
                                  EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO: 
                                  EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS: 
                                  EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM: 
                                  EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM: 
                                  EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC: 
                                  EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT: 
                                  EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34: 
                                  EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA: 
                                  EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD: 
                                  EMVIDRUG,EMVISPAR                             
          GOTO      OVERCOND IF OVER
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
RKEMVIS1  MOVE      ZERO,OVRCD                                                  
          READKS    EMRVISA1;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
RPEMVIS1  MOVE      ZERO,OVRCD                                                  
          READKP    EMRVISA1;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
ULEMVIS1  UNLOCK    EMRVISA1
          RETURN
.
UPEMVIS1  MOVE      ZERO,OVRCD                                                  
          MOVE      EMVIADMN,DEMVIADM                                           
          MOVE      EMVISTAT,DEMVISTA                                           
          UPDATE    EMRVISA1;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMVIS1  RESET     KEY8                                                        
          MOVE      EMVIADMN,DEMVIADM                                           
          MOVE      EMVISTAT,DEMVISTA                                           
          WRITE     EMRVISA1,KEY8;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME: 
                                  EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT: 
                                  EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN: 
                                  EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT: 
                                  EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD: 
                                  EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM: 
                                  EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02: 
                                  EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07: 
                                  EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12: 
                                  EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17: 
                                  EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22: 
                                  EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27: 
                                  EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02: 
                                  EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07: 
                                  EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02: 
                                  EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07: 
                                  EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02: 
                                  EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07: 
                                  EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2: 
                                  EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02: 
                                  EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT: 
                                  EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC: 
                                  EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01: 
                                  EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM: 
                                  EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS: 
                                  EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS: 
                                  EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3: 
                                  EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2: 
                                  EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO: 
                                  EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS: 
                                  EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM: 
                                  EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM: 
                                  EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC: 
                                  EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT: 
                                  EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34: 
                                  EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA: 
                                  EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD: 
                                  EMVIDRUG,EMVISPAR                             
          RETURN
.
DEEMVIS1  RESET     KEY8                                                        
          DELETE    EMRVISA1,KEY8                                               
          RETURN
.
RLEMVIS1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READL     EMRVISA1,KEY8;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME: 
                                  EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT: 
                                  EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN: 
                                  EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT: 
                                  EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD: 
                                  EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM: 
                                  EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02: 
                                  EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07: 
                                  EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12: 
                                  EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17: 
                                  EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22: 
                                  EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27: 
                                  EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02: 
                                  EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07: 
                                  EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02: 
                                  EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07: 
                                  EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02: 
                                  EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07: 
                                  EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2: 
                                  EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02: 
                                  EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT: 
                                  EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC: 
                                  EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01: 
                                  EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM: 
                                  EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS: 
                                  EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS: 
                                  EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3: 
                                  EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2: 
                                  EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO: 
                                  EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS: 
                                  EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM: 
                                  EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM: 
                                  EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC: 
                                  EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT: 
                                  EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34: 
                                  EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA: 
                                  EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD: 
                                  EMVIDRUG,EMVISPAR                             
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
KLEMVIS1  MOVE      ZERO,OVRCD                                                  
          READLKS   EMRVISA1;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
PLEMVIS1  MOVE      ZERO,OVRCD                                                  
          READLKP   EMRVISA1;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
UUEMVIS1  RESET     KEY8                                                        
          UNLOCK    EMRVISA1                                                    
          RETURN
.
RSEMVIS2  RESET     KEY9                                                        
          READ      EMRVISA2,KEY9;;                                             
          RETURN
.
RAEMVIS2  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      EMRVISA2,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMVIS2  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      EMRVISA2,KEY9;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME: 
                                  EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT: 
                                  EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN: 
                                  EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT: 
                                  EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD: 
                                  EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM: 
                                  EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02: 
                                  EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07: 
                                  EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12: 
                                  EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17: 
                                  EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22: 
                                  EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27: 
                                  EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02: 
                                  EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07: 
                                  EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02: 
                                  EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07: 
                                  EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02: 
                                  EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07: 
                                  EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2: 
                                  EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02: 
                                  EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT: 
                                  EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC: 
                                  EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01: 
                                  EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM: 
                                  EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS: 
                                  EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS: 
                                  EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3: 
                                  EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2: 
                                  EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO: 
                                  EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS: 
                                  EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM: 
                                  EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM: 
                                  EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC: 
                                  EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT: 
                                  EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34: 
                                  EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA: 
                                  EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD: 
                                  EMVIDRUG,EMVISPAR                             
          GOTO      OVERCOND IF OVER
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
RKEMVIS2  MOVE      ZERO,OVRCD                                                  
          READKS    EMRVISA2;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
RPEMVIS2  MOVE      ZERO,OVRCD                                                  
          READKP    EMRVISA2;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
UPEMVIS2  MOVE      ZERO,OVRCD                                                  
          MOVE      EMVIADMN,DEMVIADM                                           
          MOVE      EMVISTAT,DEMVISTA                                           
          UPDATE    EMRVISA2;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMVIS2  RESET     KEY9                                                        
          MOVE      EMVIADMN,DEMVIADM                                           
          MOVE      EMVISTAT,DEMVISTA                                           
          WRITE     EMRVISA2,KEY9;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME: 
                                  EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT: 
                                  EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN: 
                                  EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT: 
                                  EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD: 
                                  EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM: 
                                  EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02: 
                                  EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07: 
                                  EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12: 
                                  EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17: 
                                  EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22: 
                                  EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27: 
                                  EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02: 
                                  EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07: 
                                  EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02: 
                                  EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07: 
                                  EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02: 
                                  EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07: 
                                  EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2: 
                                  EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02: 
                                  EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT: 
                                  EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC: 
                                  EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01: 
                                  EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM: 
                                  EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS: 
                                  EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS: 
                                  EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3: 
                                  EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2: 
                                  EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO: 
                                  EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS: 
                                  EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM: 
                                  EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM: 
                                  EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC: 
                                  EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT: 
                                  EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34: 
                                  EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA: 
                                  EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD: 
                                  EMVIDRUG,EMVISPAR                             
          RETURN
.
DEEMVIS2  RESET     KEY9                                                        
          DELETE    EMRVISA2,KEY9                                               
          RETURN
.
RLEMVIS2  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READL     EMRVISA2,KEY9;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME: 
                                  EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT: 
                                  EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN: 
                                  EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT: 
                                  EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD: 
                                  EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM: 
                                  EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02: 
                                  EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07: 
                                  EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12: 
                                  EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17: 
                                  EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22: 
                                  EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27: 
                                  EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02: 
                                  EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07: 
                                  EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02: 
                                  EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07: 
                                  EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02: 
                                  EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07: 
                                  EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2: 
                                  EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02: 
                                  EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT: 
                                  EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC: 
                                  EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01: 
                                  EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM: 
                                  EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS: 
                                  EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS: 
                                  EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3: 
                                  EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2: 
                                  EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO: 
                                  EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS: 
                                  EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM: 
                                  EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM: 
                                  EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC: 
                                  EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT: 
                                  EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34: 
                                  EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA: 
                                  EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD: 
                                  EMVIDRUG,EMVISPAR                             
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
KLEMVIS2  MOVE      ZERO,OVRCD                                                  
          READLKS   EMRVISA2;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
PLEMVIS2  MOVE      ZERO,OVRCD                                                  
          READLKP   EMRVISA2;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
UUEMVIS2  RESET     KEY9                                                        
          UNLOCK    EMRVISA2                                                    
          RETURN
.
RSEMVIS3  RESET     KEY16                                                       
          READ      EMRVISA3,KEY16;;                                            
          RETURN
.
RAEMVIS3  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      EMRVISA3,KEY16;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMVIS3  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READ      EMRVISA3,KEY16;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:
                                   EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:
                                   EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:
                                   EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:
                                   EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:
                                   EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:
                                   EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:
                                   EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:
                                   EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:
                                   EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:
                                   EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:
                                   EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:
                                   EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:
                                   EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:
                                   EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:
                                   EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:
                                   EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:
                                   EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:
                                   EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:
                                   EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:
                                   EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:
                                   EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:
                                   EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:
                                   EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:
                                   EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:
                                   EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:
                                   EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:
                                   EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:
                                   EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:
                                   EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:
                                   EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:
                                   EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:
                                   EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:
                                   EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:
                                   EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:
                                   EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:
                                   EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:
                                   EMVIDRUG,EMVISPAR                            
          GOTO      OVERCOND IF OVER
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
RKEMVIS3  MOVE      ZERO,OVRCD                                                  
          READKS    EMRVISA3;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
RPEMVIS3  MOVE      ZERO,OVRCD                                                  
          READKP    EMRVISA3;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
UPEMVIS3  MOVE      ZERO,OVRCD                                                  
          MOVE      EMVIADMN,DEMVIADM                                           
          MOVE      EMVISTAT,DEMVISTA                                           
          UPDATE    EMRVISA3;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMVIS3  RESET     KEY16                                                       
          MOVE      EMVIADMN,DEMVIADM                                           
          MOVE      EMVISTAT,DEMVISTA                                           
          WRITE     EMRVISA3,KEY16;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:
                                   EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:
                                   EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:
                                   EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:
                                   EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:
                                   EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:
                                   EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:
                                   EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:
                                   EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:
                                   EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:
                                   EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:
                                   EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:
                                   EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:
                                   EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:
                                   EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:
                                   EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:
                                   EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:
                                   EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:
                                   EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:
                                   EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:
                                   EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:
                                   EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:
                                   EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:
                                   EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:
                                   EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:
                                   EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:
                                   EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:
                                   EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:
                                   EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:
                                   EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:
                                   EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:
                                   EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:
                                   EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:
                                   EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:
                                   EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:
                                   EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:
                                   EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:
                                   EMVIDRUG,EMVISPAR                            
          RETURN
.
DEEMVIS3  RESET     KEY16                                                       
          DELETE    EMRVISA3,KEY16                                              
          RETURN
.
RLEMVIS3  RESET     KEY16                                                       
          MOVE      ZERO,OVRCD
          READL     EMRVISA3,KEY16;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:
                                   EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:
                                   EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:
                                   EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:
                                   EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:
                                   EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:
                                   EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:
                                   EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:
                                   EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:
                                   EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:
                                   EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:
                                   EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:
                                   EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:
                                   EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:
                                   EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:
                                   EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:
                                   EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:
                                   EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:
                                   EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:
                                   EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:
                                   EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:
                                   EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:
                                   EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:
                                   EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:
                                   EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:
                                   EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:
                                   EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:
                                   EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:
                                   EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:
                                   EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:
                                   EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:
                                   EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:
                                   EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:
                                   EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:
                                   EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:
                                   EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:
                                   EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:
                                   EMVIDRUG,EMVISPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
KLEMVIS3  MOVE      ZERO,OVRCD                                                  
          READLKS   EMRVISA3;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
PLEMVIS3  MOVE      ZERO,OVRCD                                                  
          READLKP   EMRVISA3;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
UUEMVIS3  RESET     KEY16                                                       
          UNLOCK    EMRVISA3                                                    
          RETURN
.
RSEMVIS4  RESET     KEY24                                                       
          READ      EMRVISA4,KEY24;;                                            
          RETURN
.
RAEMVIS4  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      EMRVISA4,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMVIS4  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      EMRVISA4,KEY24;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:
                                   EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:
                                   EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:
                                   EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:
                                   EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:
                                   EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:
                                   EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:
                                   EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:
                                   EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:
                                   EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:
                                   EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:
                                   EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:
                                   EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:
                                   EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:
                                   EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:
                                   EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:
                                   EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:
                                   EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:
                                   EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:
                                   EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:
                                   EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:
                                   EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:
                                   EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:
                                   EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:
                                   EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:
                                   EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:
                                   EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:
                                   EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:
                                   EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:
                                   EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:
                                   EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:
                                   EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:
                                   EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:
                                   EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:
                                   EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:
                                   EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:
                                   EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:
                                   EMVIDRUG,EMVISPAR                            
          GOTO      OVERCOND IF OVER
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
RKEMVIS4  MOVE      ZERO,OVRCD                                                  
          READKS    EMRVISA4;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
RPEMVIS4  MOVE      ZERO,OVRCD                                                  
          READKP    EMRVISA4;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
UPEMVIS4  MOVE      ZERO,OVRCD                                                  
          MOVE      EMVIADMN,DEMVIADM                                           
          MOVE      EMVISTAT,DEMVISTA                                           
          UPDATE    EMRVISA4;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMVIS4  RESET     KEY24                                                       
          MOVE      EMVIADMN,DEMVIADM                                           
          MOVE      EMVISTAT,DEMVISTA                                           
          WRITE     EMRVISA4,KEY24;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:
                                   EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:
                                   EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:
                                   EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:
                                   EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:
                                   EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:
                                   EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:
                                   EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:
                                   EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:
                                   EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:
                                   EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:
                                   EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:
                                   EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:
                                   EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:
                                   EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:
                                   EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:
                                   EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:
                                   EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:
                                   EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:
                                   EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:
                                   EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:
                                   EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:
                                   EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:
                                   EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:
                                   EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:
                                   EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:
                                   EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:
                                   EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:
                                   EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:
                                   EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:
                                   EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:
                                   EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:
                                   EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:
                                   EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:
                                   EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:
                                   EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:
                                   EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:
                                   EMVIDRUG,EMVISPAR                            
          RETURN
.
DEEMVIS4  RESET     KEY24                                                       
          DELETE    EMRVISA4,KEY24                                              
          RETURN
.
RLEMVIS4  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READL     EMRVISA4,KEY24;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:
                                   EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:
                                   EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:
                                   EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:
                                   EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:
                                   EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:
                                   EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:
                                   EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:
                                   EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:
                                   EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:
                                   EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:
                                   EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:
                                   EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:
                                   EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:
                                   EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:
                                   EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:
                                   EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:
                                   EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:
                                   EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:
                                   EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:
                                   EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:
                                   EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:
                                   EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:
                                   EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:
                                   EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:
                                   EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:
                                   EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:
                                   EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:
                                   EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:
                                   EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:
                                   EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:
                                   EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:
                                   EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:
                                   EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:
                                   EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:
                                   EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:
                                   EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:
                                   EMVIDRUG,EMVISPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
KLEMVIS4  MOVE      ZERO,OVRCD                                                  
          READLKS   EMRVISA4;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
PLEMVIS4  MOVE      ZERO,OVRCD                                                  
          READLKP   EMRVISA4;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
UUEMVIS4  RESET     KEY24                                                       
          UNLOCK    EMRVISA4                                                    
          RETURN
.
RSEMVIS5  RESET     KEY12                                                       
          READ      EMRVISA5,KEY12;;                                            
          RETURN
.
RAEMVIS5  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      EMRVISA5,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMVIS5  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      EMRVISA5,KEY12;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:
                                   EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:
                                   EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:
                                   EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:
                                   EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:
                                   EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:
                                   EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:
                                   EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:
                                   EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:
                                   EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:
                                   EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:
                                   EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:
                                   EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:
                                   EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:
                                   EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:
                                   EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:
                                   EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:
                                   EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:
                                   EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:
                                   EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:
                                   EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:
                                   EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:
                                   EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:
                                   EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:
                                   EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:
                                   EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:
                                   EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:
                                   EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:
                                   EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:
                                   EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:
                                   EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:
                                   EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:
                                   EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:
                                   EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:
                                   EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:
                                   EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:
                                   EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:
                                   EMVIDRUG,EMVISPAR                            
          GOTO      OVERCOND IF OVER
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
RKEMVIS5  MOVE      ZERO,OVRCD                                                  
          READKS    EMRVISA5;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
RPEMVIS5  MOVE      ZERO,OVRCD                                                  
          READKP    EMRVISA5;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
UPEMVIS5  MOVE      ZERO,OVRCD                                                  
          MOVE      EMVIADMN,DEMVIADM                                           
          MOVE      EMVISTAT,DEMVISTA                                           
          UPDATE    EMRVISA5;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMVIS5  RESET     KEY12                                                       
          MOVE      EMVIADMN,DEMVIADM                                           
          MOVE      EMVISTAT,DEMVISTA                                           
          WRITE     EMRVISA5,KEY12;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:
                                   EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:
                                   EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:
                                   EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:
                                   EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:
                                   EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:
                                   EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:
                                   EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:
                                   EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:
                                   EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:
                                   EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:
                                   EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:
                                   EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:
                                   EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:
                                   EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:
                                   EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:
                                   EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:
                                   EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:
                                   EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:
                                   EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:
                                   EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:
                                   EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:
                                   EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:
                                   EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:
                                   EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:
                                   EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:
                                   EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:
                                   EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:
                                   EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:
                                   EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:
                                   EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:
                                   EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:
                                   EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:
                                   EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:
                                   EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:
                                   EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:
                                   EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:
                                   EMVIDRUG,EMVISPAR                            
          RETURN
.
DEEMVIS5  RESET     KEY12                                                       
          DELETE    EMRVISA5,KEY12                                              
          RETURN
.
RLEMVIS5  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READL     EMRVISA5,KEY12;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:
                                   EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:
                                   EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:
                                   EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:
                                   EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:
                                   EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:
                                   EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:
                                   EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:
                                   EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:
                                   EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:
                                   EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:
                                   EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:
                                   EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:
                                   EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:
                                   EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:
                                   EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:
                                   EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:
                                   EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:
                                   EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:
                                   EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:
                                   EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:
                                   EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:
                                   EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:
                                   EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:
                                   EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:
                                   EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:
                                   EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:
                                   EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:
                                   EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:
                                   EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:
                                   EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:
                                   EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:
                                   EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:
                                   EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:
                                   EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:
                                   EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:
                                   EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:
                                   EMVIDRUG,EMVISPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
KLEMVIS5  MOVE      ZERO,OVRCD                                                  
          READLKS   EMRVISA5;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
PLEMVIS5  MOVE      ZERO,OVRCD                                                  
          READLKP   EMRVISA5;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
UUEMVIS5  RESET     KEY12                                                       
          UNLOCK    EMRVISA5                                                    
          RETURN
.
RSEMVIS6  RESET     KEY27                                                       
          READ      EMRVISA6,KEY27;;                                            
          RETURN
.
RAEMVIS6  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      EMRVISA6,KEY27;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMVIS6  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READ      EMRVISA6,KEY27;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:
                                   EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:
                                   EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:
                                   EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:
                                   EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:
                                   EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:
                                   EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:
                                   EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:
                                   EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:
                                   EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:
                                   EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:
                                   EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:
                                   EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:
                                   EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:
                                   EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:
                                   EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:
                                   EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:
                                   EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:
                                   EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:
                                   EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:
                                   EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:
                                   EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:
                                   EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:
                                   EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:
                                   EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:
                                   EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:
                                   EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:
                                   EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:
                                   EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:
                                   EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:
                                   EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:
                                   EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:
                                   EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:
                                   EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:
                                   EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:
                                   EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:
                                   EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:
                                   EMVIDRUG,EMVISPAR                            
          GOTO      OVERCOND IF OVER
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
RKEMVIS6  MOVE      ZERO,OVRCD                                                  
          READKS    EMRVISA6;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
RPEMVIS6  MOVE      ZERO,OVRCD                                                  
          READKP    EMRVISA6;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
UPEMVIS6  MOVE      ZERO,OVRCD                                                  
          MOVE      EMVIADMN,DEMVIADM                                           
          MOVE      EMVISTAT,DEMVISTA                                           
          UPDATE    EMRVISA6;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMVIS6  RESET     KEY27                                                       
          MOVE      EMVIADMN,DEMVIADM                                           
          MOVE      EMVISTAT,DEMVISTA                                           
          WRITE     EMRVISA6,KEY27;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:
                                   EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:
                                   EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:
                                   EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:
                                   EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:
                                   EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:
                                   EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:
                                   EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:
                                   EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:
                                   EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:
                                   EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:
                                   EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:
                                   EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:
                                   EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:
                                   EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:
                                   EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:
                                   EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:
                                   EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:
                                   EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:
                                   EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:
                                   EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:
                                   EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:
                                   EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:
                                   EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:
                                   EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:
                                   EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:
                                   EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:
                                   EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:
                                   EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:
                                   EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:
                                   EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:
                                   EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:
                                   EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:
                                   EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:
                                   EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:
                                   EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:
                                   EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:
                                   EMVIDRUG,EMVISPAR                            
          RETURN
.
DEEMVIS6  RESET     KEY27                                                       
          DELETE    EMRVISA6,KEY27                                              
          RETURN
.
RLEMVIS6  RESET     KEY27                                                       
          MOVE      ZERO,OVRCD
          READL     EMRVISA6,KEY27;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:
                                   EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:
                                   EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:
                                   EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:
                                   EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:
                                   EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:
                                   EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:
                                   EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:
                                   EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:
                                   EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:
                                   EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:
                                   EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:
                                   EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:
                                   EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:
                                   EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:
                                   EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:
                                   EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:
                                   EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:
                                   EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:
                                   EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:
                                   EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:
                                   EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:
                                   EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:
                                   EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:
                                   EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:
                                   EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:
                                   EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:
                                   EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:
                                   EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:
                                   EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:
                                   EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:
                                   EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:
                                   EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:
                                   EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:
                                   EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:
                                   EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:
                                   EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:
                                   EMVIDRUG,EMVISPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
KLEMVIS6  MOVE      ZERO,OVRCD                                                  
          READLKS   EMRVISA6;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
PLEMVIS6  MOVE      ZERO,OVRCD                                                  
          READLKP   EMRVISA6;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
UUEMVIS6  RESET     KEY27                                                       
          UNLOCK    EMRVISA6                                                    
          RETURN
.
RSEMVIS7  RESET     KEY11                                                       
          READ      EMRVISA7,KEY11;;                                            
          RETURN
.
RAEMVIS7  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      EMRVISA7,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMVIS7  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      EMRVISA7,KEY11;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:
                                   EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:
                                   EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:
                                   EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:
                                   EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:
                                   EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:
                                   EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:
                                   EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:
                                   EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:
                                   EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:
                                   EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:
                                   EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:
                                   EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:
                                   EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:
                                   EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:
                                   EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:
                                   EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:
                                   EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:
                                   EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:
                                   EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:
                                   EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:
                                   EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:
                                   EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:
                                   EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:
                                   EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:
                                   EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:
                                   EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:
                                   EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:
                                   EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:
                                   EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:
                                   EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:
                                   EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:
                                   EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:
                                   EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:
                                   EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:
                                   EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:
                                   EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:
                                   EMVIDRUG,EMVISPAR                            
          GOTO      OVERCOND IF OVER
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
RKEMVIS7  MOVE      ZERO,OVRCD                                                  
          READKS    EMRVISA7;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
RPEMVIS7  MOVE      ZERO,OVRCD                                                  
          READKP    EMRVISA7;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      OVERCOND IF OVER
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
UPEMVIS7  MOVE      ZERO,OVRCD                                                  
          MOVE      EMVIADMN,DEMVIADM                                           
          MOVE      EMVISTAT,DEMVISTA                                           
          UPDATE    EMRVISA7;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WREMVIS7  RESET     KEY11                                                       
          MOVE      EMVIADMN,DEMVIADM                                           
          MOVE      EMVISTAT,DEMVISTA                                           
          WRITE     EMRVISA7,KEY11;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:
                                   EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:
                                   EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:
                                   EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:
                                   EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:
                                   EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:
                                   EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:
                                   EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:
                                   EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:
                                   EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:
                                   EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:
                                   EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:
                                   EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:
                                   EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:
                                   EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:
                                   EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:
                                   EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:
                                   EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:
                                   EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:
                                   EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:
                                   EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:
                                   EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:
                                   EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:
                                   EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:
                                   EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:
                                   EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:
                                   EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:
                                   EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:
                                   EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:
                                   EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:
                                   EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:
                                   EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:
                                   EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:
                                   EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:
                                   EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:
                                   EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:
                                   EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:
                                   EMVIDRUG,EMVISPAR                            
          RETURN
.
DEEMVIS7  RESET     KEY11                                                       
          DELETE    EMRVISA7,KEY11                                              
          RETURN
.
RLEMVIS7  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READL     EMRVISA7,KEY11;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:
                                   EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:
                                   EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:
                                   EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:
                                   EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:
                                   EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:
                                   EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:
                                   EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:
                                   EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:
                                   EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:
                                   EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:
                                   EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:
                                   EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:
                                   EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:
                                   EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:
                                   EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:
                                   EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:
                                   EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:
                                   EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:
                                   EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:
                                   EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:
                                   EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:
                                   EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:
                                   EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:
                                   EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:
                                   EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:
                                   EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:
                                   EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:
                                   EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:
                                   EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:
                                   EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:
                                   EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:
                                   EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:
                                   EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:
                                   EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:
                                   EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:
                                   EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:
                                   EMVIDRUG,EMVISPAR                            
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
KLEMVIS7  MOVE      ZERO,OVRCD                                                  
          READLKS   EMRVISA7;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
PLEMVIS7  MOVE      ZERO,OVRCD                                                  
          READLKP   EMRVISA7;DEMVIADM,DEMVISTA,EMVIURNO,EMVIDATE,EMVITIME:      
                             EMVITRIG,EMVICOM1,EMVICOM2,EMVILOCN,EMVIDOCT:      
                             EMVICOMP,EMVICLAS,EMVIINSR,EMVISRCE,EMVISITN:      
                             EMVIMODE,EMVIADMT,EMVIDURN,EMVIEMPL,EMVIWAIT:      
                             EMVIPREV,EMVIFUND,EMVITABL,EMVIREFG,EMVIREFD:      
                             EMVIPLIN,EMVIINIT,EMVIRTAS,EMVIDDAT,EMVIDTIM:      
                             EMVIDSTA,EMVIOPR1,EMVIOPR2,EMVIUC01,EMVIUC02:      
                             EMVIUC03,EMVIUC04,EMVIUC05,EMVIUC06,EMVIUC07:      
                             EMVIUC08,EMVIUC09,EMVIUC10,EMVIUC11,EMVIUC12:      
                             EMVIUC13,EMVIUC14,EMVIUC15,EMVIUC16,EMVIUC17:      
                             EMVIUC18,EMVIUC19,EMVIUC20,EMVIUC21,EMVIUC22:      
                             EMVIUC23,EMVIUC24,EMVIUC25,EMVIUC26,EMVIUC27:      
                             EMVIUC28,EMVIUC29,EMVIUC30,EMVIUD01,EMVIUD02:      
                             EMVIUD03,EMVIUD04,EMVIUD05,EMVIUD06,EMVIUD07:      
                             EMVIUD08,EMVIUD09,EMVIUD10,EMVIUT01,EMVIUT02:      
                             EMVIUT03,EMVIUT04,EMVIUT05,EMVIUT06,EMVIUT07:      
                             EMVIUT08,EMVIUT09,EMVIUT10,EMVIYN01,EMVIYN02:      
                             EMVIYN03,EMVIYN04,EMVIYN05,EMVIYN06,EMVIYN07:      
                             EMVIYN08,EMVIYN09,EMVIYN10,EMVITXT1,EMVITXT2:      
                             EMVITXT3,EMVITXT4,EMVITXT5,EMVIUN01,EMVIUN02:      
                             EMVIUN03,EMVIUN04,EMVIUN05,EMVIELAP,EMVINSDT:      
                             EMVINSTM,EMVIDRDT,EMVIDRTM,EMVIPATT,EMVITSRC:      
                             EMVIDEST,EMVIAMBL,EMVIREGN,EMVISENT,EMVIUR01:      
                             EMVIUR02,EMVIUR03,EMVIUR04,EMVIUR05,EMVIPADM:      
                             EMVIEWRD,EMVIEBED,EMVIHFMN,EMVIACLS,EMVICCLS:      
                             EMVITRNS,EMVIDUM1,EMVITRDT,EMVITRTM,EMVIATNS:      
                             EMVIDUM2,EMVIEXLC,EMVISITE,EMVIUNIT,EMVICOM3:      
                             EMVICOM4,EMVICOM5,EMVICOM6,EMVIINJ1,EMVIINJ2:      
                             EMVINATI,EMVIINJC,EMVIHUMI,EMVIACTI,EMVILOCO:      
                             EMVIPRLO,EMVIPRTM,EMVIDPDT,EMVIDPTM,EMVIEXRS:      
                             EMVIDLRS,EMVISPDT,EMVISPTM,EMVISADT,EMVISATM:      
                             EMVIMPRA,EMVIMPDT,EMVIMPTM,EMVIAADT,EMVIAATM:      
                             EMVIAHDT,EMVIAHTM,EMVIDADT,EMVIDATM,EMVIPURC:      
                             EMVIMNCD,EMVIMNDT,EMVIMNTM,EMVIMDCD,EMVIMDDT:      
                             EMVIMDTM,EMVIUC31,EMVIUC32,EMVIUC33,EMVIUC34:      
                             EMVIUC35,EMVIREFP,EMVIREPM,EMVIREDT,EMVIBNAA:      
                             EMVIVSTY,EMVIVPLC,EMVIAHCP,EMVIAHST,EMVIDISD:      
                             EMVIDRUG,EMVISPAR                                  
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          MOVE      DEMVIADM,EMVIADMN                                           
          MOVE      DEMVISTA,EMVISTAT                                           
          RETURN
.
UUEMVIS7  RESET     KEY11                                                       
          UNLOCK    EMRVISA7                                                    
          RETURN
.
