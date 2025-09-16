create table oprcpiaf
(
  opciuniq    varchar2(10) default ' ' not null,
  opcicomp    varchar2(3) default ' ' not null,
  opcicntr    varchar2(2) default ' ' not null,
  opcicomm    varchar2(200) default ' ' not null,
  opcicdat    varchar2(8) default ' ' not null,
  opcictim    varchar2(8) default ' ' not null,
  opcicuid    varchar2(10) default ' ' not null,
  opciudat    varchar2(8) default ' ' not null,
  opciutim    varchar2(8) default ' ' not null,
  opciuuid    varchar2(10) default ' ' not null,
  opcidelt    varchar2(1) default ' ' not null,
  opciudel    varchar2(10) default ' ' not null,
  opcispar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprcpia1 primary key( 
opciuniq,
opcicomp,
opcicntr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index oprcpia2 on oprcpiaf
(
opciuniq,
opcicdat,
opcictim,
opcicomp,
opcicntr
)
  tablespace pas_indx; 
