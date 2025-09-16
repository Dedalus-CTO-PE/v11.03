create table webrtmaf
(
wbrtprid    char(8),
wbrttmnm    char(3),
wbrtdesc    char(35),
wbrtspid    char(50),
wbrtspar    char(80),
lf          char(1)
);
create unique index webrtma1 on webrtmaf
(
wbrtprid,
wbrttmnm
);
revoke all on webrtmaf from public ; 
grant select on webrtmaf to public ; 
