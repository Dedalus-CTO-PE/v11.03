create table outcanaf
(
  opcnsite    char(6) default ' ' not null,
  opcnclin    char(6) default ' ' not null,
  opcndate    char(8) default ' ' not null,
  opcnstrt    char(5) default ' ' not null,
  dopcnslo    char(3) default ' ' not null,
  opcntime    char(5) default ' ' not null,
  dopcnout    char(8) default ' ' not null,
  opcnurno    char(8) default ' ' not null,
  opcnreas    char(3) default ' ' not null,
  opcnrdte    char(8) default ' ' not null,
  opcnrtim    char(8) default ' ' not null,
  opcnsrcr    char(3) default ' ' not null,
  opcncomp    char(3) default ' ' not null,
  opcnclas    char(3) default ' ' not null,
  opcnins     char(3) default ' ' not null,
  opcncat     char(3) default ' ' not null,
  opcnprty    char(3) default ' ' not null,
  opcnoper    char(4) default ' ' not null,
  opcntran    char(3) default ' ' not null,
  opcnvtyp    char(3) default ' ' not null,
  opcnrlrr    char(3) default ' ' not null,
  opcnctyp    char(6) default ' ' not null,
  opcnnmds    char(3) default ' ' not null,
  opcnsrvc    char(3) default ' ' not null,
  opcncart    char(3) default ' ' not null,
  opcnrefn    char(8) default ' ' not null,
  opcntcod    char(3) default ' ' not null,
  opcnbkdt    char(16) default ' ' not null,
  opcnspar    char(8) default ' ' not null,
  lf          char(1)
);
create unique index outcana1 on outcanaf
(
dopcnout
);
create unique index outcana2 on outcanaf
(
opcnurno,
opcndate,
dopcnout
);
create unique index outcana3 on outcanaf
(
opcnsite,
opcnclin,
opcndate,
opcnstrt,
dopcnout
);
create unique index outcana4 on outcanaf
(
opcnsite,
opcnrdte,
dopcnout
);
create unique index outcana5 on outcanaf
(
opcnsite,
opcndate,
dopcnout
);
revoke all on outcanaf from public ; 
grant select on outcanaf to public ; 
