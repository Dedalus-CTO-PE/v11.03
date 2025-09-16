.
. WEBERCIO    
. --------
. Filename     : webercaf.dat
.
RSWBERC1  RESET     KEY29                                                       
          READ      WEBERCA1,KEY29;;                                            
          RETURN
.
RAWBERC1  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      WEBERCA1,KEY29;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBERC1  RESET     KEY29                                                       
          MOVE      ZERO,OVRCD
          READ      WEBERCA1,KEY29;WBECARID,WBECRPTC,WBECTYPE,WBECLINE,WBECDATA:
                                   WBECUDAT,WBECUTIM,WBECTRID,WBECMSID,WBECSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBERC1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBERCA1;WBECARID,WBECRPTC,WBECTYPE,WBECLINE,WBECDATA:      
                             WBECUDAT,WBECUTIM,WBECTRID,WBECMSID,WBECSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBERC1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBERCA1;WBECARID,WBECRPTC,WBECTYPE,WBECLINE,WBECDATA:      
                             WBECUDAT,WBECUTIM,WBECTRID,WBECMSID,WBECSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBERC1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBERCA1;WBECARID,WBECRPTC,WBECTYPE,WBECLINE,WBECDATA:      
                             WBECUDAT,WBECUTIM,WBECTRID,WBECMSID,WBECSPAR       
          RETURN
.
WRWBERC1  RESET     KEY29                                                       
          WRITE     WEBERCA1,KEY29;WBECARID,WBECRPTC,WBECTYPE,WBECLINE,WBECDATA:
                                   WBECUDAT,WBECUTIM,WBECTRID,WBECMSID,WBECSPAR 
          RETURN
.
DEWBERC1  RESET     KEY29                                                       
          DELETE    WEBERCA1,KEY29                                              
          RETURN
.
RSWBERC2  RESET     KEY53                                                       
          READ      WEBERCA2,KEY53;;                                            
          RETURN
.
RAWBERC2  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      WEBERCA2,KEY53;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBERC2  RESET     KEY53                                                       
          MOVE      ZERO,OVRCD
          READ      WEBERCA2,KEY53;WBECARID,WBECRPTC,WBECTYPE,WBECLINE,WBECDATA:
                                   WBECUDAT,WBECUTIM,WBECTRID,WBECMSID,WBECSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBERC2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBERCA2;WBECARID,WBECRPTC,WBECTYPE,WBECLINE,WBECDATA:      
                             WBECUDAT,WBECUTIM,WBECTRID,WBECMSID,WBECSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBERC2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBERCA2;WBECARID,WBECRPTC,WBECTYPE,WBECLINE,WBECDATA:      
                             WBECUDAT,WBECUTIM,WBECTRID,WBECMSID,WBECSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBERC2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBERCA2;WBECARID,WBECRPTC,WBECTYPE,WBECLINE,WBECDATA:      
                             WBECUDAT,WBECUTIM,WBECTRID,WBECMSID,WBECSPAR       
          RETURN
.
WRWBERC2  RESET     KEY53                                                       
          WRITE     WEBERCA2,KEY53;WBECARID,WBECRPTC,WBECTYPE,WBECLINE,WBECDATA:
                                   WBECUDAT,WBECUTIM,WBECTRID,WBECMSID,WBECSPAR 
          RETURN
.
DEWBERC2  RESET     KEY53                                                       
          DELETE    WEBERCA2,KEY53                                              
          RETURN
.
RSWBERC3  RESET     KEY65                                                       
          READ      WEBERCA3,KEY65;;                                            
          RETURN
.
RAWBERC3  RESET     KEY65                                                       
          MOVE      ZERO,OVRCD
          READ      WEBERCA3,KEY65;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBERC3  RESET     KEY65                                                       
          MOVE      ZERO,OVRCD
          READ      WEBERCA3,KEY65;WBECARID,WBECRPTC,WBECTYPE,WBECLINE,WBECDATA:
                                   WBECUDAT,WBECUTIM,WBECTRID,WBECMSID,WBECSPAR 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBERC3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBERCA3;WBECARID,WBECRPTC,WBECTYPE,WBECLINE,WBECDATA:      
                             WBECUDAT,WBECUTIM,WBECTRID,WBECMSID,WBECSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBERC3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBERCA3;WBECARID,WBECRPTC,WBECTYPE,WBECLINE,WBECDATA:      
                             WBECUDAT,WBECUTIM,WBECTRID,WBECMSID,WBECSPAR       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBERC3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBERCA3;WBECARID,WBECRPTC,WBECTYPE,WBECLINE,WBECDATA:      
                             WBECUDAT,WBECUTIM,WBECTRID,WBECMSID,WBECSPAR       
          RETURN
.
WRWBERC3  RESET     KEY65                                                       
          WRITE     WEBERCA3,KEY65;WBECARID,WBECRPTC,WBECTYPE,WBECLINE,WBECDATA:
                                   WBECUDAT,WBECUTIM,WBECTRID,WBECMSID,WBECSPAR 
          RETURN
.
DEWBERC3  RESET     KEY65                                                       
          DELETE    WEBERCA3,KEY65                                              
          RETURN
.
