.
. CLAVARIO    
. --------
. Filename     : clavaraf.dat
.
RSCAVAR1  RESET     KEY22                                                       
          READ      CLAVARA1,KEY22;;                                            
          RETURN
.
RACAVAR1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      CLAVARA1,KEY22;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCAVAR1  RESET     KEY22                                                       
          MOVE      ZERO,OVRCD
          READ      CLAVARA1,KEY22;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DCAVRNUM,CAVRNUMB                                           
          RETURN
.
RKCAVAR1                                                                        
          MOVE      ZERO,OVRCD
          READKS    CLAVARA1;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:      
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DCAVRNUM,CAVRNUMB                                           
          RETURN
.
RPCAVAR1                                                                        
          MOVE      ZERO,OVRCD
          READKP    CLAVARA1;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:      
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DCAVRNUM,CAVRNUMB                                           
          RETURN
.
UPCAVAR1                                                                        
          MOVE      CAVRNUMB,DCAVRNUM                                           
          UPDATE    CLAVARA1;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:      
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          RETURN
.
WRCAVAR1  RESET     KEY22                                                       
          MOVE      CAVRNUMB,DCAVRNUM                                           
          WRITE     CLAVARA1,KEY22;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          RETURN
.
DECAVAR1  RESET     KEY22                                                       
          DELETE    CLAVARA1,KEY22                                              
          RETURN
.
RSCAVAR2  RESET     KEY7                                                        
          READ      CLAVARA2,KEY7;;                                             
          RETURN
.
RACAVAR2  RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      CLAVARA2,KEY7;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCAVAR2  RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      CLAVARA2,KEY7;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE: 
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DCAVRNUM,CAVRNUMB                                           
          RETURN
.
RKCAVAR2                                                                        
          MOVE      ZERO,OVRCD
          READKS    CLAVARA2;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:      
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DCAVRNUM,CAVRNUMB                                           
          RETURN
.
RPCAVAR2                                                                        
          MOVE      ZERO,OVRCD
          READKP    CLAVARA2;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:      
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DCAVRNUM,CAVRNUMB                                           
          RETURN
.
UPCAVAR2                                                                        
          MOVE      CAVRNUMB,DCAVRNUM                                           
          UPDATE    CLAVARA2;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:      
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          RETURN
.
WRCAVAR2  RESET     KEY7                                                        
          MOVE      CAVRNUMB,DCAVRNUM                                           
          WRITE     CLAVARA2,KEY7;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE: 
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          RETURN
.
DECAVAR2  RESET     KEY7                                                        
          DELETE    CLAVARA2,KEY7                                               
          RETURN
.
RSCAVAR3  RESET     KEY12                                                       
          READ      CLAVARA3,KEY12;;                                            
          RETURN
.
RACAVAR3  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      CLAVARA3,KEY12;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCAVAR3  RESET     KEY12                                                       
          MOVE      ZERO,OVRCD
          READ      CLAVARA3,KEY12;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DCAVRNUM,CAVRNUMB                                           
          RETURN
.
RKCAVAR3                                                                        
          MOVE      ZERO,OVRCD
          READKS    CLAVARA3;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:      
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DCAVRNUM,CAVRNUMB                                           
          RETURN
.
RPCAVAR3                                                                        
          MOVE      ZERO,OVRCD
          READKP    CLAVARA3;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:      
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DCAVRNUM,CAVRNUMB                                           
          RETURN
.
UPCAVAR3                                                                        
          MOVE      CAVRNUMB,DCAVRNUM                                           
          UPDATE    CLAVARA3;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:      
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          RETURN
.
WRCAVAR3  RESET     KEY12                                                       
          MOVE      CAVRNUMB,DCAVRNUM                                           
          WRITE     CLAVARA3,KEY12;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          RETURN
.
DECAVAR3  RESET     KEY12                                                       
          DELETE    CLAVARA3,KEY12                                              
          RETURN
.
RSCAVAR4  RESET     KEY9                                                        
          READ      CLAVARA4,KEY9;;                                             
          RETURN
