.
. AAEIODIS.INC
. ------------
. Filenames       : aaedi1af
. Description     : A&E Discharge file
. Modifications   : 26/04/89 K.Peak
.                   Added ADSDISC,ADSDIAG - N.Z Changes
.                   15/01/90 DIG
.                   Added second key and put in RDA's
.                   21/09/1993    LOFTY
.                   Added new file
.                   20/09/1994    Max White   Taranaki Contract Mods
.                   Added user defined coded fields to new file layout :-
.                     AEDSUSR6 (Category A6)
.                     AEDSUSR7 (Category A7)
.                     AEDSUSR8 (Category A8)
. *                 13/10/1995   Howellsy         suht  
. *                 added wtwmoper  
.
. ----------------------------
. ------- first index -------
. ----------------------------
.
RDADISA1  MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      AAEDI1A1,KEY8;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDSDISA1  RESET     KEY8
          READ      AAEDI1A1,KEY8;;
          RETURN  
.
RDDISA1   MOVE      ZERO,OVRCD
          RESET     KEY8
          READ      AAEDI1A1,KEY8;ADSNUMB,ADSDATE,ADSTIME,ADSSSES,ADSDISC:
                                  ADSDIAG,AEDSDCFT,AEDSTCFT,AEDSDDTA:
                                  AEDSDCON,AEDSTCON,AEDSDADM,AEDSTADM:
                                  AEDSUSR6,AEDSUSR7,AEDSUSR8,AEDSOPER,AEDSSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDKDISA1  MOVE      ZERO,OVRCD
          READKS    AAEDI1A1;ADSNUMB,ADSDATE,ADSTIME,ADSSSES,ADSDISC:
                             ADSDIAG,AEDSDCFT,AEDSTCFT,AEDSDDTA:
                             AEDSDCON,AEDSTCON,AEDSDADM,AEDSTADM:
                             AEDSUSR6,AEDSUSR7,AEDSUSR8,AEDSOPER,AEDSSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
WRDISA1   RESET     KEY8
          MOVE      PASSCODE,AEDSOPER
          WRITE     AAEDI1A1,KEY8;ADSNUMB,ADSDATE,ADSTIME,ADSSSES,ADSDISC:
                                  ADSDIAG,AEDSDCFT,AEDSTCFT,AEDSDDTA:
                                  AEDSDCON,AEDSTCON,AEDSDADM,AEDSTADM:
                                  AEDSUSR6,AEDSUSR7,AEDSUSR8,AEDSOPER,AEDSSPAR
          RETURN  
.
UPDISA1   UPDATE    AAEDI1A1;ADSNUMB,ADSDATE,ADSTIME,ADSSSES,ADSDISC:
                             ADSDIAG,AEDSDCFT,AEDSTCFT,AEDSDDTA:
                             AEDSDCON,AEDSTCON,AEDSDADM,AEDSTADM:
                             AEDSUSR6,AEDSUSR7,AEDSUSR8,AEDSOPER,AEDSSPAR
          RETURN  
.
DEDISA1   RESET     KEY8
          DELETE    AAEDI1A1,KEY8
          RETURN
.
. ----------------------------
. ------- second index -------
. ----------------------------
.
RDADISA2  MOVE      ZERO,OVRCD
          RESET     KEY16
          READ      AAEDI1A2,KEY16;ANS
          RETURN
.
RDSDISA2  RESET     KEY16
          READ      AAEDI1A2,KEY16;;
          RETURN  
.
RDDISA2   MOVE      ZERO,OVRCD
          RESET     KEY16
          READ      AAEDI1A2,KEY16;ADSNUMB,ADSDATE,ADSTIME,ADSSSES,ADSDISC:
                                   ADSDIAG,AEDSDCFT,AEDSTCFT,AEDSDDTA:
                                   AEDSDCON,AEDSTCON,AEDSDADM,AEDSTADM:
                                   AEDSUSR6,AEDSUSR7,AEDSUSR8,AEDSOPER:
                                   AEDSSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
.
RDKDISA2  MOVE      ZERO,OVRCD
          READKS    AAEDI1A2;ADSNUMB,ADSDATE,ADSTIME,ADSSSES,ADSDISC:
                             ADSDIAG,AEDSDCFT,AEDSTCFT,AEDSDDTA:
                             AEDSDCON,AEDSTCON,AEDSDADM,AEDSTADM:
                             AEDSUSR6,AEDSUSR7,AEDSUSR8,AEDSOPER,AEDSSPAR
          GOTO      OVERCOND IF OVER
          RETURN  
+
.

