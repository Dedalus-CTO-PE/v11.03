create table outhisaf
(
  othiurno    varchar2(8) default ' ' not null,
  othievnt    varchar2(8) default ' ' not null,
  othiedat    varchar2(8) default ' ' not null,
  dothiucn    varchar2(4) default ' ' not null,
  othiprio    varchar2(3) default ' ' not null,
  othirank    number(6,0) default 0 not null,
  othispar    varchar2(45) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outhisa1 primary key( 
othiurno,
othievnt,
othiedat,
dothiucn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
