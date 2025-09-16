create table webpataf
(
wbptwuid    char(10),
wbptlnum    char(3),
wbpturno    char(8),
wbptvnum    char(8),
wbptdatc    char(8),
wbpttimc    char(5),
wbptrdat    char(8),
wbptstat    char(3),
wbptcom1    char(60),
wbptcom2    char(60),
wbptspar    char(80),
lf          char(1)
);
create unique index webpata1 on webpataf
(
wbptwuid,
wbptlnum,
wbpturno
);
revoke all on webpataf from public ; 
grant select on webpataf to public ; 
