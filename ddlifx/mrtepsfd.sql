create table mrtepsaf
(
mrepeid     char(4),
mrepvis     char(8),
mreplev1    char(10),
mreplev2    char(10),
mreplev3    char(10),
mreplev4    char(10),
mrepanl1    decimal(16,4),
mrepanl2    decimal(16,4),
mrepanl3    decimal(16,4),
mrepdel     char(1),
mrepspar    char(20),
lf          char(1)
);
create unique index mrtepsa1 on mrtepsaf
(
mrepeid,
mrepvis
);
create unique index mrtepsa2 on mrtepsaf
(
mreplev1,
mreplev2,
mreplev3,
mreplev4,
mrepeid,
mrepvis
);
revoke all on mrtepsaf from public ; 
grant select on mrtepsaf to public ; 
