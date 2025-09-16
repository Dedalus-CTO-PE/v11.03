.
.  **********************************************************************
.  *                                                                    *
.  *     Include Name : PMSNUTIO.INC                                    *
.  *                                                                    *
.  *     Function     : File Definition include for Nutrition Table     *
.  *                                                                    *
.  *     File Type    : SQL                                             *
.  *                                                                    *
.  *     File Name    : pmsnutaf.dat                                    *
.  *                                                                    *
.  *     Keys         : KEY16                                           *
.  *                                                                    *
.  *     Programmer   : G.Saunders                                      *
.  *                                                                    *
.  *     Modifications:                                                 *
.  *                                                                    *
.  **********************************************************************
.
.         positional read
.
RSPMNUT1  RESET     KEY16
          READ      PMSNUTA1,KEY16;;
          RETURN
.
.         read to see if record exists
.
RAPMNUT1  MOVE      ZERO,OVRCD
          RESET     KEY16
          READ      PMSNUTA1,KEY16;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDPMNUT1  MOVE      ZERO,OVRCD
          RESET     KEY16
          READ      PMSNUTA1,KEY16;PMNUADMN,PMNUDATE,PMNUCRTD,PMNUUPDD:
                                   PMNUCRTU,PMNUUPDU,PMNUDTYP,PMNUWARD,PMNUSIZE:
                                   PMNUDCDE,PMNUPAGN,PMNUALVL,PMNUFLUI,PMNUTEAT:
                                   PMNUADTV,PMNUVOLU,PMNUML01,PMNUML02,PMNUML03:
                                   PMNUML04,PMNUML05,PMNUML06,PMNUML07,PMNUML08:
                                   PMNUML09,PMNUML10,PMNUSTAT,PMNUBELT,PMNUMTYP:
                                   PMNUPRNT,PMNUCOM1,PMNUCOM2,PMNUCOM3,PMNUCOM4:
                                   PMNUCOM5,PMNUUDF1,PMNUUDF2,PMNUUDF3,PMNUUDF4:
                                   PMNUUDF5,PMNUFAST,PMNUBSUP,PMNUMSUP,PMNULSUP:
                                   PMNUASUP,PMNUDSUP,PMNUSSUP,PMNUDIET,PMNUSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         next read
.
RKPMNUT1  MOVE      ZERO,OVRCD
          READKS    PMSNUTA1;PMNUADMN,PMNUDATE,PMNUCRTD,PMNUUPDD:
                             PMNUCRTU,PMNUUPDU,PMNUDTYP,PMNUWARD,PMNUSIZE:
                             PMNUDCDE,PMNUPAGN,PMNUALVL,PMNUFLUI,PMNUTEAT:
                             PMNUADTV,PMNUVOLU,PMNUML01,PMNUML02,PMNUML03:
                             PMNUML04,PMNUML05,PMNUML06,PMNUML07,PMNUML08:
                             PMNUML09,PMNUML10,PMNUSTAT,PMNUBELT,PMNUMTYP:
                             PMNUPRNT,PMNUCOM1,PMNUCOM2,PMNUCOM3,PMNUCOM4:
                             PMNUCOM5,PMNUUDF1,PMNUUDF2,PMNUUDF3,PMNUUDF4:
                             PMNUUDF5,PMNUFAST,PMNUBSUP,PMNUMSUP,PMNULSUP:
                             PMNUASUP,PMNUDSUP,PMNUSSUP,PMNUDIET,PMNUSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         previous read
.
RPPMNUT1  MOVE      ZERO,OVRCD
          READKP    PMSNUTA1;PMNUADMN,PMNUDATE,PMNUCRTD,PMNUUPDD:
                             PMNUCRTU,PMNUUPDU,PMNUDTYP,PMNUWARD,PMNUSIZE:
                             PMNUDCDE,PMNUPAGN,PMNUALVL,PMNUFLUI,PMNUTEAT:
                             PMNUADTV,PMNUVOLU,PMNUML01,PMNUML02,PMNUML03:
                             PMNUML04,PMNUML05,PMNUML06,PMNUML07,PMNUML08:
                             PMNUML09,PMNUML10,PMNUSTAT,PMNUBELT,PMNUMTYP:
                             PMNUPRNT,PMNUCOM1,PMNUCOM2,PMNUCOM3,PMNUCOM4:
                             PMNUCOM5,PMNUUDF1,PMNUUDF2,PMNUUDF3,PMNUUDF4:
                             PMNUUDF5,PMNUFAST,PMNUBSUP,PMNUMSUP,PMNULSUP:
                             PMNUASUP,PMNUDSUP,PMNUSSUP,PMNUDIET,PMNUSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         update
