RSLGCOD1  RESET     KEY5
          READ      LEGCODE1,KEY5;;
          RETURN
.
RALGCOD1  RESET     KEY5
          MOVE      ZERO,OVRCD
          READ      LEGCODE1,KEY5;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDLGCOD1  RESET     KEY5
          MOVE      ZERO,OVRCD
          READ      LEGCODE1,KEY5;LTCODE,LACODE,LTDESC,LTHCSCOD:
                                  LTCFORM6,LTCINDC1,LTCINDC2,LTCINDC3,LTCINDC4:
                                  LTCINDC5,LPCOACTV,LTCINDC6,LTCINDC7,LTCINDC8:
                                  LTCINDC9,LTCNDC10,LTCNDC11,LPCDGRPV,LPCDDEFT:
                                  LPCDNHCP,LTCSPARE
          GOTO      OVERCOND IF OVER
          RETURN
.
RKLGCOD1  MOVE      ZERO,OVRCD
          READKS    LEGCODE1;LTCODE,LACODE,LTDESC,LTHCSCOD:
                                  LTCFORM6,LTCINDC1,LTCINDC2,LTCINDC3,LTCINDC4:
                                  LTCINDC5,LPCOACTV,LTCINDC6,LTCINDC7,LTCINDC8:
                                  LTCINDC9,LTCNDC10,LTCNDC11,LPCDGRPV,LPCDDEFT:
                                  LPCDNHCP,LTCSPARE
          GOTO      OVERCOND IF OVER
          RETURN
.
RPLGCOD1  MOVE      ZERO,OVRCD
          READKP    LEGCODE1;LTCODE,LACODE,LTDESC,LTHCSCOD:
                                  LTCFORM6,LTCINDC1,LTCINDC2,LTCINDC3,LTCINDC4:
                                  LTCINDC5,LPCOACTV,LTCINDC6,LTCINDC7,LTCINDC8:
                                  LTCINDC9,LTCNDC10,LTCNDC11,LPCDGRPV,LPCDDEFT:
                                  LPCDNHCP,LTCSPARE
          GOTO      OVERCOND IF OVER
          RETURN
.
RSLGCOD2  RESET     KEY25
          READ      LEGCODE2,KEY25;;
          RETURN
.
RALGCOD2  RESET     KEY25
          MOVE      ZERO,OVRCD
          READ      LEGCODE2,KEY25;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDLGCOD2  RESET     KEY25
          MOVE      ZERO,OVRCD
          READ      LEGCODE2,KEY25;LTCODE,LACODE,LTDESC,LTHCSCOD:
                                  LTCFORM6,LTCINDC1,LTCINDC2,LTCINDC3,LTCINDC4:
                                  LTCINDC5,LPCOACTV,LTCINDC6,LTCINDC7,LTCINDC8:
                                  LTCINDC9,LTCNDC10,LTCNDC11,LPCDGRPV,LPCDDEFT:
                                  LPCDNHCP,LTCSPARE
          GOTO      OVERCOND IF OVER
          RETURN
.
RKLGCOD2  MOVE      ZERO,OVRCD
          READKS    LEGCODE2;LTCODE,LACODE,LTDESC,LTHCSCOD:
                                  LTCFORM6,LTCINDC1,LTCINDC2,LTCINDC3,LTCINDC4:
                                  LTCINDC5,LPCOACTV,LTCINDC6,LTCINDC7,LTCINDC8:
                                  LTCINDC9,LTCNDC10,LTCNDC11,LPCDGRPV,LPCDDEFT:
                                  LPCDNHCP,LTCSPARE
          GOTO      OVERCOND IF OVER
          RETURN
.
RPLGCOD2  MOVE      ZERO,OVRCD
          READKP    LEGCODE2;LTCODE,LACODE,LTDESC,LTHCSCOD:
                                  LTCFORM6,LTCINDC1,LTCINDC2,LTCINDC3,LTCINDC4:
                                  LTCINDC5,LPCOACTV,LTCINDC6,LTCINDC7,LTCINDC8:
                                  LTCINDC9,LTCNDC10,LTCNDC11,LPCDGRPV,LPCDDEFT:
                                  LPCDNHCP,LTCSPARE
          GOTO      OVERCOND IF OVER
          RETURN
