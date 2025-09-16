create table paticdgf
(
gidcode     char(1),
ggpcode     char(4),
gdesc       char(70),
lf          char(1)
);
create unique index paticdg1 on paticdgf
(
gidcode,
ggpcode
);
revoke all on paticdgf from public ; 
grant select on paticdgf to public ; 
