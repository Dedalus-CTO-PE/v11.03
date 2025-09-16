create table oproruaf
(
  opoudate    varchar2(6) default ' ' not null,
  opouroom    varchar2(6) default ' ' not null,
  opoubcas    number(6,0) default 0 not null,
  opoubopr    number(6,0) default 0 not null,
  opoubtim    number(7,0) default 0 not null,
  opoutcas    number(6,0) default 0 not null,
  opoutopr    number(6,0) default 0 not null,
  opouttim    number(7,0) default 0 not null,
  opouecas    number(6,0) default 0 not null,
  opoueopr    number(6,0) default 0 not null,
  opouetim    number(7,0) default 0 not null,
  opouaval    number(7,0) default 0 not null,
  opouspar    varchar2(23) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprorua1 primary key( 
opoudate,
opouroom)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
