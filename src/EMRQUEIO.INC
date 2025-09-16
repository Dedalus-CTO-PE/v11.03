.*****************************************************************************
.*        EMRQUEIO.INC                                                       *
.*****************************************************************************
.
RSEMQUE1  RESET     KEY20
          READ      EMRQUEA1,KEY20;;
          RETURN
.
RAEMQUE1  RESET     KEY20
          MOVE      ZERO,OVRCD
          READ      EMRQUEA1,KEY20;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDEMQUE1  RESET     KEY20
          MOVE      ZERO,OVRCD
          READ      EMRQUEA1,KEY20;DEMQUMES,EMVIADMN,EMVISTAT,EMVIURNO:
                                  EMVIDATE,EMVITIME,EMVITRIG,EMVICOM1,EMVICOM2:
                                  EMVILOCN,EMVIDOCT,EMVICOMP,EMVICLAS,EMVIINSR:
                                  EMVISRCE,EMVISITN,EMVIMODE,EMVIADMT,EMVIDURN:
                                  EMVIEMPL,EMVIWAIT,EMVIPREV,EMVIFUND,EMVITABL:
                                  EMVIREFG,EMVIREFD,EMVIPLIN,EMVIINIT,EMVIRTAS:
                                  EMVIDDAT,EMVIDTIM,EMVIDSTA,EMVIOPR1,EMVIOPR2:
                                  EMVIUC01,EMVIUC02,EMVIUC03,EMVIUC04,EMVIUC05:
                                  EMVIUC06,EMVIUC07,EMVIUC08,EMVIUC09,EMVIUC10:
                                  EMVIUC11,EMVIUC12,EMVIUC13,EMVIUC14,EMVIUC15:
                                  EMVIUC16,EMVIUC17,EMVIUC18,EMVIUC19,EMVIUC20:
                                  EMVIUC21,EMVIUC22,EMVIUC23,EMVIUC24,EMVIUC25:
                                  EMVIUC26,EMVIUC27,EMVIUC28,EMVIUC29,EMVIUC30:
                                  EMVIUD01,EMVIUD02,EMVIUD03,EMVIUD04,EMVIUD05:
                                  EMVIUD06,EMVIUD07,EMVIUD08,EMVIUD09,EMVIUD10:
                                  EMVIUT01,EMVIUT02,EMVIUT03,EMVIUT04,EMVIUT05:
                                  EMVIUT06,EMVIUT07,EMVIUT08,EMVIUT09,EMVIUT10:
                                  EMVIYN01,EMVIYN02,EMVIYN03,EMVIYN04,EMVIYN05:
                                  EMVIYN06,EMVIYN07,EMVIYN08,EMVIYN09,EMVIYN10:
                                  EMVITXT1,EMVITXT2,EMVITXT3,EMVITXT4,EMVITXT5:
                                  EMVIUN01,EMVIUN02,EMVIUN03,EMVIUN04,EMVIUN05:
                                  EMVIELAP,EMVINSDT,EMVINSTM,EMVIDRDT,EMVIDRTM:
                                  EMVIPATT,EMVITSRC,EMVIDEST,EMVIAMBL,EMVIREGN:
                                  EMVISENT,EMVIUR01,EMVIUR02,EMVIUR03,EMVIUR04:
                                  EMVIUR05,EMVIPADM,EMVIEWRD,EMVIEBED,EMVIHFMN:
                                  EMVIACLS,EMVICCLS,EMVITRNS,EMVIDUM1,EMVITRDT:
                                  EMVITRTM,EMVIATNS,EMVIDUM2,EMVIEXLC,EMVISITE:
                                  EMVIUNIT,EMVICOM3,EMVICOM4,EMVICOM5,EMVICOM6:
                                  EMVIINJ1,EMVIINJ2,EMVINATI,EMVIINJC,EMVIHUMI:
                                  EMVIACTI,EMVILOCO,EMVIPRLO,EMVIPRTM,EMVIDPDT:
                                  EMVIDPTM,EMVIEXRS,EMVIDLRS,EMVISPDT,EMVISPTM:
                                  EMVISADT,EMVISATM,EMVIMPRA,EMVIMPDT,EMVIMPTM:
                                  EMVIAADT,EMVIAATM,EMVIAHDT,EMVIAHTM,EMVIDADT:
                                  EMVIDATM,EMVIPURC,EMVIMNCD,EMVIMNDT,EMVIMNTM:
                                  EMVIMDCD,EMVIMDDT,EMVIMDTM,EMVIUC31,EMVIUC32:
                                  EMVIUC33,EMVIUC34,EMVIUC35,EMVIREFP,EMVIREPM:
                                  EMVIREDT,EMVIBNAA,EMQUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DEMQUMES,EMQUMESI
          RETURN
