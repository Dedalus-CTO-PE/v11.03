.
. DEBFDTIO    
. --------
. Filename     : debfdtaf.dat
.
RSDBFD1   RESET     KEY24                                                       
          READ      DEBFDTA1,KEY24;;                                            
          RETURN
.
RADBFD1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFDTA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBFD1   RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFDTA1,KEY24;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:     
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBFD1                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBFDTA1;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:           
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBFD1                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBFDTA1;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:           
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBFD1                                                                         
          UPDATE    DEBFDTA1;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:           
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          RETURN
.
WRDBFD1   RESET     KEY24                                                       
          WRITE     DEBFDTA1,KEY24;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:     
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          RETURN
.
DEDBFD1   RESET     KEY24                                                       
          DELETE    DEBFDTA1,KEY24                                              
          RETURN
.
RSDBFD2   RESET     KEY52                                                       
          READ      DEBFDTA2,KEY52;;                                            
          RETURN
.
RADBFD2   RESET     KEY52                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFDTA2,KEY52;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBFD2   RESET     KEY52                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFDTA2,KEY52;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:     
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBFD2                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBFDTA2;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:           
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBFD2                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBFDTA2;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:           
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBFD2                                                                         
          UPDATE    DEBFDTA2;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:           
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          RETURN
.
WRDBFD2   RESET     KEY52                                                       
          WRITE     DEBFDTA2,KEY52;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:     
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          RETURN
.
DEDBFD2   RESET     KEY52                                                       
          DELETE    DEBFDTA2,KEY52                                              
          RETURN
.
RSDBFD3   RESET     KEY44                                                       
          READ      DEBFDTA3,KEY44;;                                            
          RETURN
.
RADBFD3   RESET     KEY44                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFDTA3,KEY44;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBFD3   RESET     KEY44                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFDTA3,KEY44;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:     
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBFD3                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBFDTA3;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:           
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBFD3                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBFDTA3;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:           
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBFD3                                                                         
          UPDATE    DEBFDTA3;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:           
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          RETURN
.
WRDBFD3   RESET     KEY44                                                       
          WRITE     DEBFDTA3,KEY44;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:     
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          RETURN
.
DEDBFD3   RESET     KEY44                                                       
          DELETE    DEBFDTA3,KEY44                                              
          RETURN
.
RSDBFD4   RESET     KEY40                                                       
          READ      DEBFDTA4,KEY40;;                                            
          RETURN
.
RADBFD4   RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFDTA4,KEY40;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBFD4   RESET     KEY40                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFDTA4,KEY40;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:     
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBFD4                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBFDTA4;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:           
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBFD4                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBFDTA4;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:           
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBFD4                                                                         
          UPDATE    DEBFDTA4;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:           
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          RETURN
.
WRDBFD4   RESET     KEY40                                                       
          WRITE     DEBFDTA4,KEY40;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:     
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          RETURN
.
DEDBFD4   RESET     KEY40                                                       
          DELETE    DEBFDTA4,KEY40                                              
          RETURN
.
RSDBFD5   RESET     KEY25                                                       
          READ      DEBFDTA5,KEY25;;                                            
          RETURN
.
RADBFD5   RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFDTA5,KEY25;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBFD5   RESET     KEY25                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFDTA5,KEY25;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:     
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBFD5                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBFDTA5;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:           
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBFD5                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBFDTA5;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:           
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBFD5                                                                         
          UPDATE    DEBFDTA5;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:           
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          RETURN
.
WRDBFD5   RESET     KEY25                                                       
          WRITE     DEBFDTA5,KEY25;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:     
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          RETURN
.
DEDBFD5   RESET     KEY25                                                       
          DELETE    DEBFDTA5,KEY25                                              
          RETURN
.
RSDBFD6   RESET     KEY36                                                       
          READ      DEBFDTA6,KEY36;;                                            
          RETURN
.
RADBFD6   RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFDTA6,KEY36;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBFD6   RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFDTA6,KEY36;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:     
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBFD6                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBFDTA6;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:           
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBFD6                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBFDTA6;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:           
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBFD6                                                                         
          UPDATE    DEBFDTA6;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:           
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          RETURN
.
WRDBFD6   RESET     KEY36                                                       
          WRITE     DEBFDTA6,KEY36;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:     
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          RETURN
.
DEDBFD6   RESET     KEY36                                                       
          DELETE    DEBFDTA6,KEY36                                              
          RETURN
.
RSDBFD7   RESET     KEY39                                                       
          READ      DEBFDTA7,KEY39;;                                            
          RETURN
.
RADBFD7   RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFDTA7,KEY39;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBFD7   RESET     KEY39                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFDTA7,KEY39;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:     
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBFD7                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBFDTA7;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:           
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBFD7                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBFDTA7;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:           
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBFD7                                                                         
          UPDATE    DEBFDTA7;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:           
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          RETURN
.
WRDBFD7   RESET     KEY39                                                       
          WRITE     DEBFDTA7,KEY39;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:     
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          RETURN
.
DEDBFD7   RESET     KEY39                                                       
          DELETE    DEBFDTA7,KEY39                                              
          RETURN
.
RSDBFD8   RESET     KEY36                                                       
          READ      DEBFDTA8,KEY36;;                                            
          RETURN
.
RADBFD8   RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFDTA8,KEY36;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDBFD8   RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      DEBFDTA8,KEY36;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:     
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDBFD8                                                                         
          MOVE      ZERO,OVRCD
          READKS    DEBFDTA8;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:           
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDBFD8                                                                         
          MOVE      ZERO,OVRCD
          READKP    DEBFDTA8;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:           
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDBFD8                                                                         
          UPDATE    DEBFDTA8;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:           
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          RETURN
.
WRDBFD8   RESET     KEY36                                                       
          WRITE     DEBFDTA8,KEY36;DBFDDEB,DBFDDTY,DBFDDOC,DBFDDLN,DBFDINV:     
                        DBFDILN,DBFDIDAT,DBFDPDAT,DBFDGLS,DBFDLED,DBFDIAC:      
                        DBFDCAC,DBFDTAC,DBFDTCA,DBFDBCHG,DBFDBDAT,DBFDBTIM:     
                        DBFDBUSR,DBFDITM,DBFDSDAT,DBFDDREF,DBFDOREF,DBFDQTY:    
                        DBFDPRI,DBFDTOT,DBFDTRT,DBFDTAX,DBFDPAID,DBFDUR1:       
                        DBFDUR2,DBFDUD1,DBFDUD2,DBFDUY1,DBFDUY2,DBFDUC1:        
                        DBFDUC2,DBFDUC3,DBFDUC4,DBFDGST,DBFDSPA                 
          RETURN
.
DEDBFD8   RESET     KEY36                                                       
          DELETE    DEBFDTA8,KEY36                                              
          RETURN
.