.
RSLGCOD3  RESET     KEY5
          READ      LEGCODE3,KEY5;;
          RETURN
.
RALGCOD3  RESET     KEY5
          MOVE      ZERO,OVRCD
          READ      LEGCODE3,KEY5;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDLGCOD3  RESET     KEY5
          MOVE      ZERO,OVRCD
          READ      LEGCODE3,KEY5;LTCODE,LACODE,LTDESC,LTHCSCOD:
                                  LTCFORM6,LTCINDC1,LTCINDC2,LTCINDC3,LTCINDC4:
                                  LTCINDC5,LPCOACTV,LTCINDC6,LTCINDC7,LTCINDC8:
                                  LTCINDC9,LTCNDC10,LTCNDC11,LPCDGRPV,LPCDDEFT:
                                  LPCDNHCP,LTCSPARE
          GOTO      OVERCOND IF OVER
          RETURN
.
RKLGCOD3  MOVE      ZERO,OVRCD
          READKS    LEGCODE3;LTCODE,LACODE,LTDESC,LTHCSCOD:
                                  LTCFORM6,LTCINDC1,LTCINDC2,LTCINDC3,LTCINDC4:
                                  LTCINDC5,LPCOACTV,LTCINDC6,LTCINDC7,LTCINDC8:
                                  LTCINDC9,LTCNDC10,LTCNDC11,LPCDGRPV,LPCDDEFT:
                                  LPCDNHCP,LTCSPARE
          GOTO      OVERCOND IF OVER
          RETURN
.
RPLGCOD3  MOVE      ZERO,OVRCD
          READKP    LEGCODE3;LTCODE,LACODE,LTDESC,LTHCSCOD:
                                  LTCFORM6,LTCINDC1,LTCINDC2,LTCINDC3,LTCINDC4:
                                  LTCINDC5,LPCOACTV,LTCINDC6,LTCINDC7,LTCINDC8:
                                  LTCINDC9,LTCNDC10,LTCNDC11,LPCDGRPV,LPCDDEFT:
                                  LPCDNHCP,LTCSPARE
          GOTO      OVERCOND IF OVER
          RETURN
.
RSLGCOD4  RESET     KEY25
          READ      LEGCODE4,KEY25;;
          RETURN
.
RALGCOD4  RESET     KEY25
          MOVE      ZERO,OVRCD
          READ      LEGCODE4,KEY25;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDLGCOD4  RESET     KEY25
          MOVE      ZERO,OVRCD
          READ      LEGCODE4,KEY25;LTCODE,LACODE,LTDESC,LTHCSCOD:
                                  LTCFORM6,LTCINDC1,LTCINDC2,LTCINDC3,LTCINDC4:
                                  LTCINDC5,LPCOACTV,LTCINDC6,LTCINDC7,LTCINDC8:
                                  LTCINDC9,LTCNDC10,LTCNDC11,LPCDGRPV,LPCDDEFT:
                                  LPCDNHCP,LTCSPARE
          GOTO      OVERCOND IF OVER
          RETURN
.
RKLGCOD4  MOVE      ZERO,OVRCD
          READKS    LEGCODE4;LTCODE,LACODE,LTDESC,LTHCSCOD:
                                  LTCFORM6,LTCINDC1,LTCINDC2,LTCINDC3,LTCINDC4:
                                  LTCINDC5,LPCOACTV,LTCINDC6,LTCINDC7,LTCINDC8:
                                  LTCINDC9,LTCNDC10,LTCNDC11,LPCDGRPV,LPCDDEFT:
                                  LPCDNHCP,LTCSPARE
          GOTO      OVERCOND IF OVER
          RETURN
.
RPLGCOD4  MOVE      ZERO,OVRCD
          READKP    LEGCODE4;LTCODE,LACODE,LTDESC,LTHCSCOD:
                                  LTCFORM6,LTCINDC1,LTCINDC2,LTCINDC3,LTCINDC4:
                                  LTCINDC5,LPCOACTV,LTCINDC6,LTCINDC7,LTCINDC8:
                                  LTCINDC9,LTCNDC10,LTCNDC11,LPCDGRPV,LPCDDEFT:
                                  LPCDNHCP,LTCSPARE
          GOTO      OVERCOND IF OVER
          RETURN
.