.
RKEMQUE1  MOVE      ZERO,OVRCD
          READKS    EMRQUEA1;DEMQUMES,EMVIADMN,EMVISTAT,EMVIURNO:
                                  EMVIDATE,EMVITIME,EMVITRIG,EMVICOM1,EMVICOM2:
                                  EMVILOCN,EMVIDOCT,EMVICOMP,EMVICLAS,EMVIINSR:
                                  EMVISRCE,EMVISITN,EMVIMODE,EMVIADMT,EMVIDURN:
                                  EMVIEMPL,EMVIWAIT,EMVIPREV,EMVIFUND,EMVITABL:
                                  EMVIREFG,EMVIREFD,EMVIPLIN,EMVIINIT,EMVIRTAS:
                                  EMVIDDAT,EMVIDTIM,EMVIDSTA,EMVIOPR1,EMVIOPR2:
                                  EMVIUC01,EMVIUC02,EMVIUC03,EMVIUC04,EMVIUC05:
                                  EMVIUC06,EMVIUC07,EMVIUC08,EMVIUC09,EMVIUC10:
                                  EMVIUC11,EMVIUC12,EMVIUC13,EMVIUC14,EMVIUC15:
                                  EMVIUC16,EMVIUC17,EMVIUC18,EMVIUC19,EMVIUC20:
                                  EMVIUC21,EMVIUC22,EMVIUC23,EMVIUC24,EMVIUC25:
                                  EMVIUC26,EMVIUC27,EMVIUC28,EMVIUC29,EMVIUC30:
                                  EMVIUD01,EMVIUD02,EMVIUD03,EMVIUD04,EMVIUD05:
                                  EMVIUD06,EMVIUD07,EMVIUD08,EMVIUD09,EMVIUD10:
                                  EMVIUT01,EMVIUT02,EMVIUT03,EMVIUT04,EMVIUT05:
                                  EMVIUT06,EMVIUT07,EMVIUT08,EMVIUT09,EMVIUT10:
                                  EMVIYN01,EMVIYN02,EMVIYN03,EMVIYN04,EMVIYN05:
                                  EMVIYN06,EMVIYN07,EMVIYN08,EMVIYN09,EMVIYN10:
                                  EMVITXT1,EMVITXT2,EMVITXT3,EMVITXT4,EMVITXT5:
                                  EMVIUN01,EMVIUN02,EMVIUN03,EMVIUN04,EMVIUN05:
                                  EMVIELAP,EMVINSDT,EMVINSTM,EMVIDRDT,EMVIDRTM:
                                  EMVIPATT,EMVITSRC,EMVIDEST,EMVIAMBL,EMVIREGN:
                                  EMVISENT,EMVIUR01,EMVIUR02,EMVIUR03,EMVIUR04:
                                  EMVIUR05,EMVIPADM,EMVIEWRD,EMVIEBED,EMVIHFMN:
                                  EMVIACLS,EMVICCLS,EMVITRNS,EMVIDUM1,EMVITRDT:
                                  EMVITRTM,EMVIATNS,EMVIDUM2,EMVIEXLC,EMVISITE:
                                  EMVIUNIT,EMVICOM3,EMVICOM4,EMVICOM5,EMVICOM6:
                                  EMVIINJ1,EMVIINJ2,EMVINATI,EMVIINJC,EMVIHUMI:
                                  EMVIACTI,EMVILOCO,EMVIPRLO,EMVIPRTM,EMVIDPDT:
                                  EMVIDPTM,EMVIEXRS,EMVIDLRS,EMVISPDT,EMVISPTM:
                                  EMVISADT,EMVISATM,EMVIMPRA,EMVIMPDT,EMVIMPTM:
                                  EMVIAADT,EMVIAATM,EMVIAHDT,EMVIAHTM,EMVIDADT:
                                  EMVIDATM,EMVIPURC,EMVIMNCD,EMVIMNDT,EMVIMNTM:
                                  EMVIMDCD,EMVIMDDT,EMVIMDTM,EMVIUC31,EMVIUC32:
                                  EMVIUC33,EMVIUC34,EMVIUC35,EMVIREFP,EMVIREPM:
                                  EMVIREDT,EMVIBNAA,EMQUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DEMQUMES,EMQUMESI
          RETURN
