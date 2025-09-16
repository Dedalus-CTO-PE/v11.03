create table outharaf
(
othasite    char(6),
othaclin    char(6),
othadate    char(8),
othastrt    char(5),
dothaslo    char(3),
othaattm    char(5),
othaspar    char(26),
lf          char(1)
);
create unique index outhara1 on outharaf
(
othasite,
othaclin,
othadate,
othastrt,
dothaslo
);
create unique index outhara2 on outharaf
(
othasite,
othaclin,
othadate,
othastrt,
othaattm,
dothaslo
);
revoke all on outharaf from public ; 
grant select on outharaf to public ; 
