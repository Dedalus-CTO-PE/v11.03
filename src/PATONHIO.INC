.
. PATONHIO    
. --------
. Filename     : patonhaf.dat
.
RSPTONH1  RESET     KEY24                                                       
          READ      PATONHA1,KEY24;;                                            
          RETURN
.
RAPTONH1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATONHA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTONH1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PATONHA1,KEY24;PTONVISN,PTONVAVL,PTONTDAT,PTONTTIM,PTONURID:
                                   PTONREAH,PTONDESC,PTONHACT,PTONCLCD,PTONHLFU:
                                   PTONHLIN,PTONSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTONH1  MOVE      ZERO,OVRCD                                                  
          READKS    PATONHA1;PTONVISN,PTONVAVL,PTONTDAT,PTONTTIM,PTONURID:      
                             PTONREAH,PTONDESC,PTONHACT,PTONCLCD,PTONHLFU:      
                             PTONHLIN,PTONSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTONH1  MOVE      ZERO,OVRCD                                                  
          READKP    PATONHA1;PTONVISN,PTONVAVL,PTONTDAT,PTONTTIM,PTONURID:      
                             PTONREAH,PTONDESC,PTONHACT,PTONCLCD,PTONHLFU:      
                             PTONHLIN,PTONSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTONH1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PATONHA1;PTONVISN,PTONVAVL,PTONTDAT,PTONTTIM,PTONURID:      
                             PTONREAH,PTONDESC,PTONHACT,PTONCLCD,PTONHLFU:      
                             PTONHLIN,PTONSPAR                                  
          RETURN
.
WRPTONH1  RESET     KEY24                                                       
          WRITE     PATONHA1,KEY24;PTONVISN,PTONVAVL,PTONTDAT,PTONTTIM,PTONURID:
                                   PTONREAH,PTONDESC,PTONHACT,PTONCLCD,PTONHLFU:
                                   PTONHLIN,PTONSPAR                            
          RETURN
.
DEPTONH1  RESET     KEY24                                                       
          DELETE    PATONHA1,KEY24                                              
          RETURN
.
