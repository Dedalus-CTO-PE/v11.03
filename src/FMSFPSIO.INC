.
.-------------------------------------------------------
.          21.10.93 Neeriem "I Hate Support" Dye
.          Added trap for F*I on FMFPCOM2
.          srf HWK
.-------------------------------------------------------
RSFMFP1   RESET     KEY14
          READ      FMSFPSA1,KEY14;;
          RETURN
.
RAFMFP1   RESET     KEY14
          MOVE      ZERO,OVRCD
          READ      FMSFPSA1,KEY14;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMFP1   RESET     KEY14
          MOVE      ZERO,OVRCD
          TRAP      OVERCOND IF FORMAT
          READ      FMSFPSA1,KEY14;FMFPCULD,FMFPCUAC,FMFPCBF,FMFPC01:
                                  FMFPC02,FMFPC03,FMFPC04,FMFPC05,FMFPC06:
                                  FMFPC07,FMFPC08,FMFPC09,FMFPC10,FMFPC11:
                                  FMFPC12,FMFPC13,FMFPABF,FMFPA01,FMFPA02:
                                  FMFPA03,FMFPA04,FMFPA05,FMFPA06,FMFPA07:
                                  FMFPA08,FMFPA09,FMFPA10,FMFPA11,FMFPA12:
                                  FMFPA13,FMFPCOM,FMFPCBFD,FMFPC01D,FMFPC02D:
                                  FMFPC03D,FMFPC04D,FMFPC05D,FMFPC06D,FMFPC07D:
                                  FMFPC08D,FMFPC09D,FMFPC10D,FMFPC11D,FMFPC12D:
                                  FMFPC13D,FMFPABFD,FMFPA01D,FMFPA02D,FMFPA03D:
                                  FMFPA04D,FMFPA05D,FMFPA06D,FMFPA07D,FMFPA08D:
                                  FMFPA09D,FMFPA10D,FMFPA11D,FMFPA12D,FMFPA13D:
                                  FMFPCOMD,FMFPCBFT,FMFPC01T,FMFPC02T,FMFPC03T:
                                  FMFPC04T,FMFPC05T,FMFPC06T,FMFPC07T,FMFPC08T:
                                  FMFPC09T,FMFPC10T,FMFPC11T,FMFPC12T,FMFPC13T:
                                  FMFPABFT,FMFPA01T,FMFPA02T,FMFPA03T,FMFPA04T:
                                  FMFPA05T,FMFPA06T,FMFPA07T,FMFPA08T,FMFPA09T:
                                  FMFPA10T,FMFPA11T,FMFPA12T,FMFPA13T,FMFPCOMT:
                                  FMFPCOM2,FMFPSPAR
          TRAPCLR   FORMAT
          IF        OVRCD=1
            MOVE      ZERO,OVRCD
            READ      FMSFPSA1,KEY14;FMFPCULD,FMFPCUAC,FMFPCBF,FMFPC01:
                                   FMFPC02,FMFPC03,FMFPC04,FMFPC05,FMFPC06:
                                   FMFPC07,FMFPC08,FMFPC09,FMFPC10,FMFPC11:
                                   FMFPC12,FMFPC13,FMFPABF,FMFPA01,FMFPA02:
                                   FMFPA03,FMFPA04,FMFPA05,FMFPA06,FMFPA07:
                                   FMFPA08,FMFPA09,FMFPA10,FMFPA11,FMFPA12:
                                   FMFPA13,FMFPCOM,FMFPCBFD,FMFPC01D,FMFPC02D:
                                   FMFPC03D,FMFPC04D,FMFPC05D,FMFPC06D,FMFPC07D:
                                   FMFPC08D,FMFPC09D,FMFPC10D,FMFPC11D,FMFPC12D:
                                   FMFPC13D,FMFPABFD,FMFPA01D,FMFPA02D,FMFPA03D:
                                   FMFPA04D,FMFPA05D,FMFPA06D,FMFPA07D,FMFPA08D:
                                   FMFPA09D,FMFPA10D,FMFPA11D,FMFPA12D,FMFPA13D:
                                   FMFPCOMD,FMFPCBFT,FMFPC01T,FMFPC02T,FMFPC03T:
                                   FMFPC04T,FMFPC05T,FMFPC06T,FMFPC07T,FMFPC08T:
                                   FMFPC09T,FMFPC10T,FMFPC11T,FMFPC12T,FMFPC13T:
                                   FMFPABFT,FMFPA01T,FMFPA02T,FMFPA03T,FMFPA04T:
                                   FMFPA05T,FMFPA06T,FMFPA07T,FMFPA08T,FMFPA09T:
                                   FMFPA10T,FMFPA11T,FMFPA12T,FMFPA13T,FMFPCOMT
            MOVE      ZERO,FMFPCOM2
            MOVE      SP70,FMFPSPAR
          ENDIF
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMFP1   MOVE      ZERO,OVRCD
          TRAP      OVERCOND IF FORMAT
          READKS    FMSFPSA1;FMFPCULD,FMFPCUAC,FMFPCBF,FMFPC01:
                                  FMFPC02,FMFPC03,FMFPC04,FMFPC05,FMFPC06:
                                  FMFPC07,FMFPC08,FMFPC09,FMFPC10,FMFPC11:
                                  FMFPC12,FMFPC13,FMFPABF,FMFPA01,FMFPA02:
                                  FMFPA03,FMFPA04,FMFPA05,FMFPA06,FMFPA07:
                                  FMFPA08,FMFPA09,FMFPA10,FMFPA11,FMFPA12:
                                  FMFPA13,FMFPCOM,FMFPCBFD,FMFPC01D,FMFPC02D:
                                  FMFPC03D,FMFPC04D,FMFPC05D,FMFPC06D,FMFPC07D:
                                  FMFPC08D,FMFPC09D,FMFPC10D,FMFPC11D,FMFPC12D:
                                  FMFPC13D,FMFPABFD,FMFPA01D,FMFPA02D,FMFPA03D:
                                  FMFPA04D,FMFPA05D,FMFPA06D,FMFPA07D,FMFPA08D:
                                  FMFPA09D,FMFPA10D,FMFPA11D,FMFPA12D,FMFPA13D:
                                  FMFPCOMD,FMFPCBFT,FMFPC01T,FMFPC02T,FMFPC03T:
                                  FMFPC04T,FMFPC05T,FMFPC06T,FMFPC07T,FMFPC08T:
                                  FMFPC09T,FMFPC10T,FMFPC11T,FMFPC12T,FMFPC13T:
                                  FMFPABFT,FMFPA01T,FMFPA02T,FMFPA03T,FMFPA04T:
                                  FMFPA05T,FMFPA06T,FMFPA07T,FMFPA08T,FMFPA09T:
                                  FMFPA10T,FMFPA11T,FMFPA12T,FMFPA13T,FMFPCOMT:
                                  FMFPCOM2,FMFPSPAR
          TRAPCLR   FORMAT
          IF        OVRCD=1
            MOVE      ZERO,OVRCD
            READKS    FMSFPSA1;FMFPCULD,FMFPCUAC,FMFPCBF,FMFPC01:
                                   FMFPC02,FMFPC03,FMFPC04,FMFPC05,FMFPC06:
                                   FMFPC07,FMFPC08,FMFPC09,FMFPC10,FMFPC11:
                                   FMFPC12,FMFPC13,FMFPABF,FMFPA01,FMFPA02:
                                   FMFPA03,FMFPA04,FMFPA05,FMFPA06,FMFPA07:
                                   FMFPA08,FMFPA09,FMFPA10,FMFPA11,FMFPA12:
                                   FMFPA13,FMFPCOM,FMFPCBFD,FMFPC01D,FMFPC02D:
                                   FMFPC03D,FMFPC04D,FMFPC05D,FMFPC06D,FMFPC07D:
                                   FMFPC08D,FMFPC09D,FMFPC10D,FMFPC11D,FMFPC12D:
                                   FMFPC13D,FMFPABFD,FMFPA01D,FMFPA02D,FMFPA03D:
                                   FMFPA04D,FMFPA05D,FMFPA06D,FMFPA07D,FMFPA08D:
                                   FMFPA09D,FMFPA10D,FMFPA11D,FMFPA12D,FMFPA13D:
                                   FMFPCOMD,FMFPCBFT,FMFPC01T,FMFPC02T,FMFPC03T:
                                   FMFPC04T,FMFPC05T,FMFPC06T,FMFPC07T,FMFPC08T:
                                   FMFPC09T,FMFPC10T,FMFPC11T,FMFPC12T,FMFPC13T:
                                   FMFPABFT,FMFPA01T,FMFPA02T,FMFPA03T,FMFPA04T:
                                   FMFPA05T,FMFPA06T,FMFPA07T,FMFPA08T,FMFPA09T:
                                   FMFPA10T,FMFPA11T,FMFPA12T,FMFPA13T,FMFPCOMT
            MOVE      ZERO,FMFPCOM2
            MOVE      SP70,FMFPSPAR
          ENDIF
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMFP1   MOVE      ZERO,OVRCD
          TRAP      OVERCOND IF FORMAT
          READKP    FMSFPSA1;FMFPCULD,FMFPCUAC,FMFPCBF,FMFPC01:
                                  FMFPC02,FMFPC03,FMFPC04,FMFPC05,FMFPC06:
                                  FMFPC07,FMFPC08,FMFPC09,FMFPC10,FMFPC11:
                                  FMFPC12,FMFPC13,FMFPABF,FMFPA01,FMFPA02:
                                  FMFPA03,FMFPA04,FMFPA05,FMFPA06,FMFPA07:
                                  FMFPA08,FMFPA09,FMFPA10,FMFPA11,FMFPA12:
                                  FMFPA13,FMFPCOM,FMFPCBFD,FMFPC01D,FMFPC02D:
                                  FMFPC03D,FMFPC04D,FMFPC05D,FMFPC06D,FMFPC07D:
                                  FMFPC08D,FMFPC09D,FMFPC10D,FMFPC11D,FMFPC12D:
                                  FMFPC13D,FMFPABFD,FMFPA01D,FMFPA02D,FMFPA03D:
                                  FMFPA04D,FMFPA05D,FMFPA06D,FMFPA07D,FMFPA08D:
                                  FMFPA09D,FMFPA10D,FMFPA11D,FMFPA12D,FMFPA13D:
                                  FMFPCOMD,FMFPCBFT,FMFPC01T,FMFPC02T,FMFPC03T:
                                  FMFPC04T,FMFPC05T,FMFPC06T,FMFPC07T,FMFPC08T:
                                  FMFPC09T,FMFPC10T,FMFPC11T,FMFPC12T,FMFPC13T:
                                  FMFPABFT,FMFPA01T,FMFPA02T,FMFPA03T,FMFPA04T:
                                  FMFPA05T,FMFPA06T,FMFPA07T,FMFPA08T,FMFPA09T:
                                  FMFPA10T,FMFPA11T,FMFPA12T,FMFPA13T,FMFPCOMT:
                                  FMFPCOM2,FMFPSPAR
          TRAPCLR   FORMAT
          IF        OVRCD=1
            MOVE      ZERO,OVRCD
            READKP    FMSFPSA1;FMFPCULD,FMFPCUAC,FMFPCBF,FMFPC01:
                                   FMFPC02,FMFPC03,FMFPC04,FMFPC05,FMFPC06:
                                   FMFPC07,FMFPC08,FMFPC09,FMFPC10,FMFPC11:
                                   FMFPC12,FMFPC13,FMFPABF,FMFPA01,FMFPA02:
                                   FMFPA03,FMFPA04,FMFPA05,FMFPA06,FMFPA07:
                                   FMFPA08,FMFPA09,FMFPA10,FMFPA11,FMFPA12:
                                   FMFPA13,FMFPCOM,FMFPCBFD,FMFPC01D,FMFPC02D:
                                   FMFPC03D,FMFPC04D,FMFPC05D,FMFPC06D,FMFPC07D:
                                   FMFPC08D,FMFPC09D,FMFPC10D,FMFPC11D,FMFPC12D:
                                   FMFPC13D,FMFPABFD,FMFPA01D,FMFPA02D,FMFPA03D:
                                   FMFPA04D,FMFPA05D,FMFPA06D,FMFPA07D,FMFPA08D:
                                   FMFPA09D,FMFPA10D,FMFPA11D,FMFPA12D,FMFPA13D:
                                   FMFPCOMD,FMFPCBFT,FMFPC01T,FMFPC02T,FMFPC03T:
                                   FMFPC04T,FMFPC05T,FMFPC06T,FMFPC07T,FMFPC08T:
                                   FMFPC09T,FMFPC10T,FMFPC11T,FMFPC12T,FMFPC13T:
                                   FMFPABFT,FMFPA01T,FMFPA02T,FMFPA03T,FMFPA04T:
                                   FMFPA05T,FMFPA06T,FMFPA07T,FMFPA08T,FMFPA09T:
                                   FMFPA10T,FMFPA11T,FMFPA12T,FMFPA13T,FMFPCOMT
            MOVE      ZERO,FMFPCOM2
            MOVE      SP70,FMFPSPAR
          ENDIF
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMFP1   UPDATE    FMSFPSA1;FMFPCULD,FMFPCUAC,FMFPCBF,FMFPC01:
                                  FMFPC02,FMFPC03,FMFPC04,FMFPC05,FMFPC06:
                                  FMFPC07,FMFPC08,FMFPC09,FMFPC10,FMFPC11:
                                  FMFPC12,FMFPC13,FMFPABF,FMFPA01,FMFPA02:
                                  FMFPA03,FMFPA04,FMFPA05,FMFPA06,FMFPA07:
                                  FMFPA08,FMFPA09,FMFPA10,FMFPA11,FMFPA12:
                                  FMFPA13,FMFPCOM,FMFPCBFD,FMFPC01D,FMFPC02D:
                                  FMFPC03D,FMFPC04D,FMFPC05D,FMFPC06D,FMFPC07D:
                                  FMFPC08D,FMFPC09D,FMFPC10D,FMFPC11D,FMFPC12D:
                                  FMFPC13D,FMFPABFD,FMFPA01D,FMFPA02D,FMFPA03D:
                                  FMFPA04D,FMFPA05D,FMFPA06D,FMFPA07D,FMFPA08D:
                                  FMFPA09D,FMFPA10D,FMFPA11D,FMFPA12D,FMFPA13D:
                                  FMFPCOMD,FMFPCBFT,FMFPC01T,FMFPC02T,FMFPC03T:
                                  FMFPC04T,FMFPC05T,FMFPC06T,FMFPC07T,FMFPC08T:
                                  FMFPC09T,FMFPC10T,FMFPC11T,FMFPC12T,FMFPC13T:
                                  FMFPABFT,FMFPA01T,FMFPA02T,FMFPA03T,FMFPA04T:
                                  FMFPA05T,FMFPA06T,FMFPA07T,FMFPA08T,FMFPA09T:
                                  FMFPA10T,FMFPA11T,FMFPA12T,FMFPA13T,FMFPCOMT:
                                  FMFPCOM2,FMFPSPAR
          RETURN
