create table patcmntf
(
dpcadmn     char(8),
dpclno      char(2),
pcline      char(70),
lf          char(1)
);
create unique index patcmnt1 on patcmntf
(
dpcadmn,
dpclno
);
revoke all on patcmntf from public ; 
grant select on patcmntf to public ; 
