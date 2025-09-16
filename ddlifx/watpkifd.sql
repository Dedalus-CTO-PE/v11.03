create table watpkiaf
(
wtpkcode    char(9),
wtpkkkwd    char(50),
wtpkspar    char(50),
lf          char(1)
);
create unique index watpkia1 on watpkiaf
(
wtpkcode,
wtpkkkwd
);
create unique index watpkia2 on watpkiaf
(
wtpkkkwd,
wtpkcode
);
revoke all on watpkiaf from public ; 
grant select on watpkiaf to public ; 
