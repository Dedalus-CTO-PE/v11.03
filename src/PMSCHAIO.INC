.
. PMSCHAIO    
. --------
. Filename     : pmschaaf.dat
.
RSPMCHA1  RESET     KEY46                                                       
          READ      PMSCHAA1,KEY46;;                                            
          RETURN
.
RAPMCHA1  RESET     KEY46                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCHAA1,KEY46;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMCHA1  RESET     KEY46                                                       
          MOVE      ZERO,OVRCD
          READ      PMSCHAA1,KEY46;PMCHADMN,PMCHTDAT,PMCHTTIM,PMCHTWAR,PMCHTBED:
                        PMCHCDAT,PMCHCTIM,PMCHCTYP,PMCHREAS,PMCHOVAL,PMCHNVAL:  
                        PMCHWEBC,PMCHDATC,PMCHTIMC,PMCHSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMCHA1  MOVE      ZERO,OVRCD                                                  
          READKS    PMSCHAA1;PMCHADMN,PMCHTDAT,PMCHTTIM,PMCHTWAR,PMCHTBED:      
                        PMCHCDAT,PMCHCTIM,PMCHCTYP,PMCHREAS,PMCHOVAL,PMCHNVAL:  
                        PMCHWEBC,PMCHDATC,PMCHTIMC,PMCHSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMCHA1  MOVE      ZERO,OVRCD                                                  
          READKP    PMSCHAA1;PMCHADMN,PMCHTDAT,PMCHTTIM,PMCHTWAR,PMCHTBED:      
                        PMCHCDAT,PMCHCTIM,PMCHCTYP,PMCHREAS,PMCHOVAL,PMCHNVAL:  
                        PMCHWEBC,PMCHDATC,PMCHTIMC,PMCHSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMCHA1  MOVE      ZERO,OVRCD                                                  
          UPDATE    PMSCHAA1;PMCHADMN,PMCHTDAT,PMCHTTIM,PMCHTWAR,PMCHTBED:      
                        PMCHCDAT,PMCHCTIM,PMCHCTYP,PMCHREAS,PMCHOVAL,PMCHNVAL:  
                        PMCHWEBC,PMCHDATC,PMCHTIMC,PMCHSPAR                     
          RETURN
.
WRPMCHA1  RESET     KEY46                                                       
          WRITE     PMSCHAA1,KEY46;PMCHADMN,PMCHTDAT,PMCHTTIM,PMCHTWAR,PMCHTBED:
                        PMCHCDAT,PMCHCTIM,PMCHCTYP,PMCHREAS,PMCHOVAL,PMCHNVAL:  
                        PMCHWEBC,PMCHDATC,PMCHTIMC,PMCHSPAR                     
          RETURN
.
DEPMCHA1  RESET     KEY46                                                       
          DELETE    PMSCHAA1,KEY46                                              
          RETURN
.
