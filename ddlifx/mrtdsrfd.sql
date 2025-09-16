create table mrtdsraf
(
mrdsvisn    char(8),
dmrdscnt    char(3),
mrdsdtrq    char(8),
mrdscons    char(10),
mrdsltst    char(3),
mrdscom1    char(100),
mrdscom2    char(100),
mrdscom3    char(100),
mrdscom4    char(100),
mrdscom5    char(100),
mrdsspar    char(80),
lf          char(1)
);
create unique index mrtdsra1 on mrtdsraf
(
mrdsvisn,
dmrdscnt
);
create unique index mrtdsra2 on mrtdsraf
(
mrdsdtrq,
mrdsvisn,
dmrdscnt
);
create unique index mrtdsra3 on mrtdsraf
(
mrdscons,
mrdsvisn,
dmrdscnt
);
revoke all on mrtdsraf from public ; 
grant select on mrtdsraf to public ; 
