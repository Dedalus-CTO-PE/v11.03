create table weblabaf
(
wblbsyst    char(1),
wblbnuml    char(3),
wblbdeft    char(1),
wblbspar    char(30),
lf          char(1)
);
create unique index weblaba1 on weblabaf
(
wblbsyst,
wblbnuml
);
revoke all on weblabaf from public ; 
grant select on weblabaf to public ; 
