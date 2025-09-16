create table patcmpaf
(
dptcpcmf    char(2),
ptcp1pcd    char(9),
ptcp2pcd    char(9),
ptcp1mcd    char(9),
ptcp2mcd    char(9),
ptcp3mcd    char(9),
ptcpspr1    char(52),
lf          char(1)
);
create unique index patcmpa1 on patcmpaf
(
dptcpcmf,
ptcp1pcd,
ptcp2pcd
);
create unique index patcmpa2 on patcmpaf
(
ptcp1pcd,
ptcp2pcd,
dptcpcmf
);
revoke all on patcmpaf from public ; 
grant select on patcmpaf to public ; 
