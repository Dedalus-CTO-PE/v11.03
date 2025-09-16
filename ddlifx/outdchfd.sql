create table outdchaf
(
otdcslty    char(3),
otdcregr    char(1),
otdciflg    char(2),
otdcitmn    char(9),
otdcsubn    char(3),
otdcwcrt    char(10),
otdcdcrt    char(8),
otdctcrt    char(8),
otdcwupd    char(10),
otdcdupd    char(8),
otdctupd    char(8),
otdcspar    char(40),
lf          char(1)
);
create unique index outdcha1 on outdchaf
(
otdcslty,
otdcregr
);
revoke all on outdchaf from public ; 
grant select on outdchaf to public ; 
