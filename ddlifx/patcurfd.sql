create table patcuraf
(
dcmurno     char(8),
dcmurlno    char(3),
cmurline    char(70),
lf          char(1)
);
create unique index patcura1 on patcuraf
(
dcmurno,
dcmurlno
);
revoke all on patcuraf from public ; 
grant select on patcuraf to public ; 
