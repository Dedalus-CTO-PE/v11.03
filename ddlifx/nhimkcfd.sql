create table nhimkcaf
(
nhmkktyp    char(2),
nhmkkitm    char(6),
nhmkkkwd    char(15),
nhmkspar    char(22),
lf          char(1)
);
create unique index nhimkca1 on nhimkcaf
(
nhmkktyp,
nhmkkitm,
nhmkkkwd
);
create unique index nhimkca2 on nhimkcaf
(
nhmkkkwd,
nhmkktyp,
nhmkkitm
);
revoke all on nhimkcaf from public ; 
grant select on nhimkcaf to public ; 