.
WRFMFP1   RESET     KEY14
          WRITE     FMSFPSA1,KEY14;FMFPCULD,FMFPCUAC,FMFPCBF,FMFPC01:
                                  FMFPC02,FMFPC03,FMFPC04,FMFPC05,FMFPC06:
                                  FMFPC07,FMFPC08,FMFPC09,FMFPC10,FMFPC11:
                                  FMFPC12,FMFPC13,FMFPABF,FMFPA01,FMFPA02:
                                  FMFPA03,FMFPA04,FMFPA05,FMFPA06,FMFPA07:
                                  FMFPA08,FMFPA09,FMFPA10,FMFPA11,FMFPA12:
                                  FMFPA13,FMFPCOM,FMFPCBFD,FMFPC01D,FMFPC02D:
                                  FMFPC03D,FMFPC04D,FMFPC05D,FMFPC06D,FMFPC07D:
                                  FMFPC08D,FMFPC09D,FMFPC10D,FMFPC11D,FMFPC12D:
                                  FMFPC13D,FMFPABFD,FMFPA01D,FMFPA02D,FMFPA03D:
                                  FMFPA04D,FMFPA05D,FMFPA06D,FMFPA07D,FMFPA08D:
                                  FMFPA09D,FMFPA10D,FMFPA11D,FMFPA12D,FMFPA13D:
                                  FMFPCOMD,FMFPCBFT,FMFPC01T,FMFPC02T,FMFPC03T:
                                  FMFPC04T,FMFPC05T,FMFPC06T,FMFPC07T,FMFPC08T:
                                  FMFPC09T,FMFPC10T,FMFPC11T,FMFPC12T,FMFPC13T:
                                  FMFPABFT,FMFPA01T,FMFPA02T,FMFPA03T,FMFPA04T:
                                  FMFPA05T,FMFPA06T,FMFPA07T,FMFPA08T,FMFPA09T:
                                  FMFPA10T,FMFPA11T,FMFPA12T,FMFPA13T,FMFPCOMT:
                                  FMFPCOM2,FMFPSPAR
          RETURN
