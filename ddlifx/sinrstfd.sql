create table sinrstaf
(
sirswar     char(5),
sirsrand    char(7),
sirscat     char(7),
sirsspa     char(30),
lf          char(1)
);
create unique index sinrsta1 on sinrstaf
(
sirswar,
sirsrand,
sirscat
);
create unique index sinrsta2 on sinrstaf
(
sirsrand
);
revoke all on sinrstaf from public ; 
grant select on sinrstaf to public ; 
