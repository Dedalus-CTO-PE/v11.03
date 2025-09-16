create table nzptfeaf
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
create unique index nzptfea1 on nzptfeaf
(
nztfhosp,
nztfsest,
nztfclam,
nztffund,
nztfftab,
nztfedat,
nztfiseq
);
create unique index nzptfea2 on nzptfeaf
(
nztfhosp,
nztfiseq,
nztfsest,
nztfclam,
nztffund,
nztfftab,
nztfedat
);
revoke all on nzptfeaf from public ; 
grant select on nzptfeaf to public ; 
