.
. CCIXGPIO    
. --------
. Filename     : ccixgpaf.dat
.
RSCCXGP1  RESET     KEY49                                                       
          READ      CCIXGPA1,KEY49;;                                            
          RETURN
.
RACCXGP1  RESET     KEY49                                                       
          MOVE      ZERO,OVRCD
          READ      CCIXGPA1,KEY49;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCCXGP1  RESET     KEY49                                                       
          MOVE      ZERO,OVRCD
          READ      CCIXGPA1,KEY49;CCXPPRID,CCXPSCID,CCXPUNIQ,CCXPCOD1,CCXPCOD2:
                                   CCXPCOD3,CCXPCOD4,CCXPPROC,CCXPQNTY,CCXPSPAR
          GOTO      OVERCOND IF OVER
          RETURN
.
RKCCXGP1  MOVE      ZERO,OVRCD
          READKS    CCIXGPA1;CCXPPRID,CCXPSCID,CCXPUNIQ,CCXPCOD1,CCXPCOD2:
                             CCXPCOD3,CCXPCOD4,CCXPPROC,CCXPQNTY,CCXPSPAR
          GOTO      OVERCOND IF OVER
          RETURN 
.
RPCCXGP1  MOVE      ZERO,OVRCD
          READKP    CCIXGPA1;CCXPPRID,CCXPSCID,CCXPUNIQ,CCXPCOD1,CCXPCOD2:
                             CCXPCOD3,CCXPCOD4,CCXPPROC,CCXPQNTY,CCXPSPAR    
          GOTO      OVERCOND IF OVER
          RETURN
.
UPCCXGP1  UPDATE    CCIXGPA1;CCXPPRID,CCXPSCID,CCXPUNIQ,CCXPCOD1,CCXPCOD2:
                             CCXPCOD3,CCXPCOD4,CCXPPROC,CCXPQNTY,CCXPSPAR   
          RETURN
.
WRCCXGP1  RESET     KEY49                                                       
          WRITE     CCIXGPA1,KEY49;CCXPPRID,CCXPSCID,CCXPUNIQ,CCXPCOD1,CCXPCOD2:
                                   CCXPCOD3,CCXPCOD4,CCXPPROC,CCXPQNTY,CCXPSPAR
          RETURN
.
DECCXGP1  RESET     KEY49                                                       
          DELETE    CCIXGPA1,KEY49                                              
          RETURN
.
