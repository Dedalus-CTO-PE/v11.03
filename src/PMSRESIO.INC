.
. PMSRESIO    
. --------
. Filename     : pmsresaf.dat
.
RSPMRES1  RESET     KEY8                                                        
          READ      PMSRESA1,KEY8;;                                             
          RETURN
.
RAPMRES1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSRESA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMRES1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      PMSRESA1,KEY8;PMRSURNO,PMRSCONT,PMRSTEXP,PMRSGRDT,PMRSCOMM: 
                        PMRSVISN,PMRSVEXP,PMRSVTYP,PMRSPNUM,PMRSPEXP,PMRSPCOU:  
                        PMRSINCD,PMRSINFM,PMRSINEX,PMRSSTDN,PMRSSCHL,PMRSECON:  
                        PMRSCAD1,PMRSCAD2,PMRSCAD3,PMRSCAD4,PMRSCPCD,PMRSSBIL:  
                        PMRSTINS,PMRSIPOL,PMRSIEXD,PMRSUCM1,PMRSUCM2,PMRSUCM3:  
                        PMRSUCM4,PMRSUCM5,PMRSCCNT,PMRSCPHN,PMRSFSCH,PMRSSAD1:  
                        PMRSSAD2,PMRSSAD3,PMRSSAD4,PMRSSPCD,PMRSSCNT,PMRSSPHN:  
                        PMRSCUID,PMRSCDAT,PMRSCTIM,PMRSUUID,PMRSUDAT,PMRSUTIM:  
                        PMRSSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMRES1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSRESA1;PMRSURNO,PMRSCONT,PMRSTEXP,PMRSGRDT,PMRSCOMM:      
                        PMRSVISN,PMRSVEXP,PMRSVTYP,PMRSPNUM,PMRSPEXP,PMRSPCOU:  
                        PMRSINCD,PMRSINFM,PMRSINEX,PMRSSTDN,PMRSSCHL,PMRSECON:  
                        PMRSCAD1,PMRSCAD2,PMRSCAD3,PMRSCAD4,PMRSCPCD,PMRSSBIL:  
                        PMRSTINS,PMRSIPOL,PMRSIEXD,PMRSUCM1,PMRSUCM2,PMRSUCM3:  
                        PMRSUCM4,PMRSUCM5,PMRSCCNT,PMRSCPHN,PMRSFSCH,PMRSSAD1:  
                        PMRSSAD2,PMRSSAD3,PMRSSAD4,PMRSSPCD,PMRSSCNT,PMRSSPHN:  
                        PMRSCUID,PMRSCDAT,PMRSCTIM,PMRSUUID,PMRSUDAT,PMRSUTIM:  
                        PMRSSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMRES1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSRESA1;PMRSURNO,PMRSCONT,PMRSTEXP,PMRSGRDT,PMRSCOMM:      
                        PMRSVISN,PMRSVEXP,PMRSVTYP,PMRSPNUM,PMRSPEXP,PMRSPCOU:  
                        PMRSINCD,PMRSINFM,PMRSINEX,PMRSSTDN,PMRSSCHL,PMRSECON:  
                        PMRSCAD1,PMRSCAD2,PMRSCAD3,PMRSCAD4,PMRSCPCD,PMRSSBIL:  
                        PMRSTINS,PMRSIPOL,PMRSIEXD,PMRSUCM1,PMRSUCM2,PMRSUCM3:  
                        PMRSUCM4,PMRSUCM5,PMRSCCNT,PMRSCPHN,PMRSFSCH,PMRSSAD1:  
                        PMRSSAD2,PMRSSAD3,PMRSSAD4,PMRSSPCD,PMRSSCNT,PMRSSPHN:  
                        PMRSCUID,PMRSCDAT,PMRSCTIM,PMRSUUID,PMRSUDAT,PMRSUTIM:  
                        PMRSSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMRES1                                                                        
          UPDATE    PMSRESA1;PMRSURNO,PMRSCONT,PMRSTEXP,PMRSGRDT,PMRSCOMM:      
                        PMRSVISN,PMRSVEXP,PMRSVTYP,PMRSPNUM,PMRSPEXP,PMRSPCOU:  
                        PMRSINCD,PMRSINFM,PMRSINEX,PMRSSTDN,PMRSSCHL,PMRSECON:  
                        PMRSCAD1,PMRSCAD2,PMRSCAD3,PMRSCAD4,PMRSCPCD,PMRSSBIL:  
                        PMRSTINS,PMRSIPOL,PMRSIEXD,PMRSUCM1,PMRSUCM2,PMRSUCM3:  
                        PMRSUCM4,PMRSUCM5,PMRSCCNT,PMRSCPHN,PMRSFSCH,PMRSSAD1:  
                        PMRSSAD2,PMRSSAD3,PMRSSAD4,PMRSSPCD,PMRSSCNT,PMRSSPHN:  
                        PMRSCUID,PMRSCDAT,PMRSCTIM,PMRSUUID,PMRSUDAT,PMRSUTIM:  
                        PMRSSPAR                                                
          RETURN
.
WRPMRES1  RESET     KEY8                                                        
          WRITE     PMSRESA1,KEY8;PMRSURNO,PMRSCONT,PMRSTEXP,PMRSGRDT,PMRSCOMM: 
                        PMRSVISN,PMRSVEXP,PMRSVTYP,PMRSPNUM,PMRSPEXP,PMRSPCOU:  
                        PMRSINCD,PMRSINFM,PMRSINEX,PMRSSTDN,PMRSSCHL,PMRSECON:  
                        PMRSCAD1,PMRSCAD2,PMRSCAD3,PMRSCAD4,PMRSCPCD,PMRSSBIL:  
                        PMRSTINS,PMRSIPOL,PMRSIEXD,PMRSUCM1,PMRSUCM2,PMRSUCM3:  
                        PMRSUCM4,PMRSUCM5,PMRSCCNT,PMRSCPHN,PMRSFSCH,PMRSSAD1:  
                        PMRSSAD2,PMRSSAD3,PMRSSAD4,PMRSSPCD,PMRSSCNT,PMRSSPHN:  
                        PMRSCUID,PMRSCDAT,PMRSCTIM,PMRSUUID,PMRSUDAT,PMRSUTIM:  
                        PMRSSPAR                                                
          RETURN
.
DEPMRES1  RESET     KEY8                                                        
          DELETE    PMSRESA1,KEY8                                               
          RETURN
.
