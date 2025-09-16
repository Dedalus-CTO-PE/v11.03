.
. NZPEXTIO    
. --------
. Filename     : nzpextaf.dat
.
RSNZEXT1  RESET     KEY49                                                       
          READ      NZPEXTA1,KEY49;;                                            
          RETURN
.
RANZEXT1  RESET     KEY49                                                       
          MOVE      ZERO,OVRCD
          READ      NZPEXTA1,KEY49;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZEXT1  RESET     KEY49                                                       
          MOVE      ZERO,OVRCD
          READ      NZPEXTA1,KEY49;NZEXBTID,NZEXHCOD,NZEXADMN,NZEXINVN,NZEXTRNO:
                        NZEXURNO,NZEXSYST,NZEXRTYP,NZEXDESC,NZEXTDAT,NZEXRCNO:  
                        NZEXPREF,NZEXPMTH,NZEXMCTY,NZEXCOMS,NZEXGSTC,NZEXBNAM:  
                        NZEXGLBT,NZEXCACC,NZEXCAMT,NZEXDACC,NZEXDAMT,NZEXCDAT:  
                        NZEXCTIM,NZEXCUID,NZEXRREF,NZEXCRST,NZEXSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZEXT1  MOVE      ZERO,OVRCD                                                  
          READKS    NZPEXTA1;NZEXBTID,NZEXHCOD,NZEXADMN,NZEXINVN,NZEXTRNO:      
                        NZEXURNO,NZEXSYST,NZEXRTYP,NZEXDESC,NZEXTDAT,NZEXRCNO:  
                        NZEXPREF,NZEXPMTH,NZEXMCTY,NZEXCOMS,NZEXGSTC,NZEXBNAM:  
                        NZEXGLBT,NZEXCACC,NZEXCAMT,NZEXDACC,NZEXDAMT,NZEXCDAT:  
                        NZEXCTIM,NZEXCUID,NZEXRREF,NZEXCRST,NZEXSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZEXT1  MOVE      ZERO,OVRCD                                                  
          READKP    NZPEXTA1;NZEXBTID,NZEXHCOD,NZEXADMN,NZEXINVN,NZEXTRNO:      
                        NZEXURNO,NZEXSYST,NZEXRTYP,NZEXDESC,NZEXTDAT,NZEXRCNO:  
                        NZEXPREF,NZEXPMTH,NZEXMCTY,NZEXCOMS,NZEXGSTC,NZEXBNAM:  
                        NZEXGLBT,NZEXCACC,NZEXCAMT,NZEXDACC,NZEXDAMT,NZEXCDAT:  
                        NZEXCTIM,NZEXCUID,NZEXRREF,NZEXCRST,NZEXSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZEXT1  MOVE      ZERO,OVRCD                                                  
          UPDATE    NZPEXTA1;NZEXBTID,NZEXHCOD,NZEXADMN,NZEXINVN,NZEXTRNO:      
                        NZEXURNO,NZEXSYST,NZEXRTYP,NZEXDESC,NZEXTDAT,NZEXRCNO:  
                        NZEXPREF,NZEXPMTH,NZEXMCTY,NZEXCOMS,NZEXGSTC,NZEXBNAM:  
                        NZEXGLBT,NZEXCACC,NZEXCAMT,NZEXDACC,NZEXDAMT,NZEXCDAT:  
                        NZEXCTIM,NZEXCUID,NZEXRREF,NZEXCRST,NZEXSPAR            
          RETURN
.
WRNZEXT1  RESET     KEY49                                                       
          WRITE     NZPEXTA1,KEY49;NZEXBTID,NZEXHCOD,NZEXADMN,NZEXINVN,NZEXTRNO:
                        NZEXURNO,NZEXSYST,NZEXRTYP,NZEXDESC,NZEXTDAT,NZEXRCNO:  
                        NZEXPREF,NZEXPMTH,NZEXMCTY,NZEXCOMS,NZEXGSTC,NZEXBNAM:  
                        NZEXGLBT,NZEXCACC,NZEXCAMT,NZEXDACC,NZEXDAMT,NZEXCDAT:  
                        NZEXCTIM,NZEXCUID,NZEXRREF,NZEXCRST,NZEXSPAR            
          RETURN
