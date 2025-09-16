. *----------------------------------------------------------------------
. * Include Name  :   PMSLSTIO.INC
. *
. * Function      :   IO Routines Include for Patient System
. *                   Letter Selection List Index
. *
. * File Type     :   SQL
. *
. * File Name     :   pmslstaf.dat
. *
. * Modifications :   V9.02.01 30/08/2001 Dean Cramer                    
. *                                       Created.
. *
. *----------------------------------------------------------------------
.
RSPMLST1  RESET     KEY12                                                       
          READ      PMSLSTA1,KEY12;;                                            
          RETURN
.
RAPMLST1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PMSLSTA1,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDPMLST1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      PMSLSTA1,KEY12;PMLSSEID,PMLSADMN,PMLSDLST,PMLSSPAR          
          GOTO      OVERCOND IF OVER
          RETURN
.
RKPMLST1                                                                        
          MOVE      ZERO,OVRCD
          READKS    PMSLSTA1;PMLSSEID,PMLSADMN,PMLSDLST,PMLSSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPPMLST1                                                                        
          MOVE      ZERO,OVRCD
          READKP    PMSLSTA1;PMLSSEID,PMLSADMN,PMLSDLST,PMLSSPAR                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPPMLST1                                                                        
          UPDATE    PMSLSTA1;PMLSSEID,PMLSADMN,PMLSDLST,PMLSSPAR                
          GOTO      UPDFLOCK IF LOCKED
          RETURN
.
WRPMLST1  RESET     KEY12                                                       
          WRITE     PMSLSTA1,KEY12;PMLSSEID,PMLSADMN,PMLSDLST,PMLSSPAR          
          RETURN
.
DEPMLST1  RESET     KEY12                                                       
          DELETE    PMSLSTA1,KEY12                                              
          RETURN
.
RLPMLST1  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READL     PMSLSTA1,KEY12;PMLSSEID,PMLSADMN,PMLSDLST,PMLSSPAR          
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
KLPMLST1                                                                        
          MOVE      ZERO,OVRCD
          READLKS   PMSLSTA1;PMLSSEID,PMLSADMN,PMLSDLST,PMLSSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
PLPMLST1                                                                        
          MOVE      ZERO,OVRCD
          READLKP   PMSLSTA1;PMLSSEID,PMLSADMN,PMLSDLST,PMLSSPAR                
          GOTO      OVERCOND IF OVER
          GOTO      OVERLOCK IF LOCKED
          RETURN
.
UUPMLST1  RESET     KEY12                                                       
          UNLOCK    PMSLSTA1                                                    
          RETURN
.
