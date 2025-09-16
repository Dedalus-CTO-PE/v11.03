create table watseaaf
(
wtsauser    char(4),
wtsaspar    char(30),
lf          char(1)
);
create unique index watseaa1 on watseaaf
(
wtsauser
);
revoke all on watseaaf from public ; 
grant select on watseaaf to public ; 