.
DEFMFP1   RESET     KEY14
          DELETE    FMSFPSA1,KEY14
          RETURN
.
RSFMFP2   RESET     KEY14
          READ      FMSFPSA2,KEY14;;
          RETURN
.
RAFMFP2   RESET     KEY14
          MOVE      ZERO,OVRCD
          READ      FMSFPSA2,KEY14;ANS
          GOTO      OVERCOND IF OVER
          RETURN
.
RDFMFP2   RESET     KEY14
          MOVE      ZERO,OVRCD
          TRAP      OVERCOND IF FORMAT
          READ      FMSFPSA2,KEY14;FMFPCULD,FMFPCUAC,FMFPCBF,FMFPC01:
                                  FMFPC02,FMFPC03,FMFPC04,FMFPC05,FMFPC06:
                                  FMFPC07,FMFPC08,FMFPC09,FMFPC10,FMFPC11:
                                  FMFPC12,FMFPC13,FMFPABF,FMFPA01,FMFPA02:
                                  FMFPA03,FMFPA04,FMFPA05,FMFPA06,FMFPA07:
                                  FMFPA08,FMFPA09,FMFPA10,FMFPA11,FMFPA12:
                                  FMFPA13,FMFPCOM,FMFPCBFD,FMFPC01D,FMFPC02D:
                                  FMFPC03D,FMFPC04D,FMFPC05D,FMFPC06D,FMFPC07D:
                                  FMFPC08D,FMFPC09D,FMFPC10D,FMFPC11D,FMFPC12D:
                                  FMFPC13D,FMFPABFD,FMFPA01D,FMFPA02D,FMFPA03D:
                                  FMFPA04D,FMFPA05D,FMFPA06D,FMFPA07D,FMFPA08D:
                                  FMFPA09D,FMFPA10D,FMFPA11D,FMFPA12D,FMFPA13D:
                                  FMFPCOMD,FMFPCBFT,FMFPC01T,FMFPC02T,FMFPC03T:
                                  FMFPC04T,FMFPC05T,FMFPC06T,FMFPC07T,FMFPC08T:
                                  FMFPC09T,FMFPC10T,FMFPC11T,FMFPC12T,FMFPC13T:
                                  FMFPABFT,FMFPA01T,FMFPA02T,FMFPA03T,FMFPA04T:
                                  FMFPA05T,FMFPA06T,FMFPA07T,FMFPA08T,FMFPA09T:
                                  FMFPA10T,FMFPA11T,FMFPA12T,FMFPA13T,FMFPCOMT:
                                  FMFPCOM2,FMFPSPAR
          TRAPCLR   FORMAT
          IF        OVRCD=1
            MOVE      ZERO,OVRCD
            READ      FMSFPSA2,KEY14;FMFPCULD,FMFPCUAC,FMFPCBF,FMFPC01:
                                   FMFPC02,FMFPC03,FMFPC04,FMFPC05,FMFPC06:
                                   FMFPC07,FMFPC08,FMFPC09,FMFPC10,FMFPC11:
                                   FMFPC12,FMFPC13,FMFPABF,FMFPA01,FMFPA02:
                                   FMFPA03,FMFPA04,FMFPA05,FMFPA06,FMFPA07:
                                   FMFPA08,FMFPA09,FMFPA10,FMFPA11,FMFPA12:
                                   FMFPA13,FMFPCOM,FMFPCBFD,FMFPC01D,FMFPC02D:
                                   FMFPC03D,FMFPC04D,FMFPC05D,FMFPC06D,FMFPC07D:
                                   FMFPC08D,FMFPC09D,FMFPC10D,FMFPC11D,FMFPC12D:
                                   FMFPC13D,FMFPABFD,FMFPA01D,FMFPA02D,FMFPA03D:
                                   FMFPA04D,FMFPA05D,FMFPA06D,FMFPA07D,FMFPA08D:
                                   FMFPA09D,FMFPA10D,FMFPA11D,FMFPA12D,FMFPA13D:
                                   FMFPCOMD,FMFPCBFT,FMFPC01T,FMFPC02T,FMFPC03T:
                                   FMFPC04T,FMFPC05T,FMFPC06T,FMFPC07T,FMFPC08T:
                                   FMFPC09T,FMFPC10T,FMFPC11T,FMFPC12T,FMFPC13T:
                                   FMFPABFT,FMFPA01T,FMFPA02T,FMFPA03T,FMFPA04T:
                                   FMFPA05T,FMFPA06T,FMFPA07T,FMFPA08T,FMFPA09T:
                                   FMFPA10T,FMFPA11T,FMFPA12T,FMFPA13T,FMFPCOMT
            MOVE      ZERO,FMFPCOM2
            MOVE      SP70,FMFPSPAR
          ENDIF
          GOTO      OVERCOND IF OVER
          RETURN
