create table patoraaf
(
ptordate    char(8),
ptorfile    char(8),
lf          char(1)
);
create unique index patoraa1 on patoraaf
(
ptordate,
ptorfile
);
revoke all on patoraaf from public ; 
grant select on patoraaf to public ; 
