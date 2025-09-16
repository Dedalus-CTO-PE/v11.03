create table prioutaf
(
protsite    char(6),
protctyp    char(6),
protclid    char(6),
protmedp    char(6),
lf          char(1)
);
create unique index priouta1 on prioutaf
(
protsite,
protctyp,
protclid
);
revoke all on prioutaf from public ; 
grant select on prioutaf to public ; 
