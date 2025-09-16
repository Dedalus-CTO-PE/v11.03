create table patnadaf
(
ptndurno    char(8),
ptndrdat    char(8),
ptndscor    char(3),
ptndnrdt    char(8),
ptndprov    char(6),
ptndpvty    decimal(1,0),
ptndcodp    char(6),
ptndadat    char(8),
ptndcom1    char(30),
ptndcom2    char(30),
ptnspare    char(10),
lf          char(1)
);
create unique index patnada1 on patnadaf
(
ptndurno,
ptndrdat
);
create unique index patnada2 on patnadaf
(
ptndcodp,
ptndnrdt,
ptndurno,
ptndrdat
);
revoke all on patnadaf from public ; 
grant select on patnadaf to public ; 
