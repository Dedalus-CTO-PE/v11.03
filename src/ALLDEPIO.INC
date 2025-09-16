.
. ALLDEPIO    
. --------
. Filename     : alldepaf.dat
.
RSALDEP1  RESET     KEY3                                                        
          READ      ALLDEPA1,KEY3;;                                             
          RETURN
.
RAALDEP1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      ALLDEPA1,KEY3;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALDEP1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READ      ALLDEPA1,KEY3;ALDEDEPT,ALDEREFE,ALDESECU,ALDEVACS,ALDEBILL: 
                                  ALDEPRAC,ALDEUR1,ALDEUR2,ALDEUD1,ALDEUD2:     
                                  ALDEUY1,ALDEUY2,ALDEUC1,ALDEUC2,ALDECDAT:     
                                  ALDECTIM,ALDECUID,ALDEUDAT,ALDEUTIM,ALDEUUID: 
                                  ALDEHOSP,ALDEACTV,ALDESREQ,ALDECSEP,ALDEPRGS: 
                                  ALDEPENC,ALDEVECC,ALDEUERF,ALDEURAD,ALDEUASS: 
                                  ALDEURAP,ALDEDLAS,ALDEDCLI,ALDEDRAA,ALDEDLET: 
                                  ALDEUEME,ALDEUEIN,ALDEUESU,ALDEUAHP,ALDESITE: 
                                  ALDECTYP,ALDEAONE,ALDEUTRS,ALDEUPRT,ALDEDACP: 
                                  ALDESPAR                                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALDEP1  MOVE      ZERO,OVRCD                                                  
          READKS    ALLDEPA1;ALDEDEPT,ALDEREFE,ALDESECU,ALDEVACS,ALDEBILL:      
                             ALDEPRAC,ALDEUR1,ALDEUR2,ALDEUD1,ALDEUD2,ALDEUY1:  
                             ALDEUY2,ALDEUC1,ALDEUC2,ALDECDAT,ALDECTIM,ALDECUID:
                             ALDEUDAT,ALDEUTIM,ALDEUUID,ALDEHOSP,ALDEACTV:      
                             ALDESREQ,ALDECSEP,ALDEPRGS,ALDEPENC,ALDEVECC:      
                             ALDEUERF,ALDEURAD,ALDEUASS,ALDEURAP,ALDEDLAS:      
                             ALDEDCLI,ALDEDRAA,ALDEDLET,ALDEUEME,ALDEUEIN:      
                             ALDEUESU,ALDEUAHP,ALDESITE,ALDECTYP,ALDEAONE:      
                             ALDEUTRS,ALDEUPRT,ALDEDACP,ALDESPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALDEP1  MOVE      ZERO,OVRCD                                                  
          READKP    ALLDEPA1;ALDEDEPT,ALDEREFE,ALDESECU,ALDEVACS,ALDEBILL:      
                             ALDEPRAC,ALDEUR1,ALDEUR2,ALDEUD1,ALDEUD2,ALDEUY1:  
                             ALDEUY2,ALDEUC1,ALDEUC2,ALDECDAT,ALDECTIM,ALDECUID:
                             ALDEUDAT,ALDEUTIM,ALDEUUID,ALDEHOSP,ALDEACTV:      
                             ALDESREQ,ALDECSEP,ALDEPRGS,ALDEPENC,ALDEVECC:      
                             ALDEUERF,ALDEURAD,ALDEUASS,ALDEURAP,ALDEDLAS:      
                             ALDEDCLI,ALDEDRAA,ALDEDLET,ALDEUEME,ALDEUEIN:      
                             ALDEUESU,ALDEUAHP,ALDESITE,ALDECTYP,ALDEAONE:      
                             ALDEUTRS,ALDEUPRT,ALDEDACP,ALDESPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALDEP1  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLDEPA1;ALDEDEPT,ALDEREFE,ALDESECU,ALDEVACS,ALDEBILL:      
                             ALDEPRAC,ALDEUR1,ALDEUR2,ALDEUD1,ALDEUD2,ALDEUY1:  
                             ALDEUY2,ALDEUC1,ALDEUC2,ALDECDAT,ALDECTIM,ALDECUID:
                             ALDEUDAT,ALDEUTIM,ALDEUUID,ALDEHOSP,ALDEACTV:      
                             ALDESREQ,ALDECSEP,ALDEPRGS,ALDEPENC,ALDEVECC:      
                             ALDEUERF,ALDEURAD,ALDEUASS,ALDEURAP,ALDEDLAS:      
                             ALDEDCLI,ALDEDRAA,ALDEDLET,ALDEUEME,ALDEUEIN:      
                             ALDEUESU,ALDEUAHP,ALDESITE,ALDECTYP,ALDEAONE:      
                             ALDEUTRS,ALDEUPRT,ALDEDACP,ALDESPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALDEP1  RESET     KEY3                                                        
          WRITE     ALLDEPA1,KEY3;ALDEDEPT,ALDEREFE,ALDESECU,ALDEVACS,ALDEBILL: 
                                  ALDEPRAC,ALDEUR1,ALDEUR2,ALDEUD1,ALDEUD2:     
                                  ALDEUY1,ALDEUY2,ALDEUC1,ALDEUC2,ALDECDAT:     
                                  ALDECTIM,ALDECUID,ALDEUDAT,ALDEUTIM,ALDEUUID: 
                                  ALDEHOSP,ALDEACTV,ALDESREQ,ALDECSEP,ALDEPRGS: 
                                  ALDEPENC,ALDEVECC,ALDEUERF,ALDEURAD,ALDEUASS: 
                                  ALDEURAP,ALDEDLAS,ALDEDCLI,ALDEDRAA,ALDEDLET: 
                                  ALDEUEME,ALDEUEIN,ALDEUESU,ALDEUAHP,ALDESITE: 
                                  ALDECTYP,ALDEAONE,ALDEUTRS,ALDEUPRT,ALDEDACP: 
                                  ALDESPAR                                      
          RETURN
