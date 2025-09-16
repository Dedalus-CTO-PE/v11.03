.
. BOKRQ1IO    
. --------
. Filename     : bokrq1af.dat
.
RSBKRQ11  RESET     KEY10                                                       
          READ      BOKRQ1A1,KEY10;;                                            
          RETURN
.
RABKRQ11  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      BOKRQ1A1,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDBKRQ11  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      BOKRQ1A1,KEY10;BKRQURNO,BKRQVISN,BKRQBKTY,BKRQREQN,BKRQSTAT:
                        BKRQHOSP,BKRQPRIO,BKRQSNAM,BKRQGNAM,BKRQBDAT,BKRQGEND:  
                        BKRQRDOC,BKRQUNIT,BKRQCSDT,BKRQCSTM,BKRQCTCT,BKRQLOCN:  
                        BKRQADPT,BKRQEPOW,BKRQSURG,BKRQTHET,BKRQANAE,BKRQMBS1:  
                        BKRQMBS2,BKRQMBS3,BKRQMBD1,BKRQMBD2,BKRQMBD3,BKRQPROR:  
                        BKRQDURA,BKRQINFC,BKRQEQU1,BKRQEQU2,BKRQEQU3,BKRQCDAT:  
                        BKRQCTIM,BKRQCUSR,BKRQUDAT,BKRQUTIM,BKRQUUSR,BKRQCNDT:  
                        BKRQCNTM,BKRQCNUS,BKRQCNCD,BKRQOPTY,BKRQTRCD,BKRQATCD:  
                        BKRQATYP,BKRQCTYP,BKRQELOS,BKRQCTY6,BKRQCTY7,BKRQCTY8:  
                        BKRQCTY9,BKRQASRC,BKRQBTYP,BKRQELON,BKRQCSNT,BKRQCCDT:  
                        BKRQSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKBKRQ11  MOVE      ZERO,OVRCD                                                  
          READKS    BOKRQ1A1;BKRQURNO,BKRQVISN,BKRQBKTY,BKRQREQN,BKRQSTAT:      
                        BKRQHOSP,BKRQPRIO,BKRQSNAM,BKRQGNAM,BKRQBDAT,BKRQGEND:  
                        BKRQRDOC,BKRQUNIT,BKRQCSDT,BKRQCSTM,BKRQCTCT,BKRQLOCN:  
                        BKRQADPT,BKRQEPOW,BKRQSURG,BKRQTHET,BKRQANAE,BKRQMBS1:  
                        BKRQMBS2,BKRQMBS3,BKRQMBD1,BKRQMBD2,BKRQMBD3,BKRQPROR:  
                        BKRQDURA,BKRQINFC,BKRQEQU1,BKRQEQU2,BKRQEQU3,BKRQCDAT:  
                        BKRQCTIM,BKRQCUSR,BKRQUDAT,BKRQUTIM,BKRQUUSR,BKRQCNDT:  
                        BKRQCNTM,BKRQCNUS,BKRQCNCD,BKRQOPTY,BKRQTRCD,BKRQATCD:  
                        BKRQATYP,BKRQCTYP,BKRQELOS,BKRQCTY6,BKRQCTY7,BKRQCTY8:  
                        BKRQCTY9,BKRQASRC,BKRQBTYP,BKRQELON,BKRQCSNT,BKRQCCDT:  
                        BKRQSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPBKRQ11  MOVE      ZERO,OVRCD                                                  
          READKP    BOKRQ1A1;BKRQURNO,BKRQVISN,BKRQBKTY,BKRQREQN,BKRQSTAT:      
                        BKRQHOSP,BKRQPRIO,BKRQSNAM,BKRQGNAM,BKRQBDAT,BKRQGEND:  
                        BKRQRDOC,BKRQUNIT,BKRQCSDT,BKRQCSTM,BKRQCTCT,BKRQLOCN:  
                        BKRQADPT,BKRQEPOW,BKRQSURG,BKRQTHET,BKRQANAE,BKRQMBS1:  
                        BKRQMBS2,BKRQMBS3,BKRQMBD1,BKRQMBD2,BKRQMBD3,BKRQPROR:  
                        BKRQDURA,BKRQINFC,BKRQEQU1,BKRQEQU2,BKRQEQU3,BKRQCDAT:  
                        BKRQCTIM,BKRQCUSR,BKRQUDAT,BKRQUTIM,BKRQUUSR,BKRQCNDT:  
                        BKRQCNTM,BKRQCNUS,BKRQCNCD,BKRQOPTY,BKRQTRCD,BKRQATCD:  
                        BKRQATYP,BKRQCTYP,BKRQELOS,BKRQCTY6,BKRQCTY7,BKRQCTY8:  
                        BKRQCTY9,BKRQASRC,BKRQBTYP,BKRQELON,BKRQCSNT,BKRQCCDT:  
                        BKRQSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPBKRQ11  MOVE      ZERO,OVRCD                                                  
          UPDATE    BOKRQ1A1;BKRQURNO,BKRQVISN,BKRQBKTY,BKRQREQN,BKRQSTAT:      
                        BKRQHOSP,BKRQPRIO,BKRQSNAM,BKRQGNAM,BKRQBDAT,BKRQGEND:  
                        BKRQRDOC,BKRQUNIT,BKRQCSDT,BKRQCSTM,BKRQCTCT,BKRQLOCN:  
                        BKRQADPT,BKRQEPOW,BKRQSURG,BKRQTHET,BKRQANAE,BKRQMBS1:  
                        BKRQMBS2,BKRQMBS3,BKRQMBD1,BKRQMBD2,BKRQMBD3,BKRQPROR:  
                        BKRQDURA,BKRQINFC,BKRQEQU1,BKRQEQU2,BKRQEQU3,BKRQCDAT:  
                        BKRQCTIM,BKRQCUSR,BKRQUDAT,BKRQUTIM,BKRQUUSR,BKRQCNDT:  
                        BKRQCNTM,BKRQCNUS,BKRQCNCD,BKRQOPTY,BKRQTRCD,BKRQATCD:  
                        BKRQATYP,BKRQCTYP,BKRQELOS,BKRQCTY6,BKRQCTY7,BKRQCTY8:  
                        BKRQCTY9,BKRQASRC,BKRQBTYP,BKRQELON,BKRQCSNT,BKRQCCDT:  
                        BKRQSPAR                                                
          RETURN