.
DENZEXT1  RESET     KEY49                                                       
          DELETE    NZPEXTA1,KEY49                                              
          RETURN
.
RSNZEXT2  RESET     KEY30                                                       
          READ      NZPEXTA2,KEY30;;                                            
          RETURN
.
RANZEXT2  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      NZPEXTA2,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZEXT2  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      NZPEXTA2,KEY30;NZEXBTID,NZEXHCOD,NZEXADMN,NZEXINVN,NZEXTRNO:
                        NZEXURNO,NZEXSYST,NZEXRTYP,NZEXDESC,NZEXTDAT,NZEXRCNO:  
                        NZEXPREF,NZEXPMTH,NZEXMCTY,NZEXCOMS,NZEXGSTC,NZEXBNAM:  
                        NZEXGLBT,NZEXCACC,NZEXCAMT,NZEXDACC,NZEXDAMT,NZEXCDAT:  
                        NZEXCTIM,NZEXCUID,NZEXRREF,NZEXCRST,NZEXSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZEXT2  MOVE      ZERO,OVRCD                                                  
          READKS    NZPEXTA2;NZEXBTID,NZEXHCOD,NZEXADMN,NZEXINVN,NZEXTRNO:      
                        NZEXURNO,NZEXSYST,NZEXRTYP,NZEXDESC,NZEXTDAT,NZEXRCNO:  
                        NZEXPREF,NZEXPMTH,NZEXMCTY,NZEXCOMS,NZEXGSTC,NZEXBNAM:  
                        NZEXGLBT,NZEXCACC,NZEXCAMT,NZEXDACC,NZEXDAMT,NZEXCDAT:  
                        NZEXCTIM,NZEXCUID,NZEXRREF,NZEXCRST,NZEXSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZEXT2  MOVE      ZERO,OVRCD                                                  
          READKP    NZPEXTA2;NZEXBTID,NZEXHCOD,NZEXADMN,NZEXINVN,NZEXTRNO:      
                        NZEXURNO,NZEXSYST,NZEXRTYP,NZEXDESC,NZEXTDAT,NZEXRCNO:  
                        NZEXPREF,NZEXPMTH,NZEXMCTY,NZEXCOMS,NZEXGSTC,NZEXBNAM:  
                        NZEXGLBT,NZEXCACC,NZEXCAMT,NZEXDACC,NZEXDAMT,NZEXCDAT:  
                        NZEXCTIM,NZEXCUID,NZEXRREF,NZEXCRST,NZEXSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZEXT2  MOVE      ZERO,OVRCD                                                  
          UPDATE    NZPEXTA2;NZEXBTID,NZEXHCOD,NZEXADMN,NZEXINVN,NZEXTRNO:      
                        NZEXURNO,NZEXSYST,NZEXRTYP,NZEXDESC,NZEXTDAT,NZEXRCNO:  
                        NZEXPREF,NZEXPMTH,NZEXMCTY,NZEXCOMS,NZEXGSTC,NZEXBNAM:  
                        NZEXGLBT,NZEXCACC,NZEXCAMT,NZEXDACC,NZEXDAMT,NZEXCDAT:  
                        NZEXCTIM,NZEXCUID,NZEXRREF,NZEXCRST,NZEXSPAR            
          RETURN
.
WRNZEXT2  RESET     KEY30                                                       
          WRITE     NZPEXTA2,KEY30;NZEXBTID,NZEXHCOD,NZEXADMN,NZEXINVN,NZEXTRNO:
                        NZEXURNO,NZEXSYST,NZEXRTYP,NZEXDESC,NZEXTDAT,NZEXRCNO:  
                        NZEXPREF,NZEXPMTH,NZEXMCTY,NZEXCOMS,NZEXGSTC,NZEXBNAM:  
                        NZEXGLBT,NZEXCACC,NZEXCAMT,NZEXDACC,NZEXDAMT,NZEXCDAT:  
                        NZEXCTIM,NZEXCUID,NZEXRREF,NZEXCRST,NZEXSPAR            
          RETURN