.
DEALDEP1  RESET     KEY3                                                        
          DELETE    ALLDEPA1,KEY3                                               
          RETURN
.
RLALDEP1  RESET     KEY3                                                        
          MOVE      ZERO,OVRCD
          READL     ALLDEPA1,KEY3;ALDEDEPT,ALDEREFE,ALDESECU,ALDEVACS,ALDEBILL: 
                                  ALDEPRAC,ALDEUR1,ALDEUR2,ALDEUD1,ALDEUD2:     
                                  ALDEUY1,ALDEUY2,ALDEUC1,ALDEUC2,ALDECDAT:     
                                  ALDECTIM,ALDECUID,ALDEUDAT,ALDEUTIM,ALDEUUID: 
                                  ALDEHOSP,ALDEACTV,ALDESREQ,ALDECSEP,ALDEPRGS: 
                                  ALDEPENC,ALDEVECC,ALDEUERF,ALDEURAD,ALDEUASS: 
                                  ALDEURAP,ALDEDLAS,ALDEDCLI,ALDEDRAA,ALDEDLET: 
                                  ALDEUEME,ALDEUEIN,ALDEUESU,ALDEUAHP,ALDESITE: 
                                  ALDECTYP,ALDEAONE,ALDEUTRS,ALDEUPRT,ALDEDACP: 
                                  ALDESPAR                                      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALDEP1  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLDEPA1;ALDEDEPT,ALDEREFE,ALDESECU,ALDEVACS,ALDEBILL:      
                             ALDEPRAC,ALDEUR1,ALDEUR2,ALDEUD1,ALDEUD2,ALDEUY1:  
                             ALDEUY2,ALDEUC1,ALDEUC2,ALDECDAT,ALDECTIM,ALDECUID:
                             ALDEUDAT,ALDEUTIM,ALDEUUID,ALDEHOSP,ALDEACTV:      
                             ALDESREQ,ALDECSEP,ALDEPRGS,ALDEPENC,ALDEVECC:      
                             ALDEUERF,ALDEURAD,ALDEUASS,ALDEURAP,ALDEDLAS:      
                             ALDEDCLI,ALDEDRAA,ALDEDLET,ALDEUEME,ALDEUEIN:      
                             ALDEUESU,ALDEUAHP,ALDESITE,ALDECTYP,ALDEAONE:      
                             ALDEUTRS,ALDEUPRT,ALDEDACP,ALDESPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALDEP1  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLDEPA1;ALDEDEPT,ALDEREFE,ALDESECU,ALDEVACS,ALDEBILL:      
                             ALDEPRAC,ALDEUR1,ALDEUR2,ALDEUD1,ALDEUD2,ALDEUY1:  
                             ALDEUY2,ALDEUC1,ALDEUC2,ALDECDAT,ALDECTIM,ALDECUID:
                             ALDEUDAT,ALDEUTIM,ALDEUUID,ALDEHOSP,ALDEACTV:      
                             ALDESREQ,ALDECSEP,ALDEPRGS,ALDEPENC,ALDEVECC:      
                             ALDEUERF,ALDEURAD,ALDEUASS,ALDEURAP,ALDEDLAS:      
                             ALDEDCLI,ALDEDRAA,ALDEDLET,ALDEUEME,ALDEUEIN:      
                             ALDEUESU,ALDEUAHP,ALDESITE,ALDECTYP,ALDEAONE:      
                             ALDEUTRS,ALDEUPRT,ALDEDACP,ALDESPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALDEP1  RESET     KEY3                                                        
          UNLOCK    ALLDEPA1                                                    
          RETURN