.
RPEMQUE1  MOVE      ZERO,OVRCD
          READKP    EMRQUEA1;DEMQUMES,EMVIADMN,EMVISTAT,EMVIURNO:
                                  EMVIDATE,EMVITIME,EMVITRIG,EMVICOM1,EMVICOM2:
                                  EMVILOCN,EMVIDOCT,EMVICOMP,EMVICLAS,EMVIINSR:
                                  EMVISRCE,EMVISITN,EMVIMODE,EMVIADMT,EMVIDURN:
                                  EMVIEMPL,EMVIWAIT,EMVIPREV,EMVIFUND,EMVITABL:
                                  EMVIREFG,EMVIREFD,EMVIPLIN,EMVIINIT,EMVIRTAS:
                                  EMVIDDAT,EMVIDTIM,EMVIDSTA,EMVIOPR1,EMVIOPR2:
                                  EMVIUC01,EMVIUC02,EMVIUC03,EMVIUC04,EMVIUC05:
                                  EMVIUC06,EMVIUC07,EMVIUC08,EMVIUC09,EMVIUC10:
                                  EMVIUC11,EMVIUC12,EMVIUC13,EMVIUC14,EMVIUC15:
                                  EMVIUC16,EMVIUC17,EMVIUC18,EMVIUC19,EMVIUC20:
                                  EMVIUC21,EMVIUC22,EMVIUC23,EMVIUC24,EMVIUC25:
                                  EMVIUC26,EMVIUC27,EMVIUC28,EMVIUC29,EMVIUC30:
                                  EMVIUD01,EMVIUD02,EMVIUD03,EMVIUD04,EMVIUD05:
                                  EMVIUD06,EMVIUD07,EMVIUD08,EMVIUD09,EMVIUD10:
                                  EMVIUT01,EMVIUT02,EMVIUT03,EMVIUT04,EMVIUT05:
                                  EMVIUT06,EMVIUT07,EMVIUT08,EMVIUT09,EMVIUT10:
                                  EMVIYN01,EMVIYN02,EMVIYN03,EMVIYN04,EMVIYN05:
                                  EMVIYN06,EMVIYN07,EMVIYN08,EMVIYN09,EMVIYN10:
                                  EMVITXT1,EMVITXT2,EMVITXT3,EMVITXT4,EMVITXT5:
                                  EMVIUN01,EMVIUN02,EMVIUN03,EMVIUN04,EMVIUN05:
                                  EMVIELAP,EMVINSDT,EMVINSTM,EMVIDRDT,EMVIDRTM:
                                  EMVIPATT,EMVITSRC,EMVIDEST,EMVIAMBL,EMVIREGN:
                                  EMVISENT,EMVIUR01,EMVIUR02,EMVIUR03,EMVIUR04:
                                  EMVIUR05,EMVIPADM,EMVIEWRD,EMVIEBED,EMVIHFMN:
                                  EMVIACLS,EMVICCLS,EMVITRNS,EMVIDUM1,EMVITRDT:
                                  EMVITRTM,EMVIATNS,EMVIDUM2,EMVIEXLC,EMVISITE:
                                  EMVIUNIT,EMVICOM3,EMVICOM4,EMVICOM5,EMVICOM6:
                                  EMVIINJ1,EMVIINJ2,EMVINATI,EMVIINJC,EMVIHUMI:
                                  EMVIACTI,EMVILOCO,EMVIPRLO,EMVIPRTM,EMVIDPDT:
                                  EMVIDPTM,EMVIEXRS,EMVIDLRS,EMVISPDT,EMVISPTM:
                                  EMVISADT,EMVISATM,EMVIMPRA,EMVIMPDT,EMVIMPTM:
                                  EMVIAADT,EMVIAATM,EMVIAHDT,EMVIAHTM,EMVIDADT:
                                  EMVIDATM,EMVIPURC,EMVIMNCD,EMVIMNDT,EMVIMNTM:
                                  EMVIMDCD,EMVIMDDT,EMVIMDTM,EMVIUC31,EMVIUC32:
                                  EMVIUC33,EMVIUC34,EMVIUC35,EMVIREFP,EMVIREPM:
                                  EMVIREDT,EMVIBNAA,EMQUSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DEMQUMES,EMQUMESI
          RETURN
