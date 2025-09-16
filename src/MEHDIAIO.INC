.*****************************************************************************
.*        MEHDIAIO.INC                                                       *
.*---------------------------------------------------------------------------*
. V11.01.01 27/04/2021  Thanh T          TSK 0858604                         *
.           Added new field MHDIURNO and created new index MEHDIAA2 on       *
.           on mehdiaaf                                                      *
.*****************************************************************************
.
.         positional read
.
RSMHDIA1  RESET     KEY16
          READ      MEHDIAA1,KEY16;;
          RETURN
.
.         read to see if record exists
.
RAMHDIA1  MOVE      ZERO,OVRCD
          RESET     KEY16
          READ      MEHDIAA1,KEY16;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDMHDIA1  MOVE      ZERO,OVRCD
          RESET     KEY16
          READ      MEHDIAA1,KEY16;DMHDIADM,MHDIDATE,MHDIICD1,MHDIDES1:
                                  MHDISUP1,MHDIDAT1,MHDIICD2,MHDIDES2,MHDISUP2:
                                  MHDIDAT2,MHDIX1CA,MHDIX1CB,MHDIX1CC,MHDIX1DA:
                                  MHDIX1DB,MHDIX1DC,MHDIX2CA,MHDIX2CB,MHDIX2CC:
                                  MHDIX2DA,MHDIX2DB,MHDIX2DC,MHDIX3DS,MHDIX4CD:
                                  MHDIX5CD,MHDIXDAT,MHDIOPER,MHDIAXIV,MHDIMOHR:
                                  MHDIX3CA,MHDIX3CB,MHDIX3CC,MHDIX3DA,MHDIX3DB:
                                  MHDIX3DC,MHDICDAT,MHDICTIM,MHDICUID,MHDIUDAT:
                                  MHDIUTIM,MHDIUUID,MHDIICD3,MHDIDES3,MHDISUP3:
                                  MHDIDAT3,MHDIICD4,MHDIDES4,MHDISUP4,MHDIDAT4:
                                  MHDIICD5,MHDIDES5,MHDISUP5,MHDIDAT5,MHDIICD6:
                                  MHDIDES6,MHDISUP6,MHDIDAT6,MHDIP1CA,MHDIP1CB:
                                  MHDIP1CC,MHDIP2CA,MHDIP2CB,MHDIP2CC,MHDIHCPC:
                                  MHDICAST,MHDIDTY1,MHDIDTY2,MHDIDTY3,MHDIDTY4:
                                  MHDIDTY5,MHDIDTY6,MHDIURNO,MHDISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHDIADM,MHDIADMN
          RETURN
.
.         next read
.
RKMHDIA1  MOVE      ZERO,OVRCD
          READKS    MEHDIAA1;DMHDIADM,MHDIDATE,MHDIICD1,MHDIDES1:
                                  MHDISUP1,MHDIDAT1,MHDIICD2,MHDIDES2,MHDISUP2:
                                  MHDIDAT2,MHDIX1CA,MHDIX1CB,MHDIX1CC,MHDIX1DA:
                                  MHDIX1DB,MHDIX1DC,MHDIX2CA,MHDIX2CB,MHDIX2CC:
                                  MHDIX2DA,MHDIX2DB,MHDIX2DC,MHDIX3DS,MHDIX4CD:
                                  MHDIX5CD,MHDIXDAT,MHDIOPER,MHDIAXIV,MHDIMOHR:
                                  MHDIX3CA,MHDIX3CB,MHDIX3CC,MHDIX3DA,MHDIX3DB:
                                  MHDIX3DC,MHDICDAT,MHDICTIM,MHDICUID,MHDIUDAT:
                                  MHDIUTIM,MHDIUUID,MHDIICD3,MHDIDES3,MHDISUP3:
                                  MHDIDAT3,MHDIICD4,MHDIDES4,MHDISUP4,MHDIDAT4:
                                  MHDIICD5,MHDIDES5,MHDISUP5,MHDIDAT5,MHDIICD6:
                                  MHDIDES6,MHDISUP6,MHDIDAT6,MHDIP1CA,MHDIP1CB:
                                  MHDIP1CC,MHDIP2CA,MHDIP2CB,MHDIP2CC,MHDIHCPC:
                                  MHDICAST,MHDIDTY1,MHDIDTY2,MHDIDTY3,MHDIDTY4:
                                  MHDIDTY5,MHDIDTY6,MHDIURNO,MHDISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHDIADM,MHDIADMN
          RETURN