.
RKFMFP2   MOVE      ZERO,OVRCD
          TRAP      OVERCOND IF FORMAT
          READKS    FMSFPSA2;FMFPCULD,FMFPCUAC,FMFPCBF,FMFPC01:
                                  FMFPC02,FMFPC03,FMFPC04,FMFPC05,FMFPC06:
                                  FMFPC07,FMFPC08,FMFPC09,FMFPC10,FMFPC11:
                                  FMFPC12,FMFPC13,FMFPABF,FMFPA01,FMFPA02:
                                  FMFPA03,FMFPA04,FMFPA05,FMFPA06,FMFPA07:
                                  FMFPA08,FMFPA09,FMFPA10,FMFPA11,FMFPA12:
                                  FMFPA13,FMFPCOM,FMFPCBFD,FMFPC01D,FMFPC02D:
                                  FMFPC03D,FMFPC04D,FMFPC05D,FMFPC06D,FMFPC07D:
                                  FMFPC08D,FMFPC09D,FMFPC10D,FMFPC11D,FMFPC12D:
                                  FMFPC13D,FMFPABFD,FMFPA01D,FMFPA02D,FMFPA03D:
                                  FMFPA04D,FMFPA05D,FMFPA06D,FMFPA07D,FMFPA08D:
                                  FMFPA09D,FMFPA10D,FMFPA11D,FMFPA12D,FMFPA13D:
                                  FMFPCOMD,FMFPCBFT,FMFPC01T,FMFPC02T,FMFPC03T:
                                  FMFPC04T,FMFPC05T,FMFPC06T,FMFPC07T,FMFPC08T:
                                  FMFPC09T,FMFPC10T,FMFPC11T,FMFPC12T,FMFPC13T:
                                  FMFPABFT,FMFPA01T,FMFPA02T,FMFPA03T,FMFPA04T:
                                  FMFPA05T,FMFPA06T,FMFPA07T,FMFPA08T,FMFPA09T:
                                  FMFPA10T,FMFPA11T,FMFPA12T,FMFPA13T,FMFPCOMT:
                                  FMFPCOM2,FMFPSPAR
          TRAPCLR   FORMAT
          IF        OVRCD=1
            MOVE      ZERO,OVRCD
            READKS    FMSFPSA2;FMFPCULD,FMFPCUAC,FMFPCBF,FMFPC01:
                                   FMFPC02,FMFPC03,FMFPC04,FMFPC05,FMFPC06:
                                   FMFPC07,FMFPC08,FMFPC09,FMFPC10,FMFPC11:
                                   FMFPC12,FMFPC13,FMFPABF,FMFPA01,FMFPA02:
                                   FMFPA03,FMFPA04,FMFPA05,FMFPA06,FMFPA07:
                                   FMFPA08,FMFPA09,FMFPA10,FMFPA11,FMFPA12:
                                   FMFPA13,FMFPCOM,FMFPCBFD,FMFPC01D,FMFPC02D:
                                   FMFPC03D,FMFPC04D,FMFPC05D,FMFPC06D,FMFPC07D:
                                   FMFPC08D,FMFPC09D,FMFPC10D,FMFPC11D,FMFPC12D:
                                   FMFPC13D,FMFPABFD,FMFPA01D,FMFPA02D,FMFPA03D:
                                   FMFPA04D,FMFPA05D,FMFPA06D,FMFPA07D,FMFPA08D:
                                   FMFPA09D,FMFPA10D,FMFPA11D,FMFPA12D,FMFPA13D:
                                   FMFPCOMD,FMFPCBFT,FMFPC01T,FMFPC02T,FMFPC03T:
                                   FMFPC04T,FMFPC05T,FMFPC06T,FMFPC07T,FMFPC08T:
                                   FMFPC09T,FMFPC10T,FMFPC11T,FMFPC12T,FMFPC13T:
                                   FMFPABFT,FMFPA01T,FMFPA02T,FMFPA03T,FMFPA04T:
                                   FMFPA05T,FMFPA06T,FMFPA07T,FMFPA08T,FMFPA09T:
                                   FMFPA10T,FMFPA11T,FMFPA12T,FMFPA13T,FMFPCOMT
            MOVE      ZERO,FMFPCOM2
            MOVE      SP70,FMFPSPAR
          ENDIF
          GOTO      OVERCOND IF OVER
          RETURN
