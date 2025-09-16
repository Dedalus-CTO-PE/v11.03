create table pmseshaf
(
pmshfbid    char(3),
pmsharid    char(20),
pmshfrid    char(12),
pmshrptc    char(3),
pmshscod    char(11),
pmshsrvc    char(3),
pmshsdsc    char(80),
pmshnosv    char(2),
pmshcamt    char(9),
pmshfbam    char(9),
pmshfdte    char(8),
pmshtdte    char(8),
pmshsdte    char(8),
pmshspar    char(30),
lf          char(1)
);
create unique index pmsesha1 on pmseshaf
(
pmshfbid,
pmsharid,
pmshfrid,
pmshrptc,
pmshscod,
pmshsrvc
);
revoke all on pmseshaf from public ; 
grant select on pmseshaf to public ; 
