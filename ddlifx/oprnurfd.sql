create table oprnuraf
(
opnrcode    char(6),
opnrsnam    char(30),
opnrgnam    char(30),
opnrusr1    char(3),
opnrusr2    char(3),
opnrusr3    char(3),
opnrusr4    char(3),
opnrusr5    char(3),
opnrstat    decimal(1,0),
opnrspar    char(16),
lf          char(1)
);
create unique index oprnura1 on oprnuraf
(
opnrcode
);
create unique index oprnura2 on oprnuraf
(
opnrsnam,
opnrgnam,
opnrcode
);
revoke all on oprnuraf from public ; 
grant select on oprnuraf to public ; 