.
.         previous read
.
RPMHDIA1  MOVE      ZERO,OVRCD
          READKP    MEHDIAA1;DMHDIADM,MHDIDATE,MHDIICD1,MHDIDES1:
                                  MHDISUP1,MHDIDAT1,MHDIICD2,MHDIDES2,MHDISUP2:
                                  MHDIDAT2,MHDIX1CA,MHDIX1CB,MHDIX1CC,MHDIX1DA:
                                  MHDIX1DB,MHDIX1DC,MHDIX2CA,MHDIX2CB,MHDIX2CC:
                                  MHDIX2DA,MHDIX2DB,MHDIX2DC,MHDIX3DS,MHDIX4CD:
                                  MHDIX5CD,MHDIXDAT,MHDIOPER,MHDIAXIV,MHDIMOHR:
                                  MHDIX3CA,MHDIX3CB,MHDIX3CC,MHDIX3DA,MHDIX3DB:
                                  MHDIX3DC,MHDICDAT,MHDICTIM,MHDICUID,MHDIUDAT:
                                  MHDIUTIM,MHDIUUID,MHDIICD3,MHDIDES3,MHDISUP3:
                                  MHDIDAT3,MHDIICD4,MHDIDES4,MHDISUP4,MHDIDAT4:
                                  MHDIICD5,MHDIDES5,MHDISUP5,MHDIDAT5,MHDIICD6:
                                  MHDIDES6,MHDISUP6,MHDIDAT6,MHDIP1CA,MHDIP1CB:
                                  MHDIP1CC,MHDIP2CA,MHDIP2CB,MHDIP2CC,MHDIHCPC:
                                  MHDICAST,MHDIDTY1,MHDIDTY2,MHDIDTY3,MHDIDTY4:
                                  MHDIDTY5,MHDIDTY6,MHDIURNO,MHDISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHDIADM,MHDIADMN
          RETURN
.
.         update
.
UPMHDIA1  MOVE      MHDIADMN,DMHDIADM
          UPDATE    MEHDIAA1;DMHDIADM,MHDIDATE,MHDIICD1,MHDIDES1:
                                  MHDISUP1,MHDIDAT1,MHDIICD2,MHDIDES2,MHDISUP2:
                                  MHDIDAT2,MHDIX1CA,MHDIX1CB,MHDIX1CC,MHDIX1DA:
                                  MHDIX1DB,MHDIX1DC,MHDIX2CA,MHDIX2CB,MHDIX2CC:
                                  MHDIX2DA,MHDIX2DB,MHDIX2DC,MHDIX3DS,MHDIX4CD:
                                  MHDIX5CD,MHDIXDAT,MHDIOPER,MHDIAXIV,MHDIMOHR:
                                  MHDIX3CA,MHDIX3CB,MHDIX3CC,MHDIX3DA,MHDIX3DB:
                                  MHDIX3DC,MHDICDAT,MHDICTIM,MHDICUID,MHDIUDAT:
                                  MHDIUTIM,MHDIUUID,MHDIICD3,MHDIDES3,MHDISUP3:
                                  MHDIDAT3,MHDIICD4,MHDIDES4,MHDISUP4,MHDIDAT4:
                                  MHDIICD5,MHDIDES5,MHDISUP5,MHDIDAT5,MHDIICD6:
                                  MHDIDES6,MHDISUP6,MHDIDAT6,MHDIP1CA,MHDIP1CB:
                                  MHDIP1CC,MHDIP2CA,MHDIP2CB,MHDIP2CC,MHDIHCPC:
                                  MHDICAST,MHDIDTY1,MHDIDTY2,MHDIDTY3,MHDIDTY4:
                                  MHDIDTY5,MHDIDTY6,MHDIURNO,MHDISPAR
          RETURN
