create table csmceqaf
(
cscecat     char(7),
cscedbs     char(3),
cscewar     char(5),
csceddes    char(35),
cscewdes    char(35),
cscestk     decimal(1,0),
cscesoh     decimal(14,2),
cscespa     char(20),
lf          char(1)
);
create unique index csmceqa1 on csmceqaf
(
cscecat,
cscedbs,
cscewar
);
revoke all on csmceqaf from public ; 
grant select on csmceqaf to public ; 