.
UPPMNUT1  UPDATE    PMSNUTA1;PMNUADMN,PMNUDATE,PMNUCRTD,PMNUUPDD:
                             PMNUCRTU,PMNUUPDU,PMNUDTYP,PMNUWARD,PMNUSIZE:
                             PMNUDCDE,PMNUPAGN,PMNUALVL,PMNUFLUI,PMNUTEAT:
                             PMNUADTV,PMNUVOLU,PMNUML01,PMNUML02,PMNUML03:
                             PMNUML04,PMNUML05,PMNUML06,PMNUML07,PMNUML08:
                             PMNUML09,PMNUML10,PMNUSTAT,PMNUBELT,PMNUMTYP:
                             PMNUPRNT,PMNUCOM1,PMNUCOM2,PMNUCOM3,PMNUCOM4:
                             PMNUCOM5,PMNUUDF1,PMNUUDF2,PMNUUDF3,PMNUUDF4:
                             PMNUUDF5,PMNUFAST,PMNUBSUP,PMNUMSUP,PMNULSUP:
                             PMNUASUP,PMNUDSUP,PMNUSSUP,PMNUDIET,PMNUSPAR
          RETURN
.
.         write
.
WRPMNUT1  RESET     KEY16
          WRITE     PMSNUTA1,KEY16;PMNUADMN,PMNUDATE,PMNUCRTD,PMNUUPDD:
                                   PMNUCRTU,PMNUUPDU,PMNUDTYP,PMNUWARD,PMNUSIZE:
                                   PMNUDCDE,PMNUPAGN,PMNUALVL,PMNUFLUI,PMNUTEAT:
                                   PMNUADTV,PMNUVOLU,PMNUML01,PMNUML02,PMNUML03:
                                   PMNUML04,PMNUML05,PMNUML06,PMNUML07,PMNUML08:
                                   PMNUML09,PMNUML10,PMNUSTAT,PMNUBELT,PMNUMTYP:
                                   PMNUPRNT,PMNUCOM1,PMNUCOM2,PMNUCOM3,PMNUCOM4:
                                   PMNUCOM5,PMNUUDF1,PMNUUDF2,PMNUUDF3,PMNUUDF4:
                                   PMNUUDF5,PMNUFAST,PMNUBSUP,PMNUMSUP,PMNULSUP:
                                   PMNUASUP,PMNUDSUP,PMNUSSUP,PMNUDIET,PMNUSPAR
          RETURN
.
.         delete a record
.
DEPMNUT1  RESET     KEY16
          DELETE    PMSNUTA1,KEY16
          RETURN
.
.
.         positional read
.
RSPMNUT2  RESET     KEY16
          READ      PMSNUTA2,KEY16;;
          RETURN
.
.         read to see if record exists
.
RAPMNUT2  MOVE      ZERO,OVRCD
          RESET     KEY16
          READ      PMSNUTA2,KEY16;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
.         full read
.
RDPMNUT2  MOVE      ZERO,OVRCD
          RESET     KEY16
          READ      PMSNUTA2,KEY16;PMNUADMN,PMNUDATE,PMNUCRTD,PMNUUPDD:
                                   PMNUCRTU,PMNUUPDU,PMNUDTYP,PMNUWARD,PMNUSIZE:
                                   PMNUDCDE,PMNUPAGN,PMNUALVL,PMNUFLUI,PMNUTEAT:
                                   PMNUADTV,PMNUVOLU,PMNUML01,PMNUML02,PMNUML03:
                                   PMNUML04,PMNUML05,PMNUML06,PMNUML07,PMNUML08:
                                   PMNUML09,PMNUML10,PMNUSTAT,PMNUBELT,PMNUMTYP:
                                   PMNUPRNT,PMNUCOM1,PMNUCOM2,PMNUCOM3,PMNUCOM4:
                                   PMNUCOM5,PMNUUDF1,PMNUUDF2,PMNUUDF3,PMNUUDF4:
                                   PMNUUDF5,PMNUFAST,PMNUBSUP,PMNUMSUP,PMNULSUP:
                                   PMNUASUP,PMNUDSUP,PMNUSSUP,PMNUDIET,PMNUSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         next read
