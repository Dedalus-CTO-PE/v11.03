create table pcpediaf
(
dpcedtyp    char(2),
pcedcode    char(9),
pcedsub     char(9),
pcedspar    char(10),
lf          char(1)
);
create unique index pcpedia1 on pcpediaf
(
dpcedtyp,
pcedcode,
pcedsub
);
revoke all on pcpediaf from public ; 
grant select on pcpediaf to public ; 
