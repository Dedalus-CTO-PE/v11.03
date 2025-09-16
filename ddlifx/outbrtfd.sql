create table outbrtaf
(
dotbrevn    char(8),
dotbrcnt    char(2),
otbrcode    char(9),
otbrspar    char(30),
lf          char(1)
);
create unique index outbrta1 on outbrtaf
(
dotbrevn,
dotbrcnt
);
revoke all on outbrtaf from public ; 
grant select on outbrtaf to public ; 
