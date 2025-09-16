create table pmsmkiaf
(
pmmkmchr    char(9),
pmmkkkwd    char(15),
pmmkspar    char(10),
lf          char(1)
);
create unique index pmsmkia1 on pmsmkiaf
(
pmmkmchr,
pmmkkkwd
);
create unique index pmsmkia2 on pmsmkiaf
(
pmmkkkwd,
pmmkmchr
);
revoke all on pmsmkiaf from public ; 
grant select on pmsmkiaf to public ; 