.
WRBKRQ11  RESET     KEY10                                                       
          WRITE     BOKRQ1A1,KEY10;BKRQURNO,BKRQVISN,BKRQBKTY,BKRQREQN,BKRQSTAT:
                        BKRQHOSP,BKRQPRIO,BKRQSNAM,BKRQGNAM,BKRQBDAT,BKRQGEND:  
                        BKRQRDOC,BKRQUNIT,BKRQCSDT,BKRQCSTM,BKRQCTCT,BKRQLOCN:  
                        BKRQADPT,BKRQEPOW,BKRQSURG,BKRQTHET,BKRQANAE,BKRQMBS1:  
                        BKRQMBS2,BKRQMBS3,BKRQMBD1,BKRQMBD2,BKRQMBD3,BKRQPROR:  
                        BKRQDURA,BKRQINFC,BKRQEQU1,BKRQEQU2,BKRQEQU3,BKRQCDAT:  
                        BKRQCTIM,BKRQCUSR,BKRQUDAT,BKRQUTIM,BKRQUUSR,BKRQCNDT:  
                        BKRQCNTM,BKRQCNUS,BKRQCNCD,BKRQOPTY,BKRQTRCD,BKRQATCD:  
                        BKRQATYP,BKRQCTYP,BKRQELOS,BKRQCTY6,BKRQCTY7,BKRQCTY8:  
                        BKRQCTY9,BKRQASRC,BKRQBTYP,BKRQELON,BKRQCSNT,BKRQCCDT:  
                        BKRQSPAR                                                
          RETURN
.
DEBKRQ11  RESET     KEY10                                                       
          DELETE    BOKRQ1A1,KEY10                                              
          RETURN
.
RSBKRQ12  RESET     KEY18                                                       
          READ      BOKRQ1A2,KEY18;;                                            
          RETURN
