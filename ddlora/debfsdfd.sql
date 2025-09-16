create table debfsdaf
(
  dbsdstat    varchar2(10) default ' ' not null,
  dbsddebc    varchar2(8) default ' ' not null,
  dbsdline    varchar2(5) default ' ' not null,
  dbsdtype    varchar2(1) default ' ' not null,
  dbsddesc    varchar2(80) default ' ' not null,
  dbsdamnt    number(14,2) default 0 not null,
  dbsdgst     number(14,2) default 0 not null,
  dbsdtota    number(14,2) default 0 not null,
  dbsdspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint debfsda1 primary key( 
dbsdstat,
dbsddebc,
dbsdline)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
