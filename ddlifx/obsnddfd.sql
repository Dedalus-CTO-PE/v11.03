create table obsnddaf
(
  obndvisn    char(8) default ' ' not null,
  obndndg1    char(80) default ' ' not null,
  obndacp1    char(80) default ' ' not null,
  obndndg2    char(80) default ' ' not null,
  obndacp2    char(80) default ' ' not null,
  obndndg3    char(80) default ' ' not null,
  obndacp3    char(80) default ' ' not null,
  obndndg4    char(80) default ' ' not null,
  obndacp4    char(80) default ' ' not null,
  obndndg5    char(80) default ' ' not null,
  obndacp5    char(80) default ' ' not null,
  obndndg6    char(80) default ' ' not null,
  obndacp6    char(80) default ' ' not null,
  obndspar    char(80) default ' ' not null,
  lf          char(1)
);
create unique index obsndda1 on obsnddaf
(
obndvisn
);
revoke all on obsnddaf from public ; 
grant select on obsnddaf to public ; 
