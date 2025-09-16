.
. BOKCNFIO    
. --------
. Filename     : bokcnfaf.dat
.
RSBKCNF1  RESET     KEY8                                                        
          READ      BOKCNFA1,KEY8;;                                             
          RETURN
.
RABKCNF1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      BOKCNFA1,KEY8;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDBKCNF1  RESET     KEY8                                                        
          MOVE      ZERO,OVRCD
          READ      BOKCNFA1,KEY8;BKCFADMN,BKCFPCPW,BKCFRELP,BKCFPDTC,BKCFUIBA: 
                        BKCFUHAS,BKCFODCF,BKCFATCF,BKCFFITM,BKCFCANC,BKCFRCAN:  
                        BKCFAILL,BKCFAREG,BKCFCPOX,BKCFCREG,BKCFVDOT,BKCFVREG:  
                        BKCFHCON,BKCFCSPC,BKCFRLMH,BKCFMHAS,BKCFMHSP,BKCFMQUE:  
                        BKCFMREG,BKCFMQSP,BKCFALLG,BKCFAHAS,BKCFALSP,BKCFLCLT:  
                        BKCFFSAT,BKCFOVRN,BKCFWTIM,BKCFDADP,BKCFCNTN,BKCFPARK:  
                        BKCFCNST,BKCFWEBC,BKCFCDAT,BKCFCTIM,BKCFWEBU,BKCFUDAT:  
                        BKCFUTIM,BKCFSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RKBKCNF1                                                                        
          MOVE      ZERO,OVRCD
          READKS    BOKCNFA1;BKCFADMN,BKCFPCPW,BKCFRELP,BKCFPDTC,BKCFUIBA:      
                        BKCFUHAS,BKCFODCF,BKCFATCF,BKCFFITM,BKCFCANC,BKCFRCAN:  
                        BKCFAILL,BKCFAREG,BKCFCPOX,BKCFCREG,BKCFVDOT,BKCFVREG:  
                        BKCFHCON,BKCFCSPC,BKCFRLMH,BKCFMHAS,BKCFMHSP,BKCFMQUE:  
                        BKCFMREG,BKCFMQSP,BKCFALLG,BKCFAHAS,BKCFALSP,BKCFLCLT:  
                        BKCFFSAT,BKCFOVRN,BKCFWTIM,BKCFDADP,BKCFCNTN,BKCFPARK:  
                        BKCFCNST,BKCFWEBC,BKCFCDAT,BKCFCTIM,BKCFWEBU,BKCFUDAT:  
                        BKCFUTIM,BKCFSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
RPBKCNF1                                                                        
          MOVE      ZERO,OVRCD
          READKP    BOKCNFA1;BKCFADMN,BKCFPCPW,BKCFRELP,BKCFPDTC,BKCFUIBA:      
                        BKCFUHAS,BKCFODCF,BKCFATCF,BKCFFITM,BKCFCANC,BKCFRCAN:  
                        BKCFAILL,BKCFAREG,BKCFCPOX,BKCFCREG,BKCFVDOT,BKCFVREG:  
                        BKCFHCON,BKCFCSPC,BKCFRLMH,BKCFMHAS,BKCFMHSP,BKCFMQUE:  
                        BKCFMREG,BKCFMQSP,BKCFALLG,BKCFAHAS,BKCFALSP,BKCFLCLT:  
                        BKCFFSAT,BKCFOVRN,BKCFWTIM,BKCFDADP,BKCFCNTN,BKCFPARK:  
                        BKCFCNST,BKCFWEBC,BKCFCDAT,BKCFCTIM,BKCFWEBU,BKCFUDAT:  
                        BKCFUTIM,BKCFSPAR                                       
          GOTO      OVERCOND IF OVER
          RETURN
.
UPBKCNF1                                                                        
          UPDATE    BOKCNFA1;BKCFADMN,BKCFPCPW,BKCFRELP,BKCFPDTC,BKCFUIBA:      
                        BKCFUHAS,BKCFODCF,BKCFATCF,BKCFFITM,BKCFCANC,BKCFRCAN:  
                        BKCFAILL,BKCFAREG,BKCFCPOX,BKCFCREG,BKCFVDOT,BKCFVREG:  
                        BKCFHCON,BKCFCSPC,BKCFRLMH,BKCFMHAS,BKCFMHSP,BKCFMQUE:  
                        BKCFMREG,BKCFMQSP,BKCFALLG,BKCFAHAS,BKCFALSP,BKCFLCLT:  
                        BKCFFSAT,BKCFOVRN,BKCFWTIM,BKCFDADP,BKCFCNTN,BKCFPARK:  
                        BKCFCNST,BKCFWEBC,BKCFCDAT,BKCFCTIM,BKCFWEBU,BKCFUDAT:  
                        BKCFUTIM,BKCFSPAR                                       
          RETURN
.
WRBKCNF1  RESET     KEY8                                                        
          WRITE     BOKCNFA1,KEY8;BKCFADMN,BKCFPCPW,BKCFRELP,BKCFPDTC,BKCFUIBA: 
                        BKCFUHAS,BKCFODCF,BKCFATCF,BKCFFITM,BKCFCANC,BKCFRCAN:  
                        BKCFAILL,BKCFAREG,BKCFCPOX,BKCFCREG,BKCFVDOT,BKCFVREG:  
                        BKCFHCON,BKCFCSPC,BKCFRLMH,BKCFMHAS,BKCFMHSP,BKCFMQUE:  
                        BKCFMREG,BKCFMQSP,BKCFALLG,BKCFAHAS,BKCFALSP,BKCFLCLT:  
                        BKCFFSAT,BKCFOVRN,BKCFWTIM,BKCFDADP,BKCFCNTN,BKCFPARK:  
                        BKCFCNST,BKCFWEBC,BKCFCDAT,BKCFCTIM,BKCFWEBU,BKCFUDAT:  
                        BKCFUTIM,BKCFSPAR                                       
          RETURN
.
DEBKCNF1  RESET     KEY8                                                        
          DELETE    BOKCNFA1,KEY8                                               
          RETURN
.
