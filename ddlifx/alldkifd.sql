create table alldkiaf
(
  aldkdept    char(3) default ' ' not null,
  aldkdiag    char(9) default ' ' not null,
  aldkkkwd    char(15) default ' ' not null,
  aldkspar    char(25) default ' ' not null,
  lf          char(1)
);
create unique index alldkia1 on alldkiaf
(
aldkdept,
aldkdiag,
aldkkkwd
);
create unique index alldkia2 on alldkiaf
(
aldkdept,
aldkkkwd,
aldkdiag
);
revoke all on alldkiaf from public ; 
grant select on alldkiaf to public ; 
