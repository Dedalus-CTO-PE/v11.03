create table sincidaf
(
siidcat     char(7),
siidsup     char(5),
siidlin     char(3),
siidcom     char(78),
siidspa     char(10),
lf          char(1)
);
create unique index sincida1 on sincidaf
(
siidcat,
siidsup,
siidlin
);
revoke all on sincidaf from public ; 
grant select on sincidaf to public ; 
