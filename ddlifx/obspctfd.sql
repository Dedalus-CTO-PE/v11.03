create table obspctaf
(
obptslid    char(4),
obptsdir    char(80),
obpturlp    char(80),
obptroly    decimal(1,0),
obptcrdt    char(8),
obptcldt    char(8),
obptspar    char(30),
lf          char(1)
);
create unique index obspcta1 on obspctaf
(
obptslid
);
revoke all on obspctaf from public ; 
grant select on obspctaf to public ; 
