.
. PATBRDIO    
. --------
. Filename     : patbrdaf.dat
.
RSPTBRD1  RESET     KEY10                                                       
          READ      PATBRDA1,KEY10;;                                            
          RETURN
.
RAPTBRD1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PATBRDA1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTBRD1  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      PATBRDA1,KEY10;PTBRBRDN,PTBRURNO,PTBRVISN,PTBRCNTR,PTBRLURN:
                        PTBRTITL,PTBRSNAM,PTBRGNAM,PTBRGEND,PTBRBDAT,PTBRADR1:  
                        PTBRADR2,PTBRADR3,PTBRADR4,PTBRPOST,PTBRHPHN,PTBRWPHN:  
                        PTBRMPHN,PTBREMAL,PTBRHOSP,PTBRSDAT,PTBRSTIM,PTBREDAT:  
                        PTBRETIM,PTBRCUSR,PTBRCDAT,PTBRCTIM,PTBRUUSR,PTBRUDAT:  
                        PTBRUTIM,PTBRSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTBRD1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATBRDA1;PTBRBRDN,PTBRURNO,PTBRVISN,PTBRCNTR,PTBRLURN:      
                        PTBRTITL,PTBRSNAM,PTBRGNAM,PTBRGEND,PTBRBDAT,PTBRADR1:  
                        PTBRADR2,PTBRADR3,PTBRADR4,PTBRPOST,PTBRHPHN,PTBRWPHN:  
                        PTBRMPHN,PTBREMAL,PTBRHOSP,PTBRSDAT,PTBRSTIM,PTBREDAT:  
                        PTBRETIM,PTBRCUSR,PTBRCDAT,PTBRCTIM,PTBRUUSR,PTBRUDAT:  
                        PTBRUTIM,PTBRSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTBRD1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATBRDA1;PTBRBRDN,PTBRURNO,PTBRVISN,PTBRCNTR,PTBRLURN:      
                        PTBRTITL,PTBRSNAM,PTBRGNAM,PTBRGEND,PTBRBDAT,PTBRADR1:  
                        PTBRADR2,PTBRADR3,PTBRADR4,PTBRPOST,PTBRHPHN,PTBRWPHN:  
                        PTBRMPHN,PTBREMAL,PTBRHOSP,PTBRSDAT,PTBRSTIM,PTBREDAT:  
                        PTBRETIM,PTBRCUSR,PTBRCDAT,PTBRCTIM,PTBRUUSR,PTBRUDAT:  
                        PTBRUTIM,PTBRSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTBRD1                                                                        
          UPDATE    PATBRDA1;PTBRBRDN,PTBRURNO,PTBRVISN,PTBRCNTR,PTBRLURN:      
                        PTBRTITL,PTBRSNAM,PTBRGNAM,PTBRGEND,PTBRBDAT,PTBRADR1:  
                        PTBRADR2,PTBRADR3,PTBRADR4,PTBRPOST,PTBRHPHN,PTBRWPHN:  
                        PTBRMPHN,PTBREMAL,PTBRHOSP,PTBRSDAT,PTBRSTIM,PTBREDAT:  
                        PTBRETIM,PTBRCUSR,PTBRCDAT,PTBRCTIM,PTBRUUSR,PTBRUDAT:  
                        PTBRUTIM,PTBRSPAR                                       
          RETURN
.
WRPTBRD1  RESET     KEY10                                                       
          WRITE     PATBRDA1,KEY10;PTBRBRDN,PTBRURNO,PTBRVISN,PTBRCNTR,PTBRLURN:
                        PTBRTITL,PTBRSNAM,PTBRGNAM,PTBRGEND,PTBRBDAT,PTBRADR1:  
                        PTBRADR2,PTBRADR3,PTBRADR4,PTBRPOST,PTBRHPHN,PTBRWPHN:  
                        PTBRMPHN,PTBREMAL,PTBRHOSP,PTBRSDAT,PTBRSTIM,PTBREDAT:  
                        PTBRETIM,PTBRCUSR,PTBRCDAT,PTBRCTIM,PTBRUUSR,PTBRUDAT:  
                        PTBRUTIM,PTBRSPAR                                       
          RETURN
.
DEPTBRD1  RESET     KEY10                                                       
          DELETE    PATBRDA1,KEY10                                              
          RETURN
