create table allercaf
(
  alerphot    varchar2(8) default ' ' not null,
  alerlasr    varchar2(1) default ' ' not null,
  alerposs    varchar2(1) default ' ' not null,
  alercar     varchar2(1) default ' ' not null,
  alercarh    varchar2(1) default ' ' not null,
  alernvie    number(3,0) default 0 not null,
  alerntra    number(3,0) default 0 not null,
  alernneg    number(3,0) default 0 not null,
  alernbwp    number(3,0) default 0 not null,
  alernclp    number(3,0) default 0 not null,
  alernvid    number(3,0) default 0 not null,
  alervisn    varchar2(8) default ' ' not null,
  alerenct    varchar2(8) default ' ' not null,
  alercdat    varchar2(8) default ' ' not null,
  alerctim    varchar2(8) default ' ' not null,
  alercuid    varchar2(10) default ' ' not null,
  alerudat    varchar2(8) default ' ' not null,
  alerutim    varchar2(8) default ' ' not null,
  aleruuid    varchar2(10) default ' ' not null,
  alerdsnt    varchar2(8) default ' ' not null,
  alerstff    varchar2(20) default ' ' not null,
  alerndig    number(3,0) default 0 not null,
  alerspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allerca1 primary key( 
alerphot)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index allerca2 on allercaf
(
alervisn,
alerenct,
alerphot
)
  tablespace pas_indx; 
