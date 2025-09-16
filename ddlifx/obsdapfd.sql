create table obsdapaf
(
obdpvist    char(8),
obdpctyp    char(3),
obdpuniq    char(3),
obdpcode    char(10),
obdpdate    char(8),
obdptime    char(8),
obdpreas    char(3),
obdporea    char(3),
obdpspar    char(80),
lf          char(1)
);
create unique index obsdapa1 on obsdapaf
(
obdpvist,
obdpctyp,
obdpuniq
);
revoke all on obsdapaf from public ; 
grant select on obsdapaf to public ; 
