.
. HL7P6BIO    
. --------
. Filename     : hl7p6baf.dat
.
RSHLP6B1  RESET     KEY82                                                       
          READ      HL7P6BA1,KEY82;;                                            
          RETURN
.
RAHLP6B1  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      HL7P6BA1,KEY82;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLP6B1  RESET     KEY82                                                       
          MOVE      ZERO,OVRCD
          READ      HL7P6BA1,KEY82;HL6BRSID,HL6BVRID,HL6BCNT1,HL6BCNT2,HL6BCGEN:
                                   HL6BOREF,HL6BOTYP,HL6BODSP,HL6BOIUS,HL6BOISY:
                                   HL6BOIVA,HL6BOITT,HL6BOITS,HL6BOITV,HL6BOITC:
                                   HL6BOITD,HL6BOITU,HL6BOIST,HL6BOIEN,HL6BCSTR:
                                   HL6BCEND,HL6BSPAR                            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLP6B1  MOVE      ZERO,OVRCD                                                  
          READKS    HL7P6BA1;HL6BRSID,HL6BVRID,HL6BCNT1,HL6BCNT2,HL6BCGEN:      
                             HL6BOREF,HL6BOTYP,HL6BODSP,HL6BOIUS,HL6BOISY:      
                             HL6BOIVA,HL6BOITT,HL6BOITS,HL6BOITV,HL6BOITC:      
                             HL6BOITD,HL6BOITU,HL6BOIST,HL6BOIEN,HL6BCSTR:      
                             HL6BCEND,HL6BSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLP6B1  MOVE      ZERO,OVRCD                                                  
          READKP    HL7P6BA1;HL6BRSID,HL6BVRID,HL6BCNT1,HL6BCNT2,HL6BCGEN:      
                             HL6BOREF,HL6BOTYP,HL6BODSP,HL6BOIUS,HL6BOISY:      
                             HL6BOIVA,HL6BOITT,HL6BOITS,HL6BOITV,HL6BOITC:      
                             HL6BOITD,HL6BOITU,HL6BOIST,HL6BOIEN,HL6BCSTR:      
                             HL6BCEND,HL6BSPAR                                  
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLP6B1  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7P6BA1;HL6BRSID,HL6BVRID,HL6BCNT1,HL6BCNT2,HL6BCGEN:      
                             HL6BOREF,HL6BOTYP,HL6BODSP,HL6BOIUS,HL6BOISY:      
                             HL6BOIVA,HL6BOITT,HL6BOITS,HL6BOITV,HL6BOITC:      
                             HL6BOITD,HL6BOITU,HL6BOIST,HL6BOIEN,HL6BCSTR:      
                             HL6BCEND,HL6BSPAR                                  
          RETURN
.
WRHLP6B1  RESET     KEY82                                                       
          WRITE     HL7P6BA1,KEY82;HL6BRSID,HL6BVRID,HL6BCNT1,HL6BCNT2,HL6BCGEN:
                                   HL6BOREF,HL6BOTYP,HL6BODSP,HL6BOIUS,HL6BOISY:
                                   HL6BOIVA,HL6BOITT,HL6BOITS,HL6BOITV,HL6BOITC:
                                   HL6BOITD,HL6BOITU,HL6BOIST,HL6BOIEN,HL6BCSTR:
                                   HL6BCEND,HL6BSPAR                            
          RETURN
.
DEHLP6B1  RESET     KEY82                                                       
          DELETE    HL7P6BA1,KEY82                                              
          RETURN
.
