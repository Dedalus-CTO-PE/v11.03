.
. NZPIBRIO    
. --------
. Filename     : nzpibraf.dat
.
RSNZIBR1  RESET     KEY40                                                       
          READ      NZPIBRA1,KEY40;;                                            
          RETURN
.
RANZIBR1  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      NZPIBRA1,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZIBR1  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      NZPIBRA1,KEY40;NZIBHOSP,NZIBCLMC,NZIBCNTR,NZIBFTAB,NZIBCPRC:
                        NZIBEFDT,NZIBBRCD,NZIBAMNT,NZIBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZIBR1  MOVE      ZERO,OVRCD
          READKS    NZPIBRA1;NZIBHOSP,NZIBCLMC,NZIBCNTR,NZIBFTAB,NZIBCPRC:      
                        NZIBEFDT,NZIBBRCD,NZIBAMNT,NZIBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZIBR1  MOVE      ZERO,OVRCD
          READKP    NZPIBRA1;NZIBHOSP,NZIBCLMC,NZIBCNTR,NZIBFTAB,NZIBCPRC:      
                        NZIBEFDT,NZIBBRCD,NZIBAMNT,NZIBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZIBR1  UPDATE    NZPIBRA1;NZIBHOSP,NZIBCLMC,NZIBCNTR,NZIBFTAB,NZIBCPRC:      
                        NZIBEFDT,NZIBBRCD,NZIBAMNT,NZIBSPAR                     
          RETURN
.
WRNZIBR1  RESET     KEY40                                                       
          WRITE     NZPIBRA1,KEY40;NZIBHOSP,NZIBCLMC,NZIBCNTR,NZIBFTAB,NZIBCPRC:
                        NZIBEFDT,NZIBBRCD,NZIBAMNT,NZIBSPAR                     
          RETURN
.
DENZIBR1  RESET     KEY40                                                       
          DELETE    NZPIBRA1,KEY40                                              
          RETURN
.
