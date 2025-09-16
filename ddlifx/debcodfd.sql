create table debaudcd
(
  dbcdaudd    char(8) default ' ' not null,
  dbcdaudt    char(8) default ' ' not null,
  dbcdaudp    char(2) default ' ' not null,
  dbcdaudr    char(1) default ' ' not null,
  dbcdauds    decimal(1,0) default 0 not null,
  dbcdaudo    char(4) default ' ' not null,
  dbcdcat     char(4) default ' ' not null,
  dbcdcod     char(3) default ' ' not null,
  dbcddes     char(35) default ' ' not null,
  dbcdact     decimal(1,0) default 0 not null,
  dbcdspa     char(50) default ' ' not null,
  lf          char(1)
);
create index debaudcd on debaudcd
(
dbcdaudd,
dbcdaudt,
dbcdaudp,
dbcdaudr
);
revoke all on debaudcd from public ; 
grant select on debaudcd to public ; 
create table debcodaf
(
  dbcdcat     char(4) default ' ' not null,
  dbcdcod     char(3) default ' ' not null,
  dbcddes     char(35) default ' ' not null,
  dbcdact     decimal(1,0) default 0 not null,
  dbcdspa     char(50) default ' ' not null,
  lf          char(1)
);
create unique index debcoda1 on debcodaf
(
dbcdcat,
dbcdcod
);
create unique index debcoda2 on debcodaf
(
dbcdcod,
dbcdcat
);
revoke all on debcodaf from public ; 
grant select on debcodaf to public ; 
