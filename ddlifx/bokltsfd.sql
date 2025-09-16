create table bokltsaf
(
bklsseid    char(4),
bklsdesc    char(35),
bklsdeps    char(1),
bklsstdt    char(8),
bklsendt    char(8),
bklsspar    char(30),
lf          char(1)
);
create unique index bokltsa1 on bokltsaf
(
bklsseid
);
revoke all on bokltsaf from public ; 
grant select on bokltsaf to public ; 
