create table webpldaf
(
wbpdwuid    char(10),
wbpdlnum    char(3),
wbpddesc    char(30),
wbpdbspg    char(3),
wbpdspar    char(80),
lf          char(1)
);
create unique index webplda1 on webpldaf
(
wbpdwuid,
wbpdlnum
);
revoke all on webpldaf from public ; 
grant select on webpldaf to public ; 
