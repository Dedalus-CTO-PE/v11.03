create table bokbudaf
(
dbkbuboo    char(8),
bkbudate    char(8),
bkbutime    char(8),
bkbuoper    char(4),
bkbuport    char(2),
bkbuspar    char(19),
lf          char(1)
);
create unique index bokbuda1 on bokbudaf
(
dbkbuboo
);
create unique index bokbuda2 on bokbudaf
(
bkbudate,
dbkbuboo
);
revoke all on bokbudaf from public ; 
grant select on bokbudaf to public ; 
