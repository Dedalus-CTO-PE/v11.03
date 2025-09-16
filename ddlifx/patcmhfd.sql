create table patcmhaf
(
ptcmourn    char(8),
ptcmnurn    char(8),
ptcmspar    char(20),
lf          char(1)
);
create unique index patcmha1 on patcmhaf
(
ptcmourn,
ptcmnurn
);
revoke all on patcmhaf from public ; 
grant select on patcmhaf to public ; 
