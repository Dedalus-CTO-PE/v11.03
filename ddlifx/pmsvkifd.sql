create table pmsvkiaf
(
  pmvkcode    char(5) default ' ' not null,
  pmvkkkwd    char(30) default ' ' not null,
  pmvkspar    char(25) default ' ' not null,
  lf          char(1)
);
create unique index pmsvkia1 on pmsvkiaf
(
pmvkcode,
pmvkkkwd
);
create unique index pmsvkia2 on pmsvkiaf
(
pmvkkkwd,
pmvkcode
);
revoke all on pmsvkiaf from public ; 
grant select on pmsvkiaf to public ; 
