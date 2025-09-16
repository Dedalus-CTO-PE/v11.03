create table priaudit
(
pritaudd    char(8),
pritaudt    char(8),
pritaudp    char(2),
pritaudr    char(1),
pritauds    decimal(1,0),
pritaudo    char(4),
dpritflg    char(2),
prititmn    char(9),
pritsubn    char(3),
pritdat1    char(8),
pritdesc    char(30),
pritkeyi    decimal(1,0),
pritsfee    decimal(14,2),
pritsetc    char(3),
pritdat2    char(8),
priticat    char(3),
pritigrp    char(3),
pritsgrp    char(3),
pritftyp    char(1),
pritptyp    char(3),
pritpath    decimal(1,0),
pritmaxr    decimal(3,0),
pritdays    decimal(3,0),
pritstep    char(9),
pritstsb    char(3),
pritfixd    decimal(1,0),
pritgsta    decimal(1,0),
pritgstc    char(6),
pritsf75    decimal(14,2),
pritsf85    decimal(14,2),
pritsafe    decimal(14,2),
pritpdti    char(1),
pritspar    char(96),
lf          char(1)
);
create index priaudit on priaudit
(
pritaudd,
pritaudt,
pritaudp,
pritaudr
);
revoke all on priaudit from public ; 
grant select on priaudit to public ; 
create table priitemf
(
dpritflg    char(2),
prititmn    char(9),
pritsubn    char(3),
pritdat1    char(8),
pritdesc    char(30),
pritkeyi    decimal(1,0),
pritsfee    decimal(14,2),
pritsetc    char(3),
pritdat2    char(8),
priticat    char(3),
pritigrp    char(3),
pritsgrp    char(3),
pritftyp    char(1),
pritptyp    char(3),
pritpath    decimal(1,0),
pritmaxr    decimal(3,0),
pritdays    decimal(3,0),
pritstep    char(9),
pritstsb    char(3),
pritfixd    decimal(1,0),
pritgsta    decimal(1,0),
pritgstc    char(6),
pritsf75    decimal(14,2),
pritsf85    decimal(14,2),
pritsafe    decimal(14,2),
pritpdti    char(1),
pritspar    char(96),
lf          char(1)
);
create unique index priitem1 on priitemf
(
dpritflg,
prititmn,
pritsubn,
pritdat1
);
create unique index priitem2 on priitemf
(
dpritflg,
pritdesc,
prititmn,
pritsubn,
pritdat1
);
revoke all on priitemf from public ; 
grant select on priitemf to public ; 
