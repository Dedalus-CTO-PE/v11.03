.
. NZPIB1IO    
. --------
. Filename     : nzpib1af.dat
.
RSNZIB11  RESET     KEY40                                                       
          READ      NZPIBR11,KEY40;;                                            
          RETURN
.
RANZIB11  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      NZPIBR11,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZIB11  RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      NZPIBR11,KEY40;NZIBHOSP,NZIBCLMC,NZIBCNTR,NZIBFTAB,NZIBCPRC:
                        NZIBEFDT,NZIBBRCD,NZIBAMNT,NZIBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZIB11  MOVE      ZERO,OVRCD
          READKS    NZPIBR11;NZIBHOSP,NZIBCLMC,NZIBCNTR,NZIBFTAB,NZIBCPRC:      
                        NZIBEFDT,NZIBBRCD,NZIBAMNT,NZIBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZIB11  MOVE      ZERO,OVRCD
          READKP    NZPIBR11;NZIBHOSP,NZIBCLMC,NZIBCNTR,NZIBFTAB,NZIBCPRC:      
                        NZIBEFDT,NZIBBRCD,NZIBAMNT,NZIBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZIB11  UPDATE    NZPIBR11;NZIBHOSP,NZIBCLMC,NZIBCNTR,NZIBFTAB,NZIBCPRC:      
                        NZIBEFDT,NZIBBRCD,NZIBAMNT,NZIBSPAR                     
          RETURN
.
WRNZIB11  RESET     KEY40                                                       
          WRITE     NZPIBR11,KEY40;NZIBHOSP,NZIBCLMC,NZIBCNTR,NZIBFTAB,NZIBCPRC:
                        NZIBEFDT,NZIBBRCD,NZIBAMNT,NZIBSPAR                     
          RETURN
.
DENZIB11  RESET     KEY40                                                       
          DELETE    NZPIBR11,KEY40                                              
          RETURN
.