.
RACAVAR4  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      CLAVARA4,KEY9;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCAVAR4  RESET     KEY9                                                        
          MOVE      ZERO,OVRCD
          READ      CLAVARA4,KEY9;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE: 
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DCAVRNUM,CAVRNUMB                                           
          RETURN
.
RKCAVAR4                                                                        
          MOVE      ZERO,OVRCD
          READKS    CLAVARA4;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:      
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DCAVRNUM,CAVRNUMB                                           
          RETURN
.
RPCAVAR4                                                                        
          MOVE      ZERO,OVRCD
          READKP    CLAVARA4;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:      
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DCAVRNUM,CAVRNUMB                                           
          RETURN
.
UPCAVAR4                                                                        
          MOVE      CAVRNUMB,DCAVRNUM                                           
          UPDATE    CLAVARA4;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:      
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          RETURN
.
WRCAVAR4  RESET     KEY9                                                        
          MOVE      CAVRNUMB,DCAVRNUM                                           
          WRITE     CLAVARA4,KEY9;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE: 
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          RETURN
.
DECAVAR4  RESET     KEY9                                                        
          DELETE    CLAVARA4,KEY9                                               
          RETURN
.
RSCAVAR5  RESET     KEY10                                                       
          READ      CLAVARA5,KEY10;;                                            
          RETURN
.
RACAVAR5  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      CLAVARA5,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCAVAR5  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      CLAVARA5,KEY10;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DCAVRNUM,CAVRNUMB                                           
          RETURN
.
RKCAVAR5                                                                        
          MOVE      ZERO,OVRCD
          READKS    CLAVARA5;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:      
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DCAVRNUM,CAVRNUMB                                           
          RETURN
.
RPCAVAR5                                                                        
          MOVE      ZERO,OVRCD
          READKP    CLAVARA5;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:      
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DCAVRNUM,CAVRNUMB                                           
          RETURN
.
UPCAVAR5                                                                        
          MOVE      CAVRNUMB,DCAVRNUM                                           
          UPDATE    CLAVARA5;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:      
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          RETURN
.
WRCAVAR5  RESET     KEY10                                                       
          MOVE      CAVRNUMB,DCAVRNUM                                           
          WRITE     CLAVARA5,KEY10;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          RETURN
.
DECAVAR5  RESET     KEY10                                                       
          DELETE    CLAVARA5,KEY10                                              
          RETURN
.
RSCAVAR6  RESET     KEY10                                                       
          READ      CLAVARA6,KEY10;;                                            
          RETURN
.
RACAVAR6  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      CLAVARA6,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCAVAR6  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      CLAVARA6,KEY10;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DCAVRNUM,CAVRNUMB                                           
          RETURN
.
RKCAVAR6                                                                        
          MOVE      ZERO,OVRCD
          READKS    CLAVARA6;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:      
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DCAVRNUM,CAVRNUMB                                           
          RETURN
.
RPCAVAR6                                                                        
          MOVE      ZERO,OVRCD
          READKP    CLAVARA6;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:      
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DCAVRNUM,CAVRNUMB                                           
          RETURN
.
UPCAVAR6                                                                        
          MOVE      CAVRNUMB,DCAVRNUM                                           
          UPDATE    CLAVARA6;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:      
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          RETURN
.
WRCAVAR6  RESET     KEY10                                                       
          MOVE      CAVRNUMB,DCAVRNUM                                           
          WRITE     CLAVARA6,KEY10;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          RETURN
.
DECAVAR6  RESET     KEY10                                                       
          DELETE    CLAVARA6,KEY10                                              
          RETURN
.
RSCAVAR7  RESET     KEY10                                                       
          READ      CLAVARA7,KEY10;;                                            
          RETURN
.
RACAVAR7  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      CLAVARA7,KEY10;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCAVAR7  RESET     KEY10                                                       
          MOVE      ZERO,OVRCD
          READ      CLAVARA7,KEY10;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DCAVRNUM,CAVRNUMB                                           
          RETURN
