create table sinlttaf
(
siltled     char(2),
siltcod     char(6),
siltsub     char(12),
siltspa     char(19),
lf          char(1)
);
create unique index sinltta1 on sinlttaf
(
siltled,
siltcod
);
create unique index sinltta2 on sinlttaf
(
siltled,
siltsub,
siltcod
);
create unique index sinltta3 on sinlttaf
(
siltled,
siltcod,
siltsub
);
revoke all on sinlttaf from public ; 
grant select on sinlttaf to public ; 
