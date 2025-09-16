create table pataudca
(
ptcaaudd    char(8),
ptcaaudt    char(8),
ptcaaudp    char(2),
ptcaaudr    char(1),
ptcaauds    decimal(1,0),
ptcaaudo    char(4),
ptcacode    char(9),
ptcades1    char(30),
ptcades2    char(30),
ptcaelos    decimal(4,0),
ptcaactv    decimal(1,0),
ptcspare    char(20),
lf          char(1)
);
create index pataudca on pataudca
(
ptcaaudd,
ptcaaudt,
ptcaaudp,
ptcaaudr
);
revoke all on pataudca from public ; 
grant select on pataudca to public ; 
create table patcmcaf
(
ptcacode    char(9),
ptcades1    char(30),
ptcades2    char(30),
ptcaelos    decimal(4,0),
ptcaactv    decimal(1,0),
ptcspare    char(20),
lf          char(1)
);
create unique index patcmca1 on patcmcaf
(
ptcacode
);
create unique index patcmca2 on patcmcaf
(
ptcades1,
ptcades2,
ptcacode
);
revoke all on patcmcaf from public ; 
grant select on patcmcaf to public ; 