.
RABKRQ12  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      BOKRQ1A2,KEY18;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDBKRQ12  RESET     KEY18                                                       
          MOVE      ZERO,OVRCD
          READ      BOKRQ1A2,KEY18;BKRQURNO,BKRQVISN,BKRQBKTY,BKRQREQN,BKRQSTAT:
                        BKRQHOSP,BKRQPRIO,BKRQSNAM,BKRQGNAM,BKRQBDAT,BKRQGEND:  
                        BKRQRDOC,BKRQUNIT,BKRQCSDT,BKRQCSTM,BKRQCTCT,BKRQLOCN:  
                        BKRQADPT,BKRQEPOW,BKRQSURG,BKRQTHET,BKRQANAE,BKRQMBS1:  
                        BKRQMBS2,BKRQMBS3,BKRQMBD1,BKRQMBD2,BKRQMBD3,BKRQPROR:  
                        BKRQDURA,BKRQINFC,BKRQEQU1,BKRQEQU2,BKRQEQU3,BKRQCDAT:  
                        BKRQCTIM,BKRQCUSR,BKRQUDAT,BKRQUTIM,BKRQUUSR,BKRQCNDT:  
                        BKRQCNTM,BKRQCNUS,BKRQCNCD,BKRQOPTY,BKRQTRCD,BKRQATCD:  
                        BKRQATYP,BKRQCTYP,BKRQELOS,BKRQCTY6,BKRQCTY7,BKRQCTY8:  
                        BKRQCTY9,BKRQASRC,BKRQBTYP,BKRQELON,BKRQCSNT,BKRQCCDT:  
                        BKRQSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKBKRQ12  MOVE      ZERO,OVRCD                                                  
          READKS    BOKRQ1A2;BKRQURNO,BKRQVISN,BKRQBKTY,BKRQREQN,BKRQSTAT:      
                        BKRQHOSP,BKRQPRIO,BKRQSNAM,BKRQGNAM,BKRQBDAT,BKRQGEND:  
                        BKRQRDOC,BKRQUNIT,BKRQCSDT,BKRQCSTM,BKRQCTCT,BKRQLOCN:  
                        BKRQADPT,BKRQEPOW,BKRQSURG,BKRQTHET,BKRQANAE,BKRQMBS1:  
                        BKRQMBS2,BKRQMBS3,BKRQMBD1,BKRQMBD2,BKRQMBD3,BKRQPROR:  
                        BKRQDURA,BKRQINFC,BKRQEQU1,BKRQEQU2,BKRQEQU3,BKRQCDAT:  
                        BKRQCTIM,BKRQCUSR,BKRQUDAT,BKRQUTIM,BKRQUUSR,BKRQCNDT:  
                        BKRQCNTM,BKRQCNUS,BKRQCNCD,BKRQOPTY,BKRQTRCD,BKRQATCD:  
                        BKRQATYP,BKRQCTYP,BKRQELOS,BKRQCTY6,BKRQCTY7,BKRQCTY8:  
                        BKRQCTY9,BKRQASRC,BKRQBTYP,BKRQELON,BKRQCSNT,BKRQCCDT:  
                        BKRQSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPBKRQ12  MOVE      ZERO,OVRCD                                                  
          READKP    BOKRQ1A2;BKRQURNO,BKRQVISN,BKRQBKTY,BKRQREQN,BKRQSTAT:      
                        BKRQHOSP,BKRQPRIO,BKRQSNAM,BKRQGNAM,BKRQBDAT,BKRQGEND:  
                        BKRQRDOC,BKRQUNIT,BKRQCSDT,BKRQCSTM,BKRQCTCT,BKRQLOCN:  
                        BKRQADPT,BKRQEPOW,BKRQSURG,BKRQTHET,BKRQANAE,BKRQMBS1:  
                        BKRQMBS2,BKRQMBS3,BKRQMBD1,BKRQMBD2,BKRQMBD3,BKRQPROR:  
                        BKRQDURA,BKRQINFC,BKRQEQU1,BKRQEQU2,BKRQEQU3,BKRQCDAT:  
                        BKRQCTIM,BKRQCUSR,BKRQUDAT,BKRQUTIM,BKRQUUSR,BKRQCNDT:  
                        BKRQCNTM,BKRQCNUS,BKRQCNCD,BKRQOPTY,BKRQTRCD,BKRQATCD:  
                        BKRQATYP,BKRQCTYP,BKRQELOS,BKRQCTY6,BKRQCTY7,BKRQCTY8:  
                        BKRQCTY9,BKRQASRC,BKRQBTYP,BKRQELON,BKRQCSNT,BKRQCCDT:  
                        BKRQSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPBKRQ12  MOVE      ZERO,OVRCD                                                  
          UPDATE    BOKRQ1A2;BKRQURNO,BKRQVISN,BKRQBKTY,BKRQREQN,BKRQSTAT:      
                        BKRQHOSP,BKRQPRIO,BKRQSNAM,BKRQGNAM,BKRQBDAT,BKRQGEND:  
                        BKRQRDOC,BKRQUNIT,BKRQCSDT,BKRQCSTM,BKRQCTCT,BKRQLOCN:  
                        BKRQADPT,BKRQEPOW,BKRQSURG,BKRQTHET,BKRQANAE,BKRQMBS1:  
                        BKRQMBS2,BKRQMBS3,BKRQMBD1,BKRQMBD2,BKRQMBD3,BKRQPROR:  
                        BKRQDURA,BKRQINFC,BKRQEQU1,BKRQEQU2,BKRQEQU3,BKRQCDAT:  
                        BKRQCTIM,BKRQCUSR,BKRQUDAT,BKRQUTIM,BKRQUUSR,BKRQCNDT:  
                        BKRQCNTM,BKRQCNUS,BKRQCNCD,BKRQOPTY,BKRQTRCD,BKRQATCD:  
                        BKRQATYP,BKRQCTYP,BKRQELOS,BKRQCTY6,BKRQCTY7,BKRQCTY8:  
                        BKRQCTY9,BKRQASRC,BKRQBTYP,BKRQELON,BKRQCSNT,BKRQCCDT:  
                        BKRQSPAR                                                
          RETURN
