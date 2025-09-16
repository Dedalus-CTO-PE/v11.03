create table patgtuaf
(
dptgtadm    char(8),
ptgtgsta    decimal(1,0),
ptgtgstm    decimal(1,0),
ptgtspar    char(27),
lf          char(1)
);
create unique index patgtua1 on patgtuaf
(
dptgtadm
);
revoke all on patgtuaf from public ; 
grant select on patgtuaf to public ; 
