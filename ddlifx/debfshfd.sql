create table debfshaf
(
  dbshstat    char(10) default ' ' not null,
  dbshdebc    char(8) default ' ' not null,
  dbshdsta    char(8) default ' ' not null,
  dbshtota    decimal(14,2) default 0 not null,
  dbshspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index debfsha1 on debfshaf
(
dbshstat
);
create unique index debfsha2 on debfshaf
(
dbshdebc,
dbshstat
);
revoke all on debfshaf from public ; 
grant select on debfshaf to public ; 
