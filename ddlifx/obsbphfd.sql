create table obsbphaf
(
obbpvisn    char(8),
obbpline    char(3),
obbpdesc    char(127),
obbpspar    char(127),
lf          char(1)
);
create unique index obsbpha1 on obsbphaf
(
obbpvisn,
obbpline
);
revoke all on obsbphaf from public ; 
grant select on obsbphaf to public ; 
