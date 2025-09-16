create table patbrnsf
(
brdate      char(6),
bradmn      decimal(8,0),
brspare     char(18),
lf          char(1)
);
create unique index patbrns1 on patbrnsf
(
brdate
);
revoke all on patbrnsf from public ; 
grant select on patbrnsf to public ; 
