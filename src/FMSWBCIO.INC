.
. FMSWBCIO    
. --------
. Filename     : fmswbcaf.dat
.
RSFMWB1   RESET     KEY13                                                       
          READ      FMSWBCA1,KEY13;;                                            
          RETURN
.
RAFMWB1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      FMSWBCA1,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMWB1   RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      FMSWBCA1,KEY13;FMWBUID,FMWBYR,FMWBPR,FMWBLIN,FMWBCOM:       
                        FMWBSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMWB1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSWBCA1;FMWBUID,FMWBYR,FMWBPR,FMWBLIN,FMWBCOM:             
                        FMWBSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMWB1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSWBCA1;FMWBUID,FMWBYR,FMWBPR,FMWBLIN,FMWBCOM:             
                        FMWBSPA                                                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMWB1                                                                         
          UPDATE    FMSWBCA1;FMWBUID,FMWBYR,FMWBPR,FMWBLIN,FMWBCOM:             
                        FMWBSPA                                                 
          RETURN
.
WRFMWB1   RESET     KEY13                                                       
          WRITE     FMSWBCA1,KEY13;FMWBUID,FMWBYR,FMWBPR,FMWBLIN,FMWBCOM:       
                        FMWBSPA                                                 
          RETURN
.
DEFMWB1   RESET     KEY13                                                       
          DELETE    FMSWBCA1,KEY13                                              
          RETURN
.
