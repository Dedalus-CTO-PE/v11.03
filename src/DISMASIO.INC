.
. DISMASIO    
. --------
. Filename     : dismasaf.dat
.
RSDSMAS1  RESET     KEY9                                                        
          READ      DISMASA1,KEY9;;                                             
          RETURN
.
RADSMAS1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      DISMASA1,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDDSMAS1  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      DISMASA1,KEY9;DSMACODE,DSMADESC,DSMASDAT,DSMASTIM,DSMAEDAT: 
                        DSMAETIM,DSMAAICD,DSMAACTV,DSMACUSR,DSMACDAT,DSMACTIM:  
                        DSMAUUSR,DSMAUDAT,DSMAUTIM,DSMASPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKDSMAS1                                                                        
          MOVE      ZERO,OVRCD
          READKS    DISMASA1;DSMACODE,DSMADESC,DSMASDAT,DSMASTIM,DSMAEDAT:      
                        DSMAETIM,DSMAAICD,DSMAACTV,DSMACUSR,DSMACDAT,DSMACTIM:  
                        DSMAUUSR,DSMAUDAT,DSMAUTIM,DSMASPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPDSMAS1                                                                        
          MOVE      ZERO,OVRCD
          READKP    DISMASA1;DSMACODE,DSMADESC,DSMASDAT,DSMASTIM,DSMAEDAT:      
                        DSMAETIM,DSMAAICD,DSMAACTV,DSMACUSR,DSMACDAT,DSMACTIM:  
                        DSMAUUSR,DSMAUDAT,DSMAUTIM,DSMASPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPDSMAS1                                                                        
          UPDATE    DISMASA1;DSMACODE,DSMADESC,DSMASDAT,DSMASTIM,DSMAEDAT:      
                        DSMAETIM,DSMAAICD,DSMAACTV,DSMACUSR,DSMACDAT,DSMACTIM:  
                        DSMAUUSR,DSMAUDAT,DSMAUTIM,DSMASPAR                     
          RETURN
.
WRDSMAS1  RESET     KEY9                                                        
          WRITE     DISMASA1,KEY9;DSMACODE,DSMADESC,DSMASDAT,DSMASTIM,DSMAEDAT: 
                        DSMAETIM,DSMAAICD,DSMAACTV,DSMACUSR,DSMACDAT,DSMACTIM:  
                        DSMAUUSR,DSMAUDAT,DSMAUTIM,DSMASPAR                     
          RETURN
.
DEDSMAS1  RESET     KEY9                                                        
          DELETE    DISMASA1,KEY9                                               
          RETURN
.
