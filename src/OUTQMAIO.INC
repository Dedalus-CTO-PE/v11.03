RSOTQMA1  RESET     KEY20
          READ      OUTQMAA1,KEY20;;
          RETURN
.
RAOTQMA1  RESET     KEY20
          MOVE      ZERO,OVRCD
          READ      OUTQMAA1,KEY20;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDOTQMA1  RESET     KEY20
          MOVE      ZERO,OVRCD
          READ      OUTQMAA1,KEY20;DOTQMMES,OMASITE,OMACLIN,OMATYP:
                                  OMADAY,OMASTART,OMAFIN,OMAEND,OMACIND:
                                  OMAREG,OMAKDOC,OMACOM1,OMACOM2,OMADURN:
                                  OMANEWSL,OMASPCSL,OMASTAT,OMAFREQM,DOMASEQ:
                                  OMALOCK,OMAFREQF,OMAFREQY,OMADATE,OTMAAVIS:
                                  OTMASTVT,OTMASUPX,OTMARUSE,OTMADCMB,OTMAIXTA:
                                  OTMADEFD,OTMAUATR,OTMADDNA,OTMANDRP,OTMALPTR:
                                  OTMALGPD,OTMALPTD,OTMABKLT,OTMARALT,OTMARSLT:
                                  OTMACLSE,OTMAHOSP,OTMACLOC,OTMAWDCL,OTMAWARD:
                                  OTMALTYP,OTMADFSL,OTMADFGN,OTMAGRPS,DOTMASOV:
                                  DOTMANOO,DOTMASLF,DOTMASLR,OTMASBKL,OTMASAPL:
                                  OTMASPMM,OTMASGPM,DOTMALPP,DOTMASRL,DOTMANCO:
                                  OTMALOCN,OTMADTCO,OTMADTCC,OTMAINS1,OTMAINS2:
                                  OTMAINS3,OTMALSER,OTMAUMCI,OTMAPROV,OTMAMBST:
                                  OTMAROOM,OTMALEDG,OTMACCTR,OTMAMPRC,OTMAMBSA:
                                  OTMALDNA,OTMAADEP,OTMACENC,OTMACCAR,OTMACTRN:
                                  OTMADPSL,OTMACPMI,OTMACPAG,OTMACTEL,OTMANMDS:
                                  OTMACART,OTMASRVD,OTMACLHR,OTMAMLTD,OTMAXPUL:
                                  OTMATCOD,OTQMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTQMMES,OTQMMESI
          RETURN
.
RKOTQMA1  MOVE      ZERO,OVRCD
          READKS    OUTQMAA1;DOTQMMES,OMASITE,OMACLIN,OMATYP:
                                  OMADAY,OMASTART,OMAFIN,OMAEND,OMACIND:
                                  OMAREG,OMAKDOC,OMACOM1,OMACOM2,OMADURN:
                                  OMANEWSL,OMASPCSL,OMASTAT,OMAFREQM,DOMASEQ:
                                  OMALOCK,OMAFREQF,OMAFREQY,OMADATE,OTMAAVIS:
                                  OTMASTVT,OTMASUPX,OTMARUSE,OTMADCMB,OTMAIXTA:
                                  OTMADEFD,OTMAUATR,OTMADDNA,OTMANDRP,OTMALPTR:
                                  OTMALGPD,OTMALPTD,OTMABKLT,OTMARALT,OTMARSLT:
                                  OTMACLSE,OTMAHOSP,OTMACLOC,OTMAWDCL,OTMAWARD:
                                  OTMALTYP,OTMADFSL,OTMADFGN,OTMAGRPS,DOTMASOV:
                                  DOTMANOO,DOTMASLF,DOTMASLR,OTMASBKL,OTMASAPL:
                                  OTMASPMM,OTMASGPM,DOTMALPP,DOTMASRL,DOTMANCO:
                                  OTMALOCN,OTMADTCO,OTMADTCC,OTMAINS1,OTMAINS2:
                                  OTMAINS3,OTMALSER,OTMAUMCI,OTMAPROV,OTMAMBST:
                                  OTMAROOM,OTMALEDG,OTMACCTR,OTMAMPRC,OTMAMBSA:
                                  OTMALDNA,OTMAADEP,OTMACENC,OTMACCAR,OTMACTRN:
                                  OTMADPSL,OTMACPMI,OTMACPAG,OTMACTEL,OTMANMDS:
                                  OTMACART,OTMASRVD,OTMACLHR,OTMAMLTD,OTMAXPUL:
                                  OTMATCOD,OTQMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTQMMES,OTQMMESI
          RETURN
