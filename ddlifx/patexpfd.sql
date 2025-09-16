create table patexcpf
(
dptexvis    char(8),
ptexidat    char(8),
ptexiopr    char(4),
ptexiprt    decimal(2,0),
ptexstat    decimal(1,0),
ptexddat    char(8),
ptexdopr    char(4),
ptexdprt    decimal(2,0),
ptexspar    char(20),
lf          char(1)
);
create unique index patexpa1 on patexcpf
(
dptexvis
);
revoke all on patexcpf from public ; 
grant select on patexcpf to public ; 