.
RSALDEP2  RESET     KEY6                                                        
          READ      ALLDEPA2,KEY6;;                                             
          RETURN
.
RAALDEP2  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      ALLDEPA2,KEY6;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDALDEP2  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READ      ALLDEPA2,KEY6;ALDEDEPT,ALDEREFE,ALDESECU,ALDEVACS,ALDEBILL: 
                                  ALDEPRAC,ALDEUR1,ALDEUR2,ALDEUD1,ALDEUD2:     
                                  ALDEUY1,ALDEUY2,ALDEUC1,ALDEUC2,ALDECDAT:     
                                  ALDECTIM,ALDECUID,ALDEUDAT,ALDEUTIM,ALDEUUID: 
                                  ALDEHOSP,ALDEACTV,ALDESREQ,ALDECSEP,ALDEPRGS: 
                                  ALDEPENC,ALDEVECC,ALDEUERF,ALDEURAD,ALDEUASS: 
                                  ALDEURAP,ALDEDLAS,ALDEDCLI,ALDEDRAA,ALDEDLET: 
                                  ALDEUEME,ALDEUEIN,ALDEUESU,ALDEUAHP,ALDESITE: 
                                  ALDECTYP,ALDEAONE,ALDEUTRS,ALDEUPRT,ALDEDACP: 
                                  ALDESPAR                                      
          GOTO      OVERCOND IF OVER
          RETURN
.
RKALDEP2  MOVE      ZERO,OVRCD                                                  
          READKS    ALLDEPA2;ALDEDEPT,ALDEREFE,ALDESECU,ALDEVACS,ALDEBILL:      
                             ALDEPRAC,ALDEUR1,ALDEUR2,ALDEUD1,ALDEUD2,ALDEUY1:  
                             ALDEUY2,ALDEUC1,ALDEUC2,ALDECDAT,ALDECTIM,ALDECUID:
                             ALDEUDAT,ALDEUTIM,ALDEUUID,ALDEHOSP,ALDEACTV:      
                             ALDESREQ,ALDECSEP,ALDEPRGS,ALDEPENC,ALDEVECC:      
                             ALDEUERF,ALDEURAD,ALDEUASS,ALDEURAP,ALDEDLAS:      
                             ALDEDCLI,ALDEDRAA,ALDEDLET,ALDEUEME,ALDEUEIN:      
                             ALDEUESU,ALDEUAHP,ALDESITE,ALDECTYP,ALDEAONE:      
                             ALDEUTRS,ALDEUPRT,ALDEDACP,ALDESPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPALDEP2  MOVE      ZERO,OVRCD                                                  
          READKP    ALLDEPA2;ALDEDEPT,ALDEREFE,ALDESECU,ALDEVACS,ALDEBILL:      
                             ALDEPRAC,ALDEUR1,ALDEUR2,ALDEUD1,ALDEUD2,ALDEUY1:  
                             ALDEUY2,ALDEUC1,ALDEUC2,ALDECDAT,ALDECTIM,ALDECUID:
                             ALDEUDAT,ALDEUTIM,ALDEUUID,ALDEHOSP,ALDEACTV:      
                             ALDESREQ,ALDECSEP,ALDEPRGS,ALDEPENC,ALDEVECC:      
                             ALDEUERF,ALDEURAD,ALDEUASS,ALDEURAP,ALDEDLAS:      
                             ALDEDCLI,ALDEDRAA,ALDEDLET,ALDEUEME,ALDEUEIN:      
                             ALDEUESU,ALDEUAHP,ALDESITE,ALDECTYP,ALDEAONE:      
                             ALDEUTRS,ALDEUPRT,ALDEDACP,ALDESPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPALDEP2  MOVE      ZERO,OVRCD                                                  
          UPDATE    ALLDEPA2;ALDEDEPT,ALDEREFE,ALDESECU,ALDEVACS,ALDEBILL:      
                             ALDEPRAC,ALDEUR1,ALDEUR2,ALDEUD1,ALDEUD2,ALDEUY1:  
                             ALDEUY2,ALDEUC1,ALDEUC2,ALDECDAT,ALDECTIM,ALDECUID:
                             ALDEUDAT,ALDEUTIM,ALDEUUID,ALDEHOSP,ALDEACTV:      
                             ALDESREQ,ALDECSEP,ALDEPRGS,ALDEPENC,ALDEVECC:      
                             ALDEUERF,ALDEURAD,ALDEUASS,ALDEURAP,ALDEDLAS:      
                             ALDEDCLI,ALDEDRAA,ALDEDLET,ALDEUEME,ALDEUEIN:      
                             ALDEUESU,ALDEUAHP,ALDESITE,ALDECTYP,ALDEAONE:      
                             ALDEUTRS,ALDEUPRT,ALDEDACP,ALDESPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRALDEP2  RESET     KEY6                                                        
          WRITE     ALLDEPA2,KEY6;ALDEDEPT,ALDEREFE,ALDESECU,ALDEVACS,ALDEBILL: 
                                  ALDEPRAC,ALDEUR1,ALDEUR2,ALDEUD1,ALDEUD2:     
                                  ALDEUY1,ALDEUY2,ALDEUC1,ALDEUC2,ALDECDAT:     
                                  ALDECTIM,ALDECUID,ALDEUDAT,ALDEUTIM,ALDEUUID: 
                                  ALDEHOSP,ALDEACTV,ALDESREQ,ALDECSEP,ALDEPRGS: 
                                  ALDEPENC,ALDEVECC,ALDEUERF,ALDEURAD,ALDEUASS: 
                                  ALDEURAP,ALDEDLAS,ALDEDCLI,ALDEDRAA,ALDEDLET: 
                                  ALDEUEME,ALDEUEIN,ALDEUESU,ALDEUAHP,ALDESITE: 
                                  ALDECTYP,ALDEAONE,ALDEUTRS,ALDEUPRT,ALDEDACP: 
                                  ALDESPAR                                      
          RETURN