.
WRBKRQ12  RESET     KEY18                                                       
          WRITE     BOKRQ1A2,KEY18;BKRQURNO,BKRQVISN,BKRQBKTY,BKRQREQN,BKRQSTAT:
                        BKRQHOSP,BKRQPRIO,BKRQSNAM,BKRQGNAM,BKRQBDAT,BKRQGEND:  
                        BKRQRDOC,BKRQUNIT,BKRQCSDT,BKRQCSTM,BKRQCTCT,BKRQLOCN:  
                        BKRQADPT,BKRQEPOW,BKRQSURG,BKRQTHET,BKRQANAE,BKRQMBS1:  
                        BKRQMBS2,BKRQMBS3,BKRQMBD1,BKRQMBD2,BKRQMBD3,BKRQPROR:  
                        BKRQDURA,BKRQINFC,BKRQEQU1,BKRQEQU2,BKRQEQU3,BKRQCDAT:  
                        BKRQCTIM,BKRQCUSR,BKRQUDAT,BKRQUTIM,BKRQUUSR,BKRQCNDT:  
                        BKRQCNTM,BKRQCNUS,BKRQCNCD,BKRQOPTY,BKRQTRCD,BKRQATCD:  
                        BKRQATYP,BKRQCTYP,BKRQELOS,BKRQCTY6,BKRQCTY7,BKRQCTY8:  
                        BKRQCTY9,BKRQASRC,BKRQBTYP,BKRQELON,BKRQCSNT,BKRQCCDT:  
                        BKRQSPAR                                                
          RETURN
.
DEBKRQ12  RESET     KEY18                                                       
          DELETE    BOKRQ1A2,KEY18                                              
          RETURN
.
RSBKRQ13  RESET     KEY21                                                       
          READ      BOKRQ1A3,KEY21;;                                            
          RETURN
.
RABKRQ13  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      BOKRQ1A3,KEY21;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDBKRQ13  RESET     KEY21                                                       
          MOVE      ZERO,OVRCD
          READ      BOKRQ1A3,KEY21;BKRQURNO,BKRQVISN,BKRQBKTY,BKRQREQN,BKRQSTAT:
                        BKRQHOSP,BKRQPRIO,BKRQSNAM,BKRQGNAM,BKRQBDAT,BKRQGEND:  
                        BKRQRDOC,BKRQUNIT,BKRQCSDT,BKRQCSTM,BKRQCTCT,BKRQLOCN:  
                        BKRQADPT,BKRQEPOW,BKRQSURG,BKRQTHET,BKRQANAE,BKRQMBS1:  
                        BKRQMBS2,BKRQMBS3,BKRQMBD1,BKRQMBD2,BKRQMBD3,BKRQPROR:  
                        BKRQDURA,BKRQINFC,BKRQEQU1,BKRQEQU2,BKRQEQU3,BKRQCDAT:  
                        BKRQCTIM,BKRQCUSR,BKRQUDAT,BKRQUTIM,BKRQUUSR,BKRQCNDT:  
                        BKRQCNTM,BKRQCNUS,BKRQCNCD,BKRQOPTY,BKRQTRCD,BKRQATCD:  
                        BKRQATYP,BKRQCTYP,BKRQELOS,BKRQCTY6,BKRQCTY7,BKRQCTY8:  
                        BKRQCTY9,BKRQASRC,BKRQBTYP,BKRQELON,BKRQCSNT,BKRQCCDT:  
                        BKRQSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKBKRQ13  MOVE      ZERO,OVRCD                                                  
          READKS    BOKRQ1A3;BKRQURNO,BKRQVISN,BKRQBKTY,BKRQREQN,BKRQSTAT:      
                        BKRQHOSP,BKRQPRIO,BKRQSNAM,BKRQGNAM,BKRQBDAT,BKRQGEND:  
                        BKRQRDOC,BKRQUNIT,BKRQCSDT,BKRQCSTM,BKRQCTCT,BKRQLOCN:  
                        BKRQADPT,BKRQEPOW,BKRQSURG,BKRQTHET,BKRQANAE,BKRQMBS1:  
                        BKRQMBS2,BKRQMBS3,BKRQMBD1,BKRQMBD2,BKRQMBD3,BKRQPROR:  
                        BKRQDURA,BKRQINFC,BKRQEQU1,BKRQEQU2,BKRQEQU3,BKRQCDAT:  
                        BKRQCTIM,BKRQCUSR,BKRQUDAT,BKRQUTIM,BKRQUUSR,BKRQCNDT:  
                        BKRQCNTM,BKRQCNUS,BKRQCNCD,BKRQOPTY,BKRQTRCD,BKRQATCD:  
                        BKRQATYP,BKRQCTYP,BKRQELOS,BKRQCTY6,BKRQCTY7,BKRQCTY8:  
                        BKRQCTY9,BKRQASRC,BKRQBTYP,BKRQELON,BKRQCSNT,BKRQCCDT:  
                        BKRQSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPBKRQ13  MOVE      ZERO,OVRCD                                                  
          READKP    BOKRQ1A3;BKRQURNO,BKRQVISN,BKRQBKTY,BKRQREQN,BKRQSTAT:      
                        BKRQHOSP,BKRQPRIO,BKRQSNAM,BKRQGNAM,BKRQBDAT,BKRQGEND:  
                        BKRQRDOC,BKRQUNIT,BKRQCSDT,BKRQCSTM,BKRQCTCT,BKRQLOCN:  
                        BKRQADPT,BKRQEPOW,BKRQSURG,BKRQTHET,BKRQANAE,BKRQMBS1:  
                        BKRQMBS2,BKRQMBS3,BKRQMBD1,BKRQMBD2,BKRQMBD3,BKRQPROR:  
                        BKRQDURA,BKRQINFC,BKRQEQU1,BKRQEQU2,BKRQEQU3,BKRQCDAT:  
                        BKRQCTIM,BKRQCUSR,BKRQUDAT,BKRQUTIM,BKRQUUSR,BKRQCNDT:  
                        BKRQCNTM,BKRQCNUS,BKRQCNCD,BKRQOPTY,BKRQTRCD,BKRQATCD:  
                        BKRQATYP,BKRQCTYP,BKRQELOS,BKRQCTY6,BKRQCTY7,BKRQCTY8:  
                        BKRQCTY9,BKRQASRC,BKRQBTYP,BKRQELON,BKRQCSNT,BKRQCCDT:  
                        BKRQSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPBKRQ13  MOVE      ZERO,OVRCD                                                  
          UPDATE    BOKRQ1A3;BKRQURNO,BKRQVISN,BKRQBKTY,BKRQREQN,BKRQSTAT:      
                        BKRQHOSP,BKRQPRIO,BKRQSNAM,BKRQGNAM,BKRQBDAT,BKRQGEND:  
                        BKRQRDOC,BKRQUNIT,BKRQCSDT,BKRQCSTM,BKRQCTCT,BKRQLOCN:  
                        BKRQADPT,BKRQEPOW,BKRQSURG,BKRQTHET,BKRQANAE,BKRQMBS1:  
                        BKRQMBS2,BKRQMBS3,BKRQMBD1,BKRQMBD2,BKRQMBD3,BKRQPROR:  
                        BKRQDURA,BKRQINFC,BKRQEQU1,BKRQEQU2,BKRQEQU3,BKRQCDAT:  
                        BKRQCTIM,BKRQCUSR,BKRQUDAT,BKRQUTIM,BKRQUUSR,BKRQCNDT:  
                        BKRQCNTM,BKRQCNUS,BKRQCNCD,BKRQOPTY,BKRQTRCD,BKRQATCD:  
                        BKRQATYP,BKRQCTYP,BKRQELOS,BKRQCTY6,BKRQCTY7,BKRQCTY8:  
                        BKRQCTY9,BKRQASRC,BKRQBTYP,BKRQELON,BKRQCSNT,BKRQCCDT:  
                        BKRQSPAR                                                
          RETURN
