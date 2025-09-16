create table pmsoesaf
(
pmosvisn    char(8),
pmoscntr    char(3),
pmosscnt    char(3),
pmosrtyp    char(1),
pmositem    char(9),
pmosquan    char(3),
pmospdte    char(8),
pmoscdte    char(8),
pmosctim    char(8),
pmosspar    char(30),
lf          char(1)
);
create unique index pmsoesa1 on pmsoesaf
(
pmosvisn,
pmoscntr,
pmosscnt
);
revoke all on pmsoesaf from public ; 
grant select on pmsoesaf to public ; 