.
RSPTBRD2  RESET     KEY18                                                       
          READ      PATBRDA2,KEY18;;                                            
          RETURN
.
RAPTBRD2  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PATBRDA2,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTBRD2  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      PATBRDA2,KEY18;PTBRBRDN,PTBRURNO,PTBRVISN,PTBRCNTR,PTBRLURN:
                        PTBRTITL,PTBRSNAM,PTBRGNAM,PTBRGEND,PTBRBDAT,PTBRADR1:  
                        PTBRADR2,PTBRADR3,PTBRADR4,PTBRPOST,PTBRHPHN,PTBRWPHN:  
                        PTBRMPHN,PTBREMAL,PTBRHOSP,PTBRSDAT,PTBRSTIM,PTBREDAT:  
                        PTBRETIM,PTBRCUSR,PTBRCDAT,PTBRCTIM,PTBRUUSR,PTBRUDAT:  
                        PTBRUTIM,PTBRSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTBRD2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATBRDA2;PTBRBRDN,PTBRURNO,PTBRVISN,PTBRCNTR,PTBRLURN:      
                        PTBRTITL,PTBRSNAM,PTBRGNAM,PTBRGEND,PTBRBDAT,PTBRADR1:  
                        PTBRADR2,PTBRADR3,PTBRADR4,PTBRPOST,PTBRHPHN,PTBRWPHN:  
                        PTBRMPHN,PTBREMAL,PTBRHOSP,PTBRSDAT,PTBRSTIM,PTBREDAT:  
                        PTBRETIM,PTBRCUSR,PTBRCDAT,PTBRCTIM,PTBRUUSR,PTBRUDAT:  
                        PTBRUTIM,PTBRSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTBRD2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATBRDA2;PTBRBRDN,PTBRURNO,PTBRVISN,PTBRCNTR,PTBRLURN:      
                        PTBRTITL,PTBRSNAM,PTBRGNAM,PTBRGEND,PTBRBDAT,PTBRADR1:  
                        PTBRADR2,PTBRADR3,PTBRADR4,PTBRPOST,PTBRHPHN,PTBRWPHN:  
                        PTBRMPHN,PTBREMAL,PTBRHOSP,PTBRSDAT,PTBRSTIM,PTBREDAT:  
                        PTBRETIM,PTBRCUSR,PTBRCDAT,PTBRCTIM,PTBRUUSR,PTBRUDAT:  
                        PTBRUTIM,PTBRSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTBRD2                                                                        
          UPDATE    PATBRDA2;PTBRBRDN,PTBRURNO,PTBRVISN,PTBRCNTR,PTBRLURN:      
                        PTBRTITL,PTBRSNAM,PTBRGNAM,PTBRGEND,PTBRBDAT,PTBRADR1:  
                        PTBRADR2,PTBRADR3,PTBRADR4,PTBRPOST,PTBRHPHN,PTBRWPHN:  
                        PTBRMPHN,PTBREMAL,PTBRHOSP,PTBRSDAT,PTBRSTIM,PTBREDAT:  
                        PTBRETIM,PTBRCUSR,PTBRCDAT,PTBRCTIM,PTBRUUSR,PTBRUDAT:  
                        PTBRUTIM,PTBRSPAR                                       
          RETURN
.
WRPTBRD2  RESET     KEY18                                                       
          WRITE     PATBRDA2,KEY18;PTBRBRDN,PTBRURNO,PTBRVISN,PTBRCNTR,PTBRLURN:
                        PTBRTITL,PTBRSNAM,PTBRGNAM,PTBRGEND,PTBRBDAT,PTBRADR1:  
                        PTBRADR2,PTBRADR3,PTBRADR4,PTBRPOST,PTBRHPHN,PTBRWPHN:  
                        PTBRMPHN,PTBREMAL,PTBRHOSP,PTBRSDAT,PTBRSTIM,PTBREDAT:  
                        PTBRETIM,PTBRCUSR,PTBRCDAT,PTBRCTIM,PTBRUUSR,PTBRUDAT:  
                        PTBRUTIM,PTBRSPAR                                       
          RETURN
.
DEPTBRD2  RESET     KEY18                                                       
          DELETE    PATBRDA2,KEY18                                              
          RETURN
.
RSPTBRD3  RESET     KEY26                                                       
          READ      PATBRDA3,KEY26;;                                            
          RETURN