.
WRBKRQ13  RESET     KEY21                                                       
          WRITE     BOKRQ1A3,KEY21;BKRQURNO,BKRQVISN,BKRQBKTY,BKRQREQN,BKRQSTAT:
                        BKRQHOSP,BKRQPRIO,BKRQSNAM,BKRQGNAM,BKRQBDAT,BKRQGEND:  
                        BKRQRDOC,BKRQUNIT,BKRQCSDT,BKRQCSTM,BKRQCTCT,BKRQLOCN:  
                        BKRQADPT,BKRQEPOW,BKRQSURG,BKRQTHET,BKRQANAE,BKRQMBS1:  
                        BKRQMBS2,BKRQMBS3,BKRQMBD1,BKRQMBD2,BKRQMBD3,BKRQPROR:  
                        BKRQDURA,BKRQINFC,BKRQEQU1,BKRQEQU2,BKRQEQU3,BKRQCDAT:  
                        BKRQCTIM,BKRQCUSR,BKRQUDAT,BKRQUTIM,BKRQUUSR,BKRQCNDT:  
                        BKRQCNTM,BKRQCNUS,BKRQCNCD,BKRQOPTY,BKRQTRCD,BKRQATCD:  
                        BKRQATYP,BKRQCTYP,BKRQELOS,BKRQCTY6,BKRQCTY7,BKRQCTY8:  
                        BKRQCTY9,BKRQASRC,BKRQBTYP,BKRQELON,BKRQCSNT,BKRQCCDT:  
                        BKRQSPAR                                                
          RETURN
.
DEBKRQ13  RESET     KEY21                                                       
          DELETE    BOKRQ1A3,KEY21                                              
          RETURN
.
RSBKRQ14  RESET     KEY19                                                       
          READ      BOKRQ1A4,KEY19;;                                            
          RETURN
