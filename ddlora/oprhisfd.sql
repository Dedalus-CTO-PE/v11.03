create table oprhisaf
(
  ophiurno    varchar2(8) default ' ' not null,
  ophievnt    varchar2(8) default ' ' not null,
  ophiuniq    varchar2(10) default ' ' not null,
  ophiedat    varchar2(8) default ' ' not null,
  dophiucn    varchar2(4) default ' ' not null,
  ophidate    varchar2(8) default ' ' not null,
  ophichgd    varchar2(3) default ' ' not null,
  ophitchg    number(2,0) default 0 not null,
  ophispar    varchar2(43) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprhisa1 primary key( 
ophiurno,
ophievnt,
ophiuniq,
ophiedat,
dophiucn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
