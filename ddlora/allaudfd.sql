create table allaudaf
(
  alauvisn    varchar2(8) default ' ' not null,
  alauadat    varchar2(8) default ' ' not null,
  alauatim    varchar2(8) default ' ' not null,
  alauauid    varchar2(10) default ' ' not null,
  alauacti    varchar2(3) default ' ' not null,
  alauupdt    varchar2(2) default ' ' not null,
  alaucomm    varchar2(50) default ' ' not null,
  alauudat    varchar2(8) default ' ' not null,
  alauutim    varchar2(8) default ' ' not null,
  alauuuid    varchar2(10) default ' ' not null,
  alauspar    varchar2(24) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allauda1 primary key( 
alauvisn,
alauadat,
alauatim)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index allauda2 on allaudaf
(
alauvisn,
alauupdt,
alauadat,
alauatim
)
  tablespace pas_indx; 
create unique index allauda3 on allaudaf
(
alauadat,
alauatim,
alauvisn
)
  tablespace pas_indx; 
