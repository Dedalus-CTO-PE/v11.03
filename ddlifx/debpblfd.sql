create table debpblaf
(
  dbpbdeb     char(8) default ' ' not null,
  dbpbuni     char(3) default ' ' not null,
  dbpbtyp     char(3) default ' ' not null,
  dbpbitm     char(8) default ' ' not null,
  dbpbdref    char(50) default ' ' not null,
  dbpboref    char(50) default ' ' not null,
  dbpbqty     decimal(10,2) default 0 not null,
  dbpbpri     decimal(16,4) default 0 not null,
  dbpbtot     decimal(14,2) default 0 not null,
  dbpbtrt     decimal(6,2) default 0 not null,
  dbpbtax     decimal(14,2) default 0 not null,
  dbpbur1     char(25) default ' ' not null,
  dbpbur2     char(25) default ' ' not null,
  dbpbud1     char(8) default ' ' not null,
  dbpbud2     char(8) default ' ' not null,
  dbpbuy1     char(1) default ' ' not null,
  dbpbuy2     char(1) default ' ' not null,
  dbpbuc1     char(3) default ' ' not null,
  dbpbuc2     char(3) default ' ' not null,
  dbpbuc3     char(3) default ' ' not null,
  dbpbuc4     char(3) default ' ' not null,
  dbpbgst     char(6) default ' ' not null,
  dbpbspa     char(14) default ' ' not null,
  lf          char(1)
);
create unique index debpbla1 on debpblaf
(
dbpbdeb,
dbpbuni
);
revoke all on debpblaf from public ; 
grant select on debpblaf to public ; 
