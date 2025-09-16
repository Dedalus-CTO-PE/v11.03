create table outcdcaf
(
otcdsite    char(6),
otcdctyp    char(6),
otcddiag    char(9),
otcddesc    char(70),
otcdicd     char(9),
otcdactv    char(1),
otcdcdat    char(8),
otcdctim    char(8),
otcdcuid    char(10),
otcdudat    char(8),
otcdutim    char(8),
otcduuid    char(10),
otcdspar    char(30),
lf          char(1)
);
create unique index outcdca1 on outcdcaf
(
otcdsite,
otcdctyp,
otcddiag
);
create unique index outcdca2 on outcdcaf
(
otcdsite,
otcdctyp,
otcddesc,
otcddiag
);
revoke all on outcdcaf from public ; 
grant select on outcdcaf to public ; 
