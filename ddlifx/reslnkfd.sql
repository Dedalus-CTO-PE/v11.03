create table reslnkaf
(
relnlty     char(2),
relnlky     char(10),
relnrdt     char(8),
relnrtm     char(5),
relnrun     char(4),
relnmsn     char(1),
relnsdt     char(8),
relnstm     char(5),
relnspc     char(4),
relnfur     char(1),
relnpid     char(16),
relnucs     char(12),
relnusc     char(12),
relndss     char(10),
relnnor     char(1),
relnrty     char(1),
relnrst     char(2),
relnlab     char(3),
relnspa     char(4),
lf          char(1)
);
create unique index reslnka1 on reslnkaf
(
relnlty,
relnlky,
relnrdt,
relnrtm,
relnrun
);
create unique index reslnka2 on reslnkaf
(
relnlty,
relnlky,
relnmsn,
relnrdt,
relnrtm,
relnrun
);
create unique index reslnka3 on reslnkaf
(
relnrdt,
relnrtm,
relnrun,
relnlty,
relnlky
);
create unique index reslnka4 on reslnkaf
(
relnpid,
relnlty,
relnlky,
relnrdt,
relnrtm,
relnrun
);
revoke all on reslnkaf from public ; 
grant select on reslnkaf to public ; 
