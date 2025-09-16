create table oprnkiaf
(
opnkitm     char(6),
opnkkwd     char(15),
opnkspa     char(13),
lf          char(1)
);
create unique index oprnkia1 on oprnkiaf
(
opnkitm,
opnkkwd
);
create unique index oprnkia2 on oprnkiaf
(
opnkkwd,
opnkitm
);
revoke all on oprnkiaf from public ; 
grant select on oprnkiaf to public ; 
