create table priaudaf
(
praddebt    char(8),
dpradscn    char(2),
pradprac    char(6),
pradrecp    char(12),
dpradtcn    char(3),
praddate    char(8),
pradtime    char(8),
pradoper    char(4),
pradport    decimal(2,0),
pradamou    decimal(14,2),
pradmeth    decimal(1,0),
praddraw    char(30),
pradbank    char(30),
pradbrnc    char(30),
pradspar    char(15),
lf          char(1)
);
create unique index priauda1 on priaudaf
(
praddebt,
dpradscn,
pradprac,
pradrecp,
dpradtcn
);
revoke all on priaudaf from public ; 
grant select on priaudaf to public ; 
