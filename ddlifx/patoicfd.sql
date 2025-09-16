create table patoicaf
(
ptoiicd     char(9),
ptoikwd     char(15),
ptoispa     char(10),
lf          char(1)
);
create unique index patoica1 on patoicaf
(
ptoiicd,
ptoikwd
);
create unique index patoica2 on patoicaf
(
ptoikwd,
ptoiicd
);
revoke all on patoicaf from public ; 
grant select on patoicaf to public ; 
