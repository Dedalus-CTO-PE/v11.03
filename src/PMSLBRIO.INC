.
. PMSLBRIO    
. --------
. Filename     : pmslbraf.dat
.
RSPMLBR1  RESET     KEY24                                                       
          READ      PMSLBRA1,KEY24;;                                            
          RETURN
.
RAPMLBR1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PMSLBRA1,KEY24;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMLBR1  RESET     KEY24                                                       
          MOVE      ZERO,OVRCD
          READ      PMSLBRA1,KEY24;PMLBUNIQ,PMLBADMN,PMLBCNTR,PMLBAUDC,PMLBONSL:
                        PMLBDATL,PMLBTIML,PMLBMIN1,PMLBDAT2,PMLBTIM2,PMLBMIN2:  
                        PMLBDATR,PMLBINDI,PMLBINDF,PMLBINDO,PMLBINOF,PMLBANLG:  
                        PMLBPOSD,PMLBCOLL,PMLBPRES,PMLBMEMB,PMLBNVES,PMLBTYPB:  
                        PMLBPROP,PMLBMAN3,PMLBPLAC,PMLBMPLA,PMLBEPIS,PMLBPERI:  
                        PMLBPERT,PMLBPERR,PMLBBLDL,PMLBBLTR,PMLBDLIC,PMLBDMID:  
                        PMLBDDOC,PMLBDANA,PMLBNUMB,PMLBMIDR,PMLBWEBC,PMLBDATC:  
                        PMLBTIMC,PMLBWEBU,PMLBDATU,PMLBTIMU,PMLBRECS,PMLBWEBD:  
                        PMLBDATD,PMLBTIMD,PMLBREAS,PMLBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMLBR1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSLBRA1;PMLBUNIQ,PMLBADMN,PMLBCNTR,PMLBAUDC,PMLBONSL:      
                        PMLBDATL,PMLBTIML,PMLBMIN1,PMLBDAT2,PMLBTIM2,PMLBMIN2:  
                        PMLBDATR,PMLBINDI,PMLBINDF,PMLBINDO,PMLBINOF,PMLBANLG:  
                        PMLBPOSD,PMLBCOLL,PMLBPRES,PMLBMEMB,PMLBNVES,PMLBTYPB:  
                        PMLBPROP,PMLBMAN3,PMLBPLAC,PMLBMPLA,PMLBEPIS,PMLBPERI:  
                        PMLBPERT,PMLBPERR,PMLBBLDL,PMLBBLTR,PMLBDLIC,PMLBDMID:  
                        PMLBDDOC,PMLBDANA,PMLBNUMB,PMLBMIDR,PMLBWEBC,PMLBDATC:  
                        PMLBTIMC,PMLBWEBU,PMLBDATU,PMLBTIMU,PMLBRECS,PMLBWEBD:  
                        PMLBDATD,PMLBTIMD,PMLBREAS,PMLBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMLBR1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSLBRA1;PMLBUNIQ,PMLBADMN,PMLBCNTR,PMLBAUDC,PMLBONSL:      
                        PMLBDATL,PMLBTIML,PMLBMIN1,PMLBDAT2,PMLBTIM2,PMLBMIN2:  
                        PMLBDATR,PMLBINDI,PMLBINDF,PMLBINDO,PMLBINOF,PMLBANLG:  
                        PMLBPOSD,PMLBCOLL,PMLBPRES,PMLBMEMB,PMLBNVES,PMLBTYPB:  
                        PMLBPROP,PMLBMAN3,PMLBPLAC,PMLBMPLA,PMLBEPIS,PMLBPERI:  
                        PMLBPERT,PMLBPERR,PMLBBLDL,PMLBBLTR,PMLBDLIC,PMLBDMID:  
                        PMLBDDOC,PMLBDANA,PMLBNUMB,PMLBMIDR,PMLBWEBC,PMLBDATC:  
                        PMLBTIMC,PMLBWEBU,PMLBDATU,PMLBTIMU,PMLBRECS,PMLBWEBD:  
                        PMLBDATD,PMLBTIMD,PMLBREAS,PMLBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMLBR1                                                                        
          UPDATE    PMSLBRA1;PMLBUNIQ,PMLBADMN,PMLBCNTR,PMLBAUDC,PMLBONSL:      
                        PMLBDATL,PMLBTIML,PMLBMIN1,PMLBDAT2,PMLBTIM2,PMLBMIN2:  
                        PMLBDATR,PMLBINDI,PMLBINDF,PMLBINDO,PMLBINOF,PMLBANLG:  
                        PMLBPOSD,PMLBCOLL,PMLBPRES,PMLBMEMB,PMLBNVES,PMLBTYPB:  
                        PMLBPROP,PMLBMAN3,PMLBPLAC,PMLBMPLA,PMLBEPIS,PMLBPERI:  
                        PMLBPERT,PMLBPERR,PMLBBLDL,PMLBBLTR,PMLBDLIC,PMLBDMID:  
                        PMLBDDOC,PMLBDANA,PMLBNUMB,PMLBMIDR,PMLBWEBC,PMLBDATC:  
                        PMLBTIMC,PMLBWEBU,PMLBDATU,PMLBTIMU,PMLBRECS,PMLBWEBD:  
                        PMLBDATD,PMLBTIMD,PMLBREAS,PMLBSPAR                     
          RETURN
.
WRPMLBR1  RESET     KEY24                                                       
          WRITE     PMSLBRA1,KEY24;PMLBUNIQ,PMLBADMN,PMLBCNTR,PMLBAUDC,PMLBONSL:
                        PMLBDATL,PMLBTIML,PMLBMIN1,PMLBDAT2,PMLBTIM2,PMLBMIN2:  
                        PMLBDATR,PMLBINDI,PMLBINDF,PMLBINDO,PMLBINOF,PMLBANLG:  
                        PMLBPOSD,PMLBCOLL,PMLBPRES,PMLBMEMB,PMLBNVES,PMLBTYPB:  
                        PMLBPROP,PMLBMAN3,PMLBPLAC,PMLBMPLA,PMLBEPIS,PMLBPERI:  
                        PMLBPERT,PMLBPERR,PMLBBLDL,PMLBBLTR,PMLBDLIC,PMLBDMID:  
                        PMLBDDOC,PMLBDANA,PMLBNUMB,PMLBMIDR,PMLBWEBC,PMLBDATC:  
                        PMLBTIMC,PMLBWEBU,PMLBDATU,PMLBTIMU,PMLBRECS,PMLBWEBD:  
                        PMLBDATD,PMLBTIMD,PMLBREAS,PMLBSPAR                     
          RETURN
.
DEPMLBR1  RESET     KEY24                                                       
          DELETE    PMSLBRA1,KEY24                                              
          RETURN
.
