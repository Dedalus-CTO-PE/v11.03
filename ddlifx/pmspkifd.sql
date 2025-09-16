create table pmspkiaf
(
pmpkhcgc    char(12),
pmpkkkwd    char(15),
pmpkspar    char(20),
lf          char(1)
);
create unique index pmspkia1 on pmspkiaf
(
pmpkhcgc,
pmpkkkwd
);
create unique index pmspkia2 on pmspkiaf
(
pmpkkkwd,
pmpkhcgc
);
revoke all on pmspkiaf from public ; 
grant select on pmspkiaf to public ; 