.
UPEMQUE1  MOVE      EMQUMESI,DEMQUMES
          UPDATE    EMRQUEA1;DEMQUMES,EMVIADMN,EMVISTAT,EMVIURNO:
                                  EMVIDATE,EMVITIME,EMVITRIG,EMVICOM1,EMVICOM2:
                                  EMVILOCN,EMVIDOCT,EMVICOMP,EMVICLAS,EMVIINSR:
                                  EMVISRCE,EMVISITN,EMVIMODE,EMVIADMT,EMVIDURN:
                                  EMVIEMPL,EMVIWAIT,EMVIPREV,EMVIFUND,EMVITABL:
                                  EMVIREFG,EMVIREFD,EMVIPLIN,EMVIINIT,EMVIRTAS:
                                  EMVIDDAT,EMVIDTIM,EMVIDSTA,EMVIOPR1,EMVIOPR2:
                                  EMVIUC01,EMVIUC02,EMVIUC03,EMVIUC04,EMVIUC05:
                                  EMVIUC06,EMVIUC07,EMVIUC08,EMVIUC09,EMVIUC10:
                                  EMVIUC11,EMVIUC12,EMVIUC13,EMVIUC14,EMVIUC15:
                                  EMVIUC16,EMVIUC17,EMVIUC18,EMVIUC19,EMVIUC20:
                                  EMVIUC21,EMVIUC22,EMVIUC23,EMVIUC24,EMVIUC25:
                                  EMVIUC26,EMVIUC27,EMVIUC28,EMVIUC29,EMVIUC30:
                                  EMVIUD01,EMVIUD02,EMVIUD03,EMVIUD04,EMVIUD05:
                                  EMVIUD06,EMVIUD07,EMVIUD08,EMVIUD09,EMVIUD10:
                                  EMVIUT01,EMVIUT02,EMVIUT03,EMVIUT04,EMVIUT05:
                                  EMVIUT06,EMVIUT07,EMVIUT08,EMVIUT09,EMVIUT10:
                                  EMVIYN01,EMVIYN02,EMVIYN03,EMVIYN04,EMVIYN05:
                                  EMVIYN06,EMVIYN07,EMVIYN08,EMVIYN09,EMVIYN10:
                                  EMVITXT1,EMVITXT2,EMVITXT3,EMVITXT4,EMVITXT5:
                                  EMVIUN01,EMVIUN02,EMVIUN03,EMVIUN04,EMVIUN05:
                                  EMVIELAP,EMVINSDT,EMVINSTM,EMVIDRDT,EMVIDRTM:
                                  EMVIPATT,EMVITSRC,EMVIDEST,EMVIAMBL,EMVIREGN:
                                  EMVISENT,EMVIUR01,EMVIUR02,EMVIUR03,EMVIUR04:
                                  EMVIUR05,EMVIPADM,EMVIEWRD,EMVIEBED,EMVIHFMN:
                                  EMVIACLS,EMVICCLS,EMVITRNS,EMVIDUM1,EMVITRDT:
                                  EMVITRTM,EMVIATNS,EMVIDUM2,EMVIEXLC,EMVISITE:
                                  EMVIUNIT,EMVICOM3,EMVICOM4,EMVICOM5,EMVICOM6:
                                  EMVIINJ1,EMVIINJ2,EMVINATI,EMVIINJC,EMVIHUMI:
                                  EMVIACTI,EMVILOCO,EMVIPRLO,EMVIPRTM,EMVIDPDT:
                                  EMVIDPTM,EMVIEXRS,EMVIDLRS,EMVISPDT,EMVISPTM:
                                  EMVISADT,EMVISATM,EMVIMPRA,EMVIMPDT,EMVIMPTM:
                                  EMVIAADT,EMVIAATM,EMVIAHDT,EMVIAHTM,EMVIDADT:
                                  EMVIDATM,EMVIPURC,EMVIMNCD,EMVIMNDT,EMVIMNTM:
                                  EMVIMDCD,EMVIMDDT,EMVIMDTM,EMVIUC31,EMVIUC32:
                                  EMVIUC33,EMVIUC34,EMVIUC35,EMVIREFP,EMVIREPM:
                                  EMVIREDT,EMVIBNAA,EMQUSPAR
          RETURN