.
RPOTQMA1  MOVE      ZERO,OVRCD
          READKP    OUTQMAA1;DOTQMMES,OMASITE,OMACLIN,OMATYP:
                                  OMADAY,OMASTART,OMAFIN,OMAEND,OMACIND:
                                  OMAREG,OMAKDOC,OMACOM1,OMACOM2,OMADURN:
                                  OMANEWSL,OMASPCSL,OMASTAT,OMAFREQM,DOMASEQ:
                                  OMALOCK,OMAFREQF,OMAFREQY,OMADATE,OTMAAVIS:
                                  OTMASTVT,OTMASUPX,OTMARUSE,OTMADCMB,OTMAIXTA:
                                  OTMADEFD,OTMAUATR,OTMADDNA,OTMANDRP,OTMALPTR:
                                  OTMALGPD,OTMALPTD,OTMABKLT,OTMARALT,OTMARSLT:
                                  OTMACLSE,OTMAHOSP,OTMACLOC,OTMAWDCL,OTMAWARD:
                                  OTMALTYP,OTMADFSL,OTMADFGN,OTMAGRPS,DOTMASOV:
                                  DOTMANOO,DOTMASLF,DOTMASLR,OTMASBKL,OTMASAPL:
                                  OTMASPMM,OTMASGPM,DOTMALPP,DOTMASRL,DOTMANCO:
                                  OTMALOCN,OTMADTCO,OTMADTCC,OTMAINS1,OTMAINS2:
                                  OTMAINS3,OTMALSER,OTMAUMCI,OTMAPROV,OTMAMBST:
                                  OTMAROOM,OTMALEDG,OTMACCTR,OTMAMPRC,OTMAMBSA:
                                  OTMALDNA,OTMAADEP,OTMACENC,OTMACCAR,OTMACTRN:
                                  OTMADPSL,OTMACPMI,OTMACPAG,OTMACTEL,OTMANMDS:
                                  OTMACART,OTMASRVD,OTMACLHR,OTMAMLTD,OTMAXPUL:
                                  OTMATCOD,OTQMSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DOTQMMES,OTQMMESI
          RETURN
.
UPOTQMA1  MOVE      OTQMMESI,DOTQMMES
          UPDATE    OUTQMAA1;DOTQMMES,OMASITE,OMACLIN,OMATYP:
                                  OMADAY,OMASTART,OMAFIN,OMAEND,OMACIND:
                                  OMAREG,OMAKDOC,OMACOM1,OMACOM2,OMADURN:
                                  OMANEWSL,OMASPCSL,OMASTAT,OMAFREQM,DOMASEQ:
                                  OMALOCK,OMAFREQF,OMAFREQY,OMADATE,OTMAAVIS:
                                  OTMASTVT,OTMASUPX,OTMARUSE,OTMADCMB,OTMAIXTA:
                                  OTMADEFD,OTMAUATR,OTMADDNA,OTMANDRP,OTMALPTR:
                                  OTMALGPD,OTMALPTD,OTMABKLT,OTMARALT,OTMARSLT:
                                  OTMACLSE,OTMAHOSP,OTMACLOC,OTMAWDCL,OTMAWARD:
                                  OTMALTYP,OTMADFSL,OTMADFGN,OTMAGRPS,DOTMASOV:
                                  DOTMANOO,DOTMASLF,DOTMASLR,OTMASBKL,OTMASAPL:
                                  OTMASPMM,OTMASGPM,DOTMALPP,DOTMASRL,DOTMANCO:
                                  OTMALOCN,OTMADTCO,OTMADTCC,OTMAINS1,OTMAINS2:
                                  OTMAINS3,OTMALSER,OTMAUMCI,OTMAPROV,OTMAMBST:
                                  OTMAROOM,OTMALEDG,OTMACCTR,OTMAMPRC,OTMAMBSA:
                                  OTMALDNA,OTMAADEP,OTMACENC,OTMACCAR,OTMACTRN:
                                  OTMADPSL,OTMACPMI,OTMACPAG,OTMACTEL,OTMANMDS:
                                  OTMACART,OTMASRVD,OTMACLHR,OTMAMLTD,OTMAXPUL:
                                  OTMATCOD,OTQMSPAR
          RETURN
.
WROTQMA1  RESET     KEY20
          MOVE      OTQMMESI,DOTQMMES
          WRITE     OUTQMAA1,KEY20;DOTQMMES,OMASITE,OMACLIN,OMATYP:
                                  OMADAY,OMASTART,OMAFIN,OMAEND,OMACIND:
                                  OMAREG,OMAKDOC,OMACOM1,OMACOM2,OMADURN:
                                  OMANEWSL,OMASPCSL,OMASTAT,OMAFREQM,DOMASEQ:
                                  OMALOCK,OMAFREQF,OMAFREQY,OMADATE,OTMAAVIS:
                                  OTMASTVT,OTMASUPX,OTMARUSE,OTMADCMB,OTMAIXTA:
                                  OTMADEFD,OTMAUATR,OTMADDNA,OTMANDRP,OTMALPTR:
                                  OTMALGPD,OTMALPTD,OTMABKLT,OTMARALT,OTMARSLT:
                                  OTMACLSE,OTMAHOSP,OTMACLOC,OTMAWDCL,OTMAWARD:
                                  OTMALTYP,OTMADFSL,OTMADFGN,OTMAGRPS,DOTMASOV:
                                  DOTMANOO,DOTMASLF,DOTMASLR,OTMASBKL,OTMASAPL:
                                  OTMASPMM,OTMASGPM,DOTMALPP,DOTMASRL,DOTMANCO:
                                  OTMALOCN,OTMADTCO,OTMADTCC,OTMAINS1,OTMAINS2:
                                  OTMAINS3,OTMALSER,OTMAUMCI,OTMAPROV,OTMAMBST:
                                  OTMAROOM,OTMALEDG,OTMACCTR,OTMAMPRC,OTMAMBSA:
                                  OTMALDNA,OTMAADEP,OTMACENC,OTMACCAR,OTMACTRN:
                                  OTMADPSL,OTMACPMI,OTMACPAG,OTMACTEL,OTMANMDS:
                                  OTMACART,OTMASRVD,OTMACLHR,OTMAMLTD,OTMAXPUL:
                                  OTMATCOD,OTQMSPAR
          RETURN
.
DEOTQMA1  RESET     KEY20
          DELETE    OUTQMAA1,KEY20
          RETURN
.