.
.         write
.
WRMHDIA1  RESET     KEY16
          MOVE      MHDIADMN,DMHDIADM
          WRITE     MEHDIAA1,KEY16;DMHDIADM,MHDIDATE,MHDIICD1,MHDIDES1:
                                  MHDISUP1,MHDIDAT1,MHDIICD2,MHDIDES2,MHDISUP2:
                                  MHDIDAT2,MHDIX1CA,MHDIX1CB,MHDIX1CC,MHDIX1DA:
                                  MHDIX1DB,MHDIX1DC,MHDIX2CA,MHDIX2CB,MHDIX2CC:
                                  MHDIX2DA,MHDIX2DB,MHDIX2DC,MHDIX3DS,MHDIX4CD:
                                  MHDIX5CD,MHDIXDAT,MHDIOPER,MHDIAXIV,MHDIMOHR:
                                  MHDIX3CA,MHDIX3CB,MHDIX3CC,MHDIX3DA,MHDIX3DB:
                                  MHDIX3DC,MHDICDAT,MHDICTIM,MHDICUID,MHDIUDAT:
                                  MHDIUTIM,MHDIUUID,MHDIICD3,MHDIDES3,MHDISUP3:
                                  MHDIDAT3,MHDIICD4,MHDIDES4,MHDISUP4,MHDIDAT4:
                                  MHDIICD5,MHDIDES5,MHDISUP5,MHDIDAT5,MHDIICD6:
                                  MHDIDES6,MHDISUP6,MHDIDAT6,MHDIP1CA,MHDIP1CB:
                                  MHDIP1CC,MHDIP2CA,MHDIP2CB,MHDIP2CC,MHDIHCPC:
                                  MHDICAST,MHDIDTY1,MHDIDTY2,MHDIDTY3,MHDIDTY4:
                                  MHDIDTY5,MHDIDTY6,MHDIURNO,MHDISPAR
          RETURN
.
.         delete a record
.
DEMHDIA1  RESET     KEY16
          DELETE    MEHDIAA1,KEY16
          RETURN
.
.
.         positional read
.
RSMHDIA2  RESET     KEY24
          READ      MEHDIAA2,KEY24;;
          RETURN
.
.         read to see if record exists
.
RAMHDIA2  MOVE      ZERO,OVRCD
          RESET     KEY24
          READ      MEHDIAA2,KEY24;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDMHDIA2  MOVE      ZERO,OVRCD
          RESET     KEY24
          READ      MEHDIAA2,KEY24;DMHDIADM,MHDIDATE,MHDIICD1,MHDIDES1:
                                  MHDISUP1,MHDIDAT1,MHDIICD2,MHDIDES2,MHDISUP2:
                                  MHDIDAT2,MHDIX1CA,MHDIX1CB,MHDIX1CC,MHDIX1DA:
                                  MHDIX1DB,MHDIX1DC,MHDIX2CA,MHDIX2CB,MHDIX2CC:
                                  MHDIX2DA,MHDIX2DB,MHDIX2DC,MHDIX3DS,MHDIX4CD:
                                  MHDIX5CD,MHDIXDAT,MHDIOPER,MHDIAXIV,MHDIMOHR:
                                  MHDIX3CA,MHDIX3CB,MHDIX3CC,MHDIX3DA,MHDIX3DB:
                                  MHDIX3DC,MHDICDAT,MHDICTIM,MHDICUID,MHDIUDAT:
                                  MHDIUTIM,MHDIUUID,MHDIICD3,MHDIDES3,MHDISUP3:
                                  MHDIDAT3,MHDIICD4,MHDIDES4,MHDISUP4,MHDIDAT4:
                                  MHDIICD5,MHDIDES5,MHDISUP5,MHDIDAT5,MHDIICD6:
                                  MHDIDES6,MHDISUP6,MHDIDAT6,MHDIP1CA,MHDIP1CB:
                                  MHDIP1CC,MHDIP2CA,MHDIP2CB,MHDIP2CC,MHDIHCPC:
                                  MHDICAST,MHDIDTY1,MHDIDTY2,MHDIDTY3,MHDIDTY4:
                                  MHDIDTY5,MHDIDTY6,MHDIURNO,MHDISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHDIADM,MHDIADMN
          RETURN
