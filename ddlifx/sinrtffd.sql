create table sinrtfaf
(
sirtpor     char(2),
sirtuni     char(3),
sirtwar     char(5),
sirtcat     char(7),
sirtreq     decimal(14,2),
sirtiss     decimal(14,2),
sirtspa     char(20),
lf          char(1)
);
create unique index sinrtfa1 on sinrtfaf
(
sirtpor,
sirtuni
);
revoke all on sinrtfaf from public ; 
grant select on sinrtfaf to public ; 
