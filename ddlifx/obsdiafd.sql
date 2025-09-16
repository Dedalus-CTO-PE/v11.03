create table obsdiaaf
(
obdivisn    char(8),
obdiline    char(3),
obdidiag    char(127),
obdispar    char(127),
lf          char(1)
);
create unique index obsdiaa1 on obsdiaaf
(
obdivisn,
obdiline
);
revoke all on obsdiaaf from public ; 
grant select on obsdiaaf to public ; 
