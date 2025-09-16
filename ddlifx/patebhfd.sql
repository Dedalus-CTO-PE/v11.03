create table patebhaf
(
ptehbthn    char(8),
ptehhfgp    char(6),
ptehstdt    char(8),
pteheddt    char(8),
ptehbhtl    decimal(14,2),
ptehtrib    decimal(6,0),
ptehdtbc    char(8),
ptehtmbc    char(8),
ptehoper    char(4),
dpteheet    char(1),
ptehefnm    char(18),
dptehflg    char(2),
ptehspar    char(16),
lf          char(1)
);
create unique index patebha1 on patebhaf
(
ptehbthn
);
create unique index patebha2 on patebhaf
(
dptehflg,
ptehbthn
);
revoke all on patebhaf from public ; 
grant select on patebhaf to public ; 
