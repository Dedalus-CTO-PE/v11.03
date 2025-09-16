create table pmsboraf
(
pmbofiel    char(8),
pmboflno    char(3),
pmbodeft    char(1),
pmbocode    char(10),
pmbospar    char(50),
lf          char(1)
);
create unique index pmsbora1 on pmsboraf
(
pmbofiel
);
create unique index pmsbora2 on pmsboraf
(
pmboflno
);
revoke all on pmsboraf from public ; 
grant select on pmsboraf to public ; 
