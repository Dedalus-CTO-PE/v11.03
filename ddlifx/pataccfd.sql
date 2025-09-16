create table pataccaf
(
ptasclam    char(3),
ptasatyp    char(3),
dptasday    char(3),
ptasaccs    char(3),
ptasprac    char(3),
ptasspar    char(27),
lf          char(1)
);
create unique index patacca1 on pataccaf
(
ptasclam,
ptasatyp,
dptasday
);
revoke all on pataccaf from public ; 
grant select on pataccaf to public ; 