.
RKPMNUT2  MOVE      ZERO,OVRCD
          READKS    PMSNUTA2;PMNUADMN,PMNUDATE,PMNUCRTD,PMNUUPDD:
                             PMNUCRTU,PMNUUPDU,PMNUDTYP,PMNUWARD,PMNUSIZE:
                             PMNUDCDE,PMNUPAGN,PMNUALVL,PMNUFLUI,PMNUTEAT:
                             PMNUADTV,PMNUVOLU,PMNUML01,PMNUML02,PMNUML03:
                             PMNUML04,PMNUML05,PMNUML06,PMNUML07,PMNUML08:
                             PMNUML09,PMNUML10,PMNUSTAT,PMNUBELT,PMNUMTYP:
                             PMNUPRNT,PMNUCOM1,PMNUCOM2,PMNUCOM3,PMNUCOM4:
                             PMNUCOM5,PMNUUDF1,PMNUUDF2,PMNUUDF3,PMNUUDF4:
                             PMNUUDF5,PMNUFAST,PMNUBSUP,PMNUMSUP,PMNULSUP:
                             PMNUASUP,PMNUDSUP,PMNUSSUP,PMNUDIET,PMNUSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         previous read
.
RPPMNUT2  MOVE      ZERO,OVRCD
          READKP    PMSNUTA2;PMNUADMN,PMNUDATE,PMNUCRTD,PMNUUPDD:
                             PMNUCRTU,PMNUUPDU,PMNUDTYP,PMNUWARD,PMNUSIZE:
                             PMNUDCDE,PMNUPAGN,PMNUALVL,PMNUFLUI,PMNUTEAT:
                             PMNUADTV,PMNUVOLU,PMNUML01,PMNUML02,PMNUML03:
                             PMNUML04,PMNUML05,PMNUML06,PMNUML07,PMNUML08:
                             PMNUML09,PMNUML10,PMNUSTAT,PMNUBELT,PMNUMTYP:
                             PMNUPRNT,PMNUCOM1,PMNUCOM2,PMNUCOM3,PMNUCOM4:
                             PMNUCOM5,PMNUUDF1,PMNUUDF2,PMNUUDF3,PMNUUDF4:
                             PMNUUDF5,PMNUFAST,PMNUBSUP,PMNUMSUP,PMNULSUP:
                             PMNUASUP,PMNUDSUP,PMNUSSUP,PMNUDIET,PMNUSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
.         write
.
WRPMNUT2  RESET     KEY16
          WRITE     PMSNUTA2,KEY16;PMNUADMN,PMNUDATE,PMNUCRTD,PMNUUPDD:
                                   PMNUCRTU,PMNUUPDU,PMNUDTYP,PMNUWARD,PMNUSIZE:
                                   PMNUDCDE,PMNUPAGN,PMNUALVL,PMNUFLUI,PMNUTEAT:
                                   PMNUADTV,PMNUVOLU,PMNUML01,PMNUML02,PMNUML03:
                                   PMNUML04,PMNUML05,PMNUML06,PMNUML07,PMNUML08:
                                   PMNUML09,PMNUML10,PMNUSTAT,PMNUBELT,PMNUMTYP:
                                   PMNUPRNT,PMNUCOM1,PMNUCOM2,PMNUCOM3,PMNUCOM4:
                                   PMNUCOM5,PMNUUDF1,PMNUUDF2,PMNUUDF3,PMNUUDF4:
                                   PMNUUDF5,PMNUFAST,PMNUBSUP,PMNUMSUP,PMNULSUP:
                                   PMNUASUP,PMNUDSUP,PMNUSSUP,PMNUDIET,PMNUSPAR
          RETURN
