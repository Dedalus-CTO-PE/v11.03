create table prspmiaf
(
p2pmurno    char(8),
p2pmuniq    char(3),
p2pmvalu    char(35),
p2pmspar    char(50),
lf          char(1)
);
create unique index prspmia1 on prspmiaf
(
p2pmurno,
p2pmuniq
);
revoke all on prspmiaf from public ; 
grant select on prspmiaf to public ; 
