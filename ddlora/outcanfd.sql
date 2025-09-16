create table outcanaf
(
  opcnsite    varchar2(6) default ' ' not null,
  opcnclin    varchar2(6) default ' ' not null,
  opcndate    varchar2(8) default ' ' not null,
  opcnstrt    varchar2(5) default ' ' not null,
  dopcnslo    varchar2(3) default ' ' not null,
  opcntime    varchar2(5) default ' ' not null,
  dopcnout    varchar2(8) default ' ' not null,
  opcnurno    varchar2(8) default ' ' not null,
  opcnreas    varchar2(3) default ' ' not null,
  opcnrdte    varchar2(8) default ' ' not null,
  opcnrtim    varchar2(8) default ' ' not null,
  opcnsrcr    varchar2(3) default ' ' not null,
  opcncomp    varchar2(3) default ' ' not null,
  opcnclas    varchar2(3) default ' ' not null,
  opcnins     varchar2(3) default ' ' not null,
  opcncat     varchar2(3) default ' ' not null,
  opcnprty    varchar2(3) default ' ' not null,
  opcnoper    varchar2(4) default ' ' not null,
  opcntran    varchar2(3) default ' ' not null,
  opcnvtyp    varchar2(3) default ' ' not null,
  opcnrlrr    varchar2(3) default ' ' not null,
  opcnctyp    varchar2(6) default ' ' not null,
  opcnnmds    varchar2(3) default ' ' not null,
  opcnsrvc    varchar2(3) default ' ' not null,
  opcncart    varchar2(3) default ' ' not null,
  opcnrefn    varchar2(8) default ' ' not null,
  opcntcod    varchar2(3) default ' ' not null,
  opcnbkdt    varchar2(16) default ' ' not null,
  opcnspar    varchar2(8) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outcana1 primary key( 
dopcnout)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outcana2 on outcanaf
(
opcnurno,
opcndate,
dopcnout
)
  tablespace pas_indx; 
create unique index outcana3 on outcanaf
(
opcnsite,
opcnclin,
opcndate,
opcnstrt,
dopcnout
)
  tablespace pas_indx; 
create unique index outcana4 on outcanaf
(
opcnsite,
opcnrdte,
dopcnout
)
  tablespace pas_indx; 
create unique index outcana5 on outcanaf
(
opcnsite,
opcndate,
dopcnout
)
  tablespace pas_indx; 
