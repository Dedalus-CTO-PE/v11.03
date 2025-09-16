create table csmcifaf
(
csifcat     char(7),
csifde01    char(60),
csifde02    char(60),
csifde03    char(60),
csifde04    char(60),
csifde05    char(60),
csifde06    char(60),
csifde07    char(60),
csifde08    char(60),
csifspa     char(20),
lf          char(1)
);
create unique index csmcifa1 on csmcifaf
(
csifcat
);
revoke all on csmcifaf from public ; 
grant select on csmcifaf to public ; 
