.
. CCSCEBIO    
. --------
. Filename     : ccscebaf.dat
.
RSCCEB1   RESET     KEY10                                                       
          READ      CCSCEBA1,KEY10;;                                            
          RETURN
.
RACCEB1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCEBA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCEB1   RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      CCSCEBA1,KEY10;CCEBLV1,CCEBNEP,CCEBFTC,CCEBFMN,CCEBFMX:     
                        CCEBFSV,CCEBTTC,CCEBTMN,CCEBTMX,CCEBTSV,CCEBLTO:        
                        CCEBLMN,CCEBLMX,CCEBLSV,CCEBSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCEB1                                                                         
          MOVE      ZERO,OVRCD
          READKS    CCSCEBA1;CCEBLV1,CCEBNEP,CCEBFTC,CCEBFMN,CCEBFMX:           
                        CCEBFSV,CCEBTTC,CCEBTMN,CCEBTMX,CCEBTSV,CCEBLTO:        
                        CCEBLMN,CCEBLMX,CCEBLSV,CCEBSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPCCEB1                                                                         
          MOVE      ZERO,OVRCD
          READKP    CCSCEBA1;CCEBLV1,CCEBNEP,CCEBFTC,CCEBFMN,CCEBFMX:           
                        CCEBFSV,CCEBTTC,CCEBTMN,CCEBTMX,CCEBTSV,CCEBLTO:        
                        CCEBLMN,CCEBLMX,CCEBLSV,CCEBSPA                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCEB1                                                                         
          UPDATE    CCSCEBA1;CCEBLV1,CCEBNEP,CCEBFTC,CCEBFMN,CCEBFMX:           
                        CCEBFSV,CCEBTTC,CCEBTMN,CCEBTMX,CCEBTSV,CCEBLTO:        
                        CCEBLMN,CCEBLMX,CCEBLSV,CCEBSPA                         
          RETURN
.
WRCCEB1   RESET     KEY10                                                       
          WRITE     CCSCEBA1,KEY10;CCEBLV1,CCEBNEP,CCEBFTC,CCEBFMN,CCEBFMX:     
                        CCEBFSV,CCEBTTC,CCEBTMN,CCEBTMX,CCEBTSV,CCEBLTO:        
                        CCEBLMN,CCEBLMX,CCEBLSV,CCEBSPA                         
          RETURN
.
DECCEB1   RESET     KEY10                                                       
          DELETE    CCSCEBA1,KEY10                                              
          RETURN
.