.
RABKRQ14  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      BOKRQ1A4,KEY19;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDBKRQ14  RESET     KEY19                                                       
          MOVE      ZERO,OVRCD
          READ      BOKRQ1A4,KEY19;BKRQURNO,BKRQVISN,BKRQBKTY,BKRQREQN,BKRQSTAT:
                        BKRQHOSP,BKRQPRIO,BKRQSNAM,BKRQGNAM,BKRQBDAT,BKRQGEND:  
                        BKRQRDOC,BKRQUNIT,BKRQCSDT,BKRQCSTM,BKRQCTCT,BKRQLOCN:  
                        BKRQADPT,BKRQEPOW,BKRQSURG,BKRQTHET,BKRQANAE,BKRQMBS1:  
                        BKRQMBS2,BKRQMBS3,BKRQMBD1,BKRQMBD2,BKRQMBD3,BKRQPROR:  
                        BKRQDURA,BKRQINFC,BKRQEQU1,BKRQEQU2,BKRQEQU3,BKRQCDAT:  
                        BKRQCTIM,BKRQCUSR,BKRQUDAT,BKRQUTIM,BKRQUUSR,BKRQCNDT:  
                        BKRQCNTM,BKRQCNUS,BKRQCNCD,BKRQOPTY,BKRQTRCD,BKRQATCD:  
                        BKRQATYP,BKRQCTYP,BKRQELOS,BKRQCTY6,BKRQCTY7,BKRQCTY8:  
                        BKRQCTY9,BKRQASRC,BKRQBTYP,BKRQELON,BKRQCSNT,BKRQCCDT:  
                        BKRQSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKBKRQ14  MOVE      ZERO,OVRCD                                                  
          READKS    BOKRQ1A4;BKRQURNO,BKRQVISN,BKRQBKTY,BKRQREQN,BKRQSTAT:      
                        BKRQHOSP,BKRQPRIO,BKRQSNAM,BKRQGNAM,BKRQBDAT,BKRQGEND:  
                        BKRQRDOC,BKRQUNIT,BKRQCSDT,BKRQCSTM,BKRQCTCT,BKRQLOCN:  
                        BKRQADPT,BKRQEPOW,BKRQSURG,BKRQTHET,BKRQANAE,BKRQMBS1:  
                        BKRQMBS2,BKRQMBS3,BKRQMBD1,BKRQMBD2,BKRQMBD3,BKRQPROR:  
                        BKRQDURA,BKRQINFC,BKRQEQU1,BKRQEQU2,BKRQEQU3,BKRQCDAT:  
                        BKRQCTIM,BKRQCUSR,BKRQUDAT,BKRQUTIM,BKRQUUSR,BKRQCNDT:  
                        BKRQCNTM,BKRQCNUS,BKRQCNCD,BKRQOPTY,BKRQTRCD,BKRQATCD:  
                        BKRQATYP,BKRQCTYP,BKRQELOS,BKRQCTY6,BKRQCTY7,BKRQCTY8:  
                        BKRQCTY9,BKRQASRC,BKRQBTYP,BKRQELON,BKRQCSNT,BKRQCCDT:  
                        BKRQSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPBKRQ14  MOVE      ZERO,OVRCD                                                  
          READKP    BOKRQ1A4;BKRQURNO,BKRQVISN,BKRQBKTY,BKRQREQN,BKRQSTAT:      
                        BKRQHOSP,BKRQPRIO,BKRQSNAM,BKRQGNAM,BKRQBDAT,BKRQGEND:  
                        BKRQRDOC,BKRQUNIT,BKRQCSDT,BKRQCSTM,BKRQCTCT,BKRQLOCN:  
                        BKRQADPT,BKRQEPOW,BKRQSURG,BKRQTHET,BKRQANAE,BKRQMBS1:  
                        BKRQMBS2,BKRQMBS3,BKRQMBD1,BKRQMBD2,BKRQMBD3,BKRQPROR:  
                        BKRQDURA,BKRQINFC,BKRQEQU1,BKRQEQU2,BKRQEQU3,BKRQCDAT:  
                        BKRQCTIM,BKRQCUSR,BKRQUDAT,BKRQUTIM,BKRQUUSR,BKRQCNDT:  
                        BKRQCNTM,BKRQCNUS,BKRQCNCD,BKRQOPTY,BKRQTRCD,BKRQATCD:  
                        BKRQATYP,BKRQCTYP,BKRQELOS,BKRQCTY6,BKRQCTY7,BKRQCTY8:  
                        BKRQCTY9,BKRQASRC,BKRQBTYP,BKRQELON,BKRQCSNT,BKRQCCDT:  
                        BKRQSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPBKRQ14  MOVE      ZERO,OVRCD                                                  
          UPDATE    BOKRQ1A4;BKRQURNO,BKRQVISN,BKRQBKTY,BKRQREQN,BKRQSTAT:      
                        BKRQHOSP,BKRQPRIO,BKRQSNAM,BKRQGNAM,BKRQBDAT,BKRQGEND:  
                        BKRQRDOC,BKRQUNIT,BKRQCSDT,BKRQCSTM,BKRQCTCT,BKRQLOCN:  
                        BKRQADPT,BKRQEPOW,BKRQSURG,BKRQTHET,BKRQANAE,BKRQMBS1:  
                        BKRQMBS2,BKRQMBS3,BKRQMBD1,BKRQMBD2,BKRQMBD3,BKRQPROR:  
                        BKRQDURA,BKRQINFC,BKRQEQU1,BKRQEQU2,BKRQEQU3,BKRQCDAT:  
                        BKRQCTIM,BKRQCUSR,BKRQUDAT,BKRQUTIM,BKRQUUSR,BKRQCNDT:  
                        BKRQCNTM,BKRQCNUS,BKRQCNCD,BKRQOPTY,BKRQTRCD,BKRQATCD:  
                        BKRQATYP,BKRQCTYP,BKRQELOS,BKRQCTY6,BKRQCTY7,BKRQCTY8:  
                        BKRQCTY9,BKRQASRC,BKRQBTYP,BKRQELON,BKRQCSNT,BKRQCCDT:  
                        BKRQSPAR                                                
          RETURN
