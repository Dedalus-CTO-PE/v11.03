.
. NZPSPRIO    
. --------
. Filename     : nzpspraf.dat
.
RSNZSPR1  RESET     KEY11                                                       
          READ      NZPSPRA1,KEY11;;                                            
          RETURN
.
RANZSPR1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      NZPSPRA1,KEY11;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZSPR1  RESET     KEY11                                                       
          MOVE      ZERO,OVRCD
          READ      NZPSPRA1,KEY11;NZSPADMN,NZSPCLMN,NZSPSURG,NZSPPROC,NZSPUNIQ:
                        NZSPCNTR,NZSPCPRC,NZSPPRIM,NZSPANAE,NZSPPDES,NZSPICAP:  
                        NZSPPIND,NZSPPINS,NZSPINSR,NZSPAPRV,NZSPAPSI,NZSPCLNO:  
                        NZSPAPNT,NZSPCMNT,NZSPTDUR,NZSPTFEE,NZSPFFEE,NZSPHPAY:  
                        NZSPCPAY,NZSPFADJ,NZSPHADJ,NZSPCADJ,NZSPUDF1,NZSPUDF2:  
                        NZSPCDAT,NZSPCTIM,NZSPCUID,NZSPUDAT,NZSPUTIM,NZSPUUID:  
                        NZSPADTE,NZSPCONT,NZSPINVD,NZSPUNTH,NZSPSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZSPR1                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPSPRA1;NZSPADMN,NZSPCLMN,NZSPSURG,NZSPPROC,NZSPUNIQ:      
                        NZSPCNTR,NZSPCPRC,NZSPPRIM,NZSPANAE,NZSPPDES,NZSPICAP:  
                        NZSPPIND,NZSPPINS,NZSPINSR,NZSPAPRV,NZSPAPSI,NZSPCLNO:  
                        NZSPAPNT,NZSPCMNT,NZSPTDUR,NZSPTFEE,NZSPFFEE,NZSPHPAY:  
                        NZSPCPAY,NZSPFADJ,NZSPHADJ,NZSPCADJ,NZSPUDF1,NZSPUDF2:  
                        NZSPCDAT,NZSPCTIM,NZSPCUID,NZSPUDAT,NZSPUTIM,NZSPUUID:  
                        NZSPADTE,NZSPCONT,NZSPINVD,NZSPUNTH,NZSPSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZSPR1                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPSPRA1;NZSPADMN,NZSPCLMN,NZSPSURG,NZSPPROC,NZSPUNIQ:      
                        NZSPCNTR,NZSPCPRC,NZSPPRIM,NZSPANAE,NZSPPDES,NZSPICAP:  
                        NZSPPIND,NZSPPINS,NZSPINSR,NZSPAPRV,NZSPAPSI,NZSPCLNO:  
                        NZSPAPNT,NZSPCMNT,NZSPTDUR,NZSPTFEE,NZSPFFEE,NZSPHPAY:  
                        NZSPCPAY,NZSPFADJ,NZSPHADJ,NZSPCADJ,NZSPUDF1,NZSPUDF2:  
                        NZSPCDAT,NZSPCTIM,NZSPCUID,NZSPUDAT,NZSPUTIM,NZSPUUID:  
                        NZSPADTE,NZSPCONT,NZSPINVD,NZSPUNTH,NZSPSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZSPR1                                                                        
          UPDATE    NZPSPRA1;NZSPADMN,NZSPCLMN,NZSPSURG,NZSPPROC,NZSPUNIQ:      
                        NZSPCNTR,NZSPCPRC,NZSPPRIM,NZSPANAE,NZSPPDES,NZSPICAP:  
                        NZSPPIND,NZSPPINS,NZSPINSR,NZSPAPRV,NZSPAPSI,NZSPCLNO:  
                        NZSPAPNT,NZSPCMNT,NZSPTDUR,NZSPTFEE,NZSPFFEE,NZSPHPAY:  
                        NZSPCPAY,NZSPFADJ,NZSPHADJ,NZSPCADJ,NZSPUDF1,NZSPUDF2:  
                        NZSPCDAT,NZSPCTIM,NZSPCUID,NZSPUDAT,NZSPUTIM,NZSPUUID:  
                        NZSPADTE,NZSPCONT,NZSPINVD,NZSPUNTH,NZSPSPAR            
          RETURN
.
WRNZSPR1  RESET     KEY11                                                       
          WRITE     NZPSPRA1,KEY11;NZSPADMN,NZSPCLMN,NZSPSURG,NZSPPROC,NZSPUNIQ:
                        NZSPCNTR,NZSPCPRC,NZSPPRIM,NZSPANAE,NZSPPDES,NZSPICAP:  
                        NZSPPIND,NZSPPINS,NZSPINSR,NZSPAPRV,NZSPAPSI,NZSPCLNO:  
                        NZSPAPNT,NZSPCMNT,NZSPTDUR,NZSPTFEE,NZSPFFEE,NZSPHPAY:  
                        NZSPCPAY,NZSPFADJ,NZSPHADJ,NZSPCADJ,NZSPUDF1,NZSPUDF2:  
                        NZSPCDAT,NZSPCTIM,NZSPCUID,NZSPUDAT,NZSPUTIM,NZSPUUID:  
                        NZSPADTE,NZSPCONT,NZSPINVD,NZSPUNTH,NZSPSPAR            
          RETURN
.
DENZSPR1  RESET     KEY11                                                       
          DELETE    NZPSPRA1,KEY11                                              
          RETURN
