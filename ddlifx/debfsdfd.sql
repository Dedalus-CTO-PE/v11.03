create table debfsdaf
(
  dbsdstat    char(10) default ' ' not null,
  dbsddebc    char(8) default ' ' not null,
  dbsdline    char(5) default ' ' not null,
  dbsdtype    char(1) default ' ' not null,
  dbsddesc    char(80) default ' ' not null,
  dbsdamnt    decimal(14,2) default 0 not null,
  dbsdgst     decimal(14,2) default 0 not null,
  dbsdtota    decimal(14,2) default 0 not null,
  dbsdspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index debfsda1 on debfsdaf
(
dbsdstat,
dbsddebc,
dbsdline
);
revoke all on debfsdaf from public ; 
grant select on debfsdaf to public ; 