.
WRBKRQ14  RESET     KEY19                                                       
          WRITE     BOKRQ1A4,KEY19;BKRQURNO,BKRQVISN,BKRQBKTY,BKRQREQN,BKRQSTAT:
                        BKRQHOSP,BKRQPRIO,BKRQSNAM,BKRQGNAM,BKRQBDAT,BKRQGEND:  
                        BKRQRDOC,BKRQUNIT,BKRQCSDT,BKRQCSTM,BKRQCTCT,BKRQLOCN:  
                        BKRQADPT,BKRQEPOW,BKRQSURG,BKRQTHET,BKRQANAE,BKRQMBS1:  
                        BKRQMBS2,BKRQMBS3,BKRQMBD1,BKRQMBD2,BKRQMBD3,BKRQPROR:  
                        BKRQDURA,BKRQINFC,BKRQEQU1,BKRQEQU2,BKRQEQU3,BKRQCDAT:  
                        BKRQCTIM,BKRQCUSR,BKRQUDAT,BKRQUTIM,BKRQUUSR,BKRQCNDT:  
                        BKRQCNTM,BKRQCNUS,BKRQCNCD,BKRQOPTY,BKRQTRCD,BKRQATCD:  
                        BKRQATYP,BKRQCTYP,BKRQELOS,BKRQCTY6,BKRQCTY7,BKRQCTY8:  
                        BKRQCTY9,BKRQASRC,BKRQBTYP,BKRQELON,BKRQCSNT,BKRQCCDT:  
                        BKRQSPAR                                                
          RETURN
.
DEBKRQ14  RESET     KEY19                                                       
          DELETE    BOKRQ1A4,KEY19                                              
          RETURN
.
RSBKRQ15  RESET     KEY17                                                       
          READ      BOKRQ1A5,KEY17;;                                            
          RETURN
.
RABKRQ15  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      BOKRQ1A5,KEY17;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDBKRQ15  RESET     KEY17                                                       
          MOVE      ZERO,OVRCD
          READ      BOKRQ1A5,KEY17;BKRQURNO,BKRQVISN,BKRQBKTY,BKRQREQN,BKRQSTAT:
                        BKRQHOSP,BKRQPRIO,BKRQSNAM,BKRQGNAM,BKRQBDAT,BKRQGEND:  
                        BKRQRDOC,BKRQUNIT,BKRQCSDT,BKRQCSTM,BKRQCTCT,BKRQLOCN:  
                        BKRQADPT,BKRQEPOW,BKRQSURG,BKRQTHET,BKRQANAE,BKRQMBS1:  
                        BKRQMBS2,BKRQMBS3,BKRQMBD1,BKRQMBD2,BKRQMBD3,BKRQPROR:  
                        BKRQDURA,BKRQINFC,BKRQEQU1,BKRQEQU2,BKRQEQU3,BKRQCDAT:  
                        BKRQCTIM,BKRQCUSR,BKRQUDAT,BKRQUTIM,BKRQUUSR,BKRQCNDT:  
                        BKRQCNTM,BKRQCNUS,BKRQCNCD,BKRQOPTY,BKRQTRCD,BKRQATCD:  
                        BKRQATYP,BKRQCTYP,BKRQELOS,BKRQCTY6,BKRQCTY7,BKRQCTY8:  
                        BKRQCTY9,BKRQASRC,BKRQBTYP,BKRQELON,BKRQCSNT,BKRQCCDT:  
                        BKRQSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RKBKRQ15  MOVE      ZERO,OVRCD                                                  
          READKS    BOKRQ1A5;BKRQURNO,BKRQVISN,BKRQBKTY,BKRQREQN,BKRQSTAT:      
                        BKRQHOSP,BKRQPRIO,BKRQSNAM,BKRQGNAM,BKRQBDAT,BKRQGEND:  
                        BKRQRDOC,BKRQUNIT,BKRQCSDT,BKRQCSTM,BKRQCTCT,BKRQLOCN:  
                        BKRQADPT,BKRQEPOW,BKRQSURG,BKRQTHET,BKRQANAE,BKRQMBS1:  
                        BKRQMBS2,BKRQMBS3,BKRQMBD1,BKRQMBD2,BKRQMBD3,BKRQPROR:  
                        BKRQDURA,BKRQINFC,BKRQEQU1,BKRQEQU2,BKRQEQU3,BKRQCDAT:  
                        BKRQCTIM,BKRQCUSR,BKRQUDAT,BKRQUTIM,BKRQUUSR,BKRQCNDT:  
                        BKRQCNTM,BKRQCNUS,BKRQCNCD,BKRQOPTY,BKRQTRCD,BKRQATCD:  
                        BKRQATYP,BKRQCTYP,BKRQELOS,BKRQCTY6,BKRQCTY7,BKRQCTY8:  
                        BKRQCTY9,BKRQASRC,BKRQBTYP,BKRQELON,BKRQCSNT,BKRQCCDT:  
                        BKRQSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