.
RPFMFP2   MOVE      ZERO,OVRCD
          TRAP      OVERCOND IF FORMAT
          READKP    FMSFPSA2;FMFPCULD,FMFPCUAC,FMFPCBF,FMFPC01:
                                  FMFPC02,FMFPC03,FMFPC04,FMFPC05,FMFPC06:
                                  FMFPC07,FMFPC08,FMFPC09,FMFPC10,FMFPC11:
                                  FMFPC12,FMFPC13,FMFPABF,FMFPA01,FMFPA02:
                                  FMFPA03,FMFPA04,FMFPA05,FMFPA06,FMFPA07:
                                  FMFPA08,FMFPA09,FMFPA10,FMFPA11,FMFPA12:
                                  FMFPA13,FMFPCOM,FMFPCBFD,FMFPC01D,FMFPC02D:
                                  FMFPC03D,FMFPC04D,FMFPC05D,FMFPC06D,FMFPC07D:
                                  FMFPC08D,FMFPC09D,FMFPC10D,FMFPC11D,FMFPC12D:
                                  FMFPC13D,FMFPABFD,FMFPA01D,FMFPA02D,FMFPA03D:
                                  FMFPA04D,FMFPA05D,FMFPA06D,FMFPA07D,FMFPA08D:
                                  FMFPA09D,FMFPA10D,FMFPA11D,FMFPA12D,FMFPA13D:
                                  FMFPCOMD,FMFPCBFT,FMFPC01T,FMFPC02T,FMFPC03T:
                                  FMFPC04T,FMFPC05T,FMFPC06T,FMFPC07T,FMFPC08T:
                                  FMFPC09T,FMFPC10T,FMFPC11T,FMFPC12T,FMFPC13T:
                                  FMFPABFT,FMFPA01T,FMFPA02T,FMFPA03T,FMFPA04T:
                                  FMFPA05T,FMFPA06T,FMFPA07T,FMFPA08T,FMFPA09T:
                                  FMFPA10T,FMFPA11T,FMFPA12T,FMFPA13T,FMFPCOMT:
                                  FMFPCOM2,FMFPSPAR
          TRAPCLR   FORMAT
          IF        OVRCD=1
            MOVE      ZERO,OVRCD
            READKP    FMSFPSA2;FMFPCULD,FMFPCUAC,FMFPCBF,FMFPC01:
                                   FMFPC02,FMFPC03,FMFPC04,FMFPC05,FMFPC06:
                                   FMFPC07,FMFPC08,FMFPC09,FMFPC10,FMFPC11:
                                   FMFPC12,FMFPC13,FMFPABF,FMFPA01,FMFPA02:
                                   FMFPA03,FMFPA04,FMFPA05,FMFPA06,FMFPA07:
                                   FMFPA08,FMFPA09,FMFPA10,FMFPA11,FMFPA12:
                                   FMFPA13,FMFPCOM,FMFPCBFD,FMFPC01D,FMFPC02D:
                                   FMFPC03D,FMFPC04D,FMFPC05D,FMFPC06D,FMFPC07D:
                                   FMFPC08D,FMFPC09D,FMFPC10D,FMFPC11D,FMFPC12D:
                                   FMFPC13D,FMFPABFD,FMFPA01D,FMFPA02D,FMFPA03D:
                                   FMFPA04D,FMFPA05D,FMFPA06D,FMFPA07D,FMFPA08D:
                                   FMFPA09D,FMFPA10D,FMFPA11D,FMFPA12D,FMFPA13D:
                                   FMFPCOMD,FMFPCBFT,FMFPC01T,FMFPC02T,FMFPC03T:
                                   FMFPC04T,FMFPC05T,FMFPC06T,FMFPC07T,FMFPC08T:
                                   FMFPC09T,FMFPC10T,FMFPC11T,FMFPC12T,FMFPC13T:
                                   FMFPABFT,FMFPA01T,FMFPA02T,FMFPA03T,FMFPA04T:
                                   FMFPA05T,FMFPA06T,FMFPA07T,FMFPA08T,FMFPA09T:
                                   FMFPA10T,FMFPA11T,FMFPA12T,FMFPA13T,FMFPCOMT
            MOVE      ZERO,FMFPCOM2
            MOVE      SP70,FMFPSPAR
          ENDIF
          GOTO      OVERCOND IF OVER
          RETURN