.
.         next read
.
RKMHDIA2  MOVE      ZERO,OVRCD
          READKS    MEHDIAA2;DMHDIADM,MHDIDATE,MHDIICD1,MHDIDES1:
                                  MHDISUP1,MHDIDAT1,MHDIICD2,MHDIDES2,MHDISUP2:
                                  MHDIDAT2,MHDIX1CA,MHDIX1CB,MHDIX1CC,MHDIX1DA:
                                  MHDIX1DB,MHDIX1DC,MHDIX2CA,MHDIX2CB,MHDIX2CC:
                                  MHDIX2DA,MHDIX2DB,MHDIX2DC,MHDIX3DS,MHDIX4CD:
                                  MHDIX5CD,MHDIXDAT,MHDIOPER,MHDIAXIV,MHDIMOHR:
                                  MHDIX3CA,MHDIX3CB,MHDIX3CC,MHDIX3DA,MHDIX3DB:
                                  MHDIX3DC,MHDICDAT,MHDICTIM,MHDICUID,MHDIUDAT:
                                  MHDIUTIM,MHDIUUID,MHDIICD3,MHDIDES3,MHDISUP3:
                                  MHDIDAT3,MHDIICD4,MHDIDES4,MHDISUP4,MHDIDAT4:
                                  MHDIICD5,MHDIDES5,MHDISUP5,MHDIDAT5,MHDIICD6:
                                  MHDIDES6,MHDISUP6,MHDIDAT6,MHDIP1CA,MHDIP1CB:
                                  MHDIP1CC,MHDIP2CA,MHDIP2CB,MHDIP2CC,MHDIHCPC:
                                  MHDICAST,MHDIDTY1,MHDIDTY2,MHDIDTY3,MHDIDTY4:
                                  MHDIDTY5,MHDIDTY6,MHDIURNO,MHDISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHDIADM,MHDIADMN
          RETURN
.
.         previous read
.
RPMHDIA2  MOVE      ZERO,OVRCD
          READKP    MEHDIAA2;DMHDIADM,MHDIDATE,MHDIICD1,MHDIDES1:
                                  MHDISUP1,MHDIDAT1,MHDIICD2,MHDIDES2,MHDISUP2:
                                  MHDIDAT2,MHDIX1CA,MHDIX1CB,MHDIX1CC,MHDIX1DA:
                                  MHDIX1DB,MHDIX1DC,MHDIX2CA,MHDIX2CB,MHDIX2CC:
                                  MHDIX2DA,MHDIX2DB,MHDIX2DC,MHDIX3DS,MHDIX4CD:
                                  MHDIX5CD,MHDIXDAT,MHDIOPER,MHDIAXIV,MHDIMOHR:
                                  MHDIX3CA,MHDIX3CB,MHDIX3CC,MHDIX3DA,MHDIX3DB:
                                  MHDIX3DC,MHDICDAT,MHDICTIM,MHDICUID,MHDIUDAT:
                                  MHDIUTIM,MHDIUUID,MHDIICD3,MHDIDES3,MHDISUP3:
                                  MHDIDAT3,MHDIICD4,MHDIDES4,MHDISUP4,MHDIDAT4:
                                  MHDIICD5,MHDIDES5,MHDISUP5,MHDIDAT5,MHDIICD6:
                                  MHDIDES6,MHDISUP6,MHDIDAT6,MHDIP1CA,MHDIP1CB:
                                  MHDIP1CC,MHDIP2CA,MHDIP2CB,MHDIP2CC,MHDIHCPC:
                                  MHDICAST,MHDIDTY1,MHDIDTY2,MHDIDTY3,MHDIDTY4:
                                  MHDIDTY5,MHDIDTY6,MHDIURNO,MHDISPAR
          GOTO      OVERCOND IF OVER
          MOVE      DMHDIADM,MHDIADMN
          RETURN
