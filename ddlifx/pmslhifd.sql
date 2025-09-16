create table pmslhiaf
(
pmlhvisn    char(8),
pmlhdate    char(8),
pmlhletn    char(3),
pmlhspar    char(50),
lf          char(1)
);
create unique index pmslhia1 on pmslhiaf
(
pmlhvisn,
pmlhdate,
pmlhletn
);
revoke all on pmslhiaf from public ; 
grant select on pmslhiaf to public ; 
