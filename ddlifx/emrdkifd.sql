create table emrdkiaf
(
  emdkdoc     char(10) default ' ' not null,
  emdkkwd     char(15) default ' ' not null,
  emdkspa     char(10) default ' ' not null,
  lf          char(1)
);
create unique index emrdkia1 on emrdkiaf
(
emdkdoc,
emdkkwd
);
create unique index emrdkia2 on emrdkiaf
(
emdkkwd,
emdkdoc
);
revoke all on emrdkiaf from public ; 
grant select on emrdkiaf to public ; 
