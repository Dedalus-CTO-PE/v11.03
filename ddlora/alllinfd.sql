create table alllinaf
(
  allivisn    varchar2(8) default ' ' not null,
  allilink    varchar2(3) default ' ' not null,
  alliurno    varchar2(8) default ' ' not null,
  allicoid    varchar2(4) default ' ' not null,
  allispar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint alllina1 primary key( 
allivisn,
allilink)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index alllina2 on alllinaf
(
alliurno,
allivisn,
allilink
)
  tablespace pas_indx; 
