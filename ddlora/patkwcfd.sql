create table patkwcyy
(
  ptkwcard    varchar2(20) default ' ' not null,
  ptkwurno    varchar2(8) default ' ' not null,
  ptkwdays    number(3,0) default 0 not null,
  ptkwvisi    number(3,0) default 0 not null,
  ptkwspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patkwca1 primary key( 
ptkwcard,
ptkwurno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patkwca2 on patkwcyy
(
ptkwurno,
ptkwcard
)
  tablespace pas_indx; 
