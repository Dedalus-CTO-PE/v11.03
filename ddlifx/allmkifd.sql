create table allmkiaf
(
  almkcode    char(20) default ' ' not null,
  almkkwrd    char(60) default ' ' not null,
  almkspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index allmkia1 on allmkiaf
(
almkcode,
almkkwrd
);
create unique index allmkia2 on allmkiaf
(
almkkwrd,
almkcode
);
revoke all on allmkiaf from public ; 
grant select on allmkiaf to public ; 