.
WREMQUE1  RESET     KEY20
          MOVE      EMQUMESI,DEMQUMES
          WRITE     EMRQUEA1,KEY20;DEMQUMES,EMVIADMN,EMVISTAT,EMVIURNO:
                                  EMVIDATE,EMVITIME,EMVITRIG,EMVICOM1,EMVICOM2:
                                  EMVILOCN,EMVIDOCT,EMVICOMP,EMVICLAS,EMVIINSR:
                                  EMVISRCE,EMVISITN,EMVIMODE,EMVIADMT,EMVIDURN:
                                  EMVIEMPL,EMVIWAIT,EMVIPREV,EMVIFUND,EMVITABL:
                                  EMVIREFG,EMVIREFD,EMVIPLIN,EMVIINIT,EMVIRTAS:
                                  EMVIDDAT,EMVIDTIM,EMVIDSTA,EMVIOPR1,EMVIOPR2:
                                  EMVIUC01,EMVIUC02,EMVIUC03,EMVIUC04,EMVIUC05:
                                  EMVIUC06,EMVIUC07,EMVIUC08,EMVIUC09,EMVIUC10:
                                  EMVIUC11,EMVIUC12,EMVIUC13,EMVIUC14,EMVIUC15:
                                  EMVIUC16,EMVIUC17,EMVIUC18,EMVIUC19,EMVIUC20:
                                  EMVIUC21,EMVIUC22,EMVIUC23,EMVIUC24,EMVIUC25:
                                  EMVIUC26,EMVIUC27,EMVIUC28,EMVIUC29,EMVIUC30:
                                  EMVIUD01,EMVIUD02,EMVIUD03,EMVIUD04,EMVIUD05:
                                  EMVIUD06,EMVIUD07,EMVIUD08,EMVIUD09,EMVIUD10:
                                  EMVIUT01,EMVIUT02,EMVIUT03,EMVIUT04,EMVIUT05:
                                  EMVIUT06,EMVIUT07,EMVIUT08,EMVIUT09,EMVIUT10:
                                  EMVIYN01,EMVIYN02,EMVIYN03,EMVIYN04,EMVIYN05:
                                  EMVIYN06,EMVIYN07,EMVIYN08,EMVIYN09,EMVIYN10:
                                  EMVITXT1,EMVITXT2,EMVITXT3,EMVITXT4,EMVITXT5:
                                  EMVIUN01,EMVIUN02,EMVIUN03,EMVIUN04,EMVIUN05:
                                  EMVIELAP,EMVINSDT,EMVINSTM,EMVIDRDT,EMVIDRTM:
                                  EMVIPATT,EMVITSRC,EMVIDEST,EMVIAMBL,EMVIREGN:
                                  EMVISENT,EMVIUR01,EMVIUR02,EMVIUR03,EMVIUR04:
                                  EMVIUR05,EMVIPADM,EMVIEWRD,EMVIEBED,EMVIHFMN:
                                  EMVIACLS,EMVICCLS,EMVITRNS,EMVIDUM1,EMVITRDT:
                                  EMVITRTM,EMVIATNS,EMVIDUM2,EMVIEXLC,EMVISITE:
                                  EMVIUNIT,EMVICOM3,EMVICOM4,EMVICOM5,EMVICOM6:
                                  EMVIINJ1,EMVIINJ2,EMVINATI,EMVIINJC,EMVIHUMI:
                                  EMVIACTI,EMVILOCO,EMVIPRLO,EMVIPRTM,EMVIDPDT:
                                  EMVIDPTM,EMVIEXRS,EMVIDLRS,EMVISPDT,EMVISPTM:
                                  EMVISADT,EMVISATM,EMVIMPRA,EMVIMPDT,EMVIMPTM:
                                  EMVIAADT,EMVIAATM,EMVIAHDT,EMVIAHTM,EMVIDADT:
                                  EMVIDATM,EMVIPURC,EMVIMNCD,EMVIMNDT,EMVIMNTM:
                                  EMVIMDCD,EMVIMDDT,EMVIMDTM,EMVIUC31,EMVIUC32:
                                  EMVIUC33,EMVIUC34,EMVIUC35,EMVIREFP,EMVIREPM:
                                  EMVIREDT,EMVIBNAA,EMQUSPAR
          RETURN
.
DEEMQUE1  RESET     KEY20
          DELETE    EMRQUEA1,KEY20
          RETURN
.