.
RAPTBRD3  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PATBRDA3,KEY26;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTBRD3  RESET     KEY26                                                       
          MOVE      ZERO,OVRCD
          READ      PATBRDA3,KEY26;PTBRBRDN,PTBRURNO,PTBRVISN,PTBRCNTR,PTBRLURN:
                        PTBRTITL,PTBRSNAM,PTBRGNAM,PTBRGEND,PTBRBDAT,PTBRADR1:  
                        PTBRADR2,PTBRADR3,PTBRADR4,PTBRPOST,PTBRHPHN,PTBRWPHN:  
                        PTBRMPHN,PTBREMAL,PTBRHOSP,PTBRSDAT,PTBRSTIM,PTBREDAT:  
                        PTBRETIM,PTBRCUSR,PTBRCDAT,PTBRCTIM,PTBRUUSR,PTBRUDAT:  
                        PTBRUTIM,PTBRSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTBRD3                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATBRDA3;PTBRBRDN,PTBRURNO,PTBRVISN,PTBRCNTR,PTBRLURN:      
                        PTBRTITL,PTBRSNAM,PTBRGNAM,PTBRGEND,PTBRBDAT,PTBRADR1:  
                        PTBRADR2,PTBRADR3,PTBRADR4,PTBRPOST,PTBRHPHN,PTBRWPHN:  
                        PTBRMPHN,PTBREMAL,PTBRHOSP,PTBRSDAT,PTBRSTIM,PTBREDAT:  
                        PTBRETIM,PTBRCUSR,PTBRCDAT,PTBRCTIM,PTBRUUSR,PTBRUDAT:  
                        PTBRUTIM,PTBRSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTBRD3                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATBRDA3;PTBRBRDN,PTBRURNO,PTBRVISN,PTBRCNTR,PTBRLURN:      
                        PTBRTITL,PTBRSNAM,PTBRGNAM,PTBRGEND,PTBRBDAT,PTBRADR1:  
                        PTBRADR2,PTBRADR3,PTBRADR4,PTBRPOST,PTBRHPHN,PTBRWPHN:  
                        PTBRMPHN,PTBREMAL,PTBRHOSP,PTBRSDAT,PTBRSTIM,PTBREDAT:  
                        PTBRETIM,PTBRCUSR,PTBRCDAT,PTBRCTIM,PTBRUUSR,PTBRUDAT:  
                        PTBRUTIM,PTBRSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTBRD3                                                                        
          UPDATE    PATBRDA3;PTBRBRDN,PTBRURNO,PTBRVISN,PTBRCNTR,PTBRLURN:      
                        PTBRTITL,PTBRSNAM,PTBRGNAM,PTBRGEND,PTBRBDAT,PTBRADR1:  
                        PTBRADR2,PTBRADR3,PTBRADR4,PTBRPOST,PTBRHPHN,PTBRWPHN:  
                        PTBRMPHN,PTBREMAL,PTBRHOSP,PTBRSDAT,PTBRSTIM,PTBREDAT:  
                        PTBRETIM,PTBRCUSR,PTBRCDAT,PTBRCTIM,PTBRUUSR,PTBRUDAT:  
                        PTBRUTIM,PTBRSPAR                                       
          RETURN
.
WRPTBRD3  RESET     KEY26                                                       
          WRITE     PATBRDA3,KEY26;PTBRBRDN,PTBRURNO,PTBRVISN,PTBRCNTR,PTBRLURN:
                        PTBRTITL,PTBRSNAM,PTBRGNAM,PTBRGEND,PTBRBDAT,PTBRADR1:  
                        PTBRADR2,PTBRADR3,PTBRADR4,PTBRPOST,PTBRHPHN,PTBRWPHN:  
                        PTBRMPHN,PTBREMAL,PTBRHOSP,PTBRSDAT,PTBRSTIM,PTBREDAT:  
                        PTBRETIM,PTBRCUSR,PTBRCDAT,PTBRCTIM,PTBRUUSR,PTBRUDAT:  
                        PTBRUTIM,PTBRSPAR                                       
          RETURN
.
DEPTBRD3  RESET     KEY26                                                       
          DELETE    PATBRDA3,KEY26                                              
          RETURN
.
RSPTBRD4  RESET     KEY13                                                       
          READ      PATBRDA4,KEY13;;                                            
          RETURN
