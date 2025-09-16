.
. HL7FAEIO    
. --------
. Filename     : hl7faeaf.dat
.
RSHLFAE1  RESET     KEY78                                                       
          READ      HL7FAEA1,KEY78;;                                            
          RETURN
.
RAHLFAE1  RESET     KEY78                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FAEA1,KEY78;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLFAE1  RESET     KEY78                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FAEA1,KEY78;HLAERSID,HLAEVRID,HLAECNT1,HLAEEARE,HLAEEATY:
                                   HLAEEADI,HLAEEIUS,HLAEEISY,HLAEEIVA,HLAEEITX:
                                   HLAEECSY,HLAEECVE,HLAEECCO,HLAEECDI,HLAEECUS:
                                   HLAEEPST,HLAEEREN,HLAESPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLFAE1  MOVE      ZERO,OVRCD                                                  
          READKS    HL7FAEA1;HLAERSID,HLAEVRID,HLAECNT1,HLAEEARE,HLAEEATY:      
                             HLAEEADI,HLAEEIUS,HLAEEISY,HLAEEIVA,HLAEEITX:      
                             HLAEECSY,HLAEECVE,HLAEECCO,HLAEECDI,HLAEECUS:      
                             HLAEEPST,HLAEEREN,HLAESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLFAE1  MOVE      ZERO,OVRCD                                                  
          READKP    HL7FAEA1;HLAERSID,HLAEVRID,HLAECNT1,HLAEEARE,HLAEEATY:      
                             HLAEEADI,HLAEEIUS,HLAEEISY,HLAEEIVA,HLAEEITX:      
                             HLAEECSY,HLAEECVE,HLAEECCO,HLAEECDI,HLAEECUS:      
                             HLAEEPST,HLAEEREN,HLAESPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLFAE1  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FAEA1;HLAERSID,HLAEVRID,HLAECNT1,HLAEEARE,HLAEEATY:      
                             HLAEEADI,HLAEEIUS,HLAEEISY,HLAEEIVA,HLAEEITX:      
                             HLAEECSY,HLAEECVE,HLAEECCO,HLAEECDI,HLAEECUS:      
                             HLAEEPST,HLAEEREN,HLAESPAR                         
          RETURN
.
WRHLFAE1  RESET     KEY78                                                       
          WRITE     HL7FAEA1,KEY78;HLAERSID,HLAEVRID,HLAECNT1,HLAEEARE,HLAEEATY:
                                   HLAEEADI,HLAEEIUS,HLAEEISY,HLAEEIVA,HLAEEITX:
                                   HLAEECSY,HLAEECVE,HLAEECCO,HLAEECDI,HLAEECUS:
                                   HLAEEPST,HLAEEREN,HLAESPAR                   
          RETURN
.
DEHLFAE1  RESET     KEY78                                                       
          DELETE    HL7FAEA1,KEY78                                              
          RETURN
.
