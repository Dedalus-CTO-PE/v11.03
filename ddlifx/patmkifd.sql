create table patmkiaf
(
ptmkcode    char(26),
ptmkkkwd    char(30),
ptmkdclm    char(3),
ptmkspar    char(27),
lf          char(1)
);
create unique index patmkia1 on patmkiaf
(
ptmkcode,
ptmkkkwd
);
create unique index patmkia2 on patmkiaf
(
ptmkkkwd,
ptmkcode
);
create unique index patmkia3 on patmkiaf
(
ptmkdclm,
ptmkkkwd,
ptmkcode
);
revoke all on patmkiaf from public ; 
grant select on patmkiaf to public ; 
