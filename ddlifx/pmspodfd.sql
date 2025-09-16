create table pmspodaf
(
pmpovisn    char(8),
pmpocode    char(6),
pmpoocnt    char(3),
pmpograd    char(1),
pmpodelt    char(1),
pmpouniq    char(10),
pmpowebc    char(10),
pmpodatc    char(8),
pmpotimc    char(8),
pmpowebu    char(10),
pmpodatu    char(8),
pmpotimu    char(8),
pmpospar    char(30),
lf          char(1)
);
create unique index pmspoda1 on pmspodaf
(
pmpovisn,
pmpoocnt
);
revoke all on pmspodaf from public ; 
grant select on pmspodaf to public ; 
