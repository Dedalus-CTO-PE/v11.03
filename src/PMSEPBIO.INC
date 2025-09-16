.
. PMSEPBIO    
. --------
. Filename     : pmsepbaf.dat
.
RSPMEPB1  RESET     KEY20                                                       
          READ      PMSEPBA1,KEY20;;                                            
          RETURN
.
RAPMEPB1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEPBA1,KEY20;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMEPB1  RESET     KEY20                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEPBA1,KEY20;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMEPB1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSEPBA1;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:      
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMEPB1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSEPBA1;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:      
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMEPB1                                                                        
          UPDATE    PMSEPBA1;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:      
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          RETURN
.
WRPMEPB1  RESET     KEY20                                                       
          WRITE     PMSEPBA1,KEY20;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          RETURN
.
DEPMEPB1  RESET     KEY20                                                       
          DELETE    PMSEPBA1,KEY20                                              
          RETURN
.
RSPMEPB2  RESET     KEY28                                                       
          READ      PMSEPBA2,KEY28;;                                            
          RETURN
.
RAPMEPB2  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEPBA2,KEY28;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMEPB2  RESET     KEY28                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEPBA2,KEY28;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMEPB2                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSEPBA2;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:      
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMEPB2                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSEPBA2;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:      
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMEPB2                                                                        
          UPDATE    PMSEPBA2;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:      
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          RETURN
.
WRPMEPB2  RESET     KEY28                                                       
          WRITE     PMSEPBA2,KEY28;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          RETURN
.
DEPMEPB2  RESET     KEY28                                                       
          DELETE    PMSEPBA2,KEY28                                              
          RETURN
.
RSPMEPB3  RESET     KEY22                                                       
          READ      PMSEPBA3,KEY22;;                                            
          RETURN
.
RAPMEPB3  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEPBA3,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMEPB3  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEPBA3,KEY22;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMEPB3                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSEPBA3;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:      
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMEPB3                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSEPBA3;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:      
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMEPB3                                                                        
          UPDATE    PMSEPBA3;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:      
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          RETURN
.
WRPMEPB3  RESET     KEY22                                                       
          WRITE     PMSEPBA3,KEY22;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          RETURN
.
DEPMEPB3  RESET     KEY22                                                       
          DELETE    PMSEPBA3,KEY22                                              
          RETURN
.
RSPMEPB4  RESET     KEY22                                                       
          READ      PMSEPBA4,KEY22;;                                            
          RETURN
.
RAPMEPB4  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEPBA4,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMEPB4  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEPBA4,KEY22;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMEPB4                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSEPBA4;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:      
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMEPB4                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSEPBA4;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:      
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMEPB4                                                                        
          UPDATE    PMSEPBA4;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:      
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          RETURN
.
WRPMEPB4  RESET     KEY22                                                       
          WRITE     PMSEPBA4,KEY22;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          RETURN
.
DEPMEPB4  RESET     KEY22                                                       
          DELETE    PMSEPBA4,KEY22                                              
          RETURN
.
RSPMEPB5  RESET     KEY22                                                       
          READ      PMSEPBA5,KEY22;;                                            
          RETURN
.
RAPMEPB5  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEPBA5,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMEPB5  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEPBA5,KEY22;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMEPB5                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSEPBA5;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:      
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMEPB5                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSEPBA5;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:      
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMEPB5                                                                        
          UPDATE    PMSEPBA5;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:      
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          RETURN
.
WRPMEPB5  RESET     KEY22                                                       
          WRITE     PMSEPBA5,KEY22;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          RETURN
.
DEPMEPB5  RESET     KEY22                                                       
          DELETE    PMSEPBA5,KEY22                                              
          RETURN
.
RSPMEPB6  RESET     KEY22                                                       
          READ      PMSEPBA6,KEY22;;                                            
          RETURN
.
RAPMEPB6  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEPBA6,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMEPB6  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEPBA6,KEY22;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMEPB6                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSEPBA6;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:      
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMEPB6                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSEPBA6;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:      
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMEPB6                                                                        
          UPDATE    PMSEPBA6;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:      
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          RETURN
.
WRPMEPB6  RESET     KEY22                                                       
          WRITE     PMSEPBA6,KEY22;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          RETURN
.
DEPMEPB6  RESET     KEY22                                                       
          DELETE    PMSEPBA6,KEY22                                              
          RETURN
.
RSPMEPB7  RESET     KEY22                                                       
          READ      PMSEPBA7,KEY22;;                                            
          RETURN
.
RAPMEPB7  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEPBA7,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMEPB7  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEPBA7,KEY22;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMEPB7                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSEPBA7;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:      
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMEPB7                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSEPBA7;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:      
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMEPB7                                                                        
          UPDATE    PMSEPBA7;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:      
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          RETURN
.
WRPMEPB7  RESET     KEY22                                                       
          WRITE     PMSEPBA7,KEY22;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          RETURN
.
DEPMEPB7  RESET     KEY22                                                       
          DELETE    PMSEPBA7,KEY22                                              
          RETURN
.
RSPMEPB8  RESET     KEY36                                                       
          READ      PMSEPBA8,KEY36;;                                            
          RETURN
.
RAPMEPB8  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEPBA8,KEY36;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMEPB8  RESET     KEY36                                                       
          MOVE      ZERO,OVRCD
          READ      PMSEPBA8,KEY36;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMEPB8                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSEPBA8;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:      
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMEPB8                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSEPBA8;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:      
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMEPB8                                                                        
          UPDATE    PMSEPBA8;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:      
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          RETURN
.
WRPMEPB8  RESET     KEY36                                                       
          WRITE     PMSEPBA8,KEY36;PMEBHOSP,PMEBWARD,PMEBROOM,PMEBBEDD,PMEBSEQ1:
                        PMEBSEQ2,PMEBSEQ3,PMEBSEQ4,PMEBSEQ5,PMEBADMN,PMEBEDAT:  
                        PMEBETIM,PMEBEWRD,PMEBEBED,PMEBTBDT,PMEBTBTM,PMEBPOWD:  
                        PMEBPOBD,PMEBABRW,PMEBABRB,PMEBSURN,PMEBGIVN,PMEBBRPT:  
                        PMEBCEAS,PMEBURNO,PMEBGEND,PMEBWEBC,PMEBDATC,PMEBTIMC:  
                        PMEBWEBU,PMEBDATU,PMEBTIMU,PMEBSPAR                     
          RETURN
.
DEPMEPB8  RESET     KEY36                                                       
          DELETE    PMSEPBA8,KEY36                                              
          RETURN
.
