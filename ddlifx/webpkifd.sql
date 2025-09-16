create table webpkiaf
(
  wbpkcode    char(3) default ' ' not null,
  wbpkkkwd    char(50) default ' ' not null,
  wbpkspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webpkia1 on webpkiaf
(
wbpkcode,
wbpkkkwd
);
create unique index webpkia2 on webpkiaf
(
wbpkkkwd,
wbpkcode
);
revoke all on webpkiaf from public ; 
grant select on webpkiaf to public ; 
