.
. HL7FAHIO    
. --------
. Filename     : hl7fahaf.dat
.
RSHLFAH1  RESET     KEY78                                                       
          READ      HL7FAHA1,KEY78;;                                            
          RETURN
.
RAHLFAH1  RESET     KEY78                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FAHA1,KEY78;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDHLFAH1  RESET     KEY78                                                       
          MOVE      ZERO,OVRCD
          READ      HL7FAHA1,KEY78;HLAHRSID,HLAHVRID,HLAHCNT1,HLAHAREF,HLAHATYP:
                                   HLAHADIS,HLAHAIDU,HLAHASYS,HLAHAIVL,HLAHAIDS:
                                   HLAHAIDV,HLAHAIDC,HLAHAIDD,HLAHAIUS,HLAHAIDT:
                                   HLAHAIPS,HLAHAIPE,HLAHSPAR                   
          GOTO      OVERCOND IF OVER
          RETURN
.
RKHLFAH1  MOVE      ZERO,OVRCD                                                  
          READKS    HL7FAHA1;HLAHRSID,HLAHVRID,HLAHCNT1,HLAHAREF,HLAHATYP:      
                             HLAHADIS,HLAHAIDU,HLAHASYS,HLAHAIVL,HLAHAIDS:      
                             HLAHAIDV,HLAHAIDC,HLAHAIDD,HLAHAIUS,HLAHAIDT:      
                             HLAHAIPS,HLAHAIPE,HLAHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
RPHLFAH1  MOVE      ZERO,OVRCD                                                  
          READKP    HL7FAHA1;HLAHRSID,HLAHVRID,HLAHCNT1,HLAHAREF,HLAHATYP:      
                             HLAHADIS,HLAHAIDU,HLAHASYS,HLAHAIVL,HLAHAIDS:      
                             HLAHAIDV,HLAHAIDC,HLAHAIDD,HLAHAIUS,HLAHAIDT:      
                             HLAHAIPS,HLAHAIPE,HLAHSPAR                         
          GOTO      OVERCOND IF OVER
          RETURN
.
UPHLFAH1  MOVE      ZERO,OVRCD                                                  
          UPDATE    HL7FAHA1;HLAHRSID,HLAHVRID,HLAHCNT1,HLAHAREF,HLAHATYP:      
                             HLAHADIS,HLAHAIDU,HLAHASYS,HLAHAIVL,HLAHAIDS:      
                             HLAHAIDV,HLAHAIDC,HLAHAIDD,HLAHAIUS,HLAHAIDT:      
                             HLAHAIPS,HLAHAIPE,HLAHSPAR                         
          RETURN
.
WRHLFAH1  RESET     KEY78                                                       
          WRITE     HL7FAHA1,KEY78;HLAHRSID,HLAHVRID,HLAHCNT1,HLAHAREF,HLAHATYP:
                                   HLAHADIS,HLAHAIDU,HLAHASYS,HLAHAIVL,HLAHAIDS:
                                   HLAHAIDV,HLAHAIDC,HLAHAIDD,HLAHAIUS,HLAHAIDT:
                                   HLAHAIPS,HLAHAIPE,HLAHSPAR                   
          RETURN
.
DEHLFAH1  RESET     KEY78                                                       
          DELETE    HL7FAHA1,KEY78                                              
          RETURN
.
