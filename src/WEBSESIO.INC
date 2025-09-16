.
. WEBSESIO    
. --------
. Filename     : websesaf.dat
.
RSWBSES1  RESET     KEY37                                                       
          READ      WEBSESA1,KEY37;;                                            
          RETURN
.
RAWBSES1  RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSESA1,KEY37;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBSES1  RESET     KEY37                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSESA1,KEY37;WBSSARID,WBSSRPTC,WBSSSCOD,WBSSSRVC,WBSSSCTC:
                                   WBSSSVID,WBSSCAMT,WBSSSDTE,WBSSFBAM,WBSSITEM:
                                   WBSSMBAM,WBSSMEXC,WBSSSFAC,WBSSSFEE,WBSSTRID:
                                   WBSSMSID,WBSSSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBSES1  MOVE      ZERO,OVRCD                                                  
          READKS    WEBSESA1;WBSSARID,WBSSRPTC,WBSSSCOD,WBSSSRVC,WBSSSCTC:      
                             WBSSSVID,WBSSCAMT,WBSSSDTE,WBSSFBAM,WBSSITEM:      
                             WBSSMBAM,WBSSMEXC,WBSSSFAC,WBSSSFEE,WBSSTRID:      
                             WBSSMSID,WBSSSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBSES1  MOVE      ZERO,OVRCD                                                  
          READKP    WEBSESA1;WBSSARID,WBSSRPTC,WBSSSCOD,WBSSSRVC,WBSSSCTC:      
                             WBSSSVID,WBSSCAMT,WBSSSDTE,WBSSFBAM,WBSSITEM:      
                             WBSSMBAM,WBSSMEXC,WBSSSFAC,WBSSSFEE,WBSSTRID:      
                             WBSSMSID,WBSSSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBSES1  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBSESA1;WBSSARID,WBSSRPTC,WBSSSCOD,WBSSSRVC,WBSSSCTC:      
                             WBSSSVID,WBSSCAMT,WBSSSDTE,WBSSFBAM,WBSSITEM:      
                             WBSSMBAM,WBSSMEXC,WBSSSFAC,WBSSSFEE,WBSSTRID:      
                             WBSSMSID,WBSSSPAR                                  
          RETURN
.
WRWBSES1  RESET     KEY37                                                       
          WRITE     WEBSESA1,KEY37;WBSSARID,WBSSRPTC,WBSSSCOD,WBSSSRVC,WBSSSCTC:
                                   WBSSSVID,WBSSCAMT,WBSSSDTE,WBSSFBAM,WBSSITEM:
                                   WBSSMBAM,WBSSMEXC,WBSSSFAC,WBSSSFEE,WBSSTRID:
                                   WBSSMSID,WBSSSPAR                            
          RETURN
.
DEWBSES1  RESET     KEY37                                                       
          DELETE    WEBSESA1,KEY37                                              
          RETURN
.
RSWBSES2  RESET     KEY61                                                       
          READ      WEBSESA2,KEY61;;                                            
          RETURN
.
RAWBSES2  RESET     KEY61                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSESA2,KEY61;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBSES2  RESET     KEY61                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSESA2,KEY61;WBSSARID,WBSSRPTC,WBSSSCOD,WBSSSRVC,WBSSSCTC:
                                   WBSSSVID,WBSSCAMT,WBSSSDTE,WBSSFBAM,WBSSITEM:
                                   WBSSMBAM,WBSSMEXC,WBSSSFAC,WBSSSFEE,WBSSTRID:
                                   WBSSMSID,WBSSSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBSES2  MOVE      ZERO,OVRCD                                                  
          READKS    WEBSESA2;WBSSARID,WBSSRPTC,WBSSSCOD,WBSSSRVC,WBSSSCTC:      
                             WBSSSVID,WBSSCAMT,WBSSSDTE,WBSSFBAM,WBSSITEM:      
                             WBSSMBAM,WBSSMEXC,WBSSSFAC,WBSSSFEE,WBSSTRID:      
                             WBSSMSID,WBSSSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBSES2  MOVE      ZERO,OVRCD                                                  
          READKP    WEBSESA2;WBSSARID,WBSSRPTC,WBSSSCOD,WBSSSRVC,WBSSSCTC:      
                             WBSSSVID,WBSSCAMT,WBSSSDTE,WBSSFBAM,WBSSITEM:      
                             WBSSMBAM,WBSSMEXC,WBSSSFAC,WBSSSFEE,WBSSTRID:      
                             WBSSMSID,WBSSSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBSES2  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBSESA2;WBSSARID,WBSSRPTC,WBSSSCOD,WBSSSRVC,WBSSSCTC:      
                             WBSSSVID,WBSSCAMT,WBSSSDTE,WBSSFBAM,WBSSITEM:      
                             WBSSMBAM,WBSSMEXC,WBSSSFAC,WBSSSFEE,WBSSTRID:      
                             WBSSMSID,WBSSSPAR                                  
          RETURN
