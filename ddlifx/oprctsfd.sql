create table oprctsaf
(
opctdate    char(8),
opctclin    char(6),
opctperd    char(1),
opctuser    char(3),
opctncas    decimal(6,0),
opctnopr    decimal(6,0),
opcttime    decimal(6,0),
opctdofw    decimal(1,0),
opctspar    char(7),
lf          char(1)
);
create unique index oprctsa1 on oprctsaf
(
opctdate,
opctclin,
opctperd,
opctuser
);
revoke all on oprctsaf from public ; 
grant select on oprctsaf to public ; 
