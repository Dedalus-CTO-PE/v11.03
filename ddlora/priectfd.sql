create table priectaf
(
  prechosp    varchar2(3) default ' ' not null,
  dprecflg    varchar2(2) default ' ' not null,
  prechfnd    varchar2(6) default ' ' not null,
  precuniq    varchar2(8) default ' ' not null,
  precinvn    varchar2(8) default ' ' not null,
  precbatn    varchar2(8) default ' ' not null,
  precurno    varchar2(8) default ' ' not null,
  precpbat    varchar2(8) default ' ' not null,
  precnbat    varchar2(8) default ' ' not null,
  prectrid    varchar2(24) default ' ' not null,
  preceetp    varchar2(1) default ' ' not null,
  precamtc    number(14,2) default 0 not null,
  precamfp    number(14,2) default 0 not null,
  precammp    number(14,2) default 0 not null,
  precpdat    varchar2(8) default ' ' not null,
  precstat    varchar2(2) default ' ' not null,
  precftid    varchar2(24) default ' ' not null,
  precprac    varchar2(10) default ' ' not null,
  precspar    varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint priecta1 primary key( 
prechosp,
dprecflg,
prechfnd,
precuniq,
precinvn,
precbatn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index priecta2 on priectaf
(
precinvn,
precbatn
)
  tablespace pas_indx; 
create unique index priecta3 on priectaf
(
precbatn,
precuniq,
precinvn
)
  tablespace pas_indx; 
create unique index priecta4 on priectaf
(
precuniq,
precinvn,
precbatn
)
  tablespace pas_indx; 
create unique index priecta5 on priectaf
(
prechosp,
precurno,
precuniq,
precinvn,
precbatn
)
  tablespace pas_indx; 
create unique index priecta6 on priectaf
(
prectrid,
precinvn,
precbatn
)
  tablespace pas_indx; 
create unique index priecta7 on priectaf
(
precprac,
prechosp,
dprecflg,
prechfnd,
precuniq,
precinvn,
precbatn
)
  tablespace pas_indx; 
