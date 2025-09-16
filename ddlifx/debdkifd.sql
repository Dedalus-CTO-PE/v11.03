create table debdkiaf
(
  dbdkdeb     char(8) default ' ' not null,
  dbdkkwd     char(15) default ' ' not null,
  dbdkspa     char(10) default ' ' not null,
  lf          char(1)
);
create unique index debdkia1 on debdkiaf
(
dbdkdeb,
dbdkkwd
);
create unique index debdkia2 on debdkiaf
(
dbdkkwd,
dbdkdeb
);
revoke all on debdkiaf from public ; 
grant select on debdkiaf to public ; 
