.
. HL7FAIIO    
. --------
. Filename     : hl7faiaf.dat
.
RSHLFAI1  RESET     KEY78                                                       
          READ      HL7FAIA1,KEY78;;                                            
          RETURN
.
RAHLFAI1  RESET     KEY78                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FAIA1,KEY78;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLFAI1  RESET     KEY78                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FAIA1,KEY78;HLAIRSID,HLAIVRID,HLAICNT1,HLAIAARE,HLAIAATY:
                                   HLAIAADI,HLAIAAUS,HLAIAISY,HLAIAIVA,HLAIAITX:
                                   HLAIACSY,HLAIACVE,HLAIACCO,HLAIACDI,HLAIACUS:
                                   HLAIAAST,HLAIAAEN,HLAISPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLFAI1  MOVE      ZERO,OVRCD                                                  
          READKS    HL7FAIA1;HLAIRSID,HLAIVRID,HLAICNT1,HLAIAARE,HLAIAATY:      
                             HLAIAADI,HLAIAAUS,HLAIAISY,HLAIAIVA,HLAIAITX:      
                             HLAIACSY,HLAIACVE,HLAIACCO,HLAIACDI,HLAIACUS:      
                             HLAIAAST,HLAIAAEN,HLAISPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLFAI1  MOVE      ZERO,OVRCD                                                  
          READKP    HL7FAIA1;HLAIRSID,HLAIVRID,HLAICNT1,HLAIAARE,HLAIAATY:      
                             HLAIAADI,HLAIAAUS,HLAIAISY,HLAIAIVA,HLAIAITX:      
                             HLAIACSY,HLAIACVE,HLAIACCO,HLAIACDI,HLAIACUS:      
                             HLAIAAST,HLAIAAEN,HLAISPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLFAI1  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FAIA1;HLAIRSID,HLAIVRID,HLAICNT1,HLAIAARE,HLAIAATY:      
                             HLAIAADI,HLAIAAUS,HLAIAISY,HLAIAIVA,HLAIAITX:      
                             HLAIACSY,HLAIACVE,HLAIACCO,HLAIACDI,HLAIACUS:      
                             HLAIAAST,HLAIAAEN,HLAISPAR                         
          RETURN
.
WRHLFAI1  RESET     KEY78                                                       
          WRITE     HL7FAIA1,KEY78;HLAIRSID,HLAIVRID,HLAICNT1,HLAIAARE,HLAIAATY:
                                   HLAIAADI,HLAIAAUS,HLAIAISY,HLAIAIVA,HLAIAITX:
                                   HLAIACSY,HLAIACVE,HLAIACCO,HLAIACDI,HLAIACUS:
                                   HLAIAAST,HLAIAAEN,HLAISPAR                   
          RETURN
.
DEHLFAI1  RESET     KEY78                                                       
          DELETE    HL7FAIA1,KEY78                                              
          RETURN
.
