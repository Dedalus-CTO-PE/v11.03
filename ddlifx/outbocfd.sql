create table outbokcf
(
dobaoutn    char(8),
otbcrdat    char(8),
otbcspar    char(53),
lf          char(1)
);
create unique index outbokc1 on outbokcf
(
dobaoutn
);
create unique index outbokc2 on outbokcf
(
otbcrdat,
dobaoutn
);
revoke all on outbokcf from public ; 
grant select on outbokcf to public ; 