.
RSNZSPR2  RESET     KEY17                                                       
          READ      NZPSPRA2,KEY17;;                                            
          RETURN
.
RANZSPR2  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      NZPSPRA2,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDNZSPR2  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      NZPSPRA2,KEY17;NZSPADMN,NZSPCLMN,NZSPSURG,NZSPPROC,NZSPUNIQ:
                        NZSPCNTR,NZSPCPRC,NZSPPRIM,NZSPANAE,NZSPPDES,NZSPICAP:  
                        NZSPPIND,NZSPPINS,NZSPINSR,NZSPAPRV,NZSPAPSI,NZSPCLNO:  
                        NZSPAPNT,NZSPCMNT,NZSPTDUR,NZSPTFEE,NZSPFFEE,NZSPHPAY:  
                        NZSPCPAY,NZSPFADJ,NZSPHADJ,NZSPCADJ,NZSPUDF1,NZSPUDF2:  
                        NZSPCDAT,NZSPCTIM,NZSPCUID,NZSPUDAT,NZSPUTIM,NZSPUUID:  
                        NZSPADTE,NZSPCONT,NZSPINVD,NZSPUNTH,NZSPSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RKNZSPR2                                                                        
          MOVE      ZERO,OVRCD
          READKS    NZPSPRA2;NZSPADMN,NZSPCLMN,NZSPSURG,NZSPPROC,NZSPUNIQ:      
                        NZSPCNTR,NZSPCPRC,NZSPPRIM,NZSPANAE,NZSPPDES,NZSPICAP:  
                        NZSPPIND,NZSPPINS,NZSPINSR,NZSPAPRV,NZSPAPSI,NZSPCLNO:  
                        NZSPAPNT,NZSPCMNT,NZSPTDUR,NZSPTFEE,NZSPFFEE,NZSPHPAY:  
                        NZSPCPAY,NZSPFADJ,NZSPHADJ,NZSPCADJ,NZSPUDF1,NZSPUDF2:  
                        NZSPCDAT,NZSPCTIM,NZSPCUID,NZSPUDAT,NZSPUTIM,NZSPUUID:  
                        NZSPADTE,NZSPCONT,NZSPINVD,NZSPUNTH,NZSPSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
RPNZSPR2                                                                        
          MOVE      ZERO,OVRCD
          READKP    NZPSPRA2;NZSPADMN,NZSPCLMN,NZSPSURG,NZSPPROC,NZSPUNIQ:      
                        NZSPCNTR,NZSPCPRC,NZSPPRIM,NZSPANAE,NZSPPDES,NZSPICAP:  
                        NZSPPIND,NZSPPINS,NZSPINSR,NZSPAPRV,NZSPAPSI,NZSPCLNO:  
                        NZSPAPNT,NZSPCMNT,NZSPTDUR,NZSPTFEE,NZSPFFEE,NZSPHPAY:  
                        NZSPCPAY,NZSPFADJ,NZSPHADJ,NZSPCADJ,NZSPUDF1,NZSPUDF2:  
                        NZSPCDAT,NZSPCTIM,NZSPCUID,NZSPUDAT,NZSPUTIM,NZSPUUID:  
                        NZSPADTE,NZSPCONT,NZSPINVD,NZSPUNTH,NZSPSPAR            
          GOTO      OVERCOND IF OVER
          RETURN
.
UPNZSPR2                                                                        
          UPDATE    NZPSPRA2;NZSPADMN,NZSPCLMN,NZSPSURG,NZSPPROC,NZSPUNIQ:      
                        NZSPCNTR,NZSPCPRC,NZSPPRIM,NZSPANAE,NZSPPDES,NZSPICAP:  
                        NZSPPIND,NZSPPINS,NZSPINSR,NZSPAPRV,NZSPAPSI,NZSPCLNO:  
                        NZSPAPNT,NZSPCMNT,NZSPTDUR,NZSPTFEE,NZSPFFEE,NZSPHPAY:  
                        NZSPCPAY,NZSPFADJ,NZSPHADJ,NZSPCADJ,NZSPUDF1,NZSPUDF2:  
                        NZSPCDAT,NZSPCTIM,NZSPCUID,NZSPUDAT,NZSPUTIM,NZSPUUID:  
                        NZSPADTE,NZSPCONT,NZSPINVD,NZSPUNTH,NZSPSPAR            
          RETURN
.
WRNZSPR2  RESET     KEY17                                                       
          WRITE     NZPSPRA2,KEY17;NZSPADMN,NZSPCLMN,NZSPSURG,NZSPPROC,NZSPUNIQ:
                        NZSPCNTR,NZSPCPRC,NZSPPRIM,NZSPANAE,NZSPPDES,NZSPICAP:  
                        NZSPPIND,NZSPPINS,NZSPINSR,NZSPAPRV,NZSPAPSI,NZSPCLNO:  
                        NZSPAPNT,NZSPCMNT,NZSPTDUR,NZSPTFEE,NZSPFFEE,NZSPHPAY:  
                        NZSPCPAY,NZSPFADJ,NZSPHADJ,NZSPCADJ,NZSPUDF1,NZSPUDF2:  
                        NZSPCDAT,NZSPCTIM,NZSPCUID,NZSPUDAT,NZSPUTIM,NZSPUUID:  
                        NZSPADTE,NZSPCONT,NZSPINVD,NZSPUNTH,NZSPSPAR            
          RETURN
.
DENZSPR2  RESET     KEY17                                                       
          DELETE    NZPSPRA2,KEY17                                              
          RETURN
.
