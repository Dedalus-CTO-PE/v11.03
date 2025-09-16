create table pmsgkiaf
(
  pmgkcode    char(3) default ' ' not null,
  pmgkkkwd    char(30) default ' ' not null,
  pmgkspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index pmsgkia1 on pmsgkiaf
(
pmgkcode,
pmgkkkwd
);
create unique index pmsgkia2 on pmsgkiaf
(
pmgkkkwd,
pmgkcode
);
revoke all on pmsgkiaf from public ; 
grant select on pmsgkiaf to public ; 