.
.         update
.
UPMHDIA2  MOVE      MHDIADMN,DMHDIADM
          UPDATE    MEHDIAA2;DMHDIADM,MHDIDATE,MHDIICD1,MHDIDES1:
                                  MHDISUP1,MHDIDAT1,MHDIICD2,MHDIDES2,MHDISUP2:
                                  MHDIDAT2,MHDIX1CA,MHDIX1CB,MHDIX1CC,MHDIX1DA:
                                  MHDIX1DB,MHDIX1DC,MHDIX2CA,MHDIX2CB,MHDIX2CC:
                                  MHDIX2DA,MHDIX2DB,MHDIX2DC,MHDIX3DS,MHDIX4CD:
                                  MHDIX5CD,MHDIXDAT,MHDIOPER,MHDIAXIV,MHDIMOHR:
                                  MHDIX3CA,MHDIX3CB,MHDIX3CC,MHDIX3DA,MHDIX3DB:
                                  MHDIX3DC,MHDICDAT,MHDICTIM,MHDICUID,MHDIUDAT:
                                  MHDIUTIM,MHDIUUID,MHDIICD3,MHDIDES3,MHDISUP3:
                                  MHDIDAT3,MHDIICD4,MHDIDES4,MHDISUP4,MHDIDAT4:
                                  MHDIICD5,MHDIDES5,MHDISUP5,MHDIDAT5,MHDIICD6:
                                  MHDIDES6,MHDISUP6,MHDIDAT6,MHDIP1CA,MHDIP1CB:
                                  MHDIP1CC,MHDIP2CA,MHDIP2CB,MHDIP2CC,MHDIHCPC:
                                  MHDICAST,MHDIDTY1,MHDIDTY2,MHDIDTY3,MHDIDTY4:
                                  MHDIDTY5,MHDIDTY6,MHDIURNO,MHDISPAR
          RETURN
.
.         write
.
WRMHDIA2  RESET     KEY24
          MOVE      MHDIADMN,DMHDIADM
          WRITE     MEHDIAA2,KEY24;DMHDIADM,MHDIDATE,MHDIICD1,MHDIDES1:
                                  MHDISUP1,MHDIDAT1,MHDIICD2,MHDIDES2,MHDISUP2:
                                  MHDIDAT2,MHDIX1CA,MHDIX1CB,MHDIX1CC,MHDIX1DA:
                                  MHDIX1DB,MHDIX1DC,MHDIX2CA,MHDIX2CB,MHDIX2CC:
                                  MHDIX2DA,MHDIX2DB,MHDIX2DC,MHDIX3DS,MHDIX4CD:
                                  MHDIX5CD,MHDIXDAT,MHDIOPER,MHDIAXIV,MHDIMOHR:
                                  MHDIX3CA,MHDIX3CB,MHDIX3CC,MHDIX3DA,MHDIX3DB:
                                  MHDIX3DC,MHDICDAT,MHDICTIM,MHDICUID,MHDIUDAT:
                                  MHDIUTIM,MHDIUUID,MHDIICD3,MHDIDES3,MHDISUP3:
                                  MHDIDAT3,MHDIICD4,MHDIDES4,MHDISUP4,MHDIDAT4:
                                  MHDIICD5,MHDIDES5,MHDISUP5,MHDIDAT5,MHDIICD6:
                                  MHDIDES6,MHDISUP6,MHDIDAT6,MHDIP1CA,MHDIP1CB:
                                  MHDIP1CC,MHDIP2CA,MHDIP2CB,MHDIP2CC,MHDIHCPC:
                                  MHDICAST,MHDIDTY1,MHDIDTY2,MHDIDTY3,MHDIDTY4:
                                  MHDIDTY5,MHDIDTY6,MHDIURNO,MHDISPAR
          RETURN
.
.         delete a record
.
DEMHDIA2  RESET     KEY24
          DELETE    MEHDIAA2,KEY24
          RETURN

