.
. AMSDEPIO    
. --------
. Filename     : amsdepaf.dat
.
RSAMDE1   RESET     KEY4                                                        
          READ      AMSDEPA1,KEY4;;                                             
          RETURN
.
RAAMDE1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      AMSDEPA1,KEY4;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDAMDE1   RESET     KEY4                                                        
          MOVE      ZERO,OVRCD
          READ      AMSDEPA1,KEY4;AMDEDEP,AMDEDES,AMDEBAS,AMDEFRQ,AMDERAT:      
                        AMDERT01,AMDERT02,AMDERT03,AMDERT04,AMDERT05,AMDERT06:  
                        AMDERT07,AMDERT08,AMDERT09,AMDERT10,AMDEUR1,AMDEUR2:    
                        AMDEUD1,AMDEUD2,AMDEUY1,AMDEUY2,AMDESPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RKAMDE1                                                                         
          MOVE      ZERO,OVRCD
          READKS    AMSDEPA1;AMDEDEP,AMDEDES,AMDEBAS,AMDEFRQ,AMDERAT:           
                        AMDERT01,AMDERT02,AMDERT03,AMDERT04,AMDERT05,AMDERT06:  
                        AMDERT07,AMDERT08,AMDERT09,AMDERT10,AMDEUR1,AMDEUR2:    
                        AMDEUD1,AMDEUD2,AMDEUY1,AMDEUY2,AMDESPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
RPAMDE1                                                                         
          MOVE      ZERO,OVRCD
          READKP    AMSDEPA1;AMDEDEP,AMDEDES,AMDEBAS,AMDEFRQ,AMDERAT:           
                        AMDERT01,AMDERT02,AMDERT03,AMDERT04,AMDERT05,AMDERT06:  
                        AMDERT07,AMDERT08,AMDERT09,AMDERT10,AMDEUR1,AMDEUR2:    
                        AMDEUD1,AMDEUD2,AMDEUY1,AMDEUY2,AMDESPA                 
          GOTO      OVERCOND IF OVER
          RETURN
.
UPAMDE1                                                                         
          UPDATE    AMSDEPA1;AMDEDEP,AMDEDES,AMDEBAS,AMDEFRQ,AMDERAT:           
                        AMDERT01,AMDERT02,AMDERT03,AMDERT04,AMDERT05,AMDERT06:  
                        AMDERT07,AMDERT08,AMDERT09,AMDERT10,AMDEUR1,AMDEUR2:    
                        AMDEUD1,AMDEUD2,AMDEUY1,AMDEUY2,AMDESPA                 
          RETURN
.
WRAMDE1   RESET     KEY4                                                        
          WRITE     AMSDEPA1,KEY4;AMDEDEP,AMDEDES,AMDEBAS,AMDEFRQ,AMDERAT:      
                        AMDERT01,AMDERT02,AMDERT03,AMDERT04,AMDERT05,AMDERT06:  
                        AMDERT07,AMDERT08,AMDERT09,AMDERT10,AMDEUR1,AMDEUR2:    
                        AMDEUD1,AMDEUD2,AMDEUY1,AMDEUY2,AMDESPA                 
          RETURN
.
DEAMDE1   RESET     KEY4                                                        
          DELETE    AMSDEPA1,KEY4                                               
          RETURN
.
