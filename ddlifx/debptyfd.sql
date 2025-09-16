create table debaudpt
(
  dbptaudd    char(8) default ' ' not null,
  dbptaudt    char(8) default ' ' not null,
  dbptaudp    char(2) default ' ' not null,
  dbptaudr    char(1) default ' ' not null,
  dbptauds    decimal(1,0) default 0 not null,
  dbptaudo    char(4) default ' ' not null,
  dbptpty     char(8) default ' ' not null,
  dbptdes     char(35) default ' ' not null,
  dbptact     decimal(1,0) default 0 not null,
  dbptdep     char(8) default ' ' not null,
  dbptur1     char(25) default ' ' not null,
  dbptur2     char(25) default ' ' not null,
  dbptud1     char(8) default ' ' not null,
  dbptud2     char(8) default ' ' not null,
  dbptuy1     char(1) default ' ' not null,
  dbptuy2     char(1) default ' ' not null,
  dbptuc1     char(3) default ' ' not null,
  dbptuc2     char(3) default ' ' not null,
  dbptspa     char(20) default ' ' not null,
  lf          char(1)
);
create index debaudpt on debaudpt
(
dbptaudd,
dbptaudt,
dbptaudp,
dbptaudr
);
revoke all on debaudpt from public ; 
grant select on debaudpt to public ; 
create table debptyaf
(
  dbptpty     char(8) default ' ' not null,
  dbptdes     char(35) default ' ' not null,
  dbptact     decimal(1,0) default 0 not null,
  dbptdep     char(8) default ' ' not null,
  dbptur1     char(25) default ' ' not null,
  dbptur2     char(25) default ' ' not null,
  dbptud1     char(8) default ' ' not null,
  dbptud2     char(8) default ' ' not null,
  dbptuy1     char(1) default ' ' not null,
  dbptuy2     char(1) default ' ' not null,
  dbptuc1     char(3) default ' ' not null,
  dbptuc2     char(3) default ' ' not null,
  dbptspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index debptya1 on debptyaf
(
dbptpty
);
create unique index debptya2 on debptyaf
(
dbptdep,
dbptpty
);
create unique index debptya3 on debptyaf
(
dbptdes,
dbptpty
);
revoke all on debptyaf from public ; 
grant select on debptyaf to public ; 
