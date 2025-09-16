create table patdepaf
(
ptdpdept    char(3),
ptdpward    char(3),
ptdpdate    char(8),
ptdpnbed    decimal(4,0),
ptdpspar    char(50),
lf          char(1)
);
create unique index patdepa1 on patdepaf
(
ptdpdept,
ptdpward,
ptdpdate
);
create unique index patdepa2 on patdepaf
(
ptdpward,
ptdpdept,
ptdpdate
);
revoke all on patdepaf from public ; 
grant select on patdepaf to public ; 
