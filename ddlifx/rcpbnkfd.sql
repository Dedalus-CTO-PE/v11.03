create table rcpbnkaf
(
rcbnrecn    char(12),
rcbntdat    char(8),
rcbntotp    decimal(14,2),
rcbncdrw    char(6),
rcbnmhos    char(3),
rcbnmdhs    char(2),
rcbnttyp    char(1),
rcbnrcod    char(6),
rcbnstat    char(1),
rcbnbdat    char(8),
rcbnbtim    char(8),
rcbnrdat    char(8),
rcbnrtim    char(8),
rcbnchqa    char(15),
rcbncdat    char(8),
rcbnctim    char(8),
rcbncuid    char(10),
rcbnudat    char(8),
rcbnutim    char(8),
rcbnuuid    char(10),
rcbnspar    char(49),
lf          char(1)
);
create unique index rcpbnka1 on rcpbnkaf
(
rcbnrecn
);
create unique index rcpbnka2 on rcpbnkaf
(
rcbntdat,
rcbncdrw,
rcbnrecn
);
create unique index rcpbnka3 on rcpbnkaf
(
rcbnrdat,
rcbncdrw,
rcbnrecn
);
create unique index rcpbnka4 on rcpbnkaf
(
rcbnbdat,
rcbnrdat,
rcbncdrw,
rcbnrecn
);
revoke all on rcpbnkaf from public ; 
grant select on rcpbnkaf to public ; 