.
UPFMFP2   UPDATE    FMSFPSA2;FMFPCULD,FMFPCUAC,FMFPCBF,FMFPC01:
                                  FMFPC02,FMFPC03,FMFPC04,FMFPC05,FMFPC06:
                                  FMFPC07,FMFPC08,FMFPC09,FMFPC10,FMFPC11:
                                  FMFPC12,FMFPC13,FMFPABF,FMFPA01,FMFPA02:
                                  FMFPA03,FMFPA04,FMFPA05,FMFPA06,FMFPA07:
                                  FMFPA08,FMFPA09,FMFPA10,FMFPA11,FMFPA12:
                                  FMFPA13,FMFPCOM,FMFPCBFD,FMFPC01D,FMFPC02D:
                                  FMFPC03D,FMFPC04D,FMFPC05D,FMFPC06D,FMFPC07D:
                                  FMFPC08D,FMFPC09D,FMFPC10D,FMFPC11D,FMFPC12D:
                                  FMFPC13D,FMFPABFD,FMFPA01D,FMFPA02D,FMFPA03D:
                                  FMFPA04D,FMFPA05D,FMFPA06D,FMFPA07D,FMFPA08D:
                                  FMFPA09D,FMFPA10D,FMFPA11D,FMFPA12D,FMFPA13D:
                                  FMFPCOMD,FMFPCBFT,FMFPC01T,FMFPC02T,FMFPC03T:
                                  FMFPC04T,FMFPC05T,FMFPC06T,FMFPC07T,FMFPC08T:
                                  FMFPC09T,FMFPC10T,FMFPC11T,FMFPC12T,FMFPC13T:
                                  FMFPABFT,FMFPA01T,FMFPA02T,FMFPA03T,FMFPA04T:
                                  FMFPA05T,FMFPA06T,FMFPA07T,FMFPA08T,FMFPA09T:
                                  FMFPA10T,FMFPA11T,FMFPA12T,FMFPA13T,FMFPCOMT:
                                  FMFPCOM2,FMFPSPAR
          RETURN
