create table vismdtaf
(
vsmdvisn    char(8),
vsmdtype    char(3),
vsmdnote    char(6),
vsmddate    char(8),
vsmdtime    char(8),
vsmduser    char(10),
vsmdoccg    char(3),
vsmddelt    char(1),
vsmdddat    char(8),
vsmddtim    char(8),
vsmdduse    char(10),
vsmddocc    char(3),
vsmdspar    char(127),
lf          char(1)
);
create unique index vismdta1 on vismdtaf
(
vsmdvisn,
vsmdtype,
vsmdnote
);
revoke all on vismdtaf from public ; 
grant select on vismdtaf to public ; 
