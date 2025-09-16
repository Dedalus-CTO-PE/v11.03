create table nhiauddn
(
nhdnaudd    char(8),
nhdnaudt    char(8),
nhdnaudp    char(2),
nhdnaudr    char(1),
nhdnauds    decimal(1,0),
nhdnaudo    char(4),
nhdnnmpi    char(7),
nhdndonr    char(10),
nhdncnsu    char(25),
nhdncng1    char(20),
nhdncng2    char(20),
nhdncng3    char(20),
nhdncnpi    char(1),
nhdncna1    char(35),
nhdncna2    char(30),
nhdncna3    char(30),
nhdncna4    char(30),
nhdncna5    char(30),
nhdncrel    char(2),
nhdncwph    char(25),
nhdncaph    char(25),
nhdndat     char(8),
nhdntim     char(8),
nhdnspa     char(30),
lf          char(1)
);
create index nhiauddn on nhiauddn
(
nhdnaudd,
nhdnaudt,
nhdnaudp,
nhdnaudr
);
revoke all on nhiauddn from public ; 
grant select on nhiauddn to public ; 
create table nhidnraf
(
nhdnnmpi    char(7),
nhdndonr    char(10),
nhdncnsu    char(25),
nhdncng1    char(20),
nhdncng2    char(20),
nhdncng3    char(20),
nhdncnpi    char(1),
nhdncna1    char(35),
nhdncna2    char(30),
nhdncna3    char(30),
nhdncna4    char(30),
nhdncna5    char(30),
nhdncrel    char(2),
nhdncwph    char(25),
nhdncaph    char(25),
nhdndat     char(8),
nhdntim     char(8),
nhdnspa     char(30),
lf          char(1)
);
create unique index nhidnra1 on nhidnraf
(
nhdnnmpi
);
revoke all on nhidnraf from public ; 
grant select on nhidnraf to public ; 
