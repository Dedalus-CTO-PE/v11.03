create table nzptf1af
(
nztfhosp    char(3),
nztfsest    char(3),
nztfclam    char(3),
nztffund    char(6),
nztfftab    char(8),
nztfedat    char(8),
nztfiseq    char(2),
nztfactv    char(1),
nztfmuni    decimal(5,0),
nztfuntp    decimal(14,2),
nztfminu    decimal(5,0),
nztfmaxu    decimal(5,0),
nztfcdat    char(8),
nztfctim    char(8),
nztfcuid    char(10),
nztfudat    char(8),
nztfutim    char(8),
nztfuuid    char(10),
nztfspar    char(100),
lf          char(1)
);
create unique index nzptf1a1 on nzptf1af
(
nztfhosp,
nztfsest,
nztfclam,
nztffund,
nztfftab,
nztfedat,
nztfiseq
);
create unique index nzptf1a2 on nzptf1af
(
nztfhosp,
nztfiseq,
nztfsest,
nztfclam,
nztffund,
nztfftab,
nztfedat
);
revoke all on nzptf1af from public ; 
grant select on nzptf1af to public ; 
