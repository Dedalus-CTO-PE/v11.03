create table oprpeiaf
(
oppeunid    char(10),
oppetmno    char(1),
oppecode    char(6),
doppecnt    char(2),
oppequan    decimal(8,0),
oppechrg    char(1),
oppebrok    char(1),
oppespar    char(13),
lf          char(1)
);
create unique index oprpeia1 on oprpeiaf
(
oppeunid,
oppetmno,
doppecnt
);
create unique index oprpeia2 on oprpeiaf
(
oppecode,
oppeunid,
oppetmno,
doppecnt
);
revoke all on oprpeiaf from public ; 
grant select on oprpeiaf to public ; 