.
RAPTBRD4  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      PATBRDA4,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPTBRD4  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      PATBRDA4,KEY13;PTBRBRDN,PTBRURNO,PTBRVISN,PTBRCNTR,PTBRLURN:
                        PTBRTITL,PTBRSNAM,PTBRGNAM,PTBRGEND,PTBRBDAT,PTBRADR1:  
                        PTBRADR2,PTBRADR3,PTBRADR4,PTBRPOST,PTBRHPHN,PTBRWPHN:  
                        PTBRMPHN,PTBREMAL,PTBRHOSP,PTBRSDAT,PTBRSTIM,PTBREDAT:  
                        PTBRETIM,PTBRCUSR,PTBRCDAT,PTBRCTIM,PTBRUUSR,PTBRUDAT:  
                        PTBRUTIM,PTBRSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPTBRD4                                                                        
          MOVE      ZERO,OVRCD
          READKS    PATBRDA4;PTBRBRDN,PTBRURNO,PTBRVISN,PTBRCNTR,PTBRLURN:      
                        PTBRTITL,PTBRSNAM,PTBRGNAM,PTBRGEND,PTBRBDAT,PTBRADR1:  
                        PTBRADR2,PTBRADR3,PTBRADR4,PTBRPOST,PTBRHPHN,PTBRWPHN:  
                        PTBRMPHN,PTBREMAL,PTBRHOSP,PTBRSDAT,PTBRSTIM,PTBREDAT:  
                        PTBRETIM,PTBRCUSR,PTBRCDAT,PTBRCTIM,PTBRUUSR,PTBRUDAT:  
                        PTBRUTIM,PTBRSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPTBRD4                                                                        
          MOVE      ZERO,OVRCD
          READKP    PATBRDA4;PTBRBRDN,PTBRURNO,PTBRVISN,PTBRCNTR,PTBRLURN:      
                        PTBRTITL,PTBRSNAM,PTBRGNAM,PTBRGEND,PTBRBDAT,PTBRADR1:  
                        PTBRADR2,PTBRADR3,PTBRADR4,PTBRPOST,PTBRHPHN,PTBRWPHN:  
                        PTBRMPHN,PTBREMAL,PTBRHOSP,PTBRSDAT,PTBRSTIM,PTBREDAT:  
                        PTBRETIM,PTBRCUSR,PTBRCDAT,PTBRCTIM,PTBRUUSR,PTBRUDAT:  
                        PTBRUTIM,PTBRSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPTBRD4                                                                        
          UPDATE    PATBRDA4;PTBRBRDN,PTBRURNO,PTBRVISN,PTBRCNTR,PTBRLURN:      
                        PTBRTITL,PTBRSNAM,PTBRGNAM,PTBRGEND,PTBRBDAT,PTBRADR1:  
                        PTBRADR2,PTBRADR3,PTBRADR4,PTBRPOST,PTBRHPHN,PTBRWPHN:  
                        PTBRMPHN,PTBREMAL,PTBRHOSP,PTBRSDAT,PTBRSTIM,PTBREDAT:  
                        PTBRETIM,PTBRCUSR,PTBRCDAT,PTBRCTIM,PTBRUUSR,PTBRUDAT:  
                        PTBRUTIM,PTBRSPAR                                       
          RETURN
.
WRPTBRD4  RESET     KEY13                                                       
          WRITE     PATBRDA4,KEY13;PTBRBRDN,PTBRURNO,PTBRVISN,PTBRCNTR,PTBRLURN:
                        PTBRTITL,PTBRSNAM,PTBRGNAM,PTBRGEND,PTBRBDAT,PTBRADR1:  
                        PTBRADR2,PTBRADR3,PTBRADR4,PTBRPOST,PTBRHPHN,PTBRWPHN:  
                        PTBRMPHN,PTBREMAL,PTBRHOSP,PTBRSDAT,PTBRSTIM,PTBREDAT:  
                        PTBRETIM,PTBRCUSR,PTBRCDAT,PTBRCTIM,PTBRUUSR,PTBRUDAT:  
                        PTBRUTIM,PTBRSPAR                                       
          RETURN
.
DEPTBRD4  RESET     KEY13                                                       
          DELETE    PATBRDA4,KEY13                                              
          RETURN
.
