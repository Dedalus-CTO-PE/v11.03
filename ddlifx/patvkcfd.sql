create table pataudvk
(
ptvkaudd    char(8),
ptvkaudt    char(8),
ptvkaudp    char(2),
ptvkaudr    char(1),
ptvkauds    decimal(1,0),
ptvkaudo    char(4),
dptvkbil    char(8),
ptvkcard    char(20),
ptvkcexp    char(8),
ptvkcxmp    char(3),
ptvkfmly    char(12),
ptvkcomp    char(3),
ptvkspar    char(27),
lf          char(1)
);
create index pataudvk on pataudvk
(
ptvkaudd,
ptvkaudt,
ptvkaudp,
ptvkaudr
);
revoke all on pataudvk from public ; 
grant select on pataudvk to public ; 
create table patvkcaf
(
dptvkbil    char(8),
ptvkcard    char(20),
ptvkcexp    char(8),
ptvkcxmp    char(3),
ptvkfmly    char(12),
ptvkcomp    char(3),
ptvkspar    char(27),
lf          char(1)
);
create unique index patvkca1 on patvkcaf
(
dptvkbil
);
revoke all on patvkcaf from public ; 
grant select on patvkcaf to public ; 