.
RKCAVAR7                                                                        
          MOVE      ZERO,OVRCD
          READKS    CLAVARA7;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:      
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DCAVRNUM,CAVRNUMB                                           
          RETURN
.
RPCAVAR7                                                                        
          MOVE      ZERO,OVRCD
          READKP    CLAVARA7;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:      
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DCAVRNUM,CAVRNUMB                                           
          RETURN
.
UPCAVAR7                                                                        
          MOVE      CAVRNUMB,DCAVRNUM                                           
          UPDATE    CLAVARA7;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:      
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          RETURN
.
WRCAVAR7  RESET     KEY10                                                       
          MOVE      CAVRNUMB,DCAVRNUM                                           
          WRITE     CLAVARA7,KEY10;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          RETURN
.
DECAVAR7  RESET     KEY10                                                       
          DELETE    CLAVARA7,KEY10                                              
          RETURN
.
RSCAVAR8  RESET     KEY13                                                       
          READ      CLAVARA8,KEY13;;                                            
          RETURN
.
RACAVAR8  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      CLAVARA8,KEY13;ANS                                          
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCAVAR8  RESET     KEY13                                                       
          MOVE      ZERO,OVRCD
          READ      CLAVARA8,KEY13;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DCAVRNUM,CAVRNUMB                                           
          RETURN
.
RKCAVAR8                                                                        
          MOVE      ZERO,OVRCD
          READKS    CLAVARA8;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:      
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR                              
          GOTO      OVERCOND IF OVER
          MOVE      DCAVRNUM,CAVRNUMB                                           
          RETURN
.
RPCAVAR8                                                                        
          MOVE      ZERO,OVRCD
          READKP    CLAVARA8;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:      
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DCAVRNUM,CAVRNUMB                                           
          RETURN
.
UPCAVAR8                                                                        
          MOVE      CAVRNUMB,DCAVRNUM                                           
          UPDATE    CLAVARA8;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:      
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR
          RETURN
.
WRCAVAR8  RESET     KEY13                                                       
          MOVE      CAVRNUMB,DCAVRNUM                                           
          WRITE     CLAVARA8,KEY13;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR
          RETURN
.
DECAVAR8  RESET     KEY13                                                       
          DELETE    CLAVARA8,KEY13                                              
          RETURN
.
RSCAVAR9  RESET     KEY7                                                        
          READ      CLAVARA9,KEY7;;                                             
          RETURN
.
RACAVAR9  RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      CLAVARA9,KEY7;ANS                                           
          GOTO      OVERCOND IF OVER
          RETURN
.
RDCAVAR9  RESET     KEY7                                                        
          MOVE      ZERO,OVRCD
          READ      CLAVARA9,KEY7;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE: 
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DCAVRNUM,CAVRNUMB                                           
          RETURN
.
RKCAVAR9                                                                        
          MOVE      ZERO,OVRCD
          READKS    CLAVARA9;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:      
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DCAVRNUM,CAVRNUMB                                           
          RETURN
.
RPCAVAR9                                                                        
          MOVE      ZERO,OVRCD
          READKP    CLAVARA9;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:      
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR
          GOTO      OVERCOND IF OVER
          MOVE      DCAVRNUM,CAVRNUMB                                           
          RETURN
.
UPCAVAR9                                                                        
          MOVE      CAVRNUMB,DCAVRNUM                                           
          UPDATE    CLAVARA9;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE:      
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR
          RETURN
.
WRCAVAR9  RESET     KEY7                                                        
          MOVE      CAVRNUMB,DCAVRNUM                                           
          WRITE     CLAVARA9,KEY7;CAVRSITE,CAVRVIST,CAVRUNIQ,CAVRTHEU,CAVRCODE: 
                        CAVRFREE,CAVRDATE,CAVRTIME,DCAVRNUM,CAVRDOCT,CAVRTHET:  
                        CAVRCOD9,CAVRCODC,CAVRDESC,CAVRSPAR
          RETURN
.
DECAVAR9  RESET     KEY7                                                        
          DELETE    CLAVARA9,KEY7                                               
          RETURN
.
