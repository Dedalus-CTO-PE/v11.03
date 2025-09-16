create table csmckyaf
(
csckkwd     char(15),
csckcat     char(7),
csckspa     char(10),
lf          char(1)
);
create unique index csmckya1 on csmckyaf
(
csckkwd,
csckcat
);
create unique index csmckya2 on csmckyaf
(
csckcat,
csckkwd
);
revoke all on csmckyaf from public ; 
grant select on csmckyaf to public ; 
