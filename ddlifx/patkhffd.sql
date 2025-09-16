create table patkhfaf
(
pthffun     char(6),
pthftab     char(8),
pthfkwd     char(15),
pthfspar    char(20),
lf          char(1)
);
create unique index patkhfa1 on patkhfaf
(
pthffun,
pthftab,
pthfkwd
);
create unique index patkhfa2 on patkhfaf
(
pthfkwd,
pthffun,
pthftab
);
revoke all on patkhfaf from public ; 
grant select on patkhfaf to public ; 