.
WRFMFP2   RESET     KEY14
          WRITE     FMSFPSA2,KEY14;FMFPCULD,FMFPCUAC,FMFPCBF,FMFPC01:
                                  FMFPC02,FMFPC03,FMFPC04,FMFPC05,FMFPC06:
                                  FMFPC07,FMFPC08,FMFPC09,FMFPC10,FMFPC11:
                                  FMFPC12,FMFPC13,FMFPABF,FMFPA01,FMFPA02:
                                  FMFPA03,FMFPA04,FMFPA05,FMFPA06,FMFPA07:
                                  FMFPA08,FMFPA09,FMFPA10,FMFPA11,FMFPA12:
                                  FMFPA13,FMFPCOM,FMFPCBFD,FMFPC01D,FMFPC02D:
                                  FMFPC03D,FMFPC04D,FMFPC05D,FMFPC06D,FMFPC07D:
                                  FMFPC08D,FMFPC09D,FMFPC10D,FMFPC11D,FMFPC12D:
                                  FMFPC13D,FMFPABFD,FMFPA01D,FMFPA02D,FMFPA03D:
                                  FMFPA04D,FMFPA05D,FMFPA06D,FMFPA07D,FMFPA08D:
                                  FMFPA09D,FMFPA10D,FMFPA11D,FMFPA12D,FMFPA13D:
                                  FMFPCOMD,FMFPCBFT,FMFPC01T,FMFPC02T,FMFPC03T:
                                  FMFPC04T,FMFPC05T,FMFPC06T,FMFPC07T,FMFPC08T:
                                  FMFPC09T,FMFPC10T,FMFPC11T,FMFPC12T,FMFPC13T:
                                  FMFPABFT,FMFPA01T,FMFPA02T,FMFPA03T,FMFPA04T:
                                  FMFPA05T,FMFPA06T,FMFPA07T,FMFPA08T,FMFPA09T:
                                  FMFPA10T,FMFPA11T,FMFPA12T,FMFPA13T,FMFPCOMT:
                                  FMFPCOM2,FMFPSPAR
          RETURN
.
DEFMFP2   RESET     KEY14
          DELETE    FMSFPSA2,KEY14
          RETURN
.
