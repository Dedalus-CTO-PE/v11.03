create table patcraaf
(
ptcrrcpn    char(12),
dptcradm    char(8),
ptcrinvn    char(8),
dptcrtra    char(6),
ptcrdate    char(8),
ptcrport    char(2),
ptcroper    char(4),
ptcrspar    char(26),
lf          char(1)
);
create unique index patcraa1 on patcraaf
(
ptcrrcpn,
dptcradm,
ptcrinvn,
dptcrtra
);
create unique index patcraa2 on patcraaf
(
ptcrdate,
ptcrrcpn,
dptcradm,
ptcrinvn,
dptcrtra
);
revoke all on patcraaf from public ; 
grant select on patcraaf to public ; 