.
DENZEXT2  RESET     KEY30                                                       
          DELETE    NZPEXTA2,KEY30                                              
          RETURN
.
RSNZEXT3  RESET     KEY30                                                       
          READ      NZPEXTA3,KEY30;;                                            
          RETURN
.
RANZEXT3  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      NZPEXTA3,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZEXT3  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      NZPEXTA3,KEY30;NZEXBTID,NZEXHCOD,NZEXADMN,NZEXINVN,NZEXTRNO:
                        NZEXURNO,NZEXSYST,NZEXRTYP,NZEXDESC,NZEXTDAT,NZEXRCNO:  
                        NZEXPREF,NZEXPMTH,NZEXMCTY,NZEXCOMS,NZEXGSTC,NZEXBNAM:  
                        NZEXGLBT,NZEXCACC,NZEXCAMT,NZEXDACC,NZEXDAMT,NZEXCDAT:  
                        NZEXCTIM,NZEXCUID,NZEXRREF,NZEXCRST,NZEXSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZEXT3  MOVE      ZERO,OVRCD                                                  
          READKS    NZPEXTA3;NZEXBTID,NZEXHCOD,NZEXADMN,NZEXINVN,NZEXTRNO:      
                        NZEXURNO,NZEXSYST,NZEXRTYP,NZEXDESC,NZEXTDAT,NZEXRCNO:  
                        NZEXPREF,NZEXPMTH,NZEXMCTY,NZEXCOMS,NZEXGSTC,NZEXBNAM:  
                        NZEXGLBT,NZEXCACC,NZEXCAMT,NZEXDACC,NZEXDAMT,NZEXCDAT:  
                        NZEXCTIM,NZEXCUID,NZEXRREF,NZEXCRST,NZEXSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZEXT3  MOVE      ZERO,OVRCD                                                  
          READKP    NZPEXTA3;NZEXBTID,NZEXHCOD,NZEXADMN,NZEXINVN,NZEXTRNO:      
                        NZEXURNO,NZEXSYST,NZEXRTYP,NZEXDESC,NZEXTDAT,NZEXRCNO:  
                        NZEXPREF,NZEXPMTH,NZEXMCTY,NZEXCOMS,NZEXGSTC,NZEXBNAM:  
                        NZEXGLBT,NZEXCACC,NZEXCAMT,NZEXDACC,NZEXDAMT,NZEXCDAT:  
                        NZEXCTIM,NZEXCUID,NZEXRREF,NZEXCRST,NZEXSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZEXT3  MOVE      ZERO,OVRCD                                                  
          UPDATE    NZPEXTA3;NZEXBTID,NZEXHCOD,NZEXADMN,NZEXINVN,NZEXTRNO:      
                        NZEXURNO,NZEXSYST,NZEXRTYP,NZEXDESC,NZEXTDAT,NZEXRCNO:  
                        NZEXPREF,NZEXPMTH,NZEXMCTY,NZEXCOMS,NZEXGSTC,NZEXBNAM:  
                        NZEXGLBT,NZEXCACC,NZEXCAMT,NZEXDACC,NZEXDAMT,NZEXCDAT:  
                        NZEXCTIM,NZEXCUID,NZEXRREF,NZEXCRST,NZEXSPAR            
          RETURN
.
WRNZEXT3  RESET     KEY30                                                       
          WRITE     NZPEXTA3,KEY30;NZEXBTID,NZEXHCOD,NZEXADMN,NZEXINVN,NZEXTRNO:
                        NZEXURNO,NZEXSYST,NZEXRTYP,NZEXDESC,NZEXTDAT,NZEXRCNO:  
                        NZEXPREF,NZEXPMTH,NZEXMCTY,NZEXCOMS,NZEXGSTC,NZEXBNAM:  
                        NZEXGLBT,NZEXCACC,NZEXCAMT,NZEXDACC,NZEXDAMT,NZEXCDAT:  
                        NZEXCTIM,NZEXCUID,NZEXRREF,NZEXCRST,NZEXSPAR            
          RETURN
.
DENZEXT3  RESET     KEY30                                                       
          DELETE    NZPEXTA3,KEY30                                              
          RETURN