.
WRWBSES2  RESET     KEY61                                                       
          WRITE     WEBSESA2,KEY61;WBSSARID,WBSSRPTC,WBSSSCOD,WBSSSRVC,WBSSSCTC:
                                   WBSSSVID,WBSSCAMT,WBSSSDTE,WBSSFBAM,WBSSITEM:
                                   WBSSMBAM,WBSSMEXC,WBSSSFAC,WBSSSFEE,WBSSTRID:
                                   WBSSMSID,WBSSSPAR                            
          RETURN
.
DEWBSES2  RESET     KEY61                                                       
          DELETE    WEBSESA2,KEY61                                              
          RETURN
.
RSWBSES3  RESET     KEY73                                                       
          READ      WEBSESA3,KEY73;;                                            
          RETURN
.
RAWBSES3  RESET     KEY73                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSESA3,KEY73;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDWBSES3  RESET     KEY73                                                       
          MOVE      ZERO,OVRCD
          READ      WEBSESA3,KEY73;WBSSARID,WBSSRPTC,WBSSSCOD,WBSSSRVC,WBSSSCTC:
                                   WBSSSVID,WBSSCAMT,WBSSSDTE,WBSSFBAM,WBSSITEM:
                                   WBSSMBAM,WBSSMEXC,WBSSSFAC,WBSSSFEE,WBSSTRID:
                                   WBSSMSID,WBSSSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKWBSES3  MOVE      ZERO,OVRCD                                                  
          READKS    WEBSESA3;WBSSARID,WBSSRPTC,WBSSSCOD,WBSSSRVC,WBSSSCTC:      
                             WBSSSVID,WBSSCAMT,WBSSSDTE,WBSSFBAM,WBSSITEM:      
                             WBSSMBAM,WBSSMEXC,WBSSSFAC,WBSSSFEE,WBSSTRID:      
                             WBSSMSID,WBSSSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPWBSES3  MOVE      ZERO,OVRCD                                                  
          READKP    WEBSESA3;WBSSARID,WBSSRPTC,WBSSSCOD,WBSSSRVC,WBSSSCTC:      
                             WBSSSVID,WBSSCAMT,WBSSSDTE,WBSSFBAM,WBSSITEM:      
                             WBSSMBAM,WBSSMEXC,WBSSSFAC,WBSSSFEE,WBSSTRID:      
                             WBSSMSID,WBSSSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPWBSES3  MOVE      ZERO,OVRCD                                                  
          UPDATE    WEBSESA3;WBSSARID,WBSSRPTC,WBSSSCOD,WBSSSRVC,WBSSSCTC:      
                             WBSSSVID,WBSSCAMT,WBSSSDTE,WBSSFBAM,WBSSITEM:      
                             WBSSMBAM,WBSSMEXC,WBSSSFAC,WBSSSFEE,WBSSTRID:      
                             WBSSMSID,WBSSSPAR                                  
          RETURN
.
WRWBSES3  RESET     KEY73                                                       
          WRITE     WEBSESA3,KEY73;WBSSARID,WBSSRPTC,WBSSSCOD,WBSSSRVC,WBSSSCTC:
                                   WBSSSVID,WBSSCAMT,WBSSSDTE,WBSSFBAM,WBSSITEM:
                                   WBSSMBAM,WBSSMEXC,WBSSSFAC,WBSSSFEE,WBSSTRID:
                                   WBSSMSID,WBSSSPAR                            
          RETURN
.
DEWBSES3  RESET     KEY73                                                       
          DELETE    WEBSESA3,KEY73                                              
          RETURN
.