RPBKRQ15  MOVE      ZERO,OVRCD                                                  
          READKP    BOKRQ1A5;BKRQURNO,BKRQVISN,BKRQBKTY,BKRQREQN,BKRQSTAT:      
                        BKRQHOSP,BKRQPRIO,BKRQSNAM,BKRQGNAM,BKRQBDAT,BKRQGEND:  
                        BKRQRDOC,BKRQUNIT,BKRQCSDT,BKRQCSTM,BKRQCTCT,BKRQLOCN:  
                        BKRQADPT,BKRQEPOW,BKRQSURG,BKRQTHET,BKRQANAE,BKRQMBS1:  
                        BKRQMBS2,BKRQMBS3,BKRQMBD1,BKRQMBD2,BKRQMBD3,BKRQPROR:  
                        BKRQDURA,BKRQINFC,BKRQEQU1,BKRQEQU2,BKRQEQU3,BKRQCDAT:  
                        BKRQCTIM,BKRQCUSR,BKRQUDAT,BKRQUTIM,BKRQUUSR,BKRQCNDT:  
                        BKRQCNTM,BKRQCNUS,BKRQCNCD,BKRQOPTY,BKRQTRCD,BKRQATCD:  
                        BKRQATYP,BKRQCTYP,BKRQELOS,BKRQCTY6,BKRQCTY7,BKRQCTY8:  
                        BKRQCTY9,BKRQASRC,BKRQBTYP,BKRQELON,BKRQCSNT,BKRQCCDT:  
                        BKRQSPAR                                                
          GOTO      OVERCOND IF OVER
          RETURN
.
UPBKRQ15  MOVE      ZERO,OVRCD                                                  
          UPDATE    BOKRQ1A5;BKRQURNO,BKRQVISN,BKRQBKTY,BKRQREQN,BKRQSTAT:      
                        BKRQHOSP,BKRQPRIO,BKRQSNAM,BKRQGNAM,BKRQBDAT,BKRQGEND:  
                        BKRQRDOC,BKRQUNIT,BKRQCSDT,BKRQCSTM,BKRQCTCT,BKRQLOCN:  
                        BKRQADPT,BKRQEPOW,BKRQSURG,BKRQTHET,BKRQANAE,BKRQMBS1:  
                        BKRQMBS2,BKRQMBS3,BKRQMBD1,BKRQMBD2,BKRQMBD3,BKRQPROR:  
                        BKRQDURA,BKRQINFC,BKRQEQU1,BKRQEQU2,BKRQEQU3,BKRQCDAT:  
                        BKRQCTIM,BKRQCUSR,BKRQUDAT,BKRQUTIM,BKRQUUSR,BKRQCNDT:  
                        BKRQCNTM,BKRQCNUS,BKRQCNCD,BKRQOPTY,BKRQTRCD,BKRQATCD:  
                        BKRQATYP,BKRQCTYP,BKRQELOS,BKRQCTY6,BKRQCTY7,BKRQCTY8:  
                        BKRQCTY9,BKRQASRC,BKRQBTYP,BKRQELON,BKRQCSNT,BKRQCCDT:  
                        BKRQSPAR                                                
          RETURN
.
WRBKRQ15  RESET     KEY17                                                       
          WRITE     BOKRQ1A5,KEY17;BKRQURNO,BKRQVISN,BKRQBKTY,BKRQREQN,BKRQSTAT:
                        BKRQHOSP,BKRQPRIO,BKRQSNAM,BKRQGNAM,BKRQBDAT,BKRQGEND:  
                        BKRQRDOC,BKRQUNIT,BKRQCSDT,BKRQCSTM,BKRQCTCT,BKRQLOCN:  
                        BKRQADPT,BKRQEPOW,BKRQSURG,BKRQTHET,BKRQANAE,BKRQMBS1:  
                        BKRQMBS2,BKRQMBS3,BKRQMBD1,BKRQMBD2,BKRQMBD3,BKRQPROR:  
                        BKRQDURA,BKRQINFC,BKRQEQU1,BKRQEQU2,BKRQEQU3,BKRQCDAT:  
                        BKRQCTIM,BKRQCUSR,BKRQUDAT,BKRQUTIM,BKRQUUSR,BKRQCNDT:  
                        BKRQCNTM,BKRQCNUS,BKRQCNCD,BKRQOPTY,BKRQTRCD,BKRQATCD:  
                        BKRQATYP,BKRQCTYP,BKRQELOS,BKRQCTY6,BKRQCTY7,BKRQCTY8:  
                        BKRQCTY9,BKRQASRC,BKRQBTYP,BKRQELON,BKRQCSNT,BKRQCCDT:  
                        BKRQSPAR                                                
          RETURN
.
DEBKRQ15  RESET     KEY17                                                       
          DELETE    BOKRQ1A5,KEY17                                              
          RETURN
.