.
RSNZEXT4  RESET     KEY30                                                       
          READ      NZPEXTA4,KEY30;;                                            
          RETURN
.
RANZEXT4  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      NZPEXTA4,KEY30;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZEXT4  RESET     KEY30                                                       
          MOVE      ZERO,OVRCD
          READ      NZPEXTA4,KEY30;NZEXBTID,NZEXHCOD,NZEXADMN,NZEXINVN,NZEXTRNO:
                        NZEXURNO,NZEXSYST,NZEXRTYP,NZEXDESC,NZEXTDAT,NZEXRCNO:  
                        NZEXPREF,NZEXPMTH,NZEXMCTY,NZEXCOMS,NZEXGSTC,NZEXBNAM:  
                        NZEXGLBT,NZEXCACC,NZEXCAMT,NZEXDACC,NZEXDAMT,NZEXCDAT:  
                        NZEXCTIM,NZEXCUID,NZEXRREF,NZEXCRST,NZEXSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZEXT4  MOVE      ZERO,OVRCD                                                  
          READKS    NZPEXTA4;NZEXBTID,NZEXHCOD,NZEXADMN,NZEXINVN,NZEXTRNO:      
                        NZEXURNO,NZEXSYST,NZEXRTYP,NZEXDESC,NZEXTDAT,NZEXRCNO:  
                        NZEXPREF,NZEXPMTH,NZEXMCTY,NZEXCOMS,NZEXGSTC,NZEXBNAM:  
                        NZEXGLBT,NZEXCACC,NZEXCAMT,NZEXDACC,NZEXDAMT,NZEXCDAT:  
                        NZEXCTIM,NZEXCUID,NZEXRREF,NZEXCRST,NZEXSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZEXT4  MOVE      ZERO,OVRCD                                                  
          READKP    NZPEXTA4;NZEXBTID,NZEXHCOD,NZEXADMN,NZEXINVN,NZEXTRNO:      
                        NZEXURNO,NZEXSYST,NZEXRTYP,NZEXDESC,NZEXTDAT,NZEXRCNO:  
                        NZEXPREF,NZEXPMTH,NZEXMCTY,NZEXCOMS,NZEXGSTC,NZEXBNAM:  
                        NZEXGLBT,NZEXCACC,NZEXCAMT,NZEXDACC,NZEXDAMT,NZEXCDAT:  
                        NZEXCTIM,NZEXCUID,NZEXRREF,NZEXCRST,NZEXSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZEXT4  MOVE      ZERO,OVRCD                                                  
          UPDATE    NZPEXTA4;NZEXBTID,NZEXHCOD,NZEXADMN,NZEXINVN,NZEXTRNO:      
                        NZEXURNO,NZEXSYST,NZEXRTYP,NZEXDESC,NZEXTDAT,NZEXRCNO:  
                        NZEXPREF,NZEXPMTH,NZEXMCTY,NZEXCOMS,NZEXGSTC,NZEXBNAM:  
                        NZEXGLBT,NZEXCACC,NZEXCAMT,NZEXDACC,NZEXDAMT,NZEXCDAT:  
                        NZEXCTIM,NZEXCUID,NZEXRREF,NZEXCRST,NZEXSPAR            
          RETURN
.
WRNZEXT4  RESET     KEY30                                                       
          WRITE     NZPEXTA4,KEY30;NZEXBTID,NZEXHCOD,NZEXADMN,NZEXINVN,NZEXTRNO:
                        NZEXURNO,NZEXSYST,NZEXRTYP,NZEXDESC,NZEXTDAT,NZEXRCNO:  
                        NZEXPREF,NZEXPMTH,NZEXMCTY,NZEXCOMS,NZEXGSTC,NZEXBNAM:  
                        NZEXGLBT,NZEXCACC,NZEXCAMT,NZEXDACC,NZEXDAMT,NZEXCDAT:  
                        NZEXCTIM,NZEXCUID,NZEXRREF,NZEXCRST,NZEXSPAR            
          RETURN
.
DENZEXT4  RESET     KEY30                                                       
          DELETE    NZPEXTA4,KEY30                                              
          RETURN
.