.
DEALDEP2  RESET     KEY6                                                        
          DELETE    ALLDEPA2,KEY6                                               
          RETURN
.
RLALDEP2  RESET     KEY6                                                        
          MOVE      ZERO,OVRCD
          READL     ALLDEPA2,KEY6;ALDEDEPT,ALDEREFE,ALDESECU,ALDEVACS,ALDEBILL: 
                                  ALDEPRAC,ALDEUR1,ALDEUR2,ALDEUD1,ALDEUD2:     
                                  ALDEUY1,ALDEUY2,ALDEUC1,ALDEUC2,ALDECDAT:     
                                  ALDECTIM,ALDECUID,ALDEUDAT,ALDEUTIM,ALDEUUID: 
                                  ALDEHOSP,ALDEACTV,ALDESREQ,ALDECSEP,ALDEPRGS: 
                                  ALDEPENC,ALDEVECC,ALDEUERF,ALDEURAD,ALDEUASS: 
                                  ALDEURAP,ALDEDLAS,ALDEDCLI,ALDEDRAA,ALDEDLET: 
                                  ALDEUEME,ALDEUEIN,ALDEUESU,ALDEUAHP,ALDESITE: 
                                  ALDECTYP,ALDEAONE,ALDEUTRS,ALDEUPRT,ALDEDACP: 
                                  ALDESPAR                                      
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLALDEP2  MOVE      ZERO,OVRCD                                                  
          READLKS   ALLDEPA2;ALDEDEPT,ALDEREFE,ALDESECU,ALDEVACS,ALDEBILL:      
                             ALDEPRAC,ALDEUR1,ALDEUR2,ALDEUD1,ALDEUD2,ALDEUY1:  
                             ALDEUY2,ALDEUC1,ALDEUC2,ALDECDAT,ALDECTIM,ALDECUID:
                             ALDEUDAT,ALDEUTIM,ALDEUUID,ALDEHOSP,ALDEACTV:      
                             ALDESREQ,ALDECSEP,ALDEPRGS,ALDEPENC,ALDEVECC:      
                             ALDEUERF,ALDEURAD,ALDEUASS,ALDEURAP,ALDEDLAS:      
                             ALDEDCLI,ALDEDRAA,ALDEDLET,ALDEUEME,ALDEUEIN:      
                             ALDEUESU,ALDEUAHP,ALDESITE,ALDECTYP,ALDEAONE:      
                             ALDEUTRS,ALDEUPRT,ALDEDACP,ALDESPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLALDEP2  MOVE      ZERO,OVRCD                                                  
          READLKP   ALLDEPA2;ALDEDEPT,ALDEREFE,ALDESECU,ALDEVACS,ALDEBILL:      
                             ALDEPRAC,ALDEUR1,ALDEUR2,ALDEUD1,ALDEUD2,ALDEUY1:  
                             ALDEUY2,ALDEUC1,ALDEUC2,ALDECDAT,ALDECTIM,ALDECUID:
                             ALDEUDAT,ALDEUTIM,ALDEUUID,ALDEHOSP,ALDEACTV:      
                             ALDESREQ,ALDECSEP,ALDEPRGS,ALDEPENC,ALDEVECC:      
                             ALDEUERF,ALDEURAD,ALDEUASS,ALDEURAP,ALDEDLAS:      
                             ALDEDCLI,ALDEDRAA,ALDEDLET,ALDEUEME,ALDEUEIN:      
                             ALDEUESU,ALDEUAHP,ALDESITE,ALDECTYP,ALDEAONE:      
                             ALDEUTRS,ALDEUPRT,ALDEDACP,ALDESPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUALDEP2  RESET     KEY6                                                        
          UNLOCK    ALLDEPA2                                                    
          RETURN
.
