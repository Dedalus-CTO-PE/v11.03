create table mehleraf
(
  dmhlradm    char(8) default ' ' not null,
  mhlrdate    char(8) default ' ' not null,
  mhlrtime    char(8) default ' ' not null,
  mhlrcode    char(3) default ' ' not null,
  mhlrspar    char(22) default ' ' not null,
  lf          char(1)
);
create unique index mehlera1 on mehleraf
(
dmhlradm,
mhlrdate,
mhlrtime
);
revoke all on mehleraf from public ; 
grant select on mehleraf to public ; 
