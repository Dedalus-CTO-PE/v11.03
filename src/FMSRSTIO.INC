.
. FMSRSTIO    
. --------
. Filename     : fmsrstaf.dat
.
RSFMRT1   RESET     KEY7                                                        
          READ      FMSRSTA1,KEY7;;                                             
          RETURN
.
RAFMRT1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      FMSRSTA1,KEY7;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMRT1   RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      FMSRSTA1,KEY7;FMRTSTYC,FMRTROWN,FMRTLINE,FMRTTYPE,FMRTWIDT: 
                        FMRTVTYP,FMRTSCAL,FMRTPERI,FMRTFRMT,FMRTSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMRT1                                                                         
          MOVE      ZERO,OVRCD
          READKS    FMSRSTA1;FMRTSTYC,FMRTROWN,FMRTLINE,FMRTTYPE,FMRTWIDT:      
                        FMRTVTYP,FMRTSCAL,FMRTPERI,FMRTFRMT,FMRTSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMRT1                                                                         
          MOVE      ZERO,OVRCD
          READKP    FMSRSTA1;FMRTSTYC,FMRTROWN,FMRTLINE,FMRTTYPE,FMRTWIDT:      
                        FMRTVTYP,FMRTSCAL,FMRTPERI,FMRTFRMT,FMRTSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMRT1                                                                         
          UPDATE    FMSRSTA1;FMRTSTYC,FMRTROWN,FMRTLINE,FMRTTYPE,FMRTWIDT:      
                        FMRTVTYP,FMRTSCAL,FMRTPERI,FMRTFRMT,FMRTSPAR            
          RETURN
.
WRFMRT1   RESET     KEY7                                                        
          WRITE     FMSRSTA1,KEY7;FMRTSTYC,FMRTROWN,FMRTLINE,FMRTTYPE,FMRTWIDT: 
                        FMRTVTYP,FMRTSCAL,FMRTPERI,FMRTFRMT,FMRTSPAR            
          RETURN
.
DEFMRT1   RESET     KEY7                                                        
          DELETE    FMSRSTA1,KEY7                                               
          RETURN
.
