create table pridvaaf
(
dprdvrun    char(4),
prdvinvn    char(8),
prdvitmn    char(9),
prdvdate    char(8),
prdvtime    char(8),
prdvbulk    char(3),
prdvtype    decimal(1,0),
prdvamou    decimal(14,2),
prdvdoct    char(6),
prdvspar    char(8),
lf          char(1)
);
create unique index pridvaa1 on pridvaaf
(
dprdvrun,
prdvinvn,
prdvitmn
);
create unique index pridvaa2 on pridvaaf
(
prdvdate,
prdvinvn,
prdvitmn
);
revoke all on pridvaaf from public ; 
grant select on pridvaaf to public ; 
