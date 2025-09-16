create table prsdtlaf
(
p2dturun    char(10),
p2dtadmn    char(8),
p2dtepss    char(1),
p2dtcods    char(1),
p2dtepsd    char(8),
p2dtcodd    char(8),
p2dthosp    char(3),
p2dtspar    char(39),
lf          char(1)
);
create unique index prsdtla1 on prsdtlaf
(
p2dturun,
p2dtadmn
);
create unique index prsdtla2 on prsdtlaf
(
p2dtadmn,
p2dturun
);
revoke all on prsdtlaf from public ; 
grant select on prsdtlaf to public ; 
